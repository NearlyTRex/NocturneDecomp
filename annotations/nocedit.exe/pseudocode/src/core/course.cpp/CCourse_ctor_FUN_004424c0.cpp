// Name: core_course.cpp_CCourse_ctor_FUN_004424c0
// Address: 004424c0
// Address Range: [[004424c0, 004424d8]]
// Convention: __cdecl
// Signature: CCourse * core_course.cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr)
// Cross-references:
//   core_bat.cpp_CBat_ctor_FUN_004147d0 (004147d0) at 004147e6 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e23f [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1720 (004d1720) at 004d1741 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050783a [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050bb60 (0050bb60) at 0050bb75 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054c850 (0054c850) at 0054c877 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_ctor_FUN_005e7940 (005e7940) at 005e798e [UNCONDITIONAL_CALL]

#include "nocturne.h"

CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_004424c0(CCourse *this_ptr)

{
  this_ptr->frame_list = (CCourseFrameList *)0x0;
  this_ptr->loop = 1;
  this_ptr->len = 0;
  return this_ptr;
}


// Assembly code:
// 004424c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_course.cpp_CCourse_ctor_FUN_004424c0
//   XREF to: Stack[0x4] (READ)
// 004424c4: MOV dword ptr [EAX + 0x4],0x0
// 004424cb: MOV dword ptr [EAX + 0x8],0x1
// 004424d2: MOV dword ptr [EAX],0x0
// 004424d8: RET
