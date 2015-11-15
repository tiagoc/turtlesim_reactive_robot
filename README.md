# turtlesim_reactive_robot

Simple reactive robot using ROS and Turtlesim.
Developed for a Robotics course.


### Installation intructions:

* Make sure your environment is ok - http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment
* Create a package
```
cd ~/catkin_ws/src
catkin_create_pkg turtlesim_reactive_robot
cd ~/catkin_ws
catkin_make
```
* Clone the source file to this folder


### To run the software

* Open a terminal for each of the following commands:
```
roscore
rosrun turtlesim turtlesim_node
rosrun turtlseim_reactive_robot robot_reactive_robot_node
```

