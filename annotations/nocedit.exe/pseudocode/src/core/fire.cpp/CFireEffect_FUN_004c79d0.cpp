// Name: core_fire.cpp_CFireEffect_FUN_004c79d0
// Address: 004c79d0
// Address Range: [[004c79d0, 004c7a5d]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
// Cross-references:
//   core_batcreat.cpp_FUN_00416030 (00416030) at 00416197 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004179a0 (004179a0) at 00417b07 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424830 (00424830) at 004249a7 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 004861c2 [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_FUN_0049cfb0 (0049cfb0) at 0049d10d [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8195 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c76a0 (004c76a0) at 004c7886 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_onCollision_FUN_004c1690 (004c1690) at 004c16e0 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_process_FUN_004c0b30 (004c0b30) at 004c0c41 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_process_FUN_004c4000 (004c4000) at 004c4131 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9c00 (004c9c00) at 004c9c76 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb340 (004cb340) at 004cb375 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_PlaySounds_FUN_004d1a40 (004d1a40) at 004d1d01 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0 (004e57d0) at 004e5813 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7720 (004f7720) at 004f7807 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fae00 (004fae00) at 004fae6a [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_005066b0 (005066b0) at 005069ac [UNCONDITIONAL_CALL]
//   core_minecar.cpp_FUN_00520eb0 (00520eb0) at 00520f15 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e7116 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1ac0 (005f1ac0) at 005f1c4a [UNCONDITIONAL_CALL]
// Globals:
//   CStake* g_StakeActiveListHead
//   CSpark[256] g_SparkPool
//   undefined4 DAT_02d53e34
//   undefined4 DAT_02d53e38
//   undefined4 DAT_02d53e3c
//   undefined4 DAT_02d53e40
//   undefined4 DAT_02d53e44
//   undefined4 DAT_02d53e48
// Function calls:
//   core_actor.cpp_getRandomInt_FUN_0040cc70

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c79d0(CFireEffect *this_ptr)

{
  CStake *pCVar1;
  int iVar2;
  CStake *pCVar3;
  CSpark *this_ptr_00;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  pCVar1 = g_StakeActiveListHead;
  pCVar3 = (CStake *)((int)&g_StakeActiveListHead->active + 1);
  this_ptr_00 = g_SparkPool + (int)g_StakeActiveListHead;
  g_StakeActiveListHead = pCVar3;
  if (0xff < (int)pCVar3) {
    g_StakeActiveListHead = (CStake *)0x0;
  }
  (*(g_SparkPool[(int)pCVar1].base.vtable)->setup)
            (&this_ptr_00->base,in_stack_00000008,in_stack_0000000c);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc70(0xc000,0xffff);
  g_SparkPool[(int)pCVar1].first_update_flag = 0;
  g_SparkPool[(int)pCVar1].intensity_current =
       (uint)((longlong)in_stack_00000034 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)in_stack_00000034 * (longlong)iVar2) >> 0x20) << 0x10;
  g_SparkPool[(int)pCVar1].intensity_target = in_stack_00000030;
  g_SparkPool[(int)pCVar1].field4_0x44 = in_stack_00000038;
  g_SparkPool[(int)pCVar1].fade_rate = in_stack_0000003c;
  return;
}


// Assembly code:
// 004c79d0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c79d0
// 004c79d1: PUSH EDI
// 004c79d2: PUSH EBP
// 004c79d3: MOV EDX,dword ptr [0x02d53dfc]
//   XREF to: 02d53dfc (READ)
// 004c79d9: LEA EAX,[EDX*0x4 + 0x0]
// 004c79e0: ADD EAX,EDX
// 004c79e2: SHL EAX,0x2
// 004c79e5: MOV EBX,0x2d53e00
//   XREF to: 02d53e00 (DATA)
// 004c79ea: SUB EAX,EDX
// 004c79ec: INC EDX
// 004c79ed: SHL EAX,0x2
// 004c79f0: MOV dword ptr [0x02d53dfc],EDX
//   XREF to: 02d53dfc (WRITE)
// 004c79f6: ADD EBX,EAX
// 004c79f8: CMP EDX,0x100
// 004c79fe: JL 0x004c7a0a
//   XREF to: 004c7a0a (CONDITIONAL_JUMP)
// 004c7a00: PUSH ESI
// 004c7a01: XOR ESI,ESI
// 004c7a03: MOV dword ptr [0x02d53dfc],ESI
//   XREF to: 02d53dfc (WRITE)
// 004c7a09: POP ESI
// 004c7a0a: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_004c7a0a
//   XREF to: Stack[0xc] (READ)
// 004c7a0e: PUSH EDI
// 004c7a0f: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c7a13: PUSH EBP
// 004c7a14: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d53e34 (DATA)
// 004c7a17: PUSH EBX
// 004c7a18: CALL dword ptr [EAX]
// 004c7a1a: ADD ESP,0xc
// 004c7a1d: PUSH 0xffff
// 004c7a22: PUSH 0xc000
// 004c7a27: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004c7a2c: ADD ESP,0x8
// 004c7a2f: MOV EDX,EAX
// 004c7a31: MOV EAX,dword ptr [ESP + 0x20]
// 004c7a35: IMUL EDX
// 004c7a37: SHRD EAX,EDX,0x10
// 004c7a3b: MOV dword ptr [EBX + 0x40],0x0
//   XREF to: 02d53e40 (DATA)
// 004c7a42: MOV dword ptr [EBX + 0x38],EAX
//   XREF to: 02d53e38 (DATA)
// 004c7a45: MOV EAX,dword ptr [ESP + 0x1c]
// 004c7a49: MOV dword ptr [EBX + 0x3c],EAX
//   XREF to: 02d53e3c (DATA)
// 004c7a4c: MOV EAX,dword ptr [ESP + 0x24]
// 004c7a50: MOV dword ptr [EBX + 0x44],EAX
//   XREF to: 02d53e44 (DATA)
// 004c7a53: MOV EAX,dword ptr [ESP + 0x28]
// 004c7a57: MOV dword ptr [EBX + 0x48],EAX
//   XREF to: 02d53e48 (DATA)
// 004c7a5a: POP EBP
// 004c7a5b: POP EDI
// 004c7a5c: POP EBX
// 004c7a5d: RET
