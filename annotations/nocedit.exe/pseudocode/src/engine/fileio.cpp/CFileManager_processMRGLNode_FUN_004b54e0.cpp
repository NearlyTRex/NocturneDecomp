// Name: engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
// Address: 004b54e0
// Address Range: [[004b54e0, 004b5603]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager * this_ptr, SMRGLHeaderExtended * mrgl_node)
// Cross-references:
//   engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610 (004b5610) at 004b5626 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_MODELS_s_00627628
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
//   engine_model.c_freeMRGLData_FUN_005280b0
//   engine_model.c_getMRGLSize_FUN_00528700
//   engine_model.c_loadModelFile_FUN_00527ec0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0
          (CFileManager *this_ptr,SMRGLHeaderExtended *mrgl_node)

{
  SMRGLHeaderExtended *pSVar1;
  int *texture_filename;
  SMRGLHeaderExtended *pSVar2;
  int iVar3;
  CFileManager *pCVar4;
  
  iVar3 = (mrgl_node->base).type;
  if (iVar3 == 0x20) {
    iVar3 = 0;
    if (0 < mrgl_node->child_count) {
      pSVar2 = mrgl_node + 2;
      do {
        pSVar1 = engine_model_c_loadModelFile_FUN_00527ec0((char *)pSVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(this_ptr->file_ptr,"MODELS\\%s\n",pSVar2);
        pCVar4 = this_ptr;
        engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(this_ptr,pSVar1);
        engine_model_c_freeMRGLData_FUN_005280b0(pSVar1);
        iVar3 = iVar3 + 1;
        pSVar2 = (SMRGLHeaderExtended *)&pSVar2[1].base.count;
      } while (iVar3 < *(int *)pCVar4->file_entries[0]);
    }
  }
  else {
    pSVar2 = mrgl_node;
    if ((iVar3 == 0x26) && (iVar3 = 0, 0 < mrgl_node[2].base.type)) {
      pSVar1 = mrgl_node + 3;
      do {
        iVar3 = iVar3 + 1;
        engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0(this_ptr,(char *)pSVar1);
        pSVar1 = pSVar1 + 2;
      } while (iVar3 < mrgl_node[2].base.type);
    }
    while (iVar3 = (pSVar2->base).type, iVar3 != 0) {
      if ((iVar3 == 0xd) || (iVar3 == 0x40)) {
        engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
                  (this_ptr,(char *)&pSVar2->child_count);
      }
      pSVar1 = pSVar2;
      if ((pSVar2->base).type == 0x1d) {
        iVar3 = 0;
        texture_filename = &pSVar2[2].base.count;
        if (0 < pSVar2->child_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
                      (this_ptr,(char *)texture_filename);
            texture_filename = texture_filename + 8;
          } while (iVar3 < pSVar2->child_count);
        }
      }
      engine_model_c_getMRGLSize_FUN_00528700(pSVar1);
      pSVar2 = pSVar1;
    }
  }
  return;
}


// Assembly code:
// 004b54e0: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
// 004b54e1: PUSH ESI
// 004b54e2: PUSH EDI
// 004b54e3: PUSH EBP
// 004b54e4: SUB ESP,0x8
// 004b54e7: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004b54eb: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004b54ef: MOV EDX,dword ptr [EAX]
// 004b54f1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004b54f5: CMP EDX,0x20
// 004b54f8: JZ 0x004b5584
//   XREF to: 004b5584 (CONDITIONAL_JUMP)
// 004b54fe: CMP EDX,0x26
// 004b5501: JZ 0x004b55d8
//   XREF to: 004b55d8 (CONDITIONAL_JUMP)
// 004b5507: LEA EAX,[EAX]
// 004b550d: LEA EDX,[EDX]
// 004b5510: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004b5510
//   XREF to: Stack[-0x14] (READ)
// 004b5514: MOV EBX,dword ptr [EAX]
// 004b5516: TEST EBX,EBX
// 004b5518: JZ 0x004b55d0
//   XREF to: 004b55d0 (CONDITIONAL_JUMP)
// 004b551e: CMP EBX,0xd
// 004b5521: JZ 0x004b5528
//   XREF to: 004b5528 (CONDITIONAL_JUMP)
// 004b5523: CMP EBX,0x40
// 004b5526: JNZ 0x004b5539
//   XREF to: 004b5539 (CONDITIONAL_JUMP)
// 004b5528: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004b5528
//   XREF to: Stack[-0x14] (READ)
// 004b552c: ADD EAX,0x8
// 004b552f: PUSH EAX
// 004b5530: PUSH EDI
// 004b5531: CALL engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
//   XREF to: 004b53e0 (UNCONDITIONAL_CALL)
// 004b5536: ADD ESP,0x8
// 004b5539: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004b5539
//   XREF to: Stack[-0x14] (READ)
// 004b553d: CMP dword ptr [EAX],0x1d
// 004b5540: JNZ 0x004b5565
//   XREF to: 004b5565 (CONDITIONAL_JUMP)
// 004b5542: MOV EBP,EAX
// 004b5544: MOV ECX,dword ptr [EAX + 0x8]
// 004b5547: XOR ESI,ESI
// 004b5549: LEA EBX,[EAX + 0x1c]
// 004b554c: TEST ECX,ECX
// 004b554e: JLE 0x004b5565
//   XREF to: 004b5565 (CONDITIONAL_JUMP)
// 004b5550: PUSH EBX
//   Label: LAB_004b5550
// 004b5551: PUSH EDI
// 004b5552: INC ESI
// 004b5553: CALL engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
//   XREF to: 004b53e0 (UNCONDITIONAL_CALL)
// 004b5558: ADD EBX,0x20
// 004b555b: MOV EAX,dword ptr [EBP + 0x8]
// 004b555e: ADD ESP,0x8
// 004b5561: CMP ESI,EAX
// 004b5563: JL 0x004b5550
//   XREF to: 004b5550 (CONDITIONAL_JUMP)
// 004b5565: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_004b5565
//   XREF to: Stack[-0x14] (READ)
// 004b5569: PUSH EDX
// 004b556a: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 004b556f: ADD ESP,0x4
// 004b5572: SHR EAX,0x2
// 004b5575: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004b5579: SHL EAX,0x2
// 004b557c: ADD ECX,EAX
// 004b557e: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004b5582: JMP 0x004b5510
//   XREF to: 004b5510 (UNCONDITIONAL_JUMP)
// 004b5584: MOV dword ptr [ESP],EAX
//   Label: LAB_004b5584
//   XREF to: Stack[-0x18] (DATA)
// 004b5587: MOV ESI,dword ptr [EAX + 0x8]
// 004b558a: XOR EBP,EBP
// 004b558c: TEST ESI,ESI
// 004b558e: JLE 0x004b55d0
//   XREF to: 004b55d0 (CONDITIONAL_JUMP)
// 004b5590: LEA EBX,[EAX + 0x18]
// 004b5593: PUSH EBX
//   Label: LAB_004b5593
// 004b5594: CALL engine_model.c_loadModelFile_FUN_00527ec0
//   XREF to: 00527ec0 (UNCONDITIONAL_CALL)
// 004b5599: ADD ESP,0x4
// 004b559c: PUSH EBX
// 004b559d: PUSH 0x627628
//   XREF to: 00627628 (DATA)
// 004b55a2: MOV EDX,dword ptr [EDI]
// 004b55a4: PUSH EDX
// 004b55a5: MOV ESI,EAX
// 004b55a7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b55ac: ADD ESP,0xc
// 004b55af: PUSH ESI
// 004b55b0: PUSH EDI
// 004b55b1: CALL engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
//   XREF to: 004b54e0 (UNCONDITIONAL_CALL)
// 004b55b6: ADD ESP,0x8
// 004b55b9: PUSH ESI
// 004b55ba: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 004b55bf: ADD ESP,0x4
// 004b55c2: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004b55c5: INC EBP
// 004b55c6: MOV ECX,dword ptr [EAX + 0x8]
// 004b55c9: ADD EBX,0x10
// 004b55cc: CMP EBP,ECX
// 004b55ce: JL 0x004b5593
//   XREF to: 004b5593 (CONDITIONAL_JUMP)
// 004b55d0: ADD ESP,0x8
//   Label: LAB_004b55d0
// 004b55d3: POP EBP
// 004b55d4: POP EDI
// 004b55d5: POP ESI
// 004b55d6: POP EBX
// 004b55d7: RET
// 004b55d8: MOV ESI,EAX
//   Label: LAB_004b55d8
// 004b55da: MOV EBX,dword ptr [EAX + 0x18]
// 004b55dd: XOR EBP,EBP
// 004b55df: TEST EBX,EBX
// 004b55e1: JLE 0x004b5510
//   XREF to: 004b5510 (CONDITIONAL_JUMP)
// 004b55e7: LEA EBX,[EAX + 0x24]
// 004b55ea: PUSH EBX
//   Label: LAB_004b55ea
// 004b55eb: PUSH EDI
// 004b55ec: INC EBP
// 004b55ed: CALL engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
//   XREF to: 004b53e0 (UNCONDITIONAL_CALL)
// 004b55f2: ADD EBX,0x18
// 004b55f5: MOV EAX,dword ptr [ESI + 0x18]
// 004b55f8: ADD ESP,0x8
// 004b55fb: CMP EBP,EAX
// 004b55fd: JL 0x004b55ea
//   XREF to: 004b55ea (CONDITIONAL_JUMP)
// 004b55ff: JMP 0x004b5510
//   XREF to: 004b5510 (UNCONDITIONAL_JUMP)
