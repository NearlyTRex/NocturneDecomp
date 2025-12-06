// Name: core_skeledit.cpp_FUN_0058e0b0
// Address: 0058e0b0
// Address Range: [[0058e0b0, 0058e234]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058e0b0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058e0b0
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,
               uint param_5,int param_6,int param_7,int param_8,uint param_9,
               char *param_10)

{
  char cVar1;
  int iVar2;
  char *path;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  char *path_buffer;
  char acStack_208 [4];
  char acStack_204 [8];
  char acStack_1fc [240];
  char acStack_10c [4];
  byte auStack_108 [252];
  int iStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x334);
  if (4 < *(int *)(param_7 + 0xb8)) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x912;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't add another texture set!");
  }
  iStack_c = *(int *)(param_8 + 0xb8);
  iVar3 = 0;
  *(int *)(param_8 + 0xb8) = iStack_c + 1;
  if (0 < *(int *)(param_8 + 0xbc)) {
    iStack_c = iStack_c * 0x1680;
    path = (char *)(param_8 + 200);
    do {
      crt_string_c_splitpath_FUN_005ff178(path,(char *)0x0,(char *)0x0,acStack_10c,(char *)0x0);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_208,param_10,auStack_108);
      crt_file_c_makepath_FUN_005febfc
                (&stack0xfffffcf8,(char *)0x0,(char *)0x0,acStack_204,".tga");
      iVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",&stack0xfffffcfc);
      path_buffer = (char *)(iVar3 * 0x48 + param_6 + unaff_EBX + 8);
      pcVar4 = path;
      if (iVar2 < 0) {
        do {
          cVar1 = *pcVar4;
          *path_buffer = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          path_buffer[1] = cVar1;
          path_buffer = path_buffer + 2;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
      }
      else {
        crt_file_c_makepath_FUN_005febfc
                  (path_buffer,(char *)0x0,(char *)0x0,acStack_1fc,".raw");
      }
      iVar3 = iVar3 + 1;
      path = path + 0x48;
    } while (iVar3 < *(int *)(param_8 + 0xbc));
  }
  return;
}
