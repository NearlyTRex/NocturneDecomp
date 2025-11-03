// Name: core_fire.cpp_CFireEffect_FUN_004c7db0
// Address: 004c7db0
// Address Range: [[004c7db0, 004c7e58]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7db0(CFireEffect * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireball_onCollision_FUN_004c1690 (004c1690) at 004c16be [UNCONDITIONAL_CALL]
// Globals:
//   CBulletTrail* g_BulletTrailActiveListHead
//   CFireball[64] g_FireballPool
//   undefined4 DAT_02d62edc
//   undefined4 DAT_02d62ee0
//   undefined4 DAT_02d62ee4
//   undefined4 DAT_02d62ee8
//   undefined4 DAT_02d62eec
//   undefined4 DAT_02d62f00
// Function calls:
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   sound_sndmain.cpp_SoundDelayComputeThing_FUN_005a9a00
//   sound_sndmain.cpp_YetAnother2ComputingDelayCall_FUN_005a98b0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7db0(CFireEffect *this_ptr)

{
  char *pcVar1;
  CBulletTrail *pCVar2;
  int iVar3;
  int iVar4;
  CFireball *this_ptr_00;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CFireball *pCStack00000010;
  int iStack00000014;
  int in_stack_00000030;
  int in_stack_00000034;
  
  pCVar2 = g_BulletTrailActiveListHead;
  iVar4 = (int)g_BulletTrailActiveListHead * 0x9c;
  pcVar1 = g_BulletTrailActiveListHead->field0_0x0;
  this_ptr_00 = g_FireballPool + (int)g_BulletTrailActiveListHead;
  g_BulletTrailActiveListHead = (CBulletTrail *)(pcVar1 + 1);
  if (0x3f < (int)(pcVar1 + 1)) {
    g_BulletTrailActiveListHead = (CBulletTrail *)0x0;
  }
  (*(g_FireballPool[(int)pCVar2].base.vtable)->setup)
            (&this_ptr_00->base,in_stack_00000008,in_stack_0000000c);
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0xc000,0xffff);
  g_FireballPool[(int)pCVar2].timer = iVar3;
  if (in_stack_00000030 == 0) {
    g_FireballPool[(int)pCVar2].fade_rate = 0x2000;
  }
  else {
    g_FireballPool[(int)pCVar2].fade_rate = 0x8000;
  }
  g_FireballPool[(int)pCVar2].lighting_active = in_stack_00000030;
  g_FireballPool[(int)pCVar2].first_update_flag = 0;
  g_FireballPool[(int)pCVar2].field9_0x58 = in_stack_00000034;
  pCStack00000010 = this_ptr_00;
  sound_sndmain_cpp_YetAnother2ComputingDelayCall_FUN_005a98b0();
  iStack00000014 = iVar4 + 0x2d62eb4;
  pCStack00000010 = (CFireball *)g_FireballPool[(int)pCVar2].field9_0x58;
  sound_sndmain_cpp_SoundDelayComputeThing_FUN_005a9a00();
  return;
}


// Assembly code:
// 004c7db0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c7db0
// 004c7db1: PUSH EDI
// 004c7db2: PUSH EBP
// 004c7db3: MOV EAX,[0x02d62ea4]
//   XREF to: 02d62ea4 (READ)
// 004c7db8: LEA EBX,[EAX*0x4 + 0x0]
// 004c7dbf: ADD EBX,EAX
// 004c7dc1: SHL EBX,0x3
// 004c7dc4: SUB EBX,EAX
// 004c7dc6: SHL EBX,0x2
// 004c7dc9: LEA EDX,[EAX + 0x1]
// 004c7dcc: ADD EBX,0x2d62ea8
//   XREF to: 02d62ea8 (DATA)
// 004c7dd2: MOV dword ptr [0x02d62ea4],EDX
//   XREF to: 02d62ea4 (WRITE)
// 004c7dd8: CMP EDX,0x40
// 004c7ddb: JL 0x004c7de7
//   XREF to: 004c7de7 (CONDITIONAL_JUMP)
// 004c7ddd: PUSH ESI
// 004c7dde: XOR ESI,ESI
// 004c7de0: MOV dword ptr [0x02d62ea4],ESI
//   XREF to: 02d62ea4 (WRITE)
// 004c7de6: POP ESI
// 004c7de7: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_004c7de7
//   XREF to: Stack[0xc] (READ)
// 004c7deb: PUSH EDI
// 004c7dec: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c7df0: PUSH EBP
// 004c7df1: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d62edc (DATA)
// 004c7df4: PUSH EBX
// 004c7df5: CALL dword ptr [EAX]
// 004c7df7: ADD ESP,0xc
// 004c7dfa: PUSH 0xffff
// 004c7dff: PUSH 0xc000
// 004c7e04: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004c7e09: ADD ESP,0x8
// 004c7e0c: MOV dword ptr [EBX + 0x38],EAX
//   XREF to: 02d62ee0 (DATA)
// 004c7e0f: CMP dword ptr [ESP + 0x1c],0x0
// 004c7e14: JNZ 0x004c7e50
//   XREF to: 004c7e50 (CONDITIONAL_JUMP)
// 004c7e16: MOV dword ptr [EBX + 0x3c],0x2000
//   XREF to: 02d62ee4 (DATA)
// 004c7e1d: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_004c7e1d
// 004c7e21: PUSH EBX
// 004c7e22: MOV dword ptr [EBX + 0x44],EAX
//   XREF to: 02d62eec (DATA)
// 004c7e25: MOV EAX,dword ptr [ESP + 0x24]
// 004c7e29: MOV dword ptr [EBX + 0x40],0x0
//   XREF to: 02d62ee8 (DATA)
// 004c7e30: PUSH EAX
// 004c7e31: MOV dword ptr [EBX + 0x58],EAX
//   XREF to: 02d62f00 (DATA)
// 004c7e34: CALL sound_sndmain.cpp_YetAnother2ComputingDelayCall_FUN_005a98b0
//   XREF to: 005a98b0 (UNCONDITIONAL_CALL)
// 004c7e39: ADD ESP,0x8
// 004c7e3c: LEA EAX,[EBX + 0xc]
// 004c7e3f: PUSH EAX
// 004c7e40: MOV ECX,dword ptr [EBX + 0x58]
//   XREF to: 02d62f00 (DATA)
// 004c7e43: PUSH ECX
// 004c7e44: CALL sound_sndmain.cpp_SoundDelayComputeThing_FUN_005a9a00
//   XREF to: 005a9a00 (UNCONDITIONAL_CALL)
// 004c7e49: ADD ESP,0x8
// 004c7e4c: POP EBP
// 004c7e4d: POP EDI
// 004c7e4e: POP EBX
// 004c7e4f: RET
// 004c7e50: MOV dword ptr [EBX + 0x3c],0x8000
//   Label: LAB_004c7e50
//   XREF to: 02d62ee4 (DATA)
// 004c7e57: JMP 0x004c7e1d
//   XREF to: 004c7e1d (UNCONDITIONAL_JUMP)
