// Name: shape_superopt.cpp_FUN_005c7fb0
// Address: 005c7fb0
// Address Range: [[005c7fb0, 005c8154]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c7fb0()
// Cross-references:
//   shape_superopt.cpp_FUN_005c7dc0 (005c7dc0) at 005c7e6f [UNCONDITIONAL_CALL]
// Function calls:
//   shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0

#include "nocturne.h"

int shape_superopt_cpp_FUN_005c7fb0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  double *pdVar2;
  undefined4 *puVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  CVector3d local_a0;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  CVector3d local_40;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((((*(double *)(in_stack_00000008 + 0x28) != *(double *)(in_stack_0000000c + 0x10)) ||
       (*(double *)(in_stack_00000008 + 0x30) != *(double *)(in_stack_0000000c + 0x18))) ||
      (*(double *)(in_stack_00000008 + 0x38) != *(double *)(in_stack_0000000c + 0x20))) &&
     (((*(double *)(in_stack_00000008 + 0x10) != *(double *)(in_stack_0000000c + 0x28) ||
       (*(double *)(in_stack_00000008 + 0x18) != *(double *)(in_stack_0000000c + 0x30))) ||
      (*(double *)(in_stack_00000008 + 0x20) != *(double *)(in_stack_0000000c + 0x38))))) {
    return 0;
  }
  local_88 = *(double *)(in_stack_00000008 + 0x28) - *(double *)(in_stack_00000008 + 0x10);
  local_80 = *(double *)(in_stack_00000008 + 0x30) - *(double *)(in_stack_00000008 + 0x18);
  local_78 = *(double *)(in_stack_00000008 + 0x38) - *(double *)(in_stack_00000008 + 0x20);
  pdVar2 = &local_88;
  puVar3 = local_58;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar3 = puVar3 + 1;
  }
  local_40.x._0_4_ = local_58[0];
  local_40.x._4_4_ = local_58[1];
  local_40.y._0_4_ = local_58[2];
  local_40.y._4_4_ = local_58[3];
  local_40.z._0_4_ = local_48;
  local_40.z._4_4_ = uStack_44;
  local_70 = *(double *)(in_stack_0000000c + 0x28) - *(double *)(in_stack_0000000c + 0x10);
  local_68 = *(double *)(in_stack_0000000c + 0x30) - *(double *)(in_stack_0000000c + 0x18);
  local_60 = *(double *)(in_stack_0000000c + 0x38) - *(double *)(in_stack_0000000c + 0x20);
  pdVar2 = &local_70;
  puVar3 = local_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar3 = puVar3 + 1;
  }
  local_a0.x._0_4_ = local_28[0];
  local_a0.x._4_4_ = local_28[1];
  local_a0.y._0_4_ = local_28[2];
  local_a0.y._4_4_ = local_28[3];
  local_a0.z._0_4_ = local_18;
  local_a0.z._4_4_ = uStack_14;
  if (0.0 <= (double)CONCAT44(uStack_44,local_48) * (double)CONCAT44(uStack_14,local_18) +
             (double)CONCAT44(local_58[1],local_58[0]) * (double)CONCAT44(local_28[1],local_28[0]) +
             (double)CONCAT44(local_58[3],local_58[2]) * (double)CONCAT44(local_28[3],local_28[2]))
  {
    iVar1 = shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(&local_40,&local_a0);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 005c7fb0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c7fb0
// 005c7fb1: PUSH ESI
// 005c7fb2: PUSH EDI
// 005c7fb3: PUSH EBP
// 005c7fb4: MOV EBP,ESP
// 005c7fb6: SUB ESP,0x90
// 005c7fbc: AND ESP,0xfffffff8
// 005c7fbf: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c7fc2: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c7fc5: LEA ECX,[ESI + 0x28]
// 005c7fc8: LEA EDX,[EBX + 0x10]
// 005c7fcb: FLD double ptr [ECX]
// 005c7fcd: FCOMP double ptr [EDX]
// 005c7fcf: FNSTSW AX
// 005c7fd1: SAHF
// 005c7fd2: JZ 0x005c7ff0
//   XREF to: 005c7ff0 (CONDITIONAL_JUMP)
// 005c7fd4: LEA EDX,[ESI + 0x10]
//   Label: LAB_005c7fd4
// 005c7fd7: LEA ECX,[EBX + 0x28]
// 005c7fda: FLD double ptr [EDX]
// 005c7fdc: FCOMP double ptr [ECX]
// 005c7fde: FNSTSW AX
// 005c7fe0: SAHF
// 005c7fe1: JZ 0x005c811b
//   XREF to: 005c811b (CONDITIONAL_JUMP)
// 005c7fe7: XOR EAX,EAX
//   Label: LAB_005c7fe7
// 005c7fe9: MOV ESP,EBP
// 005c7feb: POP EBP
// 005c7fec: POP EDI
// 005c7fed: POP ESI
// 005c7fee: POP EBX
// 005c7fef: RET
// 005c7ff0: FLD double ptr [ECX + 0x8]
//   Label: LAB_005c7ff0
// 005c7ff3: FCOMP double ptr [EDX + 0x8]
// 005c7ff6: FNSTSW AX
// 005c7ff8: SAHF
// 005c7ff9: JNZ 0x005c7fd4
//   XREF to: 005c7fd4 (CONDITIONAL_JUMP)
// 005c7ffb: FLD double ptr [ECX + 0x10]
// 005c7ffe: FCOMP double ptr [EDX + 0x10]
// 005c8001: FNSTSW AX
// 005c8003: SAHF
// 005c8004: JNZ 0x005c7fd4
//   XREF to: 005c7fd4 (CONDITIONAL_JUMP)
// 005c8006: LEA EDX,[ESI + 0x28]
//   Label: LAB_005c8006
// 005c8009: MOV ECX,0x6
// 005c800e: LEA EDI,[ESP + 0x48]
//   XREF to: Stack[-0x58] (DATA)
// 005c8012: FLD double ptr [EDX]
// 005c8014: FLD double ptr [EDX + 0x8]
// 005c8017: LEA EAX,[ESI + 0x10]
// 005c801a: FLD double ptr [EDX + 0x10]
// 005c801d: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x88] (DATA)
// 005c8021: FXCH ST2
// 005c8023: FSUB double ptr [EAX]
// 005c8025: FXCH
// 005c8027: FSUB double ptr [EAX + 0x8]
// 005c802a: FXCH ST2
// 005c802c: FSUB double ptr [EAX + 0x10]
// 005c802f: FXCH
// 005c8031: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x88] (WRITE)
// 005c8035: FXCH
// 005c8037: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x80] (WRITE)
// 005c803b: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x78] (WRITE)
// 005c803f: MOVSD.REP ES:EDI,ESI
// 005c8041: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (READ)
// 005c8045: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005c8049: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x54] (READ)
// 005c804d: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005c8051: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x50] (READ)
// 005c8055: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005c8059: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x4c] (READ)
// 005c805d: LEA EDX,[EBX + 0x28]
// 005c8060: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005c8064: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x48] (READ)
// 005c8068: MOV ECX,0x6
// 005c806d: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005c8071: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x44] (READ)
// 005c8075: LEA EDI,[ESP + 0x78]
//   XREF to: Stack[-0x28] (DATA)
// 005c8079: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c807d: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 005c8081: FLD double ptr [EDX]
// 005c8083: FLD double ptr [EDX + 0x8]
// 005c8086: LEA EAX,[EBX + 0x10]
// 005c8089: FLD double ptr [EDX + 0x10]
// 005c808c: FXCH ST2
// 005c808e: FSUB double ptr [EAX]
// 005c8090: FXCH
// 005c8092: FSUB double ptr [EAX + 0x8]
// 005c8095: FXCH ST2
// 005c8097: FSUB double ptr [EAX + 0x10]
// 005c809a: FXCH
// 005c809c: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x70] (WRITE)
// 005c80a0: FXCH
// 005c80a2: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (WRITE)
// 005c80a6: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x60] (WRITE)
// 005c80aa: MOVSD.REP ES:EDI,ESI
// 005c80ac: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x50] (READ)
// 005c80b0: FMUL double ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (READ)
// 005c80b7: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (READ)
// 005c80bb: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (READ)
// 005c80bf: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xa0] (DATA)
// 005c80c2: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x24] (READ)
// 005c80c6: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (READ)
// 005c80ca: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005c80ce: FADDP
// 005c80d0: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (READ)
// 005c80d7: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x48] (READ)
// 005c80db: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005c80df: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 005c80e6: FMUL double ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 005c80ed: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005c80f1: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 005c80f8: FADDP
// 005c80fa: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005c80fe: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 005c8105: FLDZ
// 005c8107: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005c810b: FCOMPP
// 005c810d: FNSTSW AX
// 005c810f: SAHF
// 005c8110: JBE 0x005c813e
//   XREF to: 005c813e (CONDITIONAL_JUMP)
// 005c8112: XOR EAX,EAX
// 005c8114: MOV ESP,EBP
// 005c8116: POP EBP
// 005c8117: POP EDI
// 005c8118: POP ESI
// 005c8119: POP EBX
// 005c811a: RET
// 005c811b: FLD double ptr [EDX + 0x8]
//   Label: LAB_005c811b
// 005c811e: FCOMP double ptr [ECX + 0x8]
// 005c8121: FNSTSW AX
// 005c8123: SAHF
// 005c8124: JNZ 0x005c7fe7
//   XREF to: 005c7fe7 (CONDITIONAL_JUMP)
// 005c812a: FLD double ptr [EDX + 0x10]
// 005c812d: FCOMP double ptr [ECX + 0x10]
// 005c8130: FNSTSW AX
// 005c8132: SAHF
// 005c8133: JNZ 0x005c7fe7
//   XREF to: 005c7fe7 (CONDITIONAL_JUMP)
// 005c8139: JMP 0x005c8006
//   XREF to: 005c8006 (UNCONDITIONAL_JUMP)
// 005c813e: MOV EAX,ESP
//   Label: LAB_005c813e
// 005c8140: PUSH EAX
// 005c8141: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x40] (DATA)
// 005c8145: PUSH EAX
// 005c8146: CALL shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0
//   XREF to: 005d66e0 (UNCONDITIONAL_CALL)
// 005c814b: ADD ESP,0x8
// 005c814e: MOV ESP,EBP
// 005c8150: POP EBP
// 005c8151: POP EDI
// 005c8152: POP ESI
// 005c8153: POP EBX
// 005c8154: RET
