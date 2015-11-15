# turtlesim_reactive_robot

Simple reactive robot using ROS and Turtlesim.
Developed for a Robotics course.


### Installation intructions:

* Make sure your environment is ok - http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment
* Create a package
```
cd ~/catkin_ws/src
catkin_create_pkg turtlesim_reactive_robot
```
* Clone or copy the source files to this folder
* Build the package with the following commands:
```
cd ~/catkin_ws
catkin_make
```


### To run the software

* Open a terminal for each of the following commands:
```
roscore
rosrun turtlesim turtlesim_node
rosrun turtlesim_reactive_robot robot_wander_node
```
