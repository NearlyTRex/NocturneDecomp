; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dfont_cpp_FUN_0044cd80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_014b98f8
;
; Called Functions:
;   engine_font.cpp_CBitFont_remapPalette_FUN_004931b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x014b98f8]      ; 0044cd80 | DAT_014b98f8
        ;   Label: core_dfont.cpp_FUN_0044cd80
    PUSH EDX                            ; 0044cd86
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004931b0 ; 0044cd87
        ;   XREF to: 004931b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_remapPalette_FUN_004931b0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0044cd8c
    RET                                 ; 0044cd8f

