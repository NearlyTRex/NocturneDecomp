; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005674f8(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02de4e34
;   undefined4 DAT_02de4e38
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005674f8
        ;   Label: FUN_005674f8
    PUSH EBP                            ; 005674f9
    MOV EDX,dword ptr [0x02de4e34]      ; 005674fa | DAT_02de4e34
    TEST EDX,EDX                        ; 00567500
    JZ 0x00567515                       ; 00567502
        ;   XREF to: 00567515 (CONDITIONAL_JUMP)  ; LAB_00567515
    PUSH EDX                            ; 00567504
    CALL crt_unknown.c_FUN_005638d0     ; 00567505
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    XOR ECX,ECX                         ; 0056750a
    ADD ESP,0x4                         ; 0056750c
    MOV dword ptr [0x02de4e34],ECX      ; 0056750f | DAT_02de4e34
    MOV ESI,dword ptr [0x02de4e38]      ; 00567515 | DAT_02de4e38
        ;   Label: LAB_00567515
    TEST ESI,ESI                        ; 0056751b
    JZ 0x00567530                       ; 0056751d
        ;   XREF to: 00567530 (CONDITIONAL_JUMP)  ; LAB_00567530
    PUSH ESI                            ; 0056751f
    CALL crt_unknown.c_FUN_005638d0     ; 00567520
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    XOR EBP,EBP                         ; 00567525
    ADD ESP,0x4                         ; 00567527
    MOV dword ptr [0x02de4e38],EBP      ; 0056752a | DAT_02de4e38
    POP EBP                             ; 00567530
        ;   Label: LAB_00567530
    POP ESI                             ; 00567531
    RET                                 ; 00567532

