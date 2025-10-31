// Name: core_stairs.cpp_FUN_005b95c0
// Address: 005b95c0
// Address Range: [[005b95c0, 005b961d]]
// Convention: __cdecl
// Signature: CSpotView * core_stairs.cpp_FUN_005b95c0(CSpotView * this_ptr)
// Cross-references:
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00596926 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_staticInit_FUN_005b95b0 (005b95b0) at 005b95b5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051d9f1 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00684170
//   undefined4 DAT_00684174
//   undefined4 DAT_03f6ba1c
//   undefined4 DAT_03f6ba20
// Function calls:
//   core_stairs.cpp_FUN_005b9620

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSpotView * __cdecl core_stairs_cpp_FUN_005b95c0(CSpotView *this_ptr)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = _DAT_03f6ba20;
  uVar3 = _DAT_03f6ba1c;
  uVar2 = _DAT_00684174;
  uVar1 = _DAT_00684170;
  this_ptr->field0_0x0[0x20] = '\0';
  this_ptr->field0_0x0[0x21] = '\0';
  this_ptr->field0_0x0[0x22] = '\0';
  this_ptr->field0_0x0[0x23] = '\0';
  *(undefined4 *)(this_ptr->field0_0x0 + 0x1c) = *(undefined4 *)(this_ptr->field0_0x0 + 0x20);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x18) = *(undefined4 *)(this_ptr->field0_0x0 + 0x1c);
  this_ptr->field0_0x0[0x10] = '\0';
  this_ptr->field0_0x0[0x11] = '\0';
  this_ptr->field0_0x0[0x12] = '\0';
  this_ptr->field0_0x0[0x13] = '\0';
  *(undefined4 *)this_ptr->field0_0x0 = uVar1;
  *(undefined4 *)(this_ptr->field0_0x0 + 4) = uVar2;
  *(undefined4 *)(this_ptr->field0_0x0 + 8) = uVar3;
  *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = uVar4;
  this_ptr->field0_0x0[0x14] = '\0';
  this_ptr->field0_0x0[0x15] = '\0';
  this_ptr->field0_0x0[0x16] = '\0';
  this_ptr->field0_0x0[0x17] = '\0';
  core_stairs_cpp_FUN_005b9620();
  return this_ptr;
}


// Assembly code:
// 005b95c0: PUSH EBX
//   Label: core_stairs.cpp_FUN_005b95c0
// 005b95c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b95c5: FLD float ptr [0x00684170]
//   XREF to: 00684170 (READ)
// 005b95cb: FLD float ptr [0x00684174]
//   XREF to: 00684174 (READ)
// 005b95d1: FLD float ptr [0x03f6ba1c]
//   XREF to: 03f6ba1c (READ)
// 005b95d7: LEA EAX,[EBX + 0x18]
// 005b95da: FLD float ptr [0x03f6ba20]
//   XREF to: 03f6ba20 (READ)
// 005b95e0: MOV dword ptr [EAX + 0x8],0x0
// 005b95e7: PUSH 0x1f
// 005b95e9: MOV EDX,dword ptr [EAX + 0x8]
// 005b95ec: MOV dword ptr [EAX + 0x4],EDX
// 005b95ef: MOV EDX,dword ptr [EAX + 0x4]
// 005b95f2: MOV dword ptr [EAX],EDX
// 005b95f4: MOV dword ptr [EBX + 0x10],0x0
// 005b95fb: PUSH EBX
// 005b95fc: FXCH ST3
// 005b95fe: FSTP float ptr [EBX]
// 005b9600: FXCH
// 005b9602: FSTP float ptr [EBX + 0x4]
// 005b9605: FSTP float ptr [EBX + 0x8]
// 005b9608: FSTP float ptr [EBX + 0xc]
// 005b960b: MOV dword ptr [EBX + 0x14],0x0
// 005b9612: CALL core_stairs.cpp_FUN_005b9620
//   XREF to: 005b9620 (UNCONDITIONAL_CALL)
// 005b9617: ADD ESP,0x8
// 005b961a: MOV EAX,EBX
// 005b961c: POP EBX
// 005b961d: RET
