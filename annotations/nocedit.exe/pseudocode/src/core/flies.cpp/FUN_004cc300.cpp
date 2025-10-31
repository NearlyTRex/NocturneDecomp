// Name: core_flies.cpp_FUN_004cc300
// Address: 004cc300
// Address Range: [[004cc300, 004cc6f2]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc300()
// Globals:
//   double DOUBLE_0062a42e = 0.015625
//   float FLOAT_0062a436 = 64
//   double DOUBLE_0062a43e = 0.5
//   undefined4 DAT_0065e500
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   SMRGLTextureBasic DAT_0067b514
//   undefined4 DAT_00800000
//   CDemonRenderer g_CDemonRendererInstance
//   int g_UseExternalRenderer
//   float g_PerspectiveReciprocal
//   int INT_02d7a7c0
//   undefined4 DAT_02d7a800
//   undefined4 DAT_02d7a804
//   undefined4 DAT_02d7a808
//   undefined4 DAT_02d7a828
//   undefined4 DAT_02d7afe8
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_flies.cpp_FUN_004cc230
//   core_stairs.cpp_FUN_005b90a0
//   core_stairs.cpp_FUN_005b92d0
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   engine_prim.c_replaceWWithDepth_FUN_00552110
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_flies.cpp_FUN_004cc300(undefined4 param_1) */

int core_flies_cpp_FUN_004cc300
              (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
              CDemonActor *param_5)

{
  short *psVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr;
  int iVar4;
  uint uVar5;
  float fVar6;
  CDemonActor *pCVar7;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar8;
  SRenderVertex *vertices;
  SRenderVertex *pSVar9;
  byte bVar10;
  float *pfVar11;
  CBoundingBox3D aCStack_50 [2];
  
  bVar10 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar3 == 0) {
    param_5[0x1f].create_prob = 0.0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(param_5);
    this_ptr = (*((param_5->metadata).vtable)->getBoundingBox)(param_5,aCStack_50);
    iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    iVar3 = INT_02d7a7c0;
    if (iVar4 != 0) {
      param_5[0x1f].create_prob = 1.4013e-45;
      if (iVar3 == 0) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          core_stairs_cpp_FUN_005b90a0();
        } while (iVar3 < 0x40);
        INT_02d7a7c0 = 1;
      }
      pCVar2 = g_CDemonRendererPtr;
      if (g_UseExternalRenderer == 0) {
        engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0,0,0);
        uVar5 = (int)g_PerspectiveReciprocal >> 8;
        DAT_02d7a800 = uVar5 | uVar5 << 8 | uVar5 << 0x10;
        DAT_02d7a804 = DAT_02d7a800 ^ 0xffffff;
      }
      else {
        aCStack_50[0].min.y = 1.1754944e-38;
        aCStack_50[0].min.z = 1.1754944e-38;
        aCStack_50[0].min.x = 2.8026e-45;
        g_CDemonRendererPtr->vertex_buffer_ptr->light = 0.0;
        pCVar2->vertex_buffer_ptr->color = 0;
        pCVar2->vertex_buffer_ptr->fog = 0.0;
        pCVar2->vertex_buffer_ptr[1].light = 0.0;
        pCVar2->vertex_buffer_ptr[1].color = 0;
        pCVar2->vertex_buffer_ptr[1].fog = 0.0;
        pCVar2->vertex_buffer_ptr[2].light = 0.0;
        pCVar2->vertex_buffer_ptr[2].color = 0;
        fVar6 = g_PerspectiveReciprocal;
        pCVar2->vertex_buffer_ptr[2].fog = 0.0;
        fVar6 = (float)(0xffff - (int)fVar6);
        pCVar2->vertex_buffer_ptr->w_recip = fVar6;
        pCVar2->vertex_buffer_ptr[1].w_recip = fVar6;
        pCVar2->vertex_buffer_ptr[2].w_recip = fVar6;
        engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&DAT_0067b514);
      }
      unaff_EBX = 0;
      if (0 < (int)*(CDemonActor **)(param_5[1].actor_name + 0xc)) {
        pfVar11 = (float *)(param_5[1].actor_name + 0x10);
        pCVar7 = *(CDemonActor **)(param_5[1].actor_name + 0xc);
        do {
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pCVar7,pfVar11));
          core_stairs_cpp_FUN_005b92d0();
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                     (CVector3i *)&stack0xfffffff4);
          pCVar2 = g_CDemonRendererPtr;
          vertices = g_CDemonRendererPtr->vertex_buffer_ptr;
          if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
            iVar4 = (vertices->projected_vertex).screen_y >> 0x10;
            iVar3 = (vertices->projected_vertex).screen_x >> 0x10;
            if (g_UseExternalRenderer == 0) {
              engine_prim_c_replaceWWithDepth_FUN_00552110(vertices,1);
              if ((((-1 < iVar3) && (iVar3 < g_WindowWidth)) && (-1 < iVar4)) &&
                 (iVar4 < g_WindowHeight)) {
                core_flies_cpp_FUN_004cc230();
              }
            }
            else if ((iVar3 < g_WindowWidth + -1) && (iVar4 < g_WindowHeight + -1)) {
              *(undefined2 *)&(vertices->projected_vertex).screen_x = 0;
              *(undefined2 *)&(vertices->projected_vertex).screen_y = 0;
              pSVar8 = vertices;
              pSVar9 = pCVar2->vertex_buffer_ptr + 1;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                (pSVar9->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
                pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar10 * -8 + 4);
                pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
              }
              pSVar8 = pCVar2->vertex_buffer_ptr + 2;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                (pSVar8->projected_vertex).transformed_x =
                     (vertices->projected_vertex).transformed_x;
                vertices = (SRenderVertex *)((int)vertices + (uint)bVar10 * -8 + 4);
                pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
              }
              psVar1 = (short *)((int)&pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x + 2);
              *psVar1 = *psVar1 + 1;
              *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                   *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) + 1;
              engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                        (pCVar2,(SMRGLHeaderPrimitive *)&stack0xffffff80,999);
            }
          }
          pfVar11 = pfVar11 + 0xd;
          unaff_EBX = unaff_EBX + 1;
          pCVar7 = param_5;
        } while (unaff_EBX < *(int *)(param_5[1].actor_name + 0xc));
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(param_5);
    return unaff_EBX;
  }
  return 0;
}


// Assembly code:
// 004cc300: PUSH EBX
//   Label: core_flies.cpp_FUN_004cc300
// 004cc301: PUSH ESI
// 004cc302: PUSH EDI
// 004cc303: PUSH EBP
// 004cc304: MOV EBP,ESP
// 004cc306: SUB ESP,0x8c
// 004cc30c: AND ESP,0xfffffff8
// 004cc30f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004cc315: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004cc316: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004cc31b: ADD ESP,0x4
// 004cc31e: TEST EAX,EAX
// 004cc320: JZ 0x004cc32b
//   XREF to: 004cc32b (CONDITIONAL_JUMP)
// 004cc322: XOR EAX,EAX
// 004cc324: MOV ESP,EBP
// 004cc326: POP EBP
// 004cc327: POP EDI
// 004cc328: POP ESI
// 004cc329: POP EBX
// 004cc32a: RET
// 004cc32b: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004cc32b
//   XREF to: Stack[0x4] (READ)
// 004cc32e: PUSH EAX
// 004cc32f: MOV dword ptr [EAX + 0x2a1c],0x0
// 004cc339: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004cc33e: ADD ESP,0x4
// 004cc341: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x58] (DATA)
// 004cc345: PUSH EAX
// 004cc346: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cc349: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cc34c: PUSH EBX
// 004cc34d: MOV EDX,dword ptr [EDX + 0x154]
// 004cc353: CALL dword ptr [EDX + 0x14]
// 004cc356: ADD ESP,0x8
// 004cc359: PUSH EAX
// 004cc35a: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004cc35f: ADD ESP,0x4
// 004cc362: MOV dword ptr [ESP + 0x78],EAX
// 004cc366: TEST EAX,EAX
// 004cc368: JZ 0x004cc5b8
//   XREF to: 004cc5b8 (CONDITIONAL_JUMP)
// 004cc36e: MOV ESI,dword ptr [0x02d7a7c0]
//   XREF to: 02d7a7c0 (READ)
// 004cc374: MOV dword ptr [EBX + 0x2a1c],0x1
// 004cc37e: TEST ESI,ESI
// 004cc380: JNZ 0x004cc3c7
//   XREF to: 004cc3c7 (CONDITIONAL_JUMP)
// 004cc382: MOV ESI,0x2d7a808
//   XREF to: 02d7a808 (DATA)
// 004cc387: XOR EBX,EBX
// 004cc389: MOV dword ptr [ESP + 0x88],EBX
//   Label: LAB_004cc389
// 004cc390: FILD dword ptr [ESP + 0x88]
// 004cc397: FADD double ptr [0x0062a43e]
//   XREF to: 0062a43e (READ)
// 004cc39d: FMUL double ptr [0x0062a42e]
//   XREF to: 0062a42e (READ)
// 004cc3a3: PUSH 0x0
// 004cc3a5: SUB ESP,0x4
// 004cc3a8: FSTP float ptr [ESP]
// 004cc3ab: PUSH ESI
//   XREF to: 02d7a808 (DATA)
//   XREF to: 02d7a828 (DATA)
// 004cc3ac: INC EBX
// 004cc3ad: CALL core_stairs.cpp_FUN_005b90a0
//   XREF to: 005b90a0 (UNCONDITIONAL_CALL)
// 004cc3b2: ADD ESP,0xc
// 004cc3b5: ADD ESI,0x20
// 004cc3b8: CMP EBX,0x40
// 004cc3bb: JL 0x004cc389
//   XREF to: 004cc389 (CONDITIONAL_JUMP)
// 004cc3bd: MOV dword ptr [0x02d7a7c0],0x1
//   XREF to: 02d7a7c0 (WRITE)
// 004cc3c7: MOV EAX,[0x02d03e94]
//   Label: LAB_004cc3c7
//   XREF to: 02d03e94 (READ)
// 004cc3cc: TEST EAX,EAX
// 004cc3ce: JZ 0x004cc5cf
//   XREF to: 004cc5cf (CONDITIONAL_JUMP)
// 004cc3d4: MOV ECX,0x3
// 004cc3d9: MOV ESI,0x800000
//   XREF to: 00800000 (DATA)
// 004cc3de: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004cc3e3: XOR EBX,EBX
// 004cc3e5: MOV dword ptr [ESP + 0x4],ECX
// 004cc3e9: MOV dword ptr [ESP + 0x14],EBX
// 004cc3ed: MOV dword ptr [ESP + 0x10],EBX
// 004cc3f1: MOV dword ptr [ESP + 0xc],EBX
// 004cc3f5: MOV dword ptr [ESP + 0x8],EBX
// 004cc3f9: MOV dword ptr [ESP + 0x18],EBX
// 004cc3fd: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: 00800000 (DATA)
// 004cc401: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: 00800000 (DATA)
// 004cc405: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: 00800000 (DATA)
// 004cc409: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: 00800000 (DATA)
// 004cc40d: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: 00800000 (DATA)
// 004cc411: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: 00800000 (DATA)
// 004cc415: MOV ECX,0x1
// 004cc41a: MOV EBX,0x2
// 004cc41f: MOV dword ptr [ESP + 0x24],ECX
// 004cc423: MOV dword ptr [ESP + 0x30],EBX
// 004cc427: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc429: MOV dword ptr [EDX + 0x20],0x0
// 004cc430: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc432: MOV dword ptr [EDX + 0x24],0x0
// 004cc439: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc43b: MOV dword ptr [EDX + 0x28],0x0
// 004cc442: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc444: MOV dword ptr [EDX + 0x50],0x0
// 004cc44b: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc44d: MOV dword ptr [EDX + 0x54],0x0
// 004cc454: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc456: MOV dword ptr [EDX + 0x58],0x0
// 004cc45d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc45f: MOV dword ptr [EDX + 0x80],0x0
// 004cc469: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc46b: MOV dword ptr [EDX + 0x84],0x0
// 004cc475: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc477: MOV ESI,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004cc47d: MOV dword ptr [EDX + 0x88],0x0
// 004cc487: MOV EDX,0xffff
// 004cc48c: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc48e: SUB EDX,ESI
// 004cc490: MOV dword ptr [EBX + 0x2c],EDX
// 004cc493: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc495: MOV dword ptr [EBX + 0x5c],EDX
// 004cc498: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc49a: PUSH 0x67b514
//   XREF to: 0067b514 (DATA)
// 004cc49f: MOV dword ptr [EAX + 0x8c],EDX
// 004cc4a5: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 004cc4aa: ADD ESP,0x4
// 004cc4ad: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004cc4ad
//   XREF to: Stack[0x4] (READ)
// 004cc4b0: XOR EDI,EDI
// 004cc4b2: MOV EDX,dword ptr [EAX + 0x164]
// 004cc4b8: MOV dword ptr [ESP + 0x7c],EDI
// 004cc4bc: TEST EDX,EDX
// 004cc4be: JLE 0x004cc5b8
//   XREF to: 004cc5b8 (CONDITIONAL_JUMP)
// 004cc4c4: ADD EAX,0x168
// 004cc4c9: MOV dword ptr [ESP + 0x80],EAX
// 004cc4d0: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_004cc4d0
// 004cc4d7: FLD float ptr [EAX]
// 004cc4d9: FMUL float ptr [0x0062a436]
//   XREF to: 0062a436 (READ)
// 004cc4df: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004cc4e4: FISTP dword ptr [ESP + 0x84]
// 004cc4eb: MOV EDI,dword ptr [ESP + 0x84]
// 004cc4f2: TEST EDI,EDI
// 004cc4f4: JL 0x004cc61a
//   XREF to: 004cc61a (CONDITIONAL_JUMP)
// 004cc4fa: CMP EDI,0x40
// 004cc4fd: JL 0x004cc50a
//   XREF to: 004cc50a (CONDITIONAL_JUMP)
// 004cc4ff: MOV dword ptr [ESP + 0x84],0x3f
// 004cc50a: LEA EDX,[EAX + 0x28]
//   Label: LAB_004cc50a
// 004cc50d: PUSH EDX
// 004cc50e: LEA EDX,[EAX + 0x1c]
// 004cc511: PUSH EDX
// 004cc512: LEA EDX,[EAX + 0x10]
// 004cc515: PUSH EDX
// 004cc516: ADD EAX,0x4
// 004cc519: PUSH EAX
// 004cc51a: LEA EAX,[ESP + 0x70]
// 004cc51e: PUSH EAX
// 004cc51f: MOV EAX,dword ptr [ESP + 0x98]
// 004cc526: SHL EAX,0x5
// 004cc529: ADD EAX,0x2d7a808
//   XREF to: 02d7afe8 (PARAM)
//   XREF to: 02d7a808 (DATA)
// 004cc52e: PUSH EAX
//   XREF to: 02d7afe8 (DATA)
// 004cc52f: LEA EBX,[ESP + 0x84]
// 004cc536: CALL core_stairs.cpp_FUN_005b92d0
//   XREF to: 005b92d0 (UNCONDITIONAL_CALL)
// 004cc53b: ADD ESP,0x18
// 004cc53e: LEA EAX,[ESP + 0x60]
// 004cc542: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004cc548: FLD float ptr [EAX]
// 004cc54a: FMUL float ptr [0x0065e500]
//   XREF to: 0065e500 (READ)
// 004cc550: FISTP dword ptr [EBX]
// 004cc552: FLD float ptr [EAX + 0x4]
// 004cc555: FMUL float ptr [0x0065e500]
//   XREF to: 0065e500 (READ)
// 004cc55b: FISTP dword ptr [EBX + 0x4]
// 004cc55e: FLD float ptr [EAX + 0x8]
// 004cc561: FMUL float ptr [0x0065e500]
//   XREF to: 0065e500 (READ)
// 004cc567: FISTP dword ptr [EBX + 0x8]
// 004cc56a: LEA EAX,[ESP + 0x6c]
// 004cc56e: PUSH EAX
// 004cc56f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004cc571: PUSH EAX
// 004cc572: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004cc577: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004cc57c: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc57e: MOV DL,byte ptr [EBX + 0x13]
// 004cc581: ADD ESP,0x8
// 004cc584: TEST DL,0x80
// 004cc587: JZ 0x004cc628
//   XREF to: 004cc628 (CONDITIONAL_JUMP)
// 004cc58d: MOV ECX,dword ptr [ESP + 0x80]
//   Label: LAB_004cc58d
// 004cc594: MOV EBX,dword ptr [ESP + 0x7c]
// 004cc598: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cc59b: ADD ECX,0x34
// 004cc59e: INC EBX
// 004cc59f: MOV ESI,dword ptr [EDX + 0x164]
// 004cc5a5: MOV dword ptr [ESP + 0x80],ECX
// 004cc5ac: MOV dword ptr [ESP + 0x7c],EBX
// 004cc5b0: CMP EBX,ESI
// 004cc5b2: JL 0x004cc4d0
//   XREF to: 004cc4d0 (CONDITIONAL_JUMP)
// 004cc5b8: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_004cc5b8
//   XREF to: Stack[0x4] (READ)
// 004cc5bb: PUSH ESI
// 004cc5bc: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004cc5c1: ADD ESP,0x4
// 004cc5c4: MOV EAX,dword ptr [ESP + 0x78]
// 004cc5c8: MOV ESP,EBP
// 004cc5ca: POP EBP
// 004cc5cb: POP EDI
// 004cc5cc: POP ESI
// 004cc5cd: POP EBX
// 004cc5ce: RET
// 004cc5cf: PUSH EAX
//   Label: LAB_004cc5cf
// 004cc5d0: PUSH EAX
// 004cc5d1: PUSH EAX
// 004cc5d2: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004cc5d8: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004cc5d9: CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   XREF to: 0048c970 (UNCONDITIONAL_CALL)
// 004cc5de: MOV EAX,[0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004cc5e3: SAR EAX,0x8
// 004cc5e6: MOV [0x02d7a800],EAX
//   XREF to: 02d7a800 (WRITE)
// 004cc5eb: MOV EDX,dword ptr [0x02d7a800]
//   XREF to: 02d7a800 (READ)
// 004cc5f1: SHL EAX,0x8
// 004cc5f4: OR EDX,EAX
// 004cc5f6: MOV EAX,[0x02d7a800]
//   XREF to: 02d7a800 (READ)
// 004cc5fb: SHL EAX,0x10
// 004cc5fe: OR EDX,EAX
// 004cc600: MOV EAX,EDX
// 004cc602: ADD ESP,0x10
// 004cc605: XOR EAX,0xffffff
// 004cc60a: MOV dword ptr [0x02d7a800],EDX
//   XREF to: 02d7a800 (WRITE)
// 004cc610: MOV [0x02d7a804],EAX
//   XREF to: 02d7a804 (WRITE)
// 004cc615: JMP 0x004cc4ad
//   XREF to: 004cc4ad (UNCONDITIONAL_JUMP)
// 004cc61a: XOR EBX,EBX
//   Label: LAB_004cc61a
// 004cc61c: MOV dword ptr [ESP + 0x84],EBX
// 004cc623: JMP 0x004cc50a
//   XREF to: 004cc50a (UNCONDITIONAL_JUMP)
// 004cc628: MOV EDX,dword ptr [0x02d03e94]
//   Label: LAB_004cc628
//   XREF to: 02d03e94 (READ)
// 004cc62e: MOV EDI,dword ptr [EBX + 0x14]
// 004cc631: MOV ESI,dword ptr [EBX + 0x10]
// 004cc634: SAR EDI,0x10
// 004cc637: SAR ESI,0x10
// 004cc63a: TEST EDX,EDX
// 004cc63c: JZ 0x004cc6ad
//   XREF to: 004cc6ad (CONDITIONAL_JUMP)
// 004cc63e: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004cc644: DEC EDX
// 004cc645: CMP ESI,EDX
// 004cc647: JGE 0x004cc58d
//   XREF to: 004cc58d (CONDITIONAL_JUMP)
// 004cc64d: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004cc653: DEC EDX
// 004cc654: CMP EDI,EDX
// 004cc656: JGE 0x004cc58d
//   XREF to: 004cc58d (CONDITIONAL_JUMP)
// 004cc65c: MOV word ptr [EBX + 0x10],0x0
// 004cc662: MOV word ptr [EBX + 0x14],0x0
// 004cc668: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc66a: MOV ECX,0xc
// 004cc66f: LEA EDI,[ESI + 0x30]
// 004cc672: MOV ESI,EBX
// 004cc674: MOVSD.REP ES:EDI,ESI
// 004cc676: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc678: MOV ECX,0xc
// 004cc67d: LEA EDI,[ESI + 0x60]
// 004cc680: MOV ESI,EBX
// 004cc682: MOVSD.REP ES:EDI,ESI
// 004cc684: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc686: INC word ptr [EBX + 0x42]
// 004cc68a: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004cc68c: PUSH 0x3e7
// 004cc691: LEA EDX,[ESP + 0x4]
// 004cc695: MOV CX,word ptr [EBX + 0x76]
// 004cc699: PUSH EDX
// 004cc69a: INC ECX
// 004cc69b: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004cc69c: MOV word ptr [EBX + 0x76],CX
// 004cc6a0: CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
// 004cc6a5: ADD ESP,0xc
// 004cc6a8: JMP 0x004cc58d
//   XREF to: 004cc58d (UNCONDITIONAL_JUMP)
// 004cc6ad: PUSH 0x1
//   Label: LAB_004cc6ad
// 004cc6af: PUSH EBX
// 004cc6b0: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 004cc6b5: ADD ESP,0x8
// 004cc6b8: MOV EAX,dword ptr [EBX + 0x8]
// 004cc6bb: TEST ESI,ESI
// 004cc6bd: JL 0x004cc58d
//   XREF to: 004cc58d (CONDITIONAL_JUMP)
// 004cc6c3: CMP ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004cc6c9: JGE 0x004cc58d
//   XREF to: 004cc58d (CONDITIONAL_JUMP)
// 004cc6cf: TEST EDI,EDI
// 004cc6d1: JL 0x004cc58d
//   XREF to: 004cc58d (CONDITIONAL_JUMP)
// 004cc6d7: CMP EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004cc6dd: JGE 0x004cc58d
//   XREF to: 004cc58d (CONDITIONAL_JUMP)
// 004cc6e3: PUSH EAX
// 004cc6e4: PUSH EDI
// 004cc6e5: PUSH ESI
// 004cc6e6: CALL core_flies.cpp_FUN_004cc230
//   XREF to: 004cc230 (UNCONDITIONAL_CALL)
// 004cc6eb: ADD ESP,0xc
// 004cc6ee: JMP 0x004cc58d
//   XREF to: 004cc58d (UNCONDITIONAL_JUMP)
