// Name: core_scat.cpp_CScat_scoreAimTarget_FUN_004fda20
// Address: 004fda20
// Address Range: [[004fda20, 004fdcf0]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_CScat_scoreAimTarget_FUN_004fda20(CScat *this_ptr,CDemonActor *target,int hand_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_scat_cpp_CScat_scoreAimTarget_FUN_004fda20(CScat *this_ptr,CDemonActor *target,int hand_index)

{
  float fVar1;
  float fVar2;
  CCharacter *this_ptr_00;
  int iVar3;
  CBoundingBox3D *pCVar4;
  CVector3f local_f8 [10];
  CBoundingBox3D CStack_80;
  byte auStack_68 [12];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040d890
                          (target,g_CEnemyActorType_01bcdebc.name_hash);
  __arrinit(local_f8,10,&g_CVectorTypeInfo_005993b0);
  iVar3 = (*((target->vtable)._ub)->getTargetPoints)(target,local_f8);
  if ((iVar3 != 0) &&
     (((this_ptr_00 == (CCharacter *)0x0 ||
       (iVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr_00), iVar3 < 1))
      && (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                    ((CDemonActor *)this_ptr,&CStack_50,&(target->location).position),
         0.0 < CStack_50.z)))) {
    fVar2 = SQRT(CStack_50.z * CStack_50.z + CStack_50.x * CStack_50.x + CStack_50.y * CStack_50.y);
    fStack_20 = fVar2;
    iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(auStack_68,&CStack_50);
    fVar1 = *(float *)(iVar3 + 4);
    if (hand_index == 0) {
      if ((float)30 < fVar2) {
        return -0x40800000;
      }
      if (fVar1 < (float)-0.78149070982587099) {
        return -0x40800000;
      }
      if (1.56298141965174 < (double)fVar1) {
        return -0x40800000;
      }
    }
    else {
      if ((float)35 < fVar2) {
        return -0x40800000;
      }
      if (fVar1 < (float)-0.78539816337500001) {
        return -0x40800000;
      }
      if (1.57079632675 < (double)fVar1) {
        return -0x40800000;
      }
    }
    pCVar4 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                       ((CDemonActor *)this_ptr,&CStack_80);
    fStack_38 = (pCVar4->min).x + (pCVar4->max).x;
    fStack_34 = (pCVar4->min).y + (pCVar4->max).y;
    fStack_2c = fStack_38 * 0.5f;
    fStack_30 = (pCVar4->min).z + (pCVar4->max).z;
    fStack_28 = fStack_34 * 0.5f;
    fStack_24 = fStack_30 * 0.5f;
    fStack_5c = (this_ptr->base).base.base.location.position.x + fStack_2c;
    fStack_58 = (this_ptr->base).base.base.location.position.y + fStack_28;
    fStack_54 = (this_ptr->base).base.base.location.position.z + fStack_24;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(target,&CStack_44,local_f8);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)this_ptr);
    fStack_1c = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                 (0x01E57284,&fStack_5c,&CStack_44);
    fStack_14 = fStack_1c;
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    if ((fStack_1c <= 1.0) &&
       (target == *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18))) {
      return (int)fStack_20;
    }
  }
  return -0x40800000;
}
