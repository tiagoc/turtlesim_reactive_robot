# turtlesim_reactive_robot

Simple reactive robot using ROS and STDR_Simulator.
Developed for a Robotics course.

Looking for turtlesim? Well we were going to use it but ended up with STDR. We kept the name, tho. Let it go.


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
roslaunch stdr_launchers server_with_map_and_gui_plus_robot.launch
rosrun turtlesim_reactive_robot robot_wanderer_node robot0 laser_0
```
