// Name: core_charactr.cpp_CCharacter_FUN_00429870
// Address: 00429870
// Address Range: [[00429870, 00429a94]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_FUN_00429870(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CCharacter *pCVar4;
  float in_stack_00000008;
  
  fVar2 = *(float *)(this_ptr->cloth_data + 0x340) - in_stack_00000008;
  *(float *)(this_ptr->cloth_data + 0x340) = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->cloth_data[0x340] = '\0';
    this_ptr->cloth_data[0x341] = '\0';
    this_ptr->cloth_data[0x342] = '\0';
    this_ptr->cloth_data[0x343] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_0042a830(this_ptr);
  core_charactr_cpp_CCharacter_FUN_0042d4d0(this_ptr);
  fVar2 = *(float *)(this_ptr->cloth_data + 0x8d48) - in_stack_00000008;
  *(float *)(this_ptr->cloth_data + 0x8d48) = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->cloth_data[0x8d48] = '\0';
    this_ptr->cloth_data[0x8d49] = '\0';
    this_ptr->cloth_data[0x8d4a] = '\0';
    this_ptr->cloth_data[0x8d4b] = '\0';
  }
  if ((0.0 < *(float *)(this_ptr->field11_0x25a0 + 0x78)) &&
     (fVar2 = *(float *)(this_ptr->field11_0x25a0 + 0x78) - in_stack_00000008,
     *(float *)(this_ptr->field11_0x25a0 + 0x78) = fVar2, fVar2 < 0.0)) {
    this_ptr->field11_0x25a0[0x78] = '\0';
    this_ptr->field11_0x25a0[0x79] = '\0';
    this_ptr->field11_0x25a0[0x7a] = '\0';
    this_ptr->field11_0x25a0[0x7b] = '\0';
    core_script_cpp_FUN_00560140();
  }
  if (this_ptr->health_bar_mode == 2) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
  }
  if (*(int *)this_ptr->field2_0x240c == 0) {
    if (*(float *)(this_ptr->field2_0x240c + 8) == _DAT_0065b834) {
      iVar3 = 0;
      pCVar4 = this_ptr;
      do {
        if (pCVar4->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
          core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(this_ptr);
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CCharacter *)&(pCVar4->base_actor).orient_matrix.m[0].z;
      } while (iVar3 < 2);
    }
    fVar2 = (this_ptr->base_actor).field12_0xe0.y;
    (this_ptr->base_actor).field12_0xe0.y = 0.0;
    fVar1 = *(float *)(this_ptr->field2_0x240c + 8);
    (this_ptr->base_actor).location.position.y = fVar2 + (this_ptr->base_actor).location.position.y;
    if ((fVar1 == _DAT_0065b834) || ((this_ptr->base_actor).field11_0xdc != 0)) {
      fVar2 = (*((this_ptr->base_actor).vtable)->cylinderGroundCheck)
                        (&this_ptr->base_actor,*(float *)(this_ptr->cloth_data + 0x344),
                         (CVector3f *)0x0);
      *(float *)(this_ptr->field2_0x240c + 8) = fVar2;
    }
    *(uint *)(this_ptr->field2_0x240c + 4) =
         (uint)((this_ptr->base_actor).location.position.y <
               *(float *)(this_ptr->field2_0x240c + 8) + (float)0.01);
    this_ptr->field2_0x240c[0x18] = '\0';
    this_ptr->field2_0x240c[0x19] = '\0';
    this_ptr->field2_0x240c[0x1a] = '\0';
    this_ptr->field2_0x240c[0x1b] = '\0';
    *(uint *)(this_ptr->field2_0x240c + 0x14) =
         *(uint *)(this_ptr->field2_0x240c + 0x18);
    *(uint *)(this_ptr->field2_0x240c + 0x10) =
         *(uint *)(this_ptr->field2_0x240c + 0x14);
    iVar3 = (this_ptr->base_actor).field11_0xdc;
    this_ptr->field2_0x240c[0xc] = '\0';
    this_ptr->field2_0x240c[0xd] = '\0';
    this_ptr->field2_0x240c[0xe] = '\0';
    this_ptr->field2_0x240c[0xf] = '\0';
    if (((iVar3 == 0) && (*(int *)this_ptr->field11_0x25a0 == 0)) &&
       (iVar3 = core_hero_cpp_FUN_004f22a0(), iVar3 == 0)) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->cloth_data + 0x8d3c));
      return 0;
    }
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}
