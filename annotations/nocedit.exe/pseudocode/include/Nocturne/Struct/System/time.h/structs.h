#pragma once

// Structure: dst_rule
typedef struct dst_rule {
    int seconds;
    int minutes;
    int hours;
    int day;
    int month;
    int week;
    int day_of_year;
    int rule_type;
} dst_rule;

// Structure: tm
typedef struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
} tm;

