// Name: core_charactr.cpp_CCharacter_FUN_00428e30
// Address: 00428e30
// Address Range: [[00428e30, 00428ed8]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00428e30(CCharacter * this_ptr)
// Cross-references:
//   core_hero.cpp_FUN_004f3af0 (004f3af0) at 004f3b0d [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042d060
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428e30(CCharacter *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *in_stack_0000000c;
  SCollisionInfo *in_stack_ffffffbc;
  float in_stack_ffffffd8;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar1 = (*(this_ptr->base_actor).metadata.vtable[1].hasCollision)
                    (&this_ptr->base_actor,in_stack_ffffffbc);
  if (0 < iVar1) {
    return;
  }
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffd4);
  if ((in_stack_0000000c != (float *)0x0) && (&fStack_1c != in_stack_0000000c)) {
    fStack_1c = *in_stack_0000000c;
    fStack_18 = in_stack_0000000c[1];
    fStack_14 = in_stack_0000000c[2];
  }
  (*(this_ptr->base_actor).metadata.vtable[1].playAmbientSoundWithVolume)
            (&this_ptr->base_actor,&stack0xffffffd8,in_stack_ffffffd8);
  fStack_14 = 6.112374e-39;
  core_charactr_cpp_CCharacter_FUN_0042d060(this_ptr);
  return;
}


// Assembly code:
// 00428e30: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_00428e30
// 00428e31: PUSH ESI
// 00428e32: SUB ESP,0x3c
// 00428e35: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 00428e39: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 00428e3d: PUSH EBX
// 00428e3e: MOV EAX,dword ptr [EBX + 0x154]
// 00428e44: CALL dword ptr [EAX + 0x120]
// 00428e4a: ADD ESP,0x4
// 00428e4d: TEST EAX,EAX
// 00428e4f: JLE 0x00428e57
//   XREF to: 00428e57 (CONDITIONAL_JUMP)
// 00428e51: ADD ESP,0x3c
// 00428e54: POP ESI
// 00428e55: POP EBX
// 00428e56: RET
// 00428e57: MOV EDX,dword ptr [EBX + 0xb7d4]
//   Label: LAB_00428e57
// 00428e5d: PUSH EDX
// 00428e5e: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00428e63: ADD ESP,0x4
// 00428e66: MOV EAX,ESP
// 00428e68: PUSH EAX
// 00428e69: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00428e6e: ADD ESP,0x4
// 00428e71: MOV ECX,0x461c3c00
// 00428e76: MOV EAX,dword ptr [ESP + 0x4c]
// 00428e7a: MOV dword ptr [ESP + 0x4],ECX
// 00428e7e: MOV dword ptr [ESP + 0x30],EAX
// 00428e82: TEST ESI,ESI
// 00428e84: JZ 0x00428ea2
//   XREF to: 00428ea2 (CONDITIONAL_JUMP)
// 00428e86: LEA EAX,[ESP + 0xc]
// 00428e8a: CMP EAX,ESI
// 00428e8c: JZ 0x00428ea2
//   XREF to: 00428ea2 (CONDITIONAL_JUMP)
// 00428e8e: MOV EAX,dword ptr [ESI]
// 00428e90: MOV dword ptr [ESP + 0xc],EAX
// 00428e94: MOV EAX,dword ptr [ESI + 0x4]
// 00428e97: MOV dword ptr [ESP + 0x10],EAX
// 00428e9b: MOV EAX,dword ptr [ESI + 0x8]
// 00428e9e: MOV dword ptr [ESP + 0x14],EAX
// 00428ea2: FLD float ptr [ESP + 0x54]
//   Label: LAB_00428ea2
// 00428ea6: FLDZ
// 00428ea8: FCOMPP
// 00428eaa: FNSTSW AX
// 00428eac: SAHF
// 00428ead: JA 0x00428eb7
//   XREF to: 00428eb7 (CONDITIONAL_JUMP)
// 00428eaf: MOV EAX,dword ptr [ESP + 0x54]
// 00428eb3: MOV dword ptr [ESP + 0x18],EAX
// 00428eb7: MOV ESI,ESP
//   Label: LAB_00428eb7
// 00428eb9: PUSH ESI
// 00428eba: MOV EAX,dword ptr [EBX + 0x154]
// 00428ec0: PUSH EBX
// 00428ec1: CALL dword ptr [EAX + 0x11c]
// 00428ec7: ADD ESP,0x8
// 00428eca: PUSH EBX
// 00428ecb: CALL core_charactr.cpp_CCharacter_FUN_0042d060
//   XREF to: 0042d060 (UNCONDITIONAL_CALL)
// 00428ed0: ADD ESP,0x4
// 00428ed3: ADD ESP,0x3c
// 00428ed6: POP ESI
// 00428ed7: POP EBX
// 00428ed8: RET
