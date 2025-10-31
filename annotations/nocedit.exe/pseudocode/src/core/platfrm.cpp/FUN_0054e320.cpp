// Name: core_platfrm.cpp_FUN_0054e320
// Address: 0054e320
// Address Range: [[0054e320, 0054e3e5]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e320()
// Cross-references:
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d679 [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054e320(undefined4 param_1) */

void core_platfrm_cpp_FUN_0054e320(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int in_stack_00000004;
  CMatrix3x4f *in_stack_ffffff44;
  CMatrix3x4f local_8c;
  undefined4 local_5c [18];
  int local_14;
  
  bVar5 = 0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_8c,(CVector3f *)(in_stack_00000004 + 0x20),
             (CVector3f *)(in_stack_00000004 + 0x30));
  local_14 = in_stack_00000004 + 0x51c;
  iVar2 = 0;
  do {
    if (*(int *)(in_stack_00000004 + 0x51c) != 0) {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(local_14 + iVar2 * 0x34 + 4),&local_8c,in_stack_ffffff44);
      puVar3 = local_5c;
      puVar4 = (undefined4 *)&stack0xffffff44;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x51c) + 0x154);
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                ((CVector3f *)&stack0xffffff44,(CMatrix3x3f *)(local_5c + 0xf));
      core_xform_cpp_getTranslation_FUN_005f6110
                ((CVector3f *)&stack0xffffff44,(CMatrix3x4f *)(local_5c + 0xc));
      (**(code **)(iVar1 + 0x60))();
    }
    iVar2 = iVar2 + 1;
    in_stack_00000004 = in_stack_00000004 + 0x34;
  } while (iVar2 < 10);
  return;
}


// Assembly code:
// 0054e320: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054e320
// 0054e321: PUSH ESI
// 0054e322: PUSH EDI
// 0054e323: PUSH EBP
// 0054e324: SUB ESP,0xac
// 0054e32a: MOV EBP,dword ptr [ESP + 0xc0]
//   XREF to: Stack[0x4] (READ)
// 0054e331: LEA EAX,[EBP + 0x30]
// 0054e334: PUSH EAX
// 0054e335: LEA EAX,[EBP + 0x20]
// 0054e338: PUSH EAX
// 0054e339: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x8c] (DATA)
// 0054e33d: PUSH EAX
// 0054e33e: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0054e343: ADD ESP,0xc
// 0054e346: LEA EAX,[EBP + 0x51c]
// 0054e34c: XOR EBX,EBX
// 0054e34e: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054e355: IMUL ESI,EBX,0x34
//   Label: LAB_0054e355
// 0054e358: CMP dword ptr [EBP + 0x51c],0x0
// 0054e35f: JNZ 0x0054e375
//   XREF to: 0054e375 (CONDITIONAL_JUMP)
// 0054e361: INC EBX
//   Label: LAB_0054e361
// 0054e362: ADD EBP,0x34
// 0054e365: CMP EBX,0xa
// 0054e368: JL 0x0054e355
//   XREF to: 0054e355 (CONDITIONAL_JUMP)
// 0054e36a: ADD ESP,0xac
// 0054e370: POP EBP
// 0054e371: POP EDI
// 0054e372: POP ESI
// 0054e373: POP EBX
// 0054e374: RET
// 0054e375: LEA EAX,[ESP + 0x30]
//   Label: LAB_0054e375
//   XREF to: Stack[-0x8c] (DATA)
// 0054e379: PUSH EAX
// 0054e37a: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 0054e381: ADD EAX,ESI
// 0054e383: ADD EAX,0x4
// 0054e386: PUSH EAX
// 0054e387: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0x5c] (DATA)
// 0054e38b: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0xbc] (DATA)
// 0054e38f: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0054e394: MOV ECX,0xc
// 0054e399: ADD ESP,0x8
// 0054e39c: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x20] (DATA)
// 0054e3a3: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x5c] (DATA)
// 0054e3a7: PUSH EAX
// 0054e3a8: MOVSD.REP ES:EDI,ESI
// 0054e3aa: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xbc] (DATA)
// 0054e3ae: MOV ESI,dword ptr [EBP + 0x51c]
// 0054e3b4: PUSH EAX
// 0054e3b5: MOV EDI,dword ptr [ESI + 0x154]
// 0054e3bb: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0054e3c0: ADD ESP,0x8
// 0054e3c3: PUSH EAX
// 0054e3c4: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x2c] (DATA)
// 0054e3cb: PUSH EAX
// 0054e3cc: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xbc] (DATA)
// 0054e3d0: PUSH EAX
// 0054e3d1: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 0054e3d6: ADD ESP,0x8
// 0054e3d9: PUSH EAX
// 0054e3da: PUSH ESI
// 0054e3db: CALL dword ptr [EDI + 0x60]
// 0054e3de: ADD ESP,0xc
// 0054e3e1: JMP 0x0054e361
//   XREF to: 0054e361 (UNCONDITIONAL_JUMP)
