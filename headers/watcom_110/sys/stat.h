/*
 *  sys/stat.h	Equates and prototype for fstat, stat functions
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _STAT_H_INCLUDED
#define _STAT_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _MAX_NAME
#define _MAX_NAME 13	/* maximum length of file name (with extension) */
#endif

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED_
#ifdef __cplusplus
typedef long char wchar_t;
#else
typedef unsigned short wchar_t;
#endif
#endif

#ifndef __TYPES_H_INCLUDED
 #include <sys/types.h>
#endif

#if defined(_M_IX86)
  #pragma pack(__push,1);
#else
  #pragma pack(__push,8);
#endif

struct _stat {
	dev_t	st_dev; 	/* disk drive file resides on */
	ino_t	st_ino; 	/* this inode's #, not used for DOS */
	unsigned short st_mode; /* file mode */
	short	st_nlink;	/* # of hard links */
	unsigned long  st_uid;	/* user-id, always 'root' */
	short	st_gid; 	/* group-id, always 'root' */
	dev_t	st_rdev;	/* should be device type */
				/* but same as st_dev for the time being */
	off_t	st_size;	/* total file size */
	time_t	st_atime;	/* should be file last access time */
	time_t	st_mtime;	/* file last modify time */
	time_t	st_ctime;	/* should be file last status change time */
	time_t			st_btime; /* last archived date and time */
	unsigned long		st_attr;  /* file attributes */
					       /* next 4 fields Netware only */
	unsigned long		st_archivedID; /* user/object ID that last archived file*/
	unsigned long		st_updatedID;  /* user/object ID that last updated file*/
	unsigned short		st_inheritedRightsMask;
	unsigned char		st_originatingNameSpace;
	unsigned char		st_name[_MAX_NAME]; /* ASCIIZ filename */
};

struct stat {
	dev_t	st_dev; 	/* disk drive file resides on */
	ino_t	st_ino; 	/* this inode's #, not used for DOS */
	unsigned short st_mode; /* file mode */
	short	st_nlink;	/* # of hard links */
	unsigned long  st_uid;	/* user-id, always 'root' */
	short	st_gid; 	/* group-id, always 'root' */
	dev_t	st_rdev;	/* should be device type */
				/* but same as st_dev for the time being */
	off_t	st_size;	/* total file size */
	time_t	st_atime;	/* should be file last access time */
	time_t	st_mtime;	/* file last modify time */
	time_t	st_ctime;	/* should be file last status change time */
	time_t			st_btime; /* last archived date and time */
	unsigned long		st_attr;  /* file attributes */
					       /* next 4 fields Netware only */
	unsigned long		st_archivedID; /* user/object ID that last archived file*/
	unsigned long		st_updatedID;  /* user/object ID that last updated file*/
	unsigned short		st_inheritedRightsMask;
	unsigned char		st_originatingNameSpace;
	unsigned char		st_name[_MAX_NAME]; /* ASCIIZ filename */
};

struct _wstat {
	dev_t	st_dev; 	/* disk drive file resides on */
	ino_t	st_ino; 	/* this inode's #, not used for DOS */
	unsigned short st_mode; /* file mode */
	short	st_nlink;	/* # of hard links */
	unsigned long  st_uid;	/* user-id, always 'root' */
	short	st_gid; 	/* group-id, always 'root' */
	dev_t	st_rdev;	/* should be device type */
				/* but same as st_dev for the time being */
	off_t	st_size;	/* total file size */
	time_t	st_atime;	/* should be file last access time */
	time_t	st_mtime;	/* file last modify time */
	time_t	st_ctime;	/* should be file last status change time */
	time_t			st_btime; /* last archived date and time */
	unsigned long		st_attr;  /* file attributes */
					       /* next 4 fields Netware only */
	unsigned long		st_archivedID; /* user/object ID that last archived file*/
	unsigned long		st_updatedID;  /* user/object ID that last updated file*/
	unsigned short		st_inheritedRightsMask;
	unsigned char		st_originatingNameSpace;
	wchar_t			st_name[_MAX_NAME]; /* wide char filename */
};

#ifdef __WATCOM_INT64__
struct _stati64 {
	dev_t	st_dev; 	/* disk drive file resides on */
	ino_t	st_ino; 	/* this inode's #, not used for DOS */
	unsigned short st_mode; /* file mode */
	short	st_nlink;	/* # of hard links */
	unsigned long  st_uid;	/* user-id, always 'root' */
	short	st_gid; 	/* group-id, always 'root' */
	dev_t	st_rdev;	/* should be device type */
				/* but same as st_dev for the time being */
	__int64	st_size;	/* total file size */
	time_t	st_atime;	/* should be file last access time */
	time_t	st_mtime;	/* file last modify time */
	time_t	st_ctime;	/* should be file last status change time */
	time_t			st_btime; /* last archived date and time */
	unsigned long		st_attr;  /* file attributes */
					       /* next 4 fields Netware only */
	unsigned long		st_archivedID; /* user/object ID that last archived file*/
	unsigned long		st_updatedID;  /* user/object ID that last updated file*/
	unsigned short		st_inheritedRightsMask;
	unsigned char		st_originatingNameSpace;
	unsigned char		st_name[_MAX_NAME]; /* ASCIIZ filename */
};

struct _wstati64 {
	dev_t	st_dev; 	/* disk drive file resides on */
	ino_t	st_ino; 	/* this inode's #, not used for DOS */
	unsigned short st_mode; /* file mode */
	short	st_nlink;	/* # of hard links */
	unsigned long  st_uid;	/* user-id, always 'root' */
	short	st_gid; 	/* group-id, always 'root' */
	dev_t	st_rdev;	/* should be device type */
				/* but same as st_dev for the time being */
	__int64	st_size;	/* total file size */
	time_t	st_atime;	/* should be file last access time */
	time_t	st_mtime;	/* file last modify time */
	time_t	st_ctime;	/* should be file last status change time */
	time_t			st_btime; /* last archived date and time */
	unsigned long		st_attr;  /* file attributes */
					       /* next 4 fields Netware only */
	unsigned long		st_archivedID; /* user/object ID that last archived file*/
	unsigned long		st_updatedID;  /* user/object ID that last updated file*/
	unsigned short		st_inheritedRightsMask;
	unsigned char		st_originatingNameSpace;
	wchar_t			st_name[_MAX_NAME]; /* wide char filename */
};
#endif

/* File attribute constants for st_mode field */
#define S_IFMT		0170000 /* type of file */
#define S_IFDIR 	0040000 /* directory */
#define S_IFCHR 	0020000 /* character special file */
#define S_IFFIFO	0010000 /* FIFO */
#define S_IFREG 	0100000 /* regular */
/* the following is not possible on PC */
#define S_ISBLK( m )	0
#define S_ISFIFO( m )	(((m) & S_IFMT) == S_IFFIFO)
#define S_ISCHR( m )	(((m) & S_IFMT) == S_IFCHR)
#define S_ISDIR( m )	(((m) & S_IFMT) == S_IFDIR)
#define S_ISREG( m )	(((m) & S_IFMT) == S_IFREG)

/* owner permission */
#define S_IRWXU 	0000700
#define S_IRUSR 	0000400
#define S_IWUSR 	0000200
#define S_IXUSR 	0000100
#define S_IREAD 	0000400
#define S_IWRITE	0000200
#define S_IEXEC 	0000100

/* group permission.  same as owner's on PC and PenPoint*/
#define S_IRWXG 	0000070
#define S_IRGRP 	0000040
#define S_IWGRP 	0000020
#define S_IXGRP 	0000010

/* other permission.  same as owner's on PC and PenPoint*/
#define S_IRWXO 	0000007
#define S_IROTH 	0000004
#define S_IWOTH 	0000002
#define S_IXOTH 	0000001

/* setuid, setgid, and sticky.	always false on PC */
#define S_ISUID 	0004000
#define S_ISGID 	0002000
#define S_ISVTX 	0001000

_WCRTLINK extern int fstat( int, struct stat * );
_WCRTLINK extern int _fstat( int, struct _stat * );
_WCRTLINK extern int stat( const char *, struct stat * );
_WCRTLINK extern int _stat( const char *, struct _stat * );

_WCRTLINK extern int _wstat( const wchar_t *, struct _wstat * );
_WCRTLINK extern int _wfstat( int, struct _wstat * );

#ifdef __WATCOM_INT64__
_WCRTLINK extern int _fstati64( int, struct _stati64 * );
_WCRTLINK extern int _wfstati64( int, struct _wstati64 * );
_WCRTLINK extern int _stati64( const char *, struct _stati64 * );
_WCRTLINK extern int _wstati64( const wchar_t *, struct _wstati64 * );
#endif

#pragma pack(__pop);
#ifdef __cplusplus
};
#endif
#endif
