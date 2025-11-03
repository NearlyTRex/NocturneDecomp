// Name: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
// Address: 0048da80
// Address Range: [[0048da80, 0048db77]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00413ae0 (00413ae0) at 00413c5a [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_004173b0 (004173b0) at 0041753c [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d1b0 (0041d1b0) at 0041d249 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485be0 (00485be0) at 00485d7b [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004ff170 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b160 (0052b160) at 0052b23f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005971d9 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CaptureFaceCount
//   SFace[5000] g_CapturedFaces
//   undefined4 g_CapturedFaces[0].render_flags
//   undefined4 g_CapturedFaces[0].indices.vertex_index_0
//   undefined4 DAT_02c6d614
//   SFace*[5000] g_CapturedFacePointers
//   undefined4 DAT_02c946f8
//   SMRGLTextureBasic[100] g_CapturedTextureArray
// Function calls:
//   crt_stdlib.c_qsort_FUN_005fdf38
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  SFace *pSVar4;
  int iVar5;
  int iVar6;
  code *compar;
  
  iVar6 = g_CaptureFaceCount;
  if (this_ptr->face_count == 0) {
    if (0 < g_CaptureFaceCount) {
      pSVar4 = g_CapturedFaces;
      iVar5 = g_CaptureFaceCount * 4;
      iVar3 = 0;
      do {
        *(SFace **)((int)g_CapturedFacePointers + iVar3) = pSVar4;
        iVar3 = iVar3 + 4;
        pSVar4 = pSVar4 + 1;
      } while (SBORROW4(iVar3,iVar5) != iVar3 + iVar6 * -4 < 0);
    }
    if (this_ptr->texture_capture_enabled == 1) {
      compar = engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50;
    }
    else {
      compar = engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20;
    }
    crt_stdlib_c_qsort_FUN_005fdf38(g_CapturedFacePointers,g_CaptureFaceCount,4,compar);
    this_ptr->texture_capture_enabled = 0;
    if (this_ptr->face_capture_enabled != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(this_ptr,1);
    }
    iVar6 = -1;
    iVar5 = 0;
    if (0 < g_CaptureFaceCount) {
      iVar3 = 0;
      do {
        iVar2 = **(int **)((int)g_CapturedFacePointers + iVar3);
        if (iVar6 != iVar2) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (this_ptr,g_CapturedTextureArray + iVar2 * 3);
          iVar6 = iVar2;
        }
        piVar1 = (int *)((int)g_CapturedFacePointers + iVar3);
        iVar3 = iVar3 + 4;
        iVar5 = iVar5 + 1;
        engine_drender_cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
                  (this_ptr,(SMRGLHeaderPrimitive *)(*piVar1 + 0xc),*(int *)(*piVar1 + 4));
      } while (iVar5 < g_CaptureFaceCount);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(this_ptr,0);
  }
  return;
}


// Assembly code:
// 0048da80: PUSH EBP
//   Label: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
// 0048da81: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048da85: CMP dword ptr [EBP + 0x4],0x0
// 0048da89: JNZ 0x0048db63
//   XREF to: 0048db63 (CONDITIONAL_JUMP)
// 0048da8f: PUSH EDI
// 0048da90: PUSH ESI
// 0048da91: PUSH EBX
// 0048da92: MOV ECX,dword ptr [0x02c6d5ec]
//   XREF to: 02c6d5ec (READ)
// 0048da98: TEST ECX,ECX
// 0048da9a: JLE 0x0048dac0
//   XREF to: 0048dac0 (CONDITIONAL_JUMP)
// 0048da9c: MOV EBX,0x2c6d5f4
//   XREF to: 02c6d5f4 (DATA)
// 0048daa1: LEA ESI,[ECX*0x4 + 0x0]
// 0048daa8: XOR EAX,EAX
// 0048daaa: MOV dword ptr [EAX + 0x2c946f4],EBX
//   Label: LAB_0048daaa
//   XREF to: 02c946f4 (WRITE)
//   XREF to: 02c946f8 (WRITE)
//   XREF to: 02c6d5f4 (DATA)
//   XREF to: 02c6d614 (DATA)
// 0048dab0: ADD EAX,0x4
// 0048dab3: ADD EBX,0x20
//   XREF to: 02c6d614 (PARAM)
// 0048dab6: CMP EAX,ESI
// 0048dab8: JL 0x0048daaa
//   XREF to: 0048daaa (CONDITIONAL_JUMP)
// 0048daba: LEA EAX,[EAX]
// 0048dac0: CMP dword ptr [EBP + 0x1c],0x1
//   Label: LAB_0048dac0
// 0048dac4: JZ 0x0048db65
//   XREF to: 0048db65 (CONDITIONAL_JUMP)
// 0048daca: PUSH 0x48da20
//   XREF to: 0048da20 (DATA)
// 0048dacf: PUSH 0x4
// 0048dad1: MOV ESI,dword ptr [0x02c6d5ec]
//   XREF to: 02c6d5ec (READ)
// 0048dad7: PUSH ESI
// 0048dad8: PUSH 0x2c946f4
//   Label: LAB_0048dad8
//   XREF to: 02c946f4 (DATA)
// 0048dadd: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 0048dae2: ADD ESP,0x10
// 0048dae5: MOV EAX,dword ptr [EBP + 0x10]
// 0048dae8: MOV dword ptr [EBP + 0x1c],0x0
// 0048daef: TEST EAX,EAX
// 0048daf1: JZ 0x0048dafe
//   XREF to: 0048dafe (CONDITIONAL_JUMP)
// 0048daf3: PUSH 0x1
// 0048daf5: PUSH EBP
// 0048daf6: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0048dafb: ADD ESP,0x8
// 0048dafe: MOV EDI,0xffffffff
//   Label: LAB_0048dafe
// 0048db03: MOV EDX,dword ptr [0x02c6d5ec]
//   XREF to: 02c6d5ec (READ)
// 0048db09: XOR ESI,ESI
// 0048db0b: TEST EDX,EDX
// 0048db0d: JLE 0x0048db55
//   XREF to: 0048db55 (CONDITIONAL_JUMP)
// 0048db0f: XOR EBX,EBX
// 0048db11: MOV EAX,dword ptr [EBX + 0x2c946f4]
//   Label: LAB_0048db11
//   XREF to: 02c946f4 (READ)
//   XREF to: 02c946f8 (READ)
// 0048db17: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d5f4 (READ)
// 0048db19: CMP EDI,EDX
// 0048db1b: JZ 0x0048db31
//   XREF to: 0048db31 (CONDITIONAL_JUMP)
// 0048db1d: MOV EDI,EDX
// 0048db1f: IMUL EAX,EDX,0x48
// 0048db22: ADD EAX,0x2c99514
//   XREF to: 02c99514 (DATA)
// 0048db27: PUSH EAX
// 0048db28: PUSH EBP
// 0048db29: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0048db2e: ADD ESP,0x8
// 0048db31: MOV EAX,dword ptr [EBX + 0x2c946f4]
//   Label: LAB_0048db31
//   XREF to: 02c946f4 (READ)
//   XREF to: 02c946f8 (READ)
// 0048db37: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 02c6d5f8 (READ)
// 0048db3a: PUSH ECX
// 0048db3b: ADD EAX,0xc
//   XREF to: 02c6d600 (PARAM)
// 0048db3e: PUSH EAX
//   XREF to: 02c6d600 (DATA)
// 0048db3f: PUSH EBP
// 0048db40: ADD EBX,0x4
// 0048db43: INC ESI
// 0048db44: CALL engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
//   XREF to: 0048b030 (UNCONDITIONAL_CALL)
// 0048db49: MOV EAX,[0x02c6d5ec]
//   XREF to: 02c6d5ec (READ)
// 0048db4e: ADD ESP,0xc
// 0048db51: CMP ESI,EAX
// 0048db53: JL 0x0048db11
//   XREF to: 0048db11 (CONDITIONAL_JUMP)
// 0048db55: PUSH 0x0
//   Label: LAB_0048db55
// 0048db57: PUSH EBP
// 0048db58: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 0048db5d: ADD ESP,0x8
// 0048db60: POP EBX
// 0048db61: POP ESI
// 0048db62: POP EDI
// 0048db63: POP EBP
//   Label: LAB_0048db63
// 0048db64: RET
// 0048db65: PUSH 0x48da50
//   Label: LAB_0048db65
//   XREF to: 0048da50 (DATA)
// 0048db6a: PUSH 0x4
// 0048db6c: MOV EDI,dword ptr [0x02c6d5ec]
//   XREF to: 02c6d5ec (READ)
// 0048db72: PUSH EDI
// 0048db73: JMP 0x0048dad8
//   XREF to: 0048dad8 (UNCONDITIONAL_JUMP)
