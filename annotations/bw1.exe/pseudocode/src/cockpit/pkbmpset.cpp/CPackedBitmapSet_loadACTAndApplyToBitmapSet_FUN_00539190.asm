; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00539190(CPackedBitmapSet *this_ptr,char *act_filename)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   act_filename
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_005392d0 at 005392d9
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_005391e0
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00539190
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00539190
    MOV EAX,ESP                         ; 00539196
    PUSH EAX                            ; 00539198
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00539199
    PUSH EDX                            ; 005391a0
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400 ; 005391a1
        ;   XREF to: 00437400 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00437400(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 005391a6
    MOV EAX,ESP                         ; 005391a9
    PUSH EAX                            ; 005391ab
    MOV ECX,dword ptr [ESP + 0x108]     ; 005391ac
    PUSH ECX                            ; 005391b3
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_005391e0 ; 005391b4
        ;   XREF to: 005391e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_005391e0(CPackedBitmapSet * this_ptr, char * palette_data)
    ADD ESP,0x8                         ; 005391b9
    ADD ESP,0x100                       ; 005391bc
    LEA EAX,[EAX]                       ; 005391c2
    LEA EDX,[EDX]                       ; 005391c8
    MOV EAX,EAX                         ; 005391ce
    RET                                 ; 005391d0

