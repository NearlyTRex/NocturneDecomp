// Name: core_script.cpp_CScript_dtor_FUN_00559840
// Address: 00559840
// Address Range: [[00559840, 00559860]]
// Convention: __cdecl
// Signature: CScript * core_script.cpp_CScript_dtor_FUN_00559840(CScript * this_ptr)
// Function calls:
//   core_script.cpp_CScript_FreeSomething1_FUN_00559870
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00559840(CScript *this_ptr)

{
  CStrList *pCVar1;
  uint unaff_retaddr;
  
  core_script_cpp_CScript_FreeSomething1_FUN_00559870();
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                     ((CStrList *)(this_ptr->padding_0x18 + 0x20),0,unaff_retaddr);
  return (CScript *)&pCVar1[-4].data_array;
}


// Assembly code:
// 00559840: PUSH EBX
//   Label: core_script.cpp_CScript_dtor_FUN_00559840
// 00559841: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00559845: PUSH EBX
// 00559846: CALL core_script.cpp_CScript_FreeSomething1_FUN_00559870
//   XREF to: 00559870 (UNCONDITIONAL_CALL)
// 0055984b: ADD ESP,0x4
// 0055984e: PUSH 0x0
// 00559850: ADD EBX,0x38
// 00559853: PUSH EBX
// 00559854: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 00559859: ADD ESP,0x8
// 0055985c: SUB EAX,0x38
// 0055985f: POP EBX
// 00559860: RET
