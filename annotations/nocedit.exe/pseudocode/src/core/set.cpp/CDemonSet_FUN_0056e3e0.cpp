// Name: core_set.cpp_CDemonSet_FUN_0056e3e0
// Address: 0056e3e0
// Address Range: [[0056e3e0, 0056e5c1]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056e3e0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056e3e0(CDemonSet *this_ptr)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  int in_stack_00000010;
  float local_40;
  float local_3c;
  float local_38;
  
  iVar7 = DAT_02d7a7b8;
  iVar9 = 0;
  local_3c = 0.0;
  local_40 = 0.0;
  local_38 = 0.0;
  if (0 < DAT_03277d80) {
    do {
      iVar1 = *(int *)((int)&DAT_03277d84 + iVar9);
      if ((*(uint *)(iVar1 + 0x11d4) & 0x7fffffff) != 0) {
        fVar8 = *(float *)(iVar1 + 0x104) - (*in_stack_00000008 + *in_stack_0000000c);
        fVar5 = *(float *)(iVar1 + 0x108) - (in_stack_00000008[1] + in_stack_0000000c[1]);
        fVar6 = *(float *)(iVar1 + 0x10c) - (in_stack_00000008[2] + in_stack_0000000c[2]);
        fVar8 = (float)(((int)(fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5) >> 1) + DAT_02d7a7b8);
        if (fVar8 <= *(float *)(iVar1 + 0x11d4)) {
          fVar8 = 1.0 - fVar8 / *(float *)(iVar1 + 0x11d4);
          local_3c = *(float *)(iVar1 + 0x11c4) * fVar8 + local_3c;
          local_40 = *(float *)(iVar1 + 0x11c8) * fVar8 + local_40;
          local_38 = *(float *)(iVar1 + 0x11cc) * fVar8 + local_38;
        }
      }
      iVar9 = iVar9 + 4;
    } while (SBORROW /* signed borrow */4(iVar9,DAT_03277d80 * 4) != iVar9 + DAT_03277d80 * -4 < 0);
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
  fVar8 = (float)255;
  bVar2 = NAN(local_38);
  bVar3 = local_38 < fVar8;
  bVar4 = local_38 == fVar8;
  if (!bVar3 && bVar4 == 0) {
    local_38 = 255.0;
  }
  fVar10 = (float10)local_3c;
  fVar11 = (float10)local_40;
  fVar12 = (float10)local_38;
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(in_stack_00000010,
                                       CONCAT22 /* combine 2-byte values */((short)((uint)(in_stack_00000010 * 0x30) >> 0x10),
                                                (ushort)bVar3 << 8 |
                                                (ushort)(bVar2 || NAN(fVar8)) << 10 |
                                                (ushort)bVar4 << 0xe)));
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar13 >> 0x20),(int)ROUND(fVar10)));
  g_RenderVertexBuffer[in_stack_00000010].light = (float)(SUB84 /* extract 2-byte value */(dVar13,0) << 8);
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar13 >> 0x20),(int)ROUND(fVar11)));
  g_RenderVertexBuffer[in_stack_00000010].color = SUB84 /* extract 2-byte value */(dVar13,0) << 8;
  g_RenderVertexBuffer[in_stack_00000010].fog = (float)((int)ROUND(fVar12) << 8);
  DAT_02d7a7b8 = iVar7;
  return;
}
