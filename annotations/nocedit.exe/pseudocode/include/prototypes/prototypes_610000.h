#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/iostream.h"
#include "system/winnt.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x610000
// =============================================================================

int __cdecl crt_process_c_execv_FUN_006101f0(int argc,char *program,char **argv);
char * __cdecl crt_string_c_strcpy_advance_FUN_00610240(char *dest,char *src);
int __cdecl crt_process_c_build_cmdline_FUN_00610258(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag);
void __cdecl crt_process_c_build_command_line_FUN_006103a4(char *program_name,char **argv,char *buffer,int skip_program_name);
char * __cdecl crt_file_c_extract_path_component_FUN_00610400(char **component_ptr,char *buffer,char *source,char *buffer_end);
void __cdecl crt_file_c_splitpath_s_FUN_00610460(char *path,char *buffer,char *drive,char *dir,char *fname,char *ext);
int __cdecl crt_process_c_spawn_FUN_006105a0(int mode,char *cmdline,char *envblock,void *reserved,char **argv);
char * __cdecl crt_string_c_strcpy_FUN_00610760(char *dest,char *src);
int __cdecl crt_process_c_execvp_FUN_00610790(int argc,char *program,char *arg1,char *arg2,...);
int crt_unknown_c_FUN_00610970(int param_1);
int __watcallStack crt_locale_c_islower_multibyte_FUN_00610990(wchar_t character);
HANDLE __cdecl crt_io_c_get_handle_FUN_006109f0(int fd);
int __watcallStack crt_locale_c_ismultibyte_FUN_00610a20(wchar_t character);
int __watcallStack crt_locale_c_istrailbyte_FUN_00610a70(uchar byte_value);
int __watcallStack crt_iostream_cpp_streambuf_seekoff_FUN_00610ab0(streambuf *this_ptr,int offset,int direction,int mode);
int __watcallStack crt_iostream_cpp_streambuf_sync_FUN_00610ab6(streambuf *streambuf_ptr);

