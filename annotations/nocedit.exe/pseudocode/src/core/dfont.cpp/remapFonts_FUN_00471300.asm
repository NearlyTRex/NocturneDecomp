; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dfont.cpp_remapFonts_FUN_00471300(void)
;
;
; Referenced Globals:
;   CBitFont* g_MediumFont
;
; Called Functions:
;   engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x020a5718]      ; 00471300 | CBitFont * g_MediumFont
        ;   Label: core_dfont.cpp_remapFonts_FUN_00471300
    PUSH EDX                            ; 00471306
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0 ; 00471307 | void engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont * this_ptr)
        ;   XREF to: 004d02a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0047130c
    RET                                 ; 0047130f

