// Name: core_trigger.cpp_CTrigger_getTargetPoints_FUN_0056efa0
// Address: 0056efa0
// Address Range: [[0056efa0, 0056f071]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_getTargetPoints_FUN_0056efa0(CTrigger *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_trigger_cpp_CTrigger_getTargetPoints_FUN_0056efa0(CTrigger *this_ptr,CVector3f *out_points_array)

{
  int iVar1;
  float unaff_EBX;
  float unaff_ESI;
  uint *puVar2;
  CBoundingBox3D *unaff_EDI;
  uint *puVar3;
  byte bVar4;
  float afStackY_1018 [1002];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar4 = 0;
  if (this_ptr->trigger_cause != TRIGGER_CAUSE_BULLET) {
    return 0;
  }
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_EDI);
  puVar2 = (uint *)&stack0xffffffb8;
  puVar3 = (uint *)&stack0xffffff98;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_18 = fStack_60 + fStack_54;
  fStack_14 = fStack_5c + fStack_50;
  fStack_10 = fStack_58 + fStack_4c;
  fStack_24 = fStack_60 + fStack_54;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_30 = fStack_24 * _DAT_005d6793;
  fStack_2c = fStack_20 * _DAT_005d6793;
  fStack_28 = fStack_1c * _DAT_005d6793;
  fStack_c = fStack_24 * _DAT_005d6793;
  *(uint *)(&stack0xfffffff8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8);
  *(uint *)(&stack0xfffffffc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (out_points_array != (CVector3f *)&stack0xfffffff4) {
    out_points_array->x = fStack_c;
    out_points_array->y = unaff_ESI;
    out_points_array->z = unaff_EBX;
  }
  return 1;
}
