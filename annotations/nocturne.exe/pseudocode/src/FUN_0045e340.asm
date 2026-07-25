; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045e340(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01b4d718
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_00401ed0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0045e340
        ;   Label: FUN_0045e340
    MOV EDX,dword ptr [0x01b4d718]      ; 0045e344 | DAT_01b4d718
    TEST EDX,EDX                        ; 0045e34a
    JZ 0x0045e359                       ; 0045e34c
        ;   XREF to: 0045e359 (CONDITIONAL_JUMP)  ; LAB_0045e359
    PUSH EAX                            ; 0045e34e
    PUSH EDX                            ; 0045e34f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0045e350
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 0045e355
    RET                                 ; 0045e358
    PUSH EAX                            ; 0045e359
        ;   Label: LAB_0045e359
    CALL engine_2d.c_getStringWidth_FUN_00401ed0 ; 0045e35a
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_getStringWidth_FUN_00401ed0()
    ADD ESP,0x4                         ; 0045e35f
    DEC EAX                             ; 0045e362
    RET                                 ; 0045e363

