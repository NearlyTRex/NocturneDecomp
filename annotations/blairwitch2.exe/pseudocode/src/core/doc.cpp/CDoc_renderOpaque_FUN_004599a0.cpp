// Name: core_doc.cpp_CDoc_renderOpaque_FUN_004599a0
// Address: 004599a0
// Address Range: [[004599a0, 00459d36]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_004599a0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_004599a0(CDoc *this_ptr)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CVector3f *pCVar2;
  byte bVar3;
  float afStackY_1058 [1006];
  CDemonSet *pCVar4;
  CBoxActor *this_ptr_00;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  float *pfVar7;
  uint uVar8;
  float fStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  uint uStack_40;
  float afStack_3c [5];
  float fStack_28;
  float afStack_1c [3];
  float fStack_10;
  float fStack_c;
  
  bVar3 = 0;
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  core_charactr_cpp_FUN_0042b620(this_ptr);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  fStack_c = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                       ((CCharacter *)this_ptr,4);
  if ((float)_DAT_005d0507 < fStack_c) {
    pCVar2 = (CVector3f *)0x0;
    if (*(int *)&this_ptr->field_0x2698 != 0) {
      pCVar2 = (CVector3f *)(*(int *)&this_ptr->field_0x2698 + 0x20);
    }
    if (*(int *)&this_ptr->field_0x25698 != 0) {
      pCVar2 = (CVector3f *)(*(int *)&this_ptr->field_0x25698 + 0x20);
    }
    if (pCVar2 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x25698);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0x2698);
      unkafter_stranger_cpp_FUN_0045bba0(this_ptr);
      pfVar7 = afStack_3c + 8;
      afStack_1c[0] = (float)uStack_40;
      afStack_3c[(uint)bVar3 * -2 + 9] = afStack_3c[(uint)bVar3 * -2];
      afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
           afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_actor_cpp_FUN_00408cf0(this_ptr,pfVar7);
      pCVar6 = &CStack_64;
      CStack_64.x = fStack_70;
      *(uint *)((int)&CStack_64 + (uint)bVar3 * -8 + 4) =
           *(uint *)(&stack0xffffff94 + (uint)bVar3 * -8);
      pCVar4 = g_CDemonSetPtr;
      pCVar5 = pCVar2;
      *(uint *)((int)&CStack_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)(&stack0xffffff98 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_c = (float)core_setcolid_cpp_FUN_00536210(pCVar4,pCVar5,pCVar6);
      fStack_10 = fStack_c;
      if (fStack_c < 0.0) {
        fStack_10 = 10.0;
      }
      core_fire_cpp_CFireEffect_createLaserPath_FUN_0049d840
                (0x01C3DEB4,pCVar2,&CStack_64,1.0,1.0,&g_CDemonSetPtr->collision_normal,fStack_10,
                 0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    }
  }
  if (*(int *)(&this_ptr->field_0x23f4 + _DAT_01b4d2b0 * 4) != 0) {
    iVar1 = *(int *)&this_ptr->field_0x25698;
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x43c) == 0) && (iVar1 != *(int *)&this_ptr->field_0x2620)) {
        uVar8 = 1;
      }
      else {
        if (*(int *)&this_ptr->field_0x2698 == *(int *)&this_ptr->field_0x25698) goto LAB_00459b81;
        uVar8 = 0;
      }
      core_doc_cpp_FUN_004567c0(this_ptr,uVar8);
      (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25698 + 0x2b0) + 0x18))
                (*(int *)&this_ptr->field_0x25698);
    }
LAB_00459b81:
    if (0.0 < *(float *)&this_ptr->field_0x259b0) {
      core_xform_cpp_FUN_00592720(&this_ptr->field_0x2575c);
      CStack_58.x = afStack_3c[2];
      *(float *)((int)&CStack_58 + (uint)bVar3 * -8 + 4) = afStack_3c[(uint)bVar3 * -2 + 3];
      *(float *)((int)&CStack_58 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&this_ptr->field_0x2575c);
      pCVar2 = &CStack_4c;
      pCVar6 = &CStack_58;
      CStack_4c.x = fStack_28;
      *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) = afStack_3c[(uint)bVar3 * -2 + 6];
      this_ptr_00 = (CBoxActor *)&this_ptr->field_0x259b4;
      *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
      core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041ce90(this_ptr_00,pCVar6,pCVar2);
      core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041c580((CBoxActor *)&this_ptr->field_0x259b4);
    }
  }
  actor_ptr = *(CDemonActor **)&this_ptr->field_0x25698;
  if ((((actor_ptr == (CDemonActor *)0x0) || (actor_ptr == *(CDemonActor **)&this_ptr->field_0x2620)
       ) || (actor_ptr == *(CDemonActor **)&this_ptr->field_0x2698)) ||
     ((*(int *)(&this_ptr->field_0x23f4 + _DAT_01b4d2b0 * 4) == 0 ||
      (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,&DAT_005d0502), iVar1 == 0))))
  goto LAB_00459c91;
  if (*(int *)&this_ptr->field_0x25698 == 0) {
switchD_00459c4e_caseD_3:
    iVar1 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&this_ptr->field_0x25698 + 0x43c)) {
    case 0:
    case 5:
      iVar1 = 2;
      break;
    case 1:
      iVar1 = 0xb;
      break;
    case 2:
      iVar1 = 9;
      break;
    default:
      goto switchD_00459c4e_caseD_3;
    case 4:
      iVar1 = 10;
      break;
    case 6:
    case 7:
    case 8:
    case 0xd:
      iVar1 = 6;
      break;
    case 10:
    case 0xb:
      iVar1 = 0xe;
    }
  }
  fStack_c = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                       ((CCharacter *)this_ptr,iVar1);
  if ((float)_DAT_005d050f < fStack_c) {
    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25698 + 0x2b0) + 0xf8))
              (*(int *)&this_ptr->field_0x25698);
  }
LAB_00459c91:
  if (((*(int *)(&this_ptr->field_0x23f4 + _DAT_01b4d2b0 * 4) == 0) &&
      (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar1 == 0
      )) && (0 < *(int *)&this_ptr->field_0x2d0c)) {
    core_cloth_cpp_CClothList_reset_FUN_005b1550((CClothList *)&this_ptr->field_0x2d0c);
  }
  return 1;
}
