// Name: core_ammobox.cpp_constructor_FUN_00411560
// Address: 00411560
// Address Range: [[00411560, 00411582]]
// Convention: unknown
// Signature: undefined core_ammobox.cpp_constructor_FUN_00411560()
// Cross-references:
//   core_ammobox.cpp_staticInit_FUN_00411530 (00411530) at 0041153c [DATA]
// Globals:
//   TerminatedCString s_core_ammobox_cpp_00614bac
// Function calls:
//   core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_ammobox_cpp_constructor_FUN_00411560(void)

{
  CAmmoBox *this_ptr;
  
  this_ptr = (CAmmoBox *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x34c,"..\\core\\ammobox.cpp",0x25);
  if (this_ptr == (CAmmoBox *)0x0) {
    return;
  }
  core_ammobox_cpp_CAmmoBox_ctor_FUN_004115a0(this_ptr);
  return;
}


// Assembly code:
// 00411560: PUSH 0x25
//   Label: core_ammobox.cpp_constructor_FUN_00411560
// 00411562: PUSH 0x614bac
//   XREF to: 00614bac (DATA)
// 00411567: PUSH 0x34c
// 0041156c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00411571: ADD ESP,0xc
// 00411574: TEST EAX,EAX
// 00411576: JNZ 0x00411579
//   XREF to: 00411579 (CONDITIONAL_JUMP)
// 00411578: RET
// 00411579: PUSH EAX
//   Label: LAB_00411579
// 0041157a: CALL core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0
//   XREF to: 004115a0 (UNCONDITIONAL_CALL)
// 0041157f: ADD ESP,0x4
// 00411582: RET
