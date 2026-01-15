// Name: crt_io.c_parseFileInfo_FUN_0060e3b0
// Address: 0060e3b0
// Address Range: [[0060e3b0, 0060e4ed]]
// Convention: __cdecl
// Signature: void crt_io.c_parseFileInfo_FUN_0060e3b0(void)

#include "nocturne.h"

void __cdecl crt_io_c_parseFileInfo_FUN_0060e3b0(void)

{
  char *pcVar1;
  long file_handle_index;
  uint flags;
  char *pcVar2;
  char *pcVar3;
  char local_20 [12];
  long local_14;
  
  pcVar1 = crt_env_c_getenv_FUN_006013f0("C_FILE_INFO");
  if (pcVar1 != (char *)0x0) {
    for (; pcVar3 = pcVar1, *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      do {
        pcVar2 = pcVar3;
        if (*pcVar3 == ':') goto LAB_0060e3f3;
        if (*pcVar3 == '\0') break;
        pcVar2 = pcVar3 + 1;
        if (*pcVar2 == ':') goto LAB_0060e3f3;
        pcVar3 = pcVar3 + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_0060e3f3:
      crt_string_c_strncpy_FUN_00600f40(local_20,pcVar1,(int)pcVar2 - (int)pcVar1);
      local_20[(int)pcVar2 - (int)pcVar1] = '\0';
      pcVar2 = pcVar2 + 1;
      file_handle_index = crt_stdlib_c_strtol_FUN_0060edfc(local_20,(char **)0x0,0x10);
      pcVar1 = pcVar2;
      do {
        pcVar3 = pcVar1;
        if (*pcVar1 == ':') goto LAB_0060e43e;
        if (*pcVar1 == '\0') break;
        pcVar3 = pcVar1 + 1;
        if (*pcVar3 == ':') goto LAB_0060e43e;
        pcVar1 = pcVar1 + 2;
      } while (*pcVar3 != '\0');
      pcVar3 = (char *)0x0;
LAB_0060e43e:
      crt_string_c_strncpy_FUN_00600f40(local_20,pcVar2,(int)pcVar3 - (int)pcVar2);
      local_20[(int)pcVar3 - (int)pcVar2] = '\0';
      pcVar3 = pcVar3 + 1;
      local_14 = crt_stdlib_c_strtol_FUN_0060edfc(local_20,(char **)0x0,0x10);
      pcVar2 = pcVar3;
      do {
        pcVar1 = pcVar2;
        if (*pcVar2 == '*') goto LAB_0060e48b;
        if (*pcVar2 == '\0') break;
        pcVar1 = pcVar2 + 1;
        if (*pcVar1 == '*') goto LAB_0060e48b;
        pcVar2 = pcVar2 + 2;
      } while (*pcVar1 != '\0');
      pcVar1 = (char *)0x0;
LAB_0060e48b:
      crt_string_c_strncpy_FUN_00600f40(local_20,pcVar3,(int)pcVar1 - (int)pcVar3);
      local_20[(int)pcVar1 - (int)pcVar3] = '\0';
      flags = crt_stdlib_c_strtol_FUN_0060edfc(local_20,(char **)0x0,0x10);
      crt_unknown_c_SetStdHandleToSomething_FUN_00608a1c();
      crt_io_c_setFileDescriptorFlags_FUN_00608908(file_handle_index,flags);
    }
    crt_env_c_putenv_internal_FUN_0060ee80("C_FILE_INFO=");
  }
  return;
}
