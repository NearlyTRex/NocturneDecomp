// Name: core_netgame.cpp_CNetGame_dtor_FUN_0053f760
// Address: 0053f760
// Address Range: [[0053f760, 0053f779]]
// Convention: __cdecl
// Signature: CNetGame * core_netgame.cpp_CNetGame_dtor_FUN_0053f760(CNetGame * this_ptr)
// Function calls:
//   support_trisock.cpp_bindSocketWrapper_FUN_005e1af0

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0053f760(CNetGame *this_ptr)

{
  SSocketContext *pSVar1;
  
  pSVar1 = support_trisock_cpp_bindSocketWrapper_FUN_005e1af0
                     ((SSocketContext *)(this_ptr->field7_0x118 + 0x58));
  return (CNetGame *)pSVar1[-0xb].remote_addr.padding_0x08;
}


// Assembly code:
// 0053f760: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_CNetGame_dtor_FUN_0053f760
//   XREF to: Stack[0x4] (READ)
// 0053f764: PUSH 0x0
// 0053f766: ADD EAX,0x170
// 0053f76b: PUSH EAX
// 0053f76c: CALL support_trisock.cpp_bindSocketWrapper_FUN_005e1af0
//   XREF to: 005e1af0 (UNCONDITIONAL_CALL)
// 0053f771: ADD ESP,0x8
// 0053f774: SUB EAX,0x170
// 0053f779: RET
