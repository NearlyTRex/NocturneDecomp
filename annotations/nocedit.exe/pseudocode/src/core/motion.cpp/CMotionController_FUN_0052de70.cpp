// Name: core_motion.cpp_CMotionController_FUN_0052de70
// Address: 0052de70
// Address Range: [[0052de70, 0052e01e]]
// Convention: unknown
// Signature: undefined core_motion.cpp_CMotionController_FUN_0052de70()
// Cross-references:
//   core_motion.cpp_CMotionController_advance_FUN_0052d610 (0052d610) at 0052d749 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0052de54 = 0052df33
//   undefined4 DAT_0063aaff
//   undefined4 DAT_0063ab07
//   undefined4 DAT_0063ab0f

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_motion.cpp_CMotionController_FUN_0052de70(undefined4 param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) */

undefined4 core_motion_cpp_CMotionController_FUN_0052de70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_stack_00000004;
  int *in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_00000010;
  float local_20;
  float fStack_18;
  
  iVar4 = *in_stack_00000008 * 0x54c + *in_stack_00000004 + 0x968;
  uVar5 = 0;
  iVar3 = 0;
  local_20 = in_stack_00000010 * *(float *)(iVar4 + 0x20) + *in_stack_0000000c;
  iVar2 = iVar4;
  if (0 < *(int *)(iVar4 + 0x4a4)) {
    do {
      iVar1 = *(int *)(iVar2 + 0x4a8);
      if ((*in_stack_0000000c <= (float)iVar1) && ((float)iVar1 <= local_20 + (float)_DAT_0063ab0f))
      {
        local_20 = (float)iVar1 + (float)_DAT_0063ab0f;
        uVar5 = *(undefined4 *)(iVar2 + 0x4ac);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(int *)(iVar4 + 0x4a4));
  }
  if ((double)local_20 < (double)*(int *)(iVar4 + 100) + _DAT_0063aaff) {
    (**(code **)(in_stack_00000004[0x14] + 8))();
    *in_stack_0000000c = local_20;
    return uVar5;
  }
  (**(code **)(in_stack_00000004[0x14] + 8))();
  switch(*(undefined4 *)(iVar4 + 0x30)) {
  case 3:
  case 4:
  case 5:
  case 6:
    *in_stack_0000000c = (float)(*(int *)(iVar4 + 100) + -1);
    return uVar5;
  }
  fStack_18 = *(float *)(iVar4 + 0x38);
  if (fStack_18 == _DAT_0063ab07) {
    iVar2 = (**(code **)(in_stack_00000004[0x14] + 4))();
    fStack_18 = (float)iVar2;
  }
  *in_stack_00000008 = *(int *)(iVar4 + 0x34);
  *in_stack_0000000c = fStack_18;
  return uVar5;
}


// Assembly code:
// 0052de70: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_0052de70
// 0052de71: PUSH ESI
// 0052de72: PUSH EDI
// 0052de73: PUSH EBP
// 0052de74: MOV EBP,ESP
// 0052de76: SUB ESP,0x18
// 0052de79: AND ESP,0xfffffff8
// 0052de7c: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0052de7f: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052de82: IMUL EBX,dword ptr [EDX],0x54c
// 0052de88: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052de8b: MOV EAX,dword ptr [EAX]
// 0052de8d: ADD EAX,0x968
// 0052de92: ADD EBX,EAX
// 0052de94: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0052de97: FMUL float ptr [EBX + 0x20]
// 0052de9a: XOR EDI,EDI
// 0052de9c: XOR ECX,ECX
// 0052de9e: FADD float ptr [ESI]
// 0052dea0: MOV EAX,dword ptr [EBX + 0x4a4]
// 0052dea6: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0052deaa: TEST EAX,EAX
// 0052deac: JLE 0x0052ded7
//   XREF to: 0052ded7 (CONDITIONAL_JUMP)
// 0052deae: MOV EDX,EBX
// 0052deb0: FLD float ptr [ESI]
//   Label: LAB_0052deb0
// 0052deb2: FILD dword ptr [EDX + 0x4a8]
// 0052deb8: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0052debc: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0052dec0: FNSTSW AX
// 0052dec2: SAHF
// 0052dec3: JBE 0x0052df4a
//   XREF to: 0052df4a (CONDITIONAL_JUMP)
// 0052dec9: INC ECX
//   Label: LAB_0052dec9
// 0052deca: MOV EAX,dword ptr [EBX + 0x4a4]
// 0052ded0: ADD EDX,0x8
// 0052ded3: CMP ECX,EAX
// 0052ded5: JL 0x0052deb0
//   XREF to: 0052deb0 (CONDITIONAL_JUMP)
// 0052ded7: FILD dword ptr [EBX + 0x64]
//   Label: LAB_0052ded7
// 0052deda: FADD double ptr [0x0063aaff]
//   XREF to: 0063aaff (READ)
// 0052dee0: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0052dee4: FCOMPP
// 0052dee6: FNSTSW AX
// 0052dee8: SAHF
// 0052dee9: JC 0x0052dfe6
//   XREF to: 0052dfe6 (CONDITIONAL_JUMP)
// 0052deef: MOV EDX,dword ptr [EBX + 0x60]
// 0052def2: ADD EDX,dword ptr [EBX + 0x64]
// 0052def5: PUSH dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0052def8: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0052defc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052deff: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0052df03: SUB ESP,0x4
// 0052df06: MOV EAX,dword ptr [EAX + 0x50]
// 0052df09: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0052df0c: SUB ESP,0x4
// 0052df0f: FILD dword ptr [EBX + 0x60]
// 0052df12: FADD float ptr [ESI]
// 0052df14: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052df17: FSTP float ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0052df1a: PUSH EDX
// 0052df1b: CALL dword ptr [EAX + 0x8]
// 0052df1e: MOV EAX,dword ptr [EBX + 0x30]
// 0052df21: SUB EAX,0x3
// 0052df24: ADD ESP,0x10
// 0052df27: CMP EAX,0x3
// 0052df2a: JA 0x0052df7f
//   XREF to: 0052df7f (CONDITIONAL_JUMP)
// 0052df2c: JMP dword ptr [EAX*0x4 + 0x52de54]
//   Label: switchD
//   XREF to: 0052df33 (COMPUTED_JUMP)
//   XREF to: 0052de54 (DATA)
// 0052df33: MOV EAX,dword ptr [EBX + 0x64]
//   Label: caseD_6
// 0052df36: DEC EAX
// 0052df37: MOV dword ptr [ESP + 0x14],EAX
// 0052df3b: FILD dword ptr [ESP + 0x14]
// 0052df3f: FSTP float ptr [ESI]
// 0052df41: MOV EAX,EDI
// 0052df43: MOV ESP,EBP
// 0052df45: POP EBP
// 0052df46: POP EDI
// 0052df47: POP ESI
// 0052df48: POP EBX
// 0052df49: RET
// 0052df4a: FLD float ptr [ESP + 0x8]
//   Label: LAB_0052df4a
//   XREF to: Stack[-0x20] (READ)
// 0052df4e: FADD double ptr [0x0063ab0f]
//   XREF to: 0063ab0f (READ)
// 0052df54: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0052df58: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052df5b: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052df5e: FNSTSW AX
// 0052df60: SAHF
// 0052df61: JC 0x0052dec9
//   XREF to: 0052dec9 (CONDITIONAL_JUMP)
// 0052df67: FLD double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052df6a: FADD double ptr [0x0063ab0f]
//   XREF to: 0063ab0f (READ)
// 0052df70: MOV EDI,dword ptr [EDX + 0x4ac]
// 0052df76: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0052df7a: JMP 0x0052dec9
//   XREF to: 0052dec9 (UNCONDITIONAL_JUMP)
// 0052df7f: MOV EAX,dword ptr [EBX + 0x38]
//   Label: default
// 0052df82: MOV dword ptr [ESP + 0x10],EAX
// 0052df86: FLD float ptr [ESP + 0x10]
// 0052df8a: FCOMP float ptr [0x0063ab07]
//   XREF to: 0063ab07 (READ)
// 0052df90: FNSTSW AX
// 0052df92: SAHF
// 0052df93: JZ 0x0052dfac
//   XREF to: 0052dfac (CONDITIONAL_JUMP)
// 0052df95: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_0052df95
//   XREF to: Stack[0x8] (READ)
// 0052df98: MOV EAX,dword ptr [EBX + 0x34]
// 0052df9b: MOV dword ptr [EDX],EAX
// 0052df9d: MOV EAX,dword ptr [ESP + 0x10]
// 0052dfa1: MOV dword ptr [ESI],EAX
// 0052dfa3: MOV EAX,EDI
// 0052dfa5: MOV ESP,EBP
// 0052dfa7: POP EBP
// 0052dfa8: POP EDI
// 0052dfa9: POP ESI
// 0052dfaa: POP EBX
// 0052dfab: RET
// 0052dfac: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0052dfac
//   XREF to: Stack[0x4] (READ)
// 0052dfaf: MOV EAX,dword ptr [EBX + 0x64]
// 0052dfb2: MOV ECX,dword ptr [EBX + 0x34]
// 0052dfb5: DEC EAX
// 0052dfb6: PUSH ECX
// 0052dfb7: MOV dword ptr [ESP + 0x18],EAX
// 0052dfbb: MOV EDX,dword ptr [EDX + 0x50]
// 0052dfbe: FILD dword ptr [ESP + 0x18]
// 0052dfc2: SUB ESP,0x4
// 0052dfc5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052dfc8: FSTP float ptr [ESP]
// 0052dfcb: MOV ECX,dword ptr [EAX]
// 0052dfcd: PUSH ECX
// 0052dfce: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052dfd1: PUSH EAX
// 0052dfd2: CALL dword ptr [EDX + 0x4]
// 0052dfd5: ADD ESP,0x10
// 0052dfd8: MOV dword ptr [ESP + 0x14],EAX
// 0052dfdc: FILD dword ptr [ESP + 0x14]
// 0052dfe0: FSTP float ptr [ESP + 0x10]
// 0052dfe4: JMP 0x0052df95
//   XREF to: 0052df95 (UNCONDITIONAL_JUMP)
// 0052dfe6: PUSH dword ptr [EBP + 0x24]
//   Label: LAB_0052dfe6
//   XREF to: Stack[0x14] (READ)
// 0052dfe9: FILD dword ptr [EBX + 0x60]
// 0052dfec: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052dfef: FLD ST0
// 0052dff1: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0052dff5: SUB ESP,0x4
// 0052dff8: MOV EAX,dword ptr [EAX + 0x50]
// 0052dffb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0052dffe: SUB ESP,0x4
// 0052e001: FADD float ptr [ESI]
// 0052e003: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052e006: FSTP float ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0052e009: PUSH EDX
// 0052e00a: CALL dword ptr [EAX + 0x8]
// 0052e00d: ADD ESP,0x10
// 0052e010: MOV EAX,dword ptr [ESP + 0x8]
// 0052e014: MOV dword ptr [ESI],EAX
// 0052e016: MOV EAX,EDI
// 0052e018: MOV ESP,EBP
// 0052e01a: POP EBP
// 0052e01b: POP EDI
// 0052e01c: POP ESI
// 0052e01d: POP EBX
// 0052e01e: RET
