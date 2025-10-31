// Name: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
// Address: 00496950
// Address Range: [[00496950, 00496b81]]
// Convention: __cdecl
// Signature: float core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace * this_ptr, CVector3f * pos, float radius, int * hit_flag, CVector3f * normal_out)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00571954 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00622b72 = 2
//   float FLOAT_00622b76 = -10
// Function calls:
//   core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
          (CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

{
  float fVar1;
  bool bVar2;
  int grid_z;
  CDemonCube *this_ptr_00;
  int iVar3;
  int extraout_ECX;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int unaff_retaddr;
  float *in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 local_40;
  CVector3f local_3c;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  CVector3f local_20;
  uint local_14;
  
  fVar4 = (float10)pos->y + (float10)FLOAT_00622b72;
  fVar1 = 1.0 / (this_ptr->cell_size).y;
  fVar5 = (float10)pos->x - (float10)(this_ptr->bbox_min).x;
  local_3c.y = (float)fVar5;
  fVar6 = (float10)1 / (float10)(this_ptr->cell_size).x;
  fVar7 = (float10)pos->z - (float10)(this_ptr->bbox_min).z;
  local_3c.z = (float)fVar7;
  local_2c = 1.0 / (this_ptr->cell_size).z;
  fVar8 = (fVar4 - (float10)(this_ptr->bbox_min).y) * (float10)fVar1;
  fVar9 = ((float10)(pos->y + FLOAT_00622b76) - (float10)(this_ptr->bbox_min).y) * (float10)fVar1;
  fVar5 = (fVar5 - (float10)radius) * fVar6;
  fVar7 = (fVar7 - (float10)radius) * (float10)local_2c;
  fVar6 = ((float10)local_3c.y + (float10)radius) * fVar6;
  fVar10 = ((float10)local_3c.z + (float10)radius) * (float10)local_2c;
  bVar2 = false;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(0xf149f2ca,pos->z));
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  local_3c.z = (float)((ulonglong)dVar11 >> 0x20);
  local_20.y = (float)(int)ROUND(fVar9);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(local_3c.z,(int)ROUND(fVar8)));
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  local_28 = (float)(int)ROUND(fVar5);
  fVar1 = local_28;
  if (extraout_ECX <= SUB84(dVar11,0)) {
    do {
      for (; grid_z = (int)ROUND(fVar7), (int)fVar1 <= (int)ROUND(fVar6);
          fVar1 = (float)((int)fVar1 + 1)) {
        for (; grid_z <= (int)ROUND(fVar10); grid_z = grid_z + 1) {
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr,(int)fVar1,unaff_retaddr,grid_z);
          if ((this_ptr_00 != (CDemonCube *)0x0) &&
             (iVar3 = core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
                                (this_ptr_00,(CVector3f *)&local_30,(float)in_stack_00000028,
                                 &local_20,&local_3c,&local_14), iVar3 != 0)) {
            bVar2 = true;
          }
        }
      }
      if (bVar2) {
        if ((in_stack_0000002c != (undefined4 *)0x0) && (&local_40 != in_stack_0000002c)) {
          *in_stack_0000002c = local_40;
          in_stack_0000002c[1] = local_3c.x;
          in_stack_0000002c[2] = local_3c.y;
        }
        if (in_stack_00000028 != (float *)0x0) {
          *in_stack_00000028 = local_20.z;
        }
        return local_24;
      }
      unaff_retaddr = unaff_retaddr + -1;
      fVar1 = local_28;
    } while (unaff_EDI <= unaff_retaddr);
  }
  if (in_stack_00000028 != (float *)0x0) {
    *in_stack_00000028 = 1.4013e-45;
  }
  if (in_stack_0000002c != (undefined4 *)0x0) {
    in_stack_0000002c[1] = 0x3f800000;
    in_stack_0000002c[2] = 0;
    *in_stack_0000002c = 0;
  }
  return (float)fVar4;
}


// Assembly code:
// 00496950: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
// 00496951: PUSH ESI
// 00496952: PUSH EDI
// 00496953: PUSH EBP
// 00496954: SUB ESP,0x54
// 00496957: MOV EBP,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 0049695b: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x8] (READ)
// 0049695f: MOV EAX,dword ptr [ESI]
// 00496961: LEA EBX,[ESI + 0x4]
// 00496964: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00496968: MOV EAX,dword ptr [EBX]
// 0049696a: LEA EDX,[ESI + 0x8]
// 0049696d: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00496971: MOV EAX,dword ptr [EDX]
// 00496973: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00496977: MOV EAX,dword ptr [ESI]
// 00496979: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x64] (DATA)
// 0049697c: MOV EAX,dword ptr [EBX]
// 0049697e: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x48] (READ)
// 00496982: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00496986: FADD float ptr [0x00622b72]
//   XREF to: 00622b72 (READ)
// 0049698c: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x60] (READ)
// 00496990: MOV EAX,dword ptr [EDX]
// 00496992: FXCH
// 00496994: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x48] (WRITE)
// 00496998: FXCH
// 0049699a: FADD float ptr [0x00622b76]
//   XREF to: 00622b76 (READ)
// 004969a0: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004969a4: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x60] (WRITE)
// 004969a8: FSUB float ptr [EBP + 0x14]
// 004969ab: FLD1
// 004969ad: FDIV float ptr [EBP + 0x2c]
// 004969b0: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x4c] (READ)
// 004969b4: FSUB float ptr [EBP + 0x10]
// 004969b7: FST float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x38] (WRITE)
// 004969bb: FSUB float ptr [ESP + 0x70]
//   XREF to: Stack[0xc] (READ)
// 004969bf: FLD1
// 004969c1: FDIV float ptr [EBP + 0x28]
// 004969c4: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x44] (READ)
// 004969c8: FSUB float ptr [EBP + 0x18]
// 004969cb: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x34] (WRITE)
// 004969cf: FSUB float ptr [ESP + 0x70]
//   XREF to: Stack[0xc] (READ)
// 004969d3: FLD1
// 004969d5: FDIV float ptr [EBP + 0x30]
// 004969d8: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x60] (READ)
// 004969dc: FSUB float ptr [EBP + 0x14]
// 004969df: FXCH ST5
// 004969e1: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x2c] (WRITE)
// 004969e5: FXCH ST5
// 004969e7: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x2c] (READ)
// 004969eb: FXCH ST4
// 004969ed: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x2c] (READ)
// 004969f1: FXCH ST3
// 004969f3: FMUL ST2
// 004969f5: FXCH ST5
// 004969f7: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x2c] (WRITE)
// 004969fb: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x2c] (READ)
// 004969ff: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x38] (READ)
// 00496a03: FADD float ptr [ESP + 0x70]
//   XREF to: Stack[0xc] (READ)
// 00496a07: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x34] (READ)
// 00496a0b: FADD float ptr [ESP + 0x70]
//   XREF to: Stack[0xc] (READ)
// 00496a0f: FXCH
// 00496a11: FMULP ST3
// 00496a13: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x2c] (READ)
// 00496a17: XOR EDI,EDI
// 00496a19: MOV EDX,0xf149f2ca
// 00496a1e: FXCH ST4
// 00496a20: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496a25: FXCH ST3
// 00496a27: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496a2c: FXCH ST3
// 00496a2e: FISTP dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x18] (WRITE)
// 00496a32: FXCH ST2
// 00496a34: FISTP dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x24] (WRITE)
// 00496a38: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00496a3c: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x18] (READ)
// 00496a40: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x24] (READ)
// 00496a44: FXCH ST3
// 00496a46: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496a4b: FXCH
// 00496a4d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496a52: FXCH ST3
// 00496a54: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496a59: FXCH ST2
// 00496a5b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00496a60: FXCH
// 00496a62: FISTP dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x40] (WRITE)
// 00496a66: FXCH ST2
// 00496a68: FISTP dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x1c] (WRITE)
// 00496a6c: FISTP dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x20] (WRITE)
// 00496a70: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x14] (WRITE)
// 00496a74: CMP EAX,ECX
// 00496a76: JL 0x00496b43
//   XREF to: 00496b43 (CONDITIONAL_JUMP)
// 00496a7c: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_00496a7c
//   XREF to: Stack[-0x20] (READ)
// 00496a80: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x40] (READ)
// 00496a84: CMP ESI,EDX
// 00496a86: JG 0x00496ae4
//   XREF to: 00496ae4 (CONDITIONAL_JUMP)
// 00496a88: MOV EDX,dword ptr [ESP + 0x50]
//   Label: LAB_00496a88
//   XREF to: Stack[-0x14] (READ)
// 00496a8c: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x1c] (READ)
// 00496a90: CMP EBX,EDX
// 00496a92: JG 0x00496adb
//   XREF to: 00496adb (CONDITIONAL_JUMP)
// 00496a94: PUSH EBX
//   Label: LAB_00496a94
// 00496a95: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 00496a99: PUSH EAX
// 00496a9a: PUSH ESI
// 00496a9b: PUSH EBP
// 00496a9c: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 00496aa1: ADD ESP,0x10
// 00496aa4: TEST EAX,EAX
// 00496aa6: JZ 0x00496ad2
//   XREF to: 00496ad2 (CONDITIONAL_JUMP)
// 00496aa8: LEA EDX,[ESP + 0x34]
//   XREF to: Stack[-0x30] (DATA)
// 00496aac: PUSH EDX
// 00496aad: LEA EDX,[ESP + 0x10]
//   XREF to: Stack[-0x58] (DATA)
// 00496ab1: PUSH EDX
// 00496ab2: LEA EDX,[ESP + 0x30]
//   XREF to: Stack[-0x3c] (DATA)
// 00496ab6: PUSH EDX
// 00496ab7: LEA EDX,[ESP + 0x24]
//   XREF to: Stack[-0x4c] (DATA)
// 00496abb: PUSH dword ptr [ESP + 0x7c]
//   XREF to: Stack[0xc] (READ)
// 00496abf: PUSH EDX
// 00496ac0: PUSH EAX
// 00496ac1: CALL core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
//   XREF to: 00457b60 (UNCONDITIONAL_CALL)
// 00496ac6: ADD ESP,0x18
// 00496ac9: TEST EAX,EAX
// 00496acb: JZ 0x00496ad2
//   XREF to: 00496ad2 (CONDITIONAL_JUMP)
// 00496acd: MOV EDI,0x1
// 00496ad2: MOV ECX,dword ptr [ESP + 0x50]
//   Label: LAB_00496ad2
//   XREF to: Stack[-0x14] (READ)
// 00496ad6: INC EBX
// 00496ad7: CMP EBX,ECX
// 00496ad9: JLE 0x00496a94
//   XREF to: 00496a94 (CONDITIONAL_JUMP)
// 00496adb: MOV ECX,dword ptr [ESP + 0x44]
//   Label: LAB_00496adb
//   XREF to: Stack[-0x20] (READ)
// 00496adf: INC ESI
// 00496ae0: CMP ESI,ECX
// 00496ae2: JLE 0x00496a88
//   XREF to: 00496a88 (CONDITIONAL_JUMP)
// 00496ae4: TEST EDI,EDI
//   Label: LAB_00496ae4
// 00496ae6: JZ 0x00496b2e
//   XREF to: 00496b2e (CONDITIONAL_JUMP)
// 00496ae8: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x14] (READ)
// 00496aec: TEST EBX,EBX
// 00496aee: JZ 0x00496b0c
//   XREF to: 00496b0c (CONDITIONAL_JUMP)
// 00496af0: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x58] (DATA)
// 00496af4: CMP EAX,EBX
// 00496af6: JZ 0x00496b0c
//   XREF to: 00496b0c (CONDITIONAL_JUMP)
// 00496af8: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x58] (DATA)
// 00496afc: MOV dword ptr [EBX],EAX
// 00496afe: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x54] (READ)
// 00496b02: MOV dword ptr [EBX + 0x4],EAX
// 00496b05: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x50] (READ)
// 00496b09: MOV dword ptr [EBX + 0x8],EAX
// 00496b0c: MOV EDI,dword ptr [ESP + 0x74]
//   Label: LAB_00496b0c
//   XREF to: Stack[0x10] (READ)
// 00496b10: TEST EDI,EDI
// 00496b12: JZ 0x00496b1a
//   XREF to: 00496b1a (CONDITIONAL_JUMP)
// 00496b14: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x30] (READ)
// 00496b18: MOV dword ptr [EDI],EAX
// 00496b1a: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00496b1a
//   XREF to: Stack[-0x3c] (READ)
// 00496b1e: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00496b22: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x28] (READ)
// 00496b26: ADD ESP,0x54
// 00496b29: POP EBP
// 00496b2a: POP EDI
// 00496b2b: POP ESI
// 00496b2c: POP EBX
// 00496b2d: RET
// 00496b2e: MOV EBX,dword ptr [ESP + 0x4c]
//   Label: LAB_00496b2e
//   XREF to: Stack[-0x18] (READ)
// 00496b32: DEC EBX
// 00496b33: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x24] (READ)
// 00496b37: MOV dword ptr [ESP + 0x4c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00496b3b: CMP EBX,ESI
// 00496b3d: JGE 0x00496a7c
//   XREF to: 00496a7c (CONDITIONAL_JUMP)
// 00496b43: MOV EDI,dword ptr [ESP + 0x74]
//   Label: LAB_00496b43
//   XREF to: Stack[0x10] (READ)
// 00496b47: TEST EDI,EDI
// 00496b49: JZ 0x00496b51
//   XREF to: 00496b51 (CONDITIONAL_JUMP)
// 00496b4b: MOV dword ptr [EDI],0x1
// 00496b51: MOV EBP,dword ptr [ESP + 0x78]
//   Label: LAB_00496b51
//   XREF to: Stack[0x14] (READ)
// 00496b55: TEST EBP,EBP
// 00496b57: JZ 0x00496b6e
//   XREF to: 00496b6e (CONDITIONAL_JUMP)
// 00496b59: MOV dword ptr [EBP + 0x4],0x3f800000
// 00496b60: MOV dword ptr [EBP + 0x8],0x0
// 00496b67: MOV dword ptr [EBP],0x0
// 00496b6e: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00496b6e
//   XREF to: Stack[-0x60] (READ)
// 00496b72: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00496b76: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x28] (READ)
// 00496b7a: ADD ESP,0x54
// 00496b7d: POP EBP
// 00496b7e: POP EDI
// 00496b7f: POP ESI
// 00496b80: POP EBX
// 00496b81: RET
