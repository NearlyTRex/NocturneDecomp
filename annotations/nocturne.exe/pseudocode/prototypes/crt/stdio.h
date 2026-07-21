#pragma once

// Function prototypes for crt/stdio.cpp
// Generated from Ghidra function signatures

// Original: crt_stdio.c_fscanf_FUN_00563350
// Address: 00563350
void fscanf(undefined4 param_1,undefined4 param_2);

// Original: crt_stdio.c_fclose_FUN_00563380
// Address: 00563380
undefined4 __cdecl fclose(int param_1);

// Original: crt_stdio.c_fread_FUN_005636d0
// Address: 005636d0
uint __cdecl fread(char *param_1,uint param_2,int param_3,int *param_4);

// Original: crt_stdio.c_vsprintf_FUN_00563a08
// Address: 00563a08
void __cdecl vsprintf(int param_1,undefined4 param_2,undefined4 param_3);

// Original: crt_stdio.c_fwrite_FUN_00563a50
// Address: 00563a50
uint __cdecl fwrite(undefined4 *param_1,uint param_2,int param_3,int *param_4);

// Original: crt_stdio.c_sprintf_FUN_00563c90
// Address: 00563c90
void sprintf(undefined4 param_1,undefined4 param_2);

// Original: crt_stdio.c_fprintf_FUN_005644f0
// Address: 005644f0
void fprintf(undefined4 param_1,undefined4 param_2);

// Original: crt_stdio.c_fgetc_FUN_00564570
// Address: 00564570
uint __cdecl fgetc(undefined4 *param_1);

// Original: crt_stdio.c_ungetc_FUN_00564740
// Address: 00564740
uint __cdecl ungetc(uint param_1,int *param_2);

// Original: crt_stdio.c_fgets_FUN_00564b20
// Address: 00564b20
char * __cdecl fgets(char *param_1,int param_2,int param_3);

// Original: crt_stdio.c_fopen_FUN_0056568c
// Address: 0056568c
void __cdecl fopen(undefined4 param_1,undefined4 param_2);

// Original: crt_stdio.c_freopen_FUN_00565724
// Address: 00565724
undefined4 __cdecl freopen(undefined4 param_1,undefined1 *param_2,int param_3);

// Original: crt_stdio.c_remove_FUN_005657c0
// Address: 005657c0
void __watcallStack remove(undefined4 param_1);

// Original: crt_stdio.c_fseek_FUN_0056582c
// Address: 0056582c
undefined4 __cdecl fseek(undefined4 *param_1,int param_2,uint param_3);

// Original: crt_stdio.c_fflush_FUN_00565e59
// Address: 00565e59
void __cdecl fflush(int *param_1);

// Original: crt_stdio.c_sscanf_FUN_00566b5c
// Address: 00566b5c
void sscanf(undefined4 param_1,undefined4 param_2);

// Original: crt_stdio.c_fputc_FUN_00566cc0
// Address: 00566cc0
uint __cdecl fputc(uint param_1,int *param_2);

// Original: crt_stdio.c_ftell_FUN_00566e70
// Address: 00566e70
int __cdecl ftell(int param_1);

// Original: crt_stdio.c_rename_FUN_00566f00
// Address: 00566f00
undefined4 rename(LPCSTR param_1,LPCSTR param_2);
