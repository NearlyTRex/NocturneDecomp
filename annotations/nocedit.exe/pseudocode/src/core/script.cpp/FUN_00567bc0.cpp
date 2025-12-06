// Name: core_script.cpp_FUN_00567bc0
// Address: 00567bc0
// Address Range: [[00567bc0, 00567cfa]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567bc0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00567bc0(uint param_1, uint param_2) */

void core_script_cpp_FUN_00567bc0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CStrList *in_stack_00000014;
  int iStack_21a0;
  byte auStack_2138 [500];
  int aiStack_1f44 [1920];
  char acStack_144 [4];
  char acStack_140 [292];
  int local_1c;
  int local_18;
  int local_14;
  int iVar3;
  
  core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  local_1c = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    local_18 = 0;
    do {
      local_14 = local_18;
      iVar3 = 0;
      do {
        iVar1 = core_script_cpp_SCmdParse_parse_FUN_00561fd0();
        if ((2 < iVar1) && (iVar1 = 0, 0 < iStack_21a0)) {
          iVar2 = 0;
          do {
            if (*(int *)((int)aiStack_1f44 + iVar2) == 0xd) {
              crt_stdio_c_sprintf_FUN_005fdbd0
                        (acStack_144,"%s\tScript line %d",auStack_2138 + iVar2);
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000014,acStack_140);
            }
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 0x328;
          } while (iVar1 < iStack_21a0);
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 != 0x1e0);
      local_18 = local_18 + 8;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(in_stack_00000004 + 0x30));
  }
  return;
}
