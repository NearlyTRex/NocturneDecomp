// Name: sound_snddx.cpp_FUN_005adf90
// Address: 005adf90
// Address Range: [[005adf90, 005adfe4]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_FUN_005adf90()
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0

#include "nocturne.h"

undefined4 sound_snddx_cpp_FUN_005adf90(void)

{
  undefined4 uVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined1 *puStack_18c;
  undefined1 auStack_188 [392];
  
  if (in_stack_00000004 == 0) {
    return 1;
  }
  uVar1 = sound_snddx_cpp_FUN_005ade70();
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)&puStack_18c,"DirectSux: Unable to %s.  (%s)",in_stack_0000000c,uVar1);
  puStack_18c = auStack_188;
  sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
  return 0;
}


// Assembly code:
// 005adf90: SUB ESP,0x190
//   Label: sound_snddx.cpp_FUN_005adf90
// 005adf96: MOV EAX,dword ptr [ESP + 0x194]
//   XREF to: Stack[0x4] (READ)
// 005adf9d: TEST EAX,EAX
// 005adf9f: JNZ 0x005adfad
//   XREF to: 005adfad (CONDITIONAL_JUMP)
// 005adfa1: MOV EAX,0x1
// 005adfa6: ADD ESP,0x190
// 005adfac: RET
// 005adfad: PUSH EAX
//   Label: LAB_005adfad
// 005adfae: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005adfb3: ADD ESP,0x4
// 005adfb6: PUSH EAX
// 005adfb7: MOV EDX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[0x8] (READ)
// 005adfbe: PUSH EDX
// 005adfbf: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005adfc4: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x190] (DATA)
// 005adfc8: PUSH EAX
// 005adfc9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005adfce: ADD ESP,0x10
// 005adfd1: MOV EAX,ESP
// 005adfd3: PUSH EAX
// 005adfd4: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005adfd9: ADD ESP,0x4
// 005adfdc: XOR EAX,EAX
// 005adfde: ADD ESP,0x190
// 005adfe4: RET
