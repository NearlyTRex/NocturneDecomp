// Name: crt_memory.c_constructTypedObjectArray_FUN_00601272
// Address: 00601272
// Address Range: [[00601272, 0060128b]]
// Convention: __cdecl
// Signature: void * crt_memory.c_constructTypedObjectArray_FUN_00601272(void * array_memory, int element_count, WatcomTypeInfo * type_info)
// Cross-references:
//   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 (0054b9b0) at 0054ba93 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 (0054bdb0) at 0054be02 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380 (00494380) at 004943c0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 (0059a510) at 0059a630 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba04f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ea6c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_constructTypedObjectArray_FUN_00601232

#include "nocturne.h"

void * __cdecl
crt_memory_c_constructTypedObjectArray_FUN_00601272
          (void *array_memory,int element_count,WatcomTypeInfo *type_info)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructTypedObjectArray_FUN_00601232(array_memory,element_count,type_info)
  ;
  return pvVar1;
}


// Assembly code:
// 00601272: PUSH EBX
//   Label: crt_memory.c_constructTypedObjectArray_FUN_00601272
// 00601273: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00601277: PUSH EDX
// 00601278: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060127c: PUSH ECX
// 0060127d: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00601281: PUSH EBX
// 00601282: CALL crt_memory.c_constructTypedObjectArray_FUN_00601232
//   XREF to: 00601232 (UNCONDITIONAL_CALL)
// 00601287: ADD ESP,0xc
// 0060128a: POP EBX
// 0060128b: RET
