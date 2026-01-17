// Name: core_gabriela.cpp_FUN_004d6260
// Address: 004d6260
// Address Range: [[004d6260, 004d6530]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6260()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d6260(uint param_1, uint
   param_2, uint param_3) */

uint core_gabriela_cpp_FUN_004d6260(void)

{
  CDemonActor *this_ptr;
  int iVar1;
  CVector3f *pCVar2;
  CBoundingBox3D *pCVar3;
  float fVar4;
  uint unaff_ESI;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  SCollisionInfo *in_stack_fffffef8;
  double local_f8;
  float fStack_f0;
  float fStack_ec;
  CVector3f aCStack_e0 [9];
  CBoundingBox3D CStack_70;
  CVector3f CStack_58;
  byte auStack_44 [8];
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_f8,10,&g_CVectorTypeInfo);
  iVar1 = (*in_stack_00000008->vtable->getTargetPoints)(in_stack_00000008,(CVector3f *)&local_f8);
  if ((iVar1 != 0) &&
     (((this_ptr == (CDemonActor *)0x0 ||
       (iVar1 = (*this_ptr->vtable[1].hasCollision)(this_ptr,in_stack_fffffef8), iVar1 < 1)) &&
      (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                 (in_stack_00000004,(CVector3f *)(auStack_44 + 4),
                  &(in_stack_00000008->location).position), 0.0 < fStack_38)))) {
    fStack_ec = SQRT(fStack_38 * fStack_38 +
                     (float)auStack_44._4_4_ * (float)auStack_44._4_4_ + fStack_3c * fStack_3c);
    pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_58,(CVector3f *)(auStack_44 + 4));
    fStack_f0 = pCVar2->y;
    if (in_stack_0000000c == 0) {
      if ((float)30 < fStack_ec) {
        return 0xbf800000;
      }
      if (fStack_f0 < (float)-0.78149070982587099) {
        return 0xbf800000;
      }
      if (1.56298141965174 < (double)fStack_f0) {
        return 0xbf800000;
      }
    }
    else {
      if ((float)35 < fStack_ec) {
        return 0xbf800000;
      }
      local_f8 = (double)fStack_f0;
      if (fStack_f0 < (float)-0.78539816337500001) {
        return 0xbf800000;
      }
      if (1.57079632675 < local_f8) {
        return 0xbf800000;
      }
    }
    pCVar3 = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_70);
    fStack_20 = (pCVar3->min).x + (pCVar3->max).x;
    fStack_1c = (pCVar3->min).y + (pCVar3->max).y;
    fStack_14 = fStack_20 * 0.5f;
    fStack_18 = (pCVar3->min).z + (pCVar3->max).z;
    auStack_44._0_4_ = (in_stack_00000004->location).position.x + fStack_14;
    auStack_44._4_4_ = (in_stack_00000004->location).position.y + fStack_1c * 0.5f;
    fStack_3c = (in_stack_00000004->location).position.z + fStack_18 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000008,&CStack_2c,aCStack_e0);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)auStack_44,&CStack_2c);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    if ((fVar4 <= 1.0) && (in_stack_00000008 == g_CDemonSetPtr->collision_actor)) {
      return unaff_ESI;
    }
  }
  return 0xbf800000;
}
