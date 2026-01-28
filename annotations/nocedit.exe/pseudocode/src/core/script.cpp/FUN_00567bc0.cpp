// Name: core_script.cpp_FUN_00567bc0
// Address: 00567bc0
// Address Range: [[00567bc0, 00567cfa]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00567bc0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00567bc0(uint param_1, uint param_2) */

void core_script_cpp_FUN_00567bc0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  CStrList *in_stack_00000008;
  int local_21a8;
  byte auStack_2140 [500];
  int aiStack_1f4c [1920];
  char local_14c [300];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  local_20 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    local_1c = 0;
    do {
      iVar1 = local_1c;
      local_18 = local_1c;
      local_14 = 0;
      do {
        iVar2 = core_script_cpp_SCmdParse_parse_FUN_00561fd0();
        if ((2 < iVar2) && (iVar2 = 0, 0 < local_21a8)) {
          iVar3 = 0;
          do {
            if (*(int *)((int)aiStack_1f4c + iVar3) == 0xd) {
              crt_stdio_c_sprintf_FUN_005fdbd0
                        (local_14c,"%s\tScript line %d",auStack_2140 + iVar3,
                         *(uint *)(*(int *)(in_stack_00000004 + 0x34) + iVar1));
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000008,local_14c);
            }
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 0x328;
          } while (iVar2 < local_21a8);
        }
        local_14 = local_14 + 4;
      } while (local_14 != 0x1e0);
      local_1c = local_1c + 8;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(in_stack_00000004 + 0x30));
  }
  return;
}
