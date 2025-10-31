#pragma once

// Structure: stat
typedef struct stat {
    int st_dev;
    uint st_ino;
    ushort st_mode;
    short st_nlink;
    ulong st_uid;
    short st_gid;
    int st_rdev;
    long st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
    time_t st_btime;
    ulong st_attr;
    ulong st_archivedID;
    ulong st_updatedID;
    ushort st_inheritedRightsMask;
    uchar st_originatingNameSpace;
    uchar st_name[13];
} stat;

