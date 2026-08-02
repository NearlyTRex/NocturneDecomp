; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_0056966c(ushort *param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_00569928 at 00569c57
;
; Called Functions:
;   crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056966c
        ;   Label: crt_unknown.c_FUN_0056966c
    PUSH ESI                            ; 0056966d
    PUSH EDI                            ; 0056966e
    PUSH ES                             ; 0056966f
    SUB ESP,0x4                         ; 00569670
    MOV EDI,dword ptr [ESP + 0x20]      ; 00569673
    LES EBX,[ESP + 0x18]                ; 00569677
    XOR ESI,ESI                         ; 0056967b
    CMP EDI,-0x1                        ; 0056967d
    JNZ 0x005696aa                      ; 00569680
        ;   XREF to: 005696aa (CONDITIONAL_JUMP)  ; LAB_005696aa
    MOV CX,word ptr ES:[EBX]            ; 00569682
        ;   Label: LAB_00569682
    TEST CX,CX                          ; 00569686
    JZ 0x005696da                       ; 00569689
        ;   XREF to: 005696da (CONDITIONAL_JUMP)  ; LAB_005696da
    XOR EAX,EAX                         ; 0056968b
    MOV AX,CX                           ; 0056968d
    PUSH EAX                            ; 00569690
    LEA EAX,[ESP + 0x4]                 ; 00569691
    PUSH EAX                            ; 00569695
    ADD EBX,0x2                         ; 00569696
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0 ; 00569699
        ;   XREF to: 0056f3a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 0056969e
    CMP EAX,-0x1                        ; 005696a1
    JZ 0x00569682                       ; 005696a4
        ;   XREF to: 00569682 (CONDITIONAL_JUMP)  ; LAB_00569682
    ADD ESI,EAX                         ; 005696a6
    JMP 0x00569682                      ; 005696a8
        ;   XREF to: 00569682 (UNCONDITIONAL_JUMP)  ; LAB_00569682
    MOV DX,word ptr ES:[EBX]            ; 005696aa
        ;   Label: LAB_005696aa
    TEST DX,DX                          ; 005696ae
    JZ 0x005696d6                       ; 005696b1
        ;   XREF to: 005696d6 (CONDITIONAL_JUMP)  ; LAB_005696d6
    CMP ESI,EDI                         ; 005696b3
    JG 0x005696d6                       ; 005696b5
        ;   XREF to: 005696d6 (CONDITIONAL_JUMP)  ; LAB_005696d6
    XOR EAX,EAX                         ; 005696b7
    MOV AX,DX                           ; 005696b9
    PUSH EAX                            ; 005696bc
    LEA EAX,[ESP + 0x4]                 ; 005696bd
    PUSH EAX                            ; 005696c1
    ADD EBX,0x2                         ; 005696c2
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0 ; 005696c5
        ;   XREF to: 0056f3a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 005696ca
    CMP EAX,-0x1                        ; 005696cd
    JZ 0x005696aa                       ; 005696d0
        ;   XREF to: 005696aa (CONDITIONAL_JUMP)  ; LAB_005696aa
    ADD ESI,EAX                         ; 005696d2
    JMP 0x005696aa                      ; 005696d4
        ;   XREF to: 005696aa (UNCONDITIONAL_JUMP)  ; LAB_005696aa
    CMP ESI,EDI                         ; 005696d6
        ;   Label: LAB_005696d6
    JG 0x005696de                       ; 005696d8
        ;   XREF to: 005696de (CONDITIONAL_JUMP)  ; LAB_005696de
    MOV EAX,ESI                         ; 005696da
        ;   Label: LAB_005696da
    JMP 0x005696e0                      ; 005696dc
        ;   XREF to: 005696e0 (UNCONDITIONAL_JUMP)  ; LAB_005696e0
    MOV EAX,EDI                         ; 005696de
        ;   Label: LAB_005696de
    ADD ESP,0x4                         ; 005696e0
        ;   Label: LAB_005696e0
    POP ES                              ; 005696e3
    POP EDI                             ; 005696e4
    POP ESI                             ; 005696e5
    POP EBX                             ; 005696e6
    RET                                 ; 005696e7

