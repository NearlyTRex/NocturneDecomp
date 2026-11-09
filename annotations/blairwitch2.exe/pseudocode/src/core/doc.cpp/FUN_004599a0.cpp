// Name: core_doc.cpp_FUN_004599a0
// Address: 004599a0
// Address Range: [[004599a0, 00459d36]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_004599a0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_004599a0(CDemonActor *param_1)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CVector3f *pCVar2;
  byte bVar3;
  float afStackY_1058 [1006];
  CDemonSet *pCVar4;
  CBoxActor *this_ptr;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  uint *puVar7;
  uint uVar8;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  uint uStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  CVector3f CStack_28;
  uint uStack_1c;
  float afStack_18 [4];
  
  bVar3 = 0;
  iVar1 = core_charactr_cpp_FUN_004254b0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  core_charactr_cpp_FUN_0042b620(param_1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  afStack_18[3] = (float)core_charactr_cpp_FUN_0042a5a0(param_1,4);
  if ((float)_DAT_005d0507 < afStack_18[3]) {
    pCVar2 = (CVector3f *)0x0;
    if (*(int *)&param_1[0xe].field_0xc0 != 0) {
      pCVar2 = (CVector3f *)(*(int *)&param_1[0xe].field_0xc0 + 0x20);
    }
    if (*(int *)&param_1[0xdd].field_0x134 != 0) {
      pCVar2 = (CVector3f *)(*(int *)&param_1[0xdd].field_0x134 + 0x20);
    }
    if (pCVar2 != (CVector3f *)0x0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1[0xdd].field_0x134);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1[0xe].field_0xc0);
      unkafter_stranger_cpp_FUN_0045bba0(param_1);
      puVar7 = &uStack_1c;
      uStack_1c = uStack_40;
      afStack_18[(uint)bVar3 * -2] = afStack_3c[(uint)bVar3 * -2];
      afStack_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_actor_cpp_FUN_00408cf0(param_1,puVar7);
      pCVar6 = &CStack_64;
      CStack_64._0_4_ = CStack_70._0_4_;
      *(uint *)((int)&CStack_64 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&CStack_70 + (uint)bVar3 * -8 + 4);
      pCVar4 = g_CDemonSetPtr;
      pCVar5 = pCVar2;
      *(uint *)((int)&CStack_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&CStack_70 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      afStack_18[3] = (float)core_setcolid_cpp_FUN_00536210(pCVar4,pCVar5,pCVar6);
      afStack_18[2] = afStack_18[3];
      if (afStack_18[3] < 0.0) {
        afStack_18[2] = 10.0;
      }
      core_fire_cpp_FUN_0049d840
                (0x01C3DEB4,pCVar2,&CStack_64,1.0,1.0,(CVector3f *)&g_CDemonSetPtr->field_0x14d128
                 ,afStack_18[2],0xff,0,0);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    }
  }
  if (*(int *)(&param_1[0xd].field_0xd0 + _DAT_01b4d2b0 * 4) != 0) {
    iVar1 = *(int *)&param_1[0xdd].field_0x134;
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x43c) == 0) && (iVar1 != *(int *)&param_1[0xe].field_0x48)) {
        uVar8 = 1;
      }
      else {
        if (*(int *)&param_1[0xe].field_0xc0 == *(int *)&param_1[0xdd].field_0x134)
        goto LAB_00459b81;
        uVar8 = 0;
      }
      core_doc_cpp_FUN_004567c0(param_1,uVar8);
      (**(code **)(*(int *)(*(int *)&param_1[0xdd].field_0x134 + 0x2b0) + 0x18))
                (*(int *)&param_1[0xdd].field_0x134);
    }
LAB_00459b81:
    if (0.0 < *(float *)&param_1[0xde].field_0x198) {
      core_xform_cpp_FUN_00592720(&param_1[0xdd].field_0x1f8);
      CStack_58._0_4_ = CStack_34._0_4_;
      *(uint *)((int)&CStack_58 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&CStack_58 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      core_xform_cpp_FUN_00591de0(&param_1[0xdd].field_0x1f8);
      pCVar2 = &CStack_4c;
      pCVar6 = &CStack_58;
      CStack_4c._0_4_ = CStack_28._0_4_;
      *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + 4);
      this_ptr = (CBoxActor *)&param_1[0xde].field_0x19c;
      *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      core_boxactor_cpp_FUN_0041ce90(this_ptr,pCVar6,pCVar2);
      core_boxactor_cpp_FUN_0041c580((CBoxActor *)&param_1[0xde].field_0x19c);
    }
  }
  actor_ptr = *(CDemonActor **)&param_1[0xdd].field_0x134;
  if ((((actor_ptr == (CDemonActor *)0x0) ||
       (actor_ptr == *(CDemonActor **)&param_1[0xe].field_0x48)) ||
      (actor_ptr == *(CDemonActor **)&param_1[0xe].field_0xc0)) ||
     ((*(int *)(&param_1[0xd].field_0xd0 + _DAT_01b4d2b0 * 4) == 0 ||
      (iVar1 = core_actor_cpp_FUN_0040c840(actor_ptr,&DAT_005d0502), iVar1 == 0))))
  goto LAB_00459c91;
  if (*(int *)&param_1[0xdd].field_0x134 == 0) {
switchD_00459c4e_caseD_3:
    uVar8 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&param_1[0xdd].field_0x134 + 0x43c)) {
    case 0:
    case 5:
      uVar8 = 2;
      break;
    case 1:
      uVar8 = 0xb;
      break;
    case 2:
      uVar8 = 9;
      break;
    default:
      goto switchD_00459c4e_caseD_3;
    case 4:
      uVar8 = 10;
      break;
    case 6:
    case 7:
    case 8:
    case 0xd:
      uVar8 = 6;
      break;
    case 10:
    case 0xb:
      uVar8 = 0xe;
    }
  }
  afStack_18[3] = (float)core_charactr_cpp_FUN_0042a5a0(param_1,uVar8);
  if ((float)_DAT_005d050f < afStack_18[3]) {
    (**(code **)(*(int *)(*(int *)&param_1[0xdd].field_0x134 + 0x2b0) + 0xf8))
              (*(int *)&param_1[0xdd].field_0x134);
  }
LAB_00459c91:
  if (((*(int *)(&param_1[0xd].field_0xd0 + _DAT_01b4d2b0 * 4) == 0) &&
      (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar1 == 0
      )) && (0 < *(int *)&param_1[0x10].field_0x1cc)) {
    core_cloth_cpp_FUN_005b1550((CClothList *)&param_1[0x10].field_0x1cc);
  }
  return 1;
}
