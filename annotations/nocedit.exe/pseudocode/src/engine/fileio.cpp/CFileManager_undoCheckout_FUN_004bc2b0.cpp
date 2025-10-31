// Name: engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0
// Address: 004bc2b0
// Address Range: [[004bc2b0, 004bc591]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0(CFileManager * this_ptr, CCheckOutItem * checkout_item)
// Globals:
//   TerminatedCString s_anon_00626a5d
//   TerminatedCString s_Select_file_to_undo_chec_00626a5f
//   TerminatedCString s_Remounting_all_pods_0062759a
//   TerminatedCString s_pod_00628fb9
//   TerminatedCString s_Select_file_to_undo_chec_00628fbf
//   TerminatedCString s_Delete_local_files_and_m_00628fdd
//   TerminatedCString s_Delete_local_files_but_d_00628ffa
//   TerminatedCString s_Keep_files_extracted_and_0062901d
//   TerminatedCString s_Undo_checkout_on_s_00629045
//   TerminatedCString s_Delete_local_files_00629059
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
//   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_undoCheckout_FUN_004bc2b0
          (CFileManager *this_ptr,CCheckOutItem *checkout_item)

{
  CFileManager *this_ptr_00;
  CCheckOutItem *this_ptr_01;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CStrList_vtable *in_stack_00000010;
  char **in_stack_fffff880;
  CStrList_vtable *in_stack_fffff884;
  char **in_stack_fffff888;
  CStrList_vtable *in_stack_fffff88c;
  char **in_stack_fffff890;
  CStrList_vtable *in_stack_fffff894;
  uint in_stack_fffff898;
  char acStack_3e4 [4];
  char acStack_3e0 [456];
  char acStack_218 [4];
  undefined1 auStack_214 [4];
  char acStack_210 [248];
  char acStack_118 [4];
  char acStack_114 [20];
  char acStack_100 [28];
  char acStack_e4 [4];
  char acStack_e0 [8];
  char acStack_d8 [208];
  
  this_ptr_01 = checkout_item;
  this_ptr_00 = this_ptr;
  iVar1 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(this_ptr);
  if (iVar1 != 0) {
    iVar1 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                      (this_ptr_01,(char *)in_stack_00000010,acStack_118,
                       "Select file to undo check out","*.pod");
    if (iVar1 != 0) {
      iVar1 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        (this_ptr_01,acStack_114,acStack_218,"Select file to undo check out",
                         "*");
      if (iVar1 != 0) {
        iVar1 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (this_ptr_01,auStack_214);
        if (iVar1 != 0) {
          iVar1 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                            (this_ptr_01->name,acStack_210);
          if (iVar1 != 0) {
            shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xfffffffc);
            engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
                      (this_ptr_00,(CStrList *)&stack0x00000000);
            iVar1 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                              (this_ptr_00,(CStrList *)&this_ptr,acStack_100);
            if (iVar1 < 0) {
              shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff864);
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff868,"Delete local files and mount");
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff86c,"Delete local files but don't mount");
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)&stack0xfffff870,"Keep files extracted and pod dismounted");
              crt_stdio_c_sprintf_FUN_005fdbd0(acStack_3e4,"Undo checkout on %s");
              iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                ((CPickList *)&stack0xfffff878,acStack_3e0,-1,0);
              if (iVar1 == 0) {
                iVar2 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                  (this_ptr_00,acStack_e4);
                if (iVar2 == 0) {
                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                            ((CPickList *)&stack0xfffff880,0,(uint)in_stack_fffff880,
                             (uint)in_stack_fffff884,(uint)in_stack_fffff888,(uint)in_stack_fffff88c
                             ,(uint)in_stack_fffff890);
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                            ((CStrList *)&stack0x00000028,0,(uint)in_stack_fffff884);
                  return 0;
                }
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          ((CStrList *)&stack0x00000024,acStack_e0);
                engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
                          (this_ptr_00,(CStrList *)&stack0x00000028);
              }
              if (iVar1 == 1) {
                iVar1 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                  (this_ptr_00,acStack_d8);
                if (iVar1 == 0) {
                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                            ((CPickList *)&stack0xfffff888,0,(uint)in_stack_fffff888,
                             (uint)in_stack_fffff88c,(uint)in_stack_fffff890,(uint)in_stack_fffff894
                             ,in_stack_fffff898);
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                            ((CStrList *)&stack0x00000030,0,(uint)in_stack_fffff88c);
                  return 0;
                }
              }
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        ((CPickList *)&stack0xfffff888,0,(uint)in_stack_fffff888,
                         (uint)in_stack_fffff88c,(uint)in_stack_fffff890,(uint)in_stack_fffff894,
                         in_stack_fffff898);
            }
            else {
              iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                                (g_CEditorToolsPtr,"Delete local files?");
              if (iVar1 != 0) {
                iVar1 = engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
                                  (this_ptr_00,acStack_d8);
                if (iVar1 == 0) {
                  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                            ((CStrList *)&stack0x00000030,0,(uint)in_stack_fffff88c);
                  return 0;
                }
              }
            }
            if (g_CDemonPodPtr != (CDemonPod *)0x0) {
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Remounting all pods...");
              engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
              (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
            }
            shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                      ((CStrList *)&stack0x00000030,0,(uint)in_stack_fffff88c);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}


// Assembly code:
// 004bc2b0: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0
// 004bc2b1: PUSH ESI
// 004bc2b2: SUB ESP,0x7b4
// 004bc2b8: MOV EBX,dword ptr [ESP + 0x7c0]
//   XREF to: Stack[0x4] (READ)
// 004bc2bf: MOV ESI,dword ptr [ESP + 0x7c4]
//   XREF to: Stack[0x8] (READ)
// 004bc2c6: PUSH EBX
// 004bc2c7: CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   XREF to: 004bccf0 (UNCONDITIONAL_CALL)
// 004bc2cc: ADD ESP,0x4
// 004bc2cf: TEST EAX,EAX
// 004bc2d1: JNZ 0x004bc2e0
//   XREF to: 004bc2e0 (CONDITIONAL_JUMP)
// 004bc2d3: XOR EBX,EBX
//   Label: LAB_004bc2d3
// 004bc2d5: MOV EAX,EBX
// 004bc2d7: ADD ESP,0x7b4
// 004bc2dd: POP ESI
// 004bc2de: POP EBX
// 004bc2df: RET
// 004bc2e0: PUSH 0x628fb9
//   Label: LAB_004bc2e0
//   XREF to: 00628fb9 (DATA)
// 004bc2e5: PUSH 0x628fbf
//   XREF to: 00628fbf (DATA)
// 004bc2ea: LEA EAX,[ESP + 0x6a8]
//   XREF to: Stack[-0x11c] (DATA)
// 004bc2f1: PUSH EAX
// 004bc2f2: MOV EDX,dword ptr [ESP + 0x7d4]
//   XREF to: Stack[0xc] (READ)
// 004bc2f9: PUSH EDX
// 004bc2fa: PUSH ESI
// 004bc2fb: CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
// 004bc300: ADD ESP,0x14
// 004bc303: TEST EAX,EAX
// 004bc305: JZ 0x004bc2d3
//   XREF to: 004bc2d3 (CONDITIONAL_JUMP)
// 004bc307: PUSH 0x626a5d
//   XREF to: 00626a5d (DATA)
// 004bc30c: PUSH 0x626a5f
//   XREF to: 00626a5f (DATA)
// 004bc311: LEA EAX,[ESP + 0x5a4]
//   XREF to: Stack[-0x220] (DATA)
// 004bc318: PUSH EAX
// 004bc319: LEA EAX,[ESP + 0x6ac]
//   XREF to: Stack[-0x11c] (DATA)
// 004bc320: PUSH EAX
// 004bc321: PUSH ESI
// 004bc322: CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
// 004bc327: ADD ESP,0x14
// 004bc32a: TEST EAX,EAX
// 004bc32c: JZ 0x004bc2d3
//   XREF to: 004bc2d3 (CONDITIONAL_JUMP)
// 004bc32e: LEA EAX,[ESP + 0x59c]
//   XREF to: Stack[-0x220] (DATA)
// 004bc335: PUSH EAX
// 004bc336: PUSH ESI
// 004bc337: CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   XREF to: 004b35a0 (UNCONDITIONAL_CALL)
// 004bc33c: ADD ESP,0x8
// 004bc33f: TEST EAX,EAX
// 004bc341: JZ 0x004bc2d3
//   XREF to: 004bc2d3 (CONDITIONAL_JUMP)
// 004bc343: LEA EAX,[ESP + 0x59c]
//   XREF to: Stack[-0x220] (DATA)
// 004bc34a: PUSH EAX
// 004bc34b: PUSH ESI
// 004bc34c: CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   XREF to: 004b3220 (UNCONDITIONAL_CALL)
// 004bc351: ADD ESP,0x8
// 004bc354: TEST EAX,EAX
// 004bc356: JZ 0x004bc2d3
//   XREF to: 004bc2d3 (CONDITIONAL_JUMP)
// 004bc35c: LEA EAX,[ESP + 0x7a4]
//   XREF to: Stack[-0x18] (DATA)
// 004bc363: PUSH EAX
// 004bc364: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004bc369: ADD ESP,0x4
// 004bc36c: LEA EAX,[ESP + 0x7a4]
//   XREF to: Stack[-0x18] (DATA)
// 004bc373: PUSH EAX
// 004bc374: PUSH EBX
// 004bc375: CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)
// 004bc37a: ADD ESP,0x8
// 004bc37d: LEA EAX,[ESP + 0x6a0]
//   XREF to: Stack[-0x11c] (DATA)
// 004bc384: PUSH EAX
// 004bc385: LEA EAX,[ESP + 0x7a8]
//   XREF to: Stack[-0x18] (DATA)
// 004bc38c: PUSH EAX
// 004bc38d: PUSH EBX
// 004bc38e: CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
// 004bc393: ADD ESP,0xc
// 004bc396: TEST EAX,EAX
// 004bc398: JL 0x004bc42d
//   XREF to: 004bc42d (CONDITIONAL_JUMP)
// 004bc39e: PUSH 0x629059
//   XREF to: 00629059 (DATA)
// 004bc3a3: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bc3a9: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bc3aa: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 004bc3af: ADD ESP,0x8
// 004bc3b2: TEST EAX,EAX
// 004bc3b4: JZ 0x004bc3cf
//   XREF to: 004bc3cf (CONDITIONAL_JUMP)
// 004bc3b6: LEA EAX,[ESP + 0x6a0]
//   XREF to: Stack[-0x11c] (DATA)
// 004bc3bd: PUSH EAX
// 004bc3be: PUSH EBX
// 004bc3bf: CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
//   XREF to: 004bca50 (UNCONDITIONAL_CALL)
// 004bc3c4: ADD ESP,0x8
// 004bc3c7: TEST EAX,EAX
// 004bc3c9: JZ 0x004bc574
//   XREF to: 004bc574 (CONDITIONAL_JUMP)
// 004bc3cf: CMP dword ptr [0x00680cdc],0x0
//   Label: LAB_004bc3cf
//   XREF to: 00680cdc (READ)
// 004bc3d6: JZ 0x004bc40f
//   XREF to: 004bc40f (CONDITIONAL_JUMP)
// 004bc3d8: PUSH EDI
// 004bc3d9: PUSH 0x62759a
//   XREF to: 0062759a (DATA)
// 004bc3de: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bc3e4: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bc3e5: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bc3ea: ADD ESP,0x8
// 004bc3ed: MOV EDI,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004bc3f3: PUSH EDI
//   XREF to: 030e5090 (DATA)
// 004bc3f4: CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   XREF to: 00550c80 (UNCONDITIONAL_CALL)
// 004bc3f9: ADD ESP,0x4
// 004bc3fc: MOV EAX,[0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004bc401: PUSH EAX
//   XREF to: 030e5090 (DATA)
// 004bc402: MOV EBX,dword ptr [EAX + 0x194]
//   XREF to: 030e5224 (READ)
// 004bc408: CALL dword ptr [EBX + 0x4]
// 004bc40b: ADD ESP,0x4
// 004bc40e: POP EDI
// 004bc40f: XOR EBX,EBX
//   Label: LAB_004bc40f
// 004bc411: PUSH EBX
// 004bc412: LEA EAX,[ESP + 0x7a8]
//   XREF to: Stack[-0x18] (DATA)
// 004bc419: PUSH EAX
// 004bc41a: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bc41f: ADD ESP,0x8
// 004bc422: MOV EAX,EBX
// 004bc424: ADD ESP,0x7b4
// 004bc42a: POP ESI
// 004bc42b: POP EBX
// 004bc42c: RET
// 004bc42d: MOV EAX,ESP
//   Label: LAB_004bc42d
// 004bc42f: PUSH EAX
// 004bc430: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004bc435: ADD ESP,0x4
// 004bc438: PUSH 0x628fdd
//   XREF to: 00628fdd (DATA)
// 004bc43d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x7bc] (DATA)
// 004bc441: PUSH EAX
// 004bc442: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bc447: ADD ESP,0x8
// 004bc44a: PUSH 0x628ffa
//   XREF to: 00628ffa (DATA)
// 004bc44f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x7bc] (DATA)
// 004bc453: PUSH EAX
// 004bc454: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bc459: ADD ESP,0x8
// 004bc45c: PUSH 0x62901d
//   XREF to: 0062901d (DATA)
// 004bc461: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x7bc] (DATA)
// 004bc465: PUSH EAX
// 004bc466: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bc46b: ADD ESP,0x8
// 004bc46e: LEA EAX,[ESP + 0x6a0]
//   XREF to: Stack[-0x11c] (DATA)
// 004bc475: PUSH EAX
// 004bc476: PUSH 0x629045
//   XREF to: 00629045 (DATA)
// 004bc47b: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x414] (DATA)
// 004bc482: PUSH EAX
// 004bc483: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004bc488: ADD ESP,0xc
// 004bc48b: PUSH 0x0
// 004bc48d: PUSH -0x1
// 004bc48f: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x414] (DATA)
// 004bc496: PUSH EAX
// 004bc497: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x7bc] (DATA)
// 004bc49b: PUSH EAX
// 004bc49c: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004bc4a1: ADD ESP,0x10
// 004bc4a4: MOV ESI,EAX
// 004bc4a6: TEST EAX,EAX
// 004bc4a8: JZ 0x004bc4dc
//   XREF to: 004bc4dc (CONDITIONAL_JUMP)
// 004bc4aa: CMP ESI,0x1
//   Label: LAB_004bc4aa
// 004bc4ad: JNZ 0x004bc4c8
//   XREF to: 004bc4c8 (CONDITIONAL_JUMP)
// 004bc4af: LEA EAX,[ESP + 0x6a0]
//   XREF to: Stack[-0x11c] (DATA)
// 004bc4b6: PUSH EAX
// 004bc4b7: PUSH EBX
// 004bc4b8: CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
//   XREF to: 004bca50 (UNCONDITIONAL_CALL)
// 004bc4bd: ADD ESP,0x8
// 004bc4c0: TEST EAX,EAX
// 004bc4c2: JZ 0x004bc548
//   XREF to: 004bc548 (CONDITIONAL_JUMP)
// 004bc4c8: PUSH 0x0
//   Label: LAB_004bc4c8
// 004bc4ca: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x7bc] (DATA)
// 004bc4ce: PUSH EAX
// 004bc4cf: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bc4d4: ADD ESP,0x8
// 004bc4d7: JMP 0x004bc3cf
//   XREF to: 004bc3cf (UNCONDITIONAL_JUMP)
// 004bc4dc: LEA EAX,[ESP + 0x6a0]
//   Label: LAB_004bc4dc
//   XREF to: Stack[-0x11c] (DATA)
// 004bc4e3: PUSH EAX
// 004bc4e4: PUSH EBX
// 004bc4e5: CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
//   XREF to: 004bca50 (UNCONDITIONAL_CALL)
// 004bc4ea: ADD ESP,0x8
// 004bc4ed: TEST EAX,EAX
// 004bc4ef: JZ 0x004bc51c
//   XREF to: 004bc51c (CONDITIONAL_JUMP)
// 004bc4f1: LEA EAX,[ESP + 0x6a0]
//   XREF to: Stack[-0x11c] (DATA)
// 004bc4f8: PUSH EAX
// 004bc4f9: LEA EAX,[ESP + 0x7a8]
//   XREF to: Stack[-0x18] (DATA)
// 004bc500: PUSH EAX
// 004bc501: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bc506: ADD ESP,0x8
// 004bc509: LEA EAX,[ESP + 0x7a4]
//   XREF to: Stack[-0x18] (DATA)
// 004bc510: PUSH EAX
// 004bc511: PUSH EBX
// 004bc512: CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   XREF to: 004ba620 (UNCONDITIONAL_CALL)
// 004bc517: ADD ESP,0x8
// 004bc51a: JMP 0x004bc4aa
//   XREF to: 004bc4aa (UNCONDITIONAL_JUMP)
// 004bc51c: PUSH EAX
//   Label: LAB_004bc51c
// 004bc51d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x7bc] (DATA)
// 004bc521: PUSH EAX
// 004bc522: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bc527: ADD ESP,0x8
// 004bc52a: PUSH ESI
// 004bc52b: LEA EAX,[ESP + 0x7a8]
//   XREF to: Stack[-0x18] (DATA)
// 004bc532: PUSH EAX
// 004bc533: XOR EBX,EBX
// 004bc535: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bc53a: ADD ESP,0x8
// 004bc53d: MOV EAX,EBX
// 004bc53f: ADD ESP,0x7b4
// 004bc545: POP ESI
// 004bc546: POP EBX
// 004bc547: RET
// 004bc548: PUSH EAX
//   Label: LAB_004bc548
// 004bc549: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x7bc] (DATA)
// 004bc54d: PUSH EAX
// 004bc54e: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bc553: ADD ESP,0x8
// 004bc556: XOR EBX,EBX
// 004bc558: PUSH EBX
// 004bc559: LEA EAX,[ESP + 0x7a8]
//   XREF to: Stack[-0x18] (DATA)
// 004bc560: PUSH EAX
// 004bc561: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bc566: ADD ESP,0x8
// 004bc569: MOV EAX,EBX
// 004bc56b: ADD ESP,0x7b4
// 004bc571: POP ESI
// 004bc572: POP EBX
// 004bc573: RET
// 004bc574: PUSH EAX
//   Label: LAB_004bc574
// 004bc575: LEA EAX,[ESP + 0x7a8]
//   XREF to: Stack[-0x18] (DATA)
// 004bc57c: PUSH EAX
// 004bc57d: XOR EBX,EBX
// 004bc57f: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bc584: ADD ESP,0x8
// 004bc587: MOV EAX,EBX
// 004bc589: ADD ESP,0x7b4
// 004bc58f: POP ESI
// 004bc590: POP EBX
// 004bc591: RET
