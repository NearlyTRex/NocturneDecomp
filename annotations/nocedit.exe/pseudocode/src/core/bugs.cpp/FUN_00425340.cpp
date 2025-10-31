// Name: core_bugs.cpp_FUN_00425340
// Address: 00425340
// Address Range: [[00425340, 004254aa]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425340()
// Globals:
//   double DOUBLE_00616d2b = 0.25
//   undefined4 DAT_0065b5b0
//   undefined4 DAT_0065b5c8
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_FUN_00425340(void)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  float fVar4;
  CVector3i local_3c;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int iStack_14;
  
  local_28 = 0;
  local_2c = in_stack_00000004;
  do {
    fVar4 = (float)local_28 * _DAT_0065b5c8 + *(float *)(in_stack_00000004 + 0x199ec);
    local_1c = local_28 * 0x30;
    iVar1 = 0;
    iVar3 = local_2c;
    do {
      local_3c.x = (int)ROUND(fVar4 * _DAT_0065b5b0);
      local_3c.y = (int)ROUND((*(float *)(iVar3 + 0x128b8) + (float)DOUBLE_00616d2b) * _DAT_0065b5b0
                             );
      local_3c.z = (int)ROUND(((float)iVar1 * _DAT_0065b5c8 +
                              *(float *)(in_stack_00000004 + 0x199f0)) * _DAT_0065b5b0);
      local_18 = iVar1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 local_1c),&local_3c);
      iVar3 = iVar3 + 4;
      local_18 = local_18 + 0x240;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    local_24 = local_24 + 1;
    local_28 = local_28 + 0x30;
  } while (local_24 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,-1);
  local_1c = 0xc;
  do {
    local_18 = local_1c;
    iVar2 = 1;
    iVar3 = local_1c;
    iVar1 = local_1c + -0xb;
    do {
      local_28 = local_18 + iVar2;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,local_28,iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,local_24,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar2 < 0xc);
    iStack_14 = iStack_14 + 0xc;
  } while (iStack_14 != 0x90);
  return;
}


// Assembly code:
// 00425340: PUSH EBX
//   Label: core_bugs.cpp_FUN_00425340
// 00425341: PUSH ESI
// 00425342: PUSH EDI
// 00425343: PUSH EBP
// 00425344: MOV EBP,ESP
// 00425346: SUB ESP,0x34
// 00425349: AND ESP,0xfffffff8
// 0042534c: XOR EDX,EDX
// 0042534e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00425351: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00425355: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00425359: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00425359
//   XREF to: Stack[-0x28] (READ)
// 0042535d: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00425361: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 00425365: FMUL float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 0042536b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042536e: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 00425372: FADD float ptr [EAX + 0x199ec]
// 00425378: IMUL EAX,ECX,0x30
// 0042537b: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0042537f: XOR ESI,ESI
// 00425381: FSTP float ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 00425384: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00425388: MOV dword ptr [ESP + 0x30],ESI
//   Label: LAB_00425388
//   XREF to: Stack[-0x18] (WRITE)
// 0042538c: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 00425390: FMUL float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 00425396: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00425399: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x3c] (DATA)
// 0042539d: FADD float ptr [EAX + 0x199f0]
// 004253a3: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004253a9: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 004253ad: FLD float ptr [EDI + 0x128b8]
// 004253b3: FADD double ptr [0x00616d2b]
//   XREF to: 00616d2b (READ)
// 004253b9: MOV EAX,ESP
// 004253bb: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (WRITE)
// 004253bf: FLD float ptr [EAX]
//   XREF to: Stack[-0x48] (DATA)
// 004253c1: FMUL float ptr [0x0065b5b0]
//   XREF to: 0065b5b0 (READ)
// 004253c7: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x3c] (DATA)
// 004253c9: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 004253cc: FMUL float ptr [0x0065b5b0]
//   XREF to: 0065b5b0 (READ)
// 004253d2: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x38] (WRITE)
// 004253d5: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 004253d8: FMUL float ptr [0x0065b5b0]
//   XREF to: 0065b5b0 (READ)
// 004253de: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 004253e1: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3c] (DATA)
// 004253e5: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 004253e9: PUSH EAX
// 004253ea: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004253ec: ADD EAX,EBX
// 004253ee: PUSH EAX
// 004253ef: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004253f4: ADD ESP,0x8
// 004253f7: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 004253fb: ADD EDI,0x4
// 004253fe: ADD EAX,0x240
// 00425403: INC ESI
// 00425404: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00425408: CMP ESI,0xc
// 0042540b: JL 0x00425388
//   XREF to: 00425388 (CONDITIONAL_JUMP)
// 00425411: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 00425415: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00425419: INC ECX
// 0042541a: ADD EDX,0x30
// 0042541d: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00425421: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00425425: CMP ECX,0xc
// 00425428: JL 0x00425359
//   XREF to: 00425359 (CONDITIONAL_JUMP)
// 0042542e: PUSH -0x1
// 00425430: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00425436: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00425437: MOV EDI,0xc
// 0042543c: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 00425441: ADD ESP,0x8
// 00425444: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00425448: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00425448
//   XREF to: Stack[-0x24] (READ)
// 0042544c: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00425450: LEA EDI,[EAX + -0xb]
// 00425453: MOV ESI,0x1
// 00425458: MOV EBX,EAX
// 0042545a: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0042545a
//   XREF to: Stack[-0x20] (READ)
// 0042545e: PUSH EBX
// 0042545f: ADD EAX,ESI
// 00425461: PUSH EAX
// 00425462: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00425468: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00425469: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0042546d: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00425472: ADD ESP,0xc
// 00425475: PUSH EDI
// 00425476: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 0042547a: PUSH ECX
// 0042547b: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00425480: INC EBX
// 00425481: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00425482: INC ESI
// 00425483: INC EDI
// 00425484: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00425489: ADD ESP,0xc
// 0042548c: CMP ESI,0xc
// 0042548f: JL 0x0042545a
//   XREF to: 0042545a (CONDITIONAL_JUMP)
// 00425491: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (READ)
// 00425495: ADD EDX,0xc
// 00425498: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0042549c: CMP EDX,0x90
// 004254a2: JNZ 0x00425448
//   XREF to: 00425448 (CONDITIONAL_JUMP)
// 004254a4: MOV ESP,EBP
// 004254a6: POP EBP
// 004254a7: POP EDI
// 004254a8: POP ESI
// 004254a9: POP EBX
// 004254aa: RET
