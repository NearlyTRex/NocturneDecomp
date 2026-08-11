#pragma once

// Function prototypes for crt/stdio.cpp
// Generated from Ghidra function signatures

// Original: crt_stdio.c_fread_FUN_005fd990
// Address: 005fd990
SIZE_T __cdecl fread(void *buffer,SIZE_T size,SIZE_T count,_FILE *file);

// Original: crt_stdio.c_StringBufferCallback_FUN_005fdb90
// Address: 005fdb90
void __cdecl StringBufferCallback(StringOutputContext *context,char character);

// Original: crt_stdio.c_vsprintf_FUN_005fdba8
// Address: 005fdba8
int __cdecl vsprintf(char *buffer,char *format,va_list_t args);

// Original: crt_stdio.c_sprintf_FUN_005fdbd0
// Address: 005fdbd0
int __cdecl sprintf(char *buffer,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: crt_stdio.c_fwrite_FUN_005fdc00
// Address: 005fdc00
SIZE_T __cdecl fwrite(void *ptr,SIZE_T size,SIZE_T count,_FILE *file);

// Original: crt_stdio.c_fprintf_FUN_005fe6d0
// Address: 005fe6d0
int __cdecl fprintf(_FILE *file,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: crt_stdio.c_getc_helper_FUN_005fe700
// Address: 005fe700
int __cdecl getc::helper(scanf_state_t *state);

// Original: crt_stdio.c_ungetc_helper_FUN_005fe720
// Address: 005fe720
int __watcallStack ungetc::helper(int character,scanf_state_t *state);

// Original: crt_stdio.c_vfscanf_FUN_005fe738
// Address: 005fe738
int __cdecl vfscanf(_FILE *file,char *format,va_list_t args);

// Original: crt_stdio.c_fscanf_FUN_005fe7c0
// Address: 005fe7c0
int __cdecl fscanf(_FILE *file,char *format,...) __attribute__((format(scanf, 2, 3)));

// Original: crt_stdio.c_fgetc_FUN_005fe840
// Address: 005fe840
int __cdecl fgetc(_FILE *file);

// Original: crt_stdio.c_FillBufferAndGetChar_FUN_005fe910
// Address: 005fe910
int __watcallStack FillBufferAndGetChar(_FILE *file);

// Original: crt_stdio.c_FillInputBuffer_FUN_005fe940
// Address: 005fe940
int __watcallStack FillInputBuffer(_FILE *file);

// Original: crt_stdio.c_ungetc_FUN_005fea10
// Address: 005fea10
int __cdecl ungetc(int character,_FILE *stream);

// Original: crt_stdio.c_fgets_FUN_005fefd0
// Address: 005fefd0
char * __cdecl fgets(char *str,int num,_FILE *stream);

// Original: crt_stdio.c_printf_FUN_005ff0d0
// Address: 005ff0d0
int __cdecl printf(char *format,...) __attribute__((format(printf, 1, 2)));

// Original: crt_stdio.c_remove_FUN_005ff9d0
// Address: 005ff9d0
int __watcallStack remove(char *filename);

// Original: crt_stdio.c_seek_within_buffer_FUN_005ffa70
// Address: 005ffa70
int __cdecl seek::within_buffer(int offset,_FILE *file);

// Original: crt_stdio.c_seek_within_buffer_FUN_005ffab4
// Address: 005ffab4
int __cdecl seek::within_buffer(_FILE *file);

// Original: crt_stdio.c_fseek_FUN_005ffacc
// Address: 005ffacc
int __cdecl fseek(_FILE *file,long offset,int whence);

// Original: crt_stdio.c_string_getc_FUN_006000d0
// Address: 006000d0
int __cdecl string::getc(scanf_state_t *state);

// Original: crt_stdio.c_string_ungetc_FUN_006000f8
// Address: 006000f8
int __cdecl string::ungetc(int ch,scanf_state_t *state);

// Original: crt_stdio.c_vsscanf_FUN_00600100
// Address: 00600100
int __cdecl vsscanf(char *str,char *format,va_list_t args);

// Original: crt_stdio.c_sscanf_FUN_0060013c
// Address: 0060013c
int __cdecl sscanf(char *str,char *format,...) __attribute__((format(scanf, 2, 3)));

// Original: crt_stdio.c_formatTwoDigits_FUN_006002a0
// Address: 006002a0
void __cdecl formatTwoDigits(char *buffer,int value);

// Original: crt_stdio.c_fputc_FUN_006007a0
// Address: 006007a0
int __cdecl fputc(int character,_FILE *file);

// Original: crt_stdio.c_fflush_FUN_00600e29
// Address: 00600e29
void __cdecl fflush(_FILE *stream);

// Original: crt_stdio.c_setvbuf_FUN_00601490
// Address: 00601490
int __cdecl setvbuf(_FILE *stream_ptr,char *buffer_ptr,int buffer_mode,SIZE_T buffer_size);

// Original: crt_stdio.c_fflush_FUN_00601540
// Address: 00601540
int __cdecl fflush(_FILE *stream);

// Original: crt_stdio.c_ftell_FUN_00601560
// Address: 00601560
long __cdecl ftell(_FILE *file_handle);

// Original: crt_stdio.c_rename_FUN_006015d0
// Address: 006015d0
int __watcallStack rename(char *old_filename,char *new_filename);

// Original: crt_stdio.c_OpenModeStringParser_FUN_006017d0
// Address: 006017d0
int __cdecl OpenModeStringParser(char *mode_string,char *output_flags);

// Original: crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
// Address: 0060190c
_FILE * __cdecl OpenFileAndInitialize(char *filename,char mode_char,int parsed_mode_flags,int stage1_result,int additional_flags,_FILE *file_struct);

// Original: crt_stdio.c_fopenWithFlags_FUN_00601a20
// Address: 00601a20
_FILE * __cdecl fopenWithFlags(char *filename,char *mode,int flags);

// Original: crt_stdio.c_fopen_FUN_00601a7c
// Address: 00601a7c
_FILE * __cdecl fopen(char *filename,char *mode);

// Original: crt_stdio.c_freopen_FUN_00601b14
// Address: 00601b14
_FILE * __cdecl freopen(char *filename,char *mode,_FILE *stream);

// Original: crt_stdio.c_fclose_FUN_00601ea0
// Address: 00601ea0
int __cdecl fclose(_FILE *file_handle);

// Original: crt_stdio.c___CClose_FUN_00601ee4
// Address: 00601ee4
int __cdecl ::_CClose(_FILE *file_handle,int close_flags);

// Original: crt_stdio.c_fclose_FUN_00601fd0
// Address: 00601fd0
int __cdecl fclose(_FILE *file_handle,int force_close_flag);

// Original: crt_stdio.c_fprintf_FUN_006021c0
// Address: 006021c0
void __cdecl fprintf(_FILE *stream,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: crt_stdio.c_stream_setup_FUN_00605f20
// Address: 00605f20
int __watcallStack stream::setup(_FILE *stream,int operation_type);

// Original: crt_stdio.c_fgetcInternal_FUN_00605fad
// Address: 00605fad
_FILE * __watcallStack fgetcInternal(_FILE *stream,byte *output_byte);

// Original: crt_stdio.c_reportStreamError_FUN_00606020
// Address: 00606020
void __cdecl reportStreamError(FileEmbeddedData *embedded_data,uint error_flags);

// Original: crt_stdio.c_prepare_stream_for_write_FUN_00606055
// Address: 00606055
BOOL __cdecl prepare::stream_for_write(_FILE *stream);

// Original: crt_stdio.c_stream_flush_FUN_006060bb
// Address: 006060bb
_FILE * __watcallStack stream::flush(_FILE *stream);

// Original: crt_stdio.c_remove_FUN_00606600
// Address: 00606600
int __watcallStack remove(char *filename);

// Original: crt_stdio.c_lseek_FUN_00606690
// Address: 00606690
int __watcallStack lseek(int file_handle_index,long distance_to_move,int move_method);

// Original: crt_stdio.c_IntegerToString_FUN_00607d18
// Address: 00607d18
char * __cdecl IntegerToString(int value,char *buffer,int base);

// Original: crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
// Address: 00608ee0
void __cdecl DetectDeviceAndSetBuffering(_FILE *file);

// Original: crt_stdio.c_CreateFileVariadic_FUN_00609074
// Address: 00609074
int __cdecl CreateFileVariadic(char *filename,int access_mode,int share_mode,...);

// Original: crt_stdio.c_CreateFileImpl_FUN_006090a0
// Address: 006090a0
HANDLE __cdecl CreateFileImpl(char *filename,dword access_mode,dword share_mode,va_list_t *extra_args);

// Original: crt_stdio.c___allocfp_FUN_006092f0
// Address: 006092f0
_FILE * __cdecl ::_allocfp(int unused_param);

// Original: crt_stdio.c___freefp_FUN_006093b0
// Address: 006093b0
void __cdecl ::_freefp(_FILE *file_handle);

// Original: crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
// Address: 0060acf0
int __cdecl WideCharToSingleByte(wchar_t wide_char,char *output_buffer);

// Original: crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30
// Address: 0060ad30
void __cdecl ReportFloatingPointNotLoaded(void);

// Original: crt_stdio.c_flushFileBuffers_FUN_0060af00
// Address: 0060af00
int __watcallStack flushFileBuffers(int file_handle_index);

// Original: crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0
// Address: 0060b2e0
int __watcallStack DrainConsoleInputWithBuffering(HANDLE hConsoleInput);

// Original: crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8
// Address: 0060b3f8
int DrainConsoleInputAndSetup(void);

// Original: crt_stdio.c_WriteConsoleChar_FUN_0060b490
// Address: 0060b490
int __watcallStack WriteConsoleChar(int character);

// Original: crt_stdio.c_storeErrorState_FUN_0060b78e
// Address: 0060b78e
void __watcallStack storeErrorState(uint *destination,uint error_state);

// Original: crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
// Address: 0060b7a0
_FILE * __cdecl get::standard_file_handle(int fd);

// Original: crt_stdio.c_closeUnsupported_FUN_0060b9b7
// Address: 0060b9b7
int __watcallStack closeUnsupported(void);

// Original: crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc
// Address: 0060cdbc
void __watcallRegister InitializeConsoleHandles(void);

// Original: crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30
// Address: 0060ce30
HANDLE __watcallRegister GetConsoleInputHandle(void);

// Original: crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
// Address: 0060ce3c
HANDLE __cdecl GetConsoleOutputHandle(void);

// Original: crt_stdio.c_fgetc_buffered_FUN_0060d510
// Address: 0060d510
int __watcallStack fgetc::buffered(_FILE *stream);

// Original: crt_stdio.c_fputs_FUN_0060ebb0
// Address: 0060ebb0
int __cdecl fputs(char *str,_FILE *file);
