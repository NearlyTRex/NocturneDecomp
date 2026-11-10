; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0048666e(CEdCheck *param_1,undefined4 param_2,undefined4 param_3,CEdCheck *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00486780
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004867f0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0048666e
        ;   Label: shape_edittool.cpp_FUN_0048666e
    PUSH EBX                            ; 00486670
    PUSH ESI                            ; 00486671
    PUSH EDI                            ; 00486672
    PUSH EBP                            ; 00486673
    MOV EBX,dword ptr [ESP + 0x14]      ; 00486674
    MOV ESI,dword ptr [ESP + 0x20]      ; 00486678
    TEST ESI,ESI                        ; 0048667c
    JNZ 0x00486685                      ; 0048667e
        ;   XREF to: 00486685 (CONDITIONAL_JUMP)  ; LAB_00486685
    MOV ESI,0x5bd95b                    ; 00486680
    MOV EAX,dword ptr [ESP + 0x18]      ; 00486685
        ;   Label: LAB_00486685
    MOV dword ptr [EBX + 0x10],EAX      ; 00486689
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048668c
    LEA EDI,[EBX + 0x24]                ; 00486690
    MOV dword ptr [EBX + 0x14],EAX      ; 00486693
    PUSH EDI                            ; 00486696
    MOV AL,byte ptr [ESI]               ; 00486697
        ;   Label: LAB_00486697
    MOV byte ptr [EDI],AL               ; 00486699
    CMP AL,0x0                          ; 0048669b
    JZ 0x004866af                       ; 0048669d
        ;   XREF to: 004866af (CONDITIONAL_JUMP)  ; LAB_004866af
    MOV AL,byte ptr [ESI + 0x1]         ; 0048669f
    ADD ESI,0x2                         ; 004866a2
    MOV byte ptr [EDI + 0x1],AL         ; 004866a5
    ADD EDI,0x2                         ; 004866a8
    CMP AL,0x0                          ; 004866ab
    JNZ 0x00486697                      ; 004866ad
        ;   XREF to: 00486697 (CONDITIONAL_JUMP)  ; LAB_00486697
    POP EDI                             ; 004866af
        ;   Label: LAB_004866af
    CMP dword ptr [0x01c5b0e0],0x0      ; 004866b0 | DAT_01c5b0e0
    JZ 0x0048672a                       ; 004866b7
        ;   XREF to: 0048672a (CONDITIONAL_JUMP)  ; LAB_0048672a
    MOV EAX,[0x01c5b0e0]                ; 004866b9 | DAT_01c5b0e0
        ;   Label: LAB_004866b9
    PUSH 0x6a                           ; 004866be
    MOV ESI,dword ptr [EAX + 0x41e8]    ; 004866c0
    PUSH EAX                            ; 004866c6
    MOV dword ptr [0x01c5bae0],ESI      ; 004866c7 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 004866cd
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004866d2
    LEA ESI,[EBX + 0x24]                ; 004866d5
    PUSH ESI                            ; 004866d8
    MOV EDI,dword ptr [0x01c5b0e0]      ; 004866d9 | DAT_01c5b0e0
    PUSH EDI                            ; 004866df
    MOV [0x01c5bae4],EAX                ; 004866e0 | DAT_01c5bae4
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30 ; 004866e5
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    MOV EDI,EAX                         ; 004866ea
    MOV EAX,dword ptr [EBX + 0x14]      ; 004866ec
    ADD ESP,0x8                         ; 004866ef
    ADD EAX,EDI                         ; 004866f2
    PUSH EBX                            ; 004866f4
    MOV dword ptr [EBX + 0x1c],EAX      ; 004866f5
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00486780 ; 004866f8
        ;   XREF to: 00486780 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00486780(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 004866fd
    MOV EDI,dword ptr [EBX + 0x10]      ; 00486700
    PUSH EBX                            ; 00486703
    ADD EDI,EAX                         ; 00486704
    CALL shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004867f0 ; 00486706
        ;   XREF to: 004867f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004867f0(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 0048670b
    PUSH ESI                            ; 0048670e
    MOV EBP,dword ptr [0x01c5b0e0]      ; 0048670f | DAT_01c5b0e0
    PUSH EBP                            ; 00486715
    ADD EDI,EAX                         ; 00486716
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 00486718
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD EDI,EAX                         ; 0048671d
    ADD ESP,0x8                         ; 0048671f
    MOV dword ptr [EBX + 0x18],EDI      ; 00486722
    POP EBP                             ; 00486725
    POP EDI                             ; 00486726
    POP ESI                             ; 00486727
    POP EBX                             ; 00486728
    RET                                 ; 00486729
    MOV ECX,0x5bcd25                    ; 0048672a
        ;   Label: LAB_0048672a
    MOV ESI,0xa7                        ; 0048672f
    PUSH 0x5bcd3b                       ; 00486734
    MOV dword ptr [0x01d71de0],ECX      ; 00486739 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0048673f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00486745
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0048674a
    JMP 0x004866b9                      ; 0048674d
        ;   XREF to: 004866b9 (UNCONDITIONAL_JUMP)  ; LAB_004866b9

