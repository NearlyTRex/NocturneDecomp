// Name: shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
// Address: 004a3270
// Address Range: [[004a3270, 004a335f]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20 (004a3f20) at 004a3fcd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623928
//   TerminatedCString s_shape_edittool_cpp_0062393e
//   TerminatedCString s_CStrList_copyToClipboard_00623954
//   TerminatedCString s_s_00623995
//   TerminatedCString s_shape_edittool_cpp_00623999
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_free_FUN_005fe659
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList *this_ptr)

{
  char cVar1;
  CEditorTools *this_ptr_00;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  void *unaff_ESI;
  int iVar7;
  char *unaff_EDI;
  byte bVar8;
  
  bVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  if (0 < this_ptr->item_count) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,iVar7);
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + ~uVar5;
    } while (iVar7 < this_ptr->item_count);
  }
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(iVar6 + 1,"..\\shape\\edittool.cpp",0xc50);
  if (pvVar3 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc51;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CStrList::copyToClipboard - out of memory for %d items, %d bytes",this_ptr->item_count,iVar6 + 1,0);
  }
  iVar6 = 0;
  pcVar2 = unaff_EDI;
  if (0 < this_ptr->item_count) {
    do {
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,iVar6);
      iVar6 = iVar6 + 1;
      iVar7 = crt_stdio_c_sprintf_FUN_005fdbd0(unaff_EDI,"%s\n",pcVar4);
      unaff_EDI = unaff_EDI + iVar7;
    } while (iVar6 < this_ptr->item_count);
  }
  this_ptr_00 = g_CEditorToolsPtr;
  *unaff_EDI = '\0';
  shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(this_ptr_00,pcVar2);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0xc61;
  crt_memory_c_free_FUN_005fe659(unaff_ESI);
  return;
}


// Assembly code:
// 004a3270: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
// 004a3271: PUSH ESI
// 004a3272: PUSH EDI
// 004a3273: PUSH EBP
// 004a3274: SUB ESP,0x4
// 004a3277: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004a327b: MOV EDX,dword ptr [EBX]
// 004a327d: XOR ESI,ESI
// 004a327f: XOR EBP,EBP
// 004a3281: TEST EDX,EDX
// 004a3283: JLE 0x004a32b0
//   XREF to: 004a32b0 (CONDITIONAL_JUMP)
// 004a3285: PUSH ESI
//   Label: LAB_004a3285
// 004a3286: PUSH EBX
// 004a3287: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a328c: ADD ESP,0x8
// 004a328f: MOV EDI,EAX
// 004a3291: SUB ECX,ECX
// 004a3293: DEC ECX
// 004a3294: XOR EAX,EAX
// 004a3296: SCASB.REPNE ES:EDI
// 004a3298: NOT ECX
// 004a329a: DEC ECX
// 004a329b: INC ECX
// 004a329c: INC ESI
// 004a329d: ADD EBP,ECX
// 004a329f: CMP ESI,dword ptr [EBX]
// 004a32a1: JL 0x004a3285
//   XREF to: 004a3285 (CONDITIONAL_JUMP)
// 004a32a3: LEA EAX,[EAX]
// 004a32a9: LEA EDX,[EDX]
// 004a32af: NOP
// 004a32b0: PUSH 0xc50
//   Label: LAB_004a32b0
// 004a32b5: PUSH 0x623928
//   XREF to: 00623928 (DATA)
// 004a32ba: INC EBP
// 004a32bb: PUSH EBP
// 004a32bc: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 004a32c1: ADD ESP,0xc
// 004a32c4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004a32c7: TEST EAX,EAX
// 004a32c9: JNZ 0x004a32f2
//   XREF to: 004a32f2 (CONDITIONAL_JUMP)
// 004a32cb: PUSH EBP
// 004a32cc: MOV EBP,dword ptr [EBX]
// 004a32ce: PUSH EBP
// 004a32cf: MOV ESI,0x62393e
//   XREF to: 0062393e (DATA)
// 004a32d4: MOV EDI,0xc51
// 004a32d9: PUSH 0x623954
//   XREF to: 00623954 (DATA)
// 004a32de: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004a32e4: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a32ea: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a32ef: ADD ESP,0xc
// 004a32f2: MOV EDI,dword ptr [ESP]
//   Label: LAB_004a32f2
//   XREF to: Stack[-0x14] (DATA)
// 004a32f5: MOV EAX,dword ptr [EBX]
// 004a32f7: XOR ESI,ESI
// 004a32f9: TEST EAX,EAX
// 004a32fb: JLE 0x004a3320
//   XREF to: 004a3320 (CONDITIONAL_JUMP)
// 004a32fd: PUSH ESI
//   Label: LAB_004a32fd
// 004a32fe: PUSH EBX
// 004a32ff: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a3304: ADD ESP,0x8
// 004a3307: PUSH EAX
// 004a3308: PUSH 0x623995
//   XREF to: 00623995 (DATA)
// 004a330d: PUSH EDI
// 004a330e: INC ESI
// 004a330f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a3314: ADD ESP,0xc
// 004a3317: MOV EDX,dword ptr [EBX]
// 004a3319: ADD EDI,EAX
// 004a331b: CMP ESI,EDX
// 004a331d: JL 0x004a32fd
//   XREF to: 004a32fd (CONDITIONAL_JUMP)
// 004a331f: NOP
// 004a3320: MOV ECX,dword ptr [ESP]
//   Label: LAB_004a3320
//   XREF to: Stack[-0x14] (DATA)
// 004a3323: PUSH ECX
// 004a3324: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004a332a: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004a332b: MOV byte ptr [EDI],0x0
// 004a332e: CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)
// 004a3333: ADD ESP,0x8
// 004a3336: MOV ESI,0x623999
//   XREF to: 00623999 (DATA)
// 004a333b: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004a333e: MOV EDI,0xc61
// 004a3343: PUSH EBP
// 004a3344: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 004a334a: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 004a3350: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004a3355: ADD ESP,0x4
// 004a3358: ADD ESP,0x4
// 004a335b: POP EBP
// 004a335c: POP EDI
// 004a335d: POP ESI
// 004a335e: POP EBX
// 004a335f: RET
