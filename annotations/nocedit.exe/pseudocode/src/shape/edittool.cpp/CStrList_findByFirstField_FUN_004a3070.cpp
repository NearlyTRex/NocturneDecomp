// Name: shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
// Address: 004a3070
// Address Range: [[004a3070, 004a3116]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070(CStrList * this_ptr, char * search_field)
// Cross-references:
//   core_msnedit.cpp_FUN_0053c730 (0053c730) at 0053c82f [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563ae5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070(CStrList *this_ptr,char *search_field)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  int index;
  char acStack_198 [196];
  char local_d4 [4];
  char acStack_d0 [196];
  
  pcVar4 = local_d4;
  cVar1 = *search_field;
  while ((cVar1 != '\0' && (*search_field != '\t'))) {
    cVar1 = *search_field;
    search_field = search_field + 1;
    *pcVar4 = cVar1;
    cVar1 = *search_field;
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = '\0';
  index = 0;
  if (0 < this_ptr->item_count) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
      pcVar4 = acStack_198;
      cVar1 = *pcVar2;
      while ((cVar1 != '\0' && (*pcVar2 != '\t'))) {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcVar4 = cVar1;
        cVar1 = *pcVar2;
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = '\0';
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_198,acStack_d0);
      if (iVar3 == 0) {
        return index;
      }
      index = index + 1;
    } while (index < this_ptr->item_count);
  }
  return -1;
}


// Assembly code:
// 004a3070: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
// 004a3071: PUSH ESI
// 004a3072: PUSH EDI
// 004a3073: SUB ESP,0x190
// 004a3079: MOV EDI,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[0x4] (READ)
// 004a3080: MOV ECX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[0x8] (READ)
// 004a3087: LEA EDX,[ESP + 0xc8]
//   XREF to: Stack[-0xd4] (DATA)
// 004a308e: MOV BL,byte ptr [ECX]
// 004a3090: MOV EAX,ECX
// 004a3092: TEST BL,BL
// 004a3094: JZ 0x004a309b
//   XREF to: 004a309b (CONDITIONAL_JUMP)
// 004a3096: CMP byte ptr [EAX],0x9
//   Label: LAB_004a3096
// 004a3099: JNZ 0x004a30ef
//   XREF to: 004a30ef (CONDITIONAL_JUMP)
// 004a309b: MOV byte ptr [EDX],0x0
//   Label: LAB_004a309b
//   XREF to: Stack[-0xd4] (DATA)
// 004a309e: MOV EDX,dword ptr [EDI]
// 004a30a0: XOR ESI,ESI
// 004a30a2: TEST EDX,EDX
// 004a30a4: JLE 0x004a30e0
//   XREF to: 004a30e0 (CONDITIONAL_JUMP)
// 004a30a6: PUSH ESI
//   Label: LAB_004a30a6
// 004a30a7: PUSH EDI
// 004a30a8: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a30ad: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0x19c] (DATA)
// 004a30b1: MOV BL,byte ptr [EAX]
// 004a30b3: ADD ESP,0x8
// 004a30b6: TEST BL,BL
// 004a30b8: JZ 0x004a30bf
//   XREF to: 004a30bf (CONDITIONAL_JUMP)
// 004a30ba: CMP byte ptr [EAX],0x9
//   Label: LAB_004a30ba
// 004a30bd: JNZ 0x004a30fd
//   XREF to: 004a30fd (CONDITIONAL_JUMP)
// 004a30bf: MOV byte ptr [EDX],0x0
//   Label: LAB_004a30bf
//   XREF to: Stack[-0x19c] (DATA)
// 004a30c2: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0xd4] (DATA)
// 004a30c9: PUSH EAX
// 004a30ca: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x19c] (DATA)
// 004a30ce: PUSH EAX
// 004a30cf: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004a30d4: ADD ESP,0x8
// 004a30d7: TEST EAX,EAX
// 004a30d9: JZ 0x004a310b
//   XREF to: 004a310b (CONDITIONAL_JUMP)
// 004a30db: INC ESI
// 004a30dc: CMP ESI,dword ptr [EDI]
// 004a30de: JL 0x004a30a6
//   XREF to: 004a30a6 (CONDITIONAL_JUMP)
// 004a30e0: MOV EAX,0xffffffff
//   Label: LAB_004a30e0
// 004a30e5: ADD ESP,0x190
// 004a30eb: POP EDI
// 004a30ec: POP ESI
// 004a30ed: POP EBX
// 004a30ee: RET
// 004a30ef: MOV BL,byte ptr [EAX]
//   Label: LAB_004a30ef
// 004a30f1: INC EAX
// 004a30f2: MOV byte ptr [EDX],BL
//   XREF to: Stack[-0xd4] (DATA)
// 004a30f4: MOV BH,byte ptr [EAX]
// 004a30f6: INC EDX
// 004a30f7: TEST BH,BH
// 004a30f9: JNZ 0x004a3096
//   XREF to: 004a3096 (CONDITIONAL_JUMP)
// 004a30fb: JMP 0x004a309b
//   XREF to: 004a309b (UNCONDITIONAL_JUMP)
// 004a30fd: MOV BL,byte ptr [EAX]
//   Label: LAB_004a30fd
// 004a30ff: INC EAX
// 004a3100: MOV byte ptr [EDX],BL
//   XREF to: Stack[-0x19c] (DATA)
// 004a3102: MOV BH,byte ptr [EAX]
// 004a3104: INC EDX
// 004a3105: TEST BH,BH
// 004a3107: JNZ 0x004a30ba
//   XREF to: 004a30ba (CONDITIONAL_JUMP)
// 004a3109: JMP 0x004a30bf
//   XREF to: 004a30bf (UNCONDITIONAL_JUMP)
// 004a310b: MOV EAX,ESI
//   Label: LAB_004a310b
// 004a310d: ADD ESP,0x190
// 004a3113: POP EDI
// 004a3114: POP ESI
// 004a3115: POP EBX
// 004a3116: RET
