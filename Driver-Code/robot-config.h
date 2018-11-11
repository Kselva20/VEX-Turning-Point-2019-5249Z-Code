vex::brain Brain;
vex::controller MainUser = vex::controller();
vex::controller SecondUser = vex::controller(vex::controllerType::partner);

vex::motor Claw = vex::motor(vex::PORT10,vex::gearSetting::ratio18_1,false);

vex::motor RightChassis = vex::motor(vex::PORT8,vex::gearSetting::ratio18_1,true);
vex::motor LeftChassis = vex::motor(vex::PORT3,vex::gearSetting::ratio18_1,false);

vex::motor RightLift = vex::motor(vex::PORT6,vex::gearSetting::ratio18_1,false);
vex::motor LeftLift = vex::motor(vex::PORT5,vex::gearSetting::ratio18_1,true);

vex::motor ConveyorBelt = vex::motor(vex::PORT4,vex::gearSetting::ratio18_1,true);

vex::motor FlywheelTop = vex::motor(vex::PORT2,vex::gearSetting::ratio18_1,true);
vex::motor FlywheelBot = vex::motor(vex::PORT1,vex::gearSetting::ratio18_1,false);
