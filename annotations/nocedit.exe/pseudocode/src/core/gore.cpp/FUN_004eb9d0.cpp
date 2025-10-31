// Name: core_gore.cpp_FUN_004eb9d0
// Address: 004eb9d0
// Address Range: [[004eb9d0, 004ebab2]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004eb9d0()
// Cross-references:
//   core_gore.cpp_CGore_FUN_004ed7b0 (004ed7b0) at 004ed7fa [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062e2e2 = -65536
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d83368.base.count
//   undefined4 DAT_02d83368.surface_normal.A
//   undefined4 DAT_02d83368.surface_normal.B
//   undefined4 DAT_02d83368.surface_normal.C
//   undefined4 DAT_02d83368.surface_normal.D
//   undefined4 DAT_02d83380
//   undefined4 DAT_02d83384
//   undefined4 DAT_02d83388
//   undefined4 DAT_02d8338c
//   undefined4 DAT_02d83390
//   undefined4 DAT_02d83394
//   undefined4 DAT_02d83398
//   undefined4 DAT_02d8339c
//   undefined4 DAT_02d833a0
//   undefined4 DAT_02d833a4
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004eb9d0() */

double core_gore_cpp_FUN_004eb9d0(void)

{
  undefined4 extraout_EAX;
  int iVar1;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  int aiStackY_ffc [996];
  CVector3i *in_stack_ffffff98;
  int iStack_64;
  undefined4 local_60;
  float fStack_5c;
  float fStack_50;
  float fStack_44;
  int aiStack_3c [10];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar5 = 0;
  DAT_02d83368.base.count = 4;
  DAT_02d83368.surface_normal.A = 0;
  DAT_02d83368.surface_normal.B = 0;
  DAT_02d83368.surface_normal.C = 0;
  DAT_02d83368.surface_normal.D = 0;
  _DAT_02d83380 = 0;
  _DAT_02d83384 = 1;
  _DAT_02d83388 = 2;
  _DAT_02d8338c = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr,in_stack_ffffff98);
  _DAT_02d83390 = uStack_14;
  *(undefined4 *)(&DAT_02d83394 + (uint)bVar5 * -8) = (&uStack_10)[(uint)bVar5 * -2];
  *(undefined4 *)(&DAT_02d83398 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(undefined4 *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  _DAT_02d83394 = 0;
  pCVar2 = &(g_CurrentSceneCamera->base).rotation_matrix;
  piVar3 = aiStack_3c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = pCVar2->m[0][0];
    pCVar2 = (CMatrix3x3i *)((int)pCVar2 + (uint)bVar5 * -8 + 4);
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  piVar3 = aiStack_3c;
  piVar4 = &stack0xffffff9c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  fVar6 = (float10)DOUBLE_0062e2e2;
  fVar7 = (float10)fStack_5c * fVar6;
  fVar8 = (float10)fStack_50 * fVar6;
  fVar6 = (float10)fStack_44 * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  iStack_64 = 0x4eba8f;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  local_60 = 0x4eba96;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  _DAT_02d8339c = (int)ROUND(fVar7);
  _DAT_02d833a0 = (int)ROUND(fVar8);
  _DAT_02d833a4 = (int)ROUND(fVar6);
  return dVar9;
}


// Assembly code:
// 004eb9d0: PUSH EBX
//   Label: core_gore.cpp_FUN_004eb9d0
// 004eb9d1: PUSH ESI
// 004eb9d2: PUSH EDI
// 004eb9d3: SUB ESP,0x5c
// 004eb9d6: MOV EDX,0x4
// 004eb9db: MOV EAX,0x1
// 004eb9e0: LEA ESI,[ESP + 0x50]
//   XREF to: Stack[-0x18] (DATA)
// 004eb9e4: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004eb9ea: MOV EDI,0x2d83390
//   XREF to: 02d83390 (DATA)
// 004eb9ef: XOR ECX,ECX
// 004eb9f1: MOV dword ptr [0x02d8336c],EDX
//   XREF to: 02d8336c (WRITE)
// 004eb9f7: MOV dword ptr [0x02d83370],ECX
//   XREF to: 02d83370 (WRITE)
// 004eb9fd: MOV dword ptr [0x02d83374],ECX
//   XREF to: 02d83374 (WRITE)
// 004eba03: MOV dword ptr [0x02d83378],ECX
//   XREF to: 02d83378 (WRITE)
// 004eba09: MOV dword ptr [0x02d8337c],ECX
//   XREF to: 02d8337c (WRITE)
// 004eba0f: MOV dword ptr [0x02d83380],ECX
//   XREF to: 02d83380 (WRITE)
// 004eba15: MOV [0x02d83384],EAX
//   XREF to: 02d83384 (WRITE)
// 004eba1a: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004eba1b: MOV EDX,0x2
// 004eba20: MOV ECX,0x3
// 004eba25: MOV dword ptr [0x02d83388],EDX
//   XREF to: 02d83388 (WRITE)
// 004eba2b: MOV dword ptr [0x02d8338c],ECX
//   XREF to: 02d8338c (WRITE)
// 004eba31: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)
// 004eba36: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x18] (DATA)
// 004eba3a: ADD ESP,0x4
// 004eba3d: MOVSD ES:EDI,ESI
//   XREF to: 02d83390 (WRITE)
// 004eba3e: MOVSD ES:EDI,ESI
//   XREF to: 02d83394 (WRITE)
// 004eba3f: MOVSD ES:EDI,ESI
//   XREF to: 02d83398 (WRITE)
// 004eba40: XOR ESI,ESI
// 004eba42: MOV dword ptr [0x02d83394],ESI
//   XREF to: 02d83394 (WRITE)
// 004eba48: MOV ESI,dword ptr [0x00823a74]
//   XREF to: 00823a74 (READ)
// 004eba4e: MOV ECX,0xa
// 004eba53: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x40] (DATA)
// 004eba57: LEA ESI,[ESI + 0x10]
// 004eba5a: MOVSD.REP ES:EDI,ESI
// 004eba5c: MOV ECX,0xa
// 004eba61: MOV EDI,ESP
// 004eba63: LEA ESI,[ESP + 0x28]
//   XREF to: Stack[-0x40] (DATA)
// 004eba67: MOVSD.REP ES:EDI,ESI
// 004eba69: FLD double ptr [0x0062e2e2]
//   XREF to: 0062e2e2 (READ)
// 004eba6f: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 004eba73: FMUL ST1
// 004eba75: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 004eba79: FMUL ST2
// 004eba7b: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 004eba7f: FMULP ST3
// 004eba81: FXCH
// 004eba83: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004eba88: FXCH
// 004eba8a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004eba8f: FXCH ST2
// 004eba91: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004eba96: FXCH
// 004eba98: FISTP dword ptr [0x02d8339c]
//   XREF to: 02d8339c (WRITE)
// 004eba9e: FXCH
// 004ebaa0: FISTP dword ptr [0x02d833a0]
//   XREF to: 02d833a0 (WRITE)
// 004ebaa6: FISTP dword ptr [0x02d833a4]
//   XREF to: 02d833a4 (WRITE)
// 004ebaac: ADD ESP,0x5c
// 004ebaaf: POP EDI
// 004ebab0: POP ESI
// 004ebab1: POP EBX
// 004ebab2: RET
