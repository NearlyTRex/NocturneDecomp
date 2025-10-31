// Name: cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
// Address: 0054bb40
// Address Range: [[0054bb40, 0054bc98]]
// Convention: __cdecl
// Signature: int cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40(CPackedBitmapSet * bitmap_set, char * pbg_filename, char * palette_filename, int param3, int param4, int selected_bitmap_index)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 (0054c480) at 0054c4a7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_0063f34c
//   TerminatedCString s_art_0063f34f
//   TerminatedCString s_Unable_to_open_PBG_file__0063f353
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f36e
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f386
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
//   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
//   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
//   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

int __cdecl
cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40
          (CPackedBitmapSet *bitmap_set,char *pbg_filename,char *palette_filename,int param3,
          int param4,int selected_bitmap_index)

{
  FILE *file_handle;
  CPackedBitmap *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CPackedBitmapSet *this_ptr_00;
  int unaff_retaddr;
  char *in_stack_0000001c;
  int in_stack_00000020;
  uchar auStack_160 [236];
  char acStack_74 [4];
  char acStack_70 [96];
  
  file_handle = engine_dosio_c_getFile_FUN_00481a50("art",pbg_filename,"rb");
  if (file_handle == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_74,"Unable to open PBG file %s",palette_filename);
    g_CurrentLineNumber = 0x595;
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_70);
  }
  this_ptr = cockpit_pkbitmap_cpp_parsePBGFile_FUN_0054b9b0
                       (bitmap_set,file_handle,(int)in_stack_0000001c,in_stack_00000020,
                        selected_bitmap_index);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\cockpit\\pkbitmap.cpp",0x59a);
  iVar1 = 0;
  if (0 < bitmap_set->bitmap_count) {
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(this_ptr,in_stack_0000001c);
      this_ptr = this_ptr + 1;
    } while (iVar1 < bitmap_set->bitmap_count);
  }
  if (in_stack_00000020 != 0) {
    iVar1 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(in_stack_0000001c,&stack0xfffffe9c);
    this_ptr_00 = bitmap_set;
    if (0 < bitmap_set->bitmap_count) {
      do {
        while ((-1 < selected_bitmap_index && (iVar1 != selected_bitmap_index))) {
          iVar1 = iVar1 + 1;
          this_ptr_00 = (CPackedBitmapSet *)&this_ptr_00->config_param;
          if (bitmap_set->bitmap_count <= iVar1) {
            return unaff_retaddr;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
                  ((CPackedBitmap *)this_ptr_00,auStack_160);
        iVar1 = iVar1 + 1;
        this_ptr_00 = (CPackedBitmapSet *)&this_ptr_00->config_param;
      } while (iVar1 < bitmap_set->bitmap_count);
    }
  }
  return unaff_retaddr;
}


// Assembly code:
// 0054bb40: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40
// 0054bb41: PUSH ESI
// 0054bb42: PUSH EDI
// 0054bb43: PUSH EBP
// 0054bb44: SUB ESP,0x168
// 0054bb4a: MOV EDI,dword ptr [ESP + 0x17c]
//   XREF to: Stack[0x4] (READ)
// 0054bb51: MOV EBP,dword ptr [ESP + 0x190]
//   XREF to: Stack[0x18] (READ)
// 0054bb58: PUSH 0x63f34c
//   XREF to: 0063f34c (DATA)
// 0054bb5d: MOV EDX,dword ptr [ESP + 0x184]
//   XREF to: Stack[0x8] (READ)
// 0054bb64: PUSH EDX
// 0054bb65: PUSH 0x63f34f
//   XREF to: 0063f34f (DATA)
// 0054bb6a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0054bb6f: ADD ESP,0xc
// 0054bb72: MOV EBX,EAX
// 0054bb74: TEST EAX,EAX
// 0054bb76: JZ 0x0054bbfc
//   XREF to: 0054bbfc (CONDITIONAL_JUMP)
// 0054bb7c: PUSH EBP
//   Label: LAB_0054bb7c
// 0054bb7d: MOV EDX,dword ptr [ESP + 0x190]
//   XREF to: Stack[0x14] (READ)
// 0054bb84: PUSH EDX
// 0054bb85: MOV ECX,dword ptr [ESP + 0x190]
//   XREF to: Stack[0x10] (READ)
// 0054bb8c: PUSH ECX
// 0054bb8d: PUSH EBX
// 0054bb8e: PUSH EDI
// 0054bb8f: CALL cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0
//   XREF to: 0054b9b0 (UNCONDITIONAL_CALL)
// 0054bb94: ADD ESP,0x14
// 0054bb97: PUSH 0x59a
// 0054bb9c: PUSH 0x63f386
//   XREF to: 0063f386 (DATA)
// 0054bba1: PUSH EBX
// 0054bba2: MOV ESI,EAX
// 0054bba4: MOV dword ptr [ESP + 0x170],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054bbab: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0054bbb0: ADD ESP,0xc
// 0054bbb3: MOV EAX,dword ptr [EDI]
// 0054bbb5: XOR EBX,EBX
// 0054bbb7: TEST EAX,EAX
// 0054bbb9: JLE 0x0054bbe0
//   XREF to: 0054bbe0 (CONDITIONAL_JUMP)
// 0054bbbb: MOV EDX,dword ptr [ESP + 0x180]
//   Label: LAB_0054bbbb
//   XREF to: Stack[0x8] (READ)
// 0054bbc2: PUSH EDX
// 0054bbc3: PUSH ESI
// 0054bbc4: INC EBX
// 0054bbc5: CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
//   XREF to: 0054a990 (UNCONDITIONAL_CALL)
// 0054bbca: ADD ESP,0x8
// 0054bbcd: MOV ECX,dword ptr [EDI]
// 0054bbcf: ADD ESI,0x24
// 0054bbd2: CMP EBX,ECX
// 0054bbd4: JL 0x0054bbbb
//   XREF to: 0054bbbb (CONDITIONAL_JUMP)
// 0054bbd6: LEA EAX,[EAX]
// 0054bbdc: LEA EDX,[EDX]
// 0054bbe0: CMP dword ptr [ESP + 0x184],0x0
//   Label: LAB_0054bbe0
//   XREF to: Stack[0xc] (READ)
// 0054bbe8: JNZ 0x0054bc43
//   XREF to: 0054bc43 (CONDITIONAL_JUMP)
// 0054bbea: MOV EAX,dword ptr [ESP + 0x164]
//   Label: LAB_0054bbea
//   XREF to: Stack[-0x14] (READ)
// 0054bbf1: ADD ESP,0x168
// 0054bbf7: POP EBP
// 0054bbf8: POP EDI
// 0054bbf9: POP ESI
// 0054bbfa: POP EBX
// 0054bbfb: RET
// 0054bbfc: MOV ECX,dword ptr [ESP + 0x180]
//   Label: LAB_0054bbfc
//   XREF to: Stack[0x8] (READ)
// 0054bc03: PUSH ECX
// 0054bc04: PUSH 0x63f353
//   XREF to: 0063f353 (DATA)
// 0054bc09: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x78] (DATA)
// 0054bc10: PUSH EAX
// 0054bc11: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054bc16: MOV EAX,0x595
// 0054bc1b: ADD ESP,0xc
// 0054bc1e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0054bc23: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x78] (DATA)
// 0054bc2a: MOV ESI,0x63f36e
//   XREF to: 0063f36e (DATA)
// 0054bc2f: PUSH EAX
// 0054bc30: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0054bc36: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054bc3b: ADD ESP,0x4
// 0054bc3e: JMP 0x0054bb7c
//   XREF to: 0054bb7c (UNCONDITIONAL_JUMP)
// 0054bc43: MOV EAX,ESP
//   Label: LAB_0054bc43
// 0054bc45: PUSH EAX
// 0054bc46: MOV ESI,dword ptr [ESP + 0x184]
//   XREF to: Stack[0x8] (READ)
// 0054bc4d: PUSH ESI
// 0054bc4e: XOR EBX,EBX
// 0054bc50: CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
//   XREF to: 00431a30 (UNCONDITIONAL_CALL)
// 0054bc55: MOV EAX,dword ptr [EDI]
// 0054bc57: ADD ESP,0x8
// 0054bc5a: TEST EAX,EAX
// 0054bc5c: JLE 0x0054bbea
//   XREF to: 0054bbea (CONDITIONAL_JUMP)
// 0054bc5e: MOV ESI,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x14] (READ)
// 0054bc65: TEST EBP,EBP
//   Label: LAB_0054bc65
// 0054bc67: JL 0x0054bc7d
//   XREF to: 0054bc7d (CONDITIONAL_JUMP)
// 0054bc69: CMP EBX,EBP
// 0054bc6b: JZ 0x0054bc7d
//   XREF to: 0054bc7d (CONDITIONAL_JUMP)
// 0054bc6d: INC EBX
// 0054bc6e: MOV EDX,dword ptr [EDI]
// 0054bc70: ADD ESI,0x24
// 0054bc73: CMP EBX,EDX
// 0054bc75: JGE 0x0054bbea
//   XREF to: 0054bbea (CONDITIONAL_JUMP)
// 0054bc7b: JMP 0x0054bc65
//   XREF to: 0054bc65 (UNCONDITIONAL_JUMP)
// 0054bc7d: MOV EAX,ESP
//   Label: LAB_0054bc7d
// 0054bc7f: PUSH EAX
// 0054bc80: PUSH ESI
// 0054bc81: CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
//   XREF to: 0054b440 (UNCONDITIONAL_CALL)
// 0054bc86: ADD ESP,0x8
// 0054bc89: INC EBX
// 0054bc8a: MOV EDX,dword ptr [EDI]
// 0054bc8c: ADD ESI,0x24
// 0054bc8f: CMP EBX,EDX
// 0054bc91: JGE 0x0054bbea
//   XREF to: 0054bbea (CONDITIONAL_JUMP)
// 0054bc97: JMP 0x0054bc65
//   XREF to: 0054bc65 (UNCONDITIONAL_JUMP)
