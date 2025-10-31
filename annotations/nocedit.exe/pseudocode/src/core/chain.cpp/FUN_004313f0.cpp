// Name: core_chain.cpp_FUN_004313f0
// Address: 004313f0
// Address Range: [[004313f0, 00431404]]
// Convention: __cdecl
// Signature: int core_chain.cpp_FUN_004313f0(SChainVertex * * objs)
// Cross-references:
//   core_chain.cpp_CChain_dtor_FUN_00431360 (00431360) at 00431375 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SChainVertexTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_chain_cpp_FUN_004313f0(SChainVertex **objs)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(objs,0x14,&g_SChainVertexTypeInfo);
  return iVar1;
}


// Assembly code:
// 004313f0: PUSH 0x65baf0
//   Label: core_chain.cpp_FUN_004313f0
//   XREF to: 0065baf0 (DATA)
// 004313f5: PUSH 0x14
// 004313f7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004313fb: PUSH EDX
// 004313fc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00431401: ADD ESP,0xc
// 00431404: RET
