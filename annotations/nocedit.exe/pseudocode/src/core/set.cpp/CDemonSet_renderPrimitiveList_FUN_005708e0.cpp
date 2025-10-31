// Name: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0
// Address: 005708e0
// Address Range: [[005708e0, 00570959]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count)
// Cross-references:
//   core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0 (004566e0) at 00456741 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02c6d590
//   undefined4 DAT_02d81c8c
// Function calls:
//   core_mirror.cpp_clipAndRenderReflectedPrimitive_FUN_00522560
//   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005708e0
          (CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)

{
  int iVar1;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CDemonRendererPtr->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
                    (g_CDemonRendererPtr,primitive_array);
          primitive_array = (SMRGLHeaderPrimitive *)&primitive_array[1].surface_normal.C;
        } while (iVar1 < primitive_count);
        return;
      }
    }
    else {
      iVar1 = 0;
      if (0 < primitive_count) {
        do {
          iVar1 = iVar1 + 1;
          core_mirror_cpp_clipAndRenderReflectedPrimitive_FUN_00522560
                    (this_ptr->active_mirror,primitive_array);
          primitive_array = (SMRGLHeaderPrimitive *)&primitive_array[1].surface_normal.C;
        } while (iVar1 < primitive_count);
      }
    }
  }
  return;
}


// Assembly code:
// 005708e0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0
// 005708e1: PUSH ESI
// 005708e2: PUSH EDI
// 005708e3: PUSH EBP
// 005708e4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005708e8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005708ec: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005708f0: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005708f6: CMP dword ptr [EBX + 0x1f0],0x0
//   XREF to: 02d81c8c (READ)
// 005708fd: JNZ 0x00570930
//   XREF to: 00570930 (CONDITIONAL_JUMP)
// 005708ff: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00570905: MOV EBX,dword ptr [EBX + 0x18]
//   XREF to: 02c6d590 (READ)
// 00570908: TEST EBX,EBX
// 0057090a: JZ 0x00570935
//   XREF to: 00570935 (CONDITIONAL_JUMP)
// 0057090c: XOR EBX,EBX
// 0057090e: TEST EDI,EDI
// 00570910: JLE 0x00570930
//   XREF to: 00570930 (CONDITIONAL_JUMP)
// 00570912: MOV ESI,EAX
// 00570914: PUSH ESI
//   Label: LAB_00570914
// 00570915: MOV EAX,dword ptr [EBP + 0x161650]
// 0057091b: PUSH EAX
// 0057091c: INC EBX
// 0057091d: CALL core_mirror.cpp_clipAndRenderReflectedPrimitive_FUN_00522560
//   XREF to: 00522560 (UNCONDITIONAL_CALL)
// 00570922: ADD ESI,0x28
// 00570925: ADD ESP,0x8
// 00570928: CMP EBX,EDI
// 0057092a: JL 0x00570914
//   XREF to: 00570914 (CONDITIONAL_JUMP)
// 0057092c: LEA EAX,[EAX]
// 00570930: POP EBP
//   Label: LAB_00570930
// 00570931: POP EDI
// 00570932: POP ESI
// 00570933: POP EBX
// 00570934: RET
// 00570935: XOR ESI,ESI
//   Label: LAB_00570935
// 00570937: TEST EDI,EDI
// 00570939: JLE 0x00570930
//   XREF to: 00570930 (CONDITIONAL_JUMP)
// 0057093b: MOV EBX,EAX
// 0057093d: PUSH EBX
//   Label: LAB_0057093d
// 0057093e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00570944: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00570945: INC ESI
// 00570946: CALL engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
//   XREF to: 0048a820 (UNCONDITIONAL_CALL)
// 0057094b: ADD EBX,0x28
// 0057094e: ADD ESP,0x8
// 00570951: CMP ESI,EDI
// 00570953: JL 0x0057093d
//   XREF to: 0057093d (CONDITIONAL_JUMP)
// 00570955: POP EBP
// 00570956: POP EDI
// 00570957: POP ESI
// 00570958: POP EBX
// 00570959: RET
