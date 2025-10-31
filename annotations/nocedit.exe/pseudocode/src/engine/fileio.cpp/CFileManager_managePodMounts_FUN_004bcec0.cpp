// Name: engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0
// Address: 004bcec0
// Address Range: [[004bcec0, 004bd186]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0(CFileManager * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be472 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Remounting_all_pods_0062759a
//   TerminatedCString s_pod_0062935c
//   TerminatedCString s_anon_00629362
//   TerminatedCString s_Close_00629364
//   TerminatedCString s_s_Mounted_0062936a
//   TerminatedCString s_s_Not_mounted_00629375
//   TerminatedCString s_Select_PODs_you_wish_to__00629384
//   TerminatedCString s_Applying_changes_to_POD__006293a9
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
//   shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_managePodMounts_FUN_004bcec0(CFileManager *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  BADSPACEBASE *in_ESP;
  uint in_stack_fffffa58;
  uint in_stack_fffffa5c;
  char **in_stack_fffffa60;
  CStrList_vtable *in_stack_fffffa64;
  uint in_stack_fffffa68;
  char **in_stack_fffffa6c;
  CStrList_vtable *in_stack_fffffa70;
  uint in_stack_fffffa74;
  char acStack_21c [4];
  char acStack_218 [496];
  undefined1 auStack_28 [8];
  CStrList local_20;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_20);
  shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
            ((CStrList *)&local_20.capacity,".","*.pod");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_28);
  engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
            (this_ptr,(CStrList *)(auStack_28 + 4));
  iVar4 = 0;
  if (0 < local_20.item_count) {
    do {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,iVar4);
      iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                        (this_ptr,(CStrList *)&local_20.capacity,pcVar1);
      if (iVar2 < 0) {
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_28,iVar4);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&local_20.vtable,pcVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_20.item_count);
  }
  iVar4 = 0;
  while( true ) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffa38);
    shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20
              ((CPickList *)&stack0xfffffa3c,(char *)0x0);
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90
              ((CPickList *)&stack0xfffffa40,"Close");
    iVar2 = 0;
    if (0 < unaff_EBX) {
      do {
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&stack0xfffffffc,iVar2);
        iVar3 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                          (this_ptr,(CStrList *)(auStack_28 + 4),pcVar1);
        if (iVar3 < 0) {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffff0,iVar2);
          pcVar1 = "%s\tNot mounted";
        }
        else {
          shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffff0,iVar2);
          pcVar1 = "%s\tMounted";
        }
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_21c,pcVar1);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffa40,acStack_218);
        iVar2 = iVar2 + 1;
      } while (iVar2 < unaff_EBX);
    }
    iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffa44,"Select PODs you wish to have mounted",iVar4,0);
    if (iVar4 < 0) break;
    pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0x00000000,iVar4);
    iVar2 = engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
                      (this_ptr,(CStrList *)&stack0xfffffff4,pcVar1);
    if (iVar2 < 0) {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)&stack0x00000008,iVar4);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffffc,pcVar1);
    }
    else {
      shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0((CStrList *)&stack0xfffffff8,iVar2);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffa58,0,in_stack_fffffa58,in_stack_fffffa5c,
               (uint)in_stack_fffffa60,(uint)in_stack_fffffa64,in_stack_fffffa68);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Applying changes to POD.INI");
  engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
            (this_ptr,(CStrList *)&stack0xfffffff4);
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Remounting all pods...");
    engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
    (*g_CDemonPodPtr->vtable->load)((CPod *)g_CDemonPodPtr);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffa64,0,(uint)in_stack_fffffa64,in_stack_fffffa68,
             (uint)in_stack_fffffa6c,(uint)in_stack_fffffa70,in_stack_fffffa74);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0x00000010,0,in_stack_fffffa68);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
            ((CStrList *)&stack0x00000024,0,(uint)in_stack_fffffa6c);
  return;
}


// Assembly code:
// 004bcec0: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0
// 004bcec1: PUSH ESI
// 004bcec2: PUSH EDI
// 004bcec3: PUSH EBP
// 004bcec4: SUB ESP,0x5c8
// 004bceca: MOV ESI,dword ptr [ESP + 0x5dc]
//   XREF to: Stack[0x4] (READ)
// 004bced1: LEA EAX,[ESP + 0x5b8]
//   XREF to: Stack[-0x20] (DATA)
// 004bced8: PUSH EAX
// 004bced9: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004bcede: ADD ESP,0x4
// 004bcee1: PUSH 0x62935c
//   XREF to: 0062935c (DATA)
// 004bcee6: PUSH 0x629362
//   XREF to: 00629362 (DATA)
// 004bceeb: LEA EAX,[ESP + 0x5c0]
//   XREF to: Stack[-0x20] (DATA)
// 004bcef2: PUSH EAX
// 004bcef3: CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
//   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
// 004bcef8: ADD ESP,0xc
// 004bcefb: LEA EAX,[ESP + 0x5a8]
//   XREF to: Stack[-0x30] (DATA)
// 004bcf02: PUSH EAX
// 004bcf03: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004bcf08: ADD ESP,0x4
// 004bcf0b: LEA EAX,[ESP + 0x5a8]
//   XREF to: Stack[-0x30] (DATA)
// 004bcf12: PUSH EAX
// 004bcf13: PUSH ESI
// 004bcf14: CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
//   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)
// 004bcf19: ADD ESP,0x8
// 004bcf1c: MOV EDX,dword ptr [ESP + 0x5a8]
//   XREF to: Stack[-0x30] (READ)
// 004bcf23: XOR EBX,EBX
// 004bcf25: TEST EDX,EDX
// 004bcf27: JLE 0x004bcf60
//   XREF to: 004bcf60 (CONDITIONAL_JUMP)
// 004bcf29: PUSH EBX
//   Label: LAB_004bcf29
// 004bcf2a: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x30] (DATA)
// 004bcf31: PUSH EAX
// 004bcf32: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004bcf37: ADD ESP,0x8
// 004bcf3a: PUSH EAX
// 004bcf3b: LEA EAX,[ESP + 0x5bc]
//   XREF to: Stack[-0x20] (DATA)
// 004bcf42: PUSH EAX
// 004bcf43: PUSH ESI
// 004bcf44: CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
// 004bcf49: ADD ESP,0xc
// 004bcf4c: TEST EAX,EAX
// 004bcf4e: JL 0x004bd07c
//   XREF to: 004bd07c (CONDITIONAL_JUMP)
// 004bcf54: MOV ECX,dword ptr [ESP + 0x5a8]
//   Label: LAB_004bcf54
//   XREF to: Stack[-0x30] (READ)
// 004bcf5b: INC EBX
// 004bcf5c: CMP EBX,ECX
// 004bcf5e: JL 0x004bcf29
//   XREF to: 004bcf29 (CONDITIONAL_JUMP)
// 004bcf60: XOR EDI,EDI
//   Label: LAB_004bcf60
// 004bcf62: XOR EBP,EBP
// 004bcf64: MOV EAX,ESP
//   Label: LAB_004bcf64
// 004bcf66: PUSH EAX
// 004bcf67: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004bcf6c: ADD ESP,0x4
// 004bcf6f: PUSH EBP
// 004bcf70: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5d8] (DATA)
// 004bcf74: PUSH EAX
// 004bcf75: CALL shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20
//   XREF to: 004a3d20 (UNCONDITIONAL_CALL)
// 004bcf7a: ADD ESP,0x8
// 004bcf7d: PUSH 0x629364
//   XREF to: 00629364 (DATA)
// 004bcf82: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5d8] (DATA)
// 004bcf86: PUSH EAX
// 004bcf87: CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
//   XREF to: 004a3d90 (UNCONDITIONAL_CALL)
// 004bcf8c: ADD ESP,0x8
// 004bcf8f: MOV EAX,dword ptr [ESP + 0x5b8]
//   XREF to: Stack[-0x20] (READ)
// 004bcf96: MOV EBX,EBP
// 004bcf98: CMP EBP,EAX
// 004bcf9a: JGE 0x004bd00d
//   XREF to: 004bd00d (CONDITIONAL_JUMP)
// 004bcf9c: PUSH EBX
//   Label: LAB_004bcf9c
// 004bcf9d: LEA EAX,[ESP + 0x5bc]
//   XREF to: Stack[-0x20] (DATA)
// 004bcfa4: PUSH EAX
// 004bcfa5: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004bcfaa: ADD ESP,0x8
// 004bcfad: PUSH EAX
// 004bcfae: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x30] (DATA)
// 004bcfb5: PUSH EAX
// 004bcfb6: PUSH ESI
// 004bcfb7: CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
// 004bcfbc: ADD ESP,0xc
// 004bcfbf: TEST EAX,EAX
// 004bcfc1: JL 0x004bd0a3
//   XREF to: 004bd0a3 (CONDITIONAL_JUMP)
// 004bcfc7: PUSH EBX
// 004bcfc8: LEA EAX,[ESP + 0x5bc]
//   XREF to: Stack[-0x20] (DATA)
// 004bcfcf: PUSH EAX
// 004bcfd0: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004bcfd5: ADD ESP,0x8
// 004bcfd8: PUSH EAX
// 004bcfd9: PUSH 0x62936a
//   XREF to: 0062936a (DATA)
// 004bcfde: LEA EAX,[ESP + 0x3b0]
//   Label: LAB_004bcfde
//   XREF to: Stack[-0x230] (DATA)
// 004bcfe5: PUSH EAX
// 004bcfe6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004bcfeb: ADD ESP,0xc
// 004bcfee: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x230] (DATA)
// 004bcff5: PUSH EAX
// 004bcff6: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5d8] (DATA)
// 004bcffa: PUSH EAX
// 004bcffb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bd000: ADD ESP,0x8
// 004bd003: INC EBX
// 004bd004: CMP EBX,dword ptr [ESP + 0x5b8]
//   XREF to: Stack[-0x20] (READ)
// 004bd00b: JL 0x004bcf9c
//   XREF to: 004bcf9c (CONDITIONAL_JUMP)
// 004bd00d: PUSH EBP
//   Label: LAB_004bd00d
// 004bd00e: PUSH EDI
// 004bd00f: PUSH 0x629384
//   XREF to: 00629384 (DATA)
// 004bd014: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5d8] (DATA)
// 004bd018: PUSH EAX
// 004bd019: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004bd01e: MOV EBX,EAX
// 004bd020: ADD ESP,0x10
// 004bd023: MOV EDI,EAX
// 004bd025: TEST EAX,EAX
// 004bd027: JL 0x004bd0bf
//   XREF to: 004bd0bf (CONDITIONAL_JUMP)
// 004bd02d: PUSH EAX
// 004bd02e: LEA EAX,[ESP + 0x5bc]
//   XREF to: Stack[-0x20] (DATA)
// 004bd035: PUSH EAX
// 004bd036: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004bd03b: ADD ESP,0x8
// 004bd03e: PUSH EAX
// 004bd03f: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x30] (DATA)
// 004bd046: PUSH EAX
// 004bd047: PUSH ESI
// 004bd048: CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
//   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)
// 004bd04d: ADD ESP,0xc
// 004bd050: TEST EAX,EAX
// 004bd052: JL 0x004bd163
//   XREF to: 004bd163 (CONDITIONAL_JUMP)
// 004bd058: PUSH EAX
// 004bd059: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x30] (DATA)
// 004bd060: PUSH EAX
// 004bd061: CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
// 004bd066: ADD ESP,0x8
//   Label: LAB_004bd066
// 004bd069: PUSH EBP
// 004bd06a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5d8] (DATA)
// 004bd06e: PUSH EAX
// 004bd06f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bd074: ADD ESP,0x8
// 004bd077: JMP 0x004bcf64
//   XREF to: 004bcf64 (UNCONDITIONAL_JUMP)
// 004bd07c: PUSH EBX
//   Label: LAB_004bd07c
// 004bd07d: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x30] (DATA)
// 004bd084: PUSH EAX
// 004bd085: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004bd08a: ADD ESP,0x8
// 004bd08d: PUSH EAX
// 004bd08e: LEA EAX,[ESP + 0x5bc]
//   XREF to: Stack[-0x20] (DATA)
// 004bd095: PUSH EAX
// 004bd096: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bd09b: ADD ESP,0x8
// 004bd09e: JMP 0x004bcf54
//   XREF to: 004bcf54 (UNCONDITIONAL_JUMP)
// 004bd0a3: PUSH EBX
//   Label: LAB_004bd0a3
// 004bd0a4: LEA EAX,[ESP + 0x5bc]
//   XREF to: Stack[-0x20] (DATA)
// 004bd0ab: PUSH EAX
// 004bd0ac: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004bd0b1: ADD ESP,0x8
// 004bd0b4: PUSH EAX
// 004bd0b5: PUSH 0x629375
//   XREF to: 00629375 (DATA)
// 004bd0ba: JMP 0x004bcfde
//   XREF to: 004bcfde (UNCONDITIONAL_JUMP)
// 004bd0bf: PUSH 0x6293a9
//   Label: LAB_004bd0bf
//   XREF to: 006293a9 (DATA)
// 004bd0c4: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004bd0ca: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bd0cb: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bd0d0: ADD ESP,0x8
// 004bd0d3: LEA EAX,[ESP + 0x5a8]
//   XREF to: Stack[-0x30] (DATA)
// 004bd0da: PUSH EAX
// 004bd0db: PUSH ESI
// 004bd0dc: CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   XREF to: 004ba620 (UNCONDITIONAL_CALL)
// 004bd0e1: MOV EBX,dword ptr [0x00680cdc]
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 004bd0e7: ADD ESP,0x8
// 004bd0ea: TEST EBX,EBX
// 004bd0ec: JNZ 0x004bd12c
//   XREF to: 004bd12c (CONDITIONAL_JUMP)
// 004bd0ee: PUSH 0x0
//   Label: LAB_004bd0ee
// 004bd0f0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5d8] (DATA)
// 004bd0f4: PUSH EAX
// 004bd0f5: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bd0fa: ADD ESP,0x8
// 004bd0fd: PUSH 0x0
// 004bd0ff: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x30] (DATA)
// 004bd106: PUSH EAX
// 004bd107: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bd10c: ADD ESP,0x8
// 004bd10f: PUSH 0x0
// 004bd111: LEA EAX,[ESP + 0x5bc]
//   XREF to: Stack[-0x20] (DATA)
// 004bd118: PUSH EAX
// 004bd119: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bd11e: ADD ESP,0x8
// 004bd121: ADD ESP,0x5c8
// 004bd127: POP EBP
// 004bd128: POP EDI
// 004bd129: POP ESI
// 004bd12a: POP EBX
// 004bd12b: RET
// 004bd12c: PUSH 0x62759a
//   Label: LAB_004bd12c
//   XREF to: 0062759a (DATA)
// 004bd131: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bd137: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bd138: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bd13d: ADD ESP,0x8
// 004bd140: MOV EDI,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004bd146: PUSH EDI
//   XREF to: 030e5090 (DATA)
// 004bd147: CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80
//   XREF to: 00550c80 (UNCONDITIONAL_CALL)
// 004bd14c: ADD ESP,0x4
// 004bd14f: MOV EAX,[0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004bd154: PUSH EAX
//   XREF to: 030e5090 (DATA)
// 004bd155: MOV EBX,dword ptr [EAX + 0x194]
//   XREF to: 030e5224 (READ)
// 004bd15b: CALL dword ptr [EBX + 0x4]
// 004bd15e: ADD ESP,0x4
// 004bd161: JMP 0x004bd0ee
//   XREF to: 004bd0ee (UNCONDITIONAL_JUMP)
// 004bd163: PUSH EBX
//   Label: LAB_004bd163
// 004bd164: LEA EAX,[ESP + 0x5bc]
//   XREF to: Stack[-0x20] (DATA)
// 004bd16b: PUSH EAX
// 004bd16c: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004bd171: ADD ESP,0x8
// 004bd174: PUSH EAX
// 004bd175: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x30] (DATA)
// 004bd17c: PUSH EAX
// 004bd17d: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bd182: JMP 0x004bd066
//   XREF to: 004bd066 (UNCONDITIONAL_JUMP)
