#ifndef _DURATION_CLASS_H_
#define _DURATION_CLASS_H_

class Duration {
   private:
    // here i initialise the private attribute that the coders cannot access.
    // variable for storing the time
    int time;

    // variable for the time a certain alarm could be set to
    int alarm;

    // variable for keeping track of an alarm and if it has been set
    bool alarmHasBeenSet;

   public:
    // initialising the two constructors we need, one with an parameter and one
    // without, aswell as the destructor.
    Duration();
    Duration(int t);
    ~Duration();

    // Function for getting the time
    int getDuration();

    // for ticking the clock, and returning if the an alarm has been set,
    // false if no alarm, true if alarm
    bool tick();

    // same as previous tick, however you can now add a certain amount of time
    bool tick(int dt);

    // Function used to set an alarm
    void setAlarm(int t);

    // Function used to evaluate the alarm (checking if it is set)
    bool checkAndUpdateAlarm();
};
#endif