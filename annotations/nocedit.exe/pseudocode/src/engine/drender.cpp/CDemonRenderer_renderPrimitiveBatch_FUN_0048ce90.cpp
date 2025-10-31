// Name: engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
// Address: 0048ce90
// Address Range: [[0048ce90, 0048cef7]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count, int render_flags)
// Cross-references:
//   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 (00570770) at 0057082e [UNCONDITIONAL_CALL]
// Function calls:
//   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00

#include "nocturne.h"

int __cdecl
engine_drender_cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,
          int render_flags)

{
  int in_EAX;
  int extraout_EAX;
  int iVar1;
  
  if (render_flags == -1) {
    render_flags = RENDER_ENGINE_CORE_PREMIUM;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
                      (this_ptr,primitive_array,primitive_count,0x48,render_flags);
    return iVar1;
  }
  iVar1 = 0;
  if (0 < primitive_count) {
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
                (this_ptr,primitive_array,render_flags);
      primitive_array = primitive_array + 3;
      in_EAX = extraout_EAX;
    } while (iVar1 < primitive_count);
  }
  return in_EAX;
}


// Assembly code:
// 0048ce90: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
// 0048ce91: PUSH ESI
// 0048ce92: PUSH EDI
// 0048ce93: PUSH EBP
// 0048ce94: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048ce98: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048ce9c: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0048cea0: CMP EDI,-0x1
// 0048cea3: JNZ 0x0048ceaa
//   XREF to: 0048ceaa (CONDITIONAL_JUMP)
// 0048cea5: MOV EDI,0x2cd
// 0048ceaa: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_0048ceaa
//   XREF to: Stack[0x4] (READ)
// 0048ceae: CMP dword ptr [EBX + 0x1c],0x0
// 0048ceb2: JZ 0x0048cee5
//   XREF to: 0048cee5 (CONDITIONAL_JUMP)
// 0048ceb4: XOR EBX,EBX
// 0048ceb6: TEST EBP,EBP
// 0048ceb8: JLE 0x0048cee0
//   XREF to: 0048cee0 (CONDITIONAL_JUMP)
// 0048ceba: PUSH EDI
//   Label: LAB_0048ceba
// 0048cebb: PUSH ESI
// 0048cebc: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0048cec0: PUSH EAX
// 0048cec1: INC EBX
// 0048cec2: CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
//   XREF to: 0048d7a0 (UNCONDITIONAL_CALL)
// 0048cec7: ADD ESI,0x48
// 0048ceca: ADD ESP,0xc
// 0048cecd: CMP EBX,EBP
// 0048cecf: JL 0x0048ceba
//   XREF to: 0048ceba (CONDITIONAL_JUMP)
// 0048ced1: LEA EAX,[EAX]
// 0048ced7: LEA EDX,[EDX]
// 0048cedd: LEA EAX,[EAX]
// 0048cee0: POP EBP
//   Label: LAB_0048cee0
// 0048cee1: POP EDI
// 0048cee2: POP ESI
// 0048cee3: POP EBX
// 0048cee4: RET
// 0048cee5: PUSH EDI
//   Label: LAB_0048cee5
// 0048cee6: PUSH 0x48
// 0048cee8: PUSH EBP
// 0048cee9: PUSH ESI
// 0048ceea: PUSH EBX
// 0048ceeb: CALL engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
//   XREF to: 0048cf00 (UNCONDITIONAL_CALL)
// 0048cef0: ADD ESP,0x14
// 0048cef3: POP EBP
// 0048cef4: POP EDI
// 0048cef5: POP ESI
// 0048cef6: POP EBX
// 0048cef7: RET
