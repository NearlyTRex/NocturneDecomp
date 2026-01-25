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
  CCharacter *this_ptr;
  int iVar1;
  CVector3f *pCVar2;
  CBoundingBox3D *pCVar3;
  float fVar4;
  uint unaff_EDI;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  byte auStack_fc [8];
  float fStack_f4;
  float fStack_f0;
  CVector3f aCStack_e4 [9];
  CBoundingBox3D CStack_74;
  CVector3f CStack_5c;
  byte auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  this_ptr = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(auStack_fc + 4,10,&g_CVectorTypeInfo);
  iVar1 = (*((in_stack_00000008->vtable)._ub)->getTargetPoints)
                    (in_stack_00000008,(CVector3f *)(auStack_fc + 4));
  if ((iVar1 != 0) &&
     (((this_ptr == (CCharacter *)0x0 ||
       (iVar1 = (*(((this_ptr->base_actor).vtable._uc)->_uc).isDamageable)(this_ptr), iVar1 < 1)) &&
      (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                 (in_stack_00000004,(CVector3f *)(auStack_48 + 4),
                  &(in_stack_00000008->location).position), 0.0 < fStack_3c)))) {
    fStack_f0 = SQRT(fStack_3c * fStack_3c +
                     (float)auStack_48._4_4_ * (float)auStack_48._4_4_ + fStack_40 * fStack_40);
    fStack_14 = fStack_f0;
    pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_5c,(CVector3f *)(auStack_48 + 4));
    fStack_f4 = pCVar2->y;
    if (in_stack_0000000c == 0) {
      if ((float)30 < fStack_f0) {
        return 0xbf800000;
      }
      if (fStack_f4 < (float)-0.78149070982587099) {
        return 0xbf800000;
      }
      if (1.56298141965174 < (double)fStack_f4) {
        return 0xbf800000;
      }
    }
    else {
      if ((float)35 < fStack_f0) {
        return 0xbf800000;
      }
      auStack_fc = (byte  [8])(double)fStack_f4;
      if (fStack_f4 < (float)-0.78539816337500001) {
        return 0xbf800000;
      }
      if (1.57079632675 < (double)auStack_fc) {
        return 0xbf800000;
      }
    }
    pCVar3 = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)(in_stack_00000004,&CStack_74);
    fStack_24 = (pCVar3->min).x + (pCVar3->max).x;
    fStack_20 = (pCVar3->min).y + (pCVar3->max).y;
    fStack_18 = fStack_24 * 0.5f;
    fStack_1c = (pCVar3->min).z + (pCVar3->max).z;
    fStack_14 = fStack_20 * 0.5f;
    auStack_48._0_4_ = (in_stack_00000004->location).position.x + fStack_18;
    auStack_48._4_4_ = (in_stack_00000004->location).position.y + fStack_14;
    fStack_40 = (in_stack_00000004->location).position.z + fStack_1c * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000008,&CStack_30,aCStack_e4);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
    fVar4 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                      (g_CDemonSetPtr,(CVector3f *)auStack_48,&CStack_30);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    if ((fVar4 <= 1.0) && (in_stack_00000008 == g_CDemonSetPtr->collision_actor)) {
      return unaff_EDI;
    }
  }
  return 0xbf800000;
}
