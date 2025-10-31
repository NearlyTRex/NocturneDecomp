// Name: core_boxactor.cpp_FUN_00422390
// Address: 00422390
// Address Range: [[00422390, 004224a5]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422390()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d35e4 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc4cc [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00616797 = 1.01000000000000
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ea0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   core_boxactor.cpp_FUN_004218d0
//   core_boxactor.cpp_FUN_00422590

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_00422390(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_boxactor_cpp_FUN_00422390(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float *in_stack_0000000c;
  undefined1 local_48 [8];
  float local_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_2c;
  CVector3f local_20;
  float fStack_14;
  float fStack_10;
  
  core_actor_cpp_CDemonActor_FUN_00408f10(in_stack_00000004);
  core_actor_cpp_CDemonActor_FUN_00408ea0(in_stack_00000004);
  if (fStack_14 * fStack_38 + local_20.y * local_40 + local_20.z * fStack_3c < 0.0) {
    (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
              (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffa8);
    fVar5 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                      ((CBoundingBox3D *)(local_48 + 4),&CStack_2c,(CVector3f *)&stack0xfffffff8,
                       &local_20);
    local_48 = (undefined1  [8])(double)fVar5;
    if ((0.0 <= (double)local_48) && ((double)local_48 < 1.0)) {
      fVar5 = (float)DOUBLE_00616797 - fVar5;
      fStack_10 = *in_stack_0000000c * fVar5;
      fVar1 = in_stack_0000000c[1];
      fVar2 = in_stack_0000000c[2];
      fVar3 = (in_stack_00000004->location).position.y;
      (in_stack_00000004->location).position.x =
           (in_stack_00000004->location).position.x + fStack_10;
      fVar4 = (in_stack_00000004->location).position.z;
      (in_stack_00000004->location).position.y = fVar3 + fVar1 * fVar5;
      (in_stack_00000004->location).position.z = fVar4 + fVar2 * fVar5;
      core_boxactor_cpp_FUN_004218d0();
      local_48._0_4_ = in_stack_00000004;
      core_boxactor_cpp_FUN_00422590();
      return;
    }
  }
  return;
}


// Assembly code:
// 00422390: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00422390
// 00422391: PUSH ESI
// 00422392: PUSH EBP
// 00422393: MOV EBP,ESP
// 00422395: SUB ESP,0x58
// 00422398: AND ESP,0xfffffff8
// 0042239b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0042239e: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004223a1: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004223a4: PUSH EDX
// 004223a5: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x48] (DATA)
// 004223a9: PUSH EAX
// 004223aa: PUSH EBX
// 004223ab: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004223b0: ADD ESP,0xc
// 004223b3: PUSH ESI
// 004223b4: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x24] (DATA)
// 004223b8: PUSH EAX
// 004223b9: PUSH EBX
// 004223ba: CALL core_actor.cpp_CDemonActor_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 004223bf: ADD ESP,0xc
// 004223c2: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 004223c6: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 004223ca: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 004223ce: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 004223d2: FADDP
// 004223d4: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 004223d8: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 004223dc: FADDP
// 004223de: FLDZ
// 004223e0: FCOMPP
// 004223e2: FNSTSW AX
// 004223e4: SAHF
// 004223e5: JA 0x004223ed
//   XREF to: 004223ed (CONDITIONAL_JUMP)
// 004223e7: MOV ESP,EBP
//   Label: LAB_004223e7
// 004223e9: POP EBP
// 004223ea: POP ESI
// 004223eb: POP EBX
// 004223ec: RET
// 004223ed: LEA EAX,[ESP + 0x8]
//   Label: LAB_004223ed
//   XREF to: Stack[-0x60] (DATA)
// 004223f1: PUSH EAX
// 004223f2: MOV EDX,dword ptr [EBX + 0x154]
// 004223f8: PUSH EBX
// 004223f9: CALL dword ptr [EDX + 0x14]
// 004223fc: ADD ESP,0x8
// 004223ff: LEA EAX,[ESP + 0x2c]
// 00422403: PUSH EAX
// 00422404: LEA EAX,[ESP + 0x48]
// 00422408: PUSH EAX
// 00422409: LEA EAX,[ESP + 0x28]
// 0042240d: PUSH EAX
// 0042240e: LEA EAX,[ESP + 0x14]
// 00422412: PUSH EAX
// 00422413: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 00422418: MOV dword ptr [ESP + 0x64],EAX
// 0042241c: FLD float ptr [ESP + 0x64]
// 00422420: ADD ESP,0x10
// 00422423: FLDZ
// 00422425: FXCH
// 00422427: FSTP double ptr [ESP]
// 0042242a: FCOMP double ptr [ESP]
// 0042242d: FNSTSW AX
// 0042242f: SAHF
// 00422430: JA 0x004223e7
//   XREF to: 004223e7 (CONDITIONAL_JUMP)
// 00422432: FLD1
// 00422434: FCOMP double ptr [ESP]
// 00422437: FNSTSW AX
// 00422439: SAHF
// 0042243a: JBE 0x004223e7
//   XREF to: 004223e7 (CONDITIONAL_JUMP)
// 0042243c: FLD double ptr [0x00616797]
//   XREF to: 00616797 (READ)
// 00422442: FSUB double ptr [ESP]
// 00422445: FLD float ptr [ESI]
// 00422447: FXCH
// 00422449: FSTP float ptr [ESP + 0x50]
// 0042244d: FMUL float ptr [ESP + 0x50]
// 00422451: FSTP float ptr [ESP + 0x38]
// 00422455: FLD float ptr [ESI + 0x4]
// 00422458: FMUL float ptr [ESP + 0x50]
// 0042245c: FSTP float ptr [ESP + 0x3c]
// 00422460: FLD float ptr [ESI + 0x8]
// 00422463: FMUL float ptr [ESP + 0x50]
// 00422467: LEA EAX,[EBX + 0x20]
// 0042246a: FSTP float ptr [ESP + 0x40]
// 0042246e: FLD float ptr [EAX]
// 00422470: FADD float ptr [ESP + 0x38]
// 00422474: FLD float ptr [EAX + 0x4]
// 00422477: FXCH
// 00422479: FSTP float ptr [EAX]
// 0042247b: FADD float ptr [ESP + 0x3c]
// 0042247f: FLD float ptr [EAX + 0x8]
// 00422482: FXCH
// 00422484: FSTP float ptr [EAX + 0x4]
// 00422487: FADD float ptr [ESP + 0x40]
// 0042248b: PUSH EBX
// 0042248c: FSTP float ptr [EAX + 0x8]
// 0042248f: CALL core_boxactor.cpp_FUN_004218d0
//   XREF to: 004218d0 (UNCONDITIONAL_CALL)
// 00422494: ADD ESP,0x4
// 00422497: PUSH EBX
// 00422498: CALL core_boxactor.cpp_FUN_00422590
//   XREF to: 00422590 (UNCONDITIONAL_CALL)
// 0042249d: ADD ESP,0x4
// 004224a0: MOV ESP,EBP
// 004224a2: POP EBP
// 004224a3: POP ESI
// 004224a4: POP EBX
// 004224a5: RET
