// Name: core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
// Address: 004244b0
// Address Range: [[004244b0, 004246d6]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  CScript *this_ptr_00;
  uint uVar2;
  int iVar3;
  CCharacter *pCVar4;
  
  fVar1 = *(float *)&this_ptr->field_0x3050 - delta_time;
  *(float *)&this_ptr->field_0x3050 = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)&this_ptr->field_0x3050 = 0;
  }
  core_charactr_cpp_FUN_00425fb0(this_ptr,delta_time);
  core_charactr_cpp_FUN_00429320(this_ptr,delta_time);
  fVar1 = *(float *)&this_ptr->field_0x1022c - delta_time;
  *(float *)&this_ptr->field_0x1022c = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)&this_ptr->field_0x1022c = 0;
  }
  if ((0.0 < *(float *)&this_ptr->field_0x2820) &&
     (fVar1 = *(float *)&this_ptr->field_0x2820 - delta_time,
     *(float *)&this_ptr->field_0x2820 = fVar1, this_ptr_00 = g_CScriptPtr, fVar1 < 0.0)) {
    *(uint *)&this_ptr->field_0x2820 = 0;
    core_script_cpp_FUN_00529990(this_ptr_00,(CDemonActor *)this_ptr);
  }
  if (*(int *)&this_ptr->field_0x25b0 == 2) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bb8d0
              (g_CGamePtr,&this_ptr->field_0x25b4,
               *(float *)&this_ptr->field_0x25a8 / *(float *)&this_ptr->field_0x25ac,2.0);
  }
  if (*(int *)&this_ptr->field_0x2568 == 0) {
    if (*(float *)&this_ptr->field_0x2574 == _DAT_005f4084) {
      iVar3 = 0;
      pCVar4 = this_ptr;
      do {
        if (*(int *)&pCVar4->field_0x2620 != 0) {
          core_charactr_cpp_FUN_00428bd0(this_ptr,iVar3,0,0);
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CCharacter *)&pCVar4->field_0x78;
      } while (iVar3 < 2);
    }
    fVar1 = *(float *)&this_ptr->field_0xe4;
    *(uint *)&this_ptr->field_0xe4 = 0;
    *(float *)&this_ptr->field_0x24 = fVar1 + *(float *)&this_ptr->field_0x24;
    if ((*(float *)&this_ptr->field_0x2574 == _DAT_005f4084) || (*(int *)&this_ptr->field_0xdc != 0)
       ) {
      uVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x48))
                        (this_ptr,*(uint *)&this_ptr->field_0x3430,0);
      *(uint *)&this_ptr->field_0x2574 = uVar2;
    }
    *(uint *)&this_ptr->field_0x2570 =
         (uint)(*(float *)&this_ptr->field_0x24 <
               *(float *)&this_ptr->field_0x2574 + (float)_DAT_005ccc9e);
    *(uint *)&this_ptr->field_0x2584 = 0;
    *(uint *)&this_ptr->field_0x2580 = *(uint *)&this_ptr->field_0x2584;
    *(uint *)&this_ptr->field_0x257c = *(uint *)&this_ptr->field_0x2580;
    *(uint *)&this_ptr->field_0x2578 = 0;
    if (((*(int *)&this_ptr->field_0xdc == 0) && (*(int *)&this_ptr->field_0x2774 == 0)) &&
       (iVar3 = core_hero_cpp_isAnyHeroWithinCylinder_FUN_004ce180
                          (&this_ptr->field_0x20,*(uint *)&this_ptr->field_0x343c,
                           *(uint *)&this_ptr->field_0x3438), iVar3 == 0)) {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x10220);
      return 0;
    }
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}
