// Name: core_demnfolk.cpp_CDemnfolk_setup_FUN_00458bc0
// Address: 00458bc0
// Address Range: [[00458bc0, 00459037]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_setup_FUN_00458bc0(CDemnfolk *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_demnfolk_cpp_CDemnfolk_setup_FUN_00458bc0(CDemnfolk *this_ptr)

{
  byte *str1;
  char cVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  float fVar3;
  char *pcVar4;
  char *pcVar5;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar2 == 0) {
    *(uint *)&this_ptr->field_0xc368 = 0x3f400000;
  }
  else {
    *(uint *)&this_ptr->field_0xc368 = 0x3f800000;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xc2fc = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 L ForeArm",1);
  *(int *)&this_ptr->field_0xc308 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 R ForeArm",1);
  *(int *)&this_ptr->field_0xc30c = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 L UpperArm",1);
  *(int *)&this_ptr->field_0xc310 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 R UpperArm",1);
  *(int *)&this_ptr->field_0xc314 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  *(int *)&this_ptr->field_0xc318 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  *(int *)&this_ptr->field_0xc31c = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  *(int *)&this_ptr->field_0xc300 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0xc304 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  *(int *)&this_ptr->field_0xc320 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  *(int *)&this_ptr->field_0xc324 = iVar2;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,&DAT_005d7e0e,1);
  *(int *)&this_ptr->field_0xc328 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"l4arm",1);
  *(int *)&this_ptr->field_0xc32c = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,&DAT_005d7e19,1);
  *(int *)&this_ptr->field_0xc330 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"r4arm",0);
  *(int *)&this_ptr->field_0xc334 = iVar2;
  if (iVar2 < 0) {
    *(uint *)&this_ptr->field_0xc334 = 0x3b;
  }
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"waist",0);
  *(int *)&this_ptr->field_0xc338 = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"torso",1);
  *(int *)&this_ptr->field_0xc33c = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,&DAT_005d7e30,1);
  *(uint *)&this_ptr->field_0x2384 = 0;
  *(int *)&this_ptr->field_0xc340 = iVar2;
  *(uint *)&this_ptr->field_0x25a8 = *(uint *)&this_ptr->field_0xc300;
  *(uint *)&this_ptr->field_0x25ac = *(uint *)&this_ptr->field_0xc32c;
  *(uint *)&this_ptr->field_0x2620 = *(uint *)&this_ptr->field_0xc304;
  *(uint *)&this_ptr->field_0x2624 = *(uint *)&this_ptr->field_0xc334;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510((CEnemy *)this_ptr);
  *(uint *)&this_ptr->field_0xfc = (uint)(*(int *)&this_ptr->field_0xc2ec != 0);
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
  *(float *)&this_ptr->field_0xc35c = fVar3;
  if ((-1 < *(int *)&this_ptr->field_0xc338) && (*(float *)&this_ptr->field_0x3000 < 0.0)) {
    *(float *)&this_ptr->field_0x3000 = *(float *)&this_ptr->field_0x2490 + (float)_DAT_005d7ef3;
  }
  str1 = &this_ptr->field_0x24a8;
  *(uint *)&this_ptr->field_0xc348 = 0;
  iVar2 = _stricmp(str1,"d_cooper.dfm");
  pcVar5 = &this_ptr->field_0xc36c;
  if (iVar2 == 0) {
    pcVar4 = &DAT_005d7e42;
  }
  else {
    iVar2 = _stricmp(str1,"d_deputy.dfm");
    if (iVar2 == 0) {
      pcVar4 = &DAT_005d7e52;
    }
    else {
      iVar2 = _stricmp(str1,"d_editor.dfm");
      if (iVar2 == 0) {
        pcVar4 = &DAT_005d7e62;
      }
      else {
        iVar2 = _stricmp(str1,"d_gretchen.dfm");
        if (iVar2 == 0) {
          pcVar4 = &DAT_005d7e74;
        }
        else {
          iVar2 = _stricmp(str1,"d_innkeeper.dfm");
          if (iVar2 == 0) {
            pcVar4 = &DAT_005d7e87;
          }
          else {
            iVar2 = _stricmp(str1,"d_librarian.dfm");
            if (iVar2 == 0) {
              pcVar4 = &DAT_005d7e9a;
            }
            else {
              iVar2 = _stricmp(str1,"d_marm.dfm");
              if (iVar2 == 0) {
                pcVar4 = &DAT_005d7ea8;
              }
              else {
                iVar2 = _stricmp(str1,"d_mrsbrody.dfm");
                if (iVar2 == 0) {
                  pcVar4 = &DAT_005d7eba;
                }
                else {
                  iVar2 = _stricmp(str1,"d_pastor.dfm");
                  if (iVar2 == 0) {
                    pcVar4 = &DAT_005d7eca;
                  }
                  else {
                    iVar2 = _stricmp(str1,"d_sheriff.dfm");
                    if (iVar2 == 0) {
                      pcVar4 = &DAT_005d7edb;
                    }
                    else {
                      iVar2 = _stricmp(str1,"d_shopkeep.dfm");
                      if (iVar2 == 0) {
                        pcVar4 = &DAT_005d7eed;
                      }
                      else {
                        pcVar4 = &DAT_005d7ef0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr->field_0xc350 = 0;
  *(uint *)&this_ptr->field_0xc354 = 0;
  *(uint *)&this_ptr->field_0xc358 = 0;
  *(uint *)&this_ptr->field_0xc364 = 0;
  *(uint *)&this_ptr->field_0xc34c = 0;
  return;
}
