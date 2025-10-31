// Name: core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
// Address: 00496c60
// Address Range: [[00496c60, 00496e65]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60(CDemonRaytrace * this_ptr, SCapsuleCollision * capsule_data)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 005734c6 [UNCONDITIONAL_CALL]
// Globals:
//   CVector3f g_TempNormal0
//   undefined4 g_TempNormal0.y
//   undefined4 g_TempNormal0.z
//   CVector3f g_TempNormal1
//   undefined4 g_TempNormal1.y
//   undefined4 g_TempNormal1.z
//   CVector3f g_TempNormal2
//   undefined4 g_TempNormal2.y
//   undefined4 g_TempNormal2.z
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
          (CDemonRaytrace *this_ptr,SCapsuleCollision *capsule_data)

{
  int grid_z;
  CDemonCube *this_ptr_00;
  undefined4 in_EDX;
  int unaff_EBX;
  int unaff_ESI;
  int grid_y;
  int grid_x;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  int in_stack_0000000c;
  int in_stack_00000014;
  CDemonRaytrace *in_stack_0000001c;
  
  g_TempNormal0.y = g_ZeroVector.y;
  g_TempNormal2.z = g_ZeroVector.z;
  g_TempNormal2.x = g_ZeroVector.x;
  g_TempNormal1.z = g_ZeroVector.z;
  g_TempNormal1.x = g_ZeroVector.x;
  g_TempNormal0.z = g_ZeroVector.z;
  g_TempNormal0.x = g_ZeroVector.x;
  g_TempNormal1.y = g_TempNormal0.y;
  g_TempNormal2.y = g_TempNormal0.y;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,this_ptr));
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  fVar1 = (float10)1 / (float10)*(float *)(in_stack_0000000c + 0x2c);
  fVar2 = ((float10)(float)capsule_data->user_data2 - (float10)*(float *)(in_stack_0000000c + 0x14))
          * fVar1;
  fVar1 = ((float10)(float)capsule_data->user_data1 - (float10)*(float *)(in_stack_0000000c + 0x14))
          * fVar1;
  fVar4 = (float10)0;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),in_stack_0000000c));
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  grid_x = (int)ROUND(fVar2);
  if ((float10)capsule_data->dir_z <= fVar4) {
    fVar2 = (((float10)capsule_data->start_z + (float10)capsule_data->dir_z) -
            (float10)*(float *)(in_stack_00000014 + 0x18)) - (float10)capsule_data->radius;
    fVar3 = (float10)1 / (float10)*(float *)(in_stack_00000014 + 0x30);
    fVar4 = (float10)capsule_data->start_z;
  }
  else {
    fVar2 = ((float10)capsule_data->start_z - (float10)*(float *)(in_stack_00000014 + 0x18)) -
            (float10)capsule_data->radius;
    fVar3 = (float10)1 / (float10)*(float *)(in_stack_00000014 + 0x30);
    fVar4 = (float10)capsule_data->start_z + (float10)capsule_data->dir_z;
  }
  fVar2 = fVar2 * fVar3;
  fVar3 = ((fVar4 - (float10)*(float *)(in_stack_00000014 + 0x18)) + (float10)capsule_data->radius)
          * fVar3;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),in_stack_00000014));
  crt_math_c_round_FUN_005fe6b0(dVar5);
  for (; grid_x <= (int)ROUND(fVar1); grid_x = grid_x + 1) {
    grid_z = (int)ROUND(fVar2);
    grid_y = unaff_ESI;
    if (unaff_ESI <= unaff_EBX) {
      do {
        for (; grid_z <= (int)ROUND(fVar3); grid_z = grid_z + 1) {
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (in_stack_0000001c,grid_x,grid_y,grid_z);
          if (this_ptr_00 != (CDemonCube *)0x0) {
            core_dcube_cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
                      (this_ptr_00,(SIntersectXZCylinder *)capsule_data);
          }
        }
        grid_y = grid_y + 1;
        grid_z = (int)ROUND(fVar2);
      } while (grid_y <= unaff_EBX);
    }
  }
  return;
}


// Assembly code:
// 00496c60: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
// 00496c61: PUSH ESI
// 00496c62: PUSH EDI
// 00496c63: PUSH EBP
// 00496c64: SUB ESP,0x1c
// 00496c67: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00496c6b: MOV EAX,0x15c4818
//   XREF to: 015c4818 (DATA)
// 00496c70: CMP EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 00496c75: JNZ 0x00496e05
//   XREF to: 00496e05 (CONDITIONAL_JUMP)
// 00496c7b: MOV EAX,0x15c480c
//   Label: LAB_00496c7b
//   XREF to: 015c480c (DATA)
// 00496c80: CMP EAX,0x15c4818
//   XREF to: 015c4818 (DATA)
// 00496c85: JZ 0x00496ca9
//   XREF to: 00496ca9 (CONDITIONAL_JUMP)
// 00496c87: FLD float ptr [0x015c4818]
//   XREF to: 015c4818 (READ)
// 00496c8d: FLD float ptr [0x015c4820]
//   XREF to: 015c4820 (READ)
// 00496c93: MOV EAX,[0x015c481c]
//   XREF to: 015c481c (READ)
// 00496c98: MOV [0x015c4810],EAX
//   XREF to: 015c4810 (WRITE)
// 00496c9d: FSTP float ptr [0x015c4814]
//   XREF to: 015c4814 (WRITE)
// 00496ca3: FSTP float ptr [0x015c480c]
//   XREF to: 015c480c (WRITE)
// 00496ca9: MOV EAX,0x15c4800
//   Label: LAB_00496ca9
//   XREF to: 015c4800 (DATA)
// 00496cae: CMP EAX,0x15c480c
//   XREF to: 015c480c (DATA)
// 00496cb3: JZ 0x00496cd7
//   XREF to: 00496cd7 (CONDITIONAL_JUMP)
// 00496cb5: FLD float ptr [0x015c480c]
//   XREF to: 015c480c (READ)
// 00496cbb: FLD float ptr [0x015c4814]
//   XREF to: 015c4814 (READ)
// 00496cc1: MOV EAX,[0x015c4810]
//   XREF to: 015c4810 (READ)
// 00496cc6: MOV [0x015c4804],EAX
//   XREF to: 015c4804 (WRITE)
// 00496ccb: FSTP float ptr [0x015c4808]
//   XREF to: 015c4808 (WRITE)
// 00496cd1: FSTP float ptr [0x015c4800]
//   XREF to: 015c4800 (WRITE)
// 00496cd7: FLDZ
//   Label: LAB_00496cd7
// 00496cd9: FCOMP float ptr [EBP + 0x18]
// 00496cdc: FNSTSW AX
// 00496cde: SAHF
// 00496cdf: JNC 0x00496e2c
//   XREF to: 00496e2c (CONDITIONAL_JUMP)
// 00496ce5: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00496ce9: FLD float ptr [EBP + 0x10]
// 00496cec: FSUB float ptr [EAX + 0x10]
// 00496cef: FSUB float ptr [EBP + 0x20]
// 00496cf2: FLD1
// 00496cf4: FDIV float ptr [EAX + 0x28]
// 00496cf7: FLD float ptr [EBP + 0x10]
// 00496cfa: FADD float ptr [EBP + 0x18]
// 00496cfd: FSUB float ptr [EAX + 0x10]
//   Label: LAB_00496cfd
// 00496d00: FADD float ptr [EBP + 0x20]
// 00496d03: FXCH ST2
// 00496d05: FMUL ST1
// 00496d07: FXCH ST2
// 00496d09: FMULP
// 00496d0b: FXCH
// 00496d0d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496d12: FXCH
// 00496d14: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496d19: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (WRITE)
// 00496d1d: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (WRITE)
// 00496d21: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00496d25: FLD float ptr [EBP + 0x28]
// 00496d28: FSUB float ptr [EAX + 0x14]
// 00496d2b: FLD1
// 00496d2d: FDIV float ptr [EAX + 0x2c]
// 00496d30: FLD float ptr [EBP + 0x24]
// 00496d33: FSUB float ptr [EAX + 0x14]
// 00496d36: FXCH ST2
// 00496d38: FMUL ST1
// 00496d3a: FXCH ST2
// 00496d3c: FMULP
// 00496d3e: FLDZ
// 00496d40: FXCH ST2
// 00496d42: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496d47: FXCH
// 00496d49: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496d4e: FXCH
// 00496d50: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (WRITE)
// 00496d54: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (WRITE)
// 00496d58: FCOMP float ptr [EBP + 0x1c]
// 00496d5b: FNSTSW AX
// 00496d5d: SAHF
// 00496d5e: JNC 0x00496e49
//   XREF to: 00496e49 (CONDITIONAL_JUMP)
// 00496d64: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00496d68: FLD float ptr [EBP + 0x14]
// 00496d6b: FSUB float ptr [EAX + 0x18]
// 00496d6e: FSUB float ptr [EBP + 0x20]
// 00496d71: FLD1
// 00496d73: FDIV float ptr [EAX + 0x30]
// 00496d76: FLD float ptr [EBP + 0x14]
// 00496d79: FADD float ptr [EBP + 0x1c]
// 00496d7c: FSUB float ptr [EAX + 0x18]
//   Label: LAB_00496d7c
// 00496d7f: FADD float ptr [EBP + 0x20]
// 00496d82: FXCH ST2
// 00496d84: FMUL ST1
// 00496d86: FXCH ST2
// 00496d88: FMULP
// 00496d8a: FXCH
// 00496d8c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496d91: FXCH
// 00496d93: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496d98: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (WRITE)
// 00496d9c: FISTP dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (WRITE)
// 00496da0: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 00496da4: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 00496da8: CMP EDI,EDX
// 00496daa: JG 0x00496dfd
//   XREF to: 00496dfd (CONDITIONAL_JUMP)
// 00496dac: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_00496dac
//   XREF to: Stack[-0x1c] (READ)
// 00496db0: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00496db4: CMP ESI,EBX
// 00496db6: JG 0x00496df4
//   XREF to: 00496df4 (CONDITIONAL_JUMP)
// 00496db8: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_00496db8
//   XREF to: Stack[-0x14] (READ)
// 00496dbc: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00496dc0: CMP EBX,EDX
// 00496dc2: JG 0x00496deb
//   XREF to: 00496deb (CONDITIONAL_JUMP)
// 00496dc4: PUSH EBX
//   Label: LAB_00496dc4
// 00496dc5: PUSH ESI
// 00496dc6: PUSH EDI
// 00496dc7: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 00496dcb: PUSH EAX
// 00496dcc: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 00496dd1: ADD ESP,0x10
// 00496dd4: TEST EAX,EAX
// 00496dd6: JZ 0x00496de2
//   XREF to: 00496de2 (CONDITIONAL_JUMP)
// 00496dd8: PUSH EBP
// 00496dd9: PUSH EAX
// 00496dda: CALL core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
//   XREF to: 00457a90 (UNCONDITIONAL_CALL)
// 00496ddf: ADD ESP,0x8
// 00496de2: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_00496de2
//   XREF to: Stack[-0x14] (READ)
// 00496de6: INC EBX
// 00496de7: CMP EBX,ECX
// 00496de9: JLE 0x00496dc4
//   XREF to: 00496dc4 (CONDITIONAL_JUMP)
// 00496deb: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00496deb
//   XREF to: Stack[-0x1c] (READ)
// 00496def: INC ESI
// 00496df0: CMP ESI,EAX
// 00496df2: JLE 0x00496db8
//   XREF to: 00496db8 (CONDITIONAL_JUMP)
// 00496df4: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_00496df4
//   XREF to: Stack[-0x24] (READ)
// 00496df8: INC EDI
// 00496df9: CMP EDI,ECX
// 00496dfb: JLE 0x00496dac
//   XREF to: 00496dac (CONDITIONAL_JUMP)
// 00496dfd: ADD ESP,0x1c
//   Label: LAB_00496dfd
// 00496e00: POP EBP
// 00496e01: POP EDI
// 00496e02: POP ESI
// 00496e03: POP EBX
// 00496e04: RET
// 00496e05: FLD float ptr [0x03f87558]
//   Label: LAB_00496e05
//   XREF to: 03f87558 (READ)
// 00496e0b: FLD float ptr [0x03f87560]
//   XREF to: 03f87560 (READ)
// 00496e11: MOV EAX,[0x03f8755c]
//   XREF to: 03f8755c (READ)
// 00496e16: MOV [0x015c481c],EAX
//   XREF to: 015c481c (WRITE)
// 00496e1b: FSTP float ptr [0x015c4820]
//   XREF to: 015c4820 (WRITE)
// 00496e21: FSTP float ptr [0x015c4818]
//   XREF to: 015c4818 (WRITE)
// 00496e27: JMP 0x00496c7b
//   XREF to: 00496c7b (UNCONDITIONAL_JUMP)
// 00496e2c: FLD float ptr [EBP + 0x10]
//   Label: LAB_00496e2c
// 00496e2f: FADD float ptr [EBP + 0x18]
// 00496e32: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00496e36: FSUB float ptr [EAX + 0x10]
// 00496e39: FSUB float ptr [EBP + 0x20]
// 00496e3c: FLD1
// 00496e3e: FDIV float ptr [EAX + 0x28]
// 00496e41: FLD float ptr [EBP + 0x10]
// 00496e44: JMP 0x00496cfd
//   XREF to: 00496cfd (UNCONDITIONAL_JUMP)
// 00496e49: FLD float ptr [EBP + 0x14]
//   Label: LAB_00496e49
// 00496e4c: FADD float ptr [EBP + 0x1c]
// 00496e4f: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00496e53: FSUB float ptr [EAX + 0x18]
// 00496e56: FSUB float ptr [EBP + 0x20]
// 00496e59: FLD1
// 00496e5b: FDIV float ptr [EAX + 0x30]
// 00496e5e: FLD float ptr [EBP + 0x14]
// 00496e61: JMP 0x00496d7c
//   XREF to: 00496d7c (UNCONDITIONAL_JUMP)
