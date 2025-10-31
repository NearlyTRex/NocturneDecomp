// Name: core_boxactor.cpp_FUN_0042307e
// Address: 0042307e
// Address Range: [[0042307e, 004230ad]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_0042307e()
// Globals:
//   void* switchdataD_00423068 = 00423090
//   TerminatedCString s_Custom_0061698f
//   TerminatedCString s_Flashlight_00616996
//   TerminatedCString s_Lantern_006169a1
//   TerminatedCString s_Globe_006169a9
//   TerminatedCString s_anon_006169af

#include "nocturne.h"

undefined8
core_boxactor_cpp_FUN_0042307e
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  switch(param_5) {
  case 0:
    return CONCAT44(param_2,"Custom");
  case 1:
    return CONCAT44(param_2,"Flashlight");
  case 2:
    return CONCAT44(param_2,"Lantern");
  case 3:
    return CONCAT44(param_2,"Globe");
  default:
    return CONCAT44(param_2,"???");
  }
}


// Assembly code:
// 0042307e: MOV EDX,EDX
//   Label: core_boxactor.cpp_FUN_0042307e
// 00423080: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00423084: CMP EAX,0x3
// 00423087: JA 0x004230a8
//   XREF to: 004230a8 (CONDITIONAL_JUMP)
// 00423089: JMP dword ptr [EAX*0x4 + 0x423068]
//   Label: switchD
//   XREF to: 00423090 (COMPUTED_JUMP)
//   XREF to: 00423096 (COMPUTED_JUMP)
//   XREF to: 0042309c (COMPUTED_JUMP)
//   XREF to: 004230a2 (COMPUTED_JUMP)
//   XREF to: 00423068 (DATA)
// 00423090: MOV EAX,0x61698f
//   Label: caseD_0
//   XREF to: 0061698f (DATA)
// 00423095: RET
// 00423096: MOV EAX,0x616996
//   Label: caseD_1
//   XREF to: 00616996 (DATA)
// 0042309b: RET
// 0042309c: MOV EAX,0x6169a1
//   Label: caseD_2
//   XREF to: 006169a1 (DATA)
// 004230a1: RET
// 004230a2: MOV EAX,0x6169a9
//   Label: caseD_3
//   XREF to: 006169a9 (DATA)
// 004230a7: RET
// 004230a8: MOV EAX,0x6169af
//   Label: default
//   XREF to: 006169af (DATA)
// 004230ad: RET
