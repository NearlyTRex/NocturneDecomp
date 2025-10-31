// Name: core_msnedit.cpp_FUN_00535c60
// Address: 00535c60
// Address Range: [[00535c60, 00535de8]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00535c60()
// Cross-references:
//   core_msnedit.cpp_BeginAndEndScene_FUN_0053c970 (0053c970) at 0053c9c8 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053baf8 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0063b2ec
//   undefined4 DAT_00661c30
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
// Function calls:
//   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_msnedit.cpp_FUN_00535c60(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

float * core_msnedit_cpp_FUN_00535c60(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  byte bVar5;
  float *in_stack_00000004;
  CVector3i *in_stack_00000008;
  int in_stack_0000000c;
  CVector3i *apCStackY_1040 [1014];
  int in_stack_ffffffa4;
  CVector3i *output_ptr;
  CVector3i *in_stack_ffffffa8;
  CVector3i *local_38;
  CVector3i local_34;
  int local_28;
  float local_24 [3];
  int iStack_18;
  undefined4 local_14;
  
  bVar5 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (&g_CDemonCameraInstance,in_stack_00000008,in_stack_0000000c,in_stack_ffffffa4);
  output_ptr = &local_34;
  local_38 = in_stack_ffffffa8;
  *(undefined4 *)((int)&local_34 + (uint)bVar5 * -8) =
       *(undefined4 *)(&stack0xffffffac + (uint)bVar5 * -8);
  *(undefined4 *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
       *(undefined4 *)(&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
            (&g_CDemonCameraInstance,output_ptr,in_stack_ffffffa8);
  local_34.x = iStack_18;
  *(undefined4 *)((int)&local_34 + (uint)bVar5 * -8 + 4) = (&local_14)[(uint)bVar5 * -2];
  *(undefined4 *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(undefined4 *)(&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *in_stack_00000004 = (float)local_34.y * _DAT_00661c30;
  in_stack_00000004[1] = (float)local_34.z * _DAT_00661c30;
  in_stack_00000004[2] = (float)local_28 * _DAT_00661c30;
  if (_DAT_0063b2ec <
      SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
           *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1])) {
    fVar1 = *in_stack_00000004 - (float)g_CDemonCameraInstance.base.position.x;
    fVar2 = in_stack_00000004[1] - (float)g_CDemonCameraInstance.base.position.y;
    fVar3 = in_stack_00000004[2] - (float)g_CDemonCameraInstance.base.position.z;
    fVar4 = _DAT_0063b2ec / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar2 = (float)g_CDemonCameraInstance.base.position.y + fVar2 * fVar4;
    fVar3 = (float)g_CDemonCameraInstance.base.position.z + fVar3 * fVar4;
    if (in_stack_00000004 != local_24) {
      *in_stack_00000004 = (float)g_CDemonCameraInstance.base.position.x + fVar1 * fVar4;
      in_stack_00000004[1] = fVar2;
      in_stack_00000004[2] = fVar3;
      return in_stack_00000004;
    }
  }
  return in_stack_00000004;
}


// Assembly code:
// 00535c60: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00535c60
// 00535c61: PUSH ESI
// 00535c62: PUSH EDI
// 00535c63: PUSH EBP
// 00535c64: SUB ESP,0x4c
// 00535c67: MOV EBP,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 00535c6b: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 00535c6f: PUSH EDX
// 00535c70: MOV ECX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x8] (READ)
// 00535c74: PUSH ECX
// 00535c75: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00535c7a: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 00535c7e: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x38] (DATA)
// 00535c82: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 00535c87: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 00535c8b: ADD ESP,0xc
// 00535c8e: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 00535c92: MOV EBX,EBP
// 00535c94: PUSH EAX
// 00535c95: MOVSD ES:EDI,ESI
// 00535c96: MOVSD ES:EDI,ESI
// 00535c97: MOVSD ES:EDI,ESI
// 00535c98: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00535c9d: LEA ESI,[ESP + 0x44]
//   XREF to: Stack[-0x20] (DATA)
// 00535ca1: LEA EDI,[ESP + 0x2c]
//   XREF to: Stack[-0x38] (DATA)
// 00535ca5: CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   XREF to: 0044d370 (UNCONDITIONAL_CALL)
// 00535caa: LEA ESI,[ESP + 0x44]
//   XREF to: Stack[-0x20] (DATA)
// 00535cae: ADD ESP,0x8
// 00535cb1: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x38] (DATA)
// 00535cb5: MOVSD ES:EDI,ESI
// 00535cb6: MOVSD ES:EDI,ESI
// 00535cb7: MOVSD ES:EDI,ESI
// 00535cb8: FILD dword ptr [EAX]
//   XREF to: Stack[-0x38] (DATA)
// 00535cba: FMUL float ptr [0x00661c30]
//   XREF to: 00661c30 (READ)
// 00535cc0: FSTP float ptr [EBX]
// 00535cc2: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 00535cc5: FMUL float ptr [0x00661c30]
//   XREF to: 00661c30 (READ)
// 00535ccb: FSTP float ptr [EBX + 0x4]
// 00535cce: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 00535cd1: FMUL float ptr [0x00661c30]
//   XREF to: 00661c30 (READ)
// 00535cd7: FSTP float ptr [EBX + 0x8]
// 00535cda: FLD float ptr [EBP + 0x4]
// 00535cdd: FMUL ST0
// 00535cdf: FLD float ptr [EBP]
// 00535ce2: FMUL ST0
// 00535ce4: FADDP
// 00535ce6: FLD float ptr [EBP + 0x8]
// 00535ce9: FMUL ST0
// 00535ceb: FADDP
// 00535ced: FSQRT
// 00535cef: FCOMP float ptr [0x0063b2ec]
//   XREF to: 0063b2ec (READ)
// 00535cf5: FNSTSW AX
// 00535cf7: SAHF
// 00535cf8: JBE 0x00535dc0
//   XREF to: 00535dc0 (CONDITIONAL_JUMP)
// 00535cfe: MOV EAX,[0x032758e8]
//   XREF to: 032758e8 (READ)
// 00535d03: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00535d07: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 00535d0c: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 032758ec (READ)
// 00535d0f: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00535d13: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 00535d18: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 032758f0 (READ)
// 00535d1b: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00535d1f: FLD float ptr [EBP]
// 00535d22: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x50] (READ)
// 00535d26: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (WRITE)
// 00535d2a: FLD float ptr [EBP + 0x4]
// 00535d2d: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 00535d31: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (WRITE)
// 00535d35: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (READ)
// 00535d39: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 00535d3d: FMUL ST0
// 00535d3f: FLD float ptr [EBP + 0x8]
// 00535d42: FSUB float ptr [ESP + 0x14]
//   XREF to: Stack[-0x48] (READ)
// 00535d46: FXCH
// 00535d48: FADDP ST2,ST0
// 00535d4a: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (WRITE)
// 00535d4e: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (READ)
// 00535d52: FADDP
// 00535d54: FSQRT
// 00535d56: FDIVR float ptr [0x0063b2ec]
//   XREF to: 0063b2ec (READ)
// 00535d5c: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 00535d60: FXCH
// 00535d62: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (WRITE)
// 00535d66: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 00535d6a: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (READ)
// 00535d6e: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 00535d72: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (READ)
// 00535d76: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 00535d7a: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x50] (READ)
// 00535d7e: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 00535d82: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x48] (READ)
// 00535d86: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x2c] (DATA)
// 00535d8a: FXCH ST5
// 00535d8c: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (WRITE)
// 00535d90: FXCH ST3
// 00535d92: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (WRITE)
// 00535d96: FXCH
// 00535d98: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (WRITE)
// 00535d9c: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 00535da0: FXCH
// 00535da2: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (READ)
// 00535da6: FXCH ST2
// 00535da8: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (READ)
// 00535dac: FXCH
// 00535dae: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (WRITE)
// 00535db2: FXCH
// 00535db4: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (WRITE)
// 00535db8: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (WRITE)
// 00535dbc: CMP EBP,EAX
// 00535dbe: JNZ 0x00535dca
//   XREF to: 00535dca (CONDITIONAL_JUMP)
// 00535dc0: MOV EAX,EBP
//   Label: LAB_00535dc0
// 00535dc2: ADD ESP,0x4c
// 00535dc5: POP EBP
// 00535dc6: POP EDI
// 00535dc7: POP ESI
// 00535dc8: POP EBX
// 00535dc9: RET
// 00535dca: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_00535dca
//   XREF to: Stack[-0x2c] (DATA)
// 00535dce: MOV dword ptr [EBP],EAX
// 00535dd1: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 00535dd5: MOV dword ptr [EBP + 0x4],EAX
// 00535dd8: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 00535ddc: MOV dword ptr [EBP + 0x8],EAX
// 00535ddf: MOV EAX,EBP
// 00535de1: ADD ESP,0x4c
// 00535de4: POP EBP
// 00535de5: POP EDI
// 00535de6: POP ESI
// 00535de7: POP EBX
// 00535de8: RET
