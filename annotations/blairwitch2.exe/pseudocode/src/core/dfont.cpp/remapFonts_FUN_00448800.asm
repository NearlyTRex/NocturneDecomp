; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfont_cpp_remapFonts_FUN_00448800(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01511cb8
;
; Called Functions:
;   engine_font.cpp_CBitFont_remapPalette_FUN_004ab630
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01511cb8]      ; 00448800 | DAT_01511cb8
        ;   Label: core_dfont.cpp_remapFonts_FUN_00448800
    PUSH EDX                            ; 00448806
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004ab630 ; 00448807
        ;   XREF to: 004ab630 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_remapPalette_FUN_004ab630(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044880c
    RET                                 ; 0044880f

