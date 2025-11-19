// Name: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70
// Address: 005a5e70
// Address Range: [[005a5e70, 005a5fa9]]
// Convention: __cdecl
// Signature: double sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70(short * sample_data, SStereoBuffers * channel_buffers, SStereoGains * channel_gains, double resample_position, double resample_delta, int samples_to_process)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0 (005a75e0) at 005a7d87 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0064fcaf = 4294967296
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double __cdecl
sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70
          (short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,
          double resample_position,double resample_delta,int samples_to_process)

{
  int iVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  uint uVar8;
  int iVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar10;
  bool bVar11;
  float10 in_ST0;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  int in_stack_00000004;
  int *in_stack_00000008;
  float *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined8 local_34;
  
  if (0 < resample_position._0_4_) {
    dVar14 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar13 = (float10)dVar14;
    local_34 = (double)CONCAT44(extraout_EDX,extraout_EAX);
    fVar12 = (float10)local_34;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
    local_34._0_4_ = (uint)(longlong)ROUND(fVar12);
    iVar10 = (uint)local_34;
    local_34 = (double)((longlong)ROUND(fVar12) & 0xffffffff);
    fVar12 = ((float10)_in_stack_00000010 - (float10)(longlong)local_34) * (float10)DOUBLE_0064fcaf;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),iVar10));
    local_34._0_4_ = (uint)(longlong)ROUND(fVar12);
    uVar8 = (uint)local_34;
    crt_math_c_floor_FUN_005feb90((double)fVar13);
    local_34 = (double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
    fVar13 = (float10)local_34;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
    local_34._0_4_ = (uint)(longlong)ROUND(fVar13);
    iVar7 = (uint)local_34;
    local_34 = (double)((longlong)ROUND(fVar13) & 0xffffffff);
    fVar13 = ((float10)(double)CONCAT44(channel_gains,channel_buffers) - (float10)(longlong)local_34
             ) * (float10)DOUBLE_0064fcaf;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),iVar7));
    local_34._0_4_ = (uint)(longlong)ROUND(fVar13);
    fVar3 = *in_stack_0000000c;
    fVar4 = in_stack_0000000c[1];
    iVar5 = in_stack_00000008[1];
    iVar6 = *in_stack_00000008;
    iVar9 = 0;
    do {
      sVar2 = *(short *)(in_stack_00000004 + iVar10 * 2);
      iVar1 = iVar10 * 2;
      bVar11 = CARRY4(uVar8,(uint)local_34);
      uVar8 = uVar8 + (uint)local_34;
      iVar10 = iVar10 + iVar7 + (uint)bVar11;
      *(float *)(iVar6 + iVar9 * 4) =
           (float)*(short *)(in_stack_00000004 + iVar1) * fVar3 + *(float *)(iVar6 + iVar9 * 4);
      *(float *)(iVar5 + iVar9 * 4) = (float)sVar2 * fVar4 + *(float *)(iVar5 + iVar9 * 4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < resample_position._0_4_);
    _in_stack_00000010 =
         (double)resample_position._0_4_ * (double)CONCAT44(channel_gains,channel_buffers) +
         _in_stack_00000010;
  }
  return _in_stack_00000010;
}


// Assembly code:
// 005a5e70: PUSH EBX
//   Label: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70
// 005a5e71: PUSH ESI
// 005a5e72: PUSH EDI
// 005a5e73: PUSH EBP
// 005a5e74: MOV EBP,ESP
// 005a5e76: SUB ESP,0x2c
// 005a5e79: CMP dword ptr [EBP + 0x30],0x1
//   XREF to: Stack[0x20] (READ)
// 005a5e7d: JGE 0x005a5e98
//   XREF to: 005a5e98 (CONDITIONAL_JUMP)
// 005a5e7f: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_005a5e7f
//   XREF to: Stack[0x10] (READ)
// 005a5e82: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005a5e85: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a5e88: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005a5e8b: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 005a5e8e: MOV EDX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 005a5e91: MOV ESP,EBP
// 005a5e93: POP EBP
// 005a5e94: POP EDI
// 005a5e95: POP ESI
// 005a5e96: POP EBX
// 005a5e97: RET
// 005a5e98: MOV ECX,dword ptr [EBP + 0x24]
//   Label: LAB_005a5e98
//   XREF to: Stack[0x14] (READ)
// 005a5e9b: PUSH ECX
// 005a5e9c: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a5e9f: PUSH EBX
// 005a5ea0: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a5ea5: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a5ea8: MOV dword ptr [EBP + -0x20],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005a5eab: ADD ESP,0x8
// 005a5eae: FLD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5eb1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a5eb6: FISTP qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005a5eb9: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5ebc: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005a5ebf: XOR ESI,ESI
// 005a5ec1: MOV dword ptr [EBP + -0x20],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 005a5ec4: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 005a5ec7: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a5eca: FILD qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5ecd: FSUBR double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a5ed0: FMUL double ptr [0x0064fcaf]
//   XREF to: 0064fcaf (READ)
// 005a5ed6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a5edb: FISTP qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005a5ede: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5ee1: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a5ee4: MOV EDI,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005a5ee7: PUSH EDI
// 005a5ee8: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005a5eeb: PUSH EAX
// 005a5eec: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a5ef1: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a5ef4: MOV dword ptr [EBP + -0x20],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005a5ef7: ADD ESP,0x8
// 005a5efa: FLD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5efd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a5f02: FISTP qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005a5f05: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5f08: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a5f0b: MOV dword ptr [EBP + -0x20],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 005a5f0e: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 005a5f11: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a5f14: FILD qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5f17: FSUBR double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005a5f1a: FMUL double ptr [0x0064fcaf]
//   XREF to: 0064fcaf (READ)
// 005a5f20: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a5f25: FISTP qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005a5f28: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5f2b: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a5f2e: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a5f31: MOV EAX,dword ptr [EAX]
// 005a5f33: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a5f36: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a5f39: MOV EAX,dword ptr [EAX + 0x4]
// 005a5f3c: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a5f3f: PUSHAD
// 005a5f40: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a5f46: MOV EDX,dword ptr [EDI + 0x4]
// 005a5f49: MOV EDI,dword ptr [EDI]
// 005a5f4b: MOV ESI,dword ptr [EBP + 0xffffffe8]
//   XREF to: Stack[-0x28] (READ)
// 005a5f51: MOV EAX,dword ptr [EBP + 0xffffffec]
//   XREF to: Stack[-0x24] (READ)
// 005a5f57: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a5f5d: XOR ECX,ECX
// 005a5f5f: FILD word ptr [EBX + ESI*0x2]
//   Label: LAB_005a5f5f
// 005a5f62: FILD word ptr [EBX + ESI*0x2]
// 005a5f65: ADD EAX,dword ptr [EBP + 0xffffffe4]
//   XREF to: Stack[-0x2c] (READ)
// 005a5f6b: ADC ESI,dword ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 005a5f71: FMUL float ptr [EBP + 0xfffffffc]
//   XREF to: Stack[-0x14] (READ)
// 005a5f77: FADD float ptr [EDI + ECX*0x4]
// 005a5f7a: FSTP float ptr [EDI + ECX*0x4]
// 005a5f7d: FMUL float ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 005a5f83: FADD float ptr [EDX + ECX*0x4]
// 005a5f86: FSTP float ptr [EDX + ECX*0x4]
// 005a5f89: INC ECX
// 005a5f8a: CMP ECX,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 005a5f90: JL 0x005a5f5f
//   XREF to: 005a5f5f (CONDITIONAL_JUMP)
// 005a5f92: POPAD
// 005a5f93: MOV EAX,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 005a5f96: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a5f99: FILD dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 005a5f9c: FMUL double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005a5f9f: FADD double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a5fa2: FSTP double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (WRITE)
// 005a5fa5: JMP 0x005a5e7f
//   XREF to: 005a5e7f (UNCONDITIONAL_JUMP)
