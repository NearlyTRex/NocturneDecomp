// Name: engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
// Address: 0048ce20
// Address Range: [[0048ce20, 0048ce87]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count, int render_flags)
// Cross-references:
//   core_bodypart.cpp_FUN_00419340 (00419340) at 004193fd [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_00570700 (00570700) at 00570742 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00

#include "nocturne.h"

int __cdecl
engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,
          int render_flags)

{
  int in_EAX;
  int extraout_EAX;
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
                      (this_ptr,primitive_array,primitive_count,0x3c,render_flags);
    return iVar1;
  }
  iVar1 = 0;
  if (0 < primitive_count) {
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
                (this_ptr,primitive_array,render_flags);
      primitive_array = (SMRGLHeaderPrimitive *)&primitive_array[2].surface_normal.B;
      in_EAX = extraout_EAX;
    } while (iVar1 < primitive_count);
  }
  return in_EAX;
}


// Assembly code:
// 0048ce20: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
// 0048ce21: PUSH ESI
// 0048ce22: PUSH EDI
// 0048ce23: PUSH EBP
// 0048ce24: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048ce28: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048ce2c: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0048ce30: CMP EDI,-0x1
// 0048ce33: JNZ 0x0048ce3a
//   XREF to: 0048ce3a (CONDITIONAL_JUMP)
// 0048ce35: MOV EDI,0x2cd
// 0048ce3a: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_0048ce3a
//   XREF to: Stack[0x4] (READ)
// 0048ce3e: CMP dword ptr [EBX + 0x1c],0x0
// 0048ce42: JZ 0x0048ce75
//   XREF to: 0048ce75 (CONDITIONAL_JUMP)
// 0048ce44: XOR EBX,EBX
// 0048ce46: TEST EBP,EBP
// 0048ce48: JLE 0x0048ce70
//   XREF to: 0048ce70 (CONDITIONAL_JUMP)
// 0048ce4a: PUSH EDI
//   Label: LAB_0048ce4a
// 0048ce4b: PUSH ESI
// 0048ce4c: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0048ce50: PUSH EAX
// 0048ce51: INC EBX
// 0048ce52: CALL engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
//   XREF to: 0048d700 (UNCONDITIONAL_CALL)
// 0048ce57: ADD ESI,0x3c
// 0048ce5a: ADD ESP,0xc
// 0048ce5d: CMP EBX,EBP
// 0048ce5f: JL 0x0048ce4a
//   XREF to: 0048ce4a (CONDITIONAL_JUMP)
// 0048ce61: LEA EAX,[EAX]
// 0048ce67: LEA EDX,[EDX]
// 0048ce6d: LEA EAX,[EAX]
// 0048ce70: POP EBP
//   Label: LAB_0048ce70
// 0048ce71: POP EDI
// 0048ce72: POP ESI
// 0048ce73: POP EBX
// 0048ce74: RET
// 0048ce75: PUSH EDI
//   Label: LAB_0048ce75
// 0048ce76: PUSH 0x3c
// 0048ce78: PUSH EBP
// 0048ce79: PUSH ESI
// 0048ce7a: PUSH EBX
// 0048ce7b: CALL engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
//   XREF to: 0048cf00 (UNCONDITIONAL_CALL)
// 0048ce80: ADD ESP,0x14
// 0048ce83: POP EBP
// 0048ce84: POP EDI
// 0048ce85: POP ESI
// 0048ce86: POP EBX
// 0048ce87: RET
