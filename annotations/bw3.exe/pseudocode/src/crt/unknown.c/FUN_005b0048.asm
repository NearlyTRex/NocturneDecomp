; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005b0048(undefined4 param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005ae248 at 005ae360
;   crt_unknown.c_processSignal_FUN_005b0148 at 005b016e
;
; Called Functions:
;   crt_unknown.c_FUN_005afe80
;   crt_unknown.c_FUN_005afed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0048
        ;   Label: crt_unknown.c_FUN_005b0048
    PUSH 0x2                            ; 005b0049
    CALL crt_unknown.c_FUN_005afed4     ; 005b004b
        ;   XREF to: 005afed4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afed4()
    ADD ESP,0x4                         ; 005b0050
    MOV EBX,EAX                         ; 005b0053
    CMP EAX,0x1                         ; 005b0055
    JZ 0x005b0080                       ; 005b0058
        ;   XREF to: 005b0080 (CONDITIONAL_JUMP)  ; LAB_005b0080
    CMP EAX,0x2                         ; 005b005a
    JZ 0x005b0080                       ; 005b005d
        ;   XREF to: 005b0080 (CONDITIONAL_JUMP)  ; LAB_005b0080
    CMP EAX,0x3                         ; 005b005f
    JZ 0x005b0080                       ; 005b0062
        ;   XREF to: 005b0080 (CONDITIONAL_JUMP)  ; LAB_005b0080
    PUSH 0x2                            ; 005b0064
    PUSH 0x2                            ; 005b0066
    CALL crt_unknown.c_FUN_005afe80     ; 005b0068
        ;   XREF to: 005afe80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afe80()
    ADD ESP,0x8                         ; 005b006d
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b0070
    PUSH EDX                            ; 005b0074
    PUSH 0x2                            ; 005b0075
    CALL EBX                            ; 005b0077
    ADD ESP,0x8                         ; 005b0079
    XOR EAX,EAX                         ; 005b007c
    POP EBX                             ; 005b007e
    RET                                 ; 005b007f
    MOV EAX,0xffffffff                  ; 005b0080
        ;   Label: LAB_005b0080
    POP EBX                             ; 005b0085
    RET                                 ; 005b0086

