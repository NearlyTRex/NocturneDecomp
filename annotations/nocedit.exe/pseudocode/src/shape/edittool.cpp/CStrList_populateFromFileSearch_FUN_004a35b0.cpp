// Name: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
// Address: 004a35b0
// Address Range: [[004a35b0, 004a37a4]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
// Cross-references:
//   core_actor.cpp_AnotherActorParser_FUN_0040eed0 (0040eed0) at 0040f2e3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 (0049f270) at 0049f2a1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_s_006239df
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_memmove_FUN_005fe5e0
//   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
//   engine_pod.cpp_CPod_initSearch_FUN_00550ea0
//   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
          (CStrList *this_ptr,char *directory_path,char *file_pattern)

{
  char cVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  char in_stack_fffff7c0;
  undefined1 auStack_830 [784];
  undefined1 auStack_520 [8];
  CFileFinder CStack_518;
  char acStack_404 [244];
  char local_310 [8];
  char acStack_308 [252];
  char acStack_20c [4];
  char cStack_208;
  undefined1 auStack_207 [3];
  char acStack_204 [248];
  char acStack_10c [8];
  char acStack_104 [244];
  
  bVar4 = 0;
  if ((directory_path == (char *)0x0) || (*directory_path == '\0')) {
    pcVar3 = local_310;
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
    crt_stdio_c_sprintf_FUN_005fdbd0(local_310,"%s\\%s",directory_path,file_pattern);
  }
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    engine_pod_cpp_CPod_initSearch_FUN_00550ea0
              ((CPod *)g_CDemonPodPtr,local_310 + 4,(CPodSearchContext *)&stack0xfffff7c0);
    while (in_stack_fffff7c0 != '\0') {
      engine_dosio_c_splitPath_FUN_00481f20
                (&stack0xfffff7c0,(char *)0x0,(char *)0x0,acStack_10c,acStack_20c);
      if (cStack_208 == '.') {
        uVar2 = 0xffffffff;
        pcVar3 = &cStack_208;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
        } while (cVar1 != '\0');
        crt_string_c_memmove_FUN_005fe5e0(&cStack_208,auStack_207,~uVar2 - 1);
      }
      engine_dosio_c_makePath_FUN_00481f50
                ((char *)&CStack_518.search_handle,(char *)0x0,(char *)0x0,acStack_104,acStack_204);
      pcVar3 = auStack_830 + 0xfc;
      shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360
                (this_ptr,acStack_404,pcVar3,auStack_830._512_4_);
      in_stack_fffff7c0 = (char)pcVar3;
      engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0
                ((CPod *)g_CDemonPodPtr,(CPodSearchContext *)auStack_830);
    }
  }
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)(auStack_830 + 0x30c));
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70((CFileFinder *)auStack_520,acStack_308);
  while (auStack_520[4] != '\0') {
    shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360
              (this_ptr,auStack_520 + 4,(char *)0x0,CStack_518.file_size);
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)auStack_520);
  }
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)(auStack_520 + 4));
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&CStack_518,0);
  return;
}


// Assembly code:
// 004a35b0: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
// 004a35b1: PUSH ESI
// 004a35b2: PUSH EDI
// 004a35b3: PUSH EBP
// 004a35b4: SUB ESP,0x834
// 004a35ba: MOV EBX,dword ptr [ESP + 0x848]
//   XREF to: Stack[0x4] (READ)
// 004a35c1: MOV ESI,dword ptr [ESP + 0x84c]
//   XREF to: Stack[0x8] (READ)
// 004a35c8: MOV EDI,dword ptr [ESP + 0x850]
//   XREF to: Stack[0xc] (READ)
// 004a35cf: TEST ESI,ESI
// 004a35d1: JZ 0x004a377d
//   XREF to: 004a377d (CONDITIONAL_JUMP)
// 004a35d7: CMP byte ptr [ESI],0x0
// 004a35da: JZ 0x004a377d
//   XREF to: 004a377d (CONDITIONAL_JUMP)
// 004a35e0: PUSH EDI
// 004a35e1: PUSH ESI
// 004a35e2: PUSH 0x6239df
//   XREF to: 006239df (DATA)
// 004a35e7: LEA ECX,[ESP + 0x540]
//   XREF to: Stack[-0x310] (DATA)
// 004a35ee: PUSH ECX
// 004a35ef: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a35f4: ADD ESP,0x10
// 004a35f7: MOV EDX,dword ptr [0x00680cdc]
//   Label: LAB_004a35f7
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 004a35fd: TEST EDX,EDX
// 004a35ff: JZ 0x004a36e1
//   XREF to: 004a36e1 (CONDITIONAL_JUMP)
// 004a3605: MOV ECX,ESP
// 004a3607: PUSH ECX
// 004a3608: LEA ECX,[ESP + 0x538]
//   XREF to: Stack[-0x310] (DATA)
// 004a360f: PUSH ECX
// 004a3610: PUSH EDX
//   XREF to: 030e5090 (DATA)
// 004a3611: CALL engine_pod.cpp_CPod_initSearch_FUN_00550ea0
//   XREF to: 00550ea0 (UNCONDITIONAL_CALL)
// 004a3616: ADD ESP,0xc
// 004a3619: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x844] (DATA)
// 004a361d: JZ 0x004a36e1
//   XREF to: 004a36e1 (CONDITIONAL_JUMP)
// 004a3623: LEA ECX,[ESP + 0x634]
//   Label: LAB_004a3623
//   XREF to: Stack[-0x210] (DATA)
// 004a362a: PUSH ECX
// 004a362b: LEA ECX,[ESP + 0x738]
//   XREF to: Stack[-0x110] (DATA)
// 004a3632: PUSH ECX
// 004a3633: PUSH 0x0
// 004a3635: PUSH 0x0
// 004a3637: LEA ECX,[ESP + 0x10]
//   XREF to: Stack[-0x844] (DATA)
// 004a363b: PUSH ECX
// 004a363c: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004a3641: ADD ESP,0x14
// 004a3644: CMP byte ptr [ESP + 0x634],0x2e
//   XREF to: Stack[-0x210] (READ)
// 004a364c: JNZ 0x004a3678
//   XREF to: 004a3678 (CONDITIONAL_JUMP)
// 004a364e: LEA EDI,[ESP + 0x634]
//   XREF to: Stack[-0x210] (DATA)
// 004a3655: SUB ECX,ECX
// 004a3657: DEC ECX
// 004a3658: XOR EAX,EAX
// 004a365a: SCASB.REPNE ES:EDI
// 004a365c: NOT ECX
// 004a365e: DEC ECX
// 004a365f: PUSH ECX
// 004a3660: LEA ECX,[ESP + 0x639]
//   XREF to: Stack[-0x20f] (DATA)
// 004a3667: PUSH ECX
// 004a3668: LEA ECX,[ESP + 0x63c]
//   XREF to: Stack[-0x210] (DATA)
// 004a366f: PUSH ECX
// 004a3670: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004a3675: ADD ESP,0xc
// 004a3678: LEA ECX,[ESP + 0x634]
//   Label: LAB_004a3678
//   XREF to: Stack[-0x210] (DATA)
// 004a367f: PUSH ECX
// 004a3680: LEA ECX,[ESP + 0x738]
//   XREF to: Stack[-0x110] (DATA)
// 004a3687: PUSH ECX
// 004a3688: PUSH 0x0
// 004a368a: PUSH 0x0
// 004a368c: LEA ECX,[ESP + 0x440]
//   XREF to: Stack[-0x414] (DATA)
// 004a3693: PUSH ECX
// 004a3694: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004a3699: ADD ESP,0x14
// 004a369c: MOV ESI,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x638] (READ)
// 004a36a3: PUSH ESI
// 004a36a4: MOV EDI,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x640] (READ)
// 004a36ab: PUSH EDI
// 004a36ac: LEA ECX,[ESP + 0x108]
//   XREF to: Stack[-0x744] (DATA)
// 004a36b3: PUSH ECX
// 004a36b4: LEA ECX,[ESP + 0x43c]
//   XREF to: Stack[-0x414] (DATA)
// 004a36bb: PUSH ECX
// 004a36bc: PUSH EBX
// 004a36bd: CALL shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
//   XREF to: 004a3360 (UNCONDITIONAL_CALL)
// 004a36c2: ADD ESP,0x14
// 004a36c5: MOV ECX,ESP
// 004a36c7: PUSH ECX
// 004a36c8: MOV EBP,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004a36ce: PUSH EBP
//   XREF to: 030e5090 (DATA)
// 004a36cf: CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
//   XREF to: 00550ef0 (UNCONDITIONAL_CALL)
// 004a36d4: ADD ESP,0x8
// 004a36d7: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x844] (DATA)
// 004a36db: JNZ 0x004a3623
//   XREF to: 004a3623 (CONDITIONAL_JUMP)
// 004a36e1: LEA ECX,[ESP + 0x31c]
//   Label: LAB_004a36e1
//   XREF to: Stack[-0x528] (DATA)
// 004a36e8: PUSH ECX
// 004a36e9: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 004a36ee: ADD ESP,0x4
// 004a36f1: LEA ECX,[ESP + 0x534]
//   XREF to: Stack[-0x310] (DATA)
// 004a36f8: PUSH ECX
// 004a36f9: LEA ECX,[ESP + 0x320]
//   XREF to: Stack[-0x528] (DATA)
// 004a3700: PUSH ECX
// 004a3701: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 004a3706: ADD ESP,0x8
// 004a3709: CMP byte ptr [ESP + 0x31c],0x0
//   XREF to: Stack[-0x528] (READ)
// 004a3711: JZ 0x004a3750
//   XREF to: 004a3750 (CONDITIONAL_JUMP)
// 004a3713: MOV EAX,dword ptr [ESP + 0x424]
//   Label: LAB_004a3713
//   XREF to: Stack[-0x420] (READ)
// 004a371a: PUSH EAX
// 004a371b: MOV EDX,dword ptr [ESP + 0x424]
//   XREF to: Stack[-0x424] (READ)
// 004a3722: PUSH EDX
// 004a3723: PUSH 0x0
// 004a3725: LEA ECX,[ESP + 0x328]
//   XREF to: Stack[-0x528] (DATA)
// 004a372c: PUSH ECX
// 004a372d: PUSH EBX
// 004a372e: CALL shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
//   XREF to: 004a3360 (UNCONDITIONAL_CALL)
// 004a3733: ADD ESP,0x14
// 004a3736: LEA ECX,[ESP + 0x31c]
//   XREF to: Stack[-0x528] (DATA)
// 004a373d: PUSH ECX
// 004a373e: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 004a3743: ADD ESP,0x4
// 004a3746: CMP byte ptr [ESP + 0x31c],0x0
//   XREF to: Stack[-0x528] (READ)
// 004a374e: JNZ 0x004a3713
//   XREF to: 004a3713 (CONDITIONAL_JUMP)
// 004a3750: LEA ECX,[ESP + 0x31c]
//   Label: LAB_004a3750
//   XREF to: Stack[-0x528] (DATA)
// 004a3757: PUSH ECX
// 004a3758: CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   XREF to: 00481d70 (UNCONDITIONAL_CALL)
// 004a375d: ADD ESP,0x4
// 004a3760: PUSH 0x0
// 004a3762: LEA ECX,[ESP + 0x320]
//   XREF to: Stack[-0x528] (DATA)
// 004a3769: PUSH ECX
// 004a376a: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 004a376f: ADD ESP,0x8
// 004a3772: ADD ESP,0x834
// 004a3778: POP EBP
// 004a3779: POP EDI
// 004a377a: POP ESI
// 004a377b: POP EBX
// 004a377c: RET
// 004a377d: MOV ESI,EDI
//   Label: LAB_004a377d
// 004a377f: LEA EDI,[ESP + 0x534]
//   XREF to: Stack[-0x310] (DATA)
// 004a3786: PUSH EDI
// 004a3787: MOV AL,byte ptr [ESI]
//   Label: LAB_004a3787
// 004a3789: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x310] (DATA)
// 004a378b: CMP AL,0x0
// 004a378d: JZ 0x004a379f
//   XREF to: 004a379f (CONDITIONAL_JUMP)
// 004a378f: MOV AL,byte ptr [ESI + 0x1]
// 004a3792: ADD ESI,0x2
// 004a3795: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x30f] (WRITE)
// 004a3798: ADD EDI,0x2
// 004a379b: CMP AL,0x0
// 004a379d: JNZ 0x004a3787
//   XREF to: 004a3787 (CONDITIONAL_JUMP)
// 004a379f: POP EDI
//   Label: LAB_004a379f
// 004a37a0: JMP 0x004a35f7
//   XREF to: 004a35f7 (UNCONDITIONAL_JUMP)
