// Name: core_demnfolk.cpp_FUN_00458bc0
// Address: 00458bc0
// Address Range: [[00458bc0, 00459037]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_FUN_00458bc0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_demnfolk_cpp_FUN_00458bc0(CEnemy *param_1)

{
  byte *str1;
  char cVar1;
  int iVar2;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar2 == 0) {
    *(uint *)&param_1[1].field_0x100 = 0x3f400000;
  }
  else {
    *(uint *)&param_1[1].field_0x100 = 0x3f800000;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x94 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L ForeArm",1);
  *(int *)&param_1[1].field_0xa0 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R ForeArm",1);
  *(int *)&param_1[1].field_0xa4 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L UpperArm",1);
  *(int *)&param_1[1].field_0xa8 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R UpperArm",1);
  *(int *)&param_1[1].field_0xac = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Foot",1);
  *(int *)&param_1[1].field_0xb0 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",1);
  *(int *)&param_1[1].field_0xb4 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",1);
  *(int *)&param_1[1].field_0x98 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",1);
  *(int *)&param_1[1].field_0x9c = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine",1);
  *(int *)&param_1[1].field_0xb8 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0xbc = iVar2;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar2 = core_skeleton_cpp_FUN_00565780(this_ptr_00,&DAT_005d7e0e,1);
  *(int *)&param_1[1].field_0xc0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"l4arm",1);
  *(int *)&param_1[1].field_0xc4 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00565780(this_ptr_00,&DAT_005d7e19,1);
  *(int *)&param_1[1].field_0xc8 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"r4arm",0);
  *(int *)&param_1[1].field_0xcc = iVar2;
  if (iVar2 < 0) {
    *(uint *)&param_1[1].field_0xcc = 0x3b;
  }
  iVar2 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"waist",0);
  *(int *)&param_1[1].field_0xd0 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"torso",1);
  *(int *)&param_1[1].field_0xd4 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_00565780(this_ptr_00,&DAT_005d7e30,1);
  *(uint *)&param_1->field_0x2384 = 0;
  *(int *)&param_1[1].field_0xd8 = iVar2;
  *(uint *)&param_1->field_0x25a8 = *(uint *)&param_1[1].field_0x98;
  *(uint *)&param_1->field_0x25ac = *(uint *)&param_1[1].field_0xc4;
  *(uint *)&param_1->field_0x2620 = *(uint *)&param_1[1].field_0x9c;
  *(uint *)&param_1->field_0x2624 = *(uint *)&param_1[1].field_0xcc;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  *(uint *)&param_1->field_0xfc = (uint)(*(int *)&param_1[1].field_0x84 != 0);
  uVar3 = core_actor_cpp_FUN_0040cc00(0,0x3f800000);
  *(uint *)&param_1[1].field_0xf4 = uVar3;
  if ((-1 < *(int *)&param_1[1].field_0xd0) && (*(float *)&param_1->field_0x3000 < 0.0)) {
    *(float *)&param_1->field_0x3000 = *(float *)&param_1->field_0x2490 + (float)_DAT_005d7ef3;
  }
  str1 = &param_1->field_0x24a8;
  *(uint *)&param_1[1].field_0xe0 = 0;
  iVar2 = _stricmp(str1,"d_cooper.dfm");
  pcVar5 = &param_1[1].field_0x104;
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
  *(uint *)&param_1[1].field_0xe8 = 0;
  *(uint *)&param_1[1].field_0xec = 0;
  *(uint *)&param_1[1].field_0xf0 = 0;
  *(uint *)&param_1[1].field_0xfc = 0;
  *(uint *)&param_1[1].field_0xe4 = 0;
  return;
}
