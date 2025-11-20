// Name: core_dynamite.cpp_FUN_0049cfb0
// Address: 0049cfb0
// Address Range: [[0049cfb0, 0049d11a]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cfb0()
// Globals:
//   double DOUBLE_00622ea2 = 5
//   float FLOAT_00622eaa = 0.5
//   undefined4 DAT_0065d30c
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CSound* g_CSoundPtr = 03f6af64
//   CFireEffect g_CFireEffectInstance
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_sound.cpp_CSound_killSfx_FUN_005b3b90
//   core_weapon.cpp_CWeapon_process_FUN_005ee110

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_dynamite.cpp_FUN_0049cfb0(undefined4 param_1, undefined4
   param_2) */

void core_dynamite_cpp_FUN_0049cfb0(void)

{
  uint sfx_handle;
  float fVar1;
  CWeapon *pCVar2;
  CSound *this_ptr;
  int iVar3;
  CBoundingBox3D *pCVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  CWeapon *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  pCVar2 = in_stack_00000004;
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  if (0.0 <= *(float *)pCVar2[1].base_actor.actor_name) {
    fVar1 = *(float *)pCVar2[1].base_actor.actor_name - in_stack_00000008;
    *(float *)pCVar2[1].base_actor.actor_name = fVar1;
    this_ptr = g_CSoundPtr;
    if (fVar1 < 0.0) {
      sfx_handle = *(uint *)(pCVar2[1].base_actor.actor_name + 0x10);
      pCVar2[1].base_actor.actor_name[0] = '\0';
      pCVar2[1].base_actor.actor_name[1] = '\0';
      pCVar2[1].base_actor.actor_name[2] = '\0';
      pCVar2[1].base_actor.actor_name[3] = '\0';
      core_sound_cpp_CSound_killSfx_FUN_005b3b90(this_ptr,sfx_handle);
      pCVar2 = pCVar2 + 1;
      (pCVar2->base_actor).actor_name[0x10] = '\0';
      (pCVar2->base_actor).actor_name[0x11] = '\0';
      (pCVar2->base_actor).actor_name[0x12] = '\0';
      (pCVar2->base_actor).actor_name[0x13] = '\0';
    }
    else {
      iVar3 = core_actor_cpp_randomChance_FUN_0040cd10
                        ((in_stack_00000008 * (float)DOUBLE_00622ea2 * fVar1) / _DAT_0065d30c);
      if (iVar3 != 0) {
        (*((pCVar2->base_actor).vtable)->getBoundingBox)
                  (&pCVar2->base_actor,(CBoundingBox3D *)&stack0xffffffc0);
        pCVar4 = (*((pCVar2->base_actor).vtable)->getBoundingBox)
                           (&pCVar2->base_actor,(CBoundingBox3D *)&stack0xffffffbc);
        in_stack_00000008 = (pCVar4->max).z;
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&pCVar2->base_actor,(CVector3f *)&stack0x00000018,
                            (CVector3f *)&stack0x00000000);
        if ((CVector3f *)&stack0x00000004 != pCVar5) {
          in_stack_00000004 = (CWeapon *)pCVar5->x;
          in_stack_00000008 = pCVar5->y;
          in_stack_0000000c = pCVar5->z;
        }
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 0049cfb0: PUSH EBX
//   Label: core_dynamite.cpp_FUN_0049cfb0
// 0049cfb1: PUSH ESI
// 0049cfb2: PUSH EBP
// 0049cfb3: MOV EBP,ESP
// 0049cfb5: SUB ESP,0x5c
// 0049cfb8: AND ESP,0xfffffff8
// 0049cfbb: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0049cfbe: PUSH dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049cfc1: PUSH EBX
// 0049cfc2: CALL core_weapon.cpp_CWeapon_process_FUN_005ee110
//   XREF to: 005ee110 (UNCONDITIONAL_CALL)
// 0049cfc7: FLD float ptr [EBX + 0x578]
// 0049cfcd: FLDZ
// 0049cfcf: ADD ESP,0x8
// 0049cfd2: FCOMPP
// 0049cfd4: FNSTSW AX
// 0049cfd6: SAHF
// 0049cfd7: JA 0x0049d01b
//   XREF to: 0049d01b (CONDITIONAL_JUMP)
// 0049cfd9: FLD float ptr [EBX + 0x578]
// 0049cfdf: FSUB float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049cfe2: FLDZ
// 0049cfe4: FXCH
// 0049cfe6: FST float ptr [EBX + 0x578]
// 0049cfec: FSTP double ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 0049cfef: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 0049cff2: FNSTSW AX
// 0049cff4: SAHF
// 0049cff5: JA 0x0049d021
//   XREF to: 0049d021 (CONDITIONAL_JUMP)
// 0049cff7: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049cffa: FMUL double ptr [0x00622ea2]
//   XREF to: 00622ea2 (READ)
// 0049d000: FMUL double ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 0049d003: FDIV float ptr [0x0065d30c]
//   XREF to: 0065d30c (READ)
// 0049d009: SUB ESP,0x4
// 0049d00c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x6c] (DATA)
// 0049d00f: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0049d014: ADD ESP,0x4
// 0049d017: TEST EAX,EAX
// 0049d019: JNZ 0x0049d04d
//   XREF to: 0049d04d (CONDITIONAL_JUMP)
// 0049d01b: MOV ESP,EBP
//   Label: LAB_0049d01b
// 0049d01d: POP EBP
// 0049d01e: POP ESI
// 0049d01f: POP EBX
// 0049d020: RET
// 0049d021: MOV ECX,dword ptr [EBX + 0x588]
//   Label: LAB_0049d021
// 0049d027: PUSH ECX
// 0049d028: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 0049d02e: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 0049d02f: MOV dword ptr [EBX + 0x578],0x0
// 0049d039: CALL core_sound.cpp_CSound_killSfx_FUN_005b3b90
//   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
// 0049d03e: ADD ESP,0x8
// 0049d041: MOV dword ptr [EBX + 0x588],0x0
// 0049d04b: JMP 0x0049d01b
//   XREF to: 0049d01b (UNCONDITIONAL_JUMP)
// 0049d04d: LEA EAX,[ESP + 0x20]
//   Label: LAB_0049d04d
//   XREF to: Stack[-0x48] (DATA)
// 0049d051: PUSH EAX
// 0049d052: MOV EDX,dword ptr [EBX + 0x154]
// 0049d058: PUSH EBX
// 0049d059: CALL dword ptr [EDX + 0x14]
// 0049d05c: LEA EDX,[EAX + 0xc]
// 0049d05f: FLD float ptr [EAX]
// 0049d061: FADD float ptr [EDX]
// 0049d063: ADD ESP,0x8
// 0049d066: FST float ptr [ESP + 0x44]
// 0049d06a: FLD float ptr [EAX + 0x4]
// 0049d06d: FADD float ptr [EDX + 0x4]
// 0049d070: FXCH
// 0049d072: FLD float ptr [0x00622eaa]
//   XREF to: 00622eaa (READ)
// 0049d078: FXCH
// 0049d07a: FMUL ST1
// 0049d07c: FXCH ST2
// 0049d07e: FST float ptr [ESP + 0x48]
// 0049d082: FLD float ptr [EAX + 0x8]
// 0049d085: FADD float ptr [EDX + 0x8]
// 0049d088: FXCH
// 0049d08a: FMUL ST2
// 0049d08c: FXCH
// 0049d08e: FST float ptr [ESP + 0x4c]
// 0049d092: FMULP ST2
// 0049d094: LEA EAX,[ESP + 0x8]
// 0049d098: FXCH ST2
// 0049d09a: FSTP float ptr [ESP + 0x38]
// 0049d09e: PUSH EAX
// 0049d09f: FXCH
// 0049d0a1: FSTP float ptr [ESP + 0x40]
// 0049d0a5: PUSH EBX
// 0049d0a6: FSTP float ptr [ESP + 0x48]
// 0049d0aa: MOV EDX,dword ptr [EBX + 0x154]
// 0049d0b0: CALL dword ptr [EDX + 0x14]
// 0049d0b3: ADD ESP,0x8
// 0049d0b6: MOV EAX,dword ptr [EAX + 0x14]
// 0049d0b9: MOV dword ptr [ESP + 0x40],EAX
// 0049d0bd: LEA EAX,[ESP + 0x38]
// 0049d0c1: PUSH EAX
// 0049d0c2: LEA EAX,[ESP + 0x54]
// 0049d0c6: PUSH EAX
// 0049d0c7: PUSH EBX
// 0049d0c8: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0049d0cd: MOV EBX,EAX
// 0049d0cf: LEA EAX,[ESP + 0x44]
// 0049d0d3: ADD ESP,0xc
// 0049d0d6: CMP EAX,EBX
// 0049d0d8: JZ 0x0049d0ee
//   XREF to: 0049d0ee (CONDITIONAL_JUMP)
// 0049d0da: MOV EAX,dword ptr [EBX]
// 0049d0dc: MOV dword ptr [ESP + 0x38],EAX
// 0049d0e0: MOV EAX,dword ptr [EBX + 0x4]
// 0049d0e3: MOV dword ptr [ESP + 0x3c],EAX
// 0049d0e7: MOV EAX,dword ptr [EBX + 0x8]
// 0049d0ea: MOV dword ptr [ESP + 0x40],EAX
// 0049d0ee: PUSH 0xffff
//   Label: LAB_0049d0ee
// 0049d0f3: PUSH 0x0
// 0049d0f5: PUSH 0x10000
// 0049d0fa: PUSH 0x4000
// 0049d0ff: PUSH 0x0
// 0049d101: LEA EAX,[ESP + 0x4c]
// 0049d105: PUSH EAX
// 0049d106: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0049d10c: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 0049d10d: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 0049d112: ADD ESP,0x1c
// 0049d115: MOV ESP,EBP
// 0049d117: POP EBP
// 0049d118: POP ESI
// 0049d119: POP EBX
// 0049d11a: RET
