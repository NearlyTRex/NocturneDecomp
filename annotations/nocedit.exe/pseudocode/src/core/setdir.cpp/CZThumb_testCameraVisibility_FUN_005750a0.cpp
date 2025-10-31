// Name: core_setdir.cpp_CZThumb_testCameraVisibility_FUN_005750a0
// Address: 005750a0
// Address Range: [[005750a0, 005751c8]]
// Convention: __cdecl
// Signature: float core_setdir.cpp_CZThumb_testCameraVisibility_FUN_005750a0(CZThumb * this_ptr)
// Globals:
//   float g_VDCameraDistanceRadius = 200
//   CZThumb[1500] g_CZThumbPool
// Function calls:
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
//   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970

#include "nocturne.h"

float __cdecl core_setdir_cpp_CZThumb_testCameraVisibility_FUN_005750a0(CZThumb *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CZThumb *this_ptr_00;
  CVector3i *in_stack_0000000c;
  C3DSCamera *in_stack_00000014;
  float in_stack_00000018;
  float fStack_1c;
  
  if ((in_stack_00000014->field17_0x1a0 != 0) &&
     (fVar3 = (in_stack_00000014->position).x - (float)this_ptr->projection_scale,
     fVar2 = (in_stack_00000014->position).y - (float)this_ptr->zbuffer_data,
     fVar1 = (in_stack_00000014->position).z - (float)this_ptr[1].width,
     fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 <=
     g_VDCameraDistanceRadius * g_VDCameraDistanceRadius)) {
    fStack_1c = (float)core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
                                 (in_stack_00000014,(CVector3f *)&this_ptr->projection_scale,
                                  in_stack_00000018);
    if (fStack_1c != 0.0) {
      this_ptr_00 = g_CZThumbPool + (int)in_stack_00000014 * 6;
      if (*(int *)((int)in_stack_00000018 + 0x140) == 0) {
        fVar3 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                          (this_ptr_00,(CDemonActor *)this_ptr,in_stack_0000000c,
                           (SMRGLHeaderPrimitive *)in_stack_0000000c,1);
        return fVar3;
      }
      fStack_1c = 0.0;
      do {
        fVar3 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                          (this_ptr_00,(CDemonActor *)this_ptr,in_stack_0000000c,
                           (SMRGLHeaderPrimitive *)in_stack_0000000c,0);
        fStack_1c = fVar3 + fStack_1c;
        this_ptr_00 = this_ptr_00 + 1;
      } while (this_ptr_00 != g_CZThumbPool + (int)in_stack_00000014 * 6 + 6);
    }
    return fStack_1c;
  }
  return 0.0;
}


// Assembly code:
// 005750a0: PUSH EBX
//   Label: core_setdir.cpp_CZThumb_testCameraVisibility_FUN_005750a0
// 005750a1: PUSH ESI
// 005750a2: PUSH EDI
// 005750a3: PUSH EBP
// 005750a4: SUB ESP,0x18
// 005750a7: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005750ab: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 005750af: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 005750b3: MOV EDX,dword ptr [EAX + 0x1a0]
// 005750b9: TEST EDX,EDX
// 005750bb: JZ 0x0057510f
//   XREF to: 0057510f (CONDITIONAL_JUMP)
// 005750bd: MOV EDI,EAX
// 005750bf: LEA EBX,[ESI + 0x20]
// 005750c2: FLD float ptr [EDI + 0x100]
// 005750c8: FSUB float ptr [EBX]
// 005750ca: FMUL ST0
// 005750cc: FLD float ptr [EDI + 0x104]
// 005750d2: FSUB float ptr [EBX + 0x4]
// 005750d5: FMUL ST0
// 005750d7: FLD float ptr [EDI + 0x108]
// 005750dd: FXCH
// 005750df: FADDP ST2,ST0
// 005750e1: FSUB float ptr [EBX + 0x8]
// 005750e4: FMUL ST0
// 005750e6: FLD float ptr [0x006629d4]
//   XREF to: 006629d4 (READ)
// 005750ec: FLD ST0
// 005750ee: FXCH ST2
// 005750f0: FADDP ST3,ST0
// 005750f2: FMULP
// 005750f4: FXCH
// 005750f6: FCOMPP
// 005750f8: FNSTSW AX
// 005750fa: SAHF
// 005750fb: JBE 0x00575115
//   XREF to: 00575115 (CONDITIONAL_JUMP)
// 005750fd: XOR ESI,ESI
// 005750ff: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00575103: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00575103
//   XREF to: Stack[-0x24] (READ)
// 00575107: ADD ESP,0x18
// 0057510a: POP EBP
// 0057510b: POP EDI
// 0057510c: POP ESI
// 0057510d: POP EBX
// 0057510e: RET
// 0057510f: MOV dword ptr [ESP + 0x4],EDX
//   Label: LAB_0057510f
//   XREF to: Stack[-0x24] (WRITE)
// 00575113: JMP 0x00575103
//   XREF to: 00575103 (UNCONDITIONAL_JUMP)
// 00575115: PUSH dword ptr [ESP + 0x40]
//   Label: LAB_00575115
//   XREF to: Stack[0x18] (READ)
// 00575119: PUSH EBX
// 0057511a: MOV EBX,EDI
// 0057511c: PUSH EBX
// 0057511d: CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
//   XREF to: 00585970 (UNCONDITIONAL_CALL)
// 00575122: ADD ESP,0xc
// 00575125: TEST EAX,EAX
// 00575127: JZ 0x00575187
//   XREF to: 00575187 (CONDITIONAL_JUMP)
// 00575129: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 0057512d: SHL EBX,0x4
// 00575130: MOV EDI,EBX
// 00575132: SHL EBX,0x4
// 00575135: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 00575139: SUB EBX,EDI
// 0057513b: MOV EDI,0x3347108
//   XREF to: 03347108 (DATA)
// 00575140: MOV EDX,dword ptr [EAX + 0x140]
// 00575146: ADD EDI,EBX
// 00575148: TEST EDX,EDX
// 0057514a: JZ 0x00575197
//   XREF to: 00575197 (CONDITIONAL_JUMP)
// 0057514c: XOR EBX,EBX
// 0057514e: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00575152: MOV EBX,EDI
// 00575154: ADD EDI,0xf0
// 0057515a: PUSH 0x0
//   Label: LAB_0057515a
// 0057515c: PUSH EBP
// 0057515d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 00575161: PUSH EAX
// 00575162: PUSH ESI
// 00575163: PUSH EBX
// 00575164: CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
//   XREF to: 00574ba0 (UNCONDITIONAL_CALL)
// 00575169: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0057516d: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 00575171: ADD ESP,0x14
// 00575174: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00575178: ADD EBX,0x28
// 0057517b: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0057517f: CMP EBX,EDI
// 00575181: JNZ 0x0057515a
//   XREF to: 0057515a (CONDITIONAL_JUMP)
// 00575183: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00575187: MOV dword ptr [ESP + 0x4],EAX
//   Label: LAB_00575187
//   XREF to: Stack[-0x24] (WRITE)
// 0057518b: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0057518f: ADD ESP,0x18
// 00575192: POP EBP
// 00575193: POP EDI
// 00575194: POP ESI
// 00575195: POP EBX
// 00575196: RET
// 00575197: PUSH 0x1
//   Label: LAB_00575197
// 00575199: PUSH EBP
// 0057519a: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0057519e: PUSH ECX
// 0057519f: PUSH ESI
// 005751a0: PUSH EDI
// 005751a1: CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
//   XREF to: 00574ba0 (UNCONDITIONAL_CALL)
// 005751a6: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005751aa: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005751ae: ADD ESP,0x14
// 005751b1: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 005751b5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005751b9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005751bd: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 005751c1: ADD ESP,0x18
// 005751c4: POP EBP
// 005751c5: POP EDI
// 005751c6: POP ESI
// 005751c7: POP EBX
// 005751c8: RET
