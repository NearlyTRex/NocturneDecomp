; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057104c(void)
;
;
; Referenced Globals:
;   undefined4 SUB_00572cb0
;   undefined4 DAT_005c1d09
;   undefined4 DAT_02de54a4
;   undefined4 DAT_02de5d60
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057104c
        ;   Label: FUN_0057104c
    PUSH EBP                            ; 0057104d
    CALL 0x00572cb0                     ; 0057104e
        ;   XREF to: 00572cb0 (UNCONDITIONAL_CALL)  ; SUB_00572cb0
    MOV EDX,dword ptr [0x02de54a4]      ; 00571053 | DAT_02de54a4
    TEST EDX,EDX                        ; 00571059
    JZ 0x0057106e                       ; 0057105b
        ;   XREF to: 0057106e (CONDITIONAL_JUMP)  ; LAB_0057106e
    PUSH EDX                            ; 0057105d
    CALL crt_unknown.c_FUN_005638d0     ; 0057105e
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    XOR ECX,ECX                         ; 00571063
    ADD ESP,0x4                         ; 00571065
    MOV dword ptr [0x02de54a4],ECX      ; 00571068 | DAT_02de54a4
    MOV ESI,dword ptr [0x02de5d60]      ; 0057106e | DAT_02de5d60
        ;   Label: LAB_0057106e
    TEST ESI,ESI                        ; 00571074
    JZ 0x00571089                       ; 00571076
        ;   XREF to: 00571089 (CONDITIONAL_JUMP)  ; LAB_00571089
    PUSH ESI                            ; 00571078
    CALL crt_unknown.c_FUN_005638d0     ; 00571079
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    XOR EBP,EBP                         ; 0057107e
    ADD ESP,0x4                         ; 00571080
    MOV dword ptr [0x02de5d60],EBP      ; 00571083 | DAT_02de5d60
    MOV EAX,[0x005c1d09]                ; 00571089 | DAT_005c1d09
        ;   Label: LAB_00571089
    TEST EAX,EAX                        ; 0057108e
    JZ 0x0057109a                       ; 00571090
        ;   XREF to: 0057109a (CONDITIONAL_JUMP)  ; LAB_0057109a
    PUSH EAX                            ; 00571092
    CALL dword ptr CS:[0x5754d8]        ; 00571093
    POP EBP                             ; 0057109a
        ;   Label: LAB_0057109a
    POP ESI                             ; 0057109b
    RET                                 ; 0057109c

