// Name: shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
// Address: 004a3ef0
// Address Range: [[004a3ef0, 004a3f1c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, int config_parameter)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004dba62 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 (004a3e20) at 004a3e9d [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
//   shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
          (CPickList *this_ptr,char *dialog_title,int initial_selected_index,int config_parameter)

{
  shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
            (this_ptr,dialog_title,config_parameter);
  this_ptr->current_index = config_parameter;
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(this_ptr);
  return;
}


// Assembly code:
// 004a3ef0: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
// 004a3ef1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a3ef5: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004a3ef9: PUSH EDX
// 004a3efa: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a3efe: PUSH ECX
// 004a3eff: PUSH EBX
// 004a3f00: CALL shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
//   XREF to: 004a45d0 (UNCONDITIONAL_CALL)
// 004a3f05: ADD ESP,0xc
// 004a3f08: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004a3f0c: PUSH EBX
// 004a3f0d: MOV dword ptr [EBX + 0x17c],EAX
// 004a3f13: CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
//   XREF to: 004a5240 (UNCONDITIONAL_CALL)
// 004a3f18: ADD ESP,0x4
// 004a3f1b: POP EBX
// 004a3f1c: RET
