// Name: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
// Address: 005a1800
// Address Range: [[005a1800, 005a194d]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b061 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064efd4
//   TerminatedCString s_CDeformableModelInstance_0064efe9
//   double DOUBLE_0064f030 = 2670176.85779676
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_01000000
//   CDemonRenderer g_CDemonRendererInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   crt_math.c_atan2_FUN_006013b1
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
          (CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CVector3i *pCVar2;
  CDeformableModel *pCVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int *piVar7;
  undefined4 extraout_EDX;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  double dVar12;
  CDeformableModelInstance *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xfa7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_00000008);
  iVar1 = pCVar3->vertex_count[in_stack_00000008->cached_skinned_lod_index];
  pCVar2 = in_stack_00000008->skinned_vertices_buffer;
  iVar10 = 1;
  iVar8 = pCVar2->y;
  iVar9 = iVar8;
  iVar5 = iVar8;
  if (1 < iVar1) {
    do {
      iVar6 = pCVar2[1].y;
      iVar9 = iVar6;
      if ((iVar5 <= iVar6) && (iVar9 = iVar5, iVar8 < iVar6)) {
        iVar8 = iVar6;
      }
      iVar10 = iVar10 + 1;
      iVar5 = iVar9;
      pCVar2 = pCVar2 + 1;
    } while (iVar10 < iVar1);
  }
  iVar8 = iVar8 - iVar9;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  if (0 < iVar1) {
    iVar10 = 0;
    iVar5 = 0;
    do {
      piVar7 = (int *)(*(int *)(in_stack_0000000c + 0x2234) + iVar10);
      if ((*piVar7 == 0) && (piVar7[2] == 0)) {
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        iVar6 = in_stack_00000010;
      }
      else {
        fVar11 = crt_math_c_atan2_FUN_006013b1((float10)*piVar7,(float10)piVar7[2]);
        fVar11 = fVar11 * (float10)DOUBLE_0064f030;
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,in_stack_0000000c));
        piVar7 = (int *)((ulonglong)dVar12 >> 0x20);
        iVar6 = SUB84(dVar12,0) + (int)ROUND(fVar11);
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        iVar5 = extraout_ECX;
      }
      *(int *)((int)&pSVar4->u + iVar5) = iVar6;
      iVar6 = iVar5 + 0x30;
      *(int *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->v + iVar5) =
           in_stack_00000014 + (int)(((longlong)(piVar7[1] - iVar9) * 0x1000000) / (longlong)iVar8);
      iVar10 = iVar10 + 0xc;
      iVar5 = iVar6;
    } while (iVar6 < iVar1 * 0x30);
  }
  return;
}


// Assembly code:
// 005a1800: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
// 005a1801: PUSH ESI
// 005a1802: PUSH EDI
// 005a1803: PUSH EBP
// 005a1804: SUB ESP,0x8
// 005a1807: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005a180b: CMP dword ptr [EAX + 0x2230],0x0
// 005a1812: JL 0x005a18e4
//   XREF to: 005a18e4 (CONDITIONAL_JUMP)
// 005a1818: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_005a1818
//   XREF to: Stack[0x4] (READ)
// 005a181c: PUSH ESI
// 005a181d: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a1822: MOV EDX,dword ptr [ESI + 0x2230]
// 005a1828: MOV ECX,dword ptr [EAX + EDX*0x4 + 0x2c]
// 005a182c: MOV EDX,dword ptr [ESI + 0x2234]
// 005a1832: MOV EDI,0x1
// 005a1837: ADD ESP,0x4
// 005a183a: MOV ESI,dword ptr [EDX + 0x4]
// 005a183d: MOV EAX,ECX
// 005a183f: MOV EBP,ESI
// 005a1841: CMP ECX,EDI
// 005a1843: JLE 0x005a185d
//   XREF to: 005a185d (CONDITIONAL_JUMP)
// 005a1845: LEA ECX,[EDX + 0xc]
// 005a1848: MOV EDX,dword ptr [ECX + 0x4]
//   Label: LAB_005a1848
// 005a184b: CMP EDX,ESI
// 005a184d: JGE 0x005a190c
//   XREF to: 005a190c (CONDITIONAL_JUMP)
// 005a1853: MOV ESI,EDX
// 005a1855: INC EDI
//   Label: LAB_005a1855
// 005a1856: ADD ECX,0xc
// 005a1859: CMP EDI,EAX
// 005a185b: JL 0x005a1848
//   XREF to: 005a1848 (CONDITIONAL_JUMP)
// 005a185d: SUB EBP,ESI
//   Label: LAB_005a185d
// 005a185f: CMP EBP,0x1
// 005a1862: JGE 0x005a1869
//   XREF to: 005a1869 (CONDITIONAL_JUMP)
// 005a1864: MOV EBP,0x1
// 005a1869: TEST EAX,EAX
//   Label: LAB_005a1869
// 005a186b: JLE 0x005a18dc
//   XREF to: 005a18dc (CONDITIONAL_JUMP)
// 005a186d: MOV EDX,EAX
// 005a186f: SHL EAX,0x2
// 005a1872: SUB EAX,EDX
// 005a1874: XOR ECX,ECX
// 005a1876: SHL EAX,0x4
// 005a1879: XOR EDI,EDI
// 005a187b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a187f: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_005a187f
//   XREF to: Stack[0x4] (READ)
// 005a1883: MOV EDX,dword ptr [EDX + 0x2234]
// 005a1889: ADD EDX,EDI
// 005a188b: CMP dword ptr [EDX],0x0
// 005a188e: JNZ 0x005a191b
//   XREF to: 005a191b (CONDITIONAL_JUMP)
// 005a1894: CMP dword ptr [EDX + 0x8],0x0
// 005a1898: JNZ 0x005a191b
//   XREF to: 005a191b (CONDITIONAL_JUMP)
// 005a189e: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005a18a3: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005a18a5: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005a18a9: MOV dword ptr [ECX + EAX*0x1 + 0x18],EBX
//   Label: LAB_005a18a9
// 005a18ad: MOV EBX,EBP
// 005a18af: MOV EAX,dword ptr [EDX + 0x4]
// 005a18b2: MOV EDX,0x1000000
//   XREF to: 01000000 (DATA)
// 005a18b7: SUB EAX,ESI
// 005a18b9: IMUL EDX
// 005a18bb: IDIV EBX
// 005a18bd: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 005a18c1: ADD EDX,EAX
// 005a18c3: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005a18c8: ADD ECX,0x30
// 005a18cb: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005a18cd: MOV dword ptr [ECX + EAX*0x1 + -0x14],EDX
// 005a18d1: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 005a18d5: ADD EDI,0xc
// 005a18d8: CMP ECX,EAX
// 005a18da: JL 0x005a187f
//   XREF to: 005a187f (CONDITIONAL_JUMP)
// 005a18dc: ADD ESP,0x8
//   Label: LAB_005a18dc
// 005a18df: POP EBP
// 005a18e0: POP EDI
// 005a18e1: POP ESI
// 005a18e2: POP EBX
// 005a18e3: RET
// 005a18e4: MOV ECX,0x64efd4
//   Label: LAB_005a18e4
//   XREF to: 0064efd4 (PARAM)
// 005a18e9: MOV EBX,0xfa7
// 005a18ee: PUSH 0x64efe9
//   XREF to: 0064efe9 (DATA)
// 005a18f3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a18f9: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a18ff: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a1904: ADD ESP,0x4
// 005a1907: JMP 0x005a1818
//   XREF to: 005a1818 (UNCONDITIONAL_JUMP)
// 005a190c: CMP EDX,EBP
//   Label: LAB_005a190c
// 005a190e: JLE 0x005a1855
//   XREF to: 005a1855 (CONDITIONAL_JUMP)
// 005a1914: MOV EBP,EDX
// 005a1916: JMP 0x005a1855
//   XREF to: 005a1855 (UNCONDITIONAL_JUMP)
// 005a191b: FILD dword ptr [EDX + 0x8]
//   Label: LAB_005a191b
// 005a191e: FILD dword ptr [EDX]
// 005a1920: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005a1925: FMUL double ptr [0x0064f030]
//   XREF to: 0064f030 (READ)
// 005a192b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005a192f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a1934: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a1937: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a193a: ADD EAX,EBX
// 005a193c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005a193f: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005a1944: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005a1946: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a1949: JMP 0x005a18a9
//   XREF to: 005a18a9 (UNCONDITIONAL_JUMP)
