// Name: core_baron.cpp_CBaron_FUN_004136b0
// Address: 004136b0
// Address Range: [[004136b0, 004139f7]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_FUN_004136b0(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_004136b0(CBaron *this_ptr)

{
  CCharacter *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  CVector3f aCStack_140 [10];
  byte auStack_c0 [56];
  CBaron *pCStack_88;
  byte auStack_80 [24];
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  byte auStack_44 [8];
  float local_3c;
  float local_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float local_14;
  
  this_ptr_00 = (CCharacter *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base);
  if (this_ptr_00 == (CCharacter *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr,(CVector3f *)(auStack_44 + 4),
             &(this_ptr_00->base).location.position);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)(auStack_80 + 4),(CVector3f *)(auStack_44 + 4));
  if ((CVector3f *)(auStack_44 + 4) != pCVar1) {
    auStack_44._4_4_ = pCVar1->x;
    local_3c = pCVar1->y;
    local_38 = pCVar1->z;
  }
  local_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_3c);
  local_14 = local_3c;
  if ((local_3c < (float)-0.78539816337500001) || (0.78539816337500001 < (double)local_3c)) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8ea0(g_CFireEffectPtr);
  }
  else {
    __arrinit(&stack0xfffffeb8,10,&g_CVectorTypeInfo);
    iVar2 = (*((this_ptr_00->base).vtable._ub)->getTargetPoints)
                      ((CDemonActor *)this_ptr_00,(CVector3f *)&stack0xfffffeb8);
    iVar3 = rand();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       ((CDemonActor *)this_ptr_00,(CVector3f *)(auStack_c0 + 0x34),
                        aCStack_140 + iVar3 % iVar2);
    if (&CStack_20 != pCVar1) {
      CStack_20.x = pCVar1->x;
      CStack_20.y = pCVar1->y;
      CStack_20.z = pCVar1->z;
    }
    iVar3 = rand();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       ((CDemonActor *)this_ptr_00,&CStack_50,aCStack_140 + iVar3 % iVar2);
    if ((CVector3f *)auStack_44 != pCVar1) {
      auStack_44._0_4_ = pCVar1->x;
      auStack_44._4_4_ = pCVar1->y;
      local_3c = pCVar1->z;
    }
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_5c,&g_ZeroVector,
                        (CMatrix3x4f *)
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices[INT_008224cc]
                        .m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_68,pCVar1);
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       ((CVector3f *)auStack_80,&g_ZeroVector,
                        (CMatrix3x4f *)
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices[INT_008224d0]
                        .m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_2c,pCVar1);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"baron-attack.wav");
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_c0);
  auStack_c0._48_4_ = 6;
  auStack_c0._4_4_ = 100.0;
  auStack_c0._52_4_ = this_ptr;
  pCStack_88 = (CBaron *)this_ptr->unk5;
  if (pCStack_88 == (CBaron *)0x0) {
    pCStack_88 = this_ptr;
  }
  (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,(SDamageInfo *)auStack_c0);
  this_ptr_00->stagger_amount = 3.0;
  return;
}
