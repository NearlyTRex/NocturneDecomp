// Name: core_stairs.cpp_FUN_005b9620
// Address: 005b9620
// Address Range: [[005b9620, 005b9667]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9620()
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043c8f5 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d5c8 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052caae [UNCONDITIONAL_CALL]
//   core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0 (0052bcb0) at 0052bdf3 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00596a02 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b95c0 (005b95c0) at 005b9612 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9670 (005b9670) at 005b9937 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051da03 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005b9620(undefined4 param_1, undefined4
   param_2) */

void core_stairs_cpp_FUN_005b9620(void)

{
  undefined4 *in_stack_00000004;
  uint in_stack_00000008;
  
  if ((in_stack_00000008 & 1) != 0) {
    in_stack_00000004[9] = in_stack_00000004[2];
  }
  if ((in_stack_00000008 & 2) != 0) {
    in_stack_00000004[10] = in_stack_00000004[3];
  }
  if ((in_stack_00000008 & 8) != 0) {
    in_stack_00000004[0xd] = in_stack_00000004[5];
    in_stack_00000004[0xc] = in_stack_00000004[4];
  }
  if ((in_stack_00000008 & 4) != 0) {
    in_stack_00000004[0xb] = *in_stack_00000004;
  }
  if ((in_stack_00000008 & 0x10) == 0) {
    return;
  }
  in_stack_00000004[0xe] = in_stack_00000004[1];
  return;
}


// Assembly code:
// 005b9620: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_stairs.cpp_FUN_005b9620
//   XREF to: Stack[0x4] (READ)
// 005b9624: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005b9628: TEST DL,0x1
// 005b962b: JNZ 0x005b9659
//   XREF to: 005b9659 (CONDITIONAL_JUMP)
// 005b962d: TEST DL,0x2
//   Label: LAB_005b962d
// 005b9630: JZ 0x005b9638
//   XREF to: 005b9638 (CONDITIONAL_JUMP)
// 005b9632: MOV ECX,dword ptr [EAX + 0xc]
// 005b9635: MOV dword ptr [EAX + 0x28],ECX
// 005b9638: TEST DL,0x8
//   Label: LAB_005b9638
// 005b963b: JZ 0x005b9649
//   XREF to: 005b9649 (CONDITIONAL_JUMP)
// 005b963d: FLD float ptr [EAX + 0x10]
// 005b9640: MOV ECX,dword ptr [EAX + 0x14]
// 005b9643: MOV dword ptr [EAX + 0x34],ECX
// 005b9646: FSTP float ptr [EAX + 0x30]
// 005b9649: TEST DL,0x4
//   Label: LAB_005b9649
// 005b964c: JZ 0x005b9653
//   XREF to: 005b9653 (CONDITIONAL_JUMP)
// 005b964e: MOV ECX,dword ptr [EAX]
// 005b9650: MOV dword ptr [EAX + 0x2c],ECX
// 005b9653: TEST DL,0x10
//   Label: LAB_005b9653
// 005b9656: JNZ 0x005b9661
//   XREF to: 005b9661 (CONDITIONAL_JUMP)
// 005b9658: RET
// 005b9659: MOV ECX,dword ptr [EAX + 0x8]
//   Label: LAB_005b9659
// 005b965c: MOV dword ptr [EAX + 0x24],ECX
// 005b965f: JMP 0x005b962d
//   XREF to: 005b962d (UNCONDITIONAL_JUMP)
// 005b9661: MOV EDX,dword ptr [EAX + 0x4]
//   Label: LAB_005b9661
// 005b9664: MOV dword ptr [EAX + 0x38],EDX
// 005b9667: RET
