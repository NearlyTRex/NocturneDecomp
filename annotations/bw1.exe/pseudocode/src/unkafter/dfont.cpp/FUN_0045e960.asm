; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_dfont_cpp_FUN_0045e960(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0152d23c
;
; Called Functions:
;   engine_font.cpp_CBitFont_remapPalette_FUN_004c45e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0152d23c]      ; 0045e960 | DAT_0152d23c
        ;   Label: unkafter_dfont.cpp_FUN_0045e960
    PUSH EDX                            ; 0045e966
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004c45e0 ; 0045e967
        ;   XREF to: 004c45e0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_remapPalette_FUN_004c45e0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e96c
    RET                                 ; 0045e96f

