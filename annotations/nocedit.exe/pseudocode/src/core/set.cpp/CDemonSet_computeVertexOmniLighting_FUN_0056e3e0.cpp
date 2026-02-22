// Name: core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0
// Address: 0056e3e0
// Address Range: [[0056e3e0, 0056e5c1]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0(CDemonSet *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  int in_stack_00000010;
  float local_40;
  float local_3c;
  float local_38;
  
  iVar5 = 0;
  local_3c = 0.0;
  local_40 = 0.0;
  local_38 = 0.0;
  if (0 < g_OmniLightCount) {
    do {
      iVar1 = *(int *)((int)g_OmniLights + iVar5);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar4 = *(float *)(iVar1 + 0x104) - (*in_stack_00000008 + *in_stack_0000000c);
        fVar2 = *(float *)(iVar1 + 0x108) - (in_stack_00000008[1] + in_stack_0000000c[1]);
        fVar3 = *(float *)(iVar1 + 0x10c) - (in_stack_00000008[2] + in_stack_0000000c[2]);
        fVar4 = (float)(((int)(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) >> 1) + INT_02d7a7b8);
        if (fVar4 <= *(float *)(iVar1 + 0x11d4)) {
          fVar4 = 1.0 - fVar4 / *(float *)(iVar1 + 0x11d4);
          local_3c = *(float *)(iVar1 + 0x11c4) * fVar4 + local_3c;
          local_40 = *(float *)(iVar1 + 0x11c8) * fVar4 + local_40;
          local_38 = *(float *)(iVar1 + 0x11cc) * fVar4 + local_38;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < g_OmniLightCount * 4);
  }
  if (g_OmniLightCount == 0) {
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
  g_RenderVertexBuffer[in_stack_00000010].z = (int)ROUND(ROUND(local_3c)) << 8;
  g_RenderVertexBuffer[in_stack_00000010].r = (int)ROUND(ROUND(local_40)) << 8;
  g_RenderVertexBuffer[in_stack_00000010].g = (int)ROUND(ROUND(local_38)) << 8;
  return;
}
