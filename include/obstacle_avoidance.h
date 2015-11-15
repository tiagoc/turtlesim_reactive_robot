/******************************************************************************
  Code based on a STDR sample. Credits bellow.
  Altered by Tiago Cruzeiro & Maria Soutelo.
                                   ------------

   STDR Simulator - Simple Two DImensional Robot Simulator
   Copyright (C) 2013 STDR Simulator
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA

   Authors :
   * Manos Tsardoulias, etsardou@gmail.com
   * Aris Thallas, aris.thallas@gmail.com
   * Chris Zalidis, zalidis@gmail.com
******************************************************************************/
#ifndef STDR_OBSTACLE_AVOIDANCE_SAMPLE
#define STDR_OBSTACLE_AVOIDANCE_SAMPLE

#include <iostream>
#include <cstdlib>
#include <cmath>

#include <ros/package.h>
#include "ros/ros.h"

#include <stdr_msgs/RobotIndexedVectorMsg.h>

#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/Range.h>

/**
@namespace stdr_samples
@brief The main namespace for STDR Samples
**/
namespace stdr_samples
{
  class ObstacleAvoidance
  {
    private:
      sensor_msgs::LaserScan scan_;
      ros::Subscriber subscriber_;
      ros::NodeHandle n_;
      std::string laser_topic_;
      std::string speeds_topic_;
      ros::Publisher cmd_vel_pub_;

    public:
      ObstacleAvoidance(int argc,char **argv);
      ~ObstacleAvoidance(void);
      void callback(const sensor_msgs::LaserScan& msg);
  };
}

#endif
