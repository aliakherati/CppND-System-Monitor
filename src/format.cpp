#include <string>

#include "format.h"

using std::string;

string Format::ElapsedTime(long seconds) {
  int hour = seconds/3600.0;
  int minute = (seconds - hour*3600.0)/60.0;
  int sec = seconds - minute*60.0 - hour*3600.0;
  
  char time[10];
  sprintf(time, "%02u:%02u:%02u", hour, minute, sec);
  return time;
}
