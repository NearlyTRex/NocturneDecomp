// Name: core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
// Address: 00522a50
// Address Range: [[00522a50, 00522bef]]
// Convention: __cdecl
// Signature: CVector3i * core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50(CVector3i * output, SMirrorReflection * reflection, CVector3i * point_a, CVector3i * point_b)

#include "nocturne.h"

CVector3i * __cdecl
core_mirror_cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
          (CVector3i *output,SMirrorReflection *reflection,CVector3i *point_a,CVector3i *point_b)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_ESI;
  int *piVar2;
  byte bVar3;
  int aiStackY_101c [1004];
  float local_54;
  byte local_50 [8];
  CVector3f local_48;
  int local_34;
  int local_30 [2];
  float local_28;
  byte local_24 [8];
  float local_1c;
  float local_18;
  float fStack_14;
  
  bVar3 = 0;
  local_24._0_4_ = (float)(int)(reflection->corner1).x * 0.00390625f;
  local_24._4_4_ = (float)(int)(reflection->corner1).y * 0.00390625f;
  local_1c = (float)(int)(reflection->corner1).z * 0.00390625f;
  local_54 = (float)point_a->x * 1.525879e-05f;
  local_50._0_4_ = (float)point_a->y * 1.525879e-05f;
  local_50._4_4_ = (float)point_a->z * 1.525879e-05f;
  if (&local_54 != (float *)&stack0xffffffa0) {
    local_54 = local_54 + (float)local_24._0_4_;
    local_50._0_4_ = (float)local_50._0_4_ + (float)local_24._4_4_;
    local_50._4_4_ = (float)local_50._4_4_ + local_1c;
  }
  pCVar1 = core_mirror_cpp_applyMirrorTransform_FUN_005222f0
                     ((SMirrorReflection *)output,&local_48,(CVector3f *)local_24);
  if ((CVector3f *)(local_24 + 4) != pCVar1) {
    local_24._4_4_ = pCVar1->x;
    local_1c = pCVar1->y;
    local_18 = pCVar1->z;
  }
  pCVar1 = core_mirror_cpp_applyMirrorTransform_FUN_005222f0
                     ((SMirrorReflection *)output,(CVector3f *)&fStack_14,(CVector3f *)local_50);
  if ((CVector3f *)(local_50 + 4) != pCVar1) {
    local_50._4_4_ = pCVar1->x;
    local_48.x = pCVar1->y;
    local_48.y = pCVar1->z;
  }
  local_24._0_4_ = local_48.x - local_18;
  local_24._4_4_ = local_48.y - fStack_14;
  local_28 = (float)local_50._4_4_ - local_1c;
  if ((float *)(local_50 + 4) != &local_28) {
    local_50._4_4_ = (float)local_50._4_4_ - local_1c;
    local_48.x = local_48.x - local_18;
    local_48.y = local_48.y - fStack_14;
  }
  local_34 = (int)ROUND((float)local_50._4_4_ * 65536f);
  local_30[0] = (int)ROUND(local_48.x * 65536f);
  local_30[1] = (int)ROUND(local_48.y * 65536f);
  piVar2 = (int *)((int)unaff_ESI + (uint)bVar3 * -8 + 4);
  unaff_ESI->x = (int)ROUND((float)local_50._4_4_ * 65536f);
  *piVar2 = local_30[(uint)bVar3 * -2];
  piVar2[(uint)bVar3 * -2 + 1] = local_30[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  return unaff_ESI;
}
