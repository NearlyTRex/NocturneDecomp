// Name: engine_model.c_freeMRGLData_FUN_005280b0
// Address: 005280b0
// Address Range: [[005280b0, 0052813d]]
// Convention: __cdecl
// Signature: void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * modelStruct)
// Cross-references:
//   engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610 (004b5610) at 004b562f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 (004b54e0) at 004b55ba [UNCONDITIONAL_CALL]
//   engine_model.c_getMRGLBounds_FUN_00528140 (00528140) at 00528584 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_FUN_00545060 (00545060) at 0054511d [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 0046830f [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 004588f5 [UNCONDITIONAL_CALL]
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 (0048fed0) at 0048fffe [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_model_c_00639bb3
//   TerminatedCString s_engine_model_c_00639bc5
// Function calls:
//   engine_boss.c_modelStructNotSupported_FUN_0041dbb0
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl engine_model_c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended *modelStruct)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  if (modelStruct != (SMRGLHeaderExtended *)0x0) {
    iVar1 = (modelStruct->base).type;
    if (iVar1 == 0x20) {
      engine_model_c_freeMRGLData_FUN_005280b0((SMRGLHeaderExtended *)modelStruct[1].child_count);
      iVar1 = 0;
      pSVar2 = modelStruct;
      if (0 < modelStruct->child_count) {
        do {
          iVar1 = iVar1 + 1;
          engine_model_c_freeMRGLData_FUN_005280b0((SMRGLHeaderExtended *)pSVar2[0x17].base.count);
          pSVar2 = (SMRGLHeaderExtended *)&(pSVar2->base).count;
        } while (iVar1 < modelStruct->child_count);
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(modelStruct,"..\\engine\\model.c",0x133);
      return;
    }
    if (iVar1 != 0x26) {
      shape_memdbg_cpp_debugFree_FUN_0050f460(modelStruct,"..\\engine\\model.c",0x13c);
      return;
    }
    engine_boss_c_modelStructNotSupported_FUN_0041dbb0(modelStruct);
  }
  return;
}


// Assembly code:
// 005280b0: PUSH EDI
//   Label: engine_model.c_freeMRGLData_FUN_005280b0
// 005280b1: PUSH EBP
// 005280b2: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005280b6: TEST EBP,EBP
// 005280b8: JZ 0x005280d2
//   XREF to: 005280d2 (CONDITIONAL_JUMP)
// 005280ba: MOV EDX,dword ptr [EBP]
// 005280bd: MOV EDI,EBP
// 005280bf: CMP EDX,0x20
// 005280c2: JZ 0x005280d5
//   XREF to: 005280d5 (CONDITIONAL_JUMP)
// 005280c4: CMP EDX,0x26
// 005280c7: JNZ 0x00528128
//   XREF to: 00528128 (CONDITIONAL_JUMP)
// 005280c9: PUSH EBP
// 005280ca: CALL engine_boss.c_modelStructNotSupported_FUN_0041dbb0
//   XREF to: 0041dbb0 (UNCONDITIONAL_CALL)
// 005280cf: ADD ESP,0x4
// 005280d2: POP EBP
//   Label: LAB_005280d2
// 005280d3: POP EDI
// 005280d4: RET
// 005280d5: PUSH ESI
//   Label: LAB_005280d5
// 005280d6: PUSH EBX
// 005280d7: MOV EBX,dword ptr [EBP + 0x14]
// 005280da: PUSH EBX
// 005280db: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 005280e0: ADD ESP,0x4
// 005280e3: MOV ESI,dword ptr [EBP + 0x8]
// 005280e6: XOR EBX,EBX
// 005280e8: TEST ESI,ESI
// 005280ea: JLE 0x00528110
//   XREF to: 00528110 (CONDITIONAL_JUMP)
// 005280ec: MOV ESI,EBP
// 005280ee: MOV EAX,dword ptr [ESI + 0x118]
//   Label: LAB_005280ee
// 005280f4: PUSH EAX
// 005280f5: ADD ESI,0x4
// 005280f8: INC EBX
// 005280f9: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 005280fe: MOV EDX,dword ptr [EDI + 0x8]
// 00528101: ADD ESP,0x4
// 00528104: CMP EBX,EDX
// 00528106: JL 0x005280ee
//   XREF to: 005280ee (CONDITIONAL_JUMP)
// 00528108: LEA EAX,[EAX]
// 0052810e: MOV EDX,EDX
// 00528110: PUSH 0x133
//   Label: LAB_00528110
// 00528115: PUSH 0x639bb3
//   XREF to: 00639bb3 (DATA)
// 0052811a: PUSH EBP
// 0052811b: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00528120: ADD ESP,0xc
// 00528123: POP EBX
// 00528124: POP ESI
// 00528125: POP EBP
// 00528126: POP EDI
// 00528127: RET
// 00528128: PUSH 0x13c
//   Label: LAB_00528128
// 0052812d: PUSH 0x639bc5
//   XREF to: 00639bc5 (DATA)
// 00528132: PUSH EBP
// 00528133: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00528138: ADD ESP,0xc
// 0052813b: POP EBP
// 0052813c: POP EDI
// 0052813d: RET
