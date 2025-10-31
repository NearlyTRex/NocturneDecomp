// Name: core_flamegun.cpp_FUN_004cb9b0
// Address: 004cb9b0
// Address Range: [[004cb9b0, 004cbaa1]]
// Convention: unknown
// Signature: undefined core_flamegun.cpp_FUN_004cb9b0()
// Globals:
//   TerminatedCString s_fl_throw_wav_0062a39b
//   undefined4 DAT_0065e270
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_sound.cpp_FUN_005b3b80
//   core_sound.cpp_FUN_005b3b90
//   core_weapon.cpp_CWeapon_process_FUN_005ee110

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb9b0(undefined4 param_1, undefined4 param_2)
    */

void core_flamegun_cpp_FUN_004cb9b0(void)

{
  float fVar1;
  CWeapon *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CWeapon *pCStack00000004;
  float fStack00000008;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(pCStack00000004);
  if (*(int *)pCStack00000004[1].base_actor.actor_name == 0) {
    if (*(int *)(pCStack00000004[1].base_actor.actor_name + 4) != 0) {
      core_sound_cpp_FUN_005b3b90();
      pCVar2 = pCStack00000004 + 1;
      (pCVar2->base_actor).actor_name[4] = '\0';
      (pCVar2->base_actor).actor_name[5] = '\0';
      (pCVar2->base_actor).actor_name[6] = '\0';
      (pCVar2->base_actor).actor_name[7] = '\0';
    }
  }
  else {
    iVar3 = core_sound_cpp_FUN_005b3b80();
    if (iVar3 == 0) {
      uVar4 = (*((pCStack00000004->base_actor).metadata.vtable)->playSound)
                        (&pCStack00000004->base_actor,"fl-throw.wav");
      *(undefined4 *)(pCStack00000004[1].base_actor.actor_name + 4) = uVar4;
    }
    fStack00000008 = *(float *)(pCStack00000004[1].base_actor.actor_name + 0xc) - fStack00000008;
    *(float *)(pCStack00000004[1].base_actor.actor_name + 0xc) = fStack00000008;
    if (fStack00000008 < 0.0) {
      fVar1 = 1.0 / _DAT_0065e270;
      iVar3 = pCStack00000004->ammo_count + -1;
      pCStack00000004->ammo_count = iVar3;
      *(float *)(pCStack00000004[1].base_actor.actor_name + 0xc) = fVar1 + fStack00000008;
      if (iVar3 < 0) {
        pCStack00000004->ammo_count = 0;
      }
    }
  }
  uVar4 = *(undefined4 *)pCStack00000004[1].base_actor.actor_name;
  pCStack00000004[1].base_actor.actor_name[0] = '\0';
  pCStack00000004[1].base_actor.actor_name[1] = '\0';
  pCStack00000004[1].base_actor.actor_name[2] = '\0';
  pCStack00000004[1].base_actor.actor_name[3] = '\0';
  *(undefined4 *)(pCStack00000004[1].base_actor.actor_name + 8) = uVar4;
  return;
}


// Assembly code:
// 004cb9b0: PUSH EBX
//   Label: core_flamegun.cpp_FUN_004cb9b0
// 004cb9b1: PUSH EDI
// 004cb9b2: PUSH EBP
// 004cb9b3: MOV EBP,ESP
// 004cb9b5: SUB ESP,0x8
// 004cb9b8: AND ESP,0xfffffff8
// 004cb9bb: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004cb9be: PUSH dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004cb9c1: PUSH EBX
// 004cb9c2: CALL core_weapon.cpp_CWeapon_process_FUN_005ee110
//   XREF to: 005ee110 (UNCONDITIONAL_CALL)
// 004cb9c7: MOV EDX,dword ptr [EBX + 0x578]
// 004cb9cd: ADD ESP,0x8
// 004cb9d0: TEST EDX,EDX
// 004cb9d2: JNZ 0x004cb9fe
//   XREF to: 004cb9fe (CONDITIONAL_JUMP)
// 004cb9d4: MOV ECX,dword ptr [EBX + 0x57c]
// 004cb9da: TEST ECX,ECX
// 004cb9dc: JNZ 0x004cba83
//   XREF to: 004cba83 (CONDITIONAL_JUMP)
// 004cb9e2: MOV EAX,dword ptr [EBX + 0x578]
//   Label: LAB_004cb9e2
// 004cb9e8: MOV dword ptr [EBX + 0x578],0x0
// 004cb9f2: MOV dword ptr [EBX + 0x580],EAX
// 004cb9f8: MOV ESP,EBP
// 004cb9fa: POP EBP
// 004cb9fb: POP EDI
// 004cb9fc: POP EBX
// 004cb9fd: RET
// 004cb9fe: MOV EAX,dword ptr [EBX + 0x57c]
//   Label: LAB_004cb9fe
// 004cba04: PUSH EAX
// 004cba05: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004cba0b: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004cba0c: CALL core_sound.cpp_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 004cba11: ADD ESP,0x8
// 004cba14: TEST EAX,EAX
// 004cba16: JZ 0x004cba69
//   XREF to: 004cba69 (CONDITIONAL_JUMP)
// 004cba18: FLD float ptr [EBX + 0x584]
//   Label: LAB_004cba18
// 004cba1e: FSUB float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004cba21: FLDZ
// 004cba23: FXCH
// 004cba25: FST float ptr [EBX + 0x584]
// 004cba2b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004cba2e: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004cba31: FNSTSW AX
// 004cba33: SAHF
// 004cba34: JBE 0x004cb9e2
//   XREF to: 004cb9e2 (CONDITIONAL_JUMP)
// 004cba36: FLD float ptr [0x0065e270]
//   XREF to: 0065e270 (READ)
// 004cba3c: FLD1
// 004cba3e: FDIVRP
// 004cba40: MOV ECX,dword ptr [EBX + 0x568]
// 004cba46: DEC ECX
// 004cba47: FADD double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004cba4a: MOV dword ptr [EBX + 0x568],ECX
// 004cba50: FSTP float ptr [EBX + 0x584]
// 004cba56: TEST ECX,ECX
// 004cba58: JGE 0x004cb9e2
//   XREF to: 004cb9e2 (CONDITIONAL_JUMP)
// 004cba5a: MOV dword ptr [EBX + 0x568],0x0
// 004cba64: JMP 0x004cb9e2
//   XREF to: 004cb9e2 (UNCONDITIONAL_JUMP)
// 004cba69: PUSH 0x62a39b
//   Label: LAB_004cba69
//   XREF to: 0062a39b (DATA)
// 004cba6e: MOV EAX,dword ptr [EBX + 0x154]
// 004cba74: PUSH EBX
// 004cba75: CALL dword ptr [EAX + 0x24]
// 004cba78: ADD ESP,0x8
// 004cba7b: MOV dword ptr [EBX + 0x57c],EAX
// 004cba81: JMP 0x004cba18
//   XREF to: 004cba18 (UNCONDITIONAL_JUMP)
// 004cba83: PUSH ECX
//   Label: LAB_004cba83
// 004cba84: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004cba8a: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004cba8b: CALL core_sound.cpp_FUN_005b3b90
//   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
// 004cba90: ADD ESP,0x8
// 004cba93: MOV dword ptr [EBX + 0x57c],0x0
// 004cba9d: JMP 0x004cb9e2
//   XREF to: 004cb9e2 (UNCONDITIONAL_JUMP)
