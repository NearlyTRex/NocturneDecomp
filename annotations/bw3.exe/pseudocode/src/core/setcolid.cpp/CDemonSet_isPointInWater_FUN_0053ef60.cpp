// Name: core_setcolid.cpp_CDemonSet_isPointInWater_FUN_0053ef60
// Address: 0053ef60
// Address Range: [[0053ef60, 0053f0a3]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_0053ef60(CDemonSet *this_ptr,CVector3f *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_0053ef60(CDemonSet *this_ptr,CVector3f *point)

{
  CDemonActor *this_ptr_00;
  CDemonSet *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1014 [1004];
  CBoundingBox3D *in_stack_ffffffa4;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  int local_14;
  
  bVar5 = 0;
  if ((ABS(g_CWaterPtr->water_level_y) == 0.0) || (g_CWaterPtr->water_level_y <= point->y)) {
    local_14 = 0;
    pCVar1 = this_ptr;
    if (0 < this_ptr->actor_count) {
      do {
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (pCVar1->actors[0],g_CWaterActorClassInfo.name_hash);
        if (this_ptr_00 != (CDemonActor *)0x0) {
          core_actor_cpp_FUN_00408bf0(this_ptr_00,point);
          local_2c = local_20;
          *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_ffffffa4);
          puVar3 = (uint *)&stack0xffffffac;
          puVar4 = (uint *)&stack0xffffffbc;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          fStack_38 = fStack_38 + _DAT_005d0c72;
          if ((((fStack_3c <= fStack_24) && (fStack_38 <= local_20)) && (fStack_34 <= fStack_1c)) &&
             (((fStack_24 <= fStack_30 && (local_20 <= local_2c)) && (fStack_1c <= fStack_28)))) {
            return 1;
          }
        }
        local_14 = local_14 + 1;
        pCVar1 = (CDemonSet *)pCVar1->cameras;
      } while (local_14 < this_ptr->actor_count);
    }
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}
