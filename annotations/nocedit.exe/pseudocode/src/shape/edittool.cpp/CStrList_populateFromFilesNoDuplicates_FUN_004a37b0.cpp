// Name: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
// Address: 004a37b0
// Address Range: [[004a37b0, 004a39de]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
// Cross-references:
//   core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00 (005b2d00) at 005b2d2f [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b17a0 (005b17a0) at 005b17af [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bcef3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad705 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_s_006239e5
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
//   engine_pod.cpp_CPod_initSearch_FUN_00550ea0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
          (CStrList *this_ptr,char *directory_path,char *file_pattern)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int index;
  BADSPACEBASE *in_ESP;
  byte bVar6;
  char in_stack_fffff7c0;
  CStrList *in_stack_fffff7c4;
  undefined1 auStack_82c [780];
  undefined1 auStack_520 [8];
  CFileFinder CStack_518;
  char acStack_404 [4];
  char acStack_400 [244];
  char acStack_30c [4];
  char cStack_308;
  undefined1 auStack_307 [3];
  char acStack_304 [248];
  char acStack_20c [8];
  char acStack_204 [244];
  char local_110 [8];
  char acStack_108 [248];
  
  bVar6 = 0;
  if ((directory_path == (char *)0x0) || (*directory_path == '\0')) {
    pcVar3 = local_110;
    do {
      cVar1 = *file_pattern;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = file_pattern[1];
      file_pattern = file_pattern + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_110,"%s\\%s",directory_path,file_pattern);
  }
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    engine_pod_cpp_CPod_initSearch_FUN_00550ea0
              ((CPod *)g_CDemonPodPtr,local_110 + 4,(CPodSearchContext *)&stack0xfffff7c0);
    while (in_stack_fffff7c0 != '\0') {
      engine_dosio_c_splitPath_FUN_00481f20
                (&stack0xfffff7c0,(char *)0x0,(char *)0x0,acStack_20c,acStack_30c);
      if (cStack_308 == '.') {
        uVar5 = 0xffffffff;
        pcVar3 = &cStack_308;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        crt_string_c_memmove_FUN_005fe5e0(&cStack_308,auStack_307,~uVar5 - 1);
      }
      engine_dosio_c_makePath_FUN_00481f50
                ((char *)&CStack_518.search_handle,(char *)0x0,(char *)0x0,acStack_204,acStack_304);
      in_stack_fffff7c0 = -0x56;
      in_stack_fffff7c4 = this_ptr;
      iVar2 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(this_ptr,acStack_404);
      if (iVar2 < 0) {
        in_stack_fffff7c4 = (CStrList *)0x4a39b0;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr,acStack_400);
      }
      engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0
                ((CPod *)g_CDemonPodPtr,(CPodSearchContext *)auStack_82c);
    }
  }
  iVar2 = this_ptr->item_count;
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)(auStack_82c + 0x308));
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70((CFileFinder *)auStack_520,acStack_108);
  do {
    if (auStack_520[4] == '\0') {
      engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)(auStack_520 + 4));
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&CStack_518,0);
      return;
    }
    index = 0;
    if (0 < iVar2) {
      do {
        pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
        iVar4 = crt_string_c_stricmp_FUN_005fe7f0(pcVar3,(char *)in_stack_fffff7c4);
        if (iVar4 == 0) goto LAB_004a3935;
        index = index + 1;
      } while (index < iVar2);
    }
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr,auStack_520);
LAB_004a3935:
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)auStack_520);
  } while( true );
}


// Assembly code:
// 004a37b0: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
// 004a37b1: PUSH ESI
// 004a37b2: PUSH EDI
// 004a37b3: PUSH EBP
// 004a37b4: SUB ESP,0x834
// 004a37ba: MOV EBP,dword ptr [ESP + 0x848]
//   XREF to: Stack[0x4] (READ)
// 004a37c1: MOV EDI,dword ptr [ESP + 0x84c]
//   XREF to: Stack[0x8] (READ)
// 004a37c8: MOV ESI,dword ptr [ESP + 0x850]
//   XREF to: Stack[0xc] (READ)
// 004a37cf: TEST EDI,EDI
// 004a37d1: JZ 0x004a397c
//   XREF to: 004a397c (CONDITIONAL_JUMP)
// 004a37d7: CMP byte ptr [EDI],0x0
// 004a37da: JZ 0x004a397c
//   XREF to: 004a397c (CONDITIONAL_JUMP)
// 004a37e0: PUSH ESI
// 004a37e1: PUSH EDI
// 004a37e2: PUSH 0x6239e5
//   XREF to: 006239e5 (DATA)
// 004a37e7: LEA EAX,[ESP + 0x740]
//   XREF to: Stack[-0x110] (DATA)
// 004a37ee: PUSH EAX
// 004a37ef: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a37f4: ADD ESP,0x10
// 004a37f7: MOV EDX,dword ptr [0x00680cdc]
//   Label: LAB_004a37f7
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 004a37fd: TEST EDX,EDX
// 004a37ff: JZ 0x004a38d1
//   XREF to: 004a38d1 (CONDITIONAL_JUMP)
// 004a3805: MOV EAX,ESP
// 004a3807: PUSH EAX
// 004a3808: LEA EAX,[ESP + 0x738]
//   XREF to: Stack[-0x110] (DATA)
// 004a380f: PUSH EAX
// 004a3810: PUSH EDX
//   XREF to: 030e5090 (DATA)
// 004a3811: CALL engine_pod.cpp_CPod_initSearch_FUN_00550ea0
//   XREF to: 00550ea0 (UNCONDITIONAL_CALL)
// 004a3816: ADD ESP,0xc
// 004a3819: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x844] (DATA)
// 004a381d: JZ 0x004a38d1
//   XREF to: 004a38d1 (CONDITIONAL_JUMP)
// 004a3823: LEA EAX,[ESP + 0x534]
//   Label: LAB_004a3823
//   XREF to: Stack[-0x310] (DATA)
// 004a382a: PUSH EAX
// 004a382b: LEA EAX,[ESP + 0x638]
//   XREF to: Stack[-0x210] (DATA)
// 004a3832: PUSH EAX
// 004a3833: PUSH 0x0
// 004a3835: PUSH 0x0
// 004a3837: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x844] (DATA)
// 004a383b: PUSH EAX
// 004a383c: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004a3841: ADD ESP,0x14
// 004a3844: CMP byte ptr [ESP + 0x534],0x2e
//   XREF to: Stack[-0x310] (READ)
// 004a384c: JNZ 0x004a3878
//   XREF to: 004a3878 (CONDITIONAL_JUMP)
// 004a384e: LEA EDI,[ESP + 0x534]
//   XREF to: Stack[-0x310] (DATA)
// 004a3855: SUB ECX,ECX
// 004a3857: DEC ECX
// 004a3858: XOR EAX,EAX
// 004a385a: SCASB.REPNE ES:EDI
// 004a385c: NOT ECX
// 004a385e: DEC ECX
// 004a385f: PUSH ECX
// 004a3860: LEA EAX,[ESP + 0x539]
//   XREF to: Stack[-0x30f] (DATA)
// 004a3867: PUSH EAX
// 004a3868: LEA EAX,[ESP + 0x53c]
//   XREF to: Stack[-0x310] (DATA)
// 004a386f: PUSH EAX
// 004a3870: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004a3875: ADD ESP,0xc
// 004a3878: LEA EAX,[ESP + 0x534]
//   Label: LAB_004a3878
//   XREF to: Stack[-0x310] (DATA)
// 004a387f: PUSH EAX
// 004a3880: LEA EAX,[ESP + 0x638]
//   XREF to: Stack[-0x210] (DATA)
// 004a3887: PUSH EAX
// 004a3888: PUSH 0x0
// 004a388a: PUSH 0x0
// 004a388c: LEA EAX,[ESP + 0x440]
//   XREF to: Stack[-0x414] (DATA)
// 004a3893: PUSH EAX
// 004a3894: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004a3899: ADD ESP,0x14
// 004a389c: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x414] (DATA)
// 004a38a3: PUSH EAX
// 004a38a4: PUSH EBP
// 004a38a5: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 004a38aa: ADD ESP,0x8
// 004a38ad: TEST EAX,EAX
// 004a38af: JL 0x004a39a2
//   XREF to: 004a39a2 (CONDITIONAL_JUMP)
// 004a38b5: MOV EAX,ESP
//   Label: LAB_004a38b5
// 004a38b7: PUSH EAX
// 004a38b8: MOV EBX,dword ptr [0x00680cdc]
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 004a38be: PUSH EBX
//   XREF to: 030e5090 (DATA)
// 004a38bf: CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
//   XREF to: 00550ef0 (UNCONDITIONAL_CALL)
// 004a38c4: ADD ESP,0x8
// 004a38c7: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x844] (DATA)
// 004a38cb: JNZ 0x004a3823
//   XREF to: 004a3823 (CONDITIONAL_JUMP)
// 004a38d1: LEA EAX,[ESP + 0x31c]
//   Label: LAB_004a38d1
//   XREF to: Stack[-0x528] (DATA)
// 004a38d8: PUSH EAX
// 004a38d9: MOV ESI,dword ptr [EBP]
// 004a38dc: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 004a38e1: ADD ESP,0x4
// 004a38e4: LEA EAX,[ESP + 0x734]
//   XREF to: Stack[-0x110] (DATA)
// 004a38eb: PUSH EAX
// 004a38ec: LEA EAX,[ESP + 0x320]
//   XREF to: Stack[-0x528] (DATA)
// 004a38f3: PUSH EAX
// 004a38f4: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 004a38f9: ADD ESP,0x8
// 004a38fc: CMP byte ptr [ESP + 0x31c],0x0
//   XREF to: Stack[-0x528] (READ)
// 004a3904: JZ 0x004a394f
//   XREF to: 004a394f (CONDITIONAL_JUMP)
// 004a3906: XOR EBX,EBX
//   Label: LAB_004a3906
// 004a3908: XOR EDI,EDI
// 004a390a: TEST ESI,ESI
// 004a390c: JLE 0x004a39c1
//   XREF to: 004a39c1 (CONDITIONAL_JUMP)
// 004a3912: LEA EAX,[ESP + 0x31c]
//   Label: LAB_004a3912
//   XREF to: Stack[-0x528] (DATA)
// 004a3919: PUSH EAX
// 004a391a: PUSH EBX
// 004a391b: PUSH EBP
// 004a391c: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a3921: ADD ESP,0x8
// 004a3924: PUSH EAX
// 004a3925: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004a392a: ADD ESP,0x8
// 004a392d: TEST EAX,EAX
// 004a392f: JNZ 0x004a39b8
//   XREF to: 004a39b8 (CONDITIONAL_JUMP)
// 004a3935: LEA EAX,[ESP + 0x31c]
//   Label: LAB_004a3935
//   XREF to: Stack[-0x528] (DATA)
// 004a393c: PUSH EAX
// 004a393d: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 004a3942: ADD ESP,0x4
// 004a3945: CMP byte ptr [ESP + 0x31c],0x0
//   XREF to: Stack[-0x528] (READ)
// 004a394d: JNZ 0x004a3906
//   XREF to: 004a3906 (CONDITIONAL_JUMP)
// 004a394f: LEA EAX,[ESP + 0x31c]
//   Label: LAB_004a394f
//   XREF to: Stack[-0x528] (DATA)
// 004a3956: PUSH EAX
// 004a3957: CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   XREF to: 00481d70 (UNCONDITIONAL_CALL)
// 004a395c: ADD ESP,0x4
// 004a395f: PUSH 0x0
// 004a3961: LEA EAX,[ESP + 0x320]
//   XREF to: Stack[-0x528] (DATA)
// 004a3968: PUSH EAX
// 004a3969: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 004a396e: ADD ESP,0x8
// 004a3971: ADD ESP,0x834
// 004a3977: POP EBP
// 004a3978: POP EDI
// 004a3979: POP ESI
// 004a397a: POP EBX
// 004a397b: RET
// 004a397c: LEA EDI,[ESP + 0x734]
//   Label: LAB_004a397c
//   XREF to: Stack[-0x110] (DATA)
// 004a3983: PUSH EDI
// 004a3984: MOV AL,byte ptr [ESI]
//   Label: LAB_004a3984
// 004a3986: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x110] (DATA)
// 004a3988: CMP AL,0x0
// 004a398a: JZ 0x004a399c
//   XREF to: 004a399c (CONDITIONAL_JUMP)
// 004a398c: MOV AL,byte ptr [ESI + 0x1]
// 004a398f: ADD ESI,0x2
// 004a3992: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x10f] (WRITE)
// 004a3995: ADD EDI,0x2
// 004a3998: CMP AL,0x0
// 004a399a: JNZ 0x004a3984
//   XREF to: 004a3984 (CONDITIONAL_JUMP)
// 004a399c: POP EDI
//   Label: LAB_004a399c
// 004a399d: JMP 0x004a37f7
//   XREF to: 004a37f7 (UNCONDITIONAL_JUMP)
// 004a39a2: LEA EAX,[ESP + 0x430]
//   Label: LAB_004a39a2
//   XREF to: Stack[-0x414] (DATA)
// 004a39a9: PUSH EAX
// 004a39aa: PUSH EBP
// 004a39ab: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004a39b0: ADD ESP,0x8
// 004a39b3: JMP 0x004a38b5
//   XREF to: 004a38b5 (UNCONDITIONAL_JUMP)
// 004a39b8: INC EBX
//   Label: LAB_004a39b8
// 004a39b9: CMP EBX,ESI
// 004a39bb: JL 0x004a3912
//   XREF to: 004a3912 (CONDITIONAL_JUMP)
// 004a39c1: TEST EDI,EDI
//   Label: LAB_004a39c1
// 004a39c3: JNZ 0x004a3935
//   XREF to: 004a3935 (CONDITIONAL_JUMP)
// 004a39c9: LEA EAX,[ESP + 0x31c]
//   XREF to: Stack[-0x528] (DATA)
// 004a39d0: PUSH EAX
// 004a39d1: PUSH EBP
// 004a39d2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004a39d7: ADD ESP,0x8
// 004a39da: JMP 0x004a3935
//   XREF to: 004a3935 (UNCONDITIONAL_JUMP)
