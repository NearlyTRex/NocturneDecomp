#pragma once

// Function prototypes for crt/stdio.cpp
// Generated from Ghidra function signatures

// Original: crt_stdio.c_fscanf_FUN_00563350
// Address: 00563350
int __cdecl fscanf(_FILE *file,char *format);

// Original: crt_stdio.c_fclose_FUN_00563380
// Address: 00563380
int __cdecl fclose(_FILE *file_handle);

// Original: crt_stdio.c_fread_FUN_005636d0
// Address: 005636d0
SIZE_T __cdecl fread(void *buffer,SIZE_T size,SIZE_T count,_FILE *file);

// Original: crt_stdio.c_vsprintf_FUN_00563a08
// Address: 00563a08
int __cdecl vsprintf(char *buffer,char *format,va_list_t args);

// Original: crt_stdio.c_fwrite_FUN_00563a50
// Address: 00563a50
SIZE_T __cdecl fwrite(void *ptr,SIZE_T size,SIZE_T count,_FILE *file);

// Original: crt_stdio.c_sprintf_FUN_00563c90
// Address: 00563c90
void sprintf(char *param_1,char *param_2);

// Original: crt_stdio.c_fprintf_FUN_005644f0
// Address: 005644f0
void fprintf(undefined4 param_1,undefined4 param_2);

// Original: crt_stdio.c_fgetc_FUN_00564570
// Address: 00564570
int __cdecl fgetc(_FILE *file);

// Original: crt_stdio.c_ungetc_FUN_00564740
// Address: 00564740
int __cdecl ungetc(int character,_FILE *stream);

// Original: crt_stdio.c_fgets_FUN_00564b20
// Address: 00564b20
char * __cdecl fgets(char *str,int num,_FILE *stream);

// Original: crt_stdio.c_fopen_FUN_0056568c
// Address: 0056568c
_FILE * __cdecl fopen(char *filename,char *mode);

// Original: crt_stdio.c_freopen_FUN_00565724
// Address: 00565724
_FILE * __cdecl freopen(char *filename,char *mode,_FILE *stream);

// Original: crt_stdio.c_remove_FUN_005657c0
// Address: 005657c0
int __watcallStack remove(char *filename);

// Original: crt_stdio.c_fseek_FUN_0056582c
// Address: 0056582c
int __cdecl fseek(_FILE *file,long offset,int whence);

// Original: crt_stdio.c_fflush_FUN_00565e59
// Address: 00565e59
void __cdecl fflush(_FILE *stream);

// Original: crt_stdio.c_sscanf_FUN_00566b5c
// Address: 00566b5c
int __cdecl sscanf(char *str,char *format);

// Original: crt_stdio.c_fputc_FUN_00566cc0
// Address: 00566cc0
int __cdecl fputc(int character,_FILE *file);

// Original: crt_stdio.c_ftell_FUN_00566e70
// Address: 00566e70
long __cdecl ftell(_FILE *file_handle);

// Original: crt_stdio.c_rename_FUN_00566f00
// Address: 00566f00
int __watcallStack rename(char *old_filename,char *new_filename);

// Original: crt_stdio.c___allocfp_FUN_00568560
// Address: 00568560
_FILE * __cdecl ::_allocfp(int unused_param);

// Original: crt_stdio.c___freefp_FUN_00568620
// Address: 00568620
void __cdecl ::_freefp(_FILE *file_handle);

// Original: crt_stdio.c_lseek_FUN_005689c0
// Address: 005689c0
int __watcallStack lseek(int file_handle_index,long distance_to_move,int move_method);

// Original: crt_stdio.c_stream_setup_FUN_0056b227
// Address: 0056b227
int __watcallStack stream::setup(_FILE *stream,int operation_type);

// Original: crt_stdio.c_fgetcInternal_FUN_0056b2b4
// Address: 0056b2b4
_FILE * __watcallStack fgetcInternal(_FILE *stream,byte *output_byte);

// Original: crt_stdio.c_reportStreamError_FUN_0056b327
// Address: 0056b327
void __cdecl reportStreamError(FileEmbeddedData *embedded_data,uint error_flags);

// Original: crt_stdio.c_prepare_stream_for_write_FUN_0056b35c
// Address: 0056b35c
BOOL __cdecl prepare::stream_for_write(_FILE *stream);

// Original: crt_stdio.c_stream_flush_FUN_0056b3c2
// Address: 0056b3c2
_FILE * __watcallStack stream::flush(_FILE *stream);

// Original: crt_stdio.c_CreateFileVariadic_FUN_0056b934
// Address: 0056b934
void CreateFileVariadic(char *param_1,dword param_2,dword param_3);

// Original: crt_stdio.c_CreateFileImpl_FUN_0056b960
// Address: 0056b960
HANDLE __cdecl CreateFileImpl(char *filename,dword access_mode,dword share_mode,va_list_t *extra_args);

// Original: crt_stdio.c_DetectDeviceAndSetBuffering_FUN_0056bbb0
// Address: 0056bbb0
void __cdecl DetectDeviceAndSetBuffering(_FILE *file);

// Original: crt_stdio.c_IntegerToString_FUN_0056dc68
// Address: 0056dc68
char * __cdecl IntegerToString(int value,char *buffer,int base);

// Original: crt_stdio.c_fflush_FUN_0056dd60
// Address: 0056dd60
int __cdecl fflush(_FILE *stream);

// Original: crt_stdio.c_flushFileBuffers_FUN_0056f1c0
// Address: 0056f1c0
int __watcallStack flushFileBuffers(int file_handle_index);

// Original: crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0
// Address: 0056f3a0
int __cdecl WideCharToSingleByte(wchar_t wide_char,char *output_buffer);

// Original: crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0056fa80
// Address: 0056fa80
int __watcallStack DrainConsoleInputWithBuffering(HANDLE hConsoleInput);

// Original: crt_stdio.c_DrainConsoleInputAndSetup_FUN_0056fb98
// Address: 0056fb98
undefined1 DrainConsoleInputAndSetup(void);

// Original: crt_stdio.c_WriteConsoleChar_FUN_0056fc30
// Address: 0056fc30
int __watcallStack WriteConsoleChar(int character);

// Original: crt_stdio.c_storeErrorState_FUN_0056fddd
// Address: 0056fddd
void __watcallStack storeErrorState(uint *destination,uint error_state);

// Original: crt_stdio.c_get_standard_file_handle_FUN_0056fdf0
// Address: 0056fdf0
_FILE * __cdecl get::standard_file_handle(int fd);

// Original: crt_stdio.c_closeUnsupported_FUN_00570007
// Address: 00570007
undefined4 closeUnsupported(void);

// Original: crt_stdio.c_InitializeConsoleHandles_FUN_0057146c
// Address: 0057146c
void __watcallRegister InitializeConsoleHandles(void);

// Original: crt_stdio.c_fgetc_buffered_FUN_00571c60
// Address: 00571c60
int __watcallStack fgetc::buffered(_FILE *stream);

// Original: crt_stdio.c_fputs_FUN_00573660
// Address: 00573660
int __cdecl fputs(char *str,_FILE *file);
