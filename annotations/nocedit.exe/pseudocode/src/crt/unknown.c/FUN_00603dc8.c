// Name: crt_unknown.c_FUN_00603dc8
// Address: 00603dc8
// Address Range: [[00603dc8, 0060403e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00603dc8()
// Cross-references:
//   crt_unknown.c_FUN_0060d48c (0060d48c) at 0060d4ed [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticInit_FUN_005fde60 (005fde60) at 005fde6c [DATA]
// Globals:
//   void* switchdataD_00603db4 = 00603e5e
// Function calls:
//   crt_unknown.c_FUN_00603d60
//   crt_unknown.c_FUN_0060b07a

#include "nocturne.h"

void crt_unknown_c_FUN_00603dc8(void)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  ushort in_FPUControlWord;
  float10 fVar12;
  uint *in_stack_00000004;
  int *in_stack_00000008;
  undefined1 *in_stack_0000000c;
  char local_97 [63];
  undefined1 auStack_58 [8];
  undefined2 uStack_50;
  uint local_4c;
  uint uStack_48;
  undefined1 uStack_44;
  byte bStack_43;
  undefined2 uStack_42;
  undefined1 local_40 [8];
  undefined2 uStack_38;
  float10 local_34;
  undefined4 local_28;
  uint local_24;
  char *local_20;
  undefined1 *local_1c;
  uint local_18;
  char cStack_14;
  
  local_18 = (uint)in_FPUControlWord;
  in_stack_00000008[5] = 0;
  uVar1 = (ushort)in_stack_00000004[2];
  uStack_44 = (undefined1)uVar1;
  bStack_43 = (byte)(uVar1 >> 8);
  uStack_48 = in_stack_00000004[1];
  local_4c = *in_stack_00000004;
  if ((uVar1 & 0x8000) != 0) {
    in_stack_00000008[5] = -1;
  }
  bStack_43 = bStack_43 & 0x7f;
  in_stack_00000008[7] = 0;
  in_stack_00000008[8] = 0;
  in_stack_00000008[9] = 0;
  in_stack_00000008[10] = 0;
  iVar11 = 0;
  in_stack_00000008[6] = 0;
  uVar2 = crt_unknown_c_FUN_0060b07a();
  switch(uVar2) {
  case 0:
  case 4:
    in_stack_00000008[5] = 0;
    local_24 = 0;
    break;
  case 1:
    iVar10 = (CONCAT11(bStack_43,uStack_44) - 0x3ffe) * 0x7597;
    uVar9 = 100000;
    iVar4 = iVar10 % 100000;
    local_24 = iVar10 / 100000 - 4;
    if (local_24 != 0) {
      if ((int)local_24 < 0) {
        uVar3 = 3 - local_24 & 0xfffffffc;
        uVar9 = -uVar3;
        uVar6 = local_24;
        local_24 = uVar9;
LAB_00603fc8:
        crt_unknown_c_FUN_00603d60(&local_4c,iVar4,uVar9,uVar6,&local_4c,uVar3);
      }
      else {
        uVar1 = CONCAT11(bStack_43,uStack_44);
        iVar4 = CONCAT22(uStack_42,uVar1);
        if ((uVar1 < 0x4019) || ((uVar1 == 0x4019 && (uStack_48 < 3200000000)))) {
          local_24 = 0;
        }
        else {
          uVar1 = CONCAT11(bStack_43,uStack_44);
          if ((0x4033 < uVar1) &&
             ((uVar6 = CONCAT22(uStack_42,uVar1), uVar1 != 0x4034 ||
              ((0x8e1bc9be < uStack_48 &&
               ((uVar6 = uStack_48, uStack_48 != 0x8e1bc9bf || (0x3ffffff < local_4c)))))))) {
            local_24 = local_24 & 0xfffffffc;
            uVar3 = -local_24;
            goto LAB_00603fc8;
          }
          _local_40 = (float10)CONCAT28(0x4019,0xbebc200000000000);
          _local_40 = (float10)((unkuint10)stack0xffffffc4 << 0x20);
          iVar11 = (int)ROUND((float10)CONCAT19(bStack_43,
                                                CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))) /
                              _local_40);
          local_34 = (float10)iVar11;
          _local_40 = _local_40 * (float10)iVar11;
          fVar12 = (float10)CONCAT19(bStack_43,CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))) -
                   _local_40;
          local_4c = SUB104(fVar12,0);
          uStack_48 = (uint)((unkuint10)fVar12 >> 0x20);
          uStack_44 = (undefined1)((unkuint10)fVar12 >> 0x40);
          bStack_43 = (byte)((unkuint10)fVar12 >> 0x48);
          local_24 = 8;
        }
      }
    }
    break;
  case 2:
    *in_stack_0000000c = 0x6e;
    in_stack_0000000c[1] = 0x61;
    in_stack_0000000c[2] = 0x6e;
    goto LAB_00603e7d;
  case 3:
    *in_stack_0000000c = 0x69;
    in_stack_0000000c[1] = 0x6e;
    in_stack_0000000c[2] = 0x66;
LAB_00603e7d:
    in_stack_0000000c[3] = 0;
    in_stack_00000008[7] = 3;
    goto LAB_00603d56;
  }
  if ((*(byte *)(in_stack_00000008 + 2) & 2) == 0) {
    local_1c = (undefined1 *)(*in_stack_00000008 + 7);
  }
  else {
    local_1c = (undefined1 *)(*in_stack_00000008 + local_24 + 10);
    if (0 < in_stack_00000008[1]) {
      local_1c = local_1c + in_stack_00000008[1];
    }
  }
  puVar8 = local_1c;
  iVar4 = 0xf;
  if ((*(byte *)(in_stack_00000008 + 2) & 0x20) != 0) {
    iVar4 = 0x14;
  }
  if ((*(byte *)(in_stack_00000008 + 2) & 0x40) != 0) {
    iVar4 = iVar4 * 2;
  }
  if (iVar4 + 4 < (int)local_1c) {
    local_1c = (undefined1 *)(iVar4 + 4);
  }
  puVar7 = local_1c;
  local_97[0] = '\0';
  local_28 = 0;
  local_20 = local_97;
  if (0 < (int)local_1c) {
    local_1c = local_1c + -8;
    if (iVar11 != 0) {
LAB_006040c9:
      crt_unknown_c_FUN_006040d7(iVar11,puVar8,local_97,puVar7,puVar8,puVar7);
      crt_unknown_c_FUN_0060411c();
      return;
    }
    if ((CONCAT11(bStack_43,uStack_44) & 0x7fff) != 0) {
      iVar11 = (int)ROUND((float10)CONCAT19(bStack_43,
                                            CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))));
      puVar8 = local_1c;
      if (0 < (int)local_1c) {
        puVar8 = auStack_58;
        _auStack_58 = (float10)CONCAT28(0x4019,0xbebc200000000000);
        puVar7 = (undefined1 *)0x0;
        _auStack_58 = (float10)((unkuint10)stack0xffffffac << 0x20);
        fVar12 = _auStack_58 *
                 ((float10)CONCAT19(bStack_43,CONCAT18(uStack_44,CONCAT44(uStack_48,local_4c))) -
                 (float10)iVar11);
        local_4c = SUB104(fVar12,0);
        uStack_48 = (uint)((unkuint10)fVar12 >> 0x20);
        uStack_44 = (undefined1)((unkuint10)fVar12 >> 0x40);
        bStack_43 = (byte)((unkuint10)fVar12 >> 0x48);
      }
      goto LAB_006040c9;
    }
  }
  iVar11 = 0;
  uVar9 = local_24 + 7;
  for (pcVar5 = local_97; local_24 = uVar9, *pcVar5 == '0'; pcVar5 = pcVar5 + 1) {
    iVar11 = iVar11 + -1;
    uVar9 = uVar9 - 1;
  }
  iVar4 = *in_stack_00000008;
  if ((*(byte *)(in_stack_00000008 + 2) & 2) == 0) {
    if ((*(byte *)(in_stack_00000008 + 2) & 1) != 0) {
      if (in_stack_00000008[1] < 1) {
        iVar4 = iVar4 + in_stack_00000008[1];
      }
      else {
        iVar4 = iVar4 + 1;
      }
      local_24 = (uVar9 + 1) - in_stack_00000008[1];
    }
  }
  else {
    local_24 = uVar9 + in_stack_00000008[1];
    iVar4 = iVar4 + uVar9 + in_stack_00000008[1] + 1;
  }
  if (-1 < iVar4) {
    if (iVar11 < iVar4) {
      iVar4 = iVar11;
    }
    iVar10 = 0xf;
    if ((*(byte *)(in_stack_00000008 + 2) & 0x20) != 0) {
      iVar10 = 0x14;
    }
    if ((*(byte *)(in_stack_00000008 + 2) & 0x40) != 0) {
      iVar10 = iVar10 * 2;
    }
    if (iVar10 < iVar4) {
      iVar4 = iVar10 + 1;
    }
    cStack_14 = '0';
    if ((iVar4 < iVar11) && (0x34 < (byte)pcVar5[iVar4])) {
      cStack_14 = '9';
    }
    pcVar5 = pcVar5 + iVar4;
    iVar11 = iVar4;
    while( true ) {
      pcVar5 = pcVar5 + -1;
      iVar11 = iVar11 + -1;
      if (*pcVar5 != cStack_14) break;
      iVar4 = iVar4 + -1;
    }
    if (cStack_14 == '9') {
      *pcVar5 = *pcVar5 + '\x01';
    }
    if (iVar11 < 0) {
      local_24 = local_24 + 1;
      iVar4 = iVar4 + 1;
    }
  }
  if (iVar4 < 1) {
    local_24 = 0;
    in_stack_00000008[5] = 0;
  }
  if (((*(byte *)(in_stack_00000008 + 2) & 2) == 0) &&
     (((*(byte *)(in_stack_00000008 + 2) & 4) == 0 ||
      ((((int)local_24 < -4 || (*in_stack_00000008 <= (int)local_24)) &&
       ((*(byte *)(in_stack_00000008 + 2) & 8) == 0)))))) {
    crt_unknown_c_FUN_00604478();
  }
  else {
    crt_unknown_c_FUN_00604267();
  }
LAB_00603d56:
  crt_unknown_c_FUN_0060445e(local_18 & 0xffff);
  return;
}


// Assembly code:
// 00603dc8: PUSH EBP
//   Label: crt_unknown.c_FUN_00603dc8
// 00603dc9: MOV EBP,ESP
// 00603dcb: PUSH EBX
// 00603dcc: PUSH ESI
// 00603dcd: PUSH EDI
// 00603dce: SUB ESP,0x88
// 00603dd4: MOV EBX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00603dd7: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00603dda: PUSH 0x0
// 00603ddc: FSTCW word ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00603de0: POP EAX
// 00603de1: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00603de4: OR AH,0x3
// 00603de7: AND EAX,0xffff
// 00603dec: PUSH EAX
// 00603ded: FLDCW word ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00603df0: POP EAX
// 00603df1: MOV dword ptr [ESI + 0x14],0x0
// 00603df8: MOV AX,word ptr [EBX + 0x8]
// 00603dfc: MOV word ptr [EBP + -0x40],AX
//   XREF to: Stack[-0x44] (WRITE)
// 00603e00: MOV EAX,dword ptr [EBX + 0x4]
// 00603e03: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00603e06: MOV EAX,dword ptr [EBX]
// 00603e08: MOV dword ptr [EBP + -0x48],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00603e0b: TEST byte ptr [EBP + -0x3f],0x80
//   XREF to: Stack[-0x43] (READ)
// 00603e0f: JZ 0x00603e18
//   XREF to: 00603e18 (CONDITIONAL_JUMP)
// 00603e11: MOV dword ptr [ESI + 0x14],0xffffffff
// 00603e18: AND byte ptr [EBP + -0x3f],0x7f
//   Label: LAB_00603e18
//   XREF to: Stack[-0x43] (READ_WRITE)
// 00603e1c: MOV dword ptr [ESI + 0x1c],0x0
// 00603e23: MOV dword ptr [ESI + 0x20],0x0
// 00603e2a: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x4c] (DATA)
// 00603e2d: MOV dword ptr [ESI + 0x24],0x0
// 00603e34: PUSH EAX
// 00603e35: MOV dword ptr [ESI + 0x28],0x0
// 00603e3c: XOR EDI,EDI
// 00603e3e: MOV dword ptr [ESI + 0x18],0x0
// 00603e45: CALL crt_unknown.c_FUN_0060b07a
//   XREF to: 0060b07a (UNCONDITIONAL_CALL)
// 00603e4a: ADD ESP,0x4
// 00603e4d: CMP EAX,0x4
// 00603e50: JA 0x00603fd0
//   XREF to: 00603fd0 (CONDITIONAL_JUMP)
// 00603e56: JMP dword ptr CS:[EAX*0x4 + 0x603db4]
//   Label: switchD
//   XREF to: 00603e5e (COMPUTED_JUMP)
//   XREF to: 00603e6f (COMPUTED_JUMP)
//   XREF to: 00603e8d (COMPUTED_JUMP)
//   XREF to: 00603e9d (COMPUTED_JUMP)
//   XREF to: 00603db4 (DATA)
// 00603e5e: XOR ECX,ECX
//   Label: caseD_0
// 00603e60: MOV dword ptr [ESI + 0x14],0x0
// 00603e67: MOV dword ptr [EBP + -0x20],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00603e6a: JMP 0x00603fd0
//   XREF to: 00603fd0 (UNCONDITIONAL_JUMP)
// 00603e6f: MOV EAX,dword ptr [EBP + 0x10]
//   Label: caseD_2
//   XREF to: Stack[0xc] (READ)
// 00603e72: MOV byte ptr [EAX],0x6e
// 00603e75: MOV byte ptr [EAX + 0x1],0x61
// 00603e79: MOV byte ptr [EAX + 0x2],0x6e
// 00603e7d: MOV byte ptr [EAX + 0x3],0x0
//   Label: LAB_00603e7d
// 00603e81: MOV dword ptr [ESI + 0x1c],0x3
// 00603e88: JMP 0x0060425c
//   XREF to: 0060425c (UNCONDITIONAL_JUMP)
// 00603e8d: MOV EAX,dword ptr [EBP + 0x10]
//   Label: caseD_3
//   XREF to: Stack[0xc] (READ)
// 00603e90: MOV byte ptr [EAX],0x69
// 00603e93: MOV byte ptr [EAX + 0x1],0x6e
// 00603e97: MOV byte ptr [EAX + 0x2],0x66
// 00603e9b: JMP 0x00603e7d
//   XREF to: 00603e7d (UNCONDITIONAL_JUMP)
// 00603e9d: XOR EAX,EAX
//   Label: caseD_1
// 00603e9f: MOV AX,word ptr [EBP + -0x40]
//   XREF to: Stack[-0x44] (READ)
// 00603ea3: SUB EAX,0x3ffe
// 00603ea8: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00603eab: IMUL EDX,EAX,0x7597
// 00603eb1: MOV EBX,0x186a0
// 00603eb6: MOV EAX,EDX
// 00603eb8: SAR EDX,0x1f
// 00603ebb: IDIV EBX
// 00603ebd: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00603ec0: LEA ECX,[EAX + -0x4]
// 00603ec3: MOV dword ptr [EBP + -0x20],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00603ec6: TEST ECX,ECX
// 00603ec8: JZ 0x00603fd0
//   XREF to: 00603fd0 (CONDITIONAL_JUMP)
// 00603ece: JGE 0x00603ef1
//   XREF to: 00603ef1 (CONDITIONAL_JUMP)
// 00603ed0: MOV EAX,ECX
// 00603ed2: NEG EAX
// 00603ed4: ADD EAX,0x3
// 00603ed7: AND AL,0xfc
// 00603ed9: MOV EBX,EAX
// 00603edb: NEG EBX
// 00603edd: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00603ee0: MOV EAX,EBX
// 00603ee2: NEG EAX
// 00603ee4: PUSH EAX
// 00603ee5: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x4c] (DATA)
// 00603ee8: PUSH EAX
// 00603ee9: MOV dword ptr [EBP + -0x20],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00603eec: JMP 0x00603fc8
//   XREF to: 00603fc8 (UNCONDITIONAL_JUMP)
// 00603ef1: MOV EDX,dword ptr [EBP + -0x40]
//   Label: LAB_00603ef1
//   XREF to: Stack[-0x44] (READ)
// 00603ef4: CMP DX,0x4019
// 00603ef9: JC 0x00603f06
//   XREF to: 00603f06 (CONDITIONAL_JUMP)
// 00603efb: JNZ 0x00603f10
//   XREF to: 00603f10 (CONDITIONAL_JUMP)
// 00603efd: CMP dword ptr [EBP + -0x44],0xbebc2000
//   XREF to: Stack[-0x48] (READ)
// 00603f04: JNC 0x00603f10
//   XREF to: 00603f10 (CONDITIONAL_JUMP)
// 00603f06: XOR EDX,EDX
//   Label: LAB_00603f06
// 00603f08: MOV dword ptr [EBP + -0x20],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00603f0b: JMP 0x00603fd0
//   XREF to: 00603fd0 (UNCONDITIONAL_JUMP)
// 00603f10: MOV ECX,dword ptr [EBP + -0x40]
//   Label: LAB_00603f10
//   XREF to: Stack[-0x44] (READ)
// 00603f13: CMP CX,0x4034
// 00603f18: JC 0x00603f3e
//   XREF to: 00603f3e (CONDITIONAL_JUMP)
// 00603f1a: JNZ 0x00603fba
//   XREF to: 00603fba (CONDITIONAL_JUMP)
// 00603f20: MOV ECX,dword ptr [EBP + -0x44]
//   XREF to: Stack[-0x48] (READ)
// 00603f23: CMP ECX,0x8e1bc9bf
// 00603f29: JC 0x00603f3e
//   XREF to: 00603f3e (CONDITIONAL_JUMP)
// 00603f2b: JNZ 0x00603fba
//   XREF to: 00603fba (CONDITIONAL_JUMP)
// 00603f31: CMP dword ptr [EBP + -0x48],0x4000000
//   XREF to: Stack[-0x4c] (READ)
// 00603f38: JNC 0x00603fba
//   XREF to: 00603fba (CONDITIONAL_JUMP)
// 00603f3e: MOV EDX,0x4019
//   Label: LAB_00603f3e
// 00603f43: MOV EBX,0xbebc2000
// 00603f48: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x4c] (DATA)
// 00603f4b: XOR ECX,ECX
// 00603f4d: MOV word ptr [EBP + -0x34],DX
//   XREF to: Stack[-0x38] (WRITE)
// 00603f51: MOV dword ptr [EBP + -0x38],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 00603f54: LEA EBX,[EBP + -0x30]
//   XREF to: Stack[-0x34] (DATA)
// 00603f57: LEA EDX,[EBP + -0x3c]
//   XREF to: Stack[-0x40] (DATA)
// 00603f5a: MOV dword ptr [EBP + -0x3c],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 00603f5d: FLD extended double ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 00603f5f: FLD extended double ptr [EDX]
//   XREF to: Stack[-0x40] (DATA)
// 00603f61: FDIVP
// 00603f63: FSTP extended double ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 00603f65: LEA EAX,[EBP + -0x30]
//   XREF to: Stack[-0x34] (DATA)
// 00603f68: LEA EBX,[EBP + -0x3c]
//   XREF to: Stack[-0x40] (DATA)
// 00603f6b: FLD extended double ptr [EAX]
//   XREF to: Stack[-0x34] (DATA)
// 00603f6d: PUSH EAX
// 00603f6e: PUSH EAX
// 00603f6f: FSTCW word ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 00603f73: POP EAX
// 00603f74: PUSH EAX
// 00603f75: OR AH,0xc
// 00603f78: PUSH EAX
// 00603f79: FLDCW word ptr [ESP]
//   XREF to: Stack[-0xa4] (DATA)
// 00603f7c: POP EAX
// 00603f7d: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (WRITE)
// 00603f81: FLDCW word ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 00603f84: POP EAX
// 00603f85: POP EAX
// 00603f86: LEA EDX,[EBP + -0x30]
//   XREF to: Stack[-0x34] (DATA)
// 00603f89: MOV EDI,EAX
// 00603f8b: PUSH EAX
// 00603f8c: FILD dword ptr [ESP]
//   XREF to: Stack[-0x9c] (DATA)
// 00603f8f: POP EAX
// 00603f90: FSTP extended double ptr [EDX]
//   XREF to: Stack[-0x34] (DATA)
// 00603f92: LEA EDX,[EBP + -0x3c]
//   XREF to: Stack[-0x40] (DATA)
// 00603f95: LEA EAX,[EBP + -0x30]
//   XREF to: Stack[-0x34] (DATA)
// 00603f98: FLD extended double ptr [EAX]
//   XREF to: Stack[-0x34] (DATA)
// 00603f9a: FLD extended double ptr [EDX]
//   XREF to: Stack[-0x40] (DATA)
// 00603f9c: FMULP
// 00603f9e: FSTP extended double ptr [EBX]
//   XREF to: Stack[-0x40] (DATA)
// 00603fa0: LEA EBX,[EBP + -0x48]
//   XREF to: Stack[-0x4c] (DATA)
// 00603fa3: LEA EDX,[EBP + -0x3c]
//   XREF to: Stack[-0x40] (DATA)
// 00603fa6: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x4c] (DATA)
// 00603fa9: FLD extended double ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 00603fab: FLD extended double ptr [EDX]
//   XREF to: Stack[-0x40] (DATA)
// 00603fad: FSUBP
// 00603faf: FSTP extended double ptr [EBX]
//   XREF to: Stack[-0x4c] (DATA)
// 00603fb1: MOV dword ptr [EBP + -0x20],0x8
//   XREF to: Stack[-0x24] (WRITE)
// 00603fb8: JMP 0x00603fd0
//   XREF to: 00603fd0 (UNCONDITIONAL_JUMP)
// 00603fba: AND byte ptr [EBP + -0x20],0xfc
//   Label: LAB_00603fba
//   XREF to: Stack[-0x24] (READ_WRITE)
// 00603fbe: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x24] (READ)
// 00603fc1: NEG EAX
// 00603fc3: PUSH EAX
// 00603fc4: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x4c] (DATA)
// 00603fc7: PUSH EAX
// 00603fc8: CALL crt_unknown.c_FUN_00603d60
//   Label: LAB_00603fc8
//   XREF to: 00603d60 (UNCONDITIONAL_CALL)
// 00603fcd: ADD ESP,0x8
// 00603fd0: TEST byte ptr [ESI + 0x8],0x2
//   Label: default
// 00603fd4: JZ 0x00603ff2
//   XREF to: 00603ff2 (CONDITIONAL_JUMP)
// 00603fd6: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x24] (READ)
// 00603fd9: MOV EAX,dword ptr [ESI]
// 00603fdb: ADD EAX,EDX
// 00603fdd: ADD EAX,0xa
// 00603fe0: MOV EBX,dword ptr [ESI + 0x4]
// 00603fe3: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00603fe6: TEST EBX,EBX
// 00603fe8: JLE 0x00603ffa
//   XREF to: 00603ffa (CONDITIONAL_JUMP)
// 00603fea: LEA ECX,[EAX + EBX*0x1]
// 00603fed: MOV dword ptr [EBP + -0x18],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00603ff0: JMP 0x00603ffa
//   XREF to: 00603ffa (UNCONDITIONAL_JUMP)
// 00603ff2: MOV EAX,dword ptr [ESI]
//   Label: LAB_00603ff2
// 00603ff4: ADD EAX,0x7
// 00603ff7: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00603ffa: MOV BH,byte ptr [ESI + 0x8]
//   Label: LAB_00603ffa
// 00603ffd: MOV EAX,0xf
// 00604002: TEST BH,0x20
// 00604005: JZ 0x0060400c
//   XREF to: 0060400c (CONDITIONAL_JUMP)
// 00604007: MOV EAX,0x14
// 0060400c: TEST byte ptr [ESI + 0x8],0x40
//   Label: LAB_0060400c
// 00604010: JZ 0x00604014
//   XREF to: 00604014 (CONDITIONAL_JUMP)
// 00604012: ADD EAX,EAX
// 00604014: MOV EDX,dword ptr [EBP + -0x18]
//   Label: LAB_00604014
//   XREF to: Stack[-0x1c] (READ)
// 00604017: ADD EAX,0x4
// 0060401a: CMP EAX,EDX
// 0060401c: JGE 0x00604021
//   XREF to: 00604021 (CONDITIONAL_JUMP)
// 0060401e: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00604021: MOV CH,0x30
//   Label: LAB_00604021
// 00604023: XOR AL,AL
// 00604025: XOR EBX,EBX
// 00604027: MOV byte ptr [EBP + 0xffffff6c],CH
//   XREF to: Stack[-0x98] (WRITE)
// 0060402d: MOV byte ptr [EBP + 0xffffff6d],AL
//   XREF to: Stack[-0x97] (WRITE)
// 00604033: LEA EAX,[EBP + 0xffffff6d]
//   XREF to: Stack[-0x97] (DATA)
// 00604039: MOV dword ptr [EBP + -0x24],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0060403c: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
