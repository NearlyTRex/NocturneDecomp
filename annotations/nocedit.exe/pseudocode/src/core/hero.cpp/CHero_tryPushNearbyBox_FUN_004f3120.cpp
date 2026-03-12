// Name: core_hero.cpp_CHero_tryPushNearbyBox_FUN_004f3120
// Address: 004f3120
// Address Range: [[004f3120, 004f3345]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryPushNearbyBox_FUN_004f3120(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryPushNearbyBox_FUN_004f3120(CHero *this_ptr)

{
  float fVar1;
  int iVar1;
  CBoxActor *this_ptr_00;
  uint uVar2;
  CBoxActor *this_ptr_01;
  CVector3f *pCVar3;
  float fVar2;
  int iVar3;
  int iVar4;
  CBoundingBox3D local_80;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_3c;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_0042d360(&this_ptr->base);
  if (iVar1 == 0) {
    if (this_ptr->pushed_object == (CBoxActor *)0x0) {
      iVar3 = 0;
      for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
        this_ptr_01 = (CBoxActor *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3),
                                 g_CBoxActorClassInfo.name_hash);
        if (((this_ptr_01 != (CBoxActor *)0x0) && (this_ptr_01->can_be_pushed != 0)) &&
           (this_ptr_01->pushed_by_actor == (CDemonActor *)0x0)) {
          (*((this_ptr_01->base).vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr_01,&local_80);
          CStack_50.x = (local_80.min.x + local_80.max.x) * 0.5f;
          CStack_50.y = (local_80.min.y + local_80.max.y) * 0.5f;
          CStack_50.z = (local_80.min.z + local_80.max.z) * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr_01,&CStack_5c,&CStack_50);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    ((CDemonActor *)this_ptr,&CStack_38,&CStack_5c);
          fVar1 = (local_80.max.x - local_80.min.x) * 0.5f;
          fVar2 = (local_80.max.z - local_80.min.z) * 0.5f;
          if (((CStack_38.z - SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= (float)1.2) &&
              (1.0 <= (double)CStack_38.y)) && ((double)CStack_38.y <= 5)) {
            pCVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&CStack_2c,&CStack_38);
            fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar3->y);
            if (ABS(fVar2) <= (float)0.61086523818055505) {
              this_ptr->pushed_object = this_ptr_01;
              break;
            }
          }
        }
        iVar3 = iVar3 + 4;
      }
      if (this_ptr->pushed_object == (CBoxActor *)0x0) goto LAB_004f31b0;
      this_ptr_00 = (CBoxActor *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (&this_ptr->pushed_object->base,g_CBoxActorClassInfo.name_hash);
      if (this_ptr_00 != (CBoxActor *)0x0) {
        this_ptr_00->pushed_by_actor = (CDemonActor *)this_ptr;
        uVar2 = (*((this_ptr_00->base).vtable._ub)->playAmbientSound)
                          ((CDemonActor *)this_ptr_00,this_ptr_00->push_sound);
        this_ptr_00->push_sfx_handle = uVar2;
      }
    }
    iVar3 = 1;
  }
  else {
LAB_004f31b0:
    iVar3 = 0;
  }
  return iVar3;
}
