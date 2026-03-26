// Name: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090
// Address: 0042d090
// Address Range: [[0042d090, 0042d2fa] [03fc1e11, 03fc206c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090(CCharacter *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar3;
  CVector3f *pCVar4;
  int unaff_EBP;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  CMatrix3x4f *in_stack_fffffd80;
  CMatrix3x4f CStack_274;
  CMatrix3x4f CStack_244;
  CMatrix3x4f CStack_214;
  CMatrix3x4f CStack_1e4;
  float afStack_1b4 [12];
  CMatrix3x4f CStack_184;
  CMatrix3x4f CStack_154;
  CMatrix3x4f CStack_124;
  CMatrix3x4f CStack_f4;
  CMatrix3x4f CStack_c4;
  CMatrix3x4f CStack_94;
  CMatrix3x4f CStack_64;
  CVector3f CStack_34;
  CVector3f local_28;
  CVector3f *local_1c;
  CVector3f *local_18;
  int iStack_14;
  
  local_28.x = (float)&(this_ptr->base).orient;
  local_28.y = (float)&(this_ptr->base).location;
  local_18 = (CVector3f *)0x0;
  local_28.z = (float)(this_ptr->model).bone_transform.bone_world_matrices;
  pCVar4 = (CVector3f *)this_ptr->carry_hands;
  do {
    if (pCVar4->z != 0.0) {
      (*(((this_ptr->base).vtable._uc)->_uc).getCarryObjToBodyXForm)
                (this_ptr,(int)local_18,in_stack_fffffd80);
      CStack_214.m[0].w = afStack_1b4[0];
      CStack_214.m[0].x = afStack_1b4[1];
      CStack_214.m[0].y = afStack_1b4[2];
      CStack_214.m[0].z = afStack_1b4[3];
      CStack_214.m[1].w = afStack_1b4[4];
      CStack_214.m[1].x = afStack_1b4[5];
      CStack_214.m[1].y = afStack_1b4[6];
      CStack_214.m[1].z = afStack_1b4[7];
      CStack_214.m[2].w = afStack_1b4[8];
      CStack_214.m[2].x = afStack_1b4[9];
      CStack_214.m[2].y = afStack_1b4[10];
      CStack_214.m[2].z = afStack_1b4[0xb];
      if (pCVar4[5].y < 1.0) {
        fVar2 = pCVar4[5].x * delta_time + pCVar4[5].y;
        pCVar4[5].y = fVar2;
        if (fVar2 <= 1.0) {
          core_xform_cpp_inverse_FUN_005f6210
                    ((CMatrix3x4f *)((int)pCVar4->x * 0x30 + iStack_14),&CStack_244);
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_214,&CStack_64,&CStack_1e4);
          core_xform_cpp_lerpMatrix3x4_FUN_005f7140
                    ((CMatrix3x4f *)(pCVar4 + 1),&CStack_94,pCVar4[5].y,&CStack_154);
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&CStack_184,(CMatrix3x4f *)((int)pCVar4->x * 0x30 + iStack_14),&CStack_124);
          CStack_214.m[0].w = CStack_124.m[0].w;
          CStack_214.m[0].x = CStack_124.m[0].x;
          CStack_214.m[0].y = CStack_124.m[0].y;
          CStack_214.m[0].z = CStack_124.m[0].z;
          CStack_214.m[1].w = CStack_124.m[1].w;
          CStack_214.m[1].x = CStack_124.m[1].x;
          CStack_214.m[1].y = CStack_124.m[1].y;
          CStack_214.m[1].z = CStack_124.m[1].z;
          CStack_214.m[2].w = CStack_124.m[2].w;
          CStack_214.m[2].x = CStack_124.m[2].x;
          CStack_214.m[2].y = CStack_124.m[2].y;
          CStack_214.m[2].z = CStack_124.m[2].z;
        }
        else {
          pCVar4[5].y = 1.0;
        }
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&CStack_c4,local_18,pCVar4);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_214,&CStack_c4,&CStack_f4);
      pCVar2 = core_xform_cpp_getTranslation_FUN_005f6110(&CStack_274,&local_28);
      iVar1 = *(int *)(unaff_EBP + 8);
      *(float *)(iVar1 + 0x20) = pCVar2->x;
      *(float *)(iVar1 + 0x24) = pCVar2->y;
      *(float *)(iVar1 + 0x28) = pCVar2->z;
      in_stack_fffffd80 = (CMatrix3x4f *)0x42d1f9;
      pCVar3 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CMatrix3x3f *)&CStack_274,&CStack_34);
      iVar1 = *(int *)(unaff_EBP + 8);
      if ((CVector3f *)(iVar1 + 0x30) != pCVar3) {
        ((CVector3f *)(iVar1 + 0x30))->x = pCVar3->x;
        *(float *)(iVar1 + 0x34) = pCVar3->y;
        *(float *)(iVar1 + 0x38) = pCVar3->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (*(CDemonActor **)(unaff_EBP + 8));
    }
    local_18 = (CVector3f *)((int)&local_18->x + 1);
    pCVar4 = (CVector3f *)&pCVar4[5].z;
  } while ((int)local_18 < 2);
  return;
}
