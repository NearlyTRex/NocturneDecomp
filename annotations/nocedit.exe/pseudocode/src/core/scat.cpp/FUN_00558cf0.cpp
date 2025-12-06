// Name: core_scat.cpp_FUN_00558cf0
// Address: 00558cf0
// Address Range: [[00558cf0, 00558fc0]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558cf0()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00558cf0(uint param_1, uint param_2,
   uint param_3) */

float core_scat_cpp_FUN_00558cf0(void)

{
  float fVar1;
  CDemonActor *this_ptr;
  CDemonActor *this_ptr_00;
  int iVar2;
  CVector3f *pCVar3;
  CBoundingBox3D *pCVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  SCollisionInfo *in_stack_ffffff0c;
  float fStack_f0;
  float in_stack_ffffff3c;
  CVector3f aCStack_ac [8];
  byte auStack_48 [40];
  byte auStack_20 [8];
  float fStack_18;
  float fStack_14;
  
  this_ptr = in_stack_00000008;
  this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xffffff0c,10,&g_CVectorTypeInfo)
  ;
  iVar2 = (*this_ptr->vtable->getTargetPoints)(this_ptr,(CVector3f *)&fStack_f0);
  if ((iVar2 != 0) &&
     ((this_ptr_00 == (CDemonActor *)0x0 ||
      (iVar2 = (*this_ptr_00->vtable[1].hasCollision)(this_ptr_00,in_stack_ffffff0c), iVar2 < 1))))
  {
    fStack_f0 = 7.856783e-39;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,(CVector3f *)auStack_20,&(this_ptr->location).position);
    if (0.0 < fStack_14) {
      in_stack_00000014 =
           SQRT(fStack_14 * fStack_14 +
                (float)auStack_20._4_4_ * (float)auStack_20._4_4_ + fStack_18 * fStack_18);
      pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)(auStack_48 + 0x14),(CVector3f *)(auStack_20 + 4));
      fVar1 = pCVar3->y;
      if (in_stack_0000000c == 0.0) {
        if ((float)30 < in_stack_ffffff3c) {
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
        if ((float)35 < in_stack_ffffff3c) {
          return -1.0;
        }
        if (fVar1 < (float)-0.78539816337500001) {
          return -1.0;
        }
        if (1.57079632675 < (double)fVar1) {
          return -1.0;
        }
      }
      pCVar4 = (*in_stack_00000004->vtable->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)auStack_48);
      in_stack_00000014 = (pCVar4->min).x + (pCVar4->max).x;
      in_stack_00000018 = (pCVar4->min).y + (pCVar4->max).y;
      in_stack_00000020 = in_stack_00000014 * 0.5f;
      in_stack_0000001c = (pCVar4->min).z + (pCVar4->max).z;
      in_stack_00000024 = in_stack_00000018 * 0.5f;
      in_stack_00000028 = in_stack_0000001c * 0.5f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (this_ptr,(CVector3f *)&stack0x00000008,aCStack_ac);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      in_stack_00000040 =
           core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                     (g_CDemonSetPtr,(CVector3f *)&stack0xfffffffc,(CVector3f *)&stack0x00000014);
      in_stack_00000048 = in_stack_00000040;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if ((in_stack_00000044 <= 1.0) && (this_ptr == g_CDemonSetPtr->collision_actor)) {
        return in_stack_00000040;
      }
    }
  }
  return -1.0;
}
