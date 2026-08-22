#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/fstream.h"
#include "system/iostream.h"
#include "system/math.h"
#include "system/signal.h"
#include "system/stdio.h"
#include "system/strstream.h"
#include "system/time.h"
#include "system/watcom.h"
#include "system/windef.h"
#include "system/winnt.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x570000
// =============================================================================

int __watcallStack crt_stdio_c_closeUnsupported_FUN_00570007(void);
int __watcallStack crt_strstream_cpp_strstreambuf_overflow_FUN_0057000d(strstreambuf *this_ptr,int character);
int __watcallStack crt_strstream_cpp_strstreambuf_underflow_FUN_00570075(strstreambuf *this_ptr);
strstreambuf * __watcallStack crt_strstream_cpp_strstreambuf_setbuf_FUN_005700c0(strstreambuf *this_ptr,char *ignored_buffer,int allocation_size);
int __watcallStack crt_strstream_cpp_strstreambuf_seekoff_FUN_005700d0(strstreambuf *this_ptr,int seek_distance,int seek_mode,int flags);
void __watcallStack crt_iostream_cpp_streambuf_seekoff_FUN_005701af(streambuf *this_ptr,int off,int dir,int which);
int __watcallStack crt_strstream_cpp_strstreambuf_sync_FUN_005701cc(void);
strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_dtor_FUN_005701cf(strstreambuf *this_ptr,uint flags);
strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_ctor_FUN_00570248(strstreambuf *this_ptr);
int __watcallStack crt_strstream_cpp_strstreambuf_doallocate_FUN_00570272(strstreambuf *this_ptr);
void __cdecl crt_iostream_cpp_ios_freeBufferChain_FUN_00570410(ios *stream_ptr);
filebuf * __cdecl crt_fstream_cpp_filebuf_ctor_FUN_0057042d(filebuf *this_ptr);
filebuf * __watcallStack crt_fstream_cpp_filebuf_dtor_FUN_00570449(filebuf *this_ptr,uint flags);
void crt_unknown_c_FUN_00570510(int param_1,undefined4 *param_2,undefined4 *param_3);
void crt_unknown_c_FUN_00570554(uint param_1,byte *param_2);
int __cdecl crt_io_c_IsSpecialDevice_FUN_005705c0(int handle_index);
void crt_unknown_c_FUN_00570630(void);
double __cdecl crt_math_c_set_math_errno_FUN_005706aa(int errorFlags,double *valuePtr);
double __cdecl crt_math_c_process_math_error_FUN_005706dd(int errorFlags,double *value1,double *value2);
double __mathinternal crt_math_c_handle_math_error_FUN_005707db(void);
char * __cdecl crt_string_c_strpbrk_FUN_00570870(char *str,char *char_set);
void crt_unknown_c_FUN_005708c0(FILETIME *param_1,LPWORD param_2,LPWORD param_3);
time_t __cdecl crt_time_c_dos_datetime_to_time_t_FUN_005709b0(WORD dos_date,WORD dos_time);
time_t __cdecl crt_time_c__time_FUN_00570a30(time_t *time);
int crt_unknown_c_FUN_00570a70(uint param_1);
int crt_unknown_c_FUN_00570ad0(char *param_1,uint *param_2,uint param_3);
int __cdecl crt_string_c_wcstombs_FUN_00570bd0(char *dest,wchar_t *src,SIZE_T dest_size);
int __watcallStack crt_string_c_mbstring_termination_check_FUN_00570ca0(char *str);
char * crt_unknown_c_FUN_00570ce0(char *param_1,char *param_2,ulong param_3);
undefined8 crt_unknown_c_FUN_00570d50(void);
undefined8 crt_unknown_c_FUN_00570eb0(void);
undefined8 crt_unknown_c_FUN_00570ebb(void);
undefined8 crt_unknown_c_FUN_00570ec8(void);
undefined8 crt_unknown_c_FUN_00570edb(void);
undefined8 crt_unknown_c_FUN_00570ef0(void);
undefined8 crt_unknown_c_FUN_00570f03(void);
undefined8 crt_unknown_c_FUN_00570f18(void);
undefined8 crt_unknown_c_FUN_00570f2b(void);
void crt_unknown_c_FUN_00570f60(void);
void crt_unknown_c_FUN_0057104c(void);
void crt_unknown_c_FUN_005710a0(char *param_1,char *param_2);
int __cdecl crt_stack_c_GetStackUsage_FUN_00571150(void);
void crt_unknown_c_FUN_00571160(void);
LPVOID crt_unknown_c_FUN_00571170(void);
undefined4 * crt_unknown_c_FUN_005711a8(void);
undefined4 crt_unknown_c_FUN_00571280(undefined4 param_1,int param_2);
void crt_unknown_c_FUN_005712ec(int param_1);
void crt_unknown_c_FUN_00571364(void);
void crt_unknown_c_FUN_005713a0(ThreadData *param_1);
void crt_unknown_c_FUN_005713d0(void);
int crt_unknown_c_FUN_005713e0(short *param_1);
undefined4 * crt_unknown_c_FUN_00571410(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 crt_unknown_c_FUN_00571440(short *param_1);
void __watcallRegister crt_stdio_c_InitializeConsoleHandles_FUN_0057146c(void);
HANDLE __watcallRegister crt_unknown_c_GetConsoleInputHandle_FUN_005714e0(void);
HANDLE __cdecl crt_unknown_c_GetConsoleOutputHandle_FUN_005714ec(void);
void __cdecl crt_unknown_c_ClearFPUExceptions_FUN_00571500(void);
SIGNAL_HANDLER_TYPE __watcallStack crt_signal_c_setSignalHandler_FUN_00571510(int signal_number,SIGNAL_HANDLER_TYPE new_handler_type);
SIGNAL_HANDLER_TYPE __watcallStack crt_signal_c_getSignalHandler_FUN_00571564(int signal_number);
undefined4 crt_unknown_c_FUN_00571588(int param_1);
SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_005715ac(int param_1,int param_2);
BOOL __stdcall crt_signal_c_consoleCtrlHandler_FUN_005715d0(DWORD dwCtrlType);
undefined4 crt_unknown_c_FUN_00571630(void);
BOOL __watcallRegister crt_signal_c_registerConsoleHandler_FUN_00571668(void);
bool crt_signal_c_unregisterConsoleHandler_FUN_00571694(void);
int __cdecl crt_signal_c_raiseFPE_FUN_005716d8(int fpe_code);
SIGNAL_HANDLER_TYPE crt_unknown_c_FUN_00571718(int param_1,int param_2);
int __watcallStack crt_signal_c_processSignal_FUN_005717d8(int signal_number);
undefined2 crt_unknown_c_FUN_00571858(void);
void crt_unknown_c_FUN_0057189c(void);
void crt_unknown_c_FUN_005718c4(void);
ulonglong __watcallRegister crt_math_c_udivmod64_FUN_00571a9d(ulonglong dividend,ulonglong divisor);
void __cdecl crt_unknown_c_None_FUN_00571b2c(byte *param_1,undefined8 *param_2);
void crt_unknown_c_FUN_00571b8e(void);
int crt_unknown_c_FUN_00571bd0(void);
undefined4 crt_unknown_c_FUN_00571bdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7);
int __watcallStack crt_stdio_c_fgetc_buffered_FUN_00571c60(_FILE *stream);
uint crt_unknown_c_FUN_00571cc6(int *param_1);
streambuf * __watcallStack crt_iostream_cpp_streambuf_setbuf_FUN_00571d4f(streambuf *this_ptr,void *buffer_start,int buffer_size);
streambuf * __watcallStack crt_iostream_cpp_streambuf_destructor_FUN_00571d9f(streambuf *this_ptr);
int __watcallStack crt_iostream_cpp_doallocate_FUN_00571dc7(streambuf *this_ptr);
void __watcallStack crt_iostream_cpp_setBuffer_FUN_00571df8(streambuf *this_ptr,void *new_buffer,void *buffer_end,int ownership_flag);
int __watcallStack crt_iostream_cpp_validateBufferSeek_FUN_00571e75(int seek_distance,int whence,char *buffer_start,char *current_ptr,char *buffer_end1,char *buffer_end2);
void * __watcallStack crt_unknown_c_streambuf_allocBuffer_FUN_00571ee0(uint size);
void __watcallStack crt_unknown_c_freeBuffer_FUN_00571ef0(void *buffer);
int __watcallStack crt_fstream_cpp_filebuf_pbackfail_FUN_00571efe(filebuf *this_ptr,int character);
int __watcallStack crt_fstream_cpp_filebuf_overflow_FUN_00571fd1(filebuf *this_ptr,int character);
int __watcallStack crt_fstream_cpp_filebuf_underflow_FUN_005721d7(filebuf *this_ptr);
streambuf * __watcallStack crt_fstream_cpp_filebuf_setbuf_FUN_005722dc(filebuf *this_ptr,char *buffer_ptr,int buffer_size);
int __watcallStack crt_fstream_cpp_filebuf_seekoff_FUN_00572338(filebuf *this_ptr,long offset,int direction,int mode);
int __watcallStack crt_fstream_cpp_filebuf_sync_FUN_005723ae(filebuf *this_ptr);
void __cdecl crt_math_c_print_error_message_FUN_005729e8(int errorType,char *errorData);
double __cdecl crt_math_c_report_math_error_FUN_00572a35(MathErrorContext *errorCtx);
char * __cdecl crt_string_c_char_in_set_FUN_00572a90(char *charset,wchar_t wc);
int __watcallStack crt_time_c_get_local_time_FUN_00572b00(_tm *tm_output);
void crt_unknown_c_FUN_00572b70(void);
void crt_unknown_c_FUN_00572d50(byte *param_1,byte *param_2);
char * crt_unknown_c_FUN_00572d90(char *param_1);
int crt_unknown_c_FUN_00572e00(byte *param_1,byte *param_2);
undefined4 crt_unknown_c_FUN_00572e60(void);
void crt_unknown_c_FUN_00572e64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void crt_unknown_c_FUN_00572e88(void);
void crt_unknown_c_FUN_00572e90(undefined4 param_1);
void crt_unknown_c_FUN_00572ea0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
uint crt_unknown_c_FUN_00572ef0(uint param_1,uint param_2);
int __cdecl crt_io_c_extend_file_for_append_FUN_00572f40(int fd);
int __cdecl crt_io_c_write_FUN_0057301c(int fd,void *buffer,SIZE_T count);
uint __cdecl crt_unknown_c_ReadFileBytesMaybe_FUN_005733e0(uint param_1,char *param_2,DWORD param_3);
undefined4 crt_unknown_c_FUN_00573650(void);
int __cdecl crt_stdio_c_fputs_FUN_00573660(char *str,_FILE *file);
long __cdecl crt_stdlib_c_strtol_internal_FUN_00573720(char *str,char **endptr,int base,int is_signed);
long __cdecl crt_stdlib_c_strtol_FUN_005738ac(char *str,char **endptr,int base);
int __cdecl crt_stdlib_c_charToDigit_FUN_005738c8(char ch);
int __cdecl crt_env_c_putenv_internal_FUN_00573930(char *envstr);
int __cdecl crt_env_c_updateEnvironTable_FUN_00573afc(char *envstr);
int __cdecl crt_env_c_findEnvVar_FUN_00573ca0(char *name,int delete_flag);
void crt_unknown_c_FUN_00573db0(wchar_t param_1);
void crt_unknown_c_FUN_00573e30(undefined4 *param_1);
HANDLE crt_unknown_c_FUN_00573ed0(undefined4 param_1,int param_2,undefined4 param_3);
void crt_unknown_c_FUN_00573fc8(void);
undefined4 crt_unknown_c_FUN_00573ffb(void);
int crt_unknown_c_FUN_00574000(char *param_1);
int crt_unknown_c_FUN_00574030(wchar_t *param_1,char *param_2,int param_3);
int crt_unknown_c_FUN_005740b0(wchar_t *param_1);
undefined4 crt_unknown_c_FUN_00574264(short *param_1);
int crt_unknown_c_FUN_00574404(short *param_1,int param_2);
wchar_t __watcallStack crt_locale_c_fullwidth_toupper_FUN_00574520(wchar_t character);
short * crt_unknown_c_FUN_00574540(short *param_1,short param_2);
BOOL crt_unknown_c_FUN_00574570(LPCWSTR param_1,LPCWSTR param_2);
void crt_unknown_c_FUN_00574680(void);
int crt_unknown_c_FUN_005746f0(int param_1);
int __watcallStack crt_locale_c_islower_multibyte_FUN_00574710(wchar_t character);
int __watcallStack crt_locale_c_ismultibyte_FUN_00574760(wchar_t character);
int __watcallStack crt_locale_c_istrailbyte_FUN_005747b0(uchar byte_value);
undefined4 crt_iostream_cpp_streambuf_seekoff_FUN_005747f0(void);
int __watcallStack crt_iostream_cpp_streambuf_sync_FUN_005747f6(streambuf *streambuf_ptr);

