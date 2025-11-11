// Name: sound_sndmain.cpp_FUN_005aa240
// Address: 005aa240
// Address Range: [[005aa240, 005aa280]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa240()
// Cross-references:
//   sound_sndmain.cpp_FUN_005aae00 (005aae00) at 005aae29 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00681b30
//   undefined4 DAT_00681b34
//   double DOUBLE_00681b38 = 1
//   CSound* g_CSoundInstance

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005aa240(void)

{
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  DOUBLE_00681b38 = 1.0 / (double)CONCAT44(in_stack_00000008,in_stack_00000004);
  DAT_00681b30 = in_stack_00000004;
  DAT_00681b34 = in_stack_00000008;
  if (g_CSoundInstance == (CSound *)0x0) {
    return;
  }
  (*(code *)g_CSoundInstance->vtable->field_36)();
  return;
}


// Assembly code:
// 005aa240: FLD1
//   Label: sound_sndmain.cpp_FUN_005aa240
// 005aa242: FDIV double ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005aa246: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005aa24a: MOV [0x00681b30],EAX
//   XREF to: 00681b30 (WRITE)
// 005aa24f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005aa253: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005aa259: MOV [0x00681b34],EAX
//   XREF to: 00681b34 (WRITE)
// 005aa25e: FSTP double ptr [0x00681b38]
//   XREF to: 00681b38 (WRITE)
// 005aa264: TEST EDX,EDX
// 005aa266: JNZ 0x005aa269
//   XREF to: 005aa269 (CONDITIONAL_JUMP)
// 005aa268: RET
// 005aa269: PUSH EBX
//   Label: LAB_005aa269
// 005aa26a: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005aa26e: PUSH ECX
// 005aa26f: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005aa273: PUSH EBX
// 005aa274: MOV EAX,EDX
// 005aa276: MOV EDX,dword ptr [EDX]
// 005aa278: PUSH EAX
// 005aa279: CALL dword ptr [EDX + 0x24]
// 005aa27c: ADD ESP,0xc
// 005aa27f: POP EBX
// 005aa280: RET
