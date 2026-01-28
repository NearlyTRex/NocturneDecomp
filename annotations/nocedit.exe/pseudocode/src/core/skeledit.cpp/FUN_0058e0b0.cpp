// Name: core_skeledit.cpp_FUN_0058e0b0
// Address: 0058e0b0
// Address Range: [[0058e0b0, 0058e234]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_0058e0b0(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058e0b0(void)

{
  char cVar1;
  int iVar2;
  char *path;
  int iVar3;
  char *pcVar4;
  char *path_buffer;
  int in_stack_00000004;
  char *in_stack_00000008;
  char local_31c [260];
  char local_218 [256];
  char local_118 [256];
  int local_18;
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x334);
  if (4 < *(int *)(in_stack_00000004 + 0xb8)) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x912;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't add another texture set!");
  }
  local_18 = *(int *)(in_stack_00000004 + 0xb8);
  iVar3 = 0;
  *(int *)(in_stack_00000004 + 0xb8) = local_18 + 1;
  if (0 < *(int *)(in_stack_00000004 + 0xbc)) {
    local_14 = in_stack_00000004 + 0xc0;
    local_18 = local_18 * 0x1680;
    path = (char *)(in_stack_00000004 + 200);
    do {
      crt_string_c_splitpath_FUN_005ff178(path,(char *)0x0,(char *)0x0,local_118,(char *)0x0);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_218,in_stack_00000008,local_118);
      crt_file_c_makepath_FUN_005febfc(local_31c,(char *)0x0,(char *)0x0,local_218,".tga");
      iVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",local_31c);
      path_buffer = (char *)(iVar3 * 0x48 + local_14 + local_18 + 8);
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
                  (path_buffer,(char *)0x0,(char *)0x0,local_218,".raw");
      }
      iVar3 = iVar3 + 1;
      path = path + 0x48;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0xbc));
  }
  return;
}
