// Name: core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
// Address: 0052e1d0
// Address Range: [[0052e1d0, 0052e2a6]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController * this_ptr)
// Cross-references:
//   core_motion.cpp_CMotionController_advance_FUN_0052d610 (0052d610) at 0052d822 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0063ab27 = 0.00100000000000000

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  SMotion *pSVar5;
  int in_stack_00000008;
  float in_stack_0000000c;
  float *in_stack_00000010;
  float local_20;
  
  pSVar5 = this_ptr->motion_list_ptr->motions + in_stack_00000008;
  fVar1 = *in_stack_00000010 * pSVar5->fps + in_stack_0000000c;
  iVar3 = 0;
  pSVar4 = pSVar5;
  local_20 = fVar1;
  if (0 < pSVar5->signal_count) {
    do {
      fVar2 = (float)pSVar4->signals[0].frame_number;
      if ((in_stack_0000000c <= fVar2) && (fVar2 <= local_20 + (float)DOUBLE_0063ab27)) {
        local_20 = fVar2 + (float)DOUBLE_0063ab27;
      }
      iVar3 = iVar3 + 1;
      pSVar4 = (SMotion *)(pSVar4->motion_name + 8);
    } while (iVar3 < pSVar5->signal_count);
  }
  if ((float)pSVar5->frame_count < local_20) {
    local_20 = (float)pSVar5->frame_count;
  }
  if (local_20 < fVar1) {
    *in_stack_00000010 = (local_20 - in_stack_0000000c) / pSVar5->fps;
    return;
  }
  return;
}


// Assembly code:
// 0052e1d0: PUSH EBX
//   Label: core_motion.cpp_CMotionController_advanceTween_FUN_0052e1d0
// 0052e1d1: PUSH ESI
// 0052e1d2: PUSH EDI
// 0052e1d3: PUSH EBP
// 0052e1d4: MOV EBP,ESP
// 0052e1d6: SUB ESP,0x18
// 0052e1d9: AND ESP,0xfffffff8
// 0052e1dc: IMUL EBX,dword ptr [EBP + 0x18],0x54c
//   XREF to: Stack[0x8] (READ)
// 0052e1e3: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052e1e6: MOV EDX,dword ptr [EDX]
// 0052e1e8: ADD EDX,0x968
// 0052e1ee: ADD EBX,EDX
// 0052e1f0: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0052e1f3: FLD float ptr [EDX]
// 0052e1f5: FMUL float ptr [EBX + 0x20]
// 0052e1f8: FADD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0052e1fb: XOR ECX,ECX
// 0052e1fd: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0052e201: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0052e205: MOV ESI,dword ptr [EBX + 0x4a4]
// 0052e20b: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0052e20f: TEST ESI,ESI
// 0052e211: JLE 0x0052e239
//   XREF to: 0052e239 (CONDITIONAL_JUMP)
// 0052e213: MOV EDX,EBX
// 0052e215: FLD float ptr [EBP + 0x1c]
//   Label: LAB_0052e215
//   XREF to: Stack[0xc] (READ)
// 0052e218: FILD dword ptr [EDX + 0x4a8]
// 0052e21e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0052e222: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0052e226: FNSTSW AX
// 0052e228: SAHF
// 0052e229: JBE 0x0052e269
//   XREF to: 0052e269 (CONDITIONAL_JUMP)
// 0052e22b: INC ECX
//   Label: LAB_0052e22b
// 0052e22c: MOV EDI,dword ptr [EBX + 0x4a4]
// 0052e232: ADD EDX,0x8
// 0052e235: CMP ECX,EDI
// 0052e237: JL 0x0052e215
//   XREF to: 0052e215 (CONDITIONAL_JUMP)
// 0052e239: FLD float ptr [ESP + 0x8]
//   Label: LAB_0052e239
//   XREF to: Stack[-0x20] (READ)
// 0052e23d: FILD dword ptr [EBX + 0x64]
// 0052e240: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (WRITE)
// 0052e244: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052e248: FNSTSW AX
// 0052e24a: SAHF
// 0052e24b: JBE 0x0052e255
//   XREF to: 0052e255 (CONDITIONAL_JUMP)
// 0052e24d: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052e251: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0052e255: FLD float ptr [ESP + 0x8]
//   Label: LAB_0052e255
//   XREF to: Stack[-0x20] (READ)
// 0052e259: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0052e25d: FNSTSW AX
// 0052e25f: SAHF
// 0052e260: JC 0x0052e291
//   XREF to: 0052e291 (CONDITIONAL_JUMP)
// 0052e262: MOV ESP,EBP
// 0052e264: POP EBP
// 0052e265: POP EDI
// 0052e266: POP ESI
// 0052e267: POP EBX
// 0052e268: RET
// 0052e269: FLD float ptr [ESP + 0x8]
//   Label: LAB_0052e269
//   XREF to: Stack[-0x20] (READ)
// 0052e26d: FADD double ptr [0x0063ab27]
//   XREF to: 0063ab27 (READ)
// 0052e273: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0052e277: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052e27a: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052e27d: FNSTSW AX
// 0052e27f: SAHF
// 0052e280: JC 0x0052e22b
//   XREF to: 0052e22b (CONDITIONAL_JUMP)
// 0052e282: FLD double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052e285: FADD double ptr [0x0063ab27]
//   XREF to: 0063ab27 (READ)
// 0052e28b: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0052e28f: JMP 0x0052e22b
//   XREF to: 0052e22b (UNCONDITIONAL_JUMP)
// 0052e291: FLD float ptr [ESP + 0x8]
//   Label: LAB_0052e291
//   XREF to: Stack[-0x20] (READ)
// 0052e295: FSUB float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0052e298: FDIV float ptr [EBX + 0x20]
// 0052e29b: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0052e29e: FSTP float ptr [EDX]
// 0052e2a0: MOV ESP,EBP
// 0052e2a2: POP EBP
// 0052e2a3: POP EDI
// 0052e2a4: POP ESI
// 0052e2a5: POP EBX
// 0052e2a6: RET
