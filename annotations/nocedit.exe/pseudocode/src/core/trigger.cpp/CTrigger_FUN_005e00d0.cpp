// Name: core_trigger.cpp_CTrigger_FUN_005e00d0
// Address: 005e00d0
// Address Range: [[005e00d0, 005e0623]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_FUN_005e00d0(CTrigger * this_ptr)
// Globals:
//   void* switchdataD_005e00a4 = 005e0159
//   undefined4 DAT_0065563c
//   undefined4 DAT_00655644
//   undefined4 DAT_0065564c
//   undefined4 DAT_00655654
//   undefined4 DAT_0065565c
//   undefined4 DAT_00655664
//   undefined4 DAT_00664a00
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   SMRGLTextureBasic DAT_0068434c
//   undefined4 DAT_00800000
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_FUN_0040dec0
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_trigger_cpp_CTrigger_FUN_005e00d0(CTrigger *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int extraout_ECX;
  undefined4 extraout_EDX;
  CDemonRenderer *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  int *piVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int iStack0000001c;
  int in_stack_00000028;
  float in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  float in_stack_0000003c;
  float fVar12;
  float in_stack_ffffff7c;
  undefined1 auStack_80 [8];
  SMRGLHeaderPrimitive SStack_78;
  CBoundingBox3D CStack_60;
  int iStack_48;
  float fStack_38;
  float fStack_30;
  CVector3i CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar1 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffff64);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    if (iVar1 != 0) {
      switch(*(undefined4 *)(this_ptr->field1_0x158 + 0x1c)) {
      default:
        iVar1 = 0xff;
        iVar3 = 0;
        break;
      case 1:
        iVar1 = 0;
        iVar3 = 0xff;
        break;
      case 2:
        iVar1 = 0xff;
        iVar3 = 0xff;
        break;
      case 3:
        iVar3 = 0xff;
        iVar1 = 0;
        break;
      case 4:
        iVar1 = 0xff;
        iVar3 = 0;
        break;
      case 5:
        iVar3 = 0xff;
        iVar1 = iVar3;
        break;
      case 6:
        iVar3 = 0;
        iVar1 = 0x80;
        break;
      case 7:
        iVar3 = 0;
        iVar1 = 0;
        break;
      case 8:
        iVar3 = 0x100;
        iVar1 = 0;
      }
      if (this_ptr == *(CTrigger **)(g_CDemonMissionPtr->field2_0xc + 0x1c)) {
        iVar5 = 0x80;
      }
      else {
        iVar5 = 0x40;
      }
      if (*(int *)(this_ptr->field1_0x158 + 0x18) == 1) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,this_ptr));
        (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                  (&this_ptr->base_actor,&CStack_60);
        CStack_28.x = 0;
        CStack_28.z = 0;
        CStack_28.y = iStack_48;
        fVar9 = (float10)(*(float *)(this_ptr->field1_0x158 + 8) * (float)_DAT_0065564c) *
                (float10)_DAT_00655654;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(g_CDemonRendererPtr,iStack_48));
        pCVar2 = (CDemonRenderer *)((ulonglong)dVar11 >> 0x20);
        iStack0000001c = (int)ROUND(fVar9);
        *(int *)(extraout_ECX + 0x20) = iStack0000001c;
        pCVar2->vertex_buffer_ptr->color = iVar1 << 8;
        pCVar2->vertex_buffer_ptr->fog = (float)(iVar3 << 8);
        pCVar2->vertex_buffer_ptr->w_recip = (float)(iVar5 << 8);
        pCVar2->vertex_buffer_ptr->u = 1.1754944e-38;
        pCVar2->vertex_buffer_ptr->v = 1.1754944e-38;
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(pCVar2,&DAT_0068434c);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&stack0xfffffff8);
        pCVar2 = g_CDemonRendererPtr;
        fStack_18 = fStack_30;
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr + 1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar6->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
        }
        CStack_28.x = (int)ROUND(fStack_1c * _DAT_00664a00);
        CStack_28.y = (int)ROUND(fStack_30 * _DAT_00664a00);
        CStack_28.z = (int)ROUND(fStack_14 * _DAT_00664a00);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar2->vertex_buffer_ptr[1].projected_vertex,&CStack_28);
        fVar12 = 0.0;
        if (-1 < (int)auStack_80._0_4_) {
          in_stack_00000030 = 0x60;
          in_stack_00000034 = 0x90;
          do {
            pCVar2 = g_CDemonRendererPtr;
            in_stack_00000038 = auStack_80._0_4_;
            fVar10 = ((float10)(int)fVar12 * (float10)_DAT_0065565c * (float10)_DAT_00655664) /
                     (float10)(int)auStack_80._0_4_;
            fVar9 = (float10)fsin(fVar10);
            fcos(fVar10);
            fStack_14 = fStack_38;
            fStack_18 = (float)(fVar9 * (float10)in_stack_ffffff7c);
            pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar7 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + in_stack_00000030);
            for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = (pSVar4->projected_vertex).transformed_x;
              pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       in_stack_00000030),(CVector3i *)&stack0xfffffff4);
            iVar1 = in_stack_00000030;
            pCVar2 = g_CDemonRendererPtr;
            fStack_18 = fStack_30;
            pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar7 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + in_stack_00000030);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar7 = (pSVar4->projected_vertex).transformed_x;
              pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            in_stack_00000008 = (int)ROUND(fStack_1c * _DAT_00664a00);
            in_stack_0000000c = (int)ROUND(fStack_30 * _DAT_00664a00);
            in_stack_00000010 = (int)ROUND(fStack_14 * _DAT_00664a00);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       in_stack_00000030),(CVector3i *)&stack0x00000008);
            in_stack_00000034 = iVar1 + 0x60;
            in_stack_00000030 = in_stack_00000030 + 0x60;
            fVar12 = (float)((int)fVar12 + 1);
          } while ((int)fVar12 <= (int)auStack_80._0_4_);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0)
        ;
        iVar1 = 0;
        if (0 < (int)auStack_80._4_4_) {
          do {
            iVar3 = iVar1 * 2;
            SStack_78.base.count = 4;
            in_stack_0000002c = (float)(iVar3 + 3);
            in_stack_0000003c = (float)(iVar3 + 2);
            CStack_60.min.x = (float)(iVar3 + 4);
            CStack_60.min.y = (float)(iVar3 + 5);
            CStack_60.min.z = in_stack_0000002c;
            CStack_60.max.x = in_stack_0000003c;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,&SStack_78,0x367);
            auStack_80._4_4_ = 3;
            SStack_78.surface_normal.D = in_stack_00000034;
            CStack_60.min.x = 0.0;
            SStack_78.surface_normal.C = iVar3 + 4;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)auStack_80,0x367);
            SStack_78.surface_normal.D = in_stack_00000028;
            CStack_60.min.y = 1.4013e-45;
            CStack_60.min.x = (float)(iVar3 + 5);
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(auStack_80 + 4),0x367);
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)auStack_80._4_4_);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1)
        ;
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
        return in_stack_00000038;
      }
      core_actor_cpp_FUN_0040dec0(&this_ptr->base_actor);
      return (int)this_ptr;
    }
  }
  return 0;
}


// Assembly code:
// 005e00d0: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_FUN_005e00d0
// 005e00d1: PUSH ESI
// 005e00d2: PUSH EDI
// 005e00d3: PUSH EBP
// 005e00d4: MOV EBP,ESP
// 005e00d6: SUB ESP,0xc4
// 005e00dc: AND ESP,0xfffffff8
// 005e00df: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005e00e4: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 005e00e8: JNZ 0x005e00f3
//   XREF to: 005e00f3 (CONDITIONAL_JUMP)
// 005e00ea: XOR EAX,EAX
//   Label: LAB_005e00ea
// 005e00ec: MOV ESP,EBP
// 005e00ee: POP EBP
// 005e00ef: POP EDI
// 005e00f0: POP ESI
// 005e00f1: POP EBX
// 005e00f2: RET
// 005e00f3: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_005e00f3
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e00f9: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005e00fa: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005e00ff: ADD ESP,0x4
// 005e0102: TEST EAX,EAX
// 005e0104: JNZ 0x005e00ea
//   XREF to: 005e00ea (CONDITIONAL_JUMP)
// 005e0106: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e0109: PUSH EBX
// 005e010a: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005e010f: ADD ESP,0x4
// 005e0112: LEA EDX,[ESP + 0x34]
//   XREF to: Stack[-0xa4] (DATA)
// 005e0116: PUSH EDX
// 005e0117: MOV EAX,dword ptr [EBX + 0x154]
// 005e011d: PUSH EBX
// 005e011e: CALL dword ptr [EAX + 0x14]
// 005e0121: ADD ESP,0x8
// 005e0124: PUSH EAX
// 005e0125: MOV ESI,EBX
// 005e0127: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005e012c: ADD ESP,0x4
// 005e012f: MOV EDI,ESI
// 005e0131: PUSH EDI
// 005e0132: MOV EBX,EAX
// 005e0134: MOV dword ptr [ESP + 0xb8],EAX
// 005e013b: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005e0140: ADD ESP,0x4
// 005e0143: TEST EBX,EBX
// 005e0145: JZ 0x005e00ea
//   XREF to: 005e00ea (CONDITIONAL_JUMP)
// 005e0147: MOV EAX,dword ptr [ESI + 0x174]
// 005e014d: CMP EAX,0x8
// 005e0150: JA 0x005e0159
//   XREF to: 005e0159 (CONDITIONAL_JUMP)
// 005e0152: JMP dword ptr [EAX*0x4 + 0x5e00a4]
//   Label: switchD
//   XREF to: 005e0159 (COMPUTED_JUMP)
//   XREF to: 005e058b (COMPUTED_JUMP)
//   XREF to: 005e0599 (COMPUTED_JUMP)
//   XREF to: 005e05a7 (COMPUTED_JUMP)
//   XREF to: 005e05b3 (COMPUTED_JUMP)
//   XREF to: 005e05c1 (COMPUTED_JUMP)
//   XREF to: 005e05cf (COMPUTED_JUMP)
//   XREF to: 005e05e0 (COMPUTED_JUMP)
//   XREF to: 005e05ee (COMPUTED_JUMP)
//   XREF to: 005e00a4 (DATA)
// 005e0159: MOV ESI,0xff
//   Label: caseD_0
// 005e015e: XOR EBX,EBX
// 005e0160: XOR EAX,EAX
//   Label: LAB_005e0160
// 005e0162: MOV EDX,dword ptr [0x0067d550]
//   Label: LAB_005e0162
//   XREF to: 0067d550 (READ)
// 005e0168: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e016b: CMP ECX,dword ptr [EDX + 0x28]
//   XREF to: 02f33768 (READ)
// 005e016e: JNZ 0x005e05ff
//   XREF to: 005e05ff (CONDITIONAL_JUMP)
// 005e0174: MOV EDI,0x80
// 005e0179: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_005e0179
//   XREF to: Stack[0x4] (READ)
// 005e017c: CMP dword ptr [EDX + 0x170],0x1
// 005e0183: JNZ 0x005e0609
//   XREF to: 005e0609 (CONDITIONAL_JUMP)
// 005e0189: PUSH EDX
// 005e018a: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005e018f: ADD ESP,0x4
// 005e0192: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e0195: FLD float ptr [EAX + 0x160]
// 005e019b: FMUL double ptr [0x0065563c]
//   XREF to: 0065563c (READ)
// 005e01a1: FADD double ptr [0x00655644]
//   XREF to: 00655644 (READ)
// 005e01a7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e01ac: FISTP dword ptr [ESP + 0x8]
// 005e01b0: CMP dword ptr [ESP + 0x8],0x28
// 005e01b5: JLE 0x005e01bf
//   XREF to: 005e01bf (CONDITIONAL_JUMP)
// 005e01b7: MOV dword ptr [ESP + 0x8],0x28
// 005e01bf: LEA EDX,[ESP + 0x4c]
//   Label: LAB_005e01bf
// 005e01c3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e01c6: PUSH EDX
// 005e01c7: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e01ca: MOV EAX,dword ptr [EAX + 0x154]
// 005e01d0: PUSH EDX
// 005e01d1: CALL dword ptr [EAX + 0x14]
// 005e01d4: ADD ESP,0x8
// 005e01d7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e01da: FLD float ptr [EAX + 0x160]
// 005e01e0: FMUL double ptr [0x0065564c]
//   XREF to: 0065564c (READ)
// 005e01e6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e01ec: XOR ECX,ECX
// 005e01ee: MOV EAX,dword ptr [ESP + 0x50]
// 005e01f2: MOV dword ptr [ESP + 0x70],ECX
// 005e01f6: MOV dword ptr [ESP + 0x78],ECX
// 005e01fa: FSTP float ptr [ESP + 0x4]
// 005e01fe: MOV dword ptr [ESP + 0x74],EAX
// 005e0202: FLD float ptr [ESP + 0x4]
// 005e0206: FMUL float ptr [0x00655654]
//   XREF to: 00655654 (READ)
// 005e020c: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e020e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e0213: FISTP dword ptr [ESP + 0xb0]
// 005e021a: MOV EAX,dword ptr [ESP + 0xb0]
// 005e0221: MOV dword ptr [ECX + 0x20],EAX
// 005e0224: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e0226: SHL ESI,0x8
// 005e0229: MOV dword ptr [EAX + 0x24],ESI
// 005e022c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e022e: SHL EBX,0x8
// 005e0231: MOV dword ptr [EAX + 0x28],EBX
// 005e0234: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e0236: SHL EDI,0x8
// 005e0239: MOV dword ptr [EAX + 0x2c],EDI
// 005e023c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e023e: MOV dword ptr [EAX + 0x18],0x800000
//   XREF to: 00800000 (DATA)
// 005e0245: PUSH 0x68434c
//   XREF to: 0068434c (DATA)
// 005e024a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e024c: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e024d: LEA EBX,[ESP + 0x90]
// 005e0254: MOV dword ptr [EAX + 0x1c],0x800000
//   XREF to: 00800000 (DATA)
// 005e025b: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005e0260: ADD ESP,0x8
// 005e0263: LEA EAX,[ESP + 0x70]
// 005e0267: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e026d: FLD float ptr [EAX]
// 005e026f: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e0275: FISTP dword ptr [EBX]
// 005e0277: FLD float ptr [EAX + 0x4]
// 005e027a: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e0280: FISTP dword ptr [EBX + 0x4]
// 005e0283: FLD float ptr [EAX + 0x8]
// 005e0286: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e028c: FISTP dword ptr [EBX + 0x8]
// 005e028f: LEA EAX,[ESP + 0x88]
// 005e0296: PUSH EAX
// 005e0297: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e0299: PUSH EAX
// 005e029a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005e029f: ADD ESP,0x8
// 005e02a2: MOV EAX,dword ptr [ESP + 0x5c]
// 005e02a6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e02ac: MOV dword ptr [ESP + 0x74],EAX
// 005e02b0: MOV ESI,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e02b2: MOV ECX,0xc
// 005e02b7: LEA EDI,[ESI + 0x30]
// 005e02ba: LEA EBX,[ESP + 0x64]
// 005e02be: LEA EAX,[ESP + 0x70]
// 005e02c2: MOVSD.REP ES:EDI,ESI
// 005e02c4: FLD float ptr [EAX]
// 005e02c6: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e02cc: FISTP dword ptr [EBX]
// 005e02ce: FLD float ptr [EAX + 0x4]
// 005e02d1: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e02d7: FISTP dword ptr [EBX + 0x4]
// 005e02da: FLD float ptr [EAX + 0x8]
// 005e02dd: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e02e3: FISTP dword ptr [EBX + 0x8]
// 005e02e6: LEA EAX,[ESP + 0x64]
// 005e02ea: PUSH EAX
// 005e02eb: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e02ed: ADD EAX,0x30
// 005e02f0: PUSH EAX
// 005e02f1: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005e02f6: ADD ESP,0x8
// 005e02f9: XOR EDX,EDX
// 005e02fb: MOV ECX,dword ptr [ESP + 0x8]
// 005e02ff: MOV dword ptr [ESP],EDX
// 005e0302: TEST ECX,ECX
// 005e0304: JL 0x005e0470
//   XREF to: 005e0470 (CONDITIONAL_JUMP)
// 005e030a: MOV EAX,0x60
// 005e030f: MOV EDI,0x90
// 005e0314: MOV dword ptr [ESP + 0xb8],EAX
// 005e031b: MOV dword ptr [ESP + 0xbc],EDI
// 005e0322: MOV EAX,dword ptr [ESP]
//   Label: LAB_005e0322
// 005e0325: MOV dword ptr [ESP + 0xc0],EAX
// 005e032c: FILD dword ptr [ESP + 0xc0]
// 005e0333: FMUL double ptr [0x0065565c]
//   XREF to: 0065565c (READ)
// 005e0339: MOV EAX,dword ptr [ESP + 0x8]
// 005e033d: FMUL double ptr [0x00655664]
//   XREF to: 00655664 (READ)
// 005e0343: MOV dword ptr [ESP + 0xc0],EAX
// 005e034a: FILD dword ptr [ESP + 0xc0]
// 005e0351: FDIVP
// 005e0353: FLD ST0
// 005e0355: FSIN
// 005e0357: FXCH
// 005e0359: FCOS
// 005e035b: FLD float ptr [ESP + 0x4]
// 005e035f: FXCH ST2
// 005e0361: FMUL ST2
// 005e0363: FXCH
// 005e0365: FMULP ST2
// 005e0367: MOV EDI,dword ptr [ESP + 0xb8]
// 005e036e: MOV EAX,dword ptr [ESP + 0x50]
// 005e0372: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e0378: MOV dword ptr [ESP + 0x74],EAX
// 005e037c: FSTP float ptr [ESP + 0x70]
// 005e0380: FSTP float ptr [ESP + 0x78]
// 005e0384: MOV ESI,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e0386: MOV ECX,0xc
// 005e038b: ADD EDI,ESI
// 005e038d: LEA EBX,[ESP + 0x7c]
// 005e0391: LEA EAX,[ESP + 0x70]
// 005e0395: MOVSD.REP ES:EDI,ESI
// 005e0397: FLD float ptr [EAX]
// 005e0399: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e039f: FISTP dword ptr [EBX]
// 005e03a1: FLD float ptr [EAX + 0x4]
// 005e03a4: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e03aa: FISTP dword ptr [EBX + 0x4]
// 005e03ad: FLD float ptr [EAX + 0x8]
// 005e03b0: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e03b6: FISTP dword ptr [EBX + 0x8]
// 005e03b9: LEA EAX,[ESP + 0x7c]
// 005e03bd: MOV EBX,dword ptr [ESP + 0xb8]
// 005e03c4: PUSH EAX
// 005e03c5: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e03c7: ADD EAX,EBX
// 005e03c9: PUSH EAX
// 005e03ca: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005e03cf: ADD ESP,0x8
// 005e03d2: MOV EAX,dword ptr [ESP + 0x5c]
// 005e03d6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e03dc: MOV dword ptr [ESP + 0x74],EAX
// 005e03e0: MOV EDI,dword ptr [ESP + 0xbc]
// 005e03e7: MOV ESI,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e03e9: MOV ECX,0xc
// 005e03ee: ADD EDI,ESI
// 005e03f0: LEA EBX,[ESP + 0x94]
// 005e03f7: LEA EAX,[ESP + 0x70]
// 005e03fb: MOVSD.REP ES:EDI,ESI
// 005e03fd: FLD float ptr [EAX]
// 005e03ff: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e0405: FISTP dword ptr [EBX]
// 005e0407: FLD float ptr [EAX + 0x4]
// 005e040a: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e0410: FISTP dword ptr [EBX + 0x4]
// 005e0413: FLD float ptr [EAX + 0x8]
// 005e0416: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005e041c: FISTP dword ptr [EBX + 0x8]
// 005e041f: LEA EAX,[ESP + 0x94]
// 005e0426: MOV ESI,dword ptr [ESP + 0xbc]
// 005e042d: PUSH EAX
// 005e042e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005e0430: ADD EAX,ESI
// 005e0432: PUSH EAX
// 005e0433: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005e0438: ADD ESP,0x8
// 005e043b: LEA EDI,[ESI + 0x60]
// 005e043e: MOV EAX,dword ptr [ESP + 0xb8]
// 005e0445: MOV EDX,dword ptr [ESP]
// 005e0448: MOV ECX,dword ptr [ESP + 0x8]
// 005e044c: MOV dword ptr [ESP + 0xbc],EDI
// 005e0453: ADD EAX,0x60
// 005e0456: INC EDX
// 005e0457: MOV dword ptr [ESP + 0xb8],EAX
// 005e045e: MOV dword ptr [ESP],EDX
// 005e0461: CMP EDX,ECX
// 005e0463: JLE 0x005e0322
//   XREF to: 005e0322 (CONDITIONAL_JUMP)
// 005e0469: LEA EAX,[EAX]
// 005e046f: NOP
// 005e0470: PUSH 0x0
//   Label: LAB_005e0470
// 005e0472: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e0478: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005e0479: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 005e047e: ADD ESP,0x8
// 005e0481: MOV ESI,dword ptr [ESP + 0x8]
// 005e0485: XOR EBX,EBX
// 005e0487: TEST ESI,ESI
// 005e0489: JLE 0x005e0560
//   XREF to: 005e0560 (CONDITIONAL_JUMP)
// 005e048f: MOV EDX,0x4
//   Label: LAB_005e048f
// 005e0494: LEA EAX,[EBX + EBX*0x1]
// 005e0497: LEA ESI,[EAX + EDX*0x1]
// 005e049a: LEA EDI,[EAX + 0x5]
// 005e049d: MOV dword ptr [ESP + 0x10],EDX
// 005e04a1: LEA EDX,[EAX + 0x3]
// 005e04a4: ADD EAX,0x2
// 005e04a7: PUSH 0x367
// 005e04ac: MOV dword ptr [ESP + 0xc4],EAX
// 005e04b3: MOV dword ptr [ESP + 0x34],EAX
// 005e04b7: LEA EAX,[ESP + 0x10]
// 005e04bb: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e04c1: PUSH EAX
// 005e04c2: MOV dword ptr [ESP + 0x2c],ESI
// 005e04c6: MOV dword ptr [ESP + 0x30],EDI
// 005e04ca: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005e04cb: MOV dword ptr [ESP + 0xbc],EDX
// 005e04d2: MOV dword ptr [ESP + 0x38],EDX
// 005e04d6: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 005e04db: MOV EAX,0x3
// 005e04e0: ADD ESP,0xc
// 005e04e3: MOV dword ptr [ESP + 0x10],EAX
// 005e04e7: MOV EAX,dword ptr [ESP + 0xc0]
// 005e04ee: PUSH 0x367
// 005e04f3: MOV dword ptr [ESP + 0x2c],EAX
// 005e04f7: LEA EAX,[ESP + 0x10]
// 005e04fb: PUSH EAX
// 005e04fc: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e0502: XOR EDX,EDX
// 005e0504: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005e0505: MOV dword ptr [ESP + 0x30],ESI
// 005e0509: MOV dword ptr [ESP + 0x38],EDX
// 005e050d: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 005e0512: ADD ESP,0xc
// 005e0515: MOV EAX,dword ptr [ESP + 0xb0]
// 005e051c: PUSH 0x367
// 005e0521: MOV dword ptr [ESP + 0x28],EAX
// 005e0525: LEA EAX,[ESP + 0x10]
// 005e0529: MOV dword ptr [ESP + 0x2c],EDI
// 005e052d: PUSH EAX
// 005e052e: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e0534: MOV ESI,0x1
// 005e0539: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005e053a: MOV dword ptr [ESP + 0x38],ESI
// 005e053e: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 005e0543: ADD ESP,0xc
// 005e0546: ADD EBX,ESI
// 005e0548: CMP EBX,dword ptr [ESP + 0x8]
// 005e054c: JL 0x005e048f
//   XREF to: 005e048f (CONDITIONAL_JUMP)
// 005e0552: LEA EAX,[EAX]
// 005e0558: LEA EDX,[EDX]
// 005e055e: MOV EAX,EAX
// 005e0560: PUSH 0x1
//   Label: LAB_005e0560
// 005e0562: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e0568: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e0569: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 005e056e: ADD ESP,0x8
// 005e0571: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e0574: PUSH ECX
// 005e0575: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005e057a: ADD ESP,0x4
// 005e057d: MOV EAX,dword ptr [ESP + 0xb4]
// 005e0584: MOV ESP,EBP
// 005e0586: POP EBP
// 005e0587: POP EDI
// 005e0588: POP ESI
// 005e0589: POP EBX
// 005e058a: RET
// 005e058b: MOV EAX,0xff
//   Label: caseD_1
// 005e0590: XOR ESI,ESI
// 005e0592: MOV EBX,EAX
// 005e0594: JMP 0x005e0162
//   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
// 005e0599: MOV EAX,0xff
//   Label: caseD_2
// 005e059e: MOV ESI,EAX
// 005e05a0: MOV EBX,EAX
// 005e05a2: JMP 0x005e0162
//   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
// 005e05a7: MOV EBX,0xff
//   Label: caseD_3
// 005e05ac: XOR ESI,ESI
// 005e05ae: JMP 0x005e0160
//   XREF to: 005e0160 (UNCONDITIONAL_JUMP)
// 005e05b3: MOV EAX,0xff
//   Label: caseD_4
// 005e05b8: XOR EBX,EBX
// 005e05ba: MOV ESI,EAX
// 005e05bc: JMP 0x005e0162
//   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
// 005e05c1: MOV ESI,0xff
//   Label: caseD_5
// 005e05c6: XOR EAX,EAX
// 005e05c8: MOV EBX,ESI
// 005e05ca: JMP 0x005e0162
//   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
// 005e05cf: MOV ESI,0x80
//   Label: caseD_6
// 005e05d4: MOV EAX,0xff
// 005e05d9: XOR EBX,EBX
// 005e05db: JMP 0x005e0162
//   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
// 005e05e0: MOV EAX,0xff
//   Label: caseD_7
// 005e05e5: XOR ESI,ESI
// 005e05e7: XOR EBX,EBX
// 005e05e9: JMP 0x005e0162
//   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
// 005e05ee: MOV EBX,0x100
//   Label: caseD_8
// 005e05f3: MOV EAX,0x80
// 005e05f8: XOR ESI,ESI
// 005e05fa: JMP 0x005e0162
//   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
// 005e05ff: MOV EDI,0x40
//   Label: LAB_005e05ff
// 005e0604: JMP 0x005e0179
//   XREF to: 005e0179 (UNCONDITIONAL_JUMP)
// 005e0609: PUSH EDI
//   Label: LAB_005e0609
// 005e060a: PUSH EBX
// 005e060b: PUSH ESI
// 005e060c: PUSH EAX
// 005e060d: PUSH EDX
// 005e060e: CALL core_actor.cpp_FUN_0040dec0
//   XREF to: 0040dec0 (UNCONDITIONAL_CALL)
// 005e0613: ADD ESP,0x14
// 005e0616: MOV EAX,dword ptr [ESP + 0xb4]
// 005e061d: MOV ESP,EBP
// 005e061f: POP EBP
// 005e0620: POP EDI
// 005e0621: POP ESI
// 005e0622: POP EBX
// 005e0623: RET
