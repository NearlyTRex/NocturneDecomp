// Name: core_wateract.cpp_CWaterActor_FUN_005eb280
// Address: 005eb280
// Address Range: [[005eb280, 005eb4a5]]
// Convention: __cdecl
// Signature: int core_wateract.cpp_CWaterActor_FUN_005eb280(CWaterActor * this_ptr)
// Globals:
//   undefined4 DAT_00665310
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   SMRGLTextureBasic DAT_006846f0
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
//   CVector3f g_ZeroVector
//   undefined4 DAT_03f90a88
//   undefined4 DAT_03f90a8c
//   undefined4 DAT_03f90a90
//   undefined4 DAT_03f90a94
//   undefined4 DAT_03f90a98
//   undefined4 DAT_03f90a9c
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_set.cpp_CDemonSet_FUN_0056e3e0
//   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_wateract_cpp_CWaterActor_FUN_005eb280(CWaterActor *this_ptr)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  int *piVar4;
  char *pcVar5;
  SMRGLPrimitiveQuad *primitive_array;
  BADSPACEBASE *in_ESP;
  int iVar6;
  undefined4 uStack00000008;
  int iStack00000014;
  int in_stack_0000002c;
  float fStack_18;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe4);
    iStack00000014 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iStack00000014 != 0) {
      fStack_18 = 8.696715e-39;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                (g_CDemonRendererPtr,this_ptr->opacity);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
      iVar3 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&DAT_006846f0 + *(int *)(this_ptr->field21_0x298 + 0x2af90));
      if (0 < *(int *)this_ptr->field21_0x298) {
        piVar4 = &DAT_03f90a88;
        pcVar5 = this_ptr->field21_0x298 + 4;
        do {
          *piVar4 = (int)ROUND(*(float *)pcVar5 * _DAT_00665310);
          piVar4[1] = (int)ROUND(*(float *)(pcVar5 + 4) * _DAT_00665310);
          piVar4[2] = (int)ROUND(*(float *)(pcVar5 + 8) * _DAT_00665310);
          iVar3 = iVar3 + 1;
          pcVar5 = pcVar5 + 0x20;
          piVar4 = piVar4 + 3;
        } while (iVar3 < *(int *)this_ptr->field21_0x298);
      }
      iVar3 = 0;
      core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
                (g_CDemonSetPtr,*(int *)this_ptr->field21_0x298,&DAT_03f90a88);
      if (0 < *(int *)this_ptr->field21_0x298) {
        iVar6 = 0;
        do {
          core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
          pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
          lVar2 = (longlong)(this_ptr->col_r << 8) * (longlong)*(int *)((int)&pSVar1->light + iVar6)
          ;
          *(uint *)((int)&pSVar1->light + iVar6) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)(this_ptr->col_g << 8) * (longlong)*(int *)((int)&pSVar1->color + iVar6)
          ;
          *(uint *)((int)&pSVar1->color + iVar6) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)(this_ptr->col_b << 8) * (longlong)*(int *)((int)&pSVar1->fog + iVar6);
          *(uint *)((int)&pSVar1->fog + iVar6) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0x30;
        } while (iVar3 < *(int *)this_ptr->field21_0x298);
      }
      primitive_array = (SMRGLPrimitiveQuad *)(this_ptr->field21_0x298 + 0x7d10);
      if ((int)this_ptr->opacity < 0xfde9) {
        iVar3 = 0;
        if (0 < *(int *)(this_ptr->field21_0x298 + 0x2af9c)) {
          do {
            iVar3 = iVar3 + 1;
            engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                      (g_CDemonRendererPtr,&primitive_array->base,0x267);
            primitive_array = primitive_array + 1;
          } while (iVar3 < *(int *)(this_ptr->field21_0x298 + 0x2af9c));
        }
      }
      else {
        core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                  (g_CDemonSetPtr,primitive_array,*(int *)(this_ptr->field21_0x298 + 0x2af9c),-1);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
    }
    uStack00000008 = 0x5eb468;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return in_stack_0000002c;
  }
  return 0;
}


// Assembly code:
// 005eb280: PUSH ESI
//   Label: core_wateract.cpp_CWaterActor_FUN_005eb280
// 005eb281: PUSH EBP
// 005eb282: SUB ESP,0x1c
// 005eb285: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005eb289: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005eb28f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005eb290: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005eb295: ADD ESP,0x4
// 005eb298: TEST EAX,EAX
// 005eb29a: JZ 0x005eb2a4
//   XREF to: 005eb2a4 (CONDITIONAL_JUMP)
// 005eb29c: XOR EAX,EAX
// 005eb29e: ADD ESP,0x1c
// 005eb2a1: POP EBP
// 005eb2a2: POP ESI
// 005eb2a3: RET
// 005eb2a4: PUSH ESI
//   Label: LAB_005eb2a4
// 005eb2a5: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005eb2aa: ADD ESP,0x4
// 005eb2ad: MOV EDX,ESP
// 005eb2af: PUSH EDX
// 005eb2b0: MOV EAX,dword ptr [ESI + 0x154]
// 005eb2b6: PUSH ESI
// 005eb2b7: CALL dword ptr [EAX + 0x14]
// 005eb2ba: ADD ESP,0x8
// 005eb2bd: PUSH EAX
// 005eb2be: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005eb2c3: ADD ESP,0x4
// 005eb2c6: MOV dword ptr [ESP + 0x18],EAX
// 005eb2ca: TEST EAX,EAX
// 005eb2cc: JZ 0x005eb462
//   XREF to: 005eb462 (CONDITIONAL_JUMP)
// 005eb2d2: PUSH EDI
// 005eb2d3: PUSH EBX
// 005eb2d4: MOV ECX,dword ptr [ESI + 0x164]
// 005eb2da: PUSH ECX
// 005eb2db: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005eb2e1: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005eb2e2: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 005eb2e7: ADD ESP,0x8
// 005eb2ea: PUSH 0x0
// 005eb2ec: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005eb2f2: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005eb2f3: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 005eb2f8: MOV EDX,dword ptr [ESI + 0x2b228]
// 005eb2fe: LEA EAX,[EDX*0x4 + 0x0]
// 005eb305: SUB EAX,EDX
// 005eb307: SHL EAX,0x3
// 005eb30a: ADD ESP,0x8
// 005eb30d: ADD EAX,0x6846f0
//   XREF to: 006846f0 (DATA)
// 005eb312: PUSH EAX
// 005eb313: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005eb319: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005eb31a: XOR EDI,EDI
// 005eb31c: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005eb321: MOV EAX,dword ptr [ESI + 0x298]
// 005eb327: ADD ESP,0x8
// 005eb32a: TEST EAX,EAX
// 005eb32c: JLE 0x005eb370
//   XREF to: 005eb370 (CONDITIONAL_JUMP)
// 005eb32e: MOV ECX,0x3f90a88
//   XREF to: 03f90a88 (DATA)
// 005eb333: LEA EDX,[ESI + 0x29c]
// 005eb339: MOV EBX,ECX
//   Label: LAB_005eb339
// 005eb33b: MOV EAX,EDX
// 005eb33d: FLD float ptr [EAX]
// 005eb33f: FMUL float ptr [0x00665310]
//   XREF to: 00665310 (READ)
// 005eb345: FISTP dword ptr [EBX]
//   XREF to: 03f90a88 (WRITE)
//   XREF to: 03f90a94 (WRITE)
// 005eb347: FLD float ptr [EAX + 0x4]
// 005eb34a: FMUL float ptr [0x00665310]
//   XREF to: 00665310 (READ)
// 005eb350: FISTP dword ptr [EBX + 0x4]
//   XREF to: 03f90a8c (WRITE)
//   XREF to: 03f90a98 (WRITE)
// 005eb353: FLD float ptr [EAX + 0x8]
// 005eb356: FMUL float ptr [0x00665310]
//   XREF to: 00665310 (READ)
// 005eb35c: FISTP dword ptr [EBX + 0x8]
//   XREF to: 03f90a90 (WRITE)
//   XREF to: 03f90a9c (WRITE)
// 005eb35f: INC EDI
// 005eb360: ADD EDX,0x20
// 005eb363: MOV EBX,dword ptr [ESI + 0x298]
// 005eb369: ADD ECX,0xc
//   XREF to: 03f90a94 (PARAM)
// 005eb36c: CMP EDI,EBX
// 005eb36e: JL 0x005eb339
//   XREF to: 005eb339 (CONDITIONAL_JUMP)
// 005eb370: PUSH 0x3f90a88
//   Label: LAB_005eb370
//   XREF to: 03f90a88 (DATA)
// 005eb375: MOV EDI,dword ptr [ESI + 0x298]
// 005eb37b: PUSH EDI
// 005eb37c: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005eb382: PUSH EBP
//   XREF to: 03114278 (DATA)
// 005eb383: XOR EBX,EBX
// 005eb385: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 005eb38a: MOV EAX,dword ptr [ESI + 0x298]
// 005eb390: ADD ESP,0xc
// 005eb393: TEST EAX,EAX
// 005eb395: JLE 0x005eb420
//   XREF to: 005eb420 (CONDITIONAL_JUMP)
// 005eb39b: LEA EBP,[ESI + 0x2a8]
// 005eb3a1: XOR EDI,EDI
// 005eb3a3: PUSH EBX
//   Label: LAB_005eb3a3
// 005eb3a4: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005eb3a9: PUSH EBP
// 005eb3aa: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005eb3b0: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005eb3b1: CALL core_set.cpp_CDemonSet_FUN_0056e3e0
//   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)
// 005eb3b6: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005eb3bc: ADD ESP,0x10
// 005eb3bf: MOV EAX,dword ptr [ESI + 0x28c]
// 005eb3c5: MOV ECX,dword ptr [ECX]
//   XREF to: 02c6d578 (READ)
// 005eb3c7: SHL EAX,0x8
// 005eb3ca: MOV EDX,dword ptr [ECX + EDI*0x1 + 0x20]
// 005eb3ce: IMUL EDX
// 005eb3d0: SHRD EAX,EDX,0x10
// 005eb3d4: MOV dword ptr [ECX + EDI*0x1 + 0x20],EAX
// 005eb3d8: MOV EAX,dword ptr [ESI + 0x290]
// 005eb3de: MOV EDX,dword ptr [ECX + EDI*0x1 + 0x24]
// 005eb3e2: SHL EAX,0x8
// 005eb3e5: IMUL EDX
// 005eb3e7: SHRD EAX,EDX,0x10
// 005eb3eb: MOV dword ptr [ECX + EDI*0x1 + 0x24],EAX
// 005eb3ef: MOV EAX,dword ptr [ESI + 0x294]
// 005eb3f5: MOV EDX,dword ptr [ECX + EDI*0x1 + 0x28]
// 005eb3f9: SHL EAX,0x8
// 005eb3fc: ADD EDI,0x30
// 005eb3ff: IMUL EDX
// 005eb401: SHRD EAX,EDX,0x10
// 005eb405: MOV dword ptr [ECX + EDI*0x1 + -0x8],EAX
// 005eb409: INC EBX
// 005eb40a: MOV ECX,dword ptr [ESI + 0x298]
// 005eb410: ADD EBP,0x20
// 005eb413: CMP EBX,ECX
// 005eb415: JL 0x005eb3a3
//   XREF to: 005eb3a3 (CONDITIONAL_JUMP)
// 005eb417: LEA EAX,[EAX]
// 005eb41d: LEA EDX,[EDX]
// 005eb420: MOV EDI,dword ptr [ESI + 0x164]
//   Label: LAB_005eb420
// 005eb426: LEA EBX,[ESI + 0x7fa8]
// 005eb42c: CMP EDI,0xfde8
// 005eb432: JLE 0x005eb475
//   XREF to: 005eb475 (CONDITIONAL_JUMP)
// 005eb434: PUSH -0x1
// 005eb436: MOV EAX,dword ptr [ESI + 0x2b234]
// 005eb43c: PUSH EAX
// 005eb43d: PUSH EBX
// 005eb43e: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005eb444: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005eb445: CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
//   XREF to: 00570770 (UNCONDITIONAL_CALL)
// 005eb44a: ADD ESP,0x10
// 005eb44d: LEA EAX,[EAX]
// 005eb450: PUSH 0x0
//   Label: LAB_005eb450
// 005eb452: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005eb457: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005eb458: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 005eb45d: ADD ESP,0x8
// 005eb460: POP EBX
// 005eb461: POP EDI
// 005eb462: PUSH ESI
//   Label: LAB_005eb462
// 005eb463: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005eb468: ADD ESP,0x4
// 005eb46b: MOV EAX,dword ptr [ESP + 0x18]
// 005eb46f: ADD ESP,0x1c
// 005eb472: POP EBP
// 005eb473: POP ESI
// 005eb474: RET
// 005eb475: MOV EBP,dword ptr [ESI + 0x2b234]
//   Label: LAB_005eb475
// 005eb47b: XOR EDI,EDI
// 005eb47d: TEST EBP,EBP
// 005eb47f: JLE 0x005eb450
//   XREF to: 005eb450 (CONDITIONAL_JUMP)
// 005eb481: PUSH 0x267
//   Label: LAB_005eb481
// 005eb486: PUSH EBX
// 005eb487: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005eb48d: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005eb48e: INC EDI
// 005eb48f: CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
// 005eb494: ADD EBX,0x48
// 005eb497: MOV EBP,dword ptr [ESI + 0x2b234]
// 005eb49d: ADD ESP,0xc
// 005eb4a0: CMP EDI,EBP
// 005eb4a2: JL 0x005eb481
//   XREF to: 005eb481 (CONDITIONAL_JUMP)
// 005eb4a4: JMP 0x005eb450
//   XREF to: 005eb450 (UNCONDITIONAL_JUMP)
