// Name: core_set.cpp_CDemonSet_FUN_0056e3e0
// Address: 0056e3e0
// Address Range: [[0056e3e0, 0056e5c1]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056e3e0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056e3e0(CDemonSet *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  int in_stack_00000010;
  float local_40;
  float local_3c;
  float local_38;
  
  iVar4 = DAT_02d7a7b8;
  iVar6 = 0;
  local_3c = 0.0;
  local_40 = 0.0;
  local_38 = 0.0;
  if (0 < DAT_03277d80) {
    do {
      iVar1 = *(int *)((int)&DAT_03277d84 + iVar6);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar5 = *(float *)(iVar1 + 0x104) - (*in_stack_00000008 + *in_stack_0000000c);
        fVar2 = *(float *)(iVar1 + 0x108) - (in_stack_00000008[1] + in_stack_0000000c[1]);
        fVar3 = *(float *)(iVar1 + 0x10c) - (in_stack_00000008[2] + in_stack_0000000c[2]);
        fVar5 = (float)(((int)(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2) >> 1) + DAT_02d7a7b8);
        if (fVar5 <= *(float *)(iVar1 + 0x11d4)) {
          fVar5 = 1.0 - fVar5 / *(float *)(iVar1 + 0x11d4);
          local_3c = *(float *)(iVar1 + 0x11c4) * fVar5 + local_3c;
          local_40 = *(float *)(iVar1 + 0x11c8) * fVar5 + local_40;
          local_38 = *(float *)(iVar1 + 0x11cc) * fVar5 + local_38;
        }
      }
      iVar6 = iVar6 + 4;
    } while (iVar6 < DAT_03277d80 * 4);
  }
  if (DAT_03277d80 == 0) {
    local_40 = 128.0;
    local_38 = 128.0;
    local_3c = 128.0;
  }
  if ((float)255 < local_3c) {
    local_3c = 255.0;
  }
  if ((float)255 < local_40) {
    local_40 = 255.0;
  }
  if ((float)255 < local_38) {
    local_38 = 255.0;
  }
  fVar7 = (float10)local_38;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)local_3c);
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)local_40);
  g_RenderVertexBuffer[in_stack_00000010].light = (float)((int)ROUND(dVar8) << 8);
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  g_RenderVertexBuffer[in_stack_00000010].color = (int)ROUND(dVar9) << 8;
  g_RenderVertexBuffer[in_stack_00000010].fog = (float)((int)ROUND(dVar8) << 8);
  DAT_02d7a7b8 = iVar4;
  return;
}
