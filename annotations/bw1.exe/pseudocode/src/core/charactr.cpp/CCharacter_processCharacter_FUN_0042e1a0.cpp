// Name: core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
// Address: 0042e1a0
// Address Range: [[0042e1a0, 0042e40b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  CScript *this_ptr_00;
  int iVar2;
  CCharacter *pCVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_44 [6];
  uint auStack_2c [6];
  uint uStack_14;
  
  bVar6 = 0;
  fVar1 = *(float *)&this_ptr->field_0x2fe4 - delta_time;
  *(float *)&this_ptr->field_0x2fe4 = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)&this_ptr->field_0x2fe4 = 0;
  }
  core_charactr_cpp_FUN_0042f8e0(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432e00(this_ptr,delta_time);
  fVar1 = *(float *)&this_ptr->field_0xb9f0 - delta_time;
  *(float *)&this_ptr->field_0xb9f0 = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)&this_ptr->field_0xb9f0 = 0;
  }
  if ((0.0 < *(float *)&this_ptr->field_0x27b4) &&
     (fVar1 = *(float *)&this_ptr->field_0x27b4 - delta_time,
     *(float *)&this_ptr->field_0x27b4 = fVar1, this_ptr_00 = g_CScriptPtr, fVar1 < 0.0)) {
    *(uint *)&this_ptr->field_0x27b4 = 0;
    core_script_cpp_FUN_0054aca0(this_ptr_00,(CDemonActor *)this_ptr);
  }
  if (*(int *)&this_ptr->field_0x2540 == 2) {
    core_game_cpp_FUN_004d6340
              (g_CGamePtr,&this_ptr->field_0x2544,
               *(float *)&this_ptr->field_0x2538 / *(float *)&this_ptr->field_0x253c,2.0);
  }
  if (*(int *)&this_ptr->field_0x24fc == 0) {
    if (*(float *)&this_ptr->field_0x2504 == _DAT_005fd614) {
      iVar2 = 0;
      pCVar3 = this_ptr;
      do {
        if ((*(int *)&pCVar3->field_0x25b0 != 0) && (*(int *)&pCVar3->field_0x25ec == 0)) {
          core_charactr_cpp_FUN_00432690(this_ptr,iVar2,0,0);
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)&pCVar3->field_0x78;
      } while (iVar2 < 2);
    }
    fVar1 = *(float *)&this_ptr->field_0xe4;
    *(uint *)&this_ptr->field_0xe4 = 0;
    *(float *)&this_ptr->field_0x24 = fVar1 + *(float *)&this_ptr->field_0x24;
    if ((*(float *)&this_ptr->field_0x2504 == _DAT_005fd614) || (*(int *)&this_ptr->field_0xdc != 0)
       ) {
      uStack_14 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x40))
                            (this_ptr,*(uint *)&this_ptr->field_0x2fec,0);
      *(uint *)&this_ptr->field_0x2504 = uStack_14;
    }
    *(uint *)&this_ptr->field_0x2500 =
         (uint)(*(float *)&this_ptr->field_0x24 <
               *(float *)&this_ptr->field_0x2504 + (float)_DAT_005d592f);
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x2508 = 0;
    if (((*(int *)&this_ptr->field_0xdc == 0) && (*(int *)&this_ptr->field_0x2704 == 0)) &&
       (iVar2 = core_hero_cpp_FUN_004ea770
                          ((CVector3f *)&this_ptr->field_0x20,*(float *)&this_ptr->field_0x2ff8,
                           *(float *)&this_ptr->field_0x2ff4), iVar2 == 0)) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
      puVar4 = auStack_2c;
      puVar5 = auStack_44;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar2 = core_box_cpp_FUN_004207b0(auStack_44);
      if (iVar2 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xb9e4);
        return 0;
      }
    }
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
