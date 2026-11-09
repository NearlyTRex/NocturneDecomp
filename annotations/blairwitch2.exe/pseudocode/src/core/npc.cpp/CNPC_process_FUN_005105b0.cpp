// Name: core_npc.cpp_CNPC_process_FUN_005105b0
// Address: 005105b0
// Address Range: [[005105b0, 005108cb]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_process_FUN_005105b0(CNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_005105b0(CNPC *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  uint uVar1;
  int iVar2;
  CMotionList *this_ptr_01;
  byte bVar3;
  float afStackY_1074 [1014];
  CGore *this_ptr_02;
  CVector3f *position;
  char *pcVar4;
  float *pfVar5;
  EBloodType blood_type;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  byte auStack_74 [8];
  float fStack_6c;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [5];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float afStack_20 [3];
  int local_14;
  
  bVar3 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_0042a7a0((CCharacter *)this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  local_90 = delta_time * *(float *)&this_ptr->field_0x24344;
  local_14 = 0;
  while (0.0 < local_90) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&this_ptr->field_0x2b4,&stack0xffffff70);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar2);
  }
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x114))(this_ptr);
  if ((((1 < iVar2) && (*(int *)&this_ptr->field_0x70 == 1)) &&
      (*(int *)&this_ptr->field_0x24340 == 0)) && (*(int *)&this_ptr->field_0xdc == 0)) {
    core_skeleton_cpp_FUN_005469a0(&this_ptr->field_0x2b4,0);
    pfVar5 = afStack_4c + 0xb;
    afStack_20[0] = afStack_4c[2];
    afStack_4c[(uint)bVar3 * -2 + 0xc] = afStack_4c[(uint)bVar3 * -2 + 3];
    afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
         afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar5);
    blood_type = BLOOD_TYPE_RED;
    position = &CStack_5c;
    CStack_5c._0_4_ = CStack_68._0_4_;
    *(uint *)((int)&CStack_5c + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_68 + (uint)bVar3 * -8 + 4);
    this_ptr_02 = g_CGorePtr;
    *(uint *)((int)&CStack_5c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_68 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_02,position,blood_type);
    *(uint *)&this_ptr->field_0x24340 = 1;
    local_14 = 1;
  }
  *(uint *)&this_ptr->field_0x2594 = *(uint *)&this_ptr->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * *(float *)&this_ptr->field_0x24344);
  iVar2 = core_charactr_cpp_FUN_004287f0((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) goto LAB_00510740;
  uVar1 = *(uint *)&this_ptr->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00510712:
      pcVar4 = &DAT_005e151e;
    }
    else {
LAB_005108c0:
      pcVar4 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0
              ((CMotionController *)&this_ptr->field_0x2b4,pcVar4,1);
  }
  else {
    this_ptr_00 = &this_ptr->field_0x2b4;
    if (uVar1 < 3) {
      iVar2 = 0;
      pcVar4 = &DAT_005e151a;
      this_ptr_01 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr_00);
      iVar2 = core_motion_cpp_FUN_00502fa0(this_ptr_01,pcVar4,iVar2);
      if (iVar2 < 0) goto LAB_00510712;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr_00,iVar2,1);
    }
    else {
      if (uVar1 != 3) goto LAB_005108c0;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0
                ((CMotionController *)this_ptr_00,"STAND",1);
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
LAB_00510740:
  core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
  fStack_38 = *(float *)&this_ptr->field_0x2588 * delta_time;
  fStack_34 = *(float *)&this_ptr->field_0x258c * delta_time;
  fStack_30 = *(float *)&this_ptr->field_0x2590 * delta_time;
  fStack_80 = fStack_38;
  *(float *)((int)&stack0xffffff84 + (uint)bVar3 * -8) = afStack_4c[(uint)bVar3 * -2 + 6];
  *(float *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  fStack_50 = fStack_80 + *(float *)&this_ptr->field_0x257c;
  afStack_4c[0] = fStack_7c + *(float *)&this_ptr->field_0x2580;
  afStack_4c[1] = fStack_78 + *(float *)&this_ptr->field_0x2584;
  fStack_8c = fStack_50;
  *(float *)((int)&stack0xffffff78 + (uint)bVar3 * -8) = afStack_4c[(uint)bVar3 * -2];
  *(float *)((int)&stack0xffffff7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  fStack_2c = fStack_8c + *(float *)&this_ptr->field_0x2508;
  fStack_28 = fStack_88 + *(float *)&this_ptr->field_0x250c;
  fStack_24 = fStack_84 + *(float *)&this_ptr->field_0x2510;
  auStack_74._0_4_ = fStack_2c;
  *(float *)(auStack_74 + (uint)bVar3 * -8 + 4) = afStack_4c[(uint)bVar3 * -2 + 9];
  *(float *)(auStack_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  *(uint *)&this_ptr->field_0x2584 = 0;
  *(uint *)&this_ptr->field_0x2580 = *(uint *)&this_ptr->field_0x2584;
  *(uint *)&this_ptr->field_0x257c = *(uint *)&this_ptr->field_0x2580;
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x2510;
  core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,(CVector3f *)auStack_74);
  core_charactr_cpp_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  core_charactr_cpp_FUN_00429420((CCharacter *)this_ptr,delta_time,local_14);
  core_charactr_cpp_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
