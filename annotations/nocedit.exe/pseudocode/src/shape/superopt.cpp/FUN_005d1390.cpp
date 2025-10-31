// Name: shape_superopt.cpp_FUN_005d1390
// Address: 005d1390
// Address Range: [[005d1390, 005d1f9a]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d1390()
// Function calls:
//   shape_superopt.cpp_FUN_005d5bb0

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d1390(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d1390(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *in_stack_00000004;
  int *in_stack_00000008;
  double local_1d0;
  double local_1c8;
  double local_1b0;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  
  if (0.0 <= *(double *)(in_stack_00000004 + 0x10)) {
    local_1d0 = *(double *)(in_stack_00000004 + 0x10);
  }
  else {
    local_1d0 = -*(double *)(in_stack_00000004 + 0x10);
  }
  if (*(double *)(in_stack_00000004 + 0x12) < 0.0) {
    local_1c8 = -*(double *)(in_stack_00000004 + 0x12);
  }
  else {
    local_1c8 = *(double *)(in_stack_00000004 + 0x12);
  }
  if (*(double *)(in_stack_00000004 + 0x14) < 0.0) {
    local_1b0 = -*(double *)(in_stack_00000004 + 0x14);
  }
  else {
    local_1b0 = *(double *)(in_stack_00000004 + 0x14);
  }
  iVar7 = *(int *)(*in_stack_00000004 + 4);
  puVar1 = (undefined4 *)(iVar7 + in_stack_00000004[1] * 0x38);
  puVar2 = (undefined4 *)(iVar7 + in_stack_00000004[2] * 0x38);
  piVar3 = (int *)(iVar7 + in_stack_00000004[3] * 0x38);
  iVar7 = *(int *)(*in_stack_00000008 + 4);
  puVar4 = (undefined4 *)(iVar7 + in_stack_00000008[1] * 0x38);
  puVar5 = (undefined4 *)(iVar7 + in_stack_00000008[2] * 0x38);
  puVar8 = (undefined4 *)(iVar7 + in_stack_00000008[3] * 0x38);
  if ((local_1d0 < local_1c8) || (local_1d0 < local_1b0)) {
    if ((local_1c8 < local_1d0) || (local_1c8 < local_1b0)) {
      local_180 = *puVar1;
      uStack_17c = puVar1[1];
      local_178 = puVar1[2];
      uStack_174 = puVar1[3];
      local_1a0 = *puVar2;
      uStack_19c = puVar2[1];
      local_198 = puVar2[2];
      uStack_194 = puVar2[3];
      local_190 = *piVar3;
      local_18c = piVar3[1];
      local_188 = piVar3[2];
      local_184 = piVar3[3];
      local_150 = *puVar4;
      uStack_14c = puVar4[1];
      local_148 = puVar4[2];
      uStack_144 = puVar4[3];
      local_170 = *puVar5;
      uStack_16c = puVar5[1];
      local_168 = puVar5[2];
      uStack_164 = puVar5[3];
      local_160 = *puVar8;
      uStack_15c = puVar8[1];
      local_158 = puVar8[2];
      uVar6 = puVar8[3];
    }
    else {
      local_180 = *puVar1;
      uStack_17c = puVar1[1];
      local_178 = puVar1[4];
      uStack_174 = puVar1[5];
      local_1a0 = *puVar2;
      uStack_19c = puVar2[1];
      local_198 = puVar2[4];
      uStack_194 = puVar2[5];
      local_190 = *piVar3;
      local_18c = piVar3[1];
      local_188 = piVar3[4];
      local_184 = piVar3[5];
      local_150 = *puVar4;
      uStack_14c = puVar4[1];
      local_148 = puVar4[4];
      uStack_144 = puVar4[5];
      local_170 = *puVar5;
      uStack_16c = puVar5[1];
      local_168 = puVar5[4];
      uStack_164 = puVar5[5];
      local_160 = *puVar8;
      uStack_15c = puVar8[1];
      local_158 = puVar8[4];
      uVar6 = puVar8[5];
      local_140 = local_170;
    }
  }
  else {
    local_180 = puVar1[2];
    uStack_17c = puVar1[3];
    local_178 = puVar1[4];
    uStack_174 = puVar1[5];
    local_1a0 = puVar2[2];
    uStack_19c = puVar2[3];
    local_198 = puVar2[4];
    uStack_194 = puVar2[5];
    local_190 = piVar3[2];
    local_18c = piVar3[3];
    local_188 = piVar3[4];
    local_184 = piVar3[5];
    local_150 = puVar4[2];
    uStack_14c = puVar4[3];
    local_148 = puVar4[4];
    uStack_144 = puVar4[5];
    local_170 = puVar5[2];
    uStack_16c = puVar5[3];
    local_168 = puVar5[4];
    uStack_164 = puVar5[5];
    local_160 = puVar8[2];
    uStack_15c = puVar8[3];
    local_158 = puVar8[4];
    uVar6 = puVar8[5];
  }
  if ((((((((double)CONCAT44(uStack_17c,local_180) == (double)CONCAT44(uStack_16c,local_170)) &&
          ((double)CONCAT44(uStack_174,local_178) == (double)CONCAT44(uStack_164,local_168))) ||
         (((double)CONCAT44(uStack_19c,local_1a0) == (double)CONCAT44(uStack_14c,local_150) &&
          ((double)CONCAT44(uStack_194,local_198) == (double)CONCAT44(uStack_144,local_148))))) ||
        (iVar7 = shape_superopt_cpp_FUN_005d5bb0(), iVar7 == 0)) &&
       ((((double)CONCAT44(local_178,uStack_17c) == (double)CONCAT44(local_158,uStack_15c) &&
         ((double)CONCAT44(local_170,uStack_174) == (double)CONCAT44(local_150,uVar6))) ||
        ((((double)CONCAT44(local_198,uStack_19c) == (double)CONCAT44(local_168,uStack_16c) &&
          ((double)CONCAT44(local_190,uStack_194) == (double)CONCAT44(local_160,uStack_164))) ||
         (iVar7 = shape_superopt_cpp_FUN_005d5bb0(), iVar7 == 0)))))) &&
      (((((((double)CONCAT44(local_178,uStack_17c) == (double)CONCAT44(local_148,uStack_14c) &&
           ((double)CONCAT44(local_170,uStack_174) == (double)CONCAT44(local_140,uStack_144))) ||
          (((double)CONCAT44(local_198,uStack_19c) == (double)CONCAT44(local_158,uStack_15c) &&
           ((double)CONCAT44(local_190,uStack_194) == (double)CONCAT44(local_150,uVar6))))) ||
         (iVar7 = shape_superopt_cpp_FUN_005d5bb0(), iVar7 == 0)) &&
        (((((double)CONCAT44(local_198,uStack_19c) == (double)CONCAT44(local_158,uStack_15c) &&
           ((double)CONCAT44(local_190,uStack_194) == (double)CONCAT44(local_150,uVar6))) ||
          ((((double)CONCAT44(local_188,local_18c) == (double)CONCAT44(local_168,uStack_16c) &&
            ((double)CONCAT44(local_180,local_184) == (double)CONCAT44(local_160,uStack_164))) ||
           (iVar7 = shape_superopt_cpp_FUN_005d5bb0(), iVar7 == 0)))) &&
         ((((((double)CONCAT44(local_198,uStack_19c) == (double)CONCAT44(local_148,uStack_14c) &&
             ((double)CONCAT44(local_190,uStack_194) == (double)CONCAT44(local_140,uStack_144))) ||
            (((double)CONCAT44(local_188,local_18c) == (double)CONCAT44(local_158,uStack_15c) &&
             ((double)CONCAT44(local_180,local_184) == (double)CONCAT44(local_150,uVar6))))) ||
           (iVar7 = shape_superopt_cpp_FUN_005d5bb0(), iVar7 == 0)) &&
          ((((((double)CONCAT44(local_198,uStack_19c) == (double)CONCAT44(local_168,uStack_16c) &&
              ((double)CONCAT44(local_190,uStack_194) == (double)CONCAT44(local_160,uStack_164))) ||
             (((double)CONCAT44(local_188,local_18c) == (double)CONCAT44(local_148,uStack_14c) &&
              ((double)CONCAT44(local_180,local_184) == (double)CONCAT44(local_140,uStack_144)))))
            || (iVar7 = shape_superopt_cpp_FUN_005d5bb0(), iVar7 == 0)) &&
           (((((double)CONCAT44(local_188,local_18c) == (double)CONCAT44(local_148,uStack_14c) &&
              ((double)CONCAT44(local_180,local_184) == (double)CONCAT44(local_140,uStack_144))) ||
             (((double)CONCAT44(local_178,uStack_17c) == (double)CONCAT44(local_158,uStack_15c) &&
              ((double)CONCAT44(local_170,uStack_174) == (double)CONCAT44(local_150,uVar6))))) ||
            (iVar7 = shape_superopt_cpp_FUN_005d5bb0(), iVar7 == 0)))))))))) &&
       ((((double)CONCAT44(local_188,local_18c) == (double)CONCAT44(local_168,uStack_16c) &&
         ((double)CONCAT44(local_180,local_184) == (double)CONCAT44(local_160,uStack_164))) ||
        ((((double)CONCAT44(local_178,uStack_17c) == (double)CONCAT44(local_148,uStack_14c) &&
          ((double)CONCAT44(local_170,uStack_174) == (double)CONCAT44(local_140,uStack_144))) ||
         (iVar7 = shape_superopt_cpp_FUN_005d5bb0(), iVar7 == 0)))))))) &&
     (((((double)CONCAT44(local_188,local_18c) == (double)CONCAT44(local_158,uStack_15c) &&
        ((double)CONCAT44(local_180,local_184) == (double)CONCAT44(local_150,uVar6))) ||
       (((double)CONCAT44(local_178,uStack_17c) == (double)CONCAT44(local_168,uStack_16c) &&
        ((double)CONCAT44(local_170,uStack_174) == (double)CONCAT44(local_160,uStack_164))))) ||
      (iVar7 = shape_superopt_cpp_FUN_005d5bb0(), iVar7 == 0)))) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 005d1390: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d1390
// 005d1391: PUSH ESI
// 005d1392: PUSH EDI
// 005d1393: PUSH EBP
// 005d1394: MOV EBP,ESP
// 005d1396: SUB ESP,0x1bc
// 005d139c: AND ESP,0xfffffff8
// 005d139f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d13a2: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d13a5: FLDZ
// 005d13a7: FCOMP double ptr [EDX + 0x40]
// 005d13aa: FNSTSW AX
// 005d13ac: SAHF
// 005d13ad: JBE 0x005d1a0a
//   XREF to: 005d1a0a (CONDITIONAL_JUMP)
// 005d13b3: FLD double ptr [EDX + 0x40]
// 005d13b6: FCHS
// 005d13b8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1d0] (DATA)
// 005d13bb: MOV EAX,dword ptr [ESP]
//   Label: LAB_005d13bb
//   XREF to: Stack[-0x1d0] (DATA)
// 005d13be: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 005d13c2: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1cc] (READ)
// 005d13c6: FLDZ
// 005d13c8: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 005d13cc: FCOMP double ptr [EDX + 0x48]
// 005d13cf: FNSTSW AX
// 005d13d1: SAHF
// 005d13d2: JA 0x005d1a1c
//   XREF to: 005d1a1c (CONDITIONAL_JUMP)
// 005d13d8: MOV EAX,dword ptr [EDX + 0x48]
// 005d13db: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 005d13df: MOV EAX,dword ptr [EDX + 0x4c]
// 005d13e2: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 005d13e6: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005d13e6
//   XREF to: Stack[-0x1c8] (READ)
// 005d13ea: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005d13ee: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c4] (READ)
// 005d13f2: FLDZ
// 005d13f4: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005d13f8: FCOMP double ptr [EDX + 0x50]
// 005d13fb: FNSTSW AX
// 005d13fd: SAHF
// 005d13fe: JA 0x005d1a2a
//   XREF to: 005d1a2a (CONDITIONAL_JUMP)
// 005d1404: MOV EAX,dword ptr [EDX + 0x50]
// 005d1407: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 005d140b: MOV EAX,dword ptr [EDX + 0x54]
// 005d140e: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 005d1412: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005d1412
//   XREF to: Stack[-0x1b0] (READ)
// 005d1416: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 005d141a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1ac] (READ)
// 005d141e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 005d1422: MOV EAX,dword ptr [EDX + 0x4]
// 005d1425: SHL EAX,0x3
// 005d1428: MOV ECX,dword ptr [EDX]
// 005d142a: MOV EBX,EAX
// 005d142c: SHL EAX,0x3
// 005d142f: MOV ECX,dword ptr [ECX + 0x4]
// 005d1432: SUB EAX,EBX
// 005d1434: LEA EBX,[ECX + EAX*0x1]
// 005d1437: MOV EAX,dword ptr [EDX + 0x8]
// 005d143a: SHL EAX,0x3
// 005d143d: MOV dword ptr [ESP + 0x1b4],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d1444: MOV EBX,EAX
// 005d1446: SHL EAX,0x3
// 005d1449: SUB EAX,EBX
// 005d144b: LEA EBX,[ECX + EAX*0x1]
// 005d144e: MOV EAX,dword ptr [EDX + 0xc]
// 005d1451: SHL EAX,0x3
// 005d1454: MOV EDX,EAX
// 005d1456: SHL EAX,0x3
// 005d1459: SUB EAX,EDX
// 005d145b: LEA ESI,[ECX + EAX*0x1]
// 005d145e: MOV EAX,dword ptr [EDI + 0x4]
// 005d1461: SHL EAX,0x3
// 005d1464: MOV ECX,dword ptr [EDI]
// 005d1466: MOV EDX,EAX
// 005d1468: SHL EAX,0x3
// 005d146b: MOV ECX,dword ptr [ECX + 0x4]
// 005d146e: SUB EAX,EDX
// 005d1470: MOV dword ptr [ESP + 0x1b8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005d1477: LEA EBX,[ECX + EAX*0x1]
// 005d147a: MOV EAX,dword ptr [EDI + 0x8]
// 005d147d: SHL EAX,0x3
// 005d1480: MOV EDX,EAX
// 005d1482: SHL EAX,0x3
// 005d1485: SUB EAX,EDX
// 005d1487: LEA EDX,[ECX + EAX*0x1]
// 005d148a: MOV EAX,dword ptr [EDI + 0xc]
// 005d148d: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d1494: SHL EAX,0x3
// 005d1497: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d149e: MOV EDI,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x20] (READ)
// 005d14a5: SHL EAX,0x3
// 005d14a8: SUB EAX,EDI
// 005d14aa: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1b8] (READ)
// 005d14ae: ADD ECX,EAX
// 005d14b0: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x1a8] (READ)
// 005d14b4: FNSTSW AX
// 005d14b6: SAHF
// 005d14b7: JC 0x005d1a38
//   XREF to: 005d1a38 (CONDITIONAL_JUMP)
// 005d14bd: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1b8] (READ)
// 005d14c1: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1b0] (READ)
// 005d14c5: FNSTSW AX
// 005d14c7: SAHF
// 005d14c8: JC 0x005d1a38
//   XREF to: 005d1a38 (CONDITIONAL_JUMP)
// 005d14ce: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d14d5: MOV EAX,dword ptr [EAX + 0x8]
// 005d14d8: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005d14df: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d14e6: MOV EAX,dword ptr [EAX + 0xc]
// 005d14e9: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005d14f0: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d14f7: MOV EAX,dword ptr [EAX + 0x10]
// 005d14fa: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005d1501: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d1508: MOV EAX,dword ptr [EAX + 0x14]
// 005d150b: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005d1512: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0xa8] (READ)
// 005d1519: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005d151d: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0xa4] (READ)
// 005d1524: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x17c] (WRITE)
// 005d1528: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0xa0] (READ)
// 005d152f: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005d1533: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x9c] (READ)
// 005d153a: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005d153e: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1545: MOV EAX,dword ptr [EAX + 0x8]
// 005d1548: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005d154f: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1556: MOV EAX,dword ptr [EAX + 0xc]
// 005d1559: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005d1560: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1567: MOV EAX,dword ptr [EAX + 0x10]
// 005d156a: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 005d1571: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1578: MOV EAX,dword ptr [EAX + 0x14]
// 005d157b: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 005d1582: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x98] (READ)
// 005d1589: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 005d158d: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x94] (READ)
// 005d1594: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005d1598: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x100] (READ)
// 005d159f: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 005d15a3: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0xfc] (READ)
// 005d15aa: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005d15ae: MOV EAX,dword ptr [ESI + 0x8]
// 005d15b1: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005d15b8: MOV EAX,dword ptr [ESI + 0xc]
// 005d15bb: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005d15c2: MOV EAX,dword ptr [ESI + 0x10]
// 005d15c5: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005d15cc: MOV EAX,dword ptr [ESI + 0x14]
// 005d15cf: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 005d15d6: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0xf8] (READ)
// 005d15dd: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x190] (WRITE)
// 005d15e1: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0xf4] (READ)
// 005d15e8: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005d15ec: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0xf0] (READ)
// 005d15f3: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x188] (WRITE)
// 005d15f7: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0xec] (READ)
// 005d15fe: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x184] (WRITE)
// 005d1602: MOV EAX,dword ptr [EBX + 0x8]
// 005d1605: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005d160c: MOV EAX,dword ptr [EBX + 0xc]
// 005d160f: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005d1616: MOV EAX,dword ptr [EBX + 0x10]
// 005d1619: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005d1620: MOV EAX,dword ptr [EBX + 0x14]
// 005d1623: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005d162a: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0xe8] (READ)
// 005d1631: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 005d1638: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0xe4] (READ)
// 005d163f: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 005d1646: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0xe0] (READ)
// 005d164d: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x148] (WRITE)
// 005d1654: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0xdc] (READ)
// 005d165b: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x144] (WRITE)
// 005d1662: MOV EAX,dword ptr [EDX + 0x8]
// 005d1665: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005d166c: MOV EAX,dword ptr [EDX + 0xc]
// 005d166f: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005d1676: MOV EAX,dword ptr [EDX + 0x10]
// 005d1679: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 005d1680: MOV EAX,dword ptr [EDX + 0x14]
// 005d1683: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 005d168a: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0xd8] (READ)
// 005d1691: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 005d1695: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0xd4] (READ)
// 005d169c: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005d16a0: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0xd0] (READ)
// 005d16a7: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 005d16ab: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0xcc] (READ)
// 005d16b2: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 005d16b6: MOV EAX,dword ptr [ECX + 0x8]
// 005d16b9: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005d16c0: MOV EAX,dword ptr [ECX + 0xc]
// 005d16c3: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005d16ca: MOV EAX,dword ptr [ECX + 0x10]
// 005d16cd: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005d16d4: MOV EAX,dword ptr [ECX + 0x14]
// 005d16d7: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005d16de: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0xc8] (READ)
// 005d16e5: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 005d16e9: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0xc4] (READ)
// 005d16f0: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 005d16f4: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0xc0] (READ)
// 005d16fb: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 005d16ff: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0xbc] (READ)
// 005d1706: MOV dword ptr [ESP + 0x7c],EAX
//   Label: LAB_005d1706
//   XREF to: Stack[-0x154] (WRITE)
// 005d170a: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x180] (READ)
// 005d170e: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x170] (READ)
// 005d1712: FNSTSW AX
// 005d1714: SAHF
// 005d1715: JZ 0x005d1ec8
//   XREF to: 005d1ec8 (CONDITIONAL_JUMP)
// 005d171b: FLD double ptr [ESP + 0x30]
//   Label: LAB_005d171b
//   XREF to: Stack[-0x1a0] (READ)
// 005d171f: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x150] (READ)
// 005d1726: FNSTSW AX
// 005d1728: SAHF
// 005d1729: JNZ 0x005d173b
//   XREF to: 005d173b (CONDITIONAL_JUMP)
// 005d172b: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x198] (READ)
// 005d172f: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x148] (READ)
// 005d1736: FNSTSW AX
// 005d1738: SAHF
// 005d1739: JZ 0x005d1762
//   XREF to: 005d1762 (CONDITIONAL_JUMP)
// 005d173b: LEA EAX,[ESP + 0x60]
//   Label: LAB_005d173b
//   XREF to: Stack[-0x170] (DATA)
// 005d173f: PUSH EAX
// 005d1740: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x150] (DATA)
// 005d1747: PUSH EAX
// 005d1748: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1a0] (DATA)
// 005d174c: PUSH EAX
// 005d174d: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x180] (DATA)
// 005d1751: PUSH EAX
// 005d1752: CALL shape_superopt.cpp_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d1757: ADD ESP,0x10
// 005d175a: TEST EAX,EAX
// 005d175c: JNZ 0x005d19fe
//   XREF to: 005d19fe (CONDITIONAL_JUMP)
// 005d1762: FLD double ptr [ESP + 0x50]
//   Label: LAB_005d1762
//   XREF to: Stack[-0x180] (READ)
// 005d1766: FCOMP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x160] (READ)
// 005d176a: FNSTSW AX
// 005d176c: SAHF
// 005d176d: JZ 0x005d1ede
//   XREF to: 005d1ede (CONDITIONAL_JUMP)
// 005d1773: FLD double ptr [ESP + 0x30]
//   Label: LAB_005d1773
//   XREF to: Stack[-0x1a0] (READ)
// 005d1777: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x170] (READ)
// 005d177b: FNSTSW AX
// 005d177d: SAHF
// 005d177e: JNZ 0x005d178d
//   XREF to: 005d178d (CONDITIONAL_JUMP)
// 005d1780: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x198] (READ)
// 005d1784: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x168] (READ)
// 005d1788: FNSTSW AX
// 005d178a: SAHF
// 005d178b: JZ 0x005d17b1
//   XREF to: 005d17b1 (CONDITIONAL_JUMP)
// 005d178d: LEA EAX,[ESP + 0x70]
//   Label: LAB_005d178d
//   XREF to: Stack[-0x160] (DATA)
// 005d1791: PUSH EAX
// 005d1792: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x170] (DATA)
// 005d1796: PUSH EAX
// 005d1797: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1a0] (DATA)
// 005d179b: PUSH EAX
// 005d179c: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x180] (DATA)
// 005d17a0: PUSH EAX
// 005d17a1: CALL shape_superopt.cpp_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d17a6: ADD ESP,0x10
// 005d17a9: TEST EAX,EAX
// 005d17ab: JNZ 0x005d19fe
//   XREF to: 005d19fe (CONDITIONAL_JUMP)
// 005d17b1: FLD double ptr [ESP + 0x50]
//   Label: LAB_005d17b1
//   XREF to: Stack[-0x180] (READ)
// 005d17b5: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x150] (READ)
// 005d17bc: FNSTSW AX
// 005d17be: SAHF
// 005d17bf: JZ 0x005d1ef4
//   XREF to: 005d1ef4 (CONDITIONAL_JUMP)
// 005d17c5: FLD double ptr [ESP + 0x30]
//   Label: LAB_005d17c5
//   XREF to: Stack[-0x1a0] (READ)
// 005d17c9: FCOMP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x160] (READ)
// 005d17cd: FNSTSW AX
// 005d17cf: SAHF
// 005d17d0: JNZ 0x005d17df
//   XREF to: 005d17df (CONDITIONAL_JUMP)
// 005d17d2: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x198] (READ)
// 005d17d6: FCOMP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x158] (READ)
// 005d17da: FNSTSW AX
// 005d17dc: SAHF
// 005d17dd: JZ 0x005d1806
//   XREF to: 005d1806 (CONDITIONAL_JUMP)
// 005d17df: LEA EAX,[ESP + 0x80]
//   Label: LAB_005d17df
//   XREF to: Stack[-0x150] (DATA)
// 005d17e6: PUSH EAX
// 005d17e7: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x160] (DATA)
// 005d17eb: PUSH EAX
// 005d17ec: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1a0] (DATA)
// 005d17f0: PUSH EAX
// 005d17f1: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x180] (DATA)
// 005d17f5: PUSH EAX
// 005d17f6: CALL shape_superopt.cpp_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d17fb: ADD ESP,0x10
// 005d17fe: TEST EAX,EAX
// 005d1800: JNZ 0x005d19fe
//   XREF to: 005d19fe (CONDITIONAL_JUMP)
// 005d1806: FLD double ptr [ESP + 0x30]
//   Label: LAB_005d1806
//   XREF to: Stack[-0x1a0] (READ)
// 005d180a: FCOMP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x160] (READ)
// 005d180e: FNSTSW AX
// 005d1810: SAHF
// 005d1811: JZ 0x005d1f0d
//   XREF to: 005d1f0d (CONDITIONAL_JUMP)
// 005d1817: FLD double ptr [ESP + 0x40]
//   Label: LAB_005d1817
//   XREF to: Stack[-0x190] (READ)
// 005d181b: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x170] (READ)
// 005d181f: FNSTSW AX
// 005d1821: SAHF
// 005d1822: JNZ 0x005d1831
//   XREF to: 005d1831 (CONDITIONAL_JUMP)
// 005d1824: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x188] (READ)
// 005d1828: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x168] (READ)
// 005d182c: FNSTSW AX
// 005d182e: SAHF
// 005d182f: JZ 0x005d1855
//   XREF to: 005d1855 (CONDITIONAL_JUMP)
// 005d1831: LEA EAX,[ESP + 0x70]
//   Label: LAB_005d1831
//   XREF to: Stack[-0x160] (DATA)
// 005d1835: PUSH EAX
// 005d1836: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x170] (DATA)
// 005d183a: PUSH EAX
// 005d183b: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x190] (DATA)
// 005d183f: PUSH EAX
// 005d1840: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x1a0] (DATA)
// 005d1844: PUSH EAX
// 005d1845: CALL shape_superopt.cpp_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d184a: ADD ESP,0x10
// 005d184d: TEST EAX,EAX
// 005d184f: JNZ 0x005d19fe
//   XREF to: 005d19fe (CONDITIONAL_JUMP)
// 005d1855: FLD double ptr [ESP + 0x30]
//   Label: LAB_005d1855
//   XREF to: Stack[-0x1a0] (READ)
// 005d1859: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x150] (READ)
// 005d1860: FNSTSW AX
// 005d1862: SAHF
// 005d1863: JZ 0x005d1f23
//   XREF to: 005d1f23 (CONDITIONAL_JUMP)
// 005d1869: FLD double ptr [ESP + 0x40]
//   Label: LAB_005d1869
//   XREF to: Stack[-0x190] (READ)
// 005d186d: FCOMP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x160] (READ)
// 005d1871: FNSTSW AX
// 005d1873: SAHF
// 005d1874: JNZ 0x005d1883
//   XREF to: 005d1883 (CONDITIONAL_JUMP)
// 005d1876: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x188] (READ)
// 005d187a: FCOMP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x158] (READ)
// 005d187e: FNSTSW AX
// 005d1880: SAHF
// 005d1881: JZ 0x005d18aa
//   XREF to: 005d18aa (CONDITIONAL_JUMP)
// 005d1883: LEA EAX,[ESP + 0x80]
//   Label: LAB_005d1883
//   XREF to: Stack[-0x150] (DATA)
// 005d188a: PUSH EAX
// 005d188b: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x160] (DATA)
// 005d188f: PUSH EAX
// 005d1890: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x190] (DATA)
// 005d1894: PUSH EAX
// 005d1895: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x1a0] (DATA)
// 005d1899: PUSH EAX
// 005d189a: CALL shape_superopt.cpp_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d189f: ADD ESP,0x10
// 005d18a2: TEST EAX,EAX
// 005d18a4: JNZ 0x005d19fe
//   XREF to: 005d19fe (CONDITIONAL_JUMP)
// 005d18aa: FLD double ptr [ESP + 0x30]
//   Label: LAB_005d18aa
//   XREF to: Stack[-0x1a0] (READ)
// 005d18ae: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x170] (READ)
// 005d18b2: FNSTSW AX
// 005d18b4: SAHF
// 005d18b5: JZ 0x005d1f3c
//   XREF to: 005d1f3c (CONDITIONAL_JUMP)
// 005d18bb: FLD double ptr [ESP + 0x40]
//   Label: LAB_005d18bb
//   XREF to: Stack[-0x190] (READ)
// 005d18bf: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x150] (READ)
// 005d18c6: FNSTSW AX
// 005d18c8: SAHF
// 005d18c9: JNZ 0x005d18db
//   XREF to: 005d18db (CONDITIONAL_JUMP)
// 005d18cb: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x188] (READ)
// 005d18cf: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x148] (READ)
// 005d18d6: FNSTSW AX
// 005d18d8: SAHF
// 005d18d9: JZ 0x005d1902
//   XREF to: 005d1902 (CONDITIONAL_JUMP)
// 005d18db: LEA EAX,[ESP + 0x60]
//   Label: LAB_005d18db
//   XREF to: Stack[-0x170] (DATA)
// 005d18df: PUSH EAX
// 005d18e0: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x150] (DATA)
// 005d18e7: PUSH EAX
// 005d18e8: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x190] (DATA)
// 005d18ec: PUSH EAX
// 005d18ed: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x1a0] (DATA)
// 005d18f1: PUSH EAX
// 005d18f2: CALL shape_superopt.cpp_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d18f7: ADD ESP,0x10
// 005d18fa: TEST EAX,EAX
// 005d18fc: JNZ 0x005d19fe
//   XREF to: 005d19fe (CONDITIONAL_JUMP)
// 005d1902: FLD double ptr [ESP + 0x40]
//   Label: LAB_005d1902
//   XREF to: Stack[-0x190] (READ)
// 005d1906: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x150] (READ)
// 005d190d: FNSTSW AX
// 005d190f: SAHF
// 005d1910: JZ 0x005d1f52
//   XREF to: 005d1f52 (CONDITIONAL_JUMP)
// 005d1916: FLD double ptr [ESP + 0x50]
//   Label: LAB_005d1916
//   XREF to: Stack[-0x180] (READ)
// 005d191a: FCOMP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x160] (READ)
// 005d191e: FNSTSW AX
// 005d1920: SAHF
// 005d1921: JNZ 0x005d1930
//   XREF to: 005d1930 (CONDITIONAL_JUMP)
// 005d1923: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x178] (READ)
// 005d1927: FCOMP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x158] (READ)
// 005d192b: FNSTSW AX
// 005d192d: SAHF
// 005d192e: JZ 0x005d1957
//   XREF to: 005d1957 (CONDITIONAL_JUMP)
// 005d1930: LEA EAX,[ESP + 0x80]
//   Label: LAB_005d1930
//   XREF to: Stack[-0x150] (DATA)
// 005d1937: PUSH EAX
// 005d1938: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x160] (DATA)
// 005d193c: PUSH EAX
// 005d193d: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x180] (DATA)
// 005d1941: PUSH EAX
// 005d1942: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x190] (DATA)
// 005d1946: PUSH EAX
// 005d1947: CALL shape_superopt.cpp_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d194c: ADD ESP,0x10
// 005d194f: TEST EAX,EAX
// 005d1951: JNZ 0x005d19fe
//   XREF to: 005d19fe (CONDITIONAL_JUMP)
// 005d1957: FLD double ptr [ESP + 0x40]
//   Label: LAB_005d1957
//   XREF to: Stack[-0x190] (READ)
// 005d195b: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x170] (READ)
// 005d195f: FNSTSW AX
// 005d1961: SAHF
// 005d1962: JZ 0x005d1f6b
//   XREF to: 005d1f6b (CONDITIONAL_JUMP)
// 005d1968: FLD double ptr [ESP + 0x50]
//   Label: LAB_005d1968
//   XREF to: Stack[-0x180] (READ)
// 005d196c: FCOMP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x150] (READ)
// 005d1973: FNSTSW AX
// 005d1975: SAHF
// 005d1976: JNZ 0x005d1988
//   XREF to: 005d1988 (CONDITIONAL_JUMP)
// 005d1978: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x178] (READ)
// 005d197c: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x148] (READ)
// 005d1983: FNSTSW AX
// 005d1985: SAHF
// 005d1986: JZ 0x005d19ab
//   XREF to: 005d19ab (CONDITIONAL_JUMP)
// 005d1988: LEA EAX,[ESP + 0x60]
//   Label: LAB_005d1988
//   XREF to: Stack[-0x170] (DATA)
// 005d198c: PUSH EAX
// 005d198d: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x150] (DATA)
// 005d1994: PUSH EAX
// 005d1995: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x180] (DATA)
// 005d1999: PUSH EAX
// 005d199a: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x190] (DATA)
// 005d199e: PUSH EAX
// 005d199f: CALL shape_superopt.cpp_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d19a4: ADD ESP,0x10
// 005d19a7: TEST EAX,EAX
// 005d19a9: JNZ 0x005d19fe
//   XREF to: 005d19fe (CONDITIONAL_JUMP)
// 005d19ab: FLD double ptr [ESP + 0x40]
//   Label: LAB_005d19ab
//   XREF to: Stack[-0x190] (READ)
// 005d19af: FCOMP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x160] (READ)
// 005d19b3: FNSTSW AX
// 005d19b5: SAHF
// 005d19b6: JZ 0x005d1f81
//   XREF to: 005d1f81 (CONDITIONAL_JUMP)
// 005d19bc: FLD double ptr [ESP + 0x50]
//   Label: LAB_005d19bc
//   XREF to: Stack[-0x180] (READ)
// 005d19c0: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x170] (READ)
// 005d19c4: FNSTSW AX
// 005d19c6: SAHF
// 005d19c7: JNZ 0x005d19da
//   XREF to: 005d19da (CONDITIONAL_JUMP)
// 005d19c9: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x178] (READ)
// 005d19cd: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x168] (READ)
// 005d19d1: FNSTSW AX
// 005d19d3: SAHF
// 005d19d4: JZ 0x005d1f92
//   XREF to: 005d1f92 (CONDITIONAL_JUMP)
// 005d19da: LEA EAX,[ESP + 0x70]
//   Label: LAB_005d19da
//   XREF to: Stack[-0x160] (DATA)
// 005d19de: PUSH EAX
// 005d19df: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x170] (DATA)
// 005d19e3: PUSH EAX
// 005d19e4: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x180] (DATA)
// 005d19e8: PUSH EAX
// 005d19e9: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x190] (DATA)
// 005d19ed: PUSH EAX
// 005d19ee: CALL shape_superopt.cpp_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d19f3: ADD ESP,0x10
// 005d19f6: TEST EAX,EAX
// 005d19f8: JZ 0x005d1f92
//   XREF to: 005d1f92 (CONDITIONAL_JUMP)
// 005d19fe: MOV EAX,0x1
//   Label: LAB_005d19fe
// 005d1a03: MOV ESP,EBP
// 005d1a05: POP EBP
// 005d1a06: POP EDI
// 005d1a07: POP ESI
// 005d1a08: POP EBX
// 005d1a09: RET
// 005d1a0a: MOV EAX,dword ptr [EDX + 0x40]
//   Label: LAB_005d1a0a
// 005d1a0d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1d0] (DATA)
// 005d1a10: MOV EAX,dword ptr [EDX + 0x44]
// 005d1a13: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 005d1a17: JMP 0x005d13bb
//   XREF to: 005d13bb (UNCONDITIONAL_JUMP)
// 005d1a1c: FLD double ptr [EDX + 0x48]
//   Label: LAB_005d1a1c
// 005d1a1f: FCHS
// 005d1a21: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c8] (WRITE)
// 005d1a25: JMP 0x005d13e6
//   XREF to: 005d13e6 (UNCONDITIONAL_JUMP)
// 005d1a2a: FLD double ptr [EDX + 0x50]
//   Label: LAB_005d1a2a
// 005d1a2d: FCHS
// 005d1a2f: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1b0] (WRITE)
// 005d1a33: JMP 0x005d1412
//   XREF to: 005d1412 (UNCONDITIONAL_JUMP)
// 005d1a38: FLD double ptr [ESP + 0x28]
//   Label: LAB_005d1a38
//   XREF to: Stack[-0x1a8] (READ)
// 005d1a3c: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1b8] (READ)
// 005d1a40: FNSTSW AX
// 005d1a42: SAHF
// 005d1a43: JC 0x005d1c91
//   XREF to: 005d1c91 (CONDITIONAL_JUMP)
// 005d1a49: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x1a8] (READ)
// 005d1a4d: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c0] (READ)
// 005d1a51: FNSTSW AX
// 005d1a53: SAHF
// 005d1a54: JC 0x005d1c91
//   XREF to: 005d1c91 (CONDITIONAL_JUMP)
// 005d1a5a: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d1a61: MOV EAX,dword ptr [EAX]
// 005d1a63: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005d1a6a: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d1a71: MOV EAX,dword ptr [EAX + 0x4]
// 005d1a74: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005d1a7b: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d1a82: MOV EAX,dword ptr [EAX + 0x10]
// 005d1a85: MOV dword ptr [ESP + 0x190],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005d1a8c: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d1a93: MOV EAX,dword ptr [EAX + 0x14]
// 005d1a96: MOV dword ptr [ESP + 0x194],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005d1a9d: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0xb8] (READ)
// 005d1aa4: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005d1aa8: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0xb4] (READ)
// 005d1aaf: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x17c] (WRITE)
// 005d1ab3: MOV EAX,dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x40] (READ)
// 005d1aba: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005d1abe: MOV EAX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x3c] (READ)
// 005d1ac5: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005d1ac9: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1ad0: MOV EAX,dword ptr [EAX]
// 005d1ad2: MOV dword ptr [ESP + 0x188],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005d1ad9: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1ae0: MOV EAX,dword ptr [EAX + 0x4]
// 005d1ae3: MOV dword ptr [ESP + 0x18c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005d1aea: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1af1: MOV EAX,dword ptr [EAX + 0x10]
// 005d1af4: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005d1afb: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1b02: MOV EAX,dword ptr [EAX + 0x14]
// 005d1b05: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005d1b0c: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x48] (READ)
// 005d1b13: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 005d1b17: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x44] (READ)
// 005d1b1e: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005d1b22: MOV EAX,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x28] (READ)
// 005d1b29: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 005d1b2d: MOV EAX,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x24] (READ)
// 005d1b34: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005d1b38: MOV EAX,dword ptr [ESI]
// 005d1b3a: MOV dword ptr [ESP + 0x1a0],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005d1b41: MOV EAX,dword ptr [ESI + 0x4]
// 005d1b44: MOV dword ptr [ESP + 0x1a4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005d1b4b: MOV EAX,dword ptr [ESI + 0x10]
// 005d1b4e: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005d1b55: MOV EAX,dword ptr [ESI + 0x14]
// 005d1b58: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005d1b5f: MOV EAX,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x30] (READ)
// 005d1b66: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x190] (WRITE)
// 005d1b6a: MOV EAX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x2c] (READ)
// 005d1b71: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005d1b75: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x90] (READ)
// 005d1b7c: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x188] (WRITE)
// 005d1b80: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x8c] (READ)
// 005d1b87: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x184] (WRITE)
// 005d1b8b: MOV EAX,dword ptr [EBX]
// 005d1b8d: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005d1b94: MOV EAX,dword ptr [EBX + 0x4]
// 005d1b97: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005d1b9e: MOV EAX,dword ptr [EBX + 0x10]
// 005d1ba1: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x130] (WRITE)
// 005d1ba8: MOV EAX,dword ptr [EBX + 0x14]
// 005d1bab: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x12c] (WRITE)
// 005d1bb2: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x88] (READ)
// 005d1bb9: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 005d1bc0: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x84] (READ)
// 005d1bc7: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 005d1bce: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x130] (READ)
// 005d1bd5: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x148] (WRITE)
// 005d1bdc: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x12c] (READ)
// 005d1be3: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x144] (WRITE)
// 005d1bea: MOV EAX,dword ptr [EDX]
// 005d1bec: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x140] (WRITE)
// 005d1bf3: MOV EAX,dword ptr [EDX + 0x4]
// 005d1bf6: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 005d1bfd: MOV EAX,dword ptr [EDX + 0x10]
// 005d1c00: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 005d1c07: MOV EAX,dword ptr [EDX + 0x14]
// 005d1c0a: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 005d1c11: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x140] (READ)
// 005d1c18: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 005d1c1c: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x13c] (READ)
// 005d1c23: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005d1c27: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x110] (READ)
// 005d1c2e: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 005d1c32: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x10c] (READ)
// 005d1c39: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 005d1c3d: MOV EAX,dword ptr [ECX]
// 005d1c3f: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 005d1c46: MOV EAX,dword ptr [ECX + 0x4]
// 005d1c49: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 005d1c50: MOV EAX,dword ptr [ECX + 0x10]
// 005d1c53: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005d1c5a: MOV EAX,dword ptr [ECX + 0x14]
// 005d1c5d: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005d1c64: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x108] (READ)
// 005d1c6b: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 005d1c6f: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x104] (READ)
// 005d1c76: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 005d1c7a: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x128] (READ)
// 005d1c81: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 005d1c85: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x124] (READ)
// 005d1c8c: JMP 0x005d1706
//   XREF to: 005d1706 (UNCONDITIONAL_JUMP)
// 005d1c91: MOV EAX,dword ptr [ESP + 0x1b4]
//   Label: LAB_005d1c91
//   XREF to: Stack[-0x1c] (READ)
// 005d1c98: MOV EAX,dword ptr [EAX]
// 005d1c9a: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 005d1ca1: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d1ca8: MOV EAX,dword ptr [EAX + 0x4]
// 005d1cab: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 005d1cb2: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d1cb9: MOV EAX,dword ptr [EAX + 0x8]
// 005d1cbc: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005d1cc3: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005d1cca: MOV EAX,dword ptr [EAX + 0xc]
// 005d1ccd: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005d1cd4: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x138] (READ)
// 005d1cdb: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005d1cdf: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x134] (READ)
// 005d1ce6: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x17c] (WRITE)
// 005d1cea: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x120] (READ)
// 005d1cf1: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005d1cf5: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x11c] (READ)
// 005d1cfc: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005d1d00: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1d07: MOV EAX,dword ptr [EAX]
// 005d1d09: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005d1d10: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1d17: MOV EAX,dword ptr [EAX + 0x4]
// 005d1d1a: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 005d1d21: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1d28: MOV EAX,dword ptr [EAX + 0x8]
// 005d1d2b: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005d1d32: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005d1d39: MOV EAX,dword ptr [EAX + 0xc]
// 005d1d3c: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005d1d43: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x118] (READ)
// 005d1d4a: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 005d1d4e: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x114] (READ)
// 005d1d55: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005d1d59: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0xb0] (READ)
// 005d1d60: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 005d1d64: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0xac] (READ)
// 005d1d6b: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 005d1d6f: MOV EAX,dword ptr [ESI]
// 005d1d71: MOV dword ptr [ESP + 0x198],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005d1d78: MOV EAX,dword ptr [ESI + 0x4]
// 005d1d7b: MOV dword ptr [ESP + 0x19c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005d1d82: MOV EAX,dword ptr [ESI + 0x8]
// 005d1d85: MOV dword ptr [ESP + 0x180],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005d1d8c: MOV EAX,dword ptr [ESI + 0xc]
// 005d1d8f: MOV dword ptr [ESP + 0x184],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005d1d96: MOV EAX,dword ptr [ESP + 0x198]
//   XREF to: Stack[-0x38] (READ)
// 005d1d9d: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x190] (WRITE)
// 005d1da1: MOV EAX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x34] (READ)
// 005d1da8: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x18c] (WRITE)
// 005d1dac: MOV EAX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x50] (READ)
// 005d1db3: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x188] (WRITE)
// 005d1db7: MOV EAX,dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x4c] (READ)
// 005d1dbe: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x184] (WRITE)
// 005d1dc2: MOV EAX,dword ptr [EBX]
// 005d1dc4: MOV dword ptr [ESP + 0x168],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005d1dcb: MOV EAX,dword ptr [EBX + 0x4]
// 005d1dce: MOV dword ptr [ESP + 0x16c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005d1dd5: MOV EAX,dword ptr [EBX + 0x8]
// 005d1dd8: MOV dword ptr [ESP + 0x170],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005d1ddf: MOV EAX,dword ptr [EBX + 0xc]
// 005d1de2: MOV dword ptr [ESP + 0x174],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005d1de9: MOV EAX,dword ptr [ESP + 0x168]
//   XREF to: Stack[-0x68] (READ)
// 005d1df0: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 005d1df7: MOV EAX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[-0x64] (READ)
// 005d1dfe: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 005d1e05: MOV EAX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x60] (READ)
// 005d1e0c: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x148] (WRITE)
// 005d1e13: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x5c] (READ)
// 005d1e1a: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x144] (WRITE)
// 005d1e21: MOV EAX,dword ptr [EDX]
// 005d1e23: MOV dword ptr [ESP + 0x178],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005d1e2a: MOV EAX,dword ptr [EDX + 0x4]
// 005d1e2d: MOV dword ptr [ESP + 0x17c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005d1e34: MOV EAX,dword ptr [EDX + 0x8]
// 005d1e37: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005d1e3e: MOV EAX,dword ptr [EDX + 0xc]
// 005d1e41: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005d1e48: MOV EAX,dword ptr [ESP + 0x178]
//   XREF to: Stack[-0x58] (READ)
// 005d1e4f: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 005d1e53: MOV EAX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[-0x54] (READ)
// 005d1e5a: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005d1e5e: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x80] (READ)
// 005d1e65: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 005d1e69: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x7c] (READ)
// 005d1e70: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 005d1e74: MOV EAX,dword ptr [ECX]
// 005d1e76: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005d1e7d: MOV EAX,dword ptr [ECX + 0x4]
// 005d1e80: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005d1e87: MOV EAX,dword ptr [ECX + 0x8]
// 005d1e8a: MOV dword ptr [ESP + 0x160],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005d1e91: MOV EAX,dword ptr [ECX + 0xc]
// 005d1e94: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005d1e9b: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x78] (READ)
// 005d1ea2: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 005d1ea6: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x74] (READ)
// 005d1ead: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 005d1eb1: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x70] (READ)
// 005d1eb8: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 005d1ebc: MOV EAX,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x6c] (READ)
// 005d1ec3: JMP 0x005d1706
//   XREF to: 005d1706 (UNCONDITIONAL_JUMP)
// 005d1ec8: FLD double ptr [ESP + 0x58]
//   Label: LAB_005d1ec8
//   XREF to: Stack[-0x178] (READ)
// 005d1ecc: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x168] (READ)
// 005d1ed0: FNSTSW AX
// 005d1ed2: SAHF
// 005d1ed3: JNZ 0x005d171b
//   XREF to: 005d171b (CONDITIONAL_JUMP)
// 005d1ed9: JMP 0x005d1762
//   XREF to: 005d1762 (UNCONDITIONAL_JUMP)
// 005d1ede: FLD double ptr [ESP + 0x58]
//   Label: LAB_005d1ede
//   XREF to: Stack[-0x178] (READ)
// 005d1ee2: FCOMP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x158] (READ)
// 005d1ee6: FNSTSW AX
// 005d1ee8: SAHF
// 005d1ee9: JNZ 0x005d1773
//   XREF to: 005d1773 (CONDITIONAL_JUMP)
// 005d1eef: JMP 0x005d17b1
//   XREF to: 005d17b1 (UNCONDITIONAL_JUMP)
// 005d1ef4: FLD double ptr [ESP + 0x58]
//   Label: LAB_005d1ef4
//   XREF to: Stack[-0x178] (READ)
// 005d1ef8: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x148] (READ)
// 005d1eff: FNSTSW AX
// 005d1f01: SAHF
// 005d1f02: JNZ 0x005d17c5
//   XREF to: 005d17c5 (CONDITIONAL_JUMP)
// 005d1f08: JMP 0x005d1806
//   XREF to: 005d1806 (UNCONDITIONAL_JUMP)
// 005d1f0d: FLD double ptr [ESP + 0x38]
//   Label: LAB_005d1f0d
//   XREF to: Stack[-0x198] (READ)
// 005d1f11: FCOMP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x158] (READ)
// 005d1f15: FNSTSW AX
// 005d1f17: SAHF
// 005d1f18: JNZ 0x005d1817
//   XREF to: 005d1817 (CONDITIONAL_JUMP)
// 005d1f1e: JMP 0x005d1855
//   XREF to: 005d1855 (UNCONDITIONAL_JUMP)
// 005d1f23: FLD double ptr [ESP + 0x38]
//   Label: LAB_005d1f23
//   XREF to: Stack[-0x198] (READ)
// 005d1f27: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x148] (READ)
// 005d1f2e: FNSTSW AX
// 005d1f30: SAHF
// 005d1f31: JNZ 0x005d1869
//   XREF to: 005d1869 (CONDITIONAL_JUMP)
// 005d1f37: JMP 0x005d18aa
//   XREF to: 005d18aa (UNCONDITIONAL_JUMP)
// 005d1f3c: FLD double ptr [ESP + 0x38]
//   Label: LAB_005d1f3c
//   XREF to: Stack[-0x198] (READ)
// 005d1f40: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x168] (READ)
// 005d1f44: FNSTSW AX
// 005d1f46: SAHF
// 005d1f47: JNZ 0x005d18bb
//   XREF to: 005d18bb (CONDITIONAL_JUMP)
// 005d1f4d: JMP 0x005d1902
//   XREF to: 005d1902 (UNCONDITIONAL_JUMP)
// 005d1f52: FLD double ptr [ESP + 0x48]
//   Label: LAB_005d1f52
//   XREF to: Stack[-0x188] (READ)
// 005d1f56: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x148] (READ)
// 005d1f5d: FNSTSW AX
// 005d1f5f: SAHF
// 005d1f60: JNZ 0x005d1916
//   XREF to: 005d1916 (CONDITIONAL_JUMP)
// 005d1f66: JMP 0x005d1957
//   XREF to: 005d1957 (UNCONDITIONAL_JUMP)
// 005d1f6b: FLD double ptr [ESP + 0x48]
//   Label: LAB_005d1f6b
//   XREF to: Stack[-0x188] (READ)
// 005d1f6f: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x168] (READ)
// 005d1f73: FNSTSW AX
// 005d1f75: SAHF
// 005d1f76: JNZ 0x005d1968
//   XREF to: 005d1968 (CONDITIONAL_JUMP)
// 005d1f7c: JMP 0x005d19ab
//   XREF to: 005d19ab (UNCONDITIONAL_JUMP)
// 005d1f81: FLD double ptr [ESP + 0x48]
//   Label: LAB_005d1f81
//   XREF to: Stack[-0x188] (READ)
// 005d1f85: FCOMP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x158] (READ)
// 005d1f89: FNSTSW AX
// 005d1f8b: SAHF
// 005d1f8c: JNZ 0x005d19bc
//   XREF to: 005d19bc (CONDITIONAL_JUMP)
// 005d1f92: XOR EAX,EAX
//   Label: LAB_005d1f92
// 005d1f94: MOV ESP,EBP
// 005d1f96: POP EBP
// 005d1f97: POP EDI
// 005d1f98: POP ESI
// 005d1f99: POP EBX
// 005d1f9a: RET
