// Name: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090
// Address: 0042d090
// MANUAL RECONSTRUCTION
// Address Range: [[0042d090, 0042d2fa] [03fc1e11, 03fc206c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090(CCharacter *this_ptr,float delta_time)

{
  CDemonActor *carry_actor;
  float fVar2;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CMatrix3x4f CStack_244;
  CMatrix3x4f CStack_214;
  CMatrix3x4f CStack_1e4;
  CMatrix3x4f CStack_154;
  CMatrix3x4f CStack_124;
  CMatrix3x4f CStack_f4;
  CMatrix3x4f CStack_c4;
  CVector3f CStack_34;
  CVector3f translation_out;
  UOrientationVector *orient_ptr;
  CLocation *location_ptr;
  CMatrix3x4f *bone_matrices;
  SCarryHand *hand;
  int hand_index;

  orient_ptr = &(this_ptr->base).orient;
  location_ptr = &(this_ptr->base).location;
  hand_index = 0;
  bone_matrices = (this_ptr->model).bone_transform.bone_world_matrices;
  hand = this_ptr->carry_hands;
  do {
    if (hand->carry_actor != (CDemonActor *)0x0) {
      (*(((this_ptr->base).vtable._uc)->_uc).getCarryObjToBodyXForm)
                (this_ptr,hand_index,&CStack_214);
      if (hand->blend_factor < 1.0) {
        fVar2 = hand->blend_speed * delta_time + hand->blend_factor;
        hand->blend_factor = fVar2;
        if (fVar2 <= 1.0) {
          core_xform_cpp_inverse_FUN_005f6210
                    (&bone_matrices[hand->bone_index],&CStack_244);
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_214,&CStack_244,&CStack_1e4);
          core_xform_cpp_lerpMatrix3x4_FUN_005f7140
                    (&hand->initial_carry_transform,&CStack_1e4,hand->blend_factor,&CStack_154);
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&CStack_154,&bone_matrices[hand->bone_index],&CStack_124);
          CStack_214 = CStack_124;
        }
        else {
          hand->blend_factor = 1.0;
        }
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&CStack_c4,(CVector3f *)location_ptr,(CVector3f *)orient_ptr);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_214,&CStack_c4,&CStack_f4);
      pCVar2 = core_xform_cpp_getTranslation_FUN_005f6110
                         (&CStack_f4,&translation_out);
      carry_actor = hand->carry_actor;
      carry_actor->location.position.x = pCVar2->x;
      carry_actor->location.position.y = pCVar2->y;
      carry_actor->location.position.z = pCVar2->z;
      pCVar3 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         (&CStack_f4,&CStack_34);
      carry_actor = hand->carry_actor;
      if (&carry_actor->orient.vec != pCVar3) {
        (carry_actor->orient).vec.x = pCVar3->x;
        (carry_actor->orient).vec.y = pCVar3->y;
        (carry_actor->orient).vec.z = pCVar3->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(hand->carry_actor);
    }
    hand_index = hand_index + 1;
    hand = hand + 1;
  } while (hand_index < 2);
  return;
}
