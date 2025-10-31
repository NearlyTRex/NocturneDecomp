// Name: core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
// Address: 00570770
// Address Range: [[00570770, 0057086c]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
// Cross-references:
//   core_cloth.cpp_FUN_0043bae0 (0043bae0) at 0043be28 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b305 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 (00477980) at 00477bb3 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb445 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonRenderer g_CDemonRendererInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c8c
//   undefined4 DAT_02d81c90
// Function calls:
//   core_set.cpp_CDemonSet_FUN_00570010
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
//   engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
          (CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,
          int render_flags)

{
  SMRGLPrimitiveQuad *pSVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int in_stack_00000014;
  SMRGLHeaderPrimitive local_34;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if ((g_CGamePtr->field62_0x1f4 != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
       iVar2 == 0)) {
      core_set_cpp_CDemonSet_FUN_00570010(this_ptr);
      return;
    }
    if ((this_ptr->per_pixel_lighting_enabled != 0) &&
       (iVar2 = 0, pSVar1 = primitive_array, 0 < primitive_count)) {
      do {
        local_34.base.count = (pSVar1->base).base.count;
        local_34.surface_normal.A = (pSVar1->base).surface_normal.A;
        local_34.surface_normal.B = (pSVar1->base).surface_normal.B;
        local_34.surface_normal.C = (pSVar1->base).surface_normal.C;
        local_34.surface_normal.D = (pSVar1->base).surface_normal.D;
        local_1c = pSVar1->vertices[0].vertex_index;
        local_18 = pSVar1->vertices[1].vertex_index;
        local_14 = pSVar1->vertices[2].vertex_index;
        pSVar1 = pSVar1 + 1;
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                  (g_CDemonRendererPtr,&local_34,
                   core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0);
      } while (iVar2 < primitive_count);
    }
    engine_drender_cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
              (g_CDemonRendererPtr,&primitive_array->base,primitive_count,in_stack_00000014);
  }
  return;
}


// Assembly code:
// 00570770: PUSH EBX
//   Label: core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
// 00570771: PUSH ESI
// 00570772: PUSH EDI
// 00570773: PUSH EBP
// 00570774: SUB ESP,0x28
// 00570777: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0057077b: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0057077f: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 00570783: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00570788: CMP dword ptr [EAX + 0x1f0],0x0
//   XREF to: 02d81c8c (READ)
// 0057078f: JNZ 0x00570836
//   XREF to: 00570836 (CONDITIONAL_JUMP)
// 00570795: CMP dword ptr [EAX + 0x1f4],0x0
//   XREF to: 02d81c90 (READ)
// 0057079c: JNZ 0x0057083e
//   XREF to: 0057083e (CONDITIONAL_JUMP)
// 005707a2: CMP dword ptr [EBX + 0x15ac78],0x0
//   Label: LAB_005707a2
// 005707a9: JZ 0x00570820
//   XREF to: 00570820 (CONDITIONAL_JUMP)
// 005707af: MOV EBX,EBP
// 005707b1: XOR ESI,ESI
// 005707b3: TEST EDI,EDI
// 005707b5: JLE 0x00570820
//   XREF to: 00570820 (CONDITIONAL_JUMP)
// 005707b7: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_005707b7
// 005707ba: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005707be: MOV EAX,dword ptr [EBX + 0x8]
// 005707c1: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005707c5: MOV EAX,dword ptr [EBX + 0xc]
// 005707c8: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005707cc: MOV EAX,dword ptr [EBX + 0x10]
// 005707cf: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005707d3: MOV EAX,dword ptr [EBX + 0x14]
// 005707d6: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005707da: MOV EAX,dword ptr [EBX + 0x18]
// 005707dd: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005707e1: MOV EAX,dword ptr [EBX + 0x24]
// 005707e4: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005707e8: MOV EAX,dword ptr [EBX + 0x30]
// 005707eb: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005707ef: MOV EAX,dword ptr [EBX + 0x3c]
// 005707f2: PUSH 0x4505e0
//   XREF to: 004505e0 (DATA)
// 005707f7: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005707fb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x38] (DATA)
// 005707ff: PUSH EAX
// 00570800: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00570806: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00570807: ADD EBX,0x48
// 0057080a: INC ESI
// 0057080b: CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
//   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)
// 00570810: ADD ESP,0xc
// 00570813: CMP ESI,EDI
// 00570815: JL 0x005707b7
//   XREF to: 005707b7 (CONDITIONAL_JUMP)
// 00570817: LEA EAX,[EAX]
// 0057081d: LEA EDX,[EDX]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 02c6d578 (DATA)
// 00570820: MOV ECX,dword ptr [ESP + 0x48]
//   Label: LAB_00570820
//   XREF to: Stack[0x10] (READ)
// 00570824: PUSH ECX
// 00570825: PUSH EDI
// 00570826: PUSH EBP
// 00570827: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057082d: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0057082e: CALL engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
//   XREF to: 0048ce90 (UNCONDITIONAL_CALL)
// 00570833: ADD ESP,0x10
// 00570836: ADD ESP,0x28
//   Label: LAB_00570836
// 00570839: POP EBP
// 0057083a: POP EDI
// 0057083b: POP ESI
// 0057083c: POP EBX
// 0057083d: RET
// 0057083e: MOV ESI,dword ptr [0x006703ec]
//   Label: LAB_0057083e
//   XREF to: 006703ec (READ)
// 00570844: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00570845: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0057084a: ADD ESP,0x4
// 0057084d: TEST EAX,EAX
// 0057084f: JNZ 0x005707a2
//   XREF to: 005707a2 (CONDITIONAL_JUMP)
// 00570855: PUSH 0xffff
// 0057085a: PUSH EDI
// 0057085b: PUSH EBP
// 0057085c: PUSH EBX
// 0057085d: CALL core_set.cpp_CDemonSet_FUN_00570010
//   XREF to: 00570010 (UNCONDITIONAL_CALL)
// 00570862: ADD ESP,0x10
// 00570865: ADD ESP,0x28
// 00570868: POP EBP
// 00570869: POP EDI
// 0057086a: POP ESI
// 0057086b: POP EBX
// 0057086c: RET
