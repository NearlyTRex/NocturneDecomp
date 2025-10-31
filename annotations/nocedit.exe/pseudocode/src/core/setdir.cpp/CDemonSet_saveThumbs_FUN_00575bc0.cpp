// Name: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
// Address: 00575bc0
// Address Range: [[00575bc0, 00575bff]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet * this_ptr, FILE * file_handle)
// Cross-references:
//   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 (00575b40) at 00575b7f [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60 (00575f60) at 00575f67 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00575ba0 = 00575c00
//   undefined4 caseD_0
//   undefined4 caseD_1
//   undefined4 caseD_2
//   undefined4 caseD_3
//   undefined4 caseD_4
//   undefined4 caseD_5
// Function calls:
//   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0

#include "nocturne.h"

void __cdecl
core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet *this_ptr,FILE *file_handle)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint uVar3;
  float unaff_EDI;
  FILE *in_stack_0000000c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  float fStack_10;
  float fStack_c;
  
  core_setdir_cpp_CDemonSet_freeThumbs_FUN_00575df0(this_ptr);
  iVar2 = 0;
LAB_00575bd4:
  while( true ) {
    if (this_ptr->camera_count <= iVar2) {
      return;
    }
    if (this_ptr->cameras[iVar2].is_panning != 0) break;
    core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910
              (g_CZThumbPool + iVar2 * 6,&this_ptr->cameras[iVar2].position,
               &this_ptr->cameras[iVar2].orientation,0x40,0x30,
               this_ptr->cameras[iVar2].projection_scale * (float)DOUBLE_0064651e,in_stack_0000000c)
    ;
    iVar2 = iVar2 + 1;
    unaff_EDI = CStack_58.x;
  }
  uVar3 = 0;
  do {
    switch(uVar3) {
    default:
      CStack_58.z = 0.0;
      CStack_58.y = 0.0;
      CStack_58.x = 0.0;
      if (&CStack_28 != &CStack_58) {
        CStack_28.y = 0.0;
LAB_00575c20:
        CStack_28.x = 0.0;
LAB_00575c24:
        CStack_28.z = 0.0;
      }
      break;
    case 1:
      fStack_10 = 0.0;
      fStack_c = 3.1415927;
      if (&CStack_28 != (CVector3f *)&fStack_10) {
        CStack_28.y = 3.1415927;
        goto LAB_00575c20;
      }
      break;
    case 2:
      CStack_4c.z = 0.0;
      CStack_4c.x = 0.0;
      CStack_4c.y = 1.5707964;
      if (&CStack_28 != &CStack_4c) {
        CStack_28.y = 1.5707964;
        goto LAB_00575c20;
      }
      break;
    case 3:
      CStack_40.z = 0.0;
      CStack_40.x = 0.0;
      CStack_40.y = -1.5707964;
      if (&CStack_28 != &CStack_40) {
        CStack_28.y = -1.5707964;
        goto LAB_00575c20;
      }
      break;
    case 4:
      CStack_1c.z = 0.0;
      CStack_1c.y = 0.0;
      CStack_1c.x = -1.5707964;
      if (&CStack_28 != &CStack_1c) {
        CStack_28.x = -1.5707964;
        CStack_28.y = 0.0;
        goto LAB_00575c24;
      }
      break;
    case 5:
      CStack_34.x = 1.5707964;
      CStack_34.z = 0.0;
      CStack_34.y = 0.0;
      if (&CStack_28 != &CStack_34) {
        CStack_28.x = 1.5707964;
        CStack_28.y = 0.0;
        goto LAB_00575c24;
      }
    }
    while( true ) {
      iVar1 = iVar2 * 6 + uVar3;
      uVar3 = uVar3 + 1;
      core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910
                (g_CZThumbPool + iVar1,&this_ptr->cameras[iVar2].position,&CStack_28,0x40,0x40,1.0,
                 in_stack_0000000c);
      if (5 < (int)uVar3) {
        iVar2 = iVar2 + 1;
        unaff_EDI = CStack_58.x;
        goto LAB_00575bd4;
      }
      if (uVar3 < 6) break;
      g_CurrentFilename = "..\\core\\setdir.cpp";
      g_CurrentLineNumber = 0x39d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze",unaff_EDI);
    }
  } while( true );
}


// Assembly code:
// 00575bc0: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
// 00575bc1: PUSH EBP
// 00575bc2: SUB ESP,0x54
// 00575bc5: MOV EBP,dword ptr [ESP + 0x60]
// 00575bc9: PUSH EBP
// 00575bca: CALL core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
//   XREF to: 00575df0 (UNCONDITIONAL_CALL)
// 00575bcf: XOR EBX,EBX
// 00575bd1: ADD ESP,0x4
// 00575bd4: CMP EBX,dword ptr [EBP]
//   Label: LAB_00575bd4
// 00575bd7: JGE 0x00575de7
//   XREF to: 00575de7 (CONDITIONAL_JUMP)
// 00575bdd: PUSH EDI
// 00575bde: PUSH ESI
// 00575bdf: IMUL EDI,EBX,0x1a4
// 00575be5: LEA EAX,[EBP + 0x4]
// 00575be8: ADD EDI,EAX
// 00575bea: CMP dword ptr [EDI + 0x140],0x0
// 00575bf1: JZ 0x00575d9c
//   XREF to: 00575d9c (CONDITIONAL_JUMP)
// 00575bf7: XOR ESI,ESI
// 00575bf9: JMP dword ptr [ESI*0x4 + 0x575ba0]
//   Label: switchD
//   XREF to: 00575c00 (COMPUTED_JUMP)
//   XREF to: 00575ca4 (COMPUTED_JUMP)
//   XREF to: 00575cd2 (COMPUTED_JUMP)
//   XREF to: 00575d00 (COMPUTED_JUMP)
//   XREF to: 00575d2e (COMPUTED_JUMP)
//   XREF to: 00575d65 (COMPUTED_JUMP)
//   XREF to: 00575ba0 (READ)
