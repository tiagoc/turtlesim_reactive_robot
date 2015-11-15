# include "../include/obstacle_avoidance.h"

int main(int argc,char **argv)
{
  ros::init(argc, argv, "stdr_obstacle_avoidance", ros::init_options::AnonymousName);
  stdr_samples::ObstacleAvoidance obj(argc, argv);
  ros::spin();
  return 0;
}
