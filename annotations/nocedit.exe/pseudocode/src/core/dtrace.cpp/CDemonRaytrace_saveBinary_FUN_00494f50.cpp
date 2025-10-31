// Name: core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
// Address: 00494f50
// Address Range: [[00494f50, 00495030]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50(CDemonRaytrace * this_ptr, FILE * file_handle)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494f00 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040 (00495040) at 00495065 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622a03
//   TerminatedCString s_CDemonRaytrace_saveBinar_00622a16
//   int g_GeoFileFormatVersion = 0x4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dcube.cpp_CDemonCube_save_FUN_00457430
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fwrite_FUN_005fdc00

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_saveBinary_FUN_00494f50(CDemonRaytrace *this_ptr,FILE *file_handle)

{
  int iVar1;
  int iVar2;
  
  crt_stdio_c_fwrite_FUN_005fdc00(&g_GeoFileFormatVersion,4,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->grid_coord,4,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&(this_ptr->grid_coord).y,4,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&(this_ptr->grid_coord).z,4,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox_min,0xc,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox_max,0xc,1,file_handle);
  iVar1 = 0;
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->cell_size,0xc,1,file_handle);
  for (iVar2 = 0;
      iVar2 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
      iVar2 = iVar2 + 1) {
    core_dcube_cpp_CDemonCube_save_FUN_00457430
              ((CDemonCube *)((int)&this_ptr->cube_data->voxel_buffer1 + iVar1),file_handle);
    iVar1 = iVar1 + 0x34;
  }
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 0x251;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::saveBinary - error writing file");
  return;
}


// Assembly code:
// 00494f50: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
// 00494f51: PUSH ESI
// 00494f52: PUSH EDI
// 00494f53: PUSH EBP
// 00494f54: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00494f58: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00494f5c: PUSH EBP
// 00494f5d: PUSH 0x1
// 00494f5f: PUSH 0x4
// 00494f61: PUSH 0x6789f0
//   XREF to: 006789f0 (DATA)
// 00494f66: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00494f6b: ADD ESP,0x10
// 00494f6e: PUSH EBP
// 00494f6f: PUSH 0x1
// 00494f71: PUSH 0x4
// 00494f73: LEA EAX,[EBX + 0x40]
// 00494f76: PUSH EAX
// 00494f77: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00494f7c: ADD ESP,0x10
// 00494f7f: PUSH EBP
// 00494f80: PUSH 0x1
// 00494f82: PUSH 0x4
// 00494f84: LEA EAX,[EBX + 0x44]
// 00494f87: PUSH EAX
// 00494f88: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00494f8d: ADD ESP,0x10
// 00494f90: PUSH EBP
// 00494f91: PUSH 0x1
// 00494f93: PUSH 0x4
// 00494f95: LEA EAX,[EBX + 0x48]
// 00494f98: PUSH EAX
// 00494f99: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00494f9e: ADD ESP,0x10
// 00494fa1: PUSH EBP
// 00494fa2: PUSH 0x1
// 00494fa4: PUSH 0xc
// 00494fa6: LEA EAX,[EBX + 0x10]
// 00494fa9: PUSH EAX
// 00494faa: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00494faf: ADD ESP,0x10
// 00494fb2: PUSH EBP
// 00494fb3: PUSH 0x1
// 00494fb5: PUSH 0xc
// 00494fb7: LEA EAX,[EBX + 0x1c]
// 00494fba: PUSH EAX
// 00494fbb: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00494fc0: ADD ESP,0x10
// 00494fc3: PUSH EBP
// 00494fc4: PUSH 0x1
// 00494fc6: PUSH 0xc
// 00494fc8: LEA EAX,[EBX + 0x28]
// 00494fcb: PUSH EAX
// 00494fcc: XOR EDI,EDI
// 00494fce: XOR ESI,ESI
// 00494fd0: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00494fd5: ADD ESP,0x10
// 00494fd8: MOV EDX,dword ptr [EBX + 0x44]
//   Label: LAB_00494fd8
// 00494fdb: MOV EAX,dword ptr [EBX + 0x40]
// 00494fde: IMUL EAX,EDX
// 00494fe1: IMUL EAX,dword ptr [EBX + 0x48]
// 00494fe5: CMP EDI,EAX
// 00494fe7: JL 0x00494ff4
//   XREF to: 00494ff4 (CONDITIONAL_JUMP)
// 00494fe9: TEST byte ptr [EBP + 0xc],0x20
// 00494fed: JNZ 0x00495009
//   XREF to: 00495009 (CONDITIONAL_JUMP)
// 00494fef: POP EBP
// 00494ff0: POP EDI
// 00494ff1: POP ESI
// 00494ff2: POP EBX
// 00494ff3: RET
// 00494ff4: MOV EAX,dword ptr [EBX + 0x50]
//   Label: LAB_00494ff4
// 00494ff7: PUSH EBP
// 00494ff8: ADD EAX,ESI
// 00494ffa: PUSH EAX
// 00494ffb: INC EDI
// 00494ffc: CALL core_dcube.cpp_CDemonCube_save_FUN_00457430
//   XREF to: 00457430 (UNCONDITIONAL_CALL)
// 00495001: ADD ESI,0x34
// 00495004: ADD ESP,0x8
// 00495007: JMP 0x00494fd8
//   XREF to: 00494fd8 (UNCONDITIONAL_JUMP)
// 00495009: MOV EBX,0x622a03
//   Label: LAB_00495009
//   XREF to: 00622a03 (PARAM)
// 0049500e: MOV ESI,0x251
// 00495013: PUSH 0x622a16
//   XREF to: 00622a16 (DATA)
// 00495018: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0049501e: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00495024: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00495029: ADD ESP,0x4
// 0049502c: POP EBP
// 0049502d: POP EDI
// 0049502e: POP ESI
// 0049502f: POP EBX
// 00495030: RET
