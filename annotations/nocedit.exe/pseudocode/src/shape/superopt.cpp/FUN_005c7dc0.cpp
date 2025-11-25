// Name: shape_superopt.cpp_FUN_005c7dc0
// Address: 005c7dc0
// Address Range: [[005c7dc0, 005c7fac]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c7dc0()
// Cross-references:
//   shape_superopt.cpp_FUN_005c7b20 (005c7b20) at 005c7d76 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_superopt.cpp_FUN_005c7fb0

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c7dc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *n;
  void *dest;
  undefined4 *unaff_EBP;
  undefined4 *puVar4;
  int in_stack_00000004;
  int local_34;
  uint local_2c;
  void *local_1c;
  double *local_18;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x30);
  local_2c = 0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    puVar2 = (undefined4 *)(iVar1 + 0x10);
    local_34 = iVar1 + 0x28;
    do {
      local_18 = (double *)(local_2c + 1);
      n = puVar2;
      if (local_18 < *(double **)(in_stack_00000004 + 0x2c)) {
        puVar4 = (undefined4 *)((int)local_18 * 0x60 + 0x10 + iVar1);
        dest = (void *)(iVar1 + (int)local_18 * 0x60);
        local_1c = (void *)(iVar1 + local_2c * 0x60 + 0x28);
        do {
          iVar3 = shape_superopt_cpp_FUN_005c7fb0();
          if (iVar3 != 0) {
            if (((*local_18 == *(double *)((int)dest + 0x10)) &&
                (local_18[1] == *(double *)((int)dest + 0x18))) &&
               (local_18[2] == *(double *)((int)dest + 0x20))) {
              *unaff_EBP = *(undefined4 *)((int)dest + 0x28);
              unaff_EBP[1] = *(undefined4 *)((int)dest + 0x2c);
              unaff_EBP[2] = *(undefined4 *)((int)dest + 0x30);
              unaff_EBP[3] = *(undefined4 *)((int)dest + 0x34);
              *(undefined8 *)(unaff_EBP + 4) = *(undefined8 *)((int)dest + 0x38);
              unaff_EBP[10] = *(undefined4 *)((int)dest + 0x50);
              unaff_EBP[0xb] = *(undefined4 *)((int)dest + 0x54);
              unaff_EBP[0xc] = *(undefined4 *)((int)dest + 0x58);
              unaff_EBP[0xd] = *(undefined4 *)((int)dest + 0x5c);
            }
            else {
              *puVar2 = *puVar4;
              puVar2[1] = puVar4[1];
              puVar2[2] = puVar4[2];
              puVar2[3] = puVar4[3];
              puVar2[4] = puVar4[4];
              puVar2[5] = puVar4[5];
              puVar2[0xc] = puVar4[0xc];
              puVar2[0xd] = puVar4[0xd];
              puVar2[0xe] = puVar4[0xe];
              puVar2[0xf] = puVar4[0xf];
            }
            n = (undefined4 *)(((*(int *)(in_stack_00000004 + 0x2c) - local_34) + -1) * 0x60);
            crt_string_c_memmove_FUN_005fe5e0(dest,local_1c,(SIZE_T)n);
            local_1c = (void *)0x0;
            *(int *)(in_stack_00000004 + 0x2c) = *(int *)(in_stack_00000004 + 0x2c) + -1;
          }
          puVar4 = puVar4 + 0x18;
          dest = (void *)((int)dest + 0x60);
          local_18 = (double *)((int)local_18 + 1);
        } while (local_18 < *(double **)(in_stack_00000004 + 0x2c));
      }
      puVar2 = n + 0x18;
      local_34 = local_34 + 0x60;
      local_2c = local_2c + 1;
    } while (local_2c < *(uint *)(in_stack_00000004 + 0x2c));
  }
  return;
}


// Assembly code:
// 005c7dc0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c7dc0
// 005c7dc1: PUSH ESI
// 005c7dc2: PUSH EDI
// 005c7dc3: PUSH EBP
// 005c7dc4: SUB ESP,0x28
// 005c7dc7: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005c7dcb: MOV EDX,0x1
//   Label: LAB_005c7dcb
// 005c7dd0: MOV EAX,dword ptr [EDI + 0x30]
// 005c7dd3: MOV EBX,dword ptr [EDI + 0x2c]
// 005c7dd6: XOR ECX,ECX
// 005c7dd8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005c7ddc: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c7de0: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005c7de4: TEST EBX,EBX
// 005c7de6: JBE 0x005c7e00
//   XREF to: 005c7e00 (CONDITIONAL_JUMP)
// 005c7de8: ADD EAX,0x10
// 005c7deb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x38] (DATA)
// 005c7dee: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 005c7df2: ADD EAX,0x28
// 005c7df5: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005c7df9: CMP dword ptr [ESP + 0x14],0x0
//   Label: LAB_005c7df9
//   XREF to: Stack[-0x24] (READ)
// 005c7dfe: JNZ 0x005c7e0f
//   XREF to: 005c7e0f (CONDITIONAL_JUMP)
// 005c7e00: CMP dword ptr [ESP + 0x14],0x0
//   Label: LAB_005c7e00
//   XREF to: Stack[-0x24] (READ)
// 005c7e05: JZ 0x005c7dcb
//   XREF to: 005c7dcb (CONDITIONAL_JUMP)
// 005c7e07: ADD ESP,0x28
// 005c7e0a: POP EBP
// 005c7e0b: POP EDI
// 005c7e0c: POP ESI
// 005c7e0d: POP EBX
// 005c7e0e: RET
// 005c7e0f: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005c7e0f
//   XREF to: Stack[-0x2c] (READ)
// 005c7e13: INC EAX
// 005c7e14: MOV ESI,dword ptr [EDI + 0x2c]
// 005c7e17: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c7e1b: CMP EAX,ESI
// 005c7e1d: JNC 0x005c7f18
//   XREF to: 005c7f18 (CONDITIONAL_JUMP)
// 005c7e23: IMUL EDX,dword ptr [ESP + 0xc],0x60
//   XREF to: Stack[-0x2c] (READ)
// 005c7e28: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 005c7e2c: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 005c7e30: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c7e34: IMUL EAX,ESI,0x60
// 005c7e37: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 005c7e3b: LEA ESI,[EAX + 0x10]
// 005c7e3e: ADD ESI,ECX
// 005c7e40: LEA EBX,[ECX + EAX*0x1]
// 005c7e43: ADD EAX,0x60
// 005c7e46: ADD EAX,ECX
// 005c7e48: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005c7e4c: LEA EAX,[ECX + EDX*0x1]
// 005c7e4f: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005c7e53: ADD EAX,0x28
// 005c7e56: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 005c7e59: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c7e5d: CMP dword ptr [ESP + 0x14],0x0
//   Label: LAB_005c7e5d
//   XREF to: Stack[-0x24] (READ)
// 005c7e62: JZ 0x005c7f18
//   XREF to: 005c7f18 (CONDITIONAL_JUMP)
// 005c7e68: PUSH EBX
// 005c7e69: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 005c7e6d: PUSH EDX
// 005c7e6e: PUSH EDI
// 005c7e6f: CALL shape_superopt.cpp_FUN_005c7fb0
//   XREF to: 005c7fb0 (UNCONDITIONAL_CALL)
// 005c7e74: ADD ESP,0xc
// 005c7e77: TEST EAX,EAX
// 005c7e79: JZ 0x005c7ef3
//   XREF to: 005c7ef3 (CONDITIONAL_JUMP)
// 005c7e7b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 005c7e7f: LEA EDX,[EBX + 0x10]
// 005c7e82: FLD double ptr [EAX]
// 005c7e84: FCOMP double ptr [EDX]
// 005c7e86: FNSTSW AX
// 005c7e88: SAHF
// 005c7e89: JZ 0x005c7f45
//   XREF to: 005c7f45 (CONDITIONAL_JUMP)
// 005c7e8f: MOV EAX,dword ptr [ESI]
//   Label: LAB_005c7e8f
// 005c7e91: MOV dword ptr [EBP],EAX
// 005c7e94: MOV EAX,dword ptr [ESI + 0x4]
// 005c7e97: MOV dword ptr [EBP + 0x4],EAX
// 005c7e9a: MOV EAX,dword ptr [ESI + 0x8]
// 005c7e9d: MOV dword ptr [EBP + 0x8],EAX
// 005c7ea0: MOV EAX,dword ptr [ESI + 0xc]
// 005c7ea3: MOV dword ptr [EBP + 0xc],EAX
// 005c7ea6: MOV EAX,dword ptr [ESI + 0x10]
// 005c7ea9: MOV dword ptr [EBP + 0x10],EAX
// 005c7eac: MOV EAX,dword ptr [ESI + 0x14]
// 005c7eaf: MOV dword ptr [EBP + 0x14],EAX
// 005c7eb2: MOV EAX,dword ptr [ESI + 0x30]
// 005c7eb5: MOV dword ptr [EBP + 0x30],EAX
// 005c7eb8: MOV EAX,dword ptr [ESI + 0x34]
// 005c7ebb: MOV dword ptr [EBP + 0x34],EAX
// 005c7ebe: MOV EAX,dword ptr [ESI + 0x38]
// 005c7ec1: MOV dword ptr [EBP + 0x38],EAX
// 005c7ec4: MOV EAX,dword ptr [ESI + 0x3c]
// 005c7ec7: MOV dword ptr [EBP + 0x3c],EAX
// 005c7eca: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_005c7eca
//   XREF to: Stack[-0x18] (READ)
// 005c7ece: MOV EAX,dword ptr [EDI + 0x2c]
// 005c7ed1: SUB EAX,ECX
// 005c7ed3: DEC EAX
// 005c7ed4: IMUL EAX,EAX,0x60
// 005c7ed7: PUSH EAX
// 005c7ed8: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 005c7edc: PUSH EAX
// 005c7edd: PUSH EBX
// 005c7ede: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005c7ee3: ADD ESP,0xc
// 005c7ee6: MOV ECX,dword ptr [EDI + 0x2c]
// 005c7ee9: XOR EDX,EDX
// 005c7eeb: DEC ECX
// 005c7eec: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005c7ef0: MOV dword ptr [EDI + 0x2c],ECX
// 005c7ef3: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005c7ef3
//   XREF to: Stack[-0x20] (READ)
// 005c7ef7: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 005c7efb: ADD ESI,0x60
// 005c7efe: ADD EBX,0x60
// 005c7f01: MOV ECX,dword ptr [EDI + 0x2c]
// 005c7f04: ADD EAX,0x60
// 005c7f07: INC EDX
// 005c7f08: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005c7f0c: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005c7f10: CMP EDX,ECX
// 005c7f12: JC 0x005c7e5d
//   XREF to: 005c7e5d (CONDITIONAL_JUMP)
// 005c7f18: MOV ESI,dword ptr [ESP]
//   Label: LAB_005c7f18
//   XREF to: Stack[-0x38] (DATA)
// 005c7f1b: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 005c7f1f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 005c7f23: MOV EDX,dword ptr [EDI + 0x2c]
// 005c7f26: ADD ESI,0x60
// 005c7f29: ADD EBP,0x60
// 005c7f2c: INC EAX
// 005c7f2d: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x38] (DATA)
// 005c7f30: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 005c7f34: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c7f38: CMP EAX,EDX
// 005c7f3a: JC 0x005c7df9
//   XREF to: 005c7df9 (CONDITIONAL_JUMP)
// 005c7f40: JMP 0x005c7e00
//   XREF to: 005c7e00 (UNCONDITIONAL_JUMP)
// 005c7f45: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_005c7f45
//   XREF to: Stack[-0x1c] (READ)
// 005c7f49: FLD double ptr [EAX + 0x8]
// 005c7f4c: FCOMP double ptr [EDX + 0x8]
// 005c7f4f: FNSTSW AX
// 005c7f51: SAHF
// 005c7f52: JNZ 0x005c7e8f
//   XREF to: 005c7e8f (CONDITIONAL_JUMP)
// 005c7f58: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 005c7f5c: FLD double ptr [EAX + 0x10]
// 005c7f5f: FCOMP double ptr [EDX + 0x10]
// 005c7f62: FNSTSW AX
// 005c7f64: SAHF
// 005c7f65: JNZ 0x005c7e8f
//   XREF to: 005c7e8f (CONDITIONAL_JUMP)
// 005c7f6b: LEA EDX,[EBX + 0x28]
// 005c7f6e: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 005c7f72: MOV ECX,dword ptr [EDX]
// 005c7f74: MOV dword ptr [EAX],ECX
// 005c7f76: MOV ECX,dword ptr [EDX + 0x4]
// 005c7f79: MOV dword ptr [EAX + 0x4],ECX
// 005c7f7c: MOV ECX,dword ptr [EDX + 0x8]
// 005c7f7f: MOV dword ptr [EAX + 0x8],ECX
// 005c7f82: MOV ECX,dword ptr [EDX + 0xc]
// 005c7f85: MOV dword ptr [EAX + 0xc],ECX
// 005c7f88: FLD double ptr [EDX + 0x10]
// 005c7f8b: LEA EDX,[EBX + 0x50]
// 005c7f8e: FSTP double ptr [EAX + 0x10]
// 005c7f91: MOV ECX,dword ptr [EDX]
// 005c7f93: MOV dword ptr [EAX + 0x28],ECX
// 005c7f96: MOV ECX,dword ptr [EDX + 0x4]
// 005c7f99: MOV dword ptr [EAX + 0x2c],ECX
// 005c7f9c: MOV ECX,dword ptr [EDX + 0x8]
// 005c7f9f: MOV dword ptr [EAX + 0x30],ECX
// 005c7fa2: MOV ECX,dword ptr [EDX + 0xc]
// 005c7fa5: MOV dword ptr [EAX + 0x34],ECX
// 005c7fa8: JMP 0x005c7eca
//   XREF to: 005c7eca (UNCONDITIONAL_JUMP)
