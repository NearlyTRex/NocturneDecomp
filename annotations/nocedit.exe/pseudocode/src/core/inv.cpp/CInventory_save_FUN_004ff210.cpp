// Name: core_inv.cpp_CInventory_save_FUN_004ff210
// Address: 004ff210
// Address Range: [[004ff210, 004ff3a8]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_save_FUN_004ff210(CInventory * this_ptr, FILE * file_handle)
// Cross-references:
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f2859 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_fileVersion_00630898
//   TerminatedCString s_s_d_006308aa
//   TerminatedCString s_s_itemCount_006308b0
//   TerminatedCString s_s_d_006308c0
//   char* g_PropertyNamePrefix = 00000000
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_0040aee0
//   core_actor.cpp_CDemonActor_save_FUN_0040af30
//   core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_save_FUN_004ff210(CInventory *this_ptr,FILE *file_handle)

{
  int iVar1;
  int extraout_EAX;
  CInventory *pCVar2;
  int iVar3;
  
  iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s{ // Inventory\n",&g_PropertyNamePrefix)
  ;
  core_actor_cpp_CDemonActor_FUN_0040aee0(iVar1);
  this_ptr->save_version = 2;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// fileVersion\n",&g_PropertyNamePrefix);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%s%d\n",&g_PropertyNamePrefix,this_ptr->save_version);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// itemCount\n",&g_PropertyNamePrefix);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%s%d\n",&g_PropertyNamePrefix,this_ptr->item_count);
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      if (this_ptr->selected_weapon == (CWeapon *)pCVar2->items[0]) break;
      iVar1 = iVar1 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar1 < this_ptr->item_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// currentWeapon\n",this_ptr);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n",file_handle);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// battery strength\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// actor name list\n");
  core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(this_ptr,file_handle);
  iVar3 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// actor data list\n");
  iVar1 = this_ptr->item_count;
  pCVar2 = this_ptr;
  if (0 < iVar1) {
    do {
      iVar3 = iVar3 + 1;
      core_actor_cpp_CDemonActor_save_FUN_0040af30(pCVar2->items[0],file_handle);
      iVar1 = extraout_EAX;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  core_actor_cpp_CDemonActor_FUN_0040aee0(iVar1);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s} // End inventory\n");
  return;
}


// Assembly code:
// 004ff210: PUSH EBX
//   Label: core_inv.cpp_CInventory_save_FUN_004ff210
// 004ff211: PUSH ESI
// 004ff212: PUSH EDI
// 004ff213: PUSH EBP
// 004ff214: SUB ESP,0x8
// 004ff217: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004ff21b: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004ff21f: MOV EDX,0x66e178
//   XREF to: 0066e178 (PARAM)
// 004ff224: PUSH EDX
//   XREF to: 0066e178 (DATA)
// 004ff225: PUSH 0x630886
//   XREF to: 00630886 (DATA)
// 004ff22a: PUSH EBP
// 004ff22b: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 0066e178 (DATA)
// 004ff22f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff234: ADD ESP,0xc
// 004ff237: PUSH 0x1
// 004ff239: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 004ff23e: ADD ESP,0x4
// 004ff241: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 004ff246: PUSH 0x630898
//   XREF to: 00630898 (DATA)
// 004ff24b: PUSH EBP
// 004ff24c: MOV dword ptr [EBX + 0x32c],0x2
// 004ff256: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff25b: ADD ESP,0xc
// 004ff25e: MOV ECX,dword ptr [EBX + 0x32c]
// 004ff264: PUSH ECX
// 004ff265: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 004ff26a: PUSH 0x6308aa
//   XREF to: 006308aa (DATA)
// 004ff26f: PUSH EBP
// 004ff270: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff275: ADD ESP,0x10
// 004ff278: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 004ff27d: PUSH 0x6308b0
//   XREF to: 006308b0 (DATA)
// 004ff282: PUSH EBP
// 004ff283: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff288: ADD ESP,0xc
// 004ff28b: MOV ESI,dword ptr [EBX + 0x8]
// 004ff28e: PUSH ESI
// 004ff28f: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 004ff294: PUSH 0x6308c0
//   XREF to: 006308c0 (DATA)
// 004ff299: PUSH EBP
// 004ff29a: MOV EDI,0xffffffff
// 004ff29f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff2a4: ADD ESP,0x10
// 004ff2a7: MOV EDX,dword ptr [EBX + 0x8]
// 004ff2aa: XOR EAX,EAX
// 004ff2ac: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x18] (DATA)
// 004ff2af: TEST EDX,EDX
// 004ff2b1: JLE 0x004ff2c7
//   XREF to: 004ff2c7 (CONDITIONAL_JUMP)
// 004ff2b3: MOV ESI,EBX
// 004ff2b5: MOV EDX,dword ptr [EBX + 0x330]
//   Label: LAB_004ff2b5
// 004ff2bb: CMP EDX,dword ptr [ESI + 0xc]
// 004ff2be: JNZ 0x004ff395
//   XREF to: 004ff395 (CONDITIONAL_JUMP)
// 004ff2c4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004ff2c7: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_004ff2c7
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 0066e178 (PARAM)
// 004ff2cb: PUSH ECX
//   XREF to: 0066e178 (DATA)
// 004ff2cc: PUSH 0x6308c6
//   XREF to: 006308c6 (DATA)
// 004ff2d1: PUSH EBP
// 004ff2d2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff2d7: ADD ESP,0xc
// 004ff2da: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004ff2dd: PUSH ESI
// 004ff2de: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004ff2e2: PUSH EDI
//   XREF to: 0066e178 (DATA)
// 004ff2e3: PUSH 0x6308da
//   XREF to: 006308da (DATA)
// 004ff2e8: PUSH EBP
// 004ff2e9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff2ee: ADD ESP,0x10
// 004ff2f1: PUSH EDI
//   XREF to: 0066e178 (DATA)
// 004ff2f2: PUSH 0x6308e0
//   XREF to: 006308e0 (DATA)
// 004ff2f7: PUSH EBP
// 004ff2f8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff2fd: ADD ESP,0xc
// 004ff300: SUB ESP,0x8
// 004ff303: FLD float ptr [EBX]
// 004ff305: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ff308: PUSH EDI
//   XREF to: 0066e178 (DATA)
// 004ff309: PUSH 0x6308f7
//   XREF to: 006308f7 (DATA)
// 004ff30e: PUSH EBP
// 004ff30f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff314: ADD ESP,0x14
// 004ff317: PUSH EDI
//   XREF to: 0066e178 (DATA)
// 004ff318: PUSH 0x6308fd
//   XREF to: 006308fd (DATA)
// 004ff31d: PUSH EBP
// 004ff31e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff323: ADD ESP,0xc
// 004ff326: PUSH EBP
// 004ff327: PUSH EBX
// 004ff328: CALL core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
//   XREF to: 004ff3b0 (UNCONDITIONAL_CALL)
// 004ff32d: ADD ESP,0x8
// 004ff330: PUSH EDI
//   XREF to: 0066e178 (DATA)
// 004ff331: PUSH 0x630913
//   XREF to: 00630913 (DATA)
// 004ff336: PUSH EBP
// 004ff337: XOR EDI,EDI
// 004ff339: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff33e: MOV EAX,dword ptr [EBX + 0x8]
// 004ff341: ADD ESP,0xc
// 004ff344: TEST EAX,EAX
// 004ff346: JLE 0x004ff370
//   XREF to: 004ff370 (CONDITIONAL_JUMP)
// 004ff348: MOV ESI,EBX
// 004ff34a: PUSH EBP
//   Label: LAB_004ff34a
// 004ff34b: MOV EDX,dword ptr [ESI + 0xc]
// 004ff34e: PUSH EDX
// 004ff34f: ADD ESI,0x4
// 004ff352: INC EDI
// 004ff353: CALL core_actor.cpp_CDemonActor_save_FUN_0040af30
//   XREF to: 0040af30 (UNCONDITIONAL_CALL)
// 004ff358: MOV ECX,dword ptr [EBX + 0x8]
// 004ff35b: ADD ESP,0x8
// 004ff35e: CMP EDI,ECX
// 004ff360: JL 0x004ff34a
//   XREF to: 004ff34a (CONDITIONAL_JUMP)
// 004ff362: LEA EAX,[EAX]
// 004ff368: LEA EDX,[EDX]
// 004ff36e: MOV EAX,EAX
// 004ff370: PUSH -0x1
//   Label: LAB_004ff370
// 004ff372: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 004ff377: ADD ESP,0x4
// 004ff37a: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 0066e178 (PARAM)
// 004ff37e: PUSH EBX
//   XREF to: 0066e178 (DATA)
// 004ff37f: PUSH 0x630929
//   XREF to: 00630929 (DATA)
// 004ff384: PUSH EBP
// 004ff385: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff38a: ADD ESP,0xc
// 004ff38d: ADD ESP,0x8
// 004ff390: POP EBP
// 004ff391: POP EDI
// 004ff392: POP ESI
// 004ff393: POP EBX
// 004ff394: RET
// 004ff395: INC EAX
//   Label: LAB_004ff395
// 004ff396: MOV ECX,dword ptr [EBX + 0x8]
// 004ff399: ADD ESI,0x4
// 004ff39c: CMP EAX,ECX
// 004ff39e: JL 0x004ff2b5
//   XREF to: 004ff2b5 (CONDITIONAL_JUMP)
// 004ff3a4: JMP 0x004ff2c7
//   XREF to: 004ff2c7 (UNCONDITIONAL_JUMP)
