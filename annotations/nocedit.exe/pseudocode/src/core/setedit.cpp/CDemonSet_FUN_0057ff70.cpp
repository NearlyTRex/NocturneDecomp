// Name: core_setedit.cpp_CDemonSet_FUN_0057ff70
// Address: 0057ff70
// Address Range: [[0057ff70, 005800cf]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_FUN_0057ff70(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_0057ff70(CDemonSet *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char *in_stack_00000008;
  int local_28;
  int local_24;
  char *local_1c;
  int local_18;
  int local_14;
  
  local_28 = 0;
  local_1c = in_stack_00000008;
  if (0 < g_WindowHeight) {
    local_24 = 0;
    do {
      local_14 = 0;
      if (0 < g_WindowWidth) {
        local_18 = 0;
        do {
          cVar1 = *local_1c;
          if (cVar1 != '\0') {
            puVar5 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_24) + local_18);
            uVar2 = ((*puVar5 & 0xff) + (*puVar5 >> 0x10 & 0xff) + (*puVar5 >> 8 & 0xff)) / 3;
            if (cVar1 == '\x01') {
              uVar3 = 0;
              uVar4 = uVar2;
            }
            else {
              uVar4 = (int)(uVar2 * 3) >> 2;
              uVar3 = (int)uVar2 >> 2;
              if (cVar1 != '\x02') {
                if (cVar1 == '\x03') {
                  uVar3 = uVar2 / 2;
                  uVar4 = uVar2 / 2;
                }
                else {
                  uVar3 = uVar4;
                  uVar4 = (int)uVar2 >> 2;
                  if (cVar1 != '\x04') {
                    uVar3 = uVar2;
                    uVar4 = 0;
                  }
                }
              }
            }
            *puVar5 = uVar3 * 0x10000 + uVar4;
          }
          local_1c = local_1c + 1;
          local_18 = local_18 + 4;
          local_14 = local_14 + 1;
        } while (local_14 < g_WindowWidth);
      }
      local_24 = local_24 + 4;
      local_28 = local_28 + 1;
    } while (local_28 < g_WindowHeight);
  }
  return;
}
