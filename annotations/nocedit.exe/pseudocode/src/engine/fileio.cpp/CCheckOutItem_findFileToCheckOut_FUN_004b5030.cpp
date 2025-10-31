// Name: engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
// Address: 004b5030
// Address Range: [[004b5030, 004b5347]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030(CCheckOutItem * this_ptr, char * file_pattern, char * output_filename_buffer)
// Cross-references:
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba7e8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_00627529
//   TerminatedCString s_Checked_out_by_s_0062752d
//   TerminatedCString s_Select_file_to_check_out_0062753f
//   TerminatedCString s_You_already_have_s_check_00627558
//   TerminatedCString s_s_is_currently_checked_o_00627578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   SVersionControlSession g_VersionControlSession
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
          (CCheckOutItem *this_ptr,char *file_pattern,char *output_filename_buffer)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  CCheckOutItem *in_stack_00000018;
  int in_stack_0000001c;
  CStrList_vtable *in_stack_fffff7c0;
  CStrList_vtable *in_stack_fffff7c4;
  CStrList_vtable *in_stack_fffff7c8;
  CStrList_vtable *in_stack_fffff7cc;
  char **in_stack_fffff7d0;
  CStrList_vtable *in_stack_fffff7d4;
  uint in_stack_fffff7d8;
  char acStack_4b4 [8];
  char acStack_4ac [8];
  char acStack_4a4 [384];
  char acStack_324 [8];
  undefined1 auStack_31c [8];
  undefined1 auStack_314 [16];
  CFileFinder CStack_304;
  char acStack_114 [4];
  char acStack_110 [248];
  CCheckOutList local_18;
  
  bVar6 = 0;
  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return 0;
  }
  local_18.count = 0;
  local_18.items = (CCheckOutItem *)0x0;
  iVar2 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_18);
  if (iVar2 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&local_18.items);
    return 0;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (output_filename_buffer,&stack0xfffffff4,acStack_114);
  engine_dosio_c_makePath_FUN_00481f50
            (CStack_304.filename + 0xf0,&stack0xfffffff8,acStack_110,(char *)0x0,(char *)0x0);
  iVar2 = -1;
  pcVar4 = CStack_304.filename + 0xf4;
  do {
    pcVar5 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *file_pattern;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = file_pattern[1];
    file_pattern = file_pattern + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff7a4);
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)&stack0xfffff7a8,1);
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)auStack_31c);
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
            ((CFileFinder *)(auStack_31c + 4),(char *)&CStack_304.file_size);
  while (auStack_314[0] != '\0') {
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4a4,"%s\t");
    iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                      ((CCheckOutList *)&stack0xfffffff4,acStack_324);
    if (-1 < iVar3) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4b4 + iVar2,"Checked out by %s");
    }
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff7ac,acStack_4ac);
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)(auStack_31c + 4));
  }
  pcVar4 = (char *)0x0;
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)auStack_314);
  while( true ) {
    pcVar4 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)&stack0xfffff7b8,"Select file to check out",
                                (int)pcVar4,0);
    if ((int)pcVar4 < 0) {
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)(auStack_314 + 8),0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff7c0,0,(uint)in_stack_fffff7c0,(uint)in_stack_fffff7c4,
                 (uint)in_stack_fffff7c8,(uint)in_stack_fffff7cc,(uint)in_stack_fffff7d0);
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000014);
      return 0;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)&stack0xfffff7bc,(int)output_filename_buffer,pcVar4,0);
    iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                      ((CCheckOutList *)&stack0x00000010,output_filename_buffer);
    if (iVar2 < 0) break;
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                      (in_stack_00000018[iVar2].value,g_VersionControlSession.primary_username);
    in_stack_fffff7c0 = (CStrList_vtable *)(in_stack_0000001c + iVar2 * 0x168);
    if (iVar3 == 0) {
      pcVar5 = "You already have %s checked out";
      in_stack_fffff7c4 = in_stack_fffff7c0;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out");
      in_stack_fffff7c0 = (CStrList_vtable *)pcVar5;
    }
    else {
      in_stack_fffff7c4 = (CStrList_vtable *)&in_stack_fffff7c0[9].sort;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s");
    }
  }
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&CStack_304,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffff7c8,0,(uint)in_stack_fffff7c8,(uint)in_stack_fffff7cc,
             (uint)in_stack_fffff7d0,(uint)in_stack_fffff7d4,in_stack_fffff7d8);
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x0000001c);
  return 1;
}


// Assembly code:
// 004b5030: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
// 004b5031: PUSH ESI
// 004b5032: PUSH EDI
// 004b5033: PUSH EBP
// 004b5034: SUB ESP,0x85c
// 004b503a: MOV ESI,dword ptr [ESP + 0x874]
//   XREF to: Stack[0x8] (READ)
// 004b5041: MOV EBP,dword ptr [ESP + 0x878]
//   XREF to: Stack[0xc] (READ)
// 004b5048: CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   XREF to: 004b1c00 (UNCONDITIONAL_CALL)
// 004b504d: TEST EAX,EAX
// 004b504f: JNZ 0x004b5060
//   XREF to: 004b5060 (CONDITIONAL_JUMP)
// 004b5051: XOR ESI,ESI
// 004b5053: MOV EAX,ESI
// 004b5055: ADD ESP,0x85c
// 004b505b: POP EBP
// 004b505c: POP EDI
// 004b505d: POP ESI
// 004b505e: POP EBX
// 004b505f: RET
// 004b5060: LEA EAX,[ESP + 0x850]
//   Label: LAB_004b5060
//   XREF to: Stack[-0x1c] (DATA)
// 004b5067: XOR EDX,EDX
// 004b5069: PUSH EAX
// 004b506a: MOV dword ptr [ESP + 0x854],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b5071: MOV dword ptr [ESP + 0x858],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004b5078: CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   XREF to: 004b2890 (UNCONDITIONAL_CALL)
// 004b507d: ADD ESP,0x4
// 004b5080: TEST EAX,EAX
// 004b5082: JZ 0x004b5286
//   XREF to: 004b5286 (CONDITIONAL_JUMP)
// 004b5088: LEA EAX,[ESP + 0x750]
//   XREF to: Stack[-0x11c] (DATA)
// 004b508f: PUSH EAX
// 004b5090: LEA EAX,[ESP + 0x85c]
//   XREF to: Stack[-0x14] (DATA)
// 004b5097: PUSH EAX
// 004b5098: MOV EBX,dword ptr [ESP + 0x878]
//   XREF to: Stack[0x4] (READ)
// 004b509f: PUSH EBX
// 004b50a0: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b50a5: ADD ESP,0xc
// 004b50a8: PUSH 0x0
// 004b50aa: PUSH 0x0
// 004b50ac: LEA EAX,[ESP + 0x758]
//   XREF to: Stack[-0x11c] (DATA)
// 004b50b3: PUSH EAX
// 004b50b4: LEA EAX,[ESP + 0x864]
//   XREF to: Stack[-0x14] (DATA)
// 004b50bb: PUSH EAX
// 004b50bc: LEA EAX,[ESP + 0x65c]
//   XREF to: Stack[-0x220] (DATA)
// 004b50c3: PUSH EAX
// 004b50c4: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b50c9: ADD ESP,0x14
// 004b50cc: LEA EDI,[ESP + 0x64c]
//   XREF to: Stack[-0x220] (DATA)
// 004b50d3: PUSH EDI
// 004b50d4: SUB ECX,ECX
// 004b50d6: DEC ECX
// 004b50d7: MOV AL,0x0
// 004b50d9: SCASB.REPNE ES:EDI
// 004b50db: DEC EDI
// 004b50dc: MOV AL,byte ptr [ESI]
//   Label: LAB_004b50dc
// 004b50de: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x220] (DATA)
// 004b50e0: CMP AL,0x0
// 004b50e2: JZ 0x004b50f4
//   XREF to: 004b50f4 (CONDITIONAL_JUMP)
// 004b50e4: MOV AL,byte ptr [ESI + 0x1]
// 004b50e7: ADD ESI,0x2
// 004b50ea: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x21f] (WRITE)
// 004b50ed: ADD EDI,0x2
// 004b50f0: CMP AL,0x0
// 004b50f2: JNZ 0x004b50dc
//   XREF to: 004b50dc (CONDITIONAL_JUMP)
// 004b50f4: POP EDI
//   Label: LAB_004b50f4
// 004b50f5: MOV EAX,ESP
// 004b50f7: PUSH EAX
// 004b50f8: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b50fd: ADD ESP,0x4
// 004b5100: PUSH 0x1
// 004b5102: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x86c] (DATA)
// 004b5106: PUSH EAX
// 004b5107: CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
// 004b510c: ADD ESP,0x8
// 004b510f: LEA EAX,[ESP + 0x538]
//   XREF to: Stack[-0x334] (DATA)
// 004b5116: PUSH EAX
// 004b5117: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 004b511c: ADD ESP,0x4
// 004b511f: LEA EAX,[ESP + 0x64c]
//   XREF to: Stack[-0x220] (DATA)
// 004b5126: PUSH EAX
// 004b5127: LEA EAX,[ESP + 0x53c]
//   XREF to: Stack[-0x334] (DATA)
// 004b512e: PUSH EAX
// 004b512f: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 004b5134: ADD ESP,0x8
// 004b5137: CMP byte ptr [ESP + 0x538],0x0
//   XREF to: Stack[-0x334] (READ)
// 004b513f: JZ 0x004b51dc
//   XREF to: 004b51dc (CONDITIONAL_JUMP)
// 004b5145: LEA EAX,[ESP + 0x538]
//   Label: LAB_004b5145
//   XREF to: Stack[-0x334] (DATA)
// 004b514c: PUSH EAX
// 004b514d: PUSH 0x627529
//   XREF to: 00627529 (DATA)
// 004b5152: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x4c4] (DATA)
// 004b5159: PUSH EAX
// 004b515a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b515f: LEA EDX,[ESP + 0x3b4]
//   XREF to: Stack[-0x4c4] (DATA)
// 004b5166: ADD ESP,0xc
// 004b5169: LEA EBX,[EDX + EAX*0x1]
// 004b516c: LEA EAX,[ESP + 0x538]
//   XREF to: Stack[-0x334] (DATA)
// 004b5173: PUSH EAX
// 004b5174: LEA EAX,[ESP + 0x854]
//   XREF to: Stack[-0x1c] (DATA)
// 004b517b: PUSH EAX
// 004b517c: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004b5181: ADD ESP,0x8
// 004b5184: TEST EAX,EAX
// 004b5186: JL 0x004b51a9
//   XREF to: 004b51a9 (CONDITIONAL_JUMP)
// 004b5188: IMUL EAX,EAX,0x168
// 004b518e: ADD EAX,dword ptr [ESP + 0x854]
//   XREF to: Stack[-0x18] (READ)
// 004b5195: ADD EAX,0x104
// 004b519a: PUSH EAX
// 004b519b: PUSH 0x62752d
//   XREF to: 0062752d (DATA)
// 004b51a0: PUSH EBX
// 004b51a1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b51a6: ADD ESP,0xc
// 004b51a9: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004b51a9
//   XREF to: Stack[-0x4c4] (DATA)
// 004b51b0: PUSH EAX
// 004b51b1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x86c] (DATA)
// 004b51b5: PUSH EAX
// 004b51b6: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b51bb: ADD ESP,0x8
// 004b51be: LEA EAX,[ESP + 0x538]
//   XREF to: Stack[-0x334] (DATA)
// 004b51c5: PUSH EAX
// 004b51c6: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 004b51cb: ADD ESP,0x4
// 004b51ce: CMP byte ptr [ESP + 0x538],0x0
//   XREF to: Stack[-0x334] (READ)
// 004b51d6: JNZ 0x004b5145
//   XREF to: 004b5145 (CONDITIONAL_JUMP)
// 004b51dc: LEA EAX,[ESP + 0x538]
//   Label: LAB_004b51dc
//   XREF to: Stack[-0x334] (DATA)
// 004b51e3: PUSH EAX
// 004b51e4: XOR ESI,ESI
// 004b51e6: CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   XREF to: 00481d70 (UNCONDITIONAL_CALL)
// 004b51eb: ADD ESP,0x4
// 004b51ee: XOR EDI,EDI
// 004b51f0: PUSH EDI
//   Label: LAB_004b51f0
// 004b51f1: PUSH ESI
// 004b51f2: PUSH 0x62753f
//   XREF to: 0062753f (DATA)
// 004b51f7: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x86c] (DATA)
// 004b51fb: PUSH EAX
// 004b51fc: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b5201: ADD ESP,0x10
// 004b5204: MOV ESI,EAX
// 004b5206: TEST EAX,EAX
// 004b5208: JL 0x004b52a5
//   XREF to: 004b52a5 (CONDITIONAL_JUMP)
// 004b520e: PUSH EDI
// 004b520f: PUSH EAX
// 004b5210: PUSH EBP
// 004b5211: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x86c] (DATA)
// 004b5215: PUSH EAX
// 004b5216: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 004b521b: ADD ESP,0x10
// 004b521e: PUSH EBP
// 004b521f: LEA EAX,[ESP + 0x854]
//   XREF to: Stack[-0x1c] (DATA)
// 004b5226: PUSH EAX
// 004b5227: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004b522c: ADD ESP,0x8
// 004b522f: TEST EAX,EAX
// 004b5231: JL 0x004b52e5
//   XREF to: 004b52e5 (CONDITIONAL_JUMP)
// 004b5237: IMUL EBX,EAX,0x168
// 004b523d: MOV EAX,dword ptr [ESP + 0x854]
//   XREF to: Stack[-0x18] (READ)
// 004b5244: ADD EAX,EBX
// 004b5246: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b524b: ADD EAX,0x104
// 004b5250: PUSH EAX
// 004b5251: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b5256: ADD ESP,0x8
// 004b5259: MOV EDX,EAX
// 004b525b: MOV EAX,dword ptr [ESP + 0x854]
//   XREF to: Stack[-0x18] (READ)
// 004b5262: ADD EAX,EBX
// 004b5264: TEST EDX,EDX
// 004b5266: JNZ 0x004b5328
//   XREF to: 004b5328 (CONDITIONAL_JUMP)
// 004b526c: PUSH EAX
// 004b526d: PUSH 0x627558
//   XREF to: 00627558 (DATA)
// 004b5272: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b5278: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b5279: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b527e: ADD ESP,0xc
// 004b5281: JMP 0x004b51f0
//   XREF to: 004b51f0 (UNCONDITIONAL_JUMP)
// 004b5286: LEA EAX,[ESP + 0x850]
//   Label: LAB_004b5286
//   XREF to: Stack[-0x1c] (DATA)
// 004b528d: PUSH EAX
// 004b528e: XOR ESI,ESI
// 004b5290: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b5295: ADD ESP,0x4
// 004b5298: MOV EAX,ESI
// 004b529a: ADD ESP,0x85c
// 004b52a0: POP EBP
// 004b52a1: POP EDI
// 004b52a2: POP ESI
// 004b52a3: POP EBX
// 004b52a4: RET
// 004b52a5: PUSH 0x0
//   Label: LAB_004b52a5
// 004b52a7: XOR ESI,EAX
// 004b52a9: LEA EAX,[ESP + 0x53c]
//   XREF to: Stack[-0x334] (DATA)
// 004b52b0: PUSH EAX
// 004b52b1: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 004b52b6: ADD ESP,0x8
// 004b52b9: PUSH 0x0
// 004b52bb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x86c] (DATA)
// 004b52bf: PUSH EAX
// 004b52c0: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b52c5: ADD ESP,0x8
// 004b52c8: LEA EAX,[ESP + 0x850]
//   XREF to: Stack[-0x1c] (DATA)
// 004b52cf: PUSH EAX
// 004b52d0: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b52d5: ADD ESP,0x4
// 004b52d8: MOV EAX,ESI
// 004b52da: ADD ESP,0x85c
// 004b52e0: POP EBP
// 004b52e1: POP EDI
// 004b52e2: POP ESI
// 004b52e3: POP EBX
// 004b52e4: RET
// 004b52e5: PUSH 0x0
//   Label: LAB_004b52e5
// 004b52e7: LEA EAX,[ESP + 0x53c]
//   XREF to: Stack[-0x334] (DATA)
// 004b52ee: PUSH EAX
// 004b52ef: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 004b52f4: ADD ESP,0x8
// 004b52f7: PUSH 0x0
// 004b52f9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x86c] (DATA)
// 004b52fd: PUSH EAX
// 004b52fe: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b5303: ADD ESP,0x8
// 004b5306: LEA EAX,[ESP + 0x850]
//   XREF to: Stack[-0x1c] (DATA)
// 004b530d: PUSH EAX
// 004b530e: MOV ESI,0x1
// 004b5313: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b5318: ADD ESP,0x4
// 004b531b: MOV EAX,ESI
// 004b531d: ADD ESP,0x85c
// 004b5323: POP EBP
// 004b5324: POP EDI
// 004b5325: POP ESI
// 004b5326: POP EBX
// 004b5327: RET
// 004b5328: LEA EDX,[EAX + 0x104]
//   Label: LAB_004b5328
// 004b532e: PUSH EDX
// 004b532f: PUSH EAX
// 004b5330: PUSH 0x627578
//   XREF to: 00627578 (DATA)
// 004b5335: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b533a: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b533b: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b5340: ADD ESP,0x10
// 004b5343: JMP 0x004b51f0
//   XREF to: 004b51f0 (UNCONDITIONAL_JUMP)
