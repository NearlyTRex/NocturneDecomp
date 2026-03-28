// Name: core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004d6260
// Address: 004d6260
// Address Range: [[004d6260, 004d6530]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004d6260(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004d6260(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)

{
  float fVar3;
  CEnemy *this_ptr_00;
  int iVar3;
  EDeathState EVar4;
  CVector3f *pCVar5;
  CBoundingBox3D *pCVar6;
  float fVar4;
  CVector3f local_f8 [10];
  CBoundingBox3D CStack_80;
  CVector3f CStack_68;
  CVector3f CStack_5c;
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
  float fVar2;
  float fVar1;
  
  this_ptr_00 = (CEnemy *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          (target_actor,g_CEnemyClassInfo.name_hash);
  __arrinit(local_f8,10,&g_CVectorTypeInfo);
  iVar3 = (*((target_actor->vtable)._ub)->getTargetPoints)(target_actor,local_f8);
  if ((iVar3 != 0) &&
     (((this_ptr_00 == (CEnemy *)0x0 ||
       (EVar4 = (*(((this_ptr_00->base).base.vtable._uc)->_uc).getDeathState)
                          ((CCharacter *)this_ptr_00), (int)EVar4 < 1)) &&
      (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                 ((CDemonActor *)this_ptr,&CStack_50,&(target_actor->location).position),
      0.0 < CStack_50.z)))) {
    fVar3 = SQRT(CStack_50.z * CStack_50.z + CStack_50.x * CStack_50.x + CStack_50.y * CStack_50.y);
    pCVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_68,&CStack_50)
    ;
    fVar1 = pCVar5->y;
    if (use_wider_fov == 0) {
      if ((float)30 < fVar3) {
        return -1.0;
      }
      if (fVar1 < (float)-0.78149070982587099) {
        return -1.0;
      }
      if (1.56298141965174 < (double)fVar1) {
        return -1.0;
      }
    }
    else {
      if ((float)35 < fVar3) {
        return -1.0;
      }
      if (fVar1 < (float)-0.78539816337500001) {
        return -1.0;
      }
      if (1.57079632675 < (double)fVar1) {
        return -1.0;
      }
    }
    pCVar6 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                       ((CDemonActor *)this_ptr,&CStack_80);
    CStack_5c.x = (this_ptr->base).base.base.location.position.x +
                  ((pCVar6->min).x + (pCVar6->max).x) * 0.5f;
    CStack_5c.y = (this_ptr->base).base.base.location.position.y +
                  ((pCVar6->min).y + (pCVar6->max).y) * 0.5f;
    CStack_5c.z = (this_ptr->base).base.base.location.position.z +
                  ((pCVar6->min).z + (pCVar6->max).z) * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(target_actor,&CStack_44,local_f8);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_5c,&CStack_44);
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    if ((fVar4 <= 1.0) && (target_actor == g_CDemonSetPtr->collision_actor)) {
      return fVar3;
    }
  }
  return -1.0;
}
