// Name: core_course.cpp_CCourse_dtor_FUN_004424e0
// Address: 004424e0
// Address Range: [[004424e0, 004424f1]]
// Convention: __cdecl
// Signature: CCourse * core_course.cpp_CCourse_dtor_FUN_004424e0(CCourse * this_ptr)
// Cross-references:
//   core_bat.cpp_CBat_dtor_FUN_00414fe0 (00414fe0) at 00414ff5 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442380 (00442380) at 00442395 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_dtor_FUN_00442310 (00442310) at 00442325 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e38e [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d28a0 (004d28a0) at 004d28b5 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050785c [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c4c0 (0050c4c0) at 0050c4d5 [UNCONDITIONAL_CALL]
//   core_minecar.cpp_FUN_00520f40 (00520f40) at 00520f55 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20 (005e8d20) at 005e8d35 [UNCONDITIONAL_CALL]
// Function calls:
//   core_course.cpp_CCourse_free_FUN_004426c0

#include "nocturne.h"

CCourse * __cdecl core_course_cpp_CCourse_dtor_FUN_004424e0(CCourse *this_ptr)

{
  core_course_cpp_CCourse_free_FUN_004426c0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004424e0: PUSH EBX
//   Label: core_course.cpp_CCourse_dtor_FUN_004424e0
// 004424e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004424e5: PUSH EBX
// 004424e6: CALL core_course.cpp_CCourse_free_FUN_004426c0
//   XREF to: 004426c0 (UNCONDITIONAL_CALL)
// 004424eb: ADD ESP,0x4
// 004424ee: MOV EAX,EBX
// 004424f0: POP EBX
// 004424f1: RET
