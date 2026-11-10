// Name: core_doc.cpp_CDoc_doHeroAction_FUN_00474fc0
// Address: 00474fc0
// Address Range: [[00474fc0, 00475615]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_doHeroAction_FUN_00474fc0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_doHeroAction_FUN_00474fc0(CDoc *this_ptr)

{
  byte *this_ptr_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_10a0 [1003];
  char *pcVar8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_a0;
  float fStack_98;
  uint uStack_94;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  
  uVar1 = g_CDoorClassInfo.name_hash;
  bVar7 = 0;
  switch(*(uint *)&this_ptr->field_0x1ff60) {
  case 1:
  case 2:
  case 9:
    core_hero_cpp_CHero_doHeroAction_FUN_004ec640((CHero *)this_ptr);
    core_hero_cpp_FUN_004eb5b0(this_ptr);
    return;
  case 3:
    *(uint *)&this_ptr->field_0xc1e4 = 0;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)&this_ptr->field_0x1ff64,uVar1);
    *(int *)&this_ptr->field_0x1ff74 = iVar2;
    if (iVar2 == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CHero::doHeroAction - type=eHeroActionOpenDoor, but actor is NULL or isn't a door");
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    iVar2 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30((CRuleList *)(iVar2 + 0x478));
    if (iVar2 == 0) {
      switch(*(uint *)&this_ptr->field_0x1ff6c) {
      case 0:
        break;
      default:
        core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0((CHero *)this_ptr);
        core_hero_cpp_FUN_004eb5b0(this_ptr);
        return;
      case 2:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0x22,1);
        *(uint *)&this_ptr->field_0x1ff5c = 5;
        core_hero_cpp_FUN_004eb5b0(this_ptr);
        return;
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0x23,1);
        *(uint *)&this_ptr->field_0x1ff5c = 5;
        core_hero_cpp_FUN_004eb5b0(this_ptr);
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0x20,1);
        *(uint *)&this_ptr->field_0x1ff5c = 5;
        core_hero_cpp_FUN_004eb5b0(this_ptr);
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0x21,1);
        *(uint *)&this_ptr->field_0x1ff5c = 5;
        core_hero_cpp_FUN_004eb5b0(this_ptr);
        return;
      }
    }
    *(uint *)&this_ptr->field_0x1ff74 = 0;
    core_hero_cpp_FUN_004eb5b0(this_ptr);
    return;
  case 4:
    iVar2 = *(int *)&this_ptr->field_0x1ff64;
    *(int *)&this_ptr->field_0x1ff78 = iVar2;
    if (iVar2 != 0) {
      uVar4 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x84))(iVar2,this_ptr);
      (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1ff78 + 0x154) + 0x1c))
                (*(int *)&this_ptr->field_0x1ff78);
      puVar5 = (uint *)&stack0xffffff18;
      puVar6 = &stack0xffffff30;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if ((uint *)&this_ptr->field_0x20078 != &stack0xffffff30) {
        *(uint *)&this_ptr->field_0x20078 = uStack_d0;
        *(uint *)&this_ptr->field_0x2007c = uStack_cc;
        *(uint *)&this_ptr->field_0x20080 = uStack_c8;
      }
      if ((uint *)&this_ptr->field_0x20084 != &stack0xffffff3c) {
        *(uint *)&this_ptr->field_0x20084 = uStack_c4;
        *(uint *)&this_ptr->field_0x20088 = uStack_c0;
        *(uint *)&this_ptr->field_0x2008c = uStack_bc;
      }
      fStack_28 = *(float *)&this_ptr->field_0x20078 + *(float *)&this_ptr->field_0x20084;
      fStack_24 = *(float *)&this_ptr->field_0x2007c + *(float *)&this_ptr->field_0x20088;
      fStack_20 = *(float *)&this_ptr->field_0x20080 + *(float *)&this_ptr->field_0x2008c;
      fStack_58 = fStack_28;
      *(uint *)((int)&stack0xffffffac + (uint)bVar7 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      fStack_64 = fStack_58 * _DAT_005da59c;
      fStack_60 = fStack_54 * _DAT_005da59c;
      fStack_5c = fStack_50 * _DAT_005da59c;
      fStack_4c = fStack_58 * _DAT_005da59c;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffa0 + (uint)bVar7 * -8);
      *(uint *)(&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      core_actor_cpp_FUN_00408b40(*(uint *)&this_ptr->field_0x1ff78,&stack0xffffffb4);
      puVar5 = &stack0xffffffcc;
      uStack_34 = uStack_b8;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar7 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffff4c + (uint)bVar7 * 0xfffffffe * 4);
      *(uint *)(&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff50 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      core_actor_cpp_FUN_00408bb0(this_ptr,puVar5);
      uStack_70 = uStack_94;
      (&stack0xffffff94)[(uint)bVar7 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff70 + (uint)bVar7 * -8);
      *(uint *)((int)&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      if ((uint *)&this_ptr->field_0x2006c != &stack0xffffff90) {
        *(uint *)&this_ptr->field_0x2006c = uStack_70;
        *(float *)&this_ptr->field_0x20070 = fStack_6c;
        *(uint *)&this_ptr->field_0x20074 = uStack_68;
      }
      switch(uVar4) {
      case 1:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0x1e,1);
        uVar4 = *(uint *)&this_ptr->field_0x1ff78;
        pcVar8 = "Rummaging %s\n";
        break;
      case 2:
      case 3:
      case 4:
        iVar2 = *(int *)&this_ptr->field_0x1ff78;
        if ((iVar2 == 0) ||
           (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x84))(iVar2,this_ptr), iVar2 != 4)) {
          this_ptr_00 = &this_ptr->field_0x158;
          if (*(float *)&this_ptr->field_0x20070 <= (float)_DAT_005da5ac) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)this_ptr_00,0x16,1);
            uVar4 = *(uint *)&this_ptr->field_0x1ff78;
            pcVar8 = "Picking up %s off ground\n";
          }
          else {
            core_skeleton_cpp_FUN_00569040(this_ptr_00,_DAT_01b6884c);
            core_skeleton_cpp_FUN_00569040(this_ptr_00,_DAT_01b68824);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)this_ptr_00,0x18,1);
            uVar4 = *(uint *)&this_ptr->field_0x1ff78;
            pcVar8 = "Picking up %s waist level\n";
          }
        }
        else {
          core_actor_cpp_FUN_00408bb0(*(uint *)&this_ptr->field_0x1ff78,&this_ptr->field_0x20)
          ;
          uStack_a0 = uStack_7c;
          *(uint *)((int)&stack0xffffff64 + (uint)bVar7 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff88 + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xffffff68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(&stack0xffffff8c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          *(uint *)&this_ptr->field_0x2005c = (uint)(0.0 < fStack_98);
          if (*(float *)&this_ptr->field_0x20070 <= (float)_DAT_005da5a4) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,0x1a,1);
            uVar4 = *(uint *)&this_ptr->field_0x1ff78;
            pcVar8 = "Picking up heavy %s crate\n";
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,0x1b,1);
            core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)&this_ptr->field_0x1ff78 + 0x20);
            uStack_88 = uStack_1c;
            (&stack0xffffff7c)[(uint)bVar7 * 0xfffffffe] =
                 *(uint *)(&stack0xffffffe8 + (uint)bVar7 * -8);
            *(uint *)((int)&stack0xffffff80 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if ((uint *)&this_ptr->field_0x2006c != &stack0xffffff78) {
              *(uint *)&this_ptr->field_0x2006c = uStack_88;
              *(uint *)&this_ptr->field_0x20070 = uStack_84;
              *(uint *)&this_ptr->field_0x20074 = uStack_80;
            }
            uVar4 = *(uint *)&this_ptr->field_0x1ff78;
            pcVar8 = "Picking up heavy %s shelf\n";
          }
        }
        break;
      default:
        *(uint *)&this_ptr->field_0x1ff78 = 0;
        core_hero_cpp_FUN_004eb5b0(this_ptr);
        return;
      }
      engine_console_cpp_FUN_00445430(g_CConsolePtr,pcVar8,uVar4);
      if (*(int *)&this_ptr->field_0x1ff78 != 0) {
        *(uint *)&this_ptr->field_0x1ff5c = 4;
        core_hero_cpp_FUN_004eb5b0(this_ptr);
        return;
      }
    }
    break;
  case 7:
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"?CDoc::doHeroAction - pull lever\n" + 1);
    uVar1 = g_CLeverClassInfo.name_hash;
    *(uint *)&this_ptr->field_0xc1e4 = 0;
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)&this_ptr->field_0x1ff64,uVar1);
    if (iVar2 == 0) {
      shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CDoc::doHeroAction - type=eHeroActionPullLever, but actor is NULL or isn't a lever");
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"  lever = %s\n",iVar2);
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004aaf30((CRuleList *)(iVar2 + 0x420));
    if (iVar3 == 0) {
      *(int *)&this_ptr->field_0x1ff80 = iVar2;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,0x24,1);
      core_hero_cpp_FUN_004eb5b0(this_ptr);
      return;
    }
  }
  core_hero_cpp_FUN_004eb5b0(this_ptr);
  return;
}
