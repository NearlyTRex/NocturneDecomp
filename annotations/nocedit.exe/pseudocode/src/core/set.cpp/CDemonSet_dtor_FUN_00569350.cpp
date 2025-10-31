// Name: core_set.cpp_CDemonSet_dtor_FUN_00569350
// Address: 00569350
// Address Range: [[00569350, 005693b0]]
// Convention: __cdecl
// Signature: CDemonSet * core_set.cpp_CDemonSet_dtor_FUN_00569350(CDemonSet * this_ptr)
// Function calls:
//   core_set.cpp_CDemonSet_clear_FUN_005693c0
//   core_set.cpp_free3DSCameras_FUN_00571530
//   core_set.cpp_free3DSLights_FUN_00571550
//   core_set.cpp_freeRooms_FUN_00571570
//   core_set.cpp_freeVDBoxes_FUN_00571590

#include "nocturne.h"

CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00569350(CDemonSet *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  undefined4 uStack00000008;
  
  core_set_cpp_CDemonSet_clear_FUN_005693c0(this_ptr);
  core_set_cpp_freeVDBoxes_FUN_00571590((SVDBox **)this_ptr->vdir_boxes);
  core_set_cpp_freeRooms_FUN_00571570((SRoom **)(extraout_EAX + -0x554));
  core_set_cpp_free3DSLights_FUN_00571550((C3DSLight **)(extraout_EAX_00 + -0x141490));
  uStack00000008 = 0;
  core_set_cpp_free3DSCameras_FUN_00571530((C3DSCamera **)(extraout_EAX_01 + -0x19a2c));
  return (CDemonSet *)(extraout_EAX_02 + -4);
}


// Assembly code:
// 00569350: PUSH EBX
//   Label: core_set.cpp_CDemonSet_dtor_FUN_00569350
// 00569351: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00569355: PUSH EBX
// 00569356: CALL core_set.cpp_CDemonSet_clear_FUN_005693c0
//   XREF to: 005693c0 (UNCONDITIONAL_CALL)
// 0056935b: ADD ESP,0x4
// 0056935e: PUSH 0x0
// 00569360: ADD EBX,0x15b414
// 00569366: PUSH EBX
// 00569367: CALL core_set.cpp_freeVDBoxes_FUN_00571590
//   XREF to: 00571590 (UNCONDITIONAL_CALL)
// 0056936c: ADD ESP,0x8
// 0056936f: PUSH 0x0
// 00569371: SUB EAX,0x554
// 00569376: PUSH EAX
// 00569377: CALL core_set.cpp_freeRooms_FUN_00571570
//   XREF to: 00571570 (UNCONDITIONAL_CALL)
// 0056937c: ADD ESP,0x8
// 0056937f: PUSH 0x0
// 00569381: SUB EAX,0x141490
// 00569386: PUSH EAX
// 00569387: CALL core_set.cpp_free3DSLights_FUN_00571550
//   XREF to: 00571550 (UNCONDITIONAL_CALL)
// 0056938c: ADD ESP,0x8
// 0056938f: PUSH 0x0
// 00569391: SUB EAX,0x19a2c
// 00569396: PUSH EAX
// 00569397: CALL core_set.cpp_free3DSCameras_FUN_00571530
//   XREF to: 00571530 (UNCONDITIONAL_CALL)
// 0056939c: ADD ESP,0x8
// 0056939f: SUB EAX,0x4
// 005693a2: POP EBX
// 005693a3: LEA EAX,[EAX]
// 005693a9: LEA EDX,[EDX]
// 005693af: NOP
// 005693b0: RET
