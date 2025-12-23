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
  CDemonActor *this_ptr;
  int iVar1;
  CVector3f *pCVar2;
  CBoundingBox3D *pCVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  CDemonActor *collision_info;
  byte auStack_fc [8];
  byte auStack_f4 [8];
  float fStack_ec;
  float fStack_e8;
  byte auStack_6c [24];
  float fStack_54;
  CVector3f CStack_50;
  byte auStack_44 [8];
  float fStack_3c;
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(auStack_f4,10,&g_CVectorTypeInfo);
  collision_info = in_stack_00000008;
  iVar1 = (*in_stack_00000008->vtable->getTargetPoints)
                    (in_stack_00000008,(CVector3f *)(auStack_f4 + 4));
  if ((iVar1 != 0) &&
     (((this_ptr == (CDemonActor *)0x0 ||
       (iVar1 = (*this_ptr->vtable[1].hasCollision)(this_ptr,(SCollisionInfo *)collision_info),
       iVar1 < 1)) &&
      (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                 (in_stack_00000004,&CStack_50,&(in_stack_00000008->location).position),
      0.0 < CStack_38.x)))) {
    fStack_ec = SQRT(CStack_38.x * CStack_38.x +
                     (float)auStack_44._4_4_ * (float)auStack_44._4_4_ + fStack_3c * fStack_3c);
    pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)(auStack_6c + 0x14),(CVector3f *)(auStack_44 + 4));
    fStack_ec = pCVar2->y;
    if (in_stack_0000000c == 0) {
      if ((float)30 < fStack_e8) {
        return -1.0;
      }
      auStack_fc = (byte  [8])(double)fStack_ec;
      if (fStack_ec < (float)-0.78149070982587099) {
        return -1.0;
      }
      if (1.56298141965174 < (double)auStack_fc) {
        return -1.0;
      }
    }
    else {
      if ((float)35 < fStack_e8) {
        return -1.0;
      }
      auStack_f4 = (byte  [8])(double)fStack_ec;
      if (fStack_ec < (float)-0.78539816337500001) {
        return -1.0;
      }
      if (1.57079632675 < (double)auStack_f4) {
        return -1.0;
      }
    }
    pCVar3 = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)auStack_6c);
    CStack_38.x = (pCVar3->min).x + (pCVar3->max).x;
    CStack_38.y = (pCVar3->min).y + (pCVar3->max).y;
    fStack_2c = CStack_38.x * 0.5f;
    CStack_38.z = (pCVar3->min).z + (pCVar3->max).z;
    fStack_28 = CStack_38.y * 0.5f;
    fStack_24 = CStack_38.z * 0.5f;
    auStack_6c._16_4_ = (in_stack_00000004->location).position.x + fStack_2c;
    auStack_6c._20_4_ = (in_stack_00000004->location).position.y + fStack_28;
    fStack_54 = (in_stack_00000004->location).position.z + fStack_24;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000008,(CVector3f *)auStack_44,(CVector3f *)(auStack_fc + 4));
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&CStack_50,&CStack_38);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    if ((unaff_ESI <= 1.0) && (in_stack_00000008 == g_CDemonSetPtr->collision_actor)) {
      return fVar4;
    }
  }
  return -1.0;
}
