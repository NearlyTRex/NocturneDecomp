; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0(CPackedBitmapSet * this_ptr, char * act_filename)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   act_filename
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710 at 0054c719
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 0054c5d0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
    MOV EAX,ESP                         ; 0054c5d6
    PUSH EAX                            ; 0054c5d8
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0054c5d9
    PUSH EDX                            ; 0054c5e0
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30 ; 0054c5e1
        ;   XREF to: 00431a30 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30(char * filename, char * output_palette)
    ADD ESP,0x8                         ; 0054c5e6
    MOV EAX,ESP                         ; 0054c5e9
    PUSH EAX                            ; 0054c5eb
    MOV ECX,dword ptr [ESP + 0x108]     ; 0054c5ec
    PUSH ECX                            ; 0054c5f3
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620 ; 0054c5f4
        ;   XREF to: 0054c620 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620(CPackedBitmapSet * this_ptr, char * palette_data)
    ADD ESP,0x8                         ; 0054c5f9
    ADD ESP,0x100                       ; 0054c5fc
    LEA EAX,[EAX]                       ; 0054c602
    LEA EDX,[EDX]                       ; 0054c608
    MOV EAX,EAX                         ; 0054c60e
    RET                                 ; 0054c610

