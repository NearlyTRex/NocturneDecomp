// Name: core_fire.cpp_FUN_004c24d0
// Address: 004c24d0
// Address Range: [[004c24d0, 004c25b7]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c24d0()
// Cross-references:
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c2e1d [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00629d03 = 0.00390625
//   double DOUBLE_00629d0b = 0.0000152587890625
//   float FLOAT_00629d13 = 0.2000000
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_ProjectionScale = 0x10000
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
// Function calls:
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

float core_fire_cpp_FUN_004c24d0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_00000004;
  float in_stack_0000000c;
  CVector3i local_34;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = in_stack_00000004;
  local_34.x = (int)ROUND(FLOAT_0065dca8 * 0.0);
  local_34.y = (int)ROUND(FLOAT_0065dca8 * 0.0);
  local_34.z = (int)ROUND(in_stack_00000004 * FLOAT_0065dca8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_34);
  fVar2 = (float)DOUBLE_00629d0b;
  fVar1 = (((float)(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_z *
           (float)DOUBLE_00629d03) / ((float)g_ProjectionScale * fVar2)) * FLOAT_00629d13;
  fVar3 = ABS(fVar1 / ((float)g_ViewportCenterXFixed * fVar2));
  fVar1 = ABS(fVar1 / ((float)g_ViewportCenterYFixed * fVar2));
  if (in_stack_0000000c < fVar3) {
    in_stack_0000000c = fVar3;
  }
  if (fVar1 <= in_stack_0000000c) {
    return in_stack_0000000c;
  }
  return fVar1;
}


// Assembly code:
// 004c24d0: PUSH EBX
//   Label: core_fire.cpp_FUN_004c24d0
// 004c24d1: SUB ESP,0x30
// 004c24d4: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 004c24d8: XOR EDX,EDX
// 004c24da: MOV EBX,ESP
// 004c24dc: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004c24e0: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004c24e4: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004c24e8: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x28] (DATA)
// 004c24ec: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c24f2: FLD float ptr [EAX]
//   XREF to: Stack[-0x28] (DATA)
// 004c24f4: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c24fa: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 004c24fc: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 004c24ff: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2505: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 004c2508: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004c250b: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2511: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x2c] (WRITE)
// 004c2514: MOV EAX,ESP
// 004c2516: PUSH EAX
// 004c2517: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2519: PUSH EAX
// 004c251a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c251f: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2524: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c2526: FILD dword ptr [EAX + 0x8]
// 004c2529: FMUL double ptr [0x00629d03]
//   XREF to: 00629d03 (READ)
// 004c252f: FLD double ptr [0x00629d0b]
//   XREF to: 00629d0b (READ)
// 004c2535: FILD dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 004c253b: FMUL ST1
// 004c253d: FDIVP ST2,ST0
// 004c253f: FILD dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 004c2545: FMUL ST1
// 004c2547: ADD ESP,0x8
// 004c254a: FXCH ST2
// 004c254c: FMUL float ptr [0x00629d13]
//   XREF to: 00629d13 (READ)
// 004c2552: FXCH ST2
// 004c2554: FDIVR ST0,ST2
// 004c2556: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 004c255a: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 004c255e: FABS
// 004c2560: FILD dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 004c2566: FMULP ST2
// 004c2568: FXCH
// 004c256a: FDIVP ST2,ST0
// 004c256c: FXCH
// 004c256e: FABS
// 004c2570: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 004c2574: FXCH ST2
// 004c2576: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (WRITE)
// 004c257a: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (WRITE)
// 004c257e: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (READ)
// 004c2582: FNSTSW AX
// 004c2584: SAHF
// 004c2585: JC 0x004c259d
//   XREF to: 004c259d (CONDITIONAL_JUMP)
// 004c2587: FLD float ptr [ESP + 0x2c]
//   Label: LAB_004c2587
//   XREF to: Stack[-0x8] (READ)
// 004c258b: FCOMP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 004c258f: FNSTSW AX
// 004c2591: SAHF
// 004c2592: JC 0x004c25a7
//   XREF to: 004c25a7 (CONDITIONAL_JUMP)
// 004c2594: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x8] (READ)
// 004c2598: ADD ESP,0x30
// 004c259b: POP EBX
// 004c259c: RET
// 004c259d: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_004c259d
//   XREF to: Stack[-0xc] (READ)
// 004c25a1: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 004c25a5: JMP 0x004c2587
//   XREF to: 004c2587 (UNCONDITIONAL_JUMP)
// 004c25a7: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_004c25a7
//   XREF to: Stack[-0x10] (READ)
// 004c25ab: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 004c25af: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x8] (READ)
// 004c25b3: ADD ESP,0x30
// 004c25b6: POP EBX
// 004c25b7: RET
