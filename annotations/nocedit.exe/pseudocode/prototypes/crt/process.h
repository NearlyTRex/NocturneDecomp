#pragma once

// Function prototypes for crt/process.cpp
// Generated from Ghidra function signatures

// Original: crt_process.c_getpid_FUN_006099c0
// Address: 006099c0
void __cdecl getpid(void);

// Original: crt_process.c_set_shell_execute_flag_FUN_00609c80
// Address: 00609c80
void __cdecl set::shell_execute_flag(char *buffer);

// Original: crt_process.c_spawnCommand_FUN_00609c90
// Address: 00609c90
int __watcallStack spawnCommand(int mode,char *cmdPath,char *cmdName,char *args,void *envp,int *result);

// Original: crt_process.c_spawnvp_FUN_0060ca20
// Address: 0060ca20
int __watcallStack spawnvp(int mode,char *cmdname,char **argv);

// Original: crt_process.c_spawnvp_with_path_search_FUN_0060e6a0
// Address: 0060e6a0
int __cdecl spawnvp::with_path_search(int mode,char *program,char **argv);

// Original: crt_process.c_spawnvp_FUN_0060f39c
// Address: 0060f39c
int __cdecl spawnvp(int mode,char *cmdname,char **argv);

// Original: crt_process.c_build_file_info_env_FUN_0060ffd0
// Address: 0060ffd0
char * __cdecl build::file_info_env(void);

// Original: crt_process.c_execv_FUN_006101f0
// Address: 006101f0
int __cdecl execv(int argc,char *program,char **argv);

// Original: crt_process.c_build_cmdline_FUN_00610258
// Address: 00610258
int __cdecl build::cmdline(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag);

// Original: crt_process.c_build_command_line_FUN_006103a4
// Address: 006103a4
void __cdecl build::command_line(char *program_name,char **argv,char *buffer,int skip_program_name);

// Original: crt_process.c_spawn_FUN_006105a0
// Address: 006105a0
int __cdecl spawn(int mode,char *cmdline,char *envblock,void *reserved);

// Original: crt_process.c_execvp_FUN_00610790
// Address: 00610790
int __cdecl execvp(int argc,char *program,char *arg1,char *arg2,...);
