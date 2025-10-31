// Name: core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
// Address: 00575e40
// Address Range: [[00575e40, 00575f5a]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40(CDemonSet * this_ptr, char * filename)
// Cross-references:
//   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 (00575b40) at 00575b72 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 005770c0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a8ad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wb_00646526
//   TerminatedCString s_data_00646529
//   TerminatedCString s_core_setdir_cpp_0064652e
//   TerminatedCString s_Can_t_create_s_00646541
//   TerminatedCString s_core_setdir_cpp_00646551
//   TerminatedCString s_Error_writing_s_00646564
//   TerminatedCString s_core_setdir_cpp_00646575
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CZThumb[1500] g_CZThumbPool
//   undefined4 DAT_03347130
//   undefined4 DAT_033471f8
//   undefined4 DAT_033472e8
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setdir.cpp_CZThumb_write_FUN_00574b20
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(CDemonSet *this_ptr,char *filename)

{
  FILE *file_handle;
  CZThumb *this_ptr_00;
  int iVar1;
  int iVar2;
  int *in_stack_0000000c;
  undefined4 in_stack_00000010;
  CZThumb *local_14;
  int *piVar3;
  int iVar4;
  
  file_handle = engine_dosio_c_getFile_FUN_00481a50("data",filename,"wb");
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x3bf;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",in_stack_0000000c);
  }
  iVar4 = 0;
  if (0 < *in_stack_0000000c) {
    local_14 = g_CZThumbPool;
    piVar3 = in_stack_0000000c;
    do {
      iVar2 = 1;
      if (piVar3[0x51] != 0) {
        iVar2 = 6;
      }
      iVar1 = 0;
      this_ptr_00 = local_14;
      if (iVar2 != 0) {
        do {
          iVar1 = iVar1 + 1;
          core_setdir_cpp_CZThumb_write_FUN_00574b20(this_ptr_00,file_handle);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar1 < iVar2);
      }
      local_14 = local_14 + 6;
      piVar3 = piVar3 + 0x69;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *in_stack_0000000c);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x3ca;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing %s",in_stack_00000010);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\setdir.cpp",0x3cb);
  return;
}


// Assembly code:
// 00575e40: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
// 00575e41: PUSH ESI
// 00575e42: PUSH EDI
// 00575e43: PUSH EBP
// 00575e44: SUB ESP,0xc
// 00575e47: PUSH 0x646526
//   XREF to: 00646526 (DATA)
// 00575e4c: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00575e50: PUSH EDX
// 00575e51: PUSH 0x646529
//   XREF to: 00646529 (DATA)
// 00575e56: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00575e5b: ADD ESP,0xc
// 00575e5e: MOV EBP,EAX
// 00575e60: TEST EAX,EAX
// 00575e62: JZ 0x00575f05
//   XREF to: 00575f05 (CONDITIONAL_JUMP)
// 00575e68: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00575e68
//   XREF to: Stack[0x4] (READ)
// 00575e6c: XOR EDI,EDI
// 00575e6e: MOV EDX,dword ptr [EAX]
// 00575e70: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00575e74: TEST EDX,EDX
// 00575e76: JLE 0x00575ee4
//   XREF to: 00575ee4 (CONDITIONAL_JUMP)
// 00575e78: MOV EBX,0x3347108
//   XREF to: 03347108 (DATA)
// 00575e7d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00575e81: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x1c] (DATA)
//   XREF to: 03347108 (DATA)
// 00575e84: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00575e84
//   XREF to: Stack[-0x18] (READ)
// 00575e88: MOV ESI,dword ptr [EAX + 0x144]
// 00575e8e: MOV EDI,0x1
// 00575e93: TEST ESI,ESI
// 00575e95: JZ 0x00575e9c
//   XREF to: 00575e9c (CONDITIONAL_JUMP)
// 00575e97: MOV EDI,0x6
// 00575e9c: XOR ESI,ESI
//   Label: LAB_00575e9c
// 00575e9e: TEST EDI,EDI
// 00575ea0: JLE 0x00575eb7
//   XREF to: 00575eb7 (CONDITIONAL_JUMP)
// 00575ea2: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
//   XREF to: 03347108 (PARAM)
//   XREF to: 033471f8 (PARAM)
// 00575ea5: PUSH EBP
//   Label: LAB_00575ea5
// 00575ea6: PUSH EBX
//   XREF to: 03347108 (DATA)
//   XREF to: 03347130 (DATA)
//   XREF to: 033471f8 (DATA)
// 00575ea7: INC ESI
// 00575ea8: CALL core_setdir.cpp_CZThumb_write_FUN_00574b20
//   XREF to: 00574b20 (UNCONDITIONAL_CALL)
// 00575ead: ADD ESP,0x8
// 00575eb0: ADD EBX,0x28
//   XREF to: 03347130 (PARAM)
// 00575eb3: CMP ESI,EDI
// 00575eb5: JL 0x00575ea5
//   XREF to: 00575ea5 (CONDITIONAL_JUMP)
// 00575eb7: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_00575eb7
//   XREF to: Stack[-0x18] (READ)
// 00575ebb: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00575ebe: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00575ec2: ADD EBX,0xf0
// 00575ec8: ADD ECX,0x1a4
// 00575ece: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x1c] (DATA)
//   XREF to: 033471f8 (DATA)
//   XREF to: 033472e8 (DATA)
// 00575ed1: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00575ed5: INC ESI
// 00575ed6: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00575eda: MOV EDI,dword ptr [EBX]
// 00575edc: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00575ee0: CMP ESI,EDI
// 00575ee2: JL 0x00575e84
//   XREF to: 00575e84 (CONDITIONAL_JUMP)
// 00575ee4: TEST byte ptr [EBP + 0xc],0x20
//   Label: LAB_00575ee4
// 00575ee8: JNZ 0x00575f32
//   XREF to: 00575f32 (CONDITIONAL_JUMP)
// 00575eea: PUSH 0x3cb
//   Label: LAB_00575eea
// 00575eef: PUSH 0x646575
//   XREF to: 00646575 (DATA)
// 00575ef4: PUSH EBP
// 00575ef5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00575efa: ADD ESP,0xc
// 00575efd: ADD ESP,0xc
// 00575f00: POP EBP
// 00575f01: POP EDI
// 00575f02: POP ESI
// 00575f03: POP EBX
// 00575f04: RET
// 00575f05: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_00575f05
//   XREF to: Stack[0x8] (READ)
// 00575f09: PUSH ESI
// 00575f0a: MOV ECX,0x64652e
//   XREF to: 0064652e (PARAM)
// 00575f0f: MOV EBX,0x3bf
// 00575f14: PUSH 0x646541
//   XREF to: 00646541 (DATA)
// 00575f19: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00575f1f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00575f25: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00575f2a: ADD ESP,0x8
// 00575f2d: JMP 0x00575e68
//   XREF to: 00575e68 (UNCONDITIONAL_JUMP)
// 00575f32: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_00575f32
//   XREF to: Stack[0x8] (READ)
// 00575f36: PUSH ECX
// 00575f37: MOV EAX,0x646551
//   XREF to: 00646551 (PARAM)
// 00575f3c: MOV EDX,0x3ca
// 00575f41: PUSH 0x646564
//   XREF to: 00646564 (DATA)
// 00575f46: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00575f4b: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00575f51: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00575f56: ADD ESP,0x8
// 00575f59: JMP 0x00575eea
//   XREF to: 00575eea (UNCONDITIONAL_JUMP)
