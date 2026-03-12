// Name: crt_io.c_parseFileInfo_FUN_0060e3b0
// Address: 0060e3b0
// Address Range: [[0060e3b0, 0060e4ed]]
// Convention: __cdecl
// Signature: void __cdecl crt_io_c_parseFileInfo_FUN_0060e3b0(void)

#include "nocturne.h"

void __cdecl parseFileInfo(void)

{
  char *pcVar1;
  long file_handle_index;
  long lVar1;
  uint flags;
  char *pcVar4;
  char *pcVar2;
  char *pcVar3;
  char *pcVar5;
  char *pcVar6;
  char local_20 [12];
  long local_14;
  
  pcVar1 = getenv("C_FILE_INFO");
  if (pcVar1 != (char *)0x0) {
    while (pcVar4 = pcVar1, *pcVar1 != '\0') {
      do {
        pcVar2 = pcVar4;
        if (*pcVar4 == ':') goto LAB_0060e3f3;
        if (*pcVar4 == '\0') break;
        pcVar2 = pcVar4 + 1;
        if (*pcVar2 == ':') goto LAB_0060e3f3;
        pcVar4 = pcVar4 + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_0060e3f3:
      _strncpy(local_20,pcVar1,(int)pcVar2 - (int)pcVar1);
      local_20[(int)pcVar2 - (int)pcVar1] = '\0';
      pcVar4 = pcVar2 + 1;
      file_handle_index = strtol(local_20,(char **)0x0,0x10);
      pcVar5 = pcVar4;
      do {
        pcVar3 = pcVar5;
        if (*pcVar5 == ':') goto LAB_0060e43e;
        if (*pcVar5 == '\0') break;
        pcVar3 = pcVar5 + 1;
        if (*pcVar3 == ':') goto LAB_0060e43e;
        pcVar5 = pcVar5 + 2;
      } while (*pcVar3 != '\0');
      pcVar3 = (char *)0x0;
LAB_0060e43e:
      _strncpy(local_20,pcVar4,(int)pcVar3 - (int)pcVar4);
      local_20[(int)pcVar3 - (int)pcVar4] = '\0';
      pcVar4 = pcVar3 + 1;
      lVar1 = strtol(local_20,(char **)0x0,0x10);
      pcVar5 = pcVar4;
      do {
        pcVar6 = pcVar5;
        if (*pcVar5 == '*') goto LAB_0060e48b;
        if (*pcVar5 == '\0') break;
        pcVar6 = pcVar5 + 1;
        if (*pcVar6 == '*') goto LAB_0060e48b;
        pcVar5 = pcVar5 + 2;
      } while (*pcVar6 != '\0');
      pcVar6 = (char *)0x0;
LAB_0060e48b:
      _strncpy(local_20,pcVar4,(int)pcVar6 - (int)pcVar4);
      local_20[(int)pcVar6 - (int)pcVar4] = '\0';
      flags = strtol(local_20,(char **)0x0,0x10);
      SetStdHandleToSomething(lVar1,file_handle_index);
      setFileDescriptorFlags(file_handle_index,flags);
      pcVar1 = pcVar6 + 1;
    }
    putenv_internal("C_FILE_INFO=");
  }
  return;
}
