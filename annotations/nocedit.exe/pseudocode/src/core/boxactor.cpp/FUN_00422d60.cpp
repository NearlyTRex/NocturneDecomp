// Name: core_boxactor.cpp_FUN_00422d60
// Address: 00422d60
// Address Range: [[00422d60, 00423067]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422d60()
// Cross-references:
//   core_boxactor.cpp_CLightActor_FUN_00423380 (00423380) at 004233e9 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422a20 (00422a20) at 00422a26 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_flashlit_kfm_00616955
//   TerminatedCString s_lantern_kfm_00616962
//   TerminatedCString s_lantern_d_raw_0061696e
//   float FLOAT_0061697f = 0.5
//   double DOUBLE_00616987 = 0.100000000000000
//   undefined4 DAT_008229ac
//   CDemonFilter[8] CDemonFilter_ARRAY_008229ec
// Function calls:
//   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
//   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422d60(void)

{
  CKeyFramedModelInstance *this_ptr;
  uint uVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CDemonFilter *this_ptr_00;
  int in_stack_00000004;
  char acStack_d0 [40];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int local_18;
  
  uVar1 = *(uint *)(in_stack_00000004 + 0x66c);
  if (uVar1 != 0) {
    local_18 = in_stack_00000004 + 0x670;
    this_ptr = (CKeyFramedModelInstance *)(in_stack_00000004 + 0x158);
    if (uVar1 < 2) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (this_ptr,"flashlit.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr);
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
      fVar2 = FLOAT_0061697f;
      *(float *)(in_stack_00000004 + 0x361c) = (local_90 + fStack_84) * FLOAT_0061697f;
      *(float *)(in_stack_00000004 + 0x3620) = (fStack_8c + fStack_80) * fVar2;
      *(float *)(in_stack_00000004 + 0x3624) = fStack_7c + (float)DOUBLE_00616987;
      *(undefined4 *)(in_stack_00000004 + 0x3630) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x362c) = *(undefined4 *)(in_stack_00000004 + 0x3630);
      *(undefined4 *)(in_stack_00000004 + 0x3628) = *(undefined4 *)(in_stack_00000004 + 0x362c);
      *(undefined4 *)(in_stack_00000004 + 0x2324) = 0;
      *(undefined4 *)(local_18 + 0x38) = 0x42600000;
      *(undefined4 *)(in_stack_00000004 + 0x7b0) = 0x42000000;
      *(undefined4 *)(in_stack_00000004 + 0x314) = 3;
      return;
    }
    if (uVar1 == 2) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (this_ptr,"lantern.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr);
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
      fStack_4c = FLOAT_0061697f;
      fStack_48 = local_a8 + fStack_9c;
      fStack_3c = fStack_48 * FLOAT_0061697f;
      fStack_44 = fStack_a4 + fStack_98;
      fStack_40 = fStack_a0 + fStack_94;
      fStack_38 = fStack_44 * FLOAT_0061697f;
      fStack_34 = fStack_40 * FLOAT_0061697f;
      *(float *)(in_stack_00000004 + 0x361c) = fStack_3c;
      fStack_6c = local_a8 + fStack_9c;
      fStack_54 = fStack_6c * fStack_4c;
      fStack_68 = fStack_a4 + fStack_98;
      fStack_64 = fStack_a0 + fStack_94;
      fStack_50 = fStack_68 * fStack_4c;
      fStack_4c = fStack_64 * fStack_4c;
      *(float *)(in_stack_00000004 + 0x3620) = fStack_50;
      *(float *)(in_stack_00000004 + 0x3624) = fStack_94;
      *(undefined4 *)(in_stack_00000004 + 0x3630) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x362c) = *(undefined4 *)(in_stack_00000004 + 0x3630);
      *(undefined4 *)(in_stack_00000004 + 0x3628) = *(undefined4 *)(in_stack_00000004 + 0x362c);
      *(undefined4 *)(in_stack_00000004 + 0x3628) = 0x3e860a92;
      *(undefined4 *)(in_stack_00000004 + 0x2324) = 0;
      *(undefined4 *)(local_18 + 0x38) = 0x42600000;
      *(undefined4 *)(in_stack_00000004 + 0x7b0) = 0x42000000;
      iVar3 = DAT_008229ac;
      *(undefined4 *)(in_stack_00000004 + 0x314) = 3;
      if (iVar3 == 0) {
        this_ptr_00 = CDemonFilter_ARRAY_008229ec;
        iVar3 = 0;
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_d0,"lantern%d.raw",iVar3);
          iVar3 = iVar3 + 1;
          core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(this_ptr_00,acStack_d0);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar3 < 8);
        DAT_008229ac = 1;
      }
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
                ((CDemonLight *)(in_stack_00000004 + 0x670),CDemonFilter_ARRAY_008229ec,0,0,0);
      return;
    }
  }
  return;
}


// Assembly code:
// 00422d60: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00422d60
// 00422d61: PUSH ESI
// 00422d62: PUSH EDI
// 00422d63: PUSH EBP
// 00422d64: MOV EBP,ESP
// 00422d66: SUB ESP,0xbc
// 00422d6c: AND ESP,0xfffffff8
// 00422d6f: MOV EDI,dword ptr [EBP + 0x14]
// 00422d72: MOV EAX,dword ptr [EDI + 0x66c]
// 00422d78: CMP EAX,0x1
// 00422d7b: JC 0x00422da1
//   XREF to: 00422da1 (CONDITIONAL_JUMP)
// 00422d7d: LEA EBX,[EDI + 0x670]
// 00422d83: MOV dword ptr [ESP + 0xb8],EBX
// 00422d8a: LEA EBX,[EDI + 0x3628]
// 00422d90: LEA ESI,[EDI + 0x158]
// 00422d96: JBE 0x00422da8
//   XREF to: 00422da8 (CONDITIONAL_JUMP)
// 00422d98: CMP EAX,0x2
// 00422d9b: JZ 0x00422ed3
//   XREF to: 00422ed3 (CONDITIONAL_JUMP)
// 00422da1: MOV ESP,EBP
//   Label: LAB_00422da1
// 00422da3: POP EBP
// 00422da4: POP EDI
// 00422da5: POP ESI
// 00422da6: POP EBX
// 00422da7: RET
// 00422da8: PUSH 0x616955
//   Label: LAB_00422da8
//   XREF to: 00616955 (DATA)
// 00422dad: PUSH ESI
// 00422dae: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00422db3: ADD ESP,0x8
// 00422db6: PUSH ESI
// 00422db7: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 00422dbc: ADD ESP,0x4
// 00422dbf: LEA EAX,[ESP + 0x40]
// 00422dc3: PUSH EAX
// 00422dc4: MOV ESI,dword ptr [EDI + 0x154]
// 00422dca: PUSH EDI
// 00422dcb: CALL dword ptr [ESI + 0x14]
// 00422dce: ADD ESP,0x8
// 00422dd1: FLD float ptr [ESP + 0x40]
// 00422dd5: FADD float ptr [ESP + 0x4c]
// 00422dd9: FST float ptr [ESP + 0xac]
// 00422de0: FLD float ptr [0x0061697f]
//   XREF to: 0061697f (READ)
// 00422de6: FXCH
// 00422de8: FMUL ST1
// 00422dea: FLD float ptr [ESP + 0x48]
// 00422dee: FLD float ptr [ESP + 0x44]
// 00422df2: FADD float ptr [ESP + 0x50]
// 00422df6: FXCH
// 00422df8: FADD float ptr [ESP + 0x54]
// 00422dfc: FXCH
// 00422dfe: FST float ptr [ESP + 0xb0]
// 00422e05: FMUL ST3
// 00422e07: FXCH
// 00422e09: FST float ptr [ESP + 0xb4]
// 00422e10: FMUL ST3
// 00422e12: FXCH ST2
// 00422e14: FSTP float ptr [ESP + 0x70]
// 00422e18: FSTP float ptr [ESP + 0x74]
// 00422e1c: MOV EAX,dword ptr [ESP + 0x70]
// 00422e20: FSTP float ptr [ESP + 0x78]
// 00422e24: MOV dword ptr [EDI + 0x361c],EAX
// 00422e2a: FLD float ptr [ESP + 0x40]
// 00422e2e: FADD float ptr [ESP + 0x4c]
// 00422e32: FST float ptr [ESP + 0x58]
// 00422e36: FMUL ST1
// 00422e38: FLD float ptr [ESP + 0x48]
// 00422e3c: FLD float ptr [ESP + 0x44]
// 00422e40: FADD float ptr [ESP + 0x50]
// 00422e44: FXCH
// 00422e46: FADD float ptr [ESP + 0x54]
// 00422e4a: FXCH
// 00422e4c: FST float ptr [ESP + 0x5c]
// 00422e50: FMUL ST3
// 00422e52: FXCH
// 00422e54: FST float ptr [ESP + 0x60]
// 00422e58: FMULP ST3
// 00422e5a: FXCH
// 00422e5c: FSTP float ptr [ESP + 0xa0]
// 00422e63: FSTP float ptr [ESP + 0xa4]
// 00422e6a: MOV EAX,dword ptr [ESP + 0xa4]
// 00422e71: FSTP float ptr [ESP + 0xa8]
// 00422e78: MOV dword ptr [EDI + 0x3620],EAX
// 00422e7e: FLD float ptr [ESP + 0x54]
// 00422e82: FADD double ptr [0x00616987]
//   XREF to: 00616987 (READ)
// 00422e88: FSTP float ptr [EDI + 0x3624]
// 00422e8e: MOV dword ptr [EBX + 0x8],0x0
// 00422e95: MOV EAX,dword ptr [ESP + 0xb8]
// 00422e9c: MOV EDX,dword ptr [EBX + 0x8]
// 00422e9f: MOV dword ptr [EBX + 0x4],EDX
// 00422ea2: MOV EDX,dword ptr [EBX + 0x4]
// 00422ea5: MOV dword ptr [EBX],EDX
// 00422ea7: MOV dword ptr [EDI + 0x2324],0x0
// 00422eb1: MOV dword ptr [EAX + 0x38],0x42600000
// 00422eb8: MOV dword ptr [EDI + 0x7b0],0x42000000
// 00422ec2: MOV dword ptr [EDI + 0x314],0x3
// 00422ecc: MOV ESP,EBP
// 00422ece: POP EBP
// 00422ecf: POP EDI
// 00422ed0: POP ESI
// 00422ed1: POP EBX
// 00422ed2: RET
// 00422ed3: PUSH 0x616962
//   Label: LAB_00422ed3
//   XREF to: 00616962 (DATA)
// 00422ed8: PUSH ESI
// 00422ed9: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00422ede: ADD ESP,0x8
// 00422ee1: PUSH ESI
// 00422ee2: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 00422ee7: ADD ESP,0x4
// 00422eea: LEA ESI,[ESP + 0x28]
// 00422eee: PUSH ESI
// 00422eef: MOV EAX,dword ptr [EDI + 0x154]
// 00422ef5: PUSH EDI
// 00422ef6: CALL dword ptr [EAX + 0x14]
// 00422ef9: ADD ESP,0x8
// 00422efc: FLD float ptr [ESP + 0x28]
// 00422f00: FADD float ptr [ESP + 0x34]
// 00422f04: FST float ptr [ESP + 0x88]
// 00422f0b: FLD float ptr [0x0061697f]
//   XREF to: 0061697f (READ)
// 00422f11: FXCH
// 00422f13: FMUL ST1
// 00422f15: FLD float ptr [ESP + 0x30]
// 00422f19: FLD float ptr [ESP + 0x2c]
// 00422f1d: FADD float ptr [ESP + 0x38]
// 00422f21: FXCH
// 00422f23: FADD float ptr [ESP + 0x3c]
// 00422f27: FXCH
// 00422f29: FST float ptr [ESP + 0x8c]
// 00422f30: FMUL ST3
// 00422f32: FXCH
// 00422f34: FST float ptr [ESP + 0x90]
// 00422f3b: FMUL ST3
// 00422f3d: FXCH ST2
// 00422f3f: FSTP float ptr [ESP + 0x94]
// 00422f46: FSTP float ptr [ESP + 0x98]
// 00422f4d: MOV EAX,dword ptr [ESP + 0x94]
// 00422f54: FSTP float ptr [ESP + 0x9c]
// 00422f5b: MOV dword ptr [EDI + 0x361c],EAX
// 00422f61: FLD float ptr [ESP + 0x28]
// 00422f65: FADD float ptr [ESP + 0x34]
// 00422f69: FST float ptr [ESP + 0x64]
// 00422f6d: FMUL ST1
// 00422f6f: FLD float ptr [ESP + 0x30]
// 00422f73: FLD float ptr [ESP + 0x2c]
// 00422f77: FADD float ptr [ESP + 0x38]
// 00422f7b: FXCH
// 00422f7d: FADD float ptr [ESP + 0x3c]
// 00422f81: FXCH
// 00422f83: FST float ptr [ESP + 0x68]
// 00422f87: FMUL ST3
// 00422f89: FXCH
// 00422f8b: FST float ptr [ESP + 0x6c]
// 00422f8f: FMULP ST3
// 00422f91: FXCH
// 00422f93: FSTP float ptr [ESP + 0x7c]
// 00422f97: FSTP float ptr [ESP + 0x80]
// 00422f9e: MOV EAX,dword ptr [ESP + 0x80]
// 00422fa5: FSTP float ptr [ESP + 0x84]
// 00422fac: MOV dword ptr [EDI + 0x3620],EAX
// 00422fb2: MOV EAX,dword ptr [ESP + 0x3c]
// 00422fb6: MOV dword ptr [EDI + 0x3624],EAX
// 00422fbc: MOV dword ptr [EBX + 0x8],0x0
// 00422fc3: MOV EAX,dword ptr [EBX + 0x8]
// 00422fc6: MOV dword ptr [EBX + 0x4],EAX
// 00422fc9: MOV EAX,dword ptr [EBX + 0x4]
// 00422fcc: MOV dword ptr [EBX],EAX
// 00422fce: MOV dword ptr [EDI + 0x3628],0x3e860a92
// 00422fd8: MOV EAX,dword ptr [ESP + 0xb8]
// 00422fdf: MOV dword ptr [EDI + 0x2324],0x0
// 00422fe9: MOV dword ptr [EAX + 0x38],0x42600000
// 00422ff0: MOV dword ptr [EDI + 0x7b0],0x42000000
// 00422ffa: MOV EDX,dword ptr [0x008229ac]
//   XREF to: 008229ac (READ)
// 00423000: MOV dword ptr [EDI + 0x314],0x3
// 0042300a: TEST EDX,EDX
// 0042300c: JNZ 0x00423047
//   XREF to: 00423047 (CONDITIONAL_JUMP)
// 0042300e: MOV ESI,0x8229ec
//   XREF to: 008229ec (DATA)
// 00423013: XOR EBX,EBX
// 00423015: PUSH EBX
//   Label: LAB_00423015
// 00423016: PUSH 0x61696e
//   XREF to: 0061696e (DATA)
// 0042301b: LEA EAX,[ESP + 0x8]
// 0042301f: PUSH EAX
// 00423020: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00423025: ADD ESP,0xc
// 00423028: MOV EAX,ESP
// 0042302a: PUSH EAX
// 0042302b: PUSH ESI
//   XREF to: 008229ec (DATA)
// 0042302c: INC EBX
// 0042302d: CALL core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
//   XREF to: 004702f0 (UNCONDITIONAL_CALL)
// 00423032: ADD ESP,0x8
// 00423035: ADD ESI,0x4c
// 00423038: CMP EBX,0x8
// 0042303b: JL 0x00423015
//   XREF to: 00423015 (CONDITIONAL_JUMP)
// 0042303d: MOV dword ptr [0x008229ac],0x1
//   XREF to: 008229ac (WRITE)
// 00423047: PUSH 0x0
//   Label: LAB_00423047
// 00423049: PUSH 0x0
// 0042304b: PUSH 0x0
// 0042304d: PUSH 0x8229ec
//   XREF to: 008229ec (DATA)
// 00423052: ADD EDI,0x670
// 00423058: PUSH EDI
// 00423059: CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   XREF to: 00474770 (UNCONDITIONAL_CALL)
// 0042305e: ADD ESP,0x14
// 00423061: MOV ESP,EBP
// 00423063: POP EBP
// 00423064: POP EDI
// 00423065: POP ESI
// 00423066: POP EBX
// 00423067: RET
