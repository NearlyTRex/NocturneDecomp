// Name: core_gabriela.cpp_CGabriella_FUN_00498de0
// Address: 00498de0
// Address Range: [[00498de0, 004990b0]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_CGabriella_FUN_00498de0(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_gabriela_cpp_CGabriella_FUN_00498de0(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)

{
  float fVar1;
  float fVar2;
  CCharacter *this_ptr_00;
  int iVar3;
  EDeathState EVar4;
  CVector3f *pCVar5;
  CBoundingBox3D *pCVar6;
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
  
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040d890
                          (target_actor,g_CEnemyActorType_01bcdebc.name_hash);
  __arrinit(local_f8,10,&g_CVectorTypeInfo_005993b0);
  iVar3 = (*((target_actor->vtable)._ub)->getTargetPoints)(target_actor,local_f8);
  if ((iVar3 != 0) &&
     (((this_ptr_00 == (CCharacter *)0x0 ||
       (EVar4 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
       (int)EVar4 < 1)) &&
      (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                 ((CDemonActor *)this_ptr,&CStack_50,&(target_actor->location).position),
      0.0 < CStack_50.z)))) {
    fVar2 = SQRT(CStack_50.z * CStack_50.z + CStack_50.x * CStack_50.x + CStack_50.y * CStack_50.y);
    fStack_20 = fVar2;
    pCVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&CStack_68,&CStack_50)
    ;
    fVar1 = pCVar5->y;
    if (use_wider_fov == 0) {
      if ((float)30 < fVar2) {
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
      if ((float)35 < fVar2) {
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
    fStack_38 = (pCVar6->min).x + (pCVar6->max).x;
    fStack_34 = (pCVar6->min).y + (pCVar6->max).y;
    fStack_2c = fStack_38 * 0.5f;
    fStack_30 = (pCVar6->min).z + (pCVar6->max).z;
    fStack_28 = fStack_34 * 0.5f;
    fStack_24 = fStack_30 * 0.5f;
    CStack_5c.x = (this_ptr->base).base.base.location.position.x + fStack_2c;
    CStack_5c.y = (this_ptr->base).base.base.location.position.y + fStack_28;
    CStack_5c.z = (this_ptr->base).base.base.location.position.z + fStack_24;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(target_actor,&CStack_44,local_f8);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(g_CDemonSet_PTR_005be368,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
              (g_CDemonSet_PTR_005be368,(CDemonActor *)this_ptr);
    fStack_1c = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                          (g_CDemonSet_PTR_005be368,&CStack_5c,&CStack_44);
    fStack_14 = fStack_1c;
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
    if ((fStack_1c <= 1.0) && (target_actor == g_CDemonSet_PTR_005be368->collision_actor)) {
      return fStack_20;
    }
  }
  return -1.0;
}
