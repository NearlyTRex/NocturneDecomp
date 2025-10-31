// Name: engine_model.c_initializeMRGLModel_FUN_00528940
// Address: 00528940
// Address Range: [[00528940, 0052896b]]
// Convention: __cdecl
// Signature: void engine_model.c_initializeMRGLModel_FUN_00528940(SMRGLHeaderExtended * mrgl)
// Function calls:
//   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
//   engine_model.c_loadMRGLTextures_FUN_00528870

#include "nocturne.h"

void __cdecl engine_model_c_initializeMRGLModel_FUN_00528940(SMRGLHeaderExtended *mrgl)

{
  if ((mrgl->base).type == 0x20) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)mrgl);
    engine_model_c_loadMRGLTextures_FUN_00528870((SMRGLHeaderExtended *)mrgl[1].child_count);
    return;
  }
  engine_model_c_loadMRGLTextures_FUN_00528870(mrgl);
  return;
}


// Assembly code:
// 00528940: PUSH EBX
//   Label: engine_model.c_initializeMRGLModel_FUN_00528940
// 00528941: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00528945: CMP dword ptr [EBX],0x20
// 00528948: JNZ 0x00528961
//   XREF to: 00528961 (CONDITIONAL_JUMP)
// 0052894a: PUSH EBX
// 0052894b: CALL engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
//   XREF to: 00501d40 (UNCONDITIONAL_CALL)
// 00528950: ADD ESP,0x4
// 00528953: MOV ECX,dword ptr [EBX + 0x14]
// 00528956: PUSH ECX
// 00528957: CALL engine_model.c_loadMRGLTextures_FUN_00528870
//   XREF to: 00528870 (UNCONDITIONAL_CALL)
// 0052895c: ADD ESP,0x4
// 0052895f: POP EBX
// 00528960: RET
// 00528961: PUSH EBX
//   Label: LAB_00528961
// 00528962: CALL engine_model.c_loadMRGLTextures_FUN_00528870
//   XREF to: 00528870 (UNCONDITIONAL_CALL)
// 00528967: ADD ESP,0x4
// 0052896a: POP EBX
// 0052896b: RET
