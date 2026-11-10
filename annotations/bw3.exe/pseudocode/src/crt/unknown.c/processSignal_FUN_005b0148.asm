; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_unknown_c_processSignal_FUN_005b0148(int signal_number)
;
; Parameters:
; int              Stack[0x4]:4   signal_number
;
; XREF[2]:
;   crt_signal.c_FUN_005b003c at 005b003e
;   crt_unknown.c_FUN_005aff40 at 005aff62
;
; Referenced Globals:
;   undefined1* switchdataD_005b0118 = 005b017b
;
; Called Functions:
;   crt_unknown.c_FUN_005a5fb8
;   crt_unknown.c_FUN_005afe80
;   crt_unknown.c_FUN_005afed4
;   crt_unknown.c_FUN_005affa0
;   crt_unknown.c_FUN_005b0004
;   crt_unknown.c_FUN_005b0048
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0148
        ;   Label: crt_unknown.c_processSignal_FUN_005b0148
    PUSH ESI                            ; 005b0149
    MOV ESI,dword ptr [ESP + 0xc]       ; 005b014a
    PUSH ESI                            ; 005b014e
    CALL crt_unknown.c_FUN_005afed4     ; 005b014f
        ;   XREF to: 005afed4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afed4()
    ADD ESP,0x4                         ; 005b0154
    LEA EDX,[ESI + -0x1]                ; 005b0157
    MOV EBX,EAX                         ; 005b015a
    CMP EDX,0xb                         ; 005b015c
    JA 0x005b01b8                       ; 005b015f
        ;   XREF to: 005b01b8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EDX*0x4 + 0x5b0118] ; 005b0161 | caseD_1 | caseD_2 | caseD_c
        ;   Label: switchD
    PUSH 0x8c                           ; 005b0169
        ;   Label: caseD_2
    CALL crt_unknown.c_FUN_005b0048     ; 005b016e
        ;   XREF to: 005b0048 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0048()
    ADD ESP,0x4                         ; 005b0173
    XOR EAX,EAX                         ; 005b0176
    POP ESI                             ; 005b0178
    POP EBX                             ; 005b0179
    RET                                 ; 005b017a
    CMP EAX,0x2                         ; 005b017b
        ;   Label: caseD_1
    JNZ 0x005b0185                      ; 005b017e
        ;   XREF to: 005b0185 (CONDITIONAL_JUMP)  ; caseD_c
    CALL crt_unknown.c_FUN_005a5fb8     ; 005b0180
        ;   XREF to: 005a5fb8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5fb8()
    CMP EBX,0x1                         ; 005b0185
        ;   Label: caseD_3
    JZ 0x005b01a5                       ; 005b0188
        ;   XREF to: 005b01a5 (CONDITIONAL_JUMP)  ; LAB_005b01a5
    CMP EBX,0x2                         ; 005b018a
    JZ 0x005b01a5                       ; 005b018d
        ;   XREF to: 005b01a5 (CONDITIONAL_JUMP)  ; LAB_005b01a5
    CMP EBX,0x3                         ; 005b018f
    JZ 0x005b01a5                       ; 005b0192
        ;   XREF to: 005b01a5 (CONDITIONAL_JUMP)  ; LAB_005b01a5
    PUSH 0x2                            ; 005b0194
    PUSH ESI                            ; 005b0196
    CALL crt_unknown.c_FUN_005afe80     ; 005b0197
        ;   XREF to: 005afe80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afe80()
    ADD ESP,0x8                         ; 005b019c
    PUSH ESI                            ; 005b019f
    CALL EBX                            ; 005b01a0
    ADD ESP,0x4                         ; 005b01a2
    CALL crt_unknown.c_FUN_005affa0     ; 005b01a5
        ;   XREF to: 005affa0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005affa0()
        ;   Label: LAB_005b01a5
    TEST EAX,EAX                        ; 005b01aa
    JNZ 0x005b01c0                      ; 005b01ac
        ;   XREF to: 005b01c0 (CONDITIONAL_JUMP)  ; LAB_005b01c0
    CALL crt_unknown.c_FUN_005b0004     ; 005b01ae
        ;   XREF to: 005b0004 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0004()
    XOR EAX,EAX                         ; 005b01b3
    POP ESI                             ; 005b01b5
    POP EBX                             ; 005b01b6
    RET                                 ; 005b01b7
    MOV EAX,0xffffffff                  ; 005b01b8
        ;   Label: default
    POP ESI                             ; 005b01bd
    POP EBX                             ; 005b01be
    RET                                 ; 005b01bf
    XOR EAX,EAX                         ; 005b01c0
        ;   Label: LAB_005b01c0
    POP ESI                             ; 005b01c2
    POP EBX                             ; 005b01c3
    RET                                 ; 005b01c4

