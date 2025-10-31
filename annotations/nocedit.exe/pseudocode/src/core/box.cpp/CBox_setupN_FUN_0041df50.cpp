// Name: core_box.cpp_CBox_setupN_FUN_0041df50
// Address: 0041df50
// Address Range: [[0041df50, 0041df99] [0041e0b0, 0041e0d7]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_setupN_FUN_0041df50(CBox * this_ptr, CVector3f * position, CVector3f * orientation, int point_count, CVector3f * point_array, float volume)
// Globals:
//   TerminatedCString s_core_box_cpp_00616477
//   TerminatedCString s_CBox_setupN_Too_many_scr_00616487
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_box_cpp_CBox_setupN_FUN_0041df50
          (CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,
          CVector3f *point_array,float volume)

{
  int iVar1;
  float *pfVar2;
  SScrape *pSVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_0000001c;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (8 < point_count) {
    g_CurrentFilename = "..\\core\\box.cpp";
    g_CurrentLineNumber = 0x80;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBox::setupN - Too many scrape points");
  }
  local_14 = 999.0;
  local_28 = 999.0;
  local_24 = -999.0;
  local_20 = -999.0;
  local_1c = -999.0;
  local_18 = 999.0;
  iVar1 = 0;
  pfVar2 = (float *)volume;
  if (0 < point_count) {
    do {
      if (*pfVar2 < local_18) {
        local_18 = *pfVar2;
      }
      if (pfVar2[1] < local_14) {
        local_14 = pfVar2[1];
      }
      if (pfVar2[2] < local_28) {
        local_28 = pfVar2[2];
      }
      if (local_24 < *pfVar2) {
        local_24 = *pfVar2;
      }
      if (local_20 < pfVar2[1]) {
        local_20 = pfVar2[1];
      }
      if (local_1c < pfVar2[2]) {
        local_1c = pfVar2[2];
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 3;
    } while (iVar1 < point_count);
  }
  fStack_30 = local_24 - local_18;
  fStack_2c = local_20 - local_14;
  local_28 = local_1c - local_28;
  if (&this_ptr->extents != (CVector3f *)&fStack_30) {
    (this_ptr->extents).x = fStack_30;
    (this_ptr->extents).y = fStack_2c;
    (this_ptr->extents).z = local_28;
  }
  iVar1 = 0;
  this_ptr->scrape_point_count = point_count;
  if (0 < point_count) {
    pSVar3 = this_ptr->scrape_points;
    do {
      if (pSVar3 != (SScrape *)volume) {
        (pSVar3->local_position).x = *(float *)volume;
        (pSVar3->local_position).y = *(float *)((int)volume + 4);
        (pSVar3->local_position).z = *(float *)((int)volume + 8);
      }
      pSVar3 = pSVar3 + 1;
      iVar1 = iVar1 + 1;
      volume = (float)((int)volume + 0xc);
    } while (iVar1 < point_count);
  }
  core_box_cpp_CBox_updateTransform_FUN_0041e0e0
            (this_ptr,orientation,(CVector3f *)point_count,in_stack_0000001c);
  return;
}


// Assembly code:
// 0041df50: PUSH EBX
//   Label: core_box.cpp_CBox_setupN_FUN_0041df50
// 0041df51: PUSH ESI
// 0041df52: PUSH EDI
// 0041df53: PUSH EBP
// 0041df54: SUB ESP,0x24
// 0041df57: MOV ESI,dword ptr [ESP + 0x38]
// 0041df5b: MOV EBX,dword ptr [ESP + 0x44]
// 0041df5f: CMP EBX,0x8
// 0041df62: JG 0x0041e0b0
//   XREF to: 0041e0b0 (CONDITIONAL_JUMP)
// 0041df68: MOV EDI,0x4479c000
//   Label: LAB_0041df68
// 0041df6d: MOV EDX,0xc479c000
// 0041df72: MOV dword ptr [ESP + 0x1c],EDI
// 0041df76: MOV dword ptr [ESP + 0x20],EDI
// 0041df7a: MOV dword ptr [ESP + 0xc],EDX
// 0041df7e: MOV ECX,EDX
// 0041df80: MOV dword ptr [ESP + 0x10],EDX
// 0041df84: MOV dword ptr [ESP + 0x14],EDX
// 0041df88: MOV dword ptr [ESP + 0x18],EDI
// 0041df8c: XOR ECX,EDX
// 0041df8e: TEST EBX,EBX
// 0041df90: JLE 0x0041e010
//   XREF to: 0041e010 (CONDITIONAL_JUMP)
// 0041df96: MOV EDX,dword ptr [ESP + 0x48]
// 0041e0b0: MOV EDX,0x616477
//   Label: LAB_0041e0b0
//   XREF to: 00616477 (DATA)
// 0041e0b5: MOV ECX,0x80
// 0041e0ba: PUSH 0x616487
//   XREF to: 00616487 (DATA)
// 0041e0bf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0041e0c5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0041e0cb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041e0d0: ADD ESP,0x4
// 0041e0d3: JMP 0x0041df68
//   XREF to: 0041df68 (UNCONDITIONAL_JUMP)
