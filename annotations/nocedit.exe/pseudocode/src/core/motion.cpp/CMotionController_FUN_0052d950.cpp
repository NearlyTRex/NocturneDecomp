// Name: core_motion.cpp_CMotionController_FUN_0052d950
// Address: 0052d950
// Address Range: [[0052d950, 0052da44]]
// Convention: __cdecl
// Signature: int core_motion.cpp_CMotionController_FUN_0052d950(CMotionController * this_ptr)
// Cross-references:
//   core_motion.cpp_CMotionController_advance_FUN_0052d610 (0052d610) at 0052d674 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 (0052db00) at 0052db7d [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0052d938 = 0052d9cd
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dbc0
//   core_motion.cpp_CMotionController_FUN_0052dde0
//   core_motion.cpp_CMotionController_FUN_0052de40

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_FUN_0052d950(CMotionController *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0(this_ptr);
  iVar4 = this_ptr->state_index;
  if ((iVar4 < 0) || (iVar4 == *(int *)(iVar1 + 0x24))) {
    this_ptr->field11_0x2c = 0;
    return 0;
  }
  if (((int *)this_ptr->field11_0x2c == (int *)0x0) || (iVar4 != *(int *)this_ptr->field11_0x2c)) {
    iVar2 = 0;
    iVar4 = 0;
    iVar3 = iVar1;
    if (0 < *(int *)(iVar1 + 0x68)) {
      do {
        if (*(int *)(iVar3 + 0x6c) == this_ptr->state_index) {
          iVar4 = iVar1 + 0x6c + iVar2 * 0x18;
          break;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < *(int *)(iVar1 + 0x68));
    }
    if ((iVar4 != 0) && (iVar4 != this_ptr->field11_0x2c)) {
      this_ptr->field11_0x2c = 0;
      core_motion_cpp_CMotionController_FUN_0052de40(this_ptr);
      switch(*(undefined4 *)(iVar4 + 4)) {
      case 1:
        core_motion_cpp_CMotionController_FUN_0052dde0(this_ptr);
        if (*(int *)(iVar4 + 0x14) != 0) {
          iVar4 = core_motion_cpp_CMotionController_FUN_0052dab0(this_ptr);
          this_ptr->state_index = *(int *)(iVar4 + 0x24);
        }
        return 1;
      case 2:
        this_ptr->field11_0x2c = iVar4;
        return 0;
      case 3:
      case 4:
      case 5:
      case 6:
        this_ptr->field11_0x2c = iVar4;
        core_motion_cpp_CMotionController_FUN_0052dbc0(this_ptr);
        return 0;
      }
    }
  }
  return 0;
}


// Assembly code:
// 0052d950: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_0052d950
// 0052d951: PUSH ESI
// 0052d952: PUSH EDI
// 0052d953: PUSH EBP
// 0052d954: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052d958: PUSH EBX
// 0052d959: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052d95e: ADD ESP,0x4
// 0052d961: MOV EDX,dword ptr [EBX + 0x28]
// 0052d964: MOV ESI,EAX
// 0052d966: TEST EDX,EDX
// 0052d968: JL 0x0052da37
//   XREF to: 0052da37 (CONDITIONAL_JUMP)
// 0052d96e: CMP EDX,dword ptr [EAX + 0x24]
// 0052d971: JZ 0x0052da37
//   XREF to: 0052da37 (CONDITIONAL_JUMP)
// 0052d977: MOV EDI,dword ptr [EBX + 0x2c]
// 0052d97a: TEST EDI,EDI
// 0052d97c: JNZ 0x0052d9fd
//   XREF to: 0052d9fd (CONDITIONAL_JUMP)
// 0052d982: MOV EDX,dword ptr [ESI + 0x68]
//   Label: LAB_0052d982
// 0052d985: XOR EAX,EAX
// 0052d987: XOR EBP,EBP
// 0052d989: TEST EDX,EDX
// 0052d98b: JLE 0x0052d9a4
//   XREF to: 0052d9a4 (CONDITIONAL_JUMP)
// 0052d98d: MOV EDX,ESI
// 0052d98f: IMUL EDI,EAX,0x18
//   Label: LAB_0052d98f
// 0052d992: MOV ECX,dword ptr [EDX + 0x6c]
// 0052d995: CMP ECX,dword ptr [EBX + 0x28]
// 0052d998: JNZ 0x0052da08
//   XREF to: 0052da08 (CONDITIONAL_JUMP)
// 0052d99e: ADD ESI,0x6c
// 0052d9a1: LEA EBP,[ESI + EDI*0x1]
// 0052d9a4: TEST EBP,EBP
//   Label: LAB_0052d9a4
// 0052d9a6: JZ 0x0052da01
//   XREF to: 0052da01 (CONDITIONAL_JUMP)
// 0052d9a8: CMP EBP,dword ptr [EBX + 0x2c]
// 0052d9ab: JZ 0x0052da01
//   XREF to: 0052da01 (CONDITIONAL_JUMP)
// 0052d9ad: PUSH EBX
// 0052d9ae: MOV dword ptr [EBX + 0x2c],0x0
// 0052d9b5: CALL core_motion.cpp_CMotionController_FUN_0052de40
//   XREF to: 0052de40 (UNCONDITIONAL_CALL)
// 0052d9ba: MOV EAX,dword ptr [EBP + 0x4]
// 0052d9bd: DEC EAX
// 0052d9be: ADD ESP,0x4
// 0052d9c1: CMP EAX,0x5
// 0052d9c4: JA 0x0052da01
//   XREF to: 0052da01 (CONDITIONAL_JUMP)
// 0052d9c6: JMP dword ptr [EAX*0x4 + 0x52d938]
//   Label: switchD
//   XREF to: 0052d9cd (COMPUTED_JUMP)
//   XREF to: 0052da19 (COMPUTED_JUMP)
//   XREF to: 0052da23 (COMPUTED_JUMP)
//   XREF to: 0052d938 (DATA)
// 0052d9cd: MOV EDI,dword ptr [EBP + 0x8]
//   Label: caseD_1
// 0052d9d0: PUSH dword ptr [EBP + 0xc]
// 0052d9d3: PUSH EDI
// 0052d9d4: PUSH EBX
// 0052d9d5: CALL core_motion.cpp_CMotionController_FUN_0052dde0
//   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
// 0052d9da: MOV EAX,dword ptr [EBP + 0x14]
// 0052d9dd: ADD ESP,0xc
// 0052d9e0: TEST EAX,EAX
// 0052d9e2: JZ 0x0052d9f3
//   XREF to: 0052d9f3 (CONDITIONAL_JUMP)
// 0052d9e4: PUSH EBX
// 0052d9e5: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052d9ea: MOV EAX,dword ptr [EAX + 0x24]
// 0052d9ed: ADD ESP,0x4
// 0052d9f0: MOV dword ptr [EBX + 0x28],EAX
// 0052d9f3: MOV EAX,0x1
//   Label: LAB_0052d9f3
// 0052d9f8: POP EBP
// 0052d9f9: POP EDI
// 0052d9fa: POP ESI
// 0052d9fb: POP EBX
// 0052d9fc: RET
// 0052d9fd: CMP EDX,dword ptr [EDI]
//   Label: LAB_0052d9fd
// 0052d9ff: JNZ 0x0052d982
//   XREF to: 0052d982 (CONDITIONAL_JUMP)
// 0052da01: XOR EAX,EAX
//   Label: default
// 0052da03: POP EBP
// 0052da04: POP EDI
// 0052da05: POP ESI
// 0052da06: POP EBX
// 0052da07: RET
// 0052da08: INC EAX
//   Label: LAB_0052da08
// 0052da09: MOV ECX,dword ptr [ESI + 0x68]
// 0052da0c: ADD EDX,0x18
// 0052da0f: CMP EAX,ECX
// 0052da11: JL 0x0052d98f
//   XREF to: 0052d98f (CONDITIONAL_JUMP)
// 0052da17: JMP 0x0052d9a4
//   XREF to: 0052d9a4 (UNCONDITIONAL_JUMP)
// 0052da19: MOV dword ptr [EBX + 0x2c],EBP
//   Label: caseD_2
// 0052da1c: XOR EAX,EAX
// 0052da1e: POP EBP
// 0052da1f: POP EDI
// 0052da20: POP ESI
// 0052da21: POP EBX
// 0052da22: RET
// 0052da23: PUSH EBP
//   Label: caseD_6
// 0052da24: PUSH EBX
// 0052da25: MOV dword ptr [EBX + 0x2c],EBP
// 0052da28: CALL core_motion.cpp_CMotionController_FUN_0052dbc0
//   XREF to: 0052dbc0 (UNCONDITIONAL_CALL)
// 0052da2d: ADD ESP,0x8
// 0052da30: XOR EAX,EAX
// 0052da32: POP EBP
// 0052da33: POP EDI
// 0052da34: POP ESI
// 0052da35: POP EBX
// 0052da36: RET
// 0052da37: MOV dword ptr [EBX + 0x2c],0x0
//   Label: LAB_0052da37
// 0052da3e: XOR EAX,EAX
// 0052da40: POP EBP
// 0052da41: POP EDI
// 0052da42: POP ESI
// 0052da43: POP EBX
// 0052da44: RET
