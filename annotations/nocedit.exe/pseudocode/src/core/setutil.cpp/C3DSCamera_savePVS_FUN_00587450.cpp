// Name: core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450
// Address: 00587450
// Address Range: [[00587450, 005874c7]]
// Convention: __cdecl
// Signature: int core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera * this_ptr, FILE * file_handle)
// Cross-references:
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a7fe [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_0_00649955
//   TerminatedCString s_d_00649958
//   TerminatedCString s_d_0064995c
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera *this_ptr,FILE *file_handle)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (this_ptr->is_panning != 0) {
    iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"0\n");
    return iVar2;
  }
  iVar3 = 0;
  iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n",this_ptr->pvs_count);
  if (0 < this_ptr->pvs_count) {
    iVar4 = 0;
    do {
      puVar1 = (undefined4 *)(iVar4 + (int)this_ptr->pvs_list);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"\t%d\n",*puVar1);
    } while (iVar3 < this_ptr->pvs_count);
  }
  return iVar2;
}


// Assembly code:
// 00587450: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450
// 00587451: PUSH ESI
// 00587452: PUSH EDI
// 00587453: PUSH EBP
// 00587454: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00587458: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0058745c: CMP dword ptr [EDI + 0x140],0x0
// 00587463: JNZ 0x005874b5
//   XREF to: 005874b5 (CONDITIONAL_JUMP)
// 00587465: MOV ECX,dword ptr [EDI + 0x194]
// 0058746b: PUSH ECX
// 0058746c: PUSH 0x649958
//   XREF to: 00649958 (DATA)
// 00587471: PUSH EBP
// 00587472: XOR EBX,EBX
// 00587474: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587479: MOV ESI,dword ptr [EDI + 0x194]
// 0058747f: ADD ESP,0xc
// 00587482: TEST ESI,ESI
// 00587484: JLE 0x005874b0
//   XREF to: 005874b0 (CONDITIONAL_JUMP)
// 00587486: XOR ESI,ESI
// 00587488: MOV EAX,dword ptr [EDI + 0x198]
//   Label: LAB_00587488
// 0058748e: MOV EDX,dword ptr [ESI + EAX*0x1]
// 00587491: PUSH EDX
// 00587492: PUSH 0x64995c
//   XREF to: 0064995c (DATA)
// 00587497: PUSH EBP
// 00587498: ADD ESI,0x4
// 0058749b: INC EBX
// 0058749c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005874a1: MOV ECX,dword ptr [EDI + 0x194]
// 005874a7: ADD ESP,0xc
// 005874aa: CMP EBX,ECX
// 005874ac: JL 0x00587488
//   XREF to: 00587488 (CONDITIONAL_JUMP)
// 005874ae: MOV EAX,EAX
// 005874b0: POP EBP
//   Label: LAB_005874b0
// 005874b1: POP EDI
// 005874b2: POP ESI
// 005874b3: POP EBX
// 005874b4: RET
// 005874b5: PUSH 0x649955
//   Label: LAB_005874b5
//   XREF to: 00649955 (DATA)
// 005874ba: PUSH EBP
// 005874bb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005874c0: ADD ESP,0x8
// 005874c3: POP EBP
// 005874c4: POP EDI
// 005874c5: POP ESI
// 005874c6: POP EBX
// 005874c7: RET
