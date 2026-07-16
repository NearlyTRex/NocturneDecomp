#pragma once

// Function prototypes for crt/stdio.cpp
// Generated from Ghidra function signatures

// Original: crt_stdio.c__fclose_FUN_10005430
// Address: 10005430
int __cdecl ::fclose(_FILE *file);

// Original: crt_stdio.c__fclose_lk_FUN_10005470
// Address: 10005470
int __cdecl ::fclose_lk(_FILE *file);

// Original: crt_stdio.c_fprintf_FUN_100054d0
// Address: 100054d0
int __cdecl fprintf(_FILE *file,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: crt_stdio.c__fsopen_FUN_10005520
// Address: 10005520
_FILE * __cdecl ::fsopen(char *filename,char *mode,int sh_flag);

// Original: crt_stdio.c_fopen_FUN_10005560
// Address: 10005560
_FILE * __cdecl fopen(char *filename,char *mode);

// Original: crt_stdio.c__sprintf_FUN_10005630
// Address: 10005630
int __cdecl ::sprintf(char *dest,char *format);

// Original: crt_stdio.c__lock_file2_FUN_10005a70
// Address: 10005a70
void __cdecl ::lock_file2(int index,void *stream);

// Original: crt_stdio.c__unlock_file2_FUN_10005ae0
// Address: 10005ae0
void __cdecl ::unlock_file2(int index,void *stream);

// Original: crt_stdio.c__freebuf_FUN_10005c50
// Address: 10005c50
void __cdecl ::freebuf(_FILE *file);

// Original: crt_stdio.c_fflush_FUN_10005c90
// Address: 10005c90
int __cdecl fflush(_FILE *file);

// Original: crt_stdio.c__fflush_lk_FUN_10005cd0
// Address: 10005cd0
int __cdecl ::fflush_lk(_FILE *file);

// Original: crt_stdio.c__flush_FUN_10005d10
// Address: 10005d10
int __cdecl ::flush(_FILE *file);

// Original: crt_stdio.c__flsall_FUN_10005d90
// Address: 10005d90
int __cdecl ::flsall(int flag);

// Original: crt_stdio.c__stbuf_FUN_10005e60
// Address: 10005e60
int __cdecl ::stbuf(_FILE *file);

// Original: crt_stdio.c__ftbuf_FUN_10005f00
// Address: 10005f00
void __cdecl ::ftbuf(int flag,_FILE *file);

// Original: crt_stdio.c__output_FUN_10005f40
// Address: 10005f40
int __cdecl ::output(_FILE *file_handle,char *fmt,va_list args);

// Original: crt_stdio.c_write_char_FUN_10006920
// Address: 10006920
void __cdecl write::char(int ch,_FILE *file,int *pnumwritten);

// Original: crt_stdio.c_write_multi_char_FUN_10006970
// Address: 10006970
void __cdecl write::multi_char(int ch,int count,_FILE *file,int *pnumwritten);

// Original: crt_stdio.c_write_string_FUN_100069b0
// Address: 100069b0
void __cdecl write::string(char *str,int len,_FILE *file,int *pnumwritten);

// Original: crt_stdio.c_get_int_arg_FUN_100069f0
// Address: 100069f0
int __cdecl get::int_arg(va_list *parg);

// Original: crt_stdio.c_get_int64_arg_FUN_10006a00
// Address: 10006a00
longlong __cdecl get::int64_arg(va_list *parg);

// Original: crt_stdio.c_get_short_arg_FUN_10006a20
// Address: 10006a20
short __cdecl get::short_arg(va_list *parg);

// Original: crt_stdio.c__openfile_FUN_10006a30
// Address: 10006a30
_FILE * __cdecl ::openfile(char *filename,char *mode,int sh_flag,_FILE *file);

// Original: crt_stdio.c__getstream_FUN_10006c40
// Address: 10006c40
_FILE * __cdecl ::getstream(void);

// Original: crt_stdio.c__forcdecpt_FUN_10006ef0
// Address: 10006ef0
void __cdecl ::forcdecpt(char *buf);

// Original: crt_stdio.c__cropzeros_FUN_10006f60
// Address: 10006f60
void __cdecl ::cropzeros(char *buf);

// Original: crt_stdio.c__positive_FUN_10006fc0
// Address: 10006fc0
int __cdecl ::positive(double *value);

// Original: crt_stdio.c__fassign_FUN_10006fe0
// Address: 10006fe0
void __cdecl ::fassign(int flag,void *value,char *str);

// Original: crt_stdio.c__cftoe_FUN_10007030
// Address: 10007030
errno_t __cdecl ::cftoe(double *value,char *buf,size_t size_in_bytes,int dec,int caps);

// Original: crt_stdio.c__cftoe2_FUN_100070b0
// Address: 100070b0
char * __cdecl ::cftoe2(char *buf,int dec,int caps,int *pflt,char is_g);

// Original: crt_stdio.c__cftof_FUN_100071a0
// Address: 100071a0
errno_t __cdecl ::cftof(double *value,char *buf,size_t size_in_bytes,int dec);

// Original: crt_stdio.c__cftof2_FUN_10007210
// Address: 10007210
char * __cdecl ::cftof2(char *buf,uint dec,int *pflt,char is_g);

// Original: crt_stdio.c__cftog_FUN_100072d0
// Address: 100072d0
void __cdecl ::cftog(double *value,char *buf,size_t size_in_bytes,int caps);

// Original: crt_stdio.c__cfltcvt_FUN_10007380
// Address: 10007380
void __cdecl ::cfltcvt(double *value,char *buf,int format,size_t size_in_bytes,int precision,int caps);

// Original: crt_stdio.c__shift_FUN_100073f0
// Address: 100073f0
void __cdecl ::shift(char *str,int dist);

// Original: crt_stdio.c__flsbuf_FUN_10007420
// Address: 10007420
int __cdecl ::flsbuf(int ch,_FILE *str);

// Original: crt_stdio.c__fptostr_FUN_1000a2c0
// Address: 1000a2c0
errno_t __cdecl ::fptostr(char *buf,size_t size_in_bytes,int digits,STRFLT pt_flt);

// Original: crt_stdio.c__fltout2_FUN_1000a350
// Address: 1000a350
STRFLT __cdecl ::fltout2(_CRT_DOUBLE dbl,STRFLT flt,char *result_str,size_t size_in_bytes);

// Original: crt_stdio.c__getbuf_FUN_1000a700
// Address: 1000a700
void __cdecl ::getbuf(_FILE *file);

// Original: crt_stdio.c___endstdio_FUN_1000ab70
// Address: 1000ab70
void __cdecl ::_endstdio(void);

// Original: crt_stdio.c__i10_output_FUN_1000cf50
// Address: 1000cf50
int __cdecl ::i10_output(int man_lo,uint man_hi,ushort exp_sign,int ndigits,byte flags,short *out);
