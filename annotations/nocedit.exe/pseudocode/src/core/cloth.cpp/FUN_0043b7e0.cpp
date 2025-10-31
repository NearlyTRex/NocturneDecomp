// Name: core_cloth.cpp_FUN_0043b7e0
// Address: 0043b7e0
// Address Range: [[0043b7e0, 0043b96b] [0043b976, 0043b9ec]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043b7e0()
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cc57 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043b790 (0043b790) at 0043b7bb [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_006184ba
//   undefined4 DAT_006184c2
//   undefined4 DAT_0065bb3c
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_cloth.cpp_FUN_0043b7e0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_cloth_cpp_FUN_0043b7e0
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,int param_5,
               int param_6,int param_7)

{
  uchar uVar1;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  int vertex_index1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 *vertex_index2;
  CVector3i *input;
  CVector3i local_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int local_1c;
  int local_18;
  int local_14;
  int vertex_index1_00;
  
  iVar2 = param_6 * 0xac + param_5 + 0x3ce90;
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
            ((CMatrix3x3f *)(iVar2 + 0x78),(CVector3f *)&stack0xffffffa8);
  vertex_index1 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffac,(CVector3i *)(iVar2 + 0xa0));
  local_18 = 0x270;
  local_14 = 0;
  vertex_index2 = (undefined1 *)0x0;
  local_1c = 0xc;
  vertex_index1_00 = -1;
  do {
    fVar3 = (float10)(int)vertex_index2 * (float10)_DAT_006184ba * (float10)_DAT_006184c2;
    fVar4 = (float10)fsin(fVar3);
    fVar3 = (float10)fcos(fVar3);
    local_40.z = (int)(float)(fVar4 * (float10)*(float *)(iVar2 + 0x14));
    fStack_30 = 0.0;
    fStack_34 = (float)(fVar3 * (float10)*(float *)(iVar2 + 0x18));
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               local_14),(CVector3i *)&stack0xffffffa4);
    fStack_2c = *(float *)(iVar2 + 0x44);
    local_1c = vertex_index1 + 0xd;
    local_40.x = (int)ROUND(fStack_34 * _DAT_0065bb3c);
    local_40.y = (int)ROUND(fStack_30 * _DAT_0065bb3c);
    local_40.z = (int)ROUND(fStack_2c * _DAT_0065bb3c);
    input = &local_40;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               local_14),input);
    if (0 < vertex_index1) {
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,vertex_index1,local_18);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,vertex_index1,unaff_EBX);
      input = (CVector3i *)0x43b9b5;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr,vertex_index1_00,(int)vertex_index2);
    }
    vertex_index1 = vertex_index1 + 1;
    local_18 = local_18 + 0x30;
    local_14 = local_14 + 0x30;
    vertex_index2 = (undefined1 *)((int)&input->x + 2);
    local_1c = local_1c + 1;
    vertex_index1_00 = vertex_index1_00 + 1;
  } while (vertex_index1 < 0xd);
  if (param_7 != 0) {
    uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
    shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
              (g_CEditorToolsPtr,*(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x18),
               CONCAT31(extraout_var,uVar1));
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 0043b7e0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043b7e0
// 0043b7e1: PUSH ESI
// 0043b7e2: PUSH EDI
// 0043b7e3: PUSH EBP
// 0043b7e4: MOV EBP,ESP
// 0043b7e6: SUB ESP,0x58
// 0043b7e9: AND ESP,0xfffffff8
// 0043b7ec: IMUL EDI,dword ptr [EBP + 0x18],0xac
// 0043b7f3: MOV EAX,dword ptr [EBP + 0x14]
// 0043b7f6: ADD EAX,0x3ce90
// 0043b7fb: ADD EDI,EAX
// 0043b7fd: LEA EAX,[ESP + 0x10]
// 0043b801: PUSH EAX
// 0043b802: LEA EAX,[EDI + 0x78]
// 0043b805: PUSH EAX
// 0043b806: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 0043b80b: ADD ESP,0x8
// 0043b80e: LEA EAX,[EDI + 0xa0]
// 0043b814: PUSH EAX
// 0043b815: LEA EAX,[ESP + 0x14]
// 0043b819: PUSH EAX
// 0043b81a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043b820: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0043b821: MOV EBX,0x270
// 0043b826: XOR ESI,ESI
// 0043b828: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0043b82d: ADD ESP,0xc
// 0043b830: MOV ECX,0xc
// 0043b835: MOV dword ptr [ESP + 0x48],EBX
// 0043b839: MOV dword ptr [ESP + 0x4c],ESI
// 0043b83d: MOV dword ptr [ESP],ESI
// 0043b840: MOV EBX,0xffffffff
// 0043b845: MOV dword ptr [ESP + 0x44],ECX
// 0043b849: MOV dword ptr [ESP + 0x50],EBX
// 0043b84d: MOV EAX,dword ptr [ESP]
//   Label: LAB_0043b84d
// 0043b850: MOV dword ptr [ESP + 0x54],EAX
// 0043b854: FILD dword ptr [ESP + 0x54]
// 0043b858: FMUL double ptr [0x006184ba]
//   XREF to: 006184ba (READ)
// 0043b85e: FMUL double ptr [0x006184c2]
//   XREF to: 006184c2 (READ)
// 0043b864: FLD float ptr [EDI + 0x14]
// 0043b867: FLD ST1
// 0043b869: FSIN
// 0043b86b: FXCH ST2
// 0043b86d: FCOS
// 0043b86f: FXCH ST2
// 0043b871: FMULP
// 0043b873: FSTP float ptr [ESP + 0x28]
// 0043b877: FMUL float ptr [EDI + 0x18]
// 0043b87a: LEA EBX,[ESP + 0x4]
// 0043b87e: XOR EAX,EAX
// 0043b880: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043b886: MOV dword ptr [ESP + 0x30],EAX
// 0043b88a: LEA EAX,[ESP + 0x28]
// 0043b88e: FSTP float ptr [ESP + 0x2c]
// 0043b892: FLD float ptr [EAX]
// 0043b894: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043b89a: FISTP dword ptr [EBX]
// 0043b89c: FLD float ptr [EAX + 0x4]
// 0043b89f: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043b8a5: FISTP dword ptr [EBX + 0x4]
// 0043b8a8: FLD float ptr [EAX + 0x8]
// 0043b8ab: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043b8b1: FISTP dword ptr [EBX + 0x8]
// 0043b8b4: LEA EAX,[ESP + 0x4]
// 0043b8b8: PUSH EAX
// 0043b8b9: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043b8bb: ADD EAX,dword ptr [ESP + 0x50]
// 0043b8bf: PUSH EAX
// 0043b8c0: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0043b8c5: ADD ESP,0x8
// 0043b8c8: MOV EAX,dword ptr [EDI + 0x44]
// 0043b8cb: MOV dword ptr [ESP + 0x30],EAX
// 0043b8cf: LEA EAX,[ESI + 0xd]
// 0043b8d2: LEA EBX,[ESP + 0x1c]
// 0043b8d6: MOV dword ptr [ESP + 0x40],EAX
// 0043b8da: LEA EAX,[ESP + 0x28]
// 0043b8de: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043b8e4: FLD float ptr [EAX]
// 0043b8e6: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043b8ec: FISTP dword ptr [EBX]
// 0043b8ee: FLD float ptr [EAX + 0x4]
// 0043b8f1: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043b8f7: FISTP dword ptr [EBX + 0x4]
// 0043b8fa: FLD float ptr [EAX + 0x8]
// 0043b8fd: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043b903: FISTP dword ptr [EBX + 0x8]
// 0043b906: LEA EAX,[ESP + 0x1c]
// 0043b90a: MOV ECX,dword ptr [ESP + 0x48]
// 0043b90e: PUSH EAX
// 0043b90f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043b911: ADD EAX,ECX
// 0043b913: PUSH EAX
// 0043b914: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0043b919: ADD ESP,0x8
// 0043b91c: TEST ESI,ESI
// 0043b91e: JG 0x0043b976
//   XREF to: 0043b976 (CONDITIONAL_JUMP)
// 0043b920: MOV ECX,dword ptr [ESP + 0x48]
//   Label: LAB_0043b920
// 0043b924: MOV EBX,dword ptr [ESP + 0x4c]
// 0043b928: MOV EAX,dword ptr [ESP]
// 0043b92b: MOV EDX,dword ptr [ESP + 0x44]
// 0043b92f: INC ESI
// 0043b930: ADD ECX,0x30
// 0043b933: ADD EBX,0x30
// 0043b936: ADD EAX,0x2
// 0043b939: INC EDX
// 0043b93a: MOV dword ptr [ESP + 0x48],ECX
// 0043b93e: MOV dword ptr [ESP + 0x4c],EBX
// 0043b942: MOV ECX,dword ptr [ESP + 0x50]
// 0043b946: MOV dword ptr [ESP],EAX
// 0043b949: INC ECX
// 0043b94a: MOV dword ptr [ESP + 0x44],EDX
// 0043b94e: MOV dword ptr [ESP + 0x50],ECX
// 0043b952: CMP ESI,0xc
// 0043b955: JLE 0x0043b84d
//   XREF to: 0043b84d (CONDITIONAL_JUMP)
// 0043b95b: CMP dword ptr [EBP + 0x1c],0x0
// 0043b95f: JNZ 0x0043b9bd
//   XREF to: 0043b9bd (CONDITIONAL_JUMP)
// 0043b961: MOV EAX,[0x006703ec]
//   Label: LAB_0043b961
//   XREF to: 006703ec (READ)
// 0043b966: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0043b967: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 0043b976: MOV EBX,dword ptr [ESP + 0x40]
//   Label: LAB_0043b976
// 0043b97a: PUSH EBX
// 0043b97b: PUSH ESI
// 0043b97c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0043b981: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0043b982: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 0043b987: ADD ESP,0xc
// 0043b98a: MOV EDX,dword ptr [ESP + 0x50]
// 0043b98e: PUSH EDX
// 0043b98f: PUSH ESI
// 0043b990: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043b996: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0043b997: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 0043b99c: ADD ESP,0xc
// 0043b99f: MOV EBX,dword ptr [ESP + 0x44]
// 0043b9a3: PUSH EBX
// 0043b9a4: MOV EAX,dword ptr [ESP + 0x44]
// 0043b9a8: PUSH EAX
// 0043b9a9: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043b9af: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0043b9b0: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 0043b9b5: ADD ESP,0xc
// 0043b9b8: JMP 0x0043b920
//   XREF to: 0043b920 (UNCONDITIONAL_JUMP)
// 0043b9bd: MOV ESI,dword ptr [0x00678a60]
//   Label: LAB_0043b9bd
//   XREF to: 00678a60 (READ)
// 0043b9c3: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0043b9c4: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0043b9c9: ADD ESP,0x4
// 0043b9cc: FLD float ptr [EDI + 0x14]
// 0043b9cf: PUSH EAX
// 0043b9d0: FADD float ptr [EDI + 0x18]
// 0043b9d3: SUB ESP,0x4
// 0043b9d6: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0043b9dc: FSTP float ptr [ESP]
// 0043b9df: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0043b9e0: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)
// 0043b9e5: ADD ESP,0xc
// 0043b9e8: JMP 0x0043b961
//   XREF to: 0043b961 (UNCONDITIONAL_JUMP)
