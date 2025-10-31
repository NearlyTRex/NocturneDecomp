// Name: core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
// Address: 004900b0
// Address Range: [[004900b0, 004901ea]]
// Convention: __cdecl
// Signature: void core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0(float * light_color, int u_coord, int v_coord, float * uv_offset)
// Cross-references:
//   core_dskybox.cpp_renderSkyDome_FUN_004901f0 (004901f0) at 0049051c [UNCONDITIONAL_CALL]
// Globals:
//   float g_SkyDomeUCoordToAngleScale = 0.0625
//   double g_SkyDomePiConstant = 3.14159265350000
//   double g_SkyDomeVScale1 = 2
//   float g_SkyDomeVCoordToAngleScale = 0.25
//   double g_SkyDomeVScale2 = 0.5
//   double g_SkyDomeWorldRadius = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   float g_SkyDomeVertexScale = 5
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0
          (float *light_color,int u_coord,int v_coord,float *uv_offset)

{
  float fVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  double dVar4;
  float local_48;
  CVector3i *in_stack_ffffffc0;
  
  if (v_coord == 0) {
    local_48 = 0.019634955;
  }
  else {
    local_48 = (float)v_coord * g_SkyDomeVCoordToAngleScale * (float)g_SkyDomePiConstant *
               (float)g_SkyDomeVScale2;
  }
  fsin((float10)local_48);
  fVar3 = (float10)((float)u_coord * g_SkyDomeUCoordToAngleScale * (float)g_SkyDomePiConstant *
                   (float)g_SkyDomeVScale1) + (float10)light_color[7];
  fsin(fVar3);
  fcos((float10)local_48);
  fcos(fVar3);
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(g_CDemonRendererPtr,&stack0xffffffbc));
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),(int)uv_offset * 3));
  dVar4 = crt_math_c_round_FUN_005fe6b0(dVar4);
  iVar2 = SUB84(dVar4,0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(*(int *)((ulonglong)dVar4 >> 0x20) + iVar2 * 0x10),
             in_stack_ffffffc0);
  fVar1 = *light_color;
  (&g_RenderVertexBuffer[0].light)[iVar2 * 4] = fVar1;
  (&g_RenderVertexBuffer[0].color)[iVar2 * 4] = (int)fVar1;
  (&g_RenderVertexBuffer[0].fog)[iVar2 * 4] = fVar1;
  (&g_RenderVertexBuffer[0].w_recip)[iVar2 * 4] = 0.0;
  return;
}


// Assembly code:
// 004900b0: PUSH EBX
//   Label: core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
// 004900b1: PUSH ESI
// 004900b2: PUSH EDI
// 004900b3: PUSH EBP
// 004900b4: MOV EBP,ESP
// 004900b6: SUB ESP,0x34
// 004900b9: AND ESP,0xfffffff8
// 004900bc: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004900bf: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004900c2: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004900c5: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004900c9: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 004900cd: FMUL float ptr [0x0062253e]
//   XREF to: 0062253e (READ)
// 004900d3: FMUL double ptr [0x00622542]
//   XREF to: 00622542 (READ)
// 004900d9: FMUL double ptr [0x0062254a]
//   XREF to: 0062254a (READ)
// 004900df: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (WRITE)
// 004900e3: TEST EAX,EAX
// 004900e5: JNZ 0x004901c9
//   XREF to: 004901c9 (CONDITIONAL_JUMP)
// 004900eb: MOV dword ptr [ESP],0x3ca0d97c
//   XREF to: Stack[-0x48] (DATA)
// 004900f2: FLD float ptr [ESP]
//   Label: LAB_004900f2
//   XREF to: Stack[-0x48] (DATA)
// 004900f5: FLD ST0
// 004900f7: FSIN
// 004900f9: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 004900fd: FADD float ptr [EDI + 0x1c]
// 00490100: FLD ST0
// 00490102: FSIN
// 00490104: FXCH ST3
// 00490106: FCOS
// 00490108: FXCH
// 0049010a: FCOS
// 0049010c: FLD float ptr [0x00672360]
//   XREF to: 00672360 (READ)
// 00490112: FXCH ST4
// 00490114: FMUL ST4
// 00490116: FXCH ST2
// 00490118: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (WRITE)
// 0049011c: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (READ)
// 00490120: FMUL ST3
// 00490122: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00490126: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (READ)
// 0049012a: FXCH ST2
// 0049012c: FMULP ST3
// 0049012e: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00490132: FLD ST0
// 00490134: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 00490138: FLD ST2
// 0049013a: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 0049013e: FXCH ST4
// 00490140: FLD double ptr [0x00622562]
//   XREF to: 00622562 (READ)
// 00490146: FXCH
// 00490148: FMUL ST1
// 0049014a: FXCH ST2
// 0049014c: FSTP ST3
// 0049014e: FXCH ST2
// 00490150: FMUL ST2
// 00490152: FXCH ST4
// 00490154: FSTP ST3
// 00490156: FXCH ST2
// 00490158: FMULP
// 0049015a: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049015d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x44] (DATA)
// 00490161: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00490167: PUSH EAX
// 00490168: FXCH
// 0049016a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049016f: LEA EAX,[ESI*0x4 + 0x0]
// 00490176: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (WRITE)
// 0049017a: SUB EAX,ESI
// 0049017c: FXCH
// 0049017e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00490183: FXCH
// 00490185: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049018a: FXCH
// 0049018c: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x44] (WRITE)
// 00490190: MOV ESI,EAX
// 00490192: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x3c] (WRITE)
// 00490196: SHL ESI,0x4
// 00490199: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0049019b: ADD EAX,ESI
// 0049019d: PUSH EAX
// 0049019e: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004901a3: MOV EAX,dword ptr [EDI]
// 004901a5: MOV dword ptr [ESI + 0x688034],EAX
//   XREF to: 00688034 (DATA)
// 004901ab: MOV dword ptr [ESI + 0x688038],EAX
//   XREF to: 00688038 (DATA)
// 004901b1: XOR ECX,ECX
// 004901b3: MOV dword ptr [ESI + 0x68803c],EAX
//   XREF to: 0068803c (DATA)
// 004901b9: ADD ESP,0x8
// 004901bc: MOV dword ptr [ESI + 0x688040],ECX
//   XREF to: 00688040 (DATA)
// 004901c2: MOV ESP,EBP
// 004901c4: POP EBP
// 004901c5: POP EDI
// 004901c6: POP ESI
// 004901c7: POP EBX
// 004901c8: RET
// 004901c9: MOV dword ptr [ESP + 0x30],EAX
//   Label: LAB_004901c9
//   XREF to: Stack[-0x18] (WRITE)
// 004901cd: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 004901d1: FMUL float ptr [0x00622552]
//   XREF to: 00622552 (READ)
// 004901d7: FMUL double ptr [0x00622542]
//   XREF to: 00622542 (READ)
// 004901dd: FMUL double ptr [0x0062255a]
//   XREF to: 0062255a (READ)
// 004901e3: FSTP float ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 004901e6: JMP 0x004900f2
//   XREF to: 004900f2 (UNCONDITIONAL_JUMP)
