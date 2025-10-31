// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
// Address: 0054bdb0
// Address Range: [[0054bdb0, 0054be60]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(CPackedBitmapSet * this_ptr, int bitmap_count)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70 (0054be70) at 0054bea2 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054c016 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 (0054c3d0) at 0054c404 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f3b6
//   TerminatedCString s_Unable_to_allocate_u_byt_0063f3ce
//   TerminatedCString s_cockpit_pkbmpset_cpp_0063f41b
//   WatcomTypeInfo g_CPackedBitmapTypeInfo
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_constructTypedObjectArray_FUN_00601272
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
          (CPackedBitmapSet *this_ptr,int bitmap_count)

{
  void *array_memory;
  CPackedBitmap *pCVar1;
  BADSPACEBASE *in_ESP;
  WatcomTypeInfo *element_count;
  WatcomTypeInfo *in_stack_ffffff34;
  char acStack_c4 [4];
  char acStack_c0 [184];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  if (bitmap_count < 1) {
    return;
  }
  element_count = &g_CPackedBitmapTypeInfo;
  array_memory = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           (bitmap_count * 0x24 + 4,"..\\cockpit\\pkbmpset.cpp",100);
  pCVar1 = (CPackedBitmap *)
           crt_memory_c_constructTypedObjectArray_FUN_00601272
                     (array_memory,(int)element_count,in_stack_ffffff34);
  this_ptr->bitmap_array = pCVar1;
  if (pCVar1 == (CPackedBitmap *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_c4,"Unable to allocate %u bytes for %u CPackedBitmaps in CPackedBitmapSet::alloc",bitmap_count * 0x24,bitmap_count);
    g_CurrentLineNumber = 0x6c;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_c0);
  }
  this_ptr->bitmap_count = bitmap_count;
  return;
}


// Assembly code:
// 0054bdb0: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
// 0054bdb1: PUSH ESI
// 0054bdb2: SUB ESP,0xc8
// 0054bdb8: MOV ESI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[0x4] (READ)
// 0054bdbf: MOV EBX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[0x8] (READ)
// 0054bdc6: PUSH ESI
// 0054bdc7: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   XREF to: 0054bd60 (UNCONDITIONAL_CALL)
// 0054bdcc: ADD ESP,0x4
// 0054bdcf: TEST EBX,EBX
// 0054bdd1: JG 0x0054bddc
//   XREF to: 0054bddc (CONDITIONAL_JUMP)
// 0054bdd3: ADD ESP,0xc8
// 0054bdd9: POP ESI
// 0054bdda: POP EBX
// 0054bddb: RET
// 0054bddc: PUSH 0x662260
//   Label: LAB_0054bddc
//   XREF to: 00662260 (DATA)
// 0054bde1: PUSH EBX
// 0054bde2: LEA EAX,[EBX*0x8 + 0x0]
// 0054bde9: ADD EAX,EBX
// 0054bdeb: PUSH 0x64
// 0054bded: SHL EAX,0x2
// 0054bdf0: PUSH 0x63f3b6
//   XREF to: 0063f3b6 (DATA)
// 0054bdf5: ADD EAX,0x4
// 0054bdf8: PUSH EAX
// 0054bdf9: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0054bdfe: ADD ESP,0xc
// 0054be01: PUSH EAX
// 0054be02: CALL crt_memory.c_constructTypedObjectArray_FUN_00601272
//   XREF to: 00601272 (UNCONDITIONAL_CALL)
// 0054be07: ADD ESP,0xc
// 0054be0a: TEST EAX,EAX
// 0054be0c: MOV dword ptr [ESI + 0x4],EAX
// 0054be0f: JNZ 0x0054be56
//   XREF to: 0054be56 (CONDITIONAL_JUMP)
// 0054be11: PUSH EDI
// 0054be12: PUSH EBX
// 0054be13: LEA EAX,[EBX*0x8 + 0x0]
// 0054be1a: ADD EAX,EBX
// 0054be1c: SHL EAX,0x2
// 0054be1f: PUSH EAX
// 0054be20: PUSH 0x63f3ce
//   XREF to: 0063f3ce (DATA)
// 0054be25: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xd0] (DATA)
// 0054be29: PUSH EAX
// 0054be2a: MOV EDI,0x6c
// 0054be2f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054be34: ADD ESP,0x10
// 0054be37: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd0] (DATA)
// 0054be3b: MOV ECX,0x63f41b
//   XREF to: 0063f41b (DATA)
// 0054be40: PUSH EAX
// 0054be41: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0054be47: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054be4d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054be52: ADD ESP,0x4
// 0054be55: POP EDI
// 0054be56: MOV dword ptr [ESI],EBX
//   Label: LAB_0054be56
// 0054be58: ADD ESP,0xc8
// 0054be5e: POP ESI
// 0054be5f: POP EBX
// 0054be60: RET
