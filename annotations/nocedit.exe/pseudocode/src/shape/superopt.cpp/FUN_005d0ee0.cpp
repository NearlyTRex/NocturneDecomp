// Name: shape_superopt.cpp_FUN_005d0ee0
// Address: 005d0ee0
// Address Range: [[005d0ee0, 005d122b]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d0ee0()
// Globals:
//   undefined4 DAT_00654312

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_FUN_005d0ee0(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d0ee0(void)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  
  piVar1 = (int *)(in_stack_00000004 + 4);
  piVar2 = (int *)(in_stack_00000008 + 4);
  pdVar6 = (double *)(in_stack_00000004 + 0x10);
  pdVar5 = (double *)(in_stack_00000008 + 0x10);
  if (((((((*piVar1 != *(int *)(in_stack_00000008 + 8)) ||
          (*piVar2 != *(int *)(in_stack_00000004 + 8))) ||
         (dVar3 = *(double *)(in_stack_00000008 + 0x20) - *pdVar6,
         dVar4 = *(double *)(in_stack_00000008 + 0x28) - *(double *)(in_stack_00000004 + 0x18),
         _DAT_00654312 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) ||
        (dVar3 = *pdVar5 - *(double *)(in_stack_00000004 + 0x20),
        dVar4 = *(double *)(in_stack_00000008 + 0x18) - *(double *)(in_stack_00000004 + 0x28),
        _DAT_00654312 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) &&
       (((*(int *)(in_stack_00000008 + 0xc) != *piVar1 ||
         (*(int *)(in_stack_00000008 + 8) != *(int *)(in_stack_00000004 + 8))) ||
        ((dVar3 = *(double *)(in_stack_00000008 + 0x30) - *pdVar6,
         dVar4 = *(double *)(in_stack_00000008 + 0x38) - *(double *)(in_stack_00000004 + 0x18),
         0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
         (dVar3 = *(double *)(in_stack_00000008 + 0x20) - *(double *)(in_stack_00000004 + 0x20),
         dVar4 = *(double *)(in_stack_00000008 + 0x28) - *(double *)(in_stack_00000004 + 0x28),
         0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))) &&
      ((((((*piVar2 != *piVar1 ||
           (*(int *)(in_stack_00000008 + 0xc) != *(int *)(in_stack_00000004 + 8))) ||
          ((dVar3 = *(double *)(in_stack_00000008 + 0x18) - *(double *)(in_stack_00000004 + 0x18),
           0.00390625 <= SQRT(dVar3 * dVar3 + (*pdVar5 - *pdVar6) * (*pdVar5 - *pdVar6)) ||
           (dVar3 = *(double *)(in_stack_00000008 + 0x30) - *(double *)(in_stack_00000004 + 0x20),
           dVar4 = *(double *)(in_stack_00000008 + 0x38) - *(double *)(in_stack_00000004 + 0x28),
           0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))) &&
         (((((*(int *)(in_stack_00000008 + 0xc) != *(int *)(in_stack_00000004 + 8) ||
             (*(int *)(in_stack_00000008 + 8) != *(int *)(in_stack_00000004 + 0xc))) ||
            (dVar3 = *(double *)(in_stack_00000008 + 0x30) - *(double *)(in_stack_00000004 + 0x20),
            dVar4 = *(double *)(in_stack_00000008 + 0x38) - *(double *)(in_stack_00000004 + 0x28),
            0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) ||
           (dVar3 = *(double *)(in_stack_00000008 + 0x20) - *(double *)(in_stack_00000004 + 0x30),
           dVar4 = *(double *)(in_stack_00000008 + 0x28) - *(double *)(in_stack_00000004 + 0x38),
           0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) &&
          (((*piVar2 != *(int *)(in_stack_00000004 + 8) ||
            (*(int *)(in_stack_00000008 + 0xc) != *(int *)(in_stack_00000004 + 0xc))) ||
           ((dVar3 = *pdVar5 - *(double *)(in_stack_00000004 + 0x20),
            dVar4 = *(double *)(in_stack_00000008 + 0x18) - *(double *)(in_stack_00000004 + 0x28),
            0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
            (dVar3 = *(double *)(in_stack_00000008 + 0x30) - *(double *)(in_stack_00000004 + 0x30),
            dVar4 = *(double *)(in_stack_00000008 + 0x38) - *(double *)(in_stack_00000004 + 0x38),
            0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))))) &&
        (((*(int *)(in_stack_00000008 + 8) != *(int *)(in_stack_00000004 + 8) ||
          (*piVar2 != *(int *)(in_stack_00000004 + 0xc))) ||
         ((dVar3 = *(double *)(in_stack_00000008 + 0x20) - *(double *)(in_stack_00000004 + 0x20),
          dVar4 = *(double *)(in_stack_00000008 + 0x28) - *(double *)(in_stack_00000004 + 0x28),
          0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
          (dVar3 = *pdVar5 - *(double *)(in_stack_00000004 + 0x30),
          dVar4 = *(double *)(in_stack_00000008 + 0x18) - *(double *)(in_stack_00000004 + 0x38),
          0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))) &&
       ((((*piVar2 != *(int *)(in_stack_00000004 + 0xc) ||
          (*(int *)(in_stack_00000008 + 0xc) != *piVar1)) ||
         (dVar3 = *pdVar5 - *(double *)(in_stack_00000004 + 0x30),
         dVar4 = *(double *)(in_stack_00000008 + 0x18) - *(double *)(in_stack_00000004 + 0x38),
         0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) ||
        (dVar3 = *(double *)(in_stack_00000008 + 0x30) - *pdVar6,
        dVar4 = *(double *)(in_stack_00000008 + 0x38) - *(double *)(in_stack_00000004 + 0x18),
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))) &&
     ((((*(int *)(in_stack_00000008 + 8) != *(int *)(in_stack_00000004 + 0xc) ||
        (*piVar2 != *piVar1)) ||
       ((dVar3 = *(double *)(in_stack_00000008 + 0x20) - *(double *)(in_stack_00000004 + 0x30),
        dVar4 = *(double *)(in_stack_00000008 + 0x28) - *(double *)(in_stack_00000004 + 0x38),
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
        (dVar3 = *(double *)(in_stack_00000008 + 0x18) - *(double *)(in_stack_00000004 + 0x18),
        0.00390625 <= SQRT(dVar3 * dVar3 + (*pdVar5 - *pdVar6) * (*pdVar5 - *pdVar6)))))) &&
      (((*(int *)(in_stack_00000008 + 0xc) != *(int *)(in_stack_00000004 + 0xc) ||
        (*piVar1 != *(int *)(in_stack_00000008 + 8))) ||
       ((dVar3 = *(double *)(in_stack_00000008 + 0x30) - *(double *)(in_stack_00000004 + 0x30),
        dVar4 = *(double *)(in_stack_00000008 + 0x38) - *(double *)(in_stack_00000004 + 0x38),
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
        (dVar3 = *(double *)(in_stack_00000008 + 0x20) - *pdVar6,
        dVar4 = *(double *)(in_stack_00000008 + 0x28) - *(double *)(in_stack_00000004 + 0x18),
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))))) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 005d0ee0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d0ee0
// 005d0ee1: PUSH ESI
// 005d0ee2: PUSH EDI
// 005d0ee3: PUSH EBP
// 005d0ee4: MOV EBP,ESP
// 005d0ee6: SUB ESP,0x12c
// 005d0eec: AND ESP,0xfffffff8
// 005d0eef: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d0ef2: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d0ef5: MOV EAX,0x3f700000
// 005d0efa: LEA EBX,[EDX + 0x4]
// 005d0efd: LEA ESI,[ECX + 0x4]
// 005d0f00: XOR EDI,EDI
// 005d0f02: ADD EDX,0x10
// 005d0f05: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x140] (DATA)
// 005d0f08: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 005d0f0c: MOV EAX,dword ptr [EBX]
// 005d0f0e: MOV EDI,dword ptr [ESI + 0x4]
// 005d0f11: ADD ECX,0x10
// 005d0f14: CMP EAX,EDI
// 005d0f16: JNZ 0x005d0f63
//   XREF to: 005d0f63 (CONDITIONAL_JUMP)
// 005d0f18: MOV EDI,dword ptr [ESI]
// 005d0f1a: CMP EDI,dword ptr [EBX + 0x4]
// 005d0f1d: JNZ 0x005d0f63
//   XREF to: 005d0f63 (CONDITIONAL_JUMP)
// 005d0f1f: LEA EAX,[ECX + 0x10]
// 005d0f22: FLD double ptr [EAX]
// 005d0f24: FSUB double ptr [EDX]
// 005d0f26: FMUL ST0
// 005d0f28: FLD double ptr [EAX + 0x8]
// 005d0f2b: FSUB double ptr [EDX + 0x8]
// 005d0f2e: FMUL ST0
// 005d0f30: FADDP
// 005d0f32: FSQRT
// 005d0f34: FCOMP double ptr [0x00654312]
//   XREF to: 00654312 (READ)
// 005d0f3a: FNSTSW AX
// 005d0f3c: SAHF
// 005d0f3d: JNC 0x005d0f63
//   XREF to: 005d0f63 (CONDITIONAL_JUMP)
// 005d0f3f: LEA EAX,[EDX + 0x10]
// 005d0f42: FLD double ptr [ECX]
// 005d0f44: FSUB double ptr [EAX]
// 005d0f46: FMUL ST0
// 005d0f48: FLD double ptr [ECX + 0x8]
// 005d0f4b: FSUB double ptr [EAX + 0x8]
// 005d0f4e: FMUL ST0
// 005d0f50: FADDP
// 005d0f52: FSQRT
// 005d0f54: FCOMP double ptr [0x00654312]
//   XREF to: 00654312 (READ)
// 005d0f5a: FNSTSW AX
// 005d0f5c: SAHF
// 005d0f5d: JC 0x005d1217
//   XREF to: 005d1217 (CONDITIONAL_JUMP)
// 005d0f63: MOV EDI,dword ptr [ESI + 0x8]
//   Label: LAB_005d0f63
// 005d0f66: CMP EDI,dword ptr [EBX]
// 005d0f68: JNZ 0x005d0fc1
//   XREF to: 005d0fc1 (CONDITIONAL_JUMP)
// 005d0f6a: MOV EDI,dword ptr [ESI + 0x4]
// 005d0f6d: CMP EDI,dword ptr [EBX + 0x4]
// 005d0f70: JNZ 0x005d0fc1
//   XREF to: 005d0fc1 (CONDITIONAL_JUMP)
// 005d0f72: LEA EAX,[ECX + 0x20]
// 005d0f75: FLD double ptr [EAX]
// 005d0f77: FSUB double ptr [EDX]
// 005d0f79: FMUL ST0
// 005d0f7b: FLD double ptr [EAX + 0x8]
// 005d0f7e: FSUB double ptr [EDX + 0x8]
// 005d0f81: FMUL ST0
// 005d0f83: FADDP
// 005d0f85: FSQRT
// 005d0f87: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d0f8a: FNSTSW AX
// 005d0f8c: SAHF
// 005d0f8d: JNC 0x005d0fc1
//   XREF to: 005d0fc1 (CONDITIONAL_JUMP)
// 005d0f8f: LEA EAX,[EDX + 0x10]
// 005d0f92: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d0f99: LEA EAX,[ECX + 0x10]
// 005d0f9c: MOV EDI,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x18] (READ)
// 005d0fa3: FLD double ptr [EAX]
// 005d0fa5: FSUB double ptr [EDI]
// 005d0fa7: FMUL ST0
// 005d0fa9: FLD double ptr [EAX + 0x8]
// 005d0fac: FSUB double ptr [EDI + 0x8]
// 005d0faf: FMUL ST0
// 005d0fb1: FADDP
// 005d0fb3: FSQRT
// 005d0fb5: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d0fb8: FNSTSW AX
// 005d0fba: SAHF
// 005d0fbb: JC 0x005d1217
//   XREF to: 005d1217 (CONDITIONAL_JUMP)
// 005d0fc1: MOV EDI,dword ptr [ESI]
//   Label: LAB_005d0fc1
// 005d0fc3: CMP EDI,dword ptr [EBX]
// 005d0fc5: JNZ 0x005d101b
//   XREF to: 005d101b (CONDITIONAL_JUMP)
// 005d0fc7: MOV EDI,dword ptr [ESI + 0x8]
// 005d0fca: CMP EDI,dword ptr [EBX + 0x4]
// 005d0fcd: JNZ 0x005d101b
//   XREF to: 005d101b (CONDITIONAL_JUMP)
// 005d0fcf: FLD double ptr [ECX]
// 005d0fd1: FSUB double ptr [EDX]
// 005d0fd3: FMUL ST0
// 005d0fd5: FLD double ptr [ECX + 0x8]
// 005d0fd8: FSUB double ptr [EDX + 0x8]
// 005d0fdb: FMUL ST0
// 005d0fdd: FADDP
// 005d0fdf: FSQRT
// 005d0fe1: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d0fe4: FNSTSW AX
// 005d0fe6: SAHF
// 005d0fe7: JNC 0x005d101b
//   XREF to: 005d101b (CONDITIONAL_JUMP)
// 005d0fe9: LEA EAX,[EDX + 0x10]
// 005d0fec: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d0ff3: LEA EAX,[ECX + 0x20]
// 005d0ff6: MOV EDI,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x18] (READ)
// 005d0ffd: FLD double ptr [EAX]
// 005d0fff: FSUB double ptr [EDI]
// 005d1001: FMUL ST0
// 005d1003: FLD double ptr [EAX + 0x8]
// 005d1006: FSUB double ptr [EDI + 0x8]
// 005d1009: FMUL ST0
// 005d100b: FADDP
// 005d100d: FSQRT
// 005d100f: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d1012: FNSTSW AX
// 005d1014: SAHF
// 005d1015: JC 0x005d1217
//   XREF to: 005d1217 (CONDITIONAL_JUMP)
// 005d101b: MOV EDI,dword ptr [ESI + 0x8]
//   Label: LAB_005d101b
// 005d101e: CMP EDI,dword ptr [EBX + 0x4]
// 005d1021: JNZ 0x005d108b
//   XREF to: 005d108b (CONDITIONAL_JUMP)
// 005d1023: MOV EDI,dword ptr [ESI + 0x4]
// 005d1026: CMP EDI,dword ptr [EBX + 0x8]
// 005d1029: JNZ 0x005d108b
//   XREF to: 005d108b (CONDITIONAL_JUMP)
// 005d102b: LEA EAX,[EDX + 0x10]
// 005d102e: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d1035: LEA EAX,[ECX + 0x20]
// 005d1038: MOV EDI,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x18] (READ)
// 005d103f: FLD double ptr [EAX]
// 005d1041: FSUB double ptr [EDI]
// 005d1043: FMUL ST0
// 005d1045: FLD double ptr [EAX + 0x8]
// 005d1048: FSUB double ptr [EDI + 0x8]
// 005d104b: FMUL ST0
// 005d104d: FADDP
// 005d104f: FSQRT
// 005d1051: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d1054: FNSTSW AX
// 005d1056: SAHF
// 005d1057: JNC 0x005d108b
//   XREF to: 005d108b (CONDITIONAL_JUMP)
// 005d1059: LEA EAX,[EDX + 0x20]
// 005d105c: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d1063: LEA EAX,[ECX + 0x10]
// 005d1066: MOV EDI,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x18] (READ)
// 005d106d: FLD double ptr [EAX]
// 005d106f: FSUB double ptr [EDI]
// 005d1071: FMUL ST0
// 005d1073: FLD double ptr [EAX + 0x8]
// 005d1076: FSUB double ptr [EDI + 0x8]
// 005d1079: FMUL ST0
// 005d107b: FADDP
// 005d107d: FSQRT
// 005d107f: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d1082: FNSTSW AX
// 005d1084: SAHF
// 005d1085: JC 0x005d1217
//   XREF to: 005d1217 (CONDITIONAL_JUMP)
// 005d108b: MOV EDI,dword ptr [ESI]
//   Label: LAB_005d108b
// 005d108d: CMP EDI,dword ptr [EBX + 0x4]
// 005d1090: JNZ 0x005d10db
//   XREF to: 005d10db (CONDITIONAL_JUMP)
// 005d1092: MOV EDI,dword ptr [ESI + 0x8]
// 005d1095: CMP EDI,dword ptr [EBX + 0x8]
// 005d1098: JNZ 0x005d10db
//   XREF to: 005d10db (CONDITIONAL_JUMP)
// 005d109a: LEA EAX,[EDX + 0x10]
// 005d109d: FLD double ptr [ECX]
// 005d109f: FSUB double ptr [EAX]
// 005d10a1: FMUL ST0
// 005d10a3: FLD double ptr [ECX + 0x8]
// 005d10a6: FSUB double ptr [EAX + 0x8]
// 005d10a9: FMUL ST0
// 005d10ab: FADDP
// 005d10ad: FSQRT
// 005d10af: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d10b2: FNSTSW AX
// 005d10b4: SAHF
// 005d10b5: JNC 0x005d10db
//   XREF to: 005d10db (CONDITIONAL_JUMP)
// 005d10b7: LEA EDI,[ECX + 0x20]
// 005d10ba: LEA EAX,[EDX + 0x20]
// 005d10bd: FLD double ptr [EDI]
// 005d10bf: FSUB double ptr [EAX]
// 005d10c1: FMUL ST0
// 005d10c3: FLD double ptr [EDI + 0x8]
// 005d10c6: FSUB double ptr [EAX + 0x8]
// 005d10c9: FMUL ST0
// 005d10cb: FADDP
// 005d10cd: FSQRT
// 005d10cf: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d10d2: FNSTSW AX
// 005d10d4: SAHF
// 005d10d5: JC 0x005d1217
//   XREF to: 005d1217 (CONDITIONAL_JUMP)
// 005d10db: MOV EDI,dword ptr [ESI + 0x4]
//   Label: LAB_005d10db
// 005d10de: CMP EDI,dword ptr [EBX + 0x4]
// 005d10e1: JNZ 0x005d112b
//   XREF to: 005d112b (CONDITIONAL_JUMP)
// 005d10e3: MOV EDI,dword ptr [ESI]
// 005d10e5: CMP EDI,dword ptr [EBX + 0x8]
// 005d10e8: JNZ 0x005d112b
//   XREF to: 005d112b (CONDITIONAL_JUMP)
// 005d10ea: LEA EDI,[ECX + 0x10]
// 005d10ed: LEA EAX,[EDX + 0x10]
// 005d10f0: FLD double ptr [EDI]
// 005d10f2: FSUB double ptr [EAX]
// 005d10f4: FMUL ST0
// 005d10f6: FLD double ptr [EDI + 0x8]
// 005d10f9: FSUB double ptr [EAX + 0x8]
// 005d10fc: FMUL ST0
// 005d10fe: FADDP
// 005d1100: FSQRT
// 005d1102: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d1105: FNSTSW AX
// 005d1107: SAHF
// 005d1108: JNC 0x005d112b
//   XREF to: 005d112b (CONDITIONAL_JUMP)
// 005d110a: LEA EAX,[EDX + 0x20]
// 005d110d: FLD double ptr [ECX]
// 005d110f: FSUB double ptr [EAX]
// 005d1111: FMUL ST0
// 005d1113: FLD double ptr [ECX + 0x8]
// 005d1116: FSUB double ptr [EAX + 0x8]
// 005d1119: FMUL ST0
// 005d111b: FADDP
// 005d111d: FSQRT
// 005d111f: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d1122: FNSTSW AX
// 005d1124: SAHF
// 005d1125: JC 0x005d1217
//   XREF to: 005d1217 (CONDITIONAL_JUMP)
// 005d112b: MOV EDI,dword ptr [ESI]
//   Label: LAB_005d112b
// 005d112d: CMP EDI,dword ptr [EBX + 0x8]
// 005d1130: JNZ 0x005d1177
//   XREF to: 005d1177 (CONDITIONAL_JUMP)
// 005d1132: MOV EDI,dword ptr [ESI + 0x8]
// 005d1135: CMP EDI,dword ptr [EBX]
// 005d1137: JNZ 0x005d1177
//   XREF to: 005d1177 (CONDITIONAL_JUMP)
// 005d1139: LEA EAX,[EDX + 0x20]
// 005d113c: FLD double ptr [ECX]
// 005d113e: FSUB double ptr [EAX]
// 005d1140: FMUL ST0
// 005d1142: FLD double ptr [ECX + 0x8]
// 005d1145: FSUB double ptr [EAX + 0x8]
// 005d1148: FMUL ST0
// 005d114a: FADDP
// 005d114c: FSQRT
// 005d114e: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d1151: FNSTSW AX
// 005d1153: SAHF
// 005d1154: JNC 0x005d1177
//   XREF to: 005d1177 (CONDITIONAL_JUMP)
// 005d1156: LEA EAX,[ECX + 0x20]
// 005d1159: FLD double ptr [EAX]
// 005d115b: FSUB double ptr [EDX]
// 005d115d: FMUL ST0
// 005d115f: FLD double ptr [EAX + 0x8]
// 005d1162: FSUB double ptr [EDX + 0x8]
// 005d1165: FMUL ST0
// 005d1167: FADDP
// 005d1169: FSQRT
// 005d116b: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d116e: FNSTSW AX
// 005d1170: SAHF
// 005d1171: JC 0x005d1217
//   XREF to: 005d1217 (CONDITIONAL_JUMP)
// 005d1177: MOV EDI,dword ptr [ESI + 0x4]
//   Label: LAB_005d1177
// 005d117a: CMP EDI,dword ptr [EBX + 0x8]
// 005d117d: JNZ 0x005d11cd
//   XREF to: 005d11cd (CONDITIONAL_JUMP)
// 005d117f: MOV EDI,dword ptr [ESI]
// 005d1181: CMP EDI,dword ptr [EBX]
// 005d1183: JNZ 0x005d11cd
//   XREF to: 005d11cd (CONDITIONAL_JUMP)
// 005d1185: LEA EAX,[EDX + 0x20]
// 005d1188: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d118f: LEA EAX,[ECX + 0x10]
// 005d1192: MOV EDI,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x18] (READ)
// 005d1199: FLD double ptr [EAX]
// 005d119b: FSUB double ptr [EDI]
// 005d119d: FMUL ST0
// 005d119f: FLD double ptr [EAX + 0x8]
// 005d11a2: FSUB double ptr [EDI + 0x8]
// 005d11a5: FMUL ST0
// 005d11a7: FADDP
// 005d11a9: FSQRT
// 005d11ab: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d11ae: FNSTSW AX
// 005d11b0: SAHF
// 005d11b1: JNC 0x005d11cd
//   XREF to: 005d11cd (CONDITIONAL_JUMP)
// 005d11b3: FLD double ptr [ECX]
// 005d11b5: FSUB double ptr [EDX]
// 005d11b7: FMUL ST0
// 005d11b9: FLD double ptr [ECX + 0x8]
// 005d11bc: FSUB double ptr [EDX + 0x8]
// 005d11bf: FMUL ST0
// 005d11c1: FADDP
// 005d11c3: FSQRT
// 005d11c5: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d11c8: FNSTSW AX
// 005d11ca: SAHF
// 005d11cb: JC 0x005d1217
//   XREF to: 005d1217 (CONDITIONAL_JUMP)
// 005d11cd: MOV EDI,dword ptr [ESI + 0x8]
//   Label: LAB_005d11cd
// 005d11d0: CMP EDI,dword ptr [EBX + 0x8]
// 005d11d3: JNZ 0x005d1223
//   XREF to: 005d1223 (CONDITIONAL_JUMP)
// 005d11d5: MOV EAX,dword ptr [EBX]
// 005d11d7: CMP EAX,dword ptr [ESI + 0x4]
// 005d11da: JNZ 0x005d1223
//   XREF to: 005d1223 (CONDITIONAL_JUMP)
// 005d11dc: LEA EAX,[ECX + 0x20]
// 005d11df: LEA EBX,[EDX + 0x20]
// 005d11e2: FLD double ptr [EAX]
// 005d11e4: FSUB double ptr [EBX]
// 005d11e6: FMUL ST0
// 005d11e8: FLD double ptr [EAX + 0x8]
// 005d11eb: FSUB double ptr [EBX + 0x8]
// 005d11ee: FMUL ST0
// 005d11f0: FADDP
// 005d11f2: FSQRT
// 005d11f4: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d11f7: FNSTSW AX
// 005d11f9: SAHF
// 005d11fa: JNC 0x005d1223
//   XREF to: 005d1223 (CONDITIONAL_JUMP)
// 005d11fc: FLD double ptr [ECX + 0x10]
// 005d11ff: FSUB double ptr [EDX]
// 005d1201: FMUL ST0
// 005d1203: FLD double ptr [ECX + 0x18]
// 005d1206: FSUB double ptr [EDX + 0x8]
// 005d1209: FMUL ST0
// 005d120b: FADDP
// 005d120d: FSQRT
// 005d120f: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005d1212: FNSTSW AX
// 005d1214: SAHF
// 005d1215: JNC 0x005d1223
//   XREF to: 005d1223 (CONDITIONAL_JUMP)
// 005d1217: MOV EAX,0x1
//   Label: LAB_005d1217
// 005d121c: MOV ESP,EBP
// 005d121e: POP EBP
// 005d121f: POP EDI
// 005d1220: POP ESI
// 005d1221: POP EBX
// 005d1222: RET
// 005d1223: XOR EAX,EAX
//   Label: LAB_005d1223
// 005d1225: MOV ESP,EBP
// 005d1227: POP EBP
// 005d1228: POP EDI
// 005d1229: POP ESI
// 005d122a: POP EBX
// 005d122b: RET
