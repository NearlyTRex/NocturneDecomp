// Name: core_game.cpp_adjustFudgePosition_FUN_004d8750
// Address: 004d8750
// Address Range: [[004d8750, 004d8881]]
// Convention: __cdecl
// Signature: int core_game.cpp_adjustFudgePosition_FUN_004d8750(CGame * this_ptr, float delta_time, int additional_param)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db38f [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062b285 = 0.100000000000000
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr

#include "nocturne.h"

int __cdecl
core_game_cpp_adjustFudgePosition_FUN_004d8750
          (CGame *this_ptr,float delta_time,int additional_param)

{
  int iVar1;
  undefined4 uStack00000018;
  float in_stack_00000024;
  undefined4 uStack0000002c;
  float in_stack_00000038;
  undefined4 uStack00000040;
  float in_stack_0000004c;
  undefined4 uStack00000054;
  float in_stack_00000060;
  undefined4 uStack00000068;
  float in_stack_00000074;
  float in_stack_00000088;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if ((iVar1 != 0) && (this_ptr->field102_0x9bc != 0)) {
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)this_ptr->field102_0x9bc = *(float *)this_ptr->field102_0x9bc - in_stack_00000024;
    }
    uStack00000018 = 0x4d87d9;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)this_ptr->field102_0x9bc = *(float *)this_ptr->field102_0x9bc + in_stack_00000038;
    }
    uStack0000002c = 0x4d87fa;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field102_0x9bc + 8) =
           *(float *)(this_ptr->field102_0x9bc + 8) - in_stack_0000004c;
    }
    uStack00000040 = 0x4d881d;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field102_0x9bc + 8) =
           *(float *)(this_ptr->field102_0x9bc + 8) + in_stack_00000060;
    }
    uStack00000054 = 0x4d8840;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field102_0x9bc + 4) =
           *(float *)(this_ptr->field102_0x9bc + 4) - in_stack_00000074;
    }
    uStack00000068 = 0x4d8863;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      iVar1 = this_ptr->field102_0x9bc;
      *(float *)(iVar1 + 4) = *(float *)(iVar1 + 4) + in_stack_00000088;
      return iVar1;
    }
  }
  return iVar1;
}


// Assembly code:
// 004d8750: PUSH EBX
//   Label: core_game.cpp_adjustFudgePosition_FUN_004d8750
// 004d8751: PUSH EBP
// 004d8752: MOV EBP,ESP
// 004d8754: SUB ESP,0xc
// 004d8757: AND ESP,0xfffffff8
// 004d875a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d875d: PUSH 0x1d
// 004d875f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d8764: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d8765: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d8767: CALL dword ptr [EDX]
// 004d8769: ADD ESP,0x8
// 004d876c: TEST EAX,EAX
// 004d876e: JZ 0x004d8779
//   XREF to: 004d8779 (CONDITIONAL_JUMP)
// 004d8770: CMP dword ptr [EBX + 0x9bc],0x0
// 004d8777: JNZ 0x004d877e
//   XREF to: 004d877e (CONDITIONAL_JUMP)
// 004d8779: MOV ESP,EBP
//   Label: LAB_004d8779
// 004d877b: POP EBP
// 004d877c: POP EBX
// 004d877d: RET
// 004d877e: MOV EAX,dword ptr [EBX + 0x9c0]
//   Label: LAB_004d877e
// 004d8784: PUSH 0x38
// 004d8786: MOV dword ptr [ESP + 0x4],EAX
// 004d878a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d878f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d8790: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d8792: CALL dword ptr [EDX]
// 004d8794: ADD ESP,0x8
// 004d8797: TEST EAX,EAX
// 004d8799: JZ 0x004d87ab
//   XREF to: 004d87ab (CONDITIONAL_JUMP)
// 004d879b: FLD float ptr [ESP]
// 004d879e: FLD ST0
// 004d87a0: FMUL double ptr [0x0062b285]
//   XREF to: 0062b285 (READ)
// 004d87a6: FSTP ST1
// 004d87a8: FSTP float ptr [ESP]
// 004d87ab: PUSH 0x4b
//   Label: LAB_004d87ab
// 004d87ad: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d87b2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d87b3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d87b5: CALL dword ptr [EDX + 0x4]
// 004d87b8: ADD ESP,0x8
// 004d87bb: TEST EAX,EAX
// 004d87bd: JZ 0x004d87cc
//   XREF to: 004d87cc (CONDITIONAL_JUMP)
// 004d87bf: MOV EAX,dword ptr [EBX + 0x9bc]
// 004d87c5: FLD float ptr [EAX]
// 004d87c7: FSUB float ptr [ESP]
// 004d87ca: FSTP float ptr [EAX]
// 004d87cc: PUSH 0x4d
//   Label: LAB_004d87cc
// 004d87ce: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d87d3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d87d4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d87d6: CALL dword ptr [EDX + 0x4]
// 004d87d9: ADD ESP,0x8
// 004d87dc: TEST EAX,EAX
// 004d87de: JZ 0x004d87ed
//   XREF to: 004d87ed (CONDITIONAL_JUMP)
// 004d87e0: MOV EAX,dword ptr [EBX + 0x9bc]
// 004d87e6: FLD float ptr [EAX]
// 004d87e8: FADD float ptr [ESP]
// 004d87eb: FSTP float ptr [EAX]
// 004d87ed: PUSH 0x48
//   Label: LAB_004d87ed
// 004d87ef: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d87f4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d87f5: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d87f7: CALL dword ptr [EDX + 0x4]
// 004d87fa: ADD ESP,0x8
// 004d87fd: TEST EAX,EAX
// 004d87ff: JZ 0x004d8810
//   XREF to: 004d8810 (CONDITIONAL_JUMP)
// 004d8801: MOV EAX,dword ptr [EBX + 0x9bc]
// 004d8807: FLD float ptr [EAX + 0x8]
// 004d880a: FSUB float ptr [ESP]
// 004d880d: FSTP float ptr [EAX + 0x8]
// 004d8810: PUSH 0x50
//   Label: LAB_004d8810
// 004d8812: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d8817: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d8818: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d881a: CALL dword ptr [EDX + 0x4]
// 004d881d: ADD ESP,0x8
// 004d8820: TEST EAX,EAX
// 004d8822: JZ 0x004d8833
//   XREF to: 004d8833 (CONDITIONAL_JUMP)
// 004d8824: MOV EAX,dword ptr [EBX + 0x9bc]
// 004d882a: FLD float ptr [EAX + 0x8]
// 004d882d: FADD float ptr [ESP]
// 004d8830: FSTP float ptr [EAX + 0x8]
// 004d8833: PUSH 0x1e
//   Label: LAB_004d8833
// 004d8835: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d883a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d883b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d883d: CALL dword ptr [EDX + 0x4]
// 004d8840: ADD ESP,0x8
// 004d8843: TEST EAX,EAX
// 004d8845: JZ 0x004d8856
//   XREF to: 004d8856 (CONDITIONAL_JUMP)
// 004d8847: MOV EAX,dword ptr [EBX + 0x9bc]
// 004d884d: FLD float ptr [EAX + 0x4]
// 004d8850: FSUB float ptr [ESP]
// 004d8853: FSTP float ptr [EAX + 0x4]
// 004d8856: PUSH 0x10
//   Label: LAB_004d8856
// 004d8858: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d885d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d885e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d8860: CALL dword ptr [EDX + 0x4]
// 004d8863: ADD ESP,0x8
// 004d8866: TEST EAX,EAX
// 004d8868: JZ 0x004d8779
//   XREF to: 004d8779 (CONDITIONAL_JUMP)
// 004d886e: MOV EAX,dword ptr [EBX + 0x9bc]
// 004d8874: FLD float ptr [EAX + 0x4]
// 004d8877: FADD float ptr [ESP]
// 004d887a: FSTP float ptr [EAX + 0x4]
// 004d887d: MOV ESP,EBP
// 004d887f: POP EBP
// 004d8880: POP EBX
// 004d8881: RET
