// Name: core_charactr.cpp_CCharacter_FUN_00429b40
// Address: 00429b40
// Address Range: [[00429b40, 0042a2b4]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00429b40(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429aa0 (00429aa0) at 00429b31 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_headlite_raw_0061709a
//   undefined4 s_eadlite.raw_0061709b
//   undefined4 s_dlite.raw_0061709d
//   double DOUBLE_006170aa = 0.5
//   double DOUBLE_006170b2 = 3.14159265350000
//   double DOUBLE_006170ba = 0.0416666666666667
//   undefined4 DAT_0065b810
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00800000
//   undefined4 DAT_00823a78
//   undefined1 DAT_00823a80
//   undefined1 DAT_00823a81
//   undefined1 DAT_00823a82
//   undefined1 DAT_00823a83
//   CDemonRenderer g_CDemonRendererInstance
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_FUN_00429b40(CCharacter *this_ptr)

{
  char cVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  undefined1 *unaff_ESI;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  CVector3f *pCVar8;
  float10 fVar9;
  float10 fVar10;
  CDemonRenderer *pCVar11;
  int local_e4;
  SMRGLHeaderPrimitive local_d4;
  int local_bc;
  CVector3i local_b8;
  undefined1 local_a8 [16];
  int iStack_98;
  int iStack_94;
  CVector3f local_90;
  CVector3f local_84;
  float local_78;
  CVector3f local_74;
  CVector3i local_68;
  undefined1 local_5c [8];
  int iStack_54;
  int iStack_50;
  float local_3c;
  char *local_38;
  float local_2c;
  undefined1 *local_28;
  char *local_24;
  float local_20;
  CVector3f *local_18;
  CVector3f *pCStack_14;
  
  local_d4.base.type =
       engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (local_d4.base.type != 0) {
    return;
  }
  pcVar5 = "headlite.raw";
  pcVar7 = &DAT_00823a80;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  local_d4.base.count = local_d4.base.type;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)&DAT_00823a78);
  iVar6 = 0;
  do {
    pCVar11 = g_CDemonRendererPtr;
    *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar6) = 0x800000;
    iVar3 = iVar6 + 0x30;
    *(undefined4 *)((int)&pCVar11->vertex_buffer_ptr->v + iVar6) = 0x800000;
    iVar6 = iVar3;
  } while (iVar3 != 0x12c0);
  local_24 = (char *)0x267;
  local_d4.surface_normal.B = 0;
  local_d4.surface_normal.C = 1;
  local_d4.surface_normal.D = 2;
  local_bc = 3;
  local_18 = (CVector3f *)(this_ptr->cloth_data + 0x1c4);
  local_38 = this_ptr->cloth_data + 0x278;
  local_28 = (undefined1 *)0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(int)local_28 / 5);
    iVar6 = 0;
    pCVar8 = pCStack_14;
    do {
      pCVar11 = g_CDemonRendererPtr;
      *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0;
      *(undefined4 *)((int)&pCVar11->vertex_buffer_ptr->color + iVar6) = 0xffff;
      *(undefined4 *)((int)&pCVar11->vertex_buffer_ptr->fog + iVar6) = 0;
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,&local_84,pCVar8);
      if (&local_74 != pCVar4) {
        local_74.x = pCVar4->x;
        local_74.y = pCVar4->y;
        local_74.z = pCVar4->z;
      }
      local_68.x = (int)ROUND(local_74.x * _DAT_0065b810);
      local_68.y = (int)ROUND(local_74.y * _DAT_0065b810);
      local_68.z = (int)ROUND(local_74.z * _DAT_0065b810);
      pCVar8 = pCVar8 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar6),&local_68);
      iVar6 = iVar6 + 0x30;
    } while (iVar6 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,&local_d4,0x267);
    unaff_ESI = unaff_ESI + 0x24;
    local_18 = (CVector3f *)((int)local_18 + -0x8000);
  } while (unaff_ESI != local_28);
  pcVar5 = this_ptr->cloth_data + 0x278;
  local_24 = this_ptr->cloth_data + 0x32c;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(int)local_20 / 5);
    iVar6 = 0;
    pCVar8 = local_18;
    do {
      pCVar11 = g_CDemonRendererPtr;
      *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0;
      *(undefined4 *)((int)&pCVar11->vertex_buffer_ptr->color + iVar6) = 0;
      *(undefined4 *)((int)&pCVar11->vertex_buffer_ptr->fog + iVar6) = 0xffff;
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,&local_90,pCVar8);
      if (&local_74 != pCVar4) {
        local_74.x = pCVar4->x;
        local_74.y = pCVar4->y;
        local_74.z = pCVar4->z;
      }
      local_5c._0_4_ = (undefined4)ROUND(local_74.x * _DAT_0065b810);
      local_5c._4_4_ = (undefined4)ROUND(local_74.y * _DAT_0065b810);
      iStack_54 = (int)ROUND(local_74.z * _DAT_0065b810);
      pCVar8 = pCVar8 + 1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar6),(CVector3i *)local_5c);
      iVar6 = iVar6 + 0x30;
    } while (iVar6 != 0x90);
    pCVar8 = local_18;
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,&local_d4,(int)local_18);
    pcVar5 = pcVar5 + 0x24;
  } while (pcVar5 != local_24);
  local_20 = *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
  if (local_20 < *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale) {
    local_20 = (this_ptr->model).bounding_box.max.y;
  }
  local_d4.base.type = (int)(*(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale);
  if (local_20 < (float)local_d4.base.type) {
    local_20 = this_ptr->size_scale * (float)DOUBLE_006170aa + (float)local_d4.base.type;
  }
  local_2c = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
  pCVar11 = (CDemonRenderer *)(*(float *)(this_ptr->cloth_data + 0x348) * this_ptr->size_scale);
  iVar6 = 0x30;
  iVar3 = 0;
  do {
    fVar9 = (float10)((int)pCStack_14 * 2) * (float10)DOUBLE_006170b2 * (float10)DOUBLE_006170ba;
    fVar10 = (float10)fsin(fVar9);
    fVar9 = (float10)fcos(fVar9);
    local_78 = local_3c;
    local_84.z = (float)(fVar10 * (float10)(float)pCVar11);
    local_74.x = (float)(fVar9 * (float10)(float)pCVar11);
    local_5c._4_4_ = (undefined4)ROUND(local_84.z * _DAT_0065b810);
    iStack_54 = (int)ROUND(local_3c * _DAT_0065b810);
    iStack_50 = (int)ROUND(local_74.x * _DAT_0065b810);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar3),(CVector3i *)(local_5c + 4));
    pCVar2 = g_CDemonRendererPtr;
    *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar3) = 0xffff;
    *(undefined4 *)((int)&pCVar2->vertex_buffer_ptr->color + iVar3) = 0;
    *(undefined4 *)((int)&pCVar2->vertex_buffer_ptr->fog + iVar3) = 0;
    local_74.x = local_2c;
    local_28 = (undefined1 *)((int)&pCVar8->x + 1);
    local_a8._0_4_ = (undefined4)ROUND(local_78 * _DAT_0065b810);
    local_a8._4_4_ = (undefined4)ROUND(local_2c * _DAT_0065b810);
    local_a8._8_4_ = (undefined4)ROUND(local_74.y * _DAT_0065b810);
    pCVar11 = (CDemonRenderer *)local_a8;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x + iVar6),
               (CVector3i *)pCVar11);
    pCVar2 = g_CDemonRendererPtr;
    *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0xffff;
    *(undefined4 *)((int)&pCVar2->vertex_buffer_ptr->color + iVar6) = 0;
    *(undefined4 *)((int)&pCVar2->vertex_buffer_ptr->fog + iVar6) = 0;
    if (0 < (int)pcVar5) {
      local_d4.surface_normal.D = local_e4 + -2;
      local_bc = local_e4 + -1;
      local_b8.x = (int)local_24;
      local_d4.base.type = 4;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar2,0x4000);
      pCVar11 = g_CDemonRendererPtr;
      pCVar8 = local_18;
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr,&local_d4,(int)local_18);
    }
    iVar3 = iVar3 + 0x60;
    pCStack_14 = (CVector3f *)((int)&pCStack_14->x + 1);
    iVar6 = iVar6 + 0x60;
  } while ((int)pCStack_14 < 0x19);
  local_b8.x = (int)ROUND(g_ZeroVector.x * _DAT_0065b810);
  local_b8.y = (int)ROUND(g_ZeroVector.y * _DAT_0065b810);
  local_b8.z = (int)ROUND(g_ZeroVector.z * _DAT_0065b810);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_b8);
  pCVar11 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = 9.18341e-41;
  iVar3 = 0;
  pCVar11->vertex_buffer_ptr->color = 0;
  iVar6 = 0x30;
  local_e4 = 0;
  pCVar11->vertex_buffer_ptr->fog = 0.0;
  do {
    fVar9 = (float10)local_e4 * (float10)DOUBLE_006170b2 * (float10)DOUBLE_006170ba;
    fVar10 = (float10)fsin(fVar9);
    fVar9 = (float10)fcos(fVar9);
    local_78 = (float)((float10)this_ptr->size_scale *
                      (float10)*(float *)(this_ptr->cloth_data + 0x344) * fVar10);
    local_74.x = 0.0;
    local_74.y = (float)(fVar9 * (float10)*(float *)(this_ptr->cloth_data + 0x344) *
                        (float10)this_ptr->size_scale);
    local_a8._12_4_ = (undefined4)ROUND(local_78 * _DAT_0065b810);
    iStack_98 = (int)ROUND(_DAT_0065b810 * 0.0);
    iStack_94 = (int)ROUND(local_74.y * _DAT_0065b810);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar6),(CVector3i *)(local_a8 + 0xc));
    pCVar11 = g_CDemonRendererPtr;
    *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar6) = 0xffff;
    *(undefined4 *)((int)&pCVar11->vertex_buffer_ptr->color + iVar6) = 0;
    *(undefined4 *)((int)&pCVar11->vertex_buffer_ptr->fog + iVar6) = 0;
    if (0 < iVar3) {
      local_d4.base.type = 3;
      local_d4.surface_normal.D = 0;
      local_bc = iVar3 + -1;
      local_b8.x = iVar3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar11,0x4000);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr,&local_d4,(int)local_18);
    }
    iVar3 = iVar3 + 1;
    local_e4 = local_e4 + 2;
    iVar6 = iVar6 + 0x30;
  } while (iVar3 < 0x19);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}


// Assembly code:
// 00429b40: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_00429b40
// 00429b41: PUSH ESI
// 00429b42: PUSH EDI
// 00429b43: PUSH EBP
// 00429b44: MOV EBP,ESP
// 00429b46: SUB ESP,0xe4
// 00429b4c: AND ESP,0xfffffff8
// 00429b4f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429b55: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00429b56: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00429b5b: ADD ESP,0x4
// 00429b5e: TEST EAX,EAX
// 00429b60: JZ 0x00429b69
//   XREF to: 00429b69 (CONDITIONAL_JUMP)
// 00429b62: MOV ESP,EBP
// 00429b64: POP EBP
// 00429b65: POP EDI
// 00429b66: POP ESI
// 00429b67: POP EBX
// 00429b68: RET
// 00429b69: MOV ESI,0x61709a
//   Label: LAB_00429b69
//   XREF to: 0061709a (DATA)
// 00429b6e: MOV EDI,0x823a80
//   XREF to: 00823a80 (DATA)
// 00429b73: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 00429b77: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 00429b7b: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 00429b7f: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 00429b83: PUSH EDI
//   XREF to: 00823a80 (DATA)
// 00429b84: MOV AL,byte ptr [ESI]
//   Label: LAB_00429b84
//   XREF to: 0061709a (READ)
//   XREF to: 0061709c (READ)
// 00429b86: MOV byte ptr [EDI],AL
//   XREF to: 00823a80 (WRITE)
//   XREF to: 00823a82 (WRITE)
// 00429b88: CMP AL,0x0
// 00429b8a: JZ 0x00429b9c
//   XREF to: 00429b9c (CONDITIONAL_JUMP)
// 00429b8c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061709b (READ)
//   XREF to: 0061709d (READ)
// 00429b8f: ADD ESI,0x2
// 00429b92: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 00823a81 (WRITE)
//   XREF to: 00823a83 (WRITE)
// 00429b95: ADD EDI,0x2
// 00429b98: CMP AL,0x0
// 00429b9a: JNZ 0x00429b84
//   XREF to: 00429b84 (CONDITIONAL_JUMP)
// 00429b9c: POP EDI
//   Label: LAB_00429b9c
// 00429b9d: PUSH 0x823a78
//   XREF to: 00823a78 (DATA)
// 00429ba2: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429ba7: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00429ba8: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00429bad: ADD ESP,0x8
// 00429bb0: XOR EAX,EAX
// 00429bb2: MOV ESI,0x800000
//   XREF to: 00800000 (DATA)
// 00429bb7: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_00429bb7
//   XREF to: 006703ec (READ)
// 00429bbd: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00429bbf: MOV dword ptr [EBX + EAX*0x1 + 0x18],ESI
//   XREF to: 00800000 (DATA)
// 00429bc3: ADD EAX,0x30
// 00429bc6: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00429bc8: MOV dword ptr [EDX + EAX*0x1 + -0x14],ESI
//   XREF to: 00800000 (DATA)
// 00429bcc: CMP EAX,0x12c0
// 00429bd1: JNZ 0x00429bb7
//   XREF to: 00429bb7 (CONDITIONAL_JUMP)
// 00429bd3: MOV EDX,0x267
// 00429bd8: MOV ECX,0x3
// 00429bdd: MOV ESI,0x1
// 00429be2: MOV EDI,0x2
// 00429be7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00429bea: XOR EBX,EBX
// 00429bec: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00429bf3: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0xe4] (WRITE)
// 00429bf7: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0xd0] (WRITE)
// 00429bfb: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0xcc] (WRITE)
// 00429bff: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0xc8] (WRITE)
// 00429c03: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0xc4] (WRITE)
// 00429c07: ADD EAX,0x2c5c
// 00429c0c: MOV EDX,0x28000
// 00429c11: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00429c18: ADD EAX,0xb4
// 00429c1d: MOV dword ptr [ESP + 0xc8],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00429c24: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00429c2b: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_00429c2b
//   XREF to: Stack[-0x30] (READ)
// 00429c32: MOV EDX,EAX
// 00429c34: MOV EBX,0x5
// 00429c39: SAR EDX,0x1f
// 00429c3c: IDIV EBX
// 00429c3e: PUSH EAX
// 00429c3f: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429c45: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00429c46: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 00429c4b: ADD ESP,0x8
// 00429c4e: XOR ESI,ESI
// 00429c50: MOV EDI,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x20] (READ)
// 00429c57: MOV EAX,[0x006703ec]
//   Label: LAB_00429c57
//   XREF to: 006703ec (READ)
// 00429c5c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00429c5e: MOV dword ptr [EDX + ESI*0x1 + 0x20],0x0
// 00429c66: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00429c68: MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff
// 00429c70: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00429c72: PUSH EDI
// 00429c73: MOV dword ptr [ESI + EAX*0x1 + 0x28],0x0
// 00429c7b: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x90] (DATA)
// 00429c7f: PUSH EAX
// 00429c80: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00429c83: PUSH EBX
// 00429c84: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00429c89: MOV EDX,EAX
// 00429c8b: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x84] (DATA)
// 00429c92: ADD ESP,0xc
// 00429c95: CMP EAX,EDX
// 00429c97: JZ 0x00429cad
//   XREF to: 00429cad (CONDITIONAL_JUMP)
// 00429c99: MOV EAX,dword ptr [EDX]
// 00429c9b: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00429c9f: MOV EAX,dword ptr [EDX + 0x4]
// 00429ca2: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00429ca6: MOV EAX,dword ptr [EDX + 0x8]
// 00429ca9: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00429cad: LEA EBX,[ESP + 0x80]
//   Label: LAB_00429cad
//   XREF to: Stack[-0x78] (DATA)
// 00429cb4: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x84] (DATA)
// 00429cb8: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429cbe: FLD float ptr [EAX]
//   XREF to: Stack[-0x84] (DATA)
// 00429cc0: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 00429cc6: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x78] (DATA)
// 00429cc8: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x80] (READ)
// 00429ccb: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 00429cd1: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x74] (WRITE)
// 00429cd4: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 00429cd7: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 00429cdd: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x70] (WRITE)
// 00429ce0: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x78] (DATA)
// 00429ce7: PUSH EAX
// 00429ce8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00429cea: ADD EAX,ESI
// 00429cec: PUSH EAX
// 00429ced: ADD EDI,0xc
// 00429cf0: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00429cf5: ADD ESI,0x30
// 00429cf8: ADD ESP,0x8
// 00429cfb: CMP ESI,0x90
// 00429d01: JNZ 0x00429c57
//   XREF to: 00429c57 (CONDITIONAL_JUMP)
// 00429d07: PUSH 0x267
// 00429d0c: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xe8] (DATA)
// 00429d10: PUSH EAX
// 00429d11: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00429d17: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00429d18: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 00429d1d: ADD ESP,0xc
// 00429d20: MOV EDI,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x20] (READ)
// 00429d27: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x30] (READ)
// 00429d2e: MOV EDX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x40] (READ)
// 00429d35: ADD EDI,0x24
// 00429d38: ADD EAX,0xffff8000
// 00429d3d: MOV dword ptr [ESP + 0xd8],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00429d44: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00429d4b: CMP EDI,EDX
// 00429d4d: JNZ 0x00429c2b
//   XREF to: 00429c2b (CONDITIONAL_JUMP)
// 00429d53: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00429d56: ADD EAX,0x2d10
// 00429d5b: MOV ECX,0x28000
// 00429d60: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00429d67: ADD EAX,0xb4
// 00429d6c: MOV dword ptr [ESP + 0xd0],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00429d73: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00429d7a: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_00429d7a
//   XREF to: Stack[-0x28] (READ)
// 00429d81: MOV EDX,EAX
// 00429d83: MOV EBX,0x5
// 00429d88: SAR EDX,0x1f
// 00429d8b: IDIV EBX
// 00429d8d: PUSH EAX
// 00429d8e: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429d94: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00429d95: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 00429d9a: ADD ESP,0x8
// 00429d9d: XOR ESI,ESI
// 00429d9f: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x24] (READ)
// 00429da6: MOV EAX,[0x006703ec]
//   Label: LAB_00429da6
//   XREF to: 006703ec (READ)
// 00429dab: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00429dad: MOV dword ptr [EDX + ESI*0x1 + 0x20],0x0
// 00429db5: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00429db7: MOV dword ptr [EDX + ESI*0x1 + 0x24],0x0
// 00429dbf: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00429dc1: PUSH EDI
// 00429dc2: MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff
// 00429dca: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x9c] (DATA)
// 00429dce: PUSH EAX
// 00429dcf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00429dd2: PUSH EAX
// 00429dd3: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00429dd8: MOV EDX,EAX
// 00429dda: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x84] (DATA)
// 00429de1: ADD ESP,0xc
// 00429de4: CMP EAX,EDX
// 00429de6: JZ 0x00429dfc
//   XREF to: 00429dfc (CONDITIONAL_JUMP)
// 00429de8: MOV EAX,dword ptr [EDX]
// 00429dea: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00429dee: MOV EAX,dword ptr [EDX + 0x4]
// 00429df1: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00429df5: MOV EAX,dword ptr [EDX + 0x8]
// 00429df8: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00429dfc: LEA EBX,[ESP + 0x8c]
//   Label: LAB_00429dfc
//   XREF to: Stack[-0x6c] (DATA)
// 00429e03: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x84] (DATA)
// 00429e07: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429e0d: FLD float ptr [EAX]
//   XREF to: Stack[-0x84] (DATA)
// 00429e0f: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 00429e15: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x6c] (DATA)
// 00429e17: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x80] (READ)
// 00429e1a: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 00429e20: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x68] (WRITE)
// 00429e23: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 00429e26: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 00429e2c: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x64] (WRITE)
// 00429e2f: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x6c] (DATA)
// 00429e36: PUSH EAX
// 00429e37: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00429e39: ADD EAX,ESI
// 00429e3b: PUSH EAX
// 00429e3c: ADD EDI,0xc
// 00429e3f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00429e44: ADD ESI,0x30
// 00429e47: ADD ESP,0x8
// 00429e4a: CMP ESI,0x90
// 00429e50: JNZ 0x00429da6
//   XREF to: 00429da6 (CONDITIONAL_JUMP)
// 00429e56: MOV EDX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x2c] (READ)
// 00429e5d: PUSH EDX
// 00429e5e: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xe8] (DATA)
// 00429e62: PUSH EAX
// 00429e63: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429e69: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00429e6a: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 00429e6f: ADD ESP,0xc
// 00429e72: MOV EBX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x24] (READ)
// 00429e79: MOV ESI,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x28] (READ)
// 00429e80: MOV EDI,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x3c] (READ)
// 00429e87: ADD EBX,0x24
// 00429e8a: ADD ESI,0xffff8000
// 00429e90: MOV dword ptr [ESP + 0xd4],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00429e97: MOV dword ptr [ESP + 0xd0],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 00429e9e: CMP EBX,EDI
// 00429ea0: JNZ 0x00429d7a
//   XREF to: 00429d7a (CONDITIONAL_JUMP)
// 00429ea6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00429ea9: FLD float ptr [EAX + 0x2df0]
// 00429eaf: FMUL float ptr [EAX + 0x261c]
// 00429eb5: FLD float ptr [EAX + 0x2dec]
// 00429ebb: FMUL float ptr [EAX + 0x261c]
// 00429ec1: FXCH
// 00429ec3: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x38] (WRITE)
// 00429eca: FCOMP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x38] (READ)
// 00429ed1: FNSTSW AX
// 00429ed3: SAHF
// 00429ed4: JBE 0x00429ee6
//   XREF to: 00429ee6 (CONDITIONAL_JUMP)
// 00429ed6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00429ed9: MOV EAX,dword ptr [EAX + 0x23a0]
// 00429edf: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00429ee6: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00429ee6
//   XREF to: Stack[0x4] (READ)
// 00429ee9: FLD float ptr [EAX + 0x2dec]
// 00429eef: FMUL float ptr [EAX + 0x261c]
// 00429ef5: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x38] (READ)
// 00429efc: FXCH
// 00429efe: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0xec] (WRITE)
// 00429f02: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0xec] (READ)
// 00429f06: FNSTSW AX
// 00429f08: SAHF
// 00429f09: JC 0x0042a294
//   XREF to: 0042a294 (CONDITIONAL_JUMP)
// 00429f0f: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00429f0f
//   XREF to: Stack[0x4] (READ)
// 00429f12: FLD float ptr [EAX + 0x2dec]
// 00429f18: FMUL float ptr [EAX + 0x261c]
// 00429f1e: FLD float ptr [EAX + 0x2de0]
// 00429f24: FMUL float ptr [EAX + 0x261c]
// 00429f2a: MOV ESI,0x30
// 00429f2f: XOR EDI,EDI
// 00429f31: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 00429f34: XOR EAX,EAX
// 00429f36: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x44] (WRITE)
// 00429f3d: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00429f44: MOV EAX,dword ptr [ESP + 0xdc]
//   Label: LAB_00429f44
//   XREF to: Stack[-0x1c] (READ)
// 00429f4b: ADD EAX,EAX
// 00429f4d: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00429f54: FILD dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 00429f5b: FMUL double ptr [0x006170b2]
//   XREF to: 006170b2 (READ)
// 00429f61: FMUL double ptr [0x006170ba]
//   XREF to: 006170ba (READ)
// 00429f67: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 00429f6b: FLD ST0
// 00429f6d: FSIN
// 00429f6f: FXCH
// 00429f71: FCOS
// 00429f73: FLD float ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 00429f76: FXCH ST2
// 00429f78: FMUL ST2
// 00429f7a: FXCH
// 00429f7c: FMULP ST2
// 00429f7e: LEA EBX,[ESP + 0x98]
//   XREF to: Stack[-0x60] (DATA)
// 00429f85: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x44] (READ)
// 00429f8c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429f92: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00429f96: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x84] (DATA)
// 00429f9a: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x84] (WRITE)
// 00429f9e: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x7c] (WRITE)
// 00429fa2: FLD float ptr [EAX]
//   XREF to: Stack[-0x84] (DATA)
// 00429fa4: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 00429faa: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x60] (DATA)
// 00429fac: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x80] (READ)
// 00429faf: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 00429fb5: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x5c] (WRITE)
// 00429fb8: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 00429fbb: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 00429fc1: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 00429fc4: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x60] (DATA)
// 00429fcb: PUSH EAX
// 00429fcc: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00429fce: ADD EAX,EDI
// 00429fd0: PUSH EAX
// 00429fd1: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00429fd6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429fdc: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00429fde: MOV dword ptr [EDI + EAX*0x1 + 0x20],0xffff
// 00429fe6: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00429fe8: MOV dword ptr [EDI + EAX*0x1 + 0x24],0x0
// 00429ff0: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00429ff2: ADD ESP,0x8
// 00429ff5: MOV dword ptr [EDI + EAX*0x1 + 0x28],0x0
// 00429ffd: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x38] (READ)
// 0042a004: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0042a008: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xf4] (READ)
// 0042a00c: INC EAX
// 0042a00d: LEA EBX,[ESP + 0x44]
//   XREF to: Stack[-0xb4] (DATA)
// 0042a011: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0042a018: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0042a01c: FLD float ptr [EAX]
//   XREF to: Stack[-0x84] (DATA)
// 0042a01e: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042a024: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xb4] (DATA)
// 0042a026: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x80] (READ)
// 0042a029: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042a02f: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xb0] (WRITE)
// 0042a032: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 0042a035: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042a03b: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xac] (WRITE)
// 0042a03e: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0xb4] (DATA)
// 0042a042: PUSH EAX
// 0042a043: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0042a045: ADD EAX,ESI
// 0042a047: PUSH EAX
// 0042a048: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0042a04d: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042a052: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042a054: MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff
// 0042a05c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042a05e: MOV dword ptr [EDX + ESI*0x1 + 0x24],0x0
// 0042a066: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042a068: ADD ESP,0x8
// 0042a06b: MOV dword ptr [EDX + ESI*0x1 + 0x28],0x0
// 0042a073: CMP dword ptr [ESP + 0xdc],0x0
//   XREF to: Stack[-0x1c] (READ)
// 0042a07b: JLE 0x0042a0d6
//   XREF to: 0042a0d6 (CONDITIONAL_JUMP)
// 0042a07d: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xf4] (READ)
// 0042a081: SUB EDX,0x2
// 0042a084: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0xd0] (WRITE)
// 0042a088: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xf4] (READ)
// 0042a08c: MOV ECX,0x4
// 0042a091: DEC EDX
// 0042a092: PUSH 0x4000
// 0042a097: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0xcc] (WRITE)
// 0042a09b: MOV EDX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x34] (READ)
// 0042a0a2: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0042a0a3: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0xc8] (WRITE)
// 0042a0a7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xf4] (READ)
// 0042a0ab: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0xe4] (WRITE)
// 0042a0af: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 0042a0b3: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0042a0b8: ADD ESP,0x8
// 0042a0bb: MOV EBX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x2c] (READ)
// 0042a0c2: PUSH EBX
// 0042a0c3: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xe8] (DATA)
// 0042a0c7: PUSH EAX
// 0042a0c8: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042a0cd: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0042a0ce: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 0042a0d3: ADD ESP,0xc
// 0042a0d6: MOV EDX,dword ptr [ESP + 0xdc]
//   Label: LAB_0042a0d6
//   XREF to: Stack[-0x1c] (READ)
// 0042a0dd: ADD EDI,0x60
// 0042a0e0: INC EDX
// 0042a0e1: ADD ESI,0x60
// 0042a0e4: MOV dword ptr [ESP + 0xdc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0042a0eb: CMP EDX,0x18
// 0042a0ee: JLE 0x00429f44
//   XREF to: 00429f44 (CONDITIONAL_JUMP)
// 0042a0f4: LEA EBX,[ESP + 0x38]
//   XREF to: Stack[-0xc0] (DATA)
// 0042a0f8: MOV EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 0042a0fd: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042a103: FLD float ptr [EAX]
//   XREF to: 03f87558 (READ)
// 0042a105: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042a10b: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xc0] (DATA)
// 0042a10d: FLD float ptr [EAX + 0x4]
//   XREF to: 03f8755c (READ)
// 0042a110: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042a116: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xbc] (WRITE)
// 0042a119: FLD float ptr [EAX + 0x8]
//   XREF to: 03f87560 (READ)
// 0042a11c: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042a122: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xb8] (WRITE)
// 0042a125: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0xc0] (DATA)
// 0042a129: PUSH EAX
// 0042a12a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0042a12c: PUSH EAX
// 0042a12d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0042a132: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0042a137: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042a139: MOV dword ptr [EDX + 0x20],0xffff
// 0042a140: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042a142: XOR EDI,EDI
// 0042a144: MOV dword ptr [EDX + 0x24],0x0
// 0042a14b: ADD ESP,0x8
// 0042a14e: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042a150: MOV ESI,0x30
// 0042a155: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0xf0] (WRITE)
// 0042a159: MOV dword ptr [EAX + 0x28],0x0
// 0042a160: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0042a160
//   XREF to: Stack[-0xf0] (READ)
// 0042a164: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042a16b: FILD dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 0042a172: FMUL double ptr [0x006170b2]
//   XREF to: 006170b2 (READ)
// 0042a178: FMUL double ptr [0x006170ba]
//   XREF to: 006170ba (READ)
// 0042a17e: FLD ST0
// 0042a180: FSIN
// 0042a182: FXCH
// 0042a184: FCOS
// 0042a186: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042a189: FLD float ptr [EAX + 0x2ddc]
// 0042a18f: FMULP ST2
// 0042a191: FLD float ptr [EAX + 0x261c]
// 0042a197: FMULP ST2
// 0042a199: FXCH
// 0042a19b: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x84] (WRITE)
// 0042a19f: FMUL float ptr [EAX + 0x2ddc]
// 0042a1a5: FMUL float ptr [EAX + 0x261c]
// 0042a1ab: LEA EBX,[ESP + 0x50]
//   XREF to: Stack[-0xa8] (DATA)
// 0042a1af: XOR EAX,EAX
// 0042a1b1: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042a1b7: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0042a1bb: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x84] (DATA)
// 0042a1bf: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x7c] (WRITE)
// 0042a1c3: FLD float ptr [EAX]
//   XREF to: Stack[-0x84] (DATA)
// 0042a1c5: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042a1cb: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xa8] (DATA)
// 0042a1cd: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x80] (READ)
// 0042a1d0: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042a1d6: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xa4] (WRITE)
// 0042a1d9: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 0042a1dc: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042a1e2: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xa0] (WRITE)
// 0042a1e5: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0xa8] (DATA)
// 0042a1e9: PUSH EAX
// 0042a1ea: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0042a1ec: ADD EAX,ESI
// 0042a1ee: PUSH EAX
// 0042a1ef: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0042a1f4: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042a1f9: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042a1fb: MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff
// 0042a203: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042a205: MOV dword ptr [EDX + ESI*0x1 + 0x24],0x0
// 0042a20d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042a20f: ADD ESP,0x8
// 0042a212: MOV dword ptr [EDX + ESI*0x1 + 0x28],0x0
// 0042a21a: TEST EDI,EDI
// 0042a21c: JLE 0x0042a261
//   XREF to: 0042a261 (CONDITIONAL_JUMP)
// 0042a21e: MOV EDX,0x3
// 0042a223: PUSH 0x4000
// 0042a228: XOR ECX,ECX
// 0042a22a: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0xe4] (WRITE)
// 0042a22e: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0xd0] (WRITE)
// 0042a232: LEA EDX,[EDI + -0x1]
// 0042a235: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0042a236: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0xcc] (WRITE)
// 0042a23a: MOV dword ptr [ESP + 0x38],EDI
//   XREF to: Stack[-0xc8] (WRITE)
// 0042a23e: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0042a243: ADD ESP,0x8
// 0042a246: MOV EBX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x2c] (READ)
// 0042a24d: PUSH EBX
// 0042a24e: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xe8] (DATA)
// 0042a252: PUSH EAX
// 0042a253: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042a258: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0042a259: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 0042a25e: ADD ESP,0xc
// 0042a261: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0042a261
//   XREF to: Stack[-0xf0] (READ)
// 0042a265: INC EDI
// 0042a266: ADD EDX,0x2
// 0042a269: ADD ESI,0x30
// 0042a26c: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0xf0] (WRITE)
// 0042a270: CMP EDI,0x18
// 0042a273: JLE 0x0042a160
//   XREF to: 0042a160 (CONDITIONAL_JUMP)
// 0042a279: PUSH 0xffff
// 0042a27e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042a284: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0042a285: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0042a28a: ADD ESP,0x8
// 0042a28d: MOV ESP,EBP
// 0042a28f: POP EBP
// 0042a290: POP EDI
// 0042a291: POP ESI
// 0042a292: POP EBX
// 0042a293: RET
// 0042a294: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0042a294
//   XREF to: Stack[0x4] (READ)
// 0042a297: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0xec] (READ)
// 0042a29b: FLD float ptr [EAX + 0x261c]
// 0042a2a1: FMUL double ptr [0x006170aa]
//   XREF to: 006170aa (READ)
// 0042a2a7: FADDP
// 0042a2a9: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x38] (WRITE)
// 0042a2b0: JMP 0x00429f0f
//   XREF to: 00429f0f (UNCONDITIONAL_JUMP)
