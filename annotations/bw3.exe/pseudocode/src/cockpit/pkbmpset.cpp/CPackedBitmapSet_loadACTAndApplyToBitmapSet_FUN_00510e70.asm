; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00510e70(CPackedBitmapSet *this_ptr,char *act_filename)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   act_filename
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00510fb0 at 00510fb9
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00510ec0
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00510e70
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00510e70
    MOV EAX,ESP                         ; 00510e76
    PUSH EAX                            ; 00510e78
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00510e79
    PUSH EDX                            ; 00510e80
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010 ; 00510e81
        ;   XREF to: 00435010 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010(char * filename, uchar * output_palette)
    ADD ESP,0x8                         ; 00510e86
    MOV EAX,ESP                         ; 00510e89
    PUSH EAX                            ; 00510e8b
    MOV ECX,dword ptr [ESP + 0x108]     ; 00510e8c
    PUSH ECX                            ; 00510e93
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00510ec0 ; 00510e94
        ;   XREF to: 00510ec0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00510ec0(CPackedBitmapSet * this_ptr, char * palette_data)
    ADD ESP,0x8                         ; 00510e99
    ADD ESP,0x100                       ; 00510e9c
    LEA EAX,[EAX]                       ; 00510ea2
    LEA EDX,[EDX]                       ; 00510ea8
    MOV EAX,EAX                         ; 00510eae
    RET                                 ; 00510eb0

