// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
// Address: 0054c500
// Address Range: [[0054c500, 0054c5c9]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500(CPackedBitmapSet * this_ptr, char * filename, int bitmap_index)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e (0054c72e) at 0054c788 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_raw_0063f74c
//   TerminatedCString s_pbg_0063f751
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
          (CPackedBitmapSet *this_ptr,char *filename,int bitmap_index)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *pcVar3;
  
  if (this_ptr->filename[0] == '\0') {
    if (-1 < bitmap_index) {
      cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
                (this_ptr->bitmap_array + bitmap_index,(int)filename);
      return;
    }
    iVar1 = 0;
    if (0 < this_ptr->bitmap_count) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),(int)filename);
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < this_ptr->bitmap_count);
    }
  }
  else {
    pcVar3 = this_ptr->filename;
    do {
      str1 = pcVar3;
      if (*pcVar3 == '.') goto LAB_0054c582;
      if (*pcVar3 == '\0') break;
      str1 = pcVar3 + 1;
      if (*str1 == '.') goto LAB_0054c582;
      pcVar3 = pcVar3 + 2;
    } while (*str1 != '\0');
    str1 = (char *)0x0;
LAB_0054c582:
    if (str1 != (char *)0x0) {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,".raw");
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0(this_ptr);
        return;
      }
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,".pbg");
      if (iVar1 == 0) {
        cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0(this_ptr,filename);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 0054c500: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
// 0054c501: PUSH ESI
// 0054c502: PUSH EDI
// 0054c503: PUSH EBP
// 0054c504: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054c508: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054c50c: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0054c510: CMP byte ptr [EDI + 0x8],0x0
// 0054c514: JNZ 0x0054c565
//   XREF to: 0054c565 (CONDITIONAL_JUMP)
// 0054c516: TEST EBX,EBX
// 0054c518: JGE 0x0054c545
//   XREF to: 0054c545 (CONDITIONAL_JUMP)
// 0054c51a: MOV EDX,dword ptr [EDI]
// 0054c51c: XOR EBX,EBX
// 0054c51e: TEST EDX,EDX
// 0054c520: JLE 0x0054c540
//   XREF to: 0054c540 (CONDITIONAL_JUMP)
// 0054c522: XOR ESI,ESI
// 0054c524: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_0054c524
// 0054c527: PUSH EBP
// 0054c528: ADD EAX,ESI
// 0054c52a: PUSH EAX
// 0054c52b: INC EBX
// 0054c52c: CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
//   XREF to: 0054b4b0 (UNCONDITIONAL_CALL)
// 0054c531: ADD ESI,0x24
// 0054c534: MOV ECX,dword ptr [EDI]
// 0054c536: ADD ESP,0x8
// 0054c539: CMP EBX,ECX
// 0054c53b: JL 0x0054c524
//   XREF to: 0054c524 (CONDITIONAL_JUMP)
// 0054c53d: LEA EAX,[EAX]
// 0054c540: POP EBP
//   Label: LAB_0054c540
// 0054c541: POP EDI
// 0054c542: POP ESI
// 0054c543: POP EBX
// 0054c544: RET
// 0054c545: LEA EAX,[EBX*0x8 + 0x0]
//   Label: LAB_0054c545
// 0054c54c: ADD EBX,EAX
// 0054c54e: SHL EBX,0x2
// 0054c551: MOV EAX,dword ptr [EDI + 0x4]
// 0054c554: PUSH EBP
// 0054c555: ADD EAX,EBX
// 0054c557: PUSH EAX
// 0054c558: CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
//   XREF to: 0054b4b0 (UNCONDITIONAL_CALL)
// 0054c55d: ADD ESP,0x8
// 0054c560: POP EBP
// 0054c561: POP EDI
// 0054c562: POP ESI
// 0054c563: POP EBX
// 0054c564: RET
// 0054c565: MOV DL,0x2e
//   Label: LAB_0054c565
// 0054c567: LEA ESI,[EDI + 0x8]
// 0054c56a: MOV AL,byte ptr [ESI]
//   Label: LAB_0054c56a
// 0054c56c: CMP AL,DL
// 0054c56e: JZ 0x0054c582
//   XREF to: 0054c582 (CONDITIONAL_JUMP)
// 0054c570: CMP AL,0x0
// 0054c572: JZ 0x0054c580
//   XREF to: 0054c580 (CONDITIONAL_JUMP)
// 0054c574: INC ESI
// 0054c575: MOV AL,byte ptr [ESI]
// 0054c577: CMP AL,DL
// 0054c579: JZ 0x0054c582
//   XREF to: 0054c582 (CONDITIONAL_JUMP)
// 0054c57b: INC ESI
// 0054c57c: CMP AL,0x0
// 0054c57e: JNZ 0x0054c56a
//   XREF to: 0054c56a (CONDITIONAL_JUMP)
// 0054c580: SUB ESI,ESI
//   Label: LAB_0054c580
// 0054c582: TEST ESI,ESI
//   Label: LAB_0054c582
// 0054c584: JZ 0x0054c540
//   XREF to: 0054c540 (CONDITIONAL_JUMP)
// 0054c586: PUSH 0x63f74c
//   XREF to: 0063f74c (DATA)
// 0054c58b: PUSH ESI
// 0054c58c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0054c591: ADD ESP,0x8
// 0054c594: TEST EAX,EAX
// 0054c596: JZ 0x0054c5ba
//   XREF to: 0054c5ba (CONDITIONAL_JUMP)
// 0054c598: PUSH 0x63f751
//   XREF to: 0063f751 (DATA)
// 0054c59d: PUSH ESI
// 0054c59e: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0054c5a3: ADD ESP,0x8
// 0054c5a6: TEST EAX,EAX
// 0054c5a8: JNZ 0x0054c540
//   XREF to: 0054c540 (CONDITIONAL_JUMP)
// 0054c5aa: PUSH EBX
// 0054c5ab: PUSH EBP
// 0054c5ac: PUSH EDI
// 0054c5ad: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
//   XREF to: 0054c4d0 (UNCONDITIONAL_CALL)
// 0054c5b2: ADD ESP,0xc
// 0054c5b5: POP EBP
// 0054c5b6: POP EDI
// 0054c5b7: POP ESI
// 0054c5b8: POP EBX
// 0054c5b9: RET
// 0054c5ba: PUSH EBX
//   Label: LAB_0054c5ba
// 0054c5bb: PUSH EBP
// 0054c5bc: PUSH EDI
// 0054c5bd: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0
//   XREF to: 0054c1e0 (UNCONDITIONAL_CALL)
// 0054c5c2: ADD ESP,0xc
// 0054c5c5: POP EBP
// 0054c5c6: POP EDI
// 0054c5c7: POP ESI
// 0054c5c8: POP EBX
// 0054c5c9: RET
