; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a4f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c25590],0x0      ; 0047a4f0 | DAT_01c25590
        ;   Label: shape_edittool.cpp_FUN_0047a4f0
    JZ 0x0047a51b                       ; 0047a4f7
        ;   XREF to: 0047a51b (CONDITIONAL_JUMP)  ; LAB_0047a51b
    MOV EAX,[0x01c25590]                ; 0047a4f9 | DAT_01c25590
        ;   Label: LAB_0047a4f9
    PUSH 0x6a                           ; 0047a4fe
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047a500
    PUSH EAX                            ; 0047a506
    MOV dword ptr [0x01c25f78],EDX      ; 0047a507 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047a50d
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047a512
    MOV [0x01c25f7c],EAX                ; 0047a515 | DAT_01c25f7c
    RET                                 ; 0047a51a
    PUSH EBX                            ; 0047a51b
        ;   Label: LAB_0047a51b
    MOV ECX,0x5d1e6f                    ; 0047a51c
    MOV EBX,0xa0                        ; 0047a521
    PUSH 0x5d1e85                       ; 0047a526
    MOV dword ptr [0x01d046a0],ECX      ; 0047a52b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047a531 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047a537
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047a53c
    POP EBX                             ; 0047a53f
    JMP 0x0047a4f9                      ; 0047a540
        ;   XREF to: 0047a4f9 (UNCONDITIONAL_JUMP)  ; LAB_0047a4f9

