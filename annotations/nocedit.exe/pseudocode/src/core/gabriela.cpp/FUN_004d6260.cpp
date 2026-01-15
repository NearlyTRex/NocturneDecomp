// Name: core_gabriela.cpp_FUN_004d6260
// Address: 004d6260
// Address Range: [[004d6260, 004d6530]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6260()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d6260(uint param_1, uint
   param_2, uint param_3) */

float core_gabriela_cpp_FUN_004d6260(void)

{
  float fVar1;
  float fVar2;
  CDemonActor *this_ptr;
  int iVar3;
  CVector3f *pCVar4;
  CBoundingBox3D *pCVar5;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  SCollisionInfo *in_stack_fffffef0;
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
  
  this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_f8,10,&g_CVectorTypeInfo);
  iVar3 = (*in_stack_00000008->vtable->getTargetPoints)(in_stack_00000008,local_f8);
  if ((iVar3 != 0) &&
     (((this_ptr == (CDemonActor *)0x0 ||
       (iVar3 = (*this_ptr->vtable[1].hasCollision)(this_ptr,in_stack_fffffef0), iVar3 < 1)) &&
      (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                 (in_stack_00000004,&CStack_50,&(in_stack_00000008->location).position),
      0.0 < CStack_50.z)))) {
    fVar2 = SQRT(CStack_50.z * CStack_50.z + CStack_50.x * CStack_50.x + CStack_50.y * CStack_50.y);
    fStack_20 = fVar2;
    pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_68,&CStack_50);
    fVar1 = pCVar4->y;
    if (in_stack_0000000c == 0) {
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
    pCVar5 = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_80);
    fStack_38 = (pCVar5->min).x + (pCVar5->max).x;
    fStack_34 = (pCVar5->min).y + (pCVar5->max).y;
    fStack_2c = fStack_38 * 0.5f;
    fStack_30 = (pCVar5->min).z + (pCVar5->max).z;
    fStack_28 = fStack_34 * 0.5f;
    fStack_24 = fStack_30 * 0.5f;
    CStack_5c.x = (in_stack_00000004->location).position.x + fStack_2c;
    CStack_5c.y = (in_stack_00000004->location).position.y + fStack_28;
    CStack_5c.z = (in_stack_00000004->location).position.z + fStack_24;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000008,&CStack_44,local_f8)
    ;
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
    fStack_1c = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                          (g_CDemonSetPtr,&CStack_5c,&CStack_44);
    fStack_14 = fStack_1c;
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    if ((fStack_1c <= 1.0) && (in_stack_00000008 == g_CDemonSetPtr->collision_actor)) {
      return fStack_20;
    }
  }
  return -1.0;
}
