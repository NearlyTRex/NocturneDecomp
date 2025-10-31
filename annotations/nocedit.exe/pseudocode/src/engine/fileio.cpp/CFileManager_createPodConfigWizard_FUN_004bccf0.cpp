// Name: engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
// Address: 004bccf0
// Address Range: [[004bccf0, 004bce95]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005073af [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004baf13 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba760 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b86ee [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc2c7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_0062924a
//   TerminatedCString s_rt_0062925f
//   TerminatedCString s_pod_ini_00629262
//   TerminatedCString s_engine_fileio_cpp_0062926a
//   TerminatedCString s_Create_a_POD_INI_file_no_0062927f
//   TerminatedCString s_Create_a_POD_INI_file_no_006292b0
//   TerminatedCString s_Oops_forget_about_it_006292e0
//   TerminatedCString s_You_do_not_have_a_POD_IN_006292f8
//   TerminatedCString s_pod_00629356
// Function calls:
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager *this_ptr)

{
  FILE *file_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CFileManager *in_stack_0000002c;
  CStrList_vtable *in_stack_fffffb48;
  CStrList_vtable *in_stack_fffffb4c;
  CStrList_vtable *in_stack_fffffb50;
  CStrList_vtable *in_stack_fffffb54;
  uint in_stack_fffffb58;
  uint in_stack_fffffb5c;
  uint in_stack_fffffb60;
  uint in_stack_fffffb64;
  char **in_stack_fffffb68;
  CStrList_vtable *in_stack_fffffb6c;
  uint in_stack_fffffb70;
  char acStack_104 [256];
  
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("pod.ini",(char *)0x0,"rt","..\\engine\\fileio.cpp",
                        0x1076);
  if (file_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0x1078);
    return 1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb34);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb38,"Create a POD.INI file now with all pods mounted.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb3c,"Create a POD.INI file now with no pods mounted.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb40,"Oops - forget about it.");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffb44,"You do not have a POD.INI file.\nThe file manager requires a POD.INI\nfile to operate properly.",-1,0);
  if ((-1 < iVar1) && (iVar1 < 2)) {
    shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&this_ptr);
    if (iVar1 == 0) {
      engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)&stack0xfffffef4);
      engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
                ((CFileFinder *)&stack0xfffffef8,"*.pod");
      while (acStack_104[0] != '\0') {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0x00000010,acStack_104);
        engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)&stack0xfffffef8);
      }
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)acStack_104,0);
    }
    engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620
              (in_stack_0000002c,(CStrList *)&stack0x00000014);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0x00000018,0,in_stack_fffffb5c);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffb60,0,in_stack_fffffb60,in_stack_fffffb64,
               (uint)in_stack_fffffb68,(uint)in_stack_fffffb6c,in_stack_fffffb70);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb48,0,(uint)in_stack_fffffb48,(uint)in_stack_fffffb4c,
             (uint)in_stack_fffffb50,(uint)in_stack_fffffb54,in_stack_fffffb58);
  return 0;
}


// Assembly code:
// 004bccf0: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
// 004bccf1: SUB ESP,0x4cc
// 004bccf7: PUSH 0x1076
// 004bccfc: PUSH 0x62924a
//   XREF to: 0062924a (DATA)
// 004bcd01: PUSH 0x62925f
//   XREF to: 0062925f (DATA)
// 004bcd06: PUSH 0x0
// 004bcd08: PUSH 0x629262
//   XREF to: 00629262 (DATA)
// 004bcd0d: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004bcd12: ADD ESP,0x14
// 004bcd15: TEST EAX,EAX
// 004bcd17: JNZ 0x004bce5a
//   XREF to: 004bce5a (CONDITIONAL_JUMP)
// 004bcd1d: MOV EAX,ESP
// 004bcd1f: PUSH EAX
// 004bcd20: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004bcd25: ADD ESP,0x4
// 004bcd28: PUSH 0x62927f
//   XREF to: 0062927f (DATA)
// 004bcd2d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4d0] (DATA)
// 004bcd31: PUSH EAX
// 004bcd32: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bcd37: ADD ESP,0x8
// 004bcd3a: PUSH 0x6292b0
//   XREF to: 006292b0 (DATA)
// 004bcd3f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4d0] (DATA)
// 004bcd43: PUSH EAX
// 004bcd44: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bcd49: ADD ESP,0x8
// 004bcd4c: PUSH 0x6292e0
//   XREF to: 006292e0 (DATA)
// 004bcd51: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4d0] (DATA)
// 004bcd55: PUSH EAX
// 004bcd56: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bcd5b: ADD ESP,0x8
// 004bcd5e: PUSH 0x0
// 004bcd60: PUSH -0x1
// 004bcd62: PUSH 0x6292f8
//   XREF to: 006292f8 (DATA)
// 004bcd67: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x4d0] (DATA)
// 004bcd6b: PUSH EAX
// 004bcd6c: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004bcd71: MOV EBX,EAX
// 004bcd73: ADD ESP,0x10
// 004bcd76: TEST EAX,EAX
// 004bcd78: JL 0x004bce7c
//   XREF to: 004bce7c (CONDITIONAL_JUMP)
// 004bcd7e: CMP EAX,0x2
// 004bcd81: JGE 0x004bce7c
//   XREF to: 004bce7c (CONDITIONAL_JUMP)
// 004bcd87: LEA EAX,[ESP + 0x4bc]
//   XREF to: Stack[-0x14] (DATA)
// 004bcd8e: PUSH EAX
// 004bcd8f: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004bcd94: ADD ESP,0x4
// 004bcd97: TEST EBX,EBX
// 004bcd99: JNZ 0x004bce12
//   XREF to: 004bce12 (CONDITIONAL_JUMP)
// 004bcd9f: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x128] (DATA)
// 004bcda6: PUSH EAX
// 004bcda7: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 004bcdac: ADD ESP,0x4
// 004bcdaf: PUSH 0x629356
//   XREF to: 00629356 (DATA)
// 004bcdb4: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x128] (DATA)
// 004bcdbb: PUSH EAX
// 004bcdbc: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 004bcdc1: ADD ESP,0x8
// 004bcdc4: CMP byte ptr [ESP + 0x3a8],0x0
//   XREF to: Stack[-0x128] (READ)
// 004bcdcc: JZ 0x004bce00
//   XREF to: 004bce00 (CONDITIONAL_JUMP)
// 004bcdce: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004bcdce
//   XREF to: Stack[-0x128] (DATA)
// 004bcdd5: PUSH EAX
// 004bcdd6: LEA EAX,[ESP + 0x4c0]
//   XREF to: Stack[-0x14] (DATA)
// 004bcddd: PUSH EAX
// 004bcdde: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bcde3: ADD ESP,0x8
// 004bcde6: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x128] (DATA)
// 004bcded: PUSH EAX
// 004bcdee: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 004bcdf3: ADD ESP,0x4
// 004bcdf6: CMP byte ptr [ESP + 0x3a8],0x0
//   XREF to: Stack[-0x128] (READ)
// 004bcdfe: JNZ 0x004bcdce
//   XREF to: 004bcdce (CONDITIONAL_JUMP)
// 004bce00: PUSH 0x0
//   Label: LAB_004bce00
// 004bce02: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x128] (DATA)
// 004bce09: PUSH EAX
// 004bce0a: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 004bce0f: ADD ESP,0x8
// 004bce12: LEA EAX,[ESP + 0x4bc]
//   Label: LAB_004bce12
//   XREF to: Stack[-0x14] (DATA)
// 004bce19: PUSH EAX
// 004bce1a: MOV EDX,dword ptr [ESP + 0x4d8]
//   XREF to: Stack[0x4] (READ)
// 004bce21: PUSH EDX
// 004bce22: CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
//   XREF to: 004ba620 (UNCONDITIONAL_CALL)
// 004bce27: ADD ESP,0x8
// 004bce2a: PUSH 0x0
// 004bce2c: LEA EAX,[ESP + 0x4c0]
//   XREF to: Stack[-0x14] (DATA)
// 004bce33: PUSH EAX
// 004bce34: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bce39: ADD ESP,0x8
// 004bce3c: PUSH 0x0
// 004bce3e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4d0] (DATA)
// 004bce42: PUSH EAX
// 004bce43: MOV EBX,0x1
// 004bce48: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bce4d: ADD ESP,0x8
// 004bce50: MOV EAX,EBX
// 004bce52: ADD ESP,0x4cc
// 004bce58: POP EBX
// 004bce59: RET
// 004bce5a: PUSH 0x1078
//   Label: LAB_004bce5a
// 004bce5f: PUSH 0x62926a
//   XREF to: 0062926a (DATA)
// 004bce64: PUSH EAX
// 004bce65: MOV EBX,0x1
// 004bce6a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bce6f: ADD ESP,0xc
// 004bce72: MOV EAX,EBX
// 004bce74: ADD ESP,0x4cc
// 004bce7a: POP EBX
// 004bce7b: RET
// 004bce7c: XOR EBX,EBX
//   Label: LAB_004bce7c
// 004bce7e: PUSH EBX
// 004bce7f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4d0] (DATA)
// 004bce83: PUSH EAX
// 004bce84: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bce89: ADD ESP,0x8
// 004bce8c: MOV EAX,EBX
// 004bce8e: ADD ESP,0x4cc
// 004bce94: POP EBX
// 004bce95: RET
