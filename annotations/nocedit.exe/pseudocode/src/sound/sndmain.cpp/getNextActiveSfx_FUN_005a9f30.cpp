// Name: sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30
// Address: 005a9f30
// Address Range: [[005a9f30, 005a9f7b]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30(uint current_sfx_handle)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da973 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_SfxSlots[0].field7_0x74
//   undefined4 DAT_03f5db1c
//   undefined4 DAT_03f5dc40
//   undefined4 DAT_03f5dc44

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_005a9f30(uint current_sfx_handle)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (current_sfx_handle & 0x3f) + 1;
  if (uVar3 < 0x40) {
    iVar2 = uVar3 * 0x128;
    do {
      if ((*(int *)((int)g_SfxSlots[0].distance_to_speakers + iVar2 + -8) != 0) &&
         (iVar1 = *(int *)((int)g_SfxSlots[0].distance_to_speakers + iVar2 + -0xc), iVar1 != 0)) {
        return iVar1 << 6 | uVar3;
      }
      iVar2 = iVar2 + 0x128;
      uVar3 = uVar3 + 1;
    } while (iVar2 < 0x4a00);
  }
  return 0;
}


// Assembly code:
// 005a9f30: PUSH EBX
//   Label: sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30
// 005a9f31: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a9f35: AND EDX,0x3f
// 005a9f38: INC EDX
// 005a9f39: CMP EDX,0x40
// 005a9f3c: JGE 0x005a9f6f
//   XREF to: 005a9f6f (CONDITIONAL_JUMP)
// 005a9f3e: LEA EAX,[EDX*0x8 + 0x0]
// 005a9f45: ADD EAX,EDX
// 005a9f47: SHL EAX,0x2
// 005a9f4a: ADD EAX,EDX
// 005a9f4c: SHL EAX,0x3
// 005a9f4f: CMP dword ptr [EAX + 0x3f5db1c],0x0
//   Label: LAB_005a9f4f
//   XREF to: 03f5db1c (DATA)
//   XREF to: 03f5dc44 (DATA)
// 005a9f56: JZ 0x005a9f62
//   XREF to: 005a9f62 (CONDITIONAL_JUMP)
// 005a9f58: MOV EBX,dword ptr [EAX + 0x3f5db18]
//   XREF to: 03f5db18 (DATA)
//   XREF to: 03f5dc40 (DATA)
// 005a9f5e: TEST EBX,EBX
// 005a9f60: JNZ 0x005a9f73
//   XREF to: 005a9f73 (CONDITIONAL_JUMP)
// 005a9f62: ADD EAX,0x128
//   Label: LAB_005a9f62
// 005a9f67: INC EDX
// 005a9f68: CMP EAX,0x4a00
// 005a9f6d: JL 0x005a9f4f
//   XREF to: 005a9f4f (CONDITIONAL_JUMP)
// 005a9f6f: XOR EAX,EAX
//   Label: LAB_005a9f6f
// 005a9f71: POP EBX
// 005a9f72: RET
// 005a9f73: MOV EAX,EBX
//   Label: LAB_005a9f73
// 005a9f75: SHL EAX,0x6
// 005a9f78: OR EAX,EDX
// 005a9f7a: POP EBX
// 005a9f7b: RET
