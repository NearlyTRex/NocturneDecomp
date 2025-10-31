// Name: core_ladder.cpp_FUN_00502620
// Address: 00502620
// Address Range: [[00502620, 005028b3]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502620()
// Globals:
//   double DOUBLE_00630e18 = 0.5
//   double DOUBLE_00630e20 = 0.00100000000000000
//   undefined4 DAT_006605d0
//   undefined4 DAT_006605e8
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ActiveRenderColor
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005027cc) */
/* WARNING: Removing unreachable block (ram,0x00502835) */
/* WARNING: Removing unreachable block (ram,0x00502837) */
/* WARNING: Removing unreachable block (ram,0x00502843) */
/* WARNING: Removing unreachable block (ram,0x00502845) */
/* WARNING: Removing unreachable block (ram,0x00502861) */
/* WARNING: Removing unreachable block (ram,0x00502863) */
/* WARNING: Removing unreachable block (ram,0x00502870) */
/* WARNING: Removing unreachable block (ram,0x00502872) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502620(undefined4 param_1) */

undefined4 core_ladder_cpp_FUN_00502620(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  SRenderVertex *in_stack_ffffff48;
  SRenderVertex *in_stack_ffffff4c;
  int iStack_88;
  float fStack_70;
  CVector3i CStack_38;
  float fStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar6 = 0;
  iStack_88 = 0x502635;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  iStack_88 = 0x50264d;
  this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&fStack_70);
  fStack_70 = 7.360592e-39;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (((iVar1 != 0) && (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0)) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar1 == 0)) {
    g_ActiveRenderColor = 0xfb;
    while (0.0 < in_stack_00000004[2].location.position.z + (float)DOUBLE_00630e20) {
      fStack_24 = -in_stack_00000004[2].location.position.y * (float)DOUBLE_00630e18;
      uStack_1c = 0;
      iStack_18 = (int)ROUND(fStack_24 * _DAT_006605d0);
      iStack_14 = (int)ROUND(_DAT_006605d0 * 0.0);
      iStack_20 = iVar1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&iStack_18);
      CStack_38.x = (int)ROUND(_DAT_006605d0 * 0.0);
      CStack_38.y = (int)ROUND(_DAT_006605d0 * 0.0);
      CStack_38.z = (int)ROUND(unaff_retaddr * _DAT_006605d0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_38);
      pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
      pSVar3 = pSVar4 + 1;
      piVar5 = &iStack_88;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      piVar5 = (int *)&stack0xffffff48;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff48,in_stack_ffffff4c);
    }
  }
  if (in_stack_0000000c != 0) {
    fStack_70 = 7.361434e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return in_stack_00000010;
}


// Assembly code:
// 00502620: PUSH EBX
//   Label: core_ladder.cpp_FUN_00502620
// 00502621: PUSH ESI
// 00502622: PUSH EDI
// 00502623: PUSH EBP
// 00502624: MOV EBP,ESP
// 00502626: SUB ESP,0x70
// 00502629: AND ESP,0xfffffff8
// 0050262c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050262f: PUSH EDX
// 00502630: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00502635: ADD ESP,0x4
// 00502638: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x74] (DATA)
// 0050263c: PUSH EBX
// 0050263d: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00502640: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00502643: PUSH ECX
// 00502644: MOV EAX,dword ptr [EAX + 0x154]
// 0050264a: CALL dword ptr [EAX + 0x14]
// 0050264d: ADD ESP,0x8
// 00502650: PUSH EAX
// 00502651: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00502656: ADD ESP,0x4
// 00502659: MOV dword ptr [ESP + 0x6c],EAX
// 0050265d: TEST EAX,EAX
// 0050265f: JZ 0x0050287f
//   XREF to: 0050287f (CONDITIONAL_JUMP)
// 00502665: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0050266a: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 0050266e: JZ 0x0050287f
//   XREF to: 0050287f (CONDITIONAL_JUMP)
// 00502674: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050267a: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0050267b: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00502680: ADD ESP,0x4
// 00502683: TEST EAX,EAX
// 00502685: JNZ 0x0050287f
//   XREF to: 0050287f (CONDITIONAL_JUMP)
// 0050268b: MOV EDI,0xfb
// 00502690: MOV dword ptr [ESP + 0x8],EAX
// 00502694: MOV dword ptr [0x02d02570],EDI
//   XREF to: 02d02570 (WRITE)
// 0050269a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0050269a
//   XREF to: Stack[0x4] (READ)
// 0050269d: FLD float ptr [EAX + 0x2d8]
// 005026a3: FADD double ptr [0x00630e20]
//   XREF to: 00630e20 (READ)
// 005026a9: FLD float ptr [ESP + 0x8]
// 005026ad: FSTP double ptr [ESP]
// 005026b0: FCOMP double ptr [ESP]
// 005026b3: FNSTSW AX
// 005026b5: SAHF
// 005026b6: JBE 0x0050287f
//   XREF to: 0050287f (CONDITIONAL_JUMP)
// 005026bc: FLDZ
// 005026be: FCOMP double ptr [ESP]
// 005026c1: FNSTSW AX
// 005026c3: SAHF
// 005026c4: JC 0x005027cc
//   XREF to: 005027cc (CONDITIONAL_JUMP)
// 005026ca: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005026ca
//   XREF to: Stack[0x4] (READ)
// 005026cd: FLD float ptr [EAX + 0x2d4]
// 005026d3: FCHS
// 005026d5: FLD double ptr [0x00630e18]
//   XREF to: 00630e18 (READ)
// 005026db: FXCH
// 005026dd: FMUL ST1
// 005026df: XOR EBX,EBX
// 005026e1: MOV EAX,dword ptr [ESP + 0x8]
// 005026e5: MOV dword ptr [ESP + 0x44],EBX
// 005026e9: MOV dword ptr [ESP + 0x40],EAX
// 005026ed: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005026f0: FSTP float ptr [ESP + 0x3c]
// 005026f4: FMUL float ptr [EAX + 0x2d4]
// 005026fa: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00502700: MOV EAX,dword ptr [ESP + 0x8]
// 00502704: MOV dword ptr [ESP + 0x5c],EBX
// 00502708: LEA EBX,[ESP + 0x48]
// 0050270c: MOV dword ptr [ESP + 0x58],EAX
// 00502710: LEA EAX,[ESP + 0x3c]
// 00502714: FSTP float ptr [ESP + 0x54]
// 00502718: FLD float ptr [EAX]
// 0050271a: FMUL float ptr [0x006605d0]
//   XREF to: 006605d0 (READ)
// 00502720: FISTP dword ptr [EBX]
// 00502722: FLD float ptr [EAX + 0x4]
// 00502725: FMUL float ptr [0x006605d0]
//   XREF to: 006605d0 (READ)
// 0050272b: FISTP dword ptr [EBX + 0x4]
// 0050272e: FLD float ptr [EAX + 0x8]
// 00502731: FMUL float ptr [0x006605d0]
//   XREF to: 006605d0 (READ)
// 00502737: FISTP dword ptr [EBX + 0x8]
// 0050273a: LEA EAX,[ESP + 0x48]
// 0050273e: PUSH EAX
// 0050273f: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00502741: PUSH EAX
// 00502742: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00502747: LEA EBX,[ESP + 0x2c]
// 0050274b: ADD ESP,0x8
// 0050274e: LEA EAX,[ESP + 0x54]
// 00502752: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00502758: FLD float ptr [EAX]
// 0050275a: FMUL float ptr [0x006605d0]
//   XREF to: 006605d0 (READ)
// 00502760: FISTP dword ptr [EBX]
// 00502762: FLD float ptr [EAX + 0x4]
// 00502765: FMUL float ptr [0x006605d0]
//   XREF to: 006605d0 (READ)
// 0050276b: FISTP dword ptr [EBX + 0x4]
// 0050276e: FLD float ptr [EAX + 0x8]
// 00502771: FMUL float ptr [0x006605d0]
//   XREF to: 006605d0 (READ)
// 00502777: FISTP dword ptr [EBX + 0x8]
// 0050277a: LEA EAX,[ESP + 0x24]
// 0050277e: PUSH EAX
// 0050277f: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00502781: ADD EAX,0x30
// 00502784: PUSH EAX
// 00502785: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0050278a: ADD ESP,0x8
// 0050278d: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00502792: SUB ESP,0x30
// 00502795: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00502797: MOV ECX,0xc
// 0050279c: MOV EDI,ESP
// 0050279e: LEA ESI,[EAX + 0x30]
// 005027a1: MOVSD.REP ES:EDI,ESI
// 005027a3: SUB ESP,0x30
// 005027a6: MOV ECX,0xc
// 005027ab: MOV EDI,ESP
// 005027ad: MOV ESI,EAX
// 005027af: MOVSD.REP ES:EDI,ESI
// 005027b1: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005027b6: ADD ESP,0x60
// 005027b9: FLD float ptr [ESP + 0x8]
// 005027bd: FADD float ptr [0x006605e8]
//   XREF to: 006605e8 (READ)
// 005027c3: FSTP float ptr [ESP + 0x8]
// 005027c7: JMP 0x0050269a
//   XREF to: 0050269a (UNCONDITIONAL_JUMP)
// 005027cc: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005027cc
// 005027d0: LEA EBX,[ESP + 0x30]
// 005027d4: XOR EDX,EDX
// 005027d6: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005027dc: MOV dword ptr [ESP + 0x60],EDX
// 005027e0: MOV dword ptr [ESP + 0x64],EAX
// 005027e4: LEA EAX,[ESP + 0x60]
// 005027e8: MOV dword ptr [ESP + 0x68],EDX
// 005027ec: FLD float ptr [EAX]
// 005027ee: FMUL float ptr [0x006605d0]
//   XREF to: 006605d0 (READ)
// 005027f4: FISTP dword ptr [EBX]
// 005027f6: FLD float ptr [EAX + 0x4]
// 005027f9: FMUL float ptr [0x006605d0]
//   XREF to: 006605d0 (READ)
// 005027ff: FISTP dword ptr [EBX + 0x4]
// 00502802: FLD float ptr [EAX + 0x8]
// 00502805: FMUL float ptr [0x006605d0]
//   XREF to: 006605d0 (READ)
// 0050280b: FISTP dword ptr [EBX + 0x8]
// 0050280e: LEA EAX,[ESP + 0x30]
// 00502812: PUSH EAX
// 00502813: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 00502815: ADD EAX,0x60
// 00502818: PUSH EAX
// 00502819: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0050281e: ADD ESP,0x8
// 00502821: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00502826: SUB ESP,0x30
// 00502829: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050282b: MOV ECX,0xc
// 00502830: MOV EDI,ESP
// 00502832: LEA ESI,[EAX + 0x60]
// 00502835: MOVSD.REP ES:EDI,ESI
// 00502837: SUB ESP,0x30
// 0050283a: MOV ECX,0xc
// 0050283f: MOV EDI,ESP
// 00502841: MOV ESI,EAX
// 00502843: MOVSD.REP ES:EDI,ESI
// 00502845: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0050284a: ADD ESP,0x60
// 0050284d: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00502852: SUB ESP,0x30
// 00502855: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00502857: MOV ECX,0xc
// 0050285c: MOV EDI,ESP
// 0050285e: LEA ESI,[EAX + 0x60]
// 00502861: MOVSD.REP ES:EDI,ESI
// 00502863: SUB ESP,0x30
// 00502866: MOV ECX,0xc
// 0050286b: MOV EDI,ESP
// 0050286d: LEA ESI,[EAX + 0x30]
// 00502870: MOVSD.REP ES:EDI,ESI
// 00502872: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00502877: ADD ESP,0x60
// 0050287a: JMP 0x005026ca
//   XREF to: 005026ca (UNCONDITIONAL_JUMP)
// 0050287f: CMP dword ptr [ESP + 0x6c],0x0
//   Label: LAB_0050287f
// 00502884: JNZ 0x0050289d
//   XREF to: 0050289d (CONDITIONAL_JUMP)
// 00502886: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00502886
//   XREF to: Stack[0x4] (READ)
// 00502889: PUSH EAX
// 0050288a: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0050288f: ADD ESP,0x4
// 00502892: MOV EAX,dword ptr [ESP + 0x6c]
// 00502896: MOV ESP,EBP
// 00502898: POP EBP
// 00502899: POP EDI
// 0050289a: POP ESI
// 0050289b: POP EBX
// 0050289c: RET
// 0050289d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0050289d
//   XREF to: Stack[0x4] (READ)
// 005028a0: PUSH -0x1
// 005028a2: ADD EAX,0x158
// 005028a7: PUSH 0x0
// 005028a9: PUSH EAX
// 005028aa: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005028af: ADD ESP,0xc
// 005028b2: JMP 0x00502886
//   XREF to: 00502886 (UNCONDITIONAL_JUMP)
