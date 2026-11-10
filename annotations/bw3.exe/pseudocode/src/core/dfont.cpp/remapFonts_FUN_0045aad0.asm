; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfont_cpp_remapFonts_FUN_0045aad0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01549aa0
;
; Called Functions:
;   engine_font.cpp_CBitFont_remapPalette_FUN_004b31c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01549aa0]      ; 0045aad0 | DAT_01549aa0
        ;   Label: core_dfont.cpp_remapFonts_FUN_0045aad0
    PUSH EDX                            ; 0045aad6
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004b31c0 ; 0045aad7
        ;   XREF to: 004b31c0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_remapPalette_FUN_004b31c0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045aadc
    RET                                 ; 0045aadf

