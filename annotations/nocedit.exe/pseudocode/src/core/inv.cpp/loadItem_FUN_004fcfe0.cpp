// Name: core_inv.cpp_loadItem_FUN_004fcfe0
// Address: 004fcfe0
// Address Range: [[004fcfe0, 004fd010]]
// Convention: __cdecl
// Signature: int core_inv.cpp_loadItem_FUN_004fcfe0(SInventoryItemInfo * item_info, FILE * file_handle)
// Cross-references:
//   core_inv.cpp_loadInventory_FUN_004fd220 (004fd220) at 004fd4a9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_00630399
// Function calls:
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

int __cdecl core_inv_cpp_loadItem_FUN_004fcfe0(SInventoryItemInfo *item_info,FILE *file_handle)

{
  int iVar1;
  
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                    (file_handle,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n",item_info,item_info->string2,item_info->string3);
  return (uint)(iVar1 == 3);
}


// Assembly code:
// 004fcfe0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_inv.cpp_loadItem_FUN_004fcfe0
//   XREF to: Stack[0x4] (READ)
// 004fcfe4: LEA EAX,[EDX + 0x200]
// 004fcfea: PUSH EAX
// 004fcfeb: LEA EAX,[EDX + 0x100]
// 004fcff1: PUSH EAX
// 004fcff2: PUSH EDX
// 004fcff3: PUSH 0x630399
//   XREF to: 00630399 (DATA)
// 004fcff8: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004fcffc: PUSH EDX
// 004fcffd: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004fd002: ADD ESP,0x14
// 004fd005: CMP EAX,0x3
// 004fd008: SETZ AL
// 004fd00b: AND EAX,0xff
// 004fd010: RET
