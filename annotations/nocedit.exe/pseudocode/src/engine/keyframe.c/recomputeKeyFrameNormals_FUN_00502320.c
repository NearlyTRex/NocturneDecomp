// Name: engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320
// Address: 00502320
// Address Range: [[00502320, 0050240f]]
// Convention: __cdecl
// Signature: void engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320(void)
// Globals:
//   TerminatedCString s_engine_keyframe_c_00630d70
//   TerminatedCString s_recomputeKeyFrameNormals_00630d85
//   TerminatedCString s_engine_keyframe_c_00630db0
//   TerminatedCString s_recomputeKeyFrameNormals_00630dc5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
//   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
//   engine_model.c_getMRGLSize_FUN_00528700

#include "nocturne.h"

void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_00502320(void)

{
  int iVar1;
  uint uVar2;
  CVector3i *vertex_data;
  SSurfaceNormal *pSVar3;
  SSurfaceNormal *in_stack_00000004;
  
  vertex_data = (CVector3i *)0x0;
  iVar1 = ((SMRGLHeaderBasic *)&in_stack_00000004->unknown)->type;
  while (pSVar3 = (SSurfaceNormal *)0x0, iVar1 != 0) {
    if (((SMRGLHeaderBasic *)&in_stack_00000004->unknown)->type == 2) {
      vertex_data = (CVector3i *)&in_stack_00000004->normal_y;
    }
    iVar1 = ((SMRGLHeaderBasic *)&in_stack_00000004->unknown)->type;
    pSVar3 = in_stack_00000004;
    if (((iVar1 == 0x18) || (iVar1 == 0x29)) || (iVar1 == 0x19)) break;
    uVar2 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)in_stack_00000004);
    in_stack_00000004 =
         (SSurfaceNormal *)(in_stack_00000004->field7_0x1c + ((uVar2 & 0xfffffffc) - 0x1c));
    iVar1 = ((SMRGLHeaderBasic *)&in_stack_00000004->unknown)->type;
  }
  if (vertex_data == (CVector3i *)0x0) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("recomputeKeyFrameNormals: Cannot find vptr");
  }
  if (pSVar3 == (SSurfaceNormal *)0x0) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("recomputeKeyFrameNormals: Cannot find fptr");
  }
  do {
    uVar2 = in_stack_00000004->unknown;
    if (uVar2 < 0x19) {
      if (uVar2 == 0x18) {
LAB_0050237f:
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,in_stack_00000004);
      }
    }
    else if (uVar2 < 0x1a) {
      engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                (vertex_data,(SSurfacePackedNormal *)in_stack_00000004);
    }
    else if (uVar2 == 0x29) goto LAB_0050237f;
    uVar2 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)in_stack_00000004);
    in_stack_00000004 =
         (SSurfaceNormal *)(in_stack_00000004->field7_0x1c + ((uVar2 & 0xfffffffc) - 0x1c));
    if (in_stack_00000004->unknown == 0) {
      return;
    }
  } while( true );
}


// Assembly code:
// 00502320: PUSH EBX
//   Label: engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320
// 00502321: PUSH ESI
// 00502322: PUSH EDI
// 00502323: PUSH EBP
// 00502324: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00502328: MOV EBX,EAX
// 0050232a: MOV EDX,dword ptr [EAX]
// 0050232c: XOR ESI,ESI
// 0050232e: XOR EDI,EDI
// 00502330: TEST EDX,EDX
// 00502332: JZ 0x00502345
//   XREF to: 00502345 (CONDITIONAL_JUMP)
// 00502334: CMP dword ptr [EBX],0x2
//   Label: LAB_00502334
// 00502337: JNZ 0x0050233c
//   XREF to: 0050233c (CONDITIONAL_JUMP)
// 00502339: LEA ESI,[EBX + 0xc]
// 0050233c: MOV EAX,dword ptr [EBX]
//   Label: LAB_0050233c
// 0050233e: CMP EAX,0x18
// 00502341: JNZ 0x005023a5
//   XREF to: 005023a5 (CONDITIONAL_JUMP)
// 00502343: MOV EDI,EBX
//   Label: LAB_00502343
// 00502345: TEST ESI,ESI
//   Label: LAB_00502345
// 00502347: JNZ 0x0050236b
//   XREF to: 0050236b (CONDITIONAL_JUMP)
// 00502349: MOV EBP,0x630d70
//   XREF to: 00630d70 (DATA)
// 0050234e: MOV EAX,0x1f5
// 00502353: PUSH 0x630d85
//   XREF to: 00630d85 (DATA)
// 00502358: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0050235e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00502363: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00502368: ADD ESP,0x4
// 0050236b: TEST EDI,EDI
//   Label: LAB_0050236b
// 0050236d: JZ 0x005023cf
//   XREF to: 005023cf (CONDITIONAL_JUMP)
// 0050236f: MOV EAX,dword ptr [EBX]
//   Label: LAB_0050236f
// 00502371: CMP EAX,0x19
// 00502374: JNC 0x00502400
//   XREF to: 00502400 (CONDITIONAL_JUMP)
// 0050237a: CMP EAX,0x18
// 0050237d: JNZ 0x00502389
//   XREF to: 00502389 (CONDITIONAL_JUMP)
// 0050237f: PUSH EBX
//   Label: LAB_0050237f
// 00502380: PUSH ESI
// 00502381: CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
//   XREF to: 00501bc0 (UNCONDITIONAL_CALL)
// 00502386: ADD ESP,0x8
//   Label: LAB_00502386
// 00502389: PUSH EBX
//   Label: LAB_00502389
// 0050238a: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 0050238f: SHR EAX,0x2
// 00502392: SHL EAX,0x2
// 00502395: ADD EBX,EAX
// 00502397: MOV EBP,dword ptr [EBX]
// 00502399: ADD ESP,0x4
// 0050239c: TEST EBP,EBP
// 0050239e: JNZ 0x0050236f
//   XREF to: 0050236f (CONDITIONAL_JUMP)
// 005023a0: POP EBP
// 005023a1: POP EDI
// 005023a2: POP ESI
// 005023a3: POP EBX
// 005023a4: RET
// 005023a5: CMP EAX,0x29
//   Label: LAB_005023a5
// 005023a8: JZ 0x00502343
//   XREF to: 00502343 (CONDITIONAL_JUMP)
// 005023aa: CMP EAX,0x19
// 005023ad: JZ 0x00502343
//   XREF to: 00502343 (CONDITIONAL_JUMP)
// 005023af: PUSH EBX
// 005023b0: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 005023b5: SHR EAX,0x2
// 005023b8: SHL EAX,0x2
// 005023bb: ADD EBX,EAX
// 005023bd: MOV ECX,dword ptr [EBX]
// 005023bf: ADD ESP,0x4
// 005023c2: TEST ECX,ECX
// 005023c4: JNZ 0x00502334
//   XREF to: 00502334 (CONDITIONAL_JUMP)
// 005023ca: JMP 0x00502345
//   XREF to: 00502345 (UNCONDITIONAL_JUMP)
// 005023cf: MOV EDX,0x630db0
//   Label: LAB_005023cf
//   XREF to: 00630db0 (PARAM)
// 005023d4: MOV ECX,0x1f6
// 005023d9: PUSH 0x630dc5
//   XREF to: 00630dc5 (DATA)
// 005023de: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005023e4: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005023ea: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005023ef: ADD ESP,0x4
// 005023f2: JMP 0x0050236f
//   XREF to: 0050236f (UNCONDITIONAL_JUMP)
// 005023f7: PUSH EBX
//   Label: LAB_005023f7
// 005023f8: PUSH ESI
// 005023f9: CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
//   XREF to: 00501a00 (UNCONDITIONAL_CALL)
// 005023fe: JMP 0x00502386
//   XREF to: 00502386 (UNCONDITIONAL_JUMP)
// 00502400: JBE 0x005023f7
//   Label: LAB_00502400
//   XREF to: 005023f7 (CONDITIONAL_JUMP)
// 00502402: CMP EAX,0x29
// 00502405: JZ 0x0050237f
//   XREF to: 0050237f (CONDITIONAL_JUMP)
// 0050240b: JMP 0x00502389
//   XREF to: 00502389 (UNCONDITIONAL_JUMP)
