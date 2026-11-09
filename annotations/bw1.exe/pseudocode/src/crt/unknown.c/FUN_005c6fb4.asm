; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6fb4(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0062676c
;
; *****************************************************************************

section .text

    MOV EAX,[0x0062676c]                ; 005c6fb4 | DAT_0062676c
        ;   Label: crt_unknown.c_FUN_005c6fb4
    TEST EAX,EAX                        ; 005c6fb9
    JNZ 0x005c6fc0                      ; 005c6fbb
        ;   XREF to: 005c6fc0 (CONDITIONAL_JUMP)  ; LAB_005c6fc0
    JNZ 0x005c6fca                      ; 005c6fbd
        ;   XREF to: 005c6fca (CONDITIONAL_JUMP)  ; LAB_005c6fca
        ;   Label: LAB_005c6fbd
    RET                                 ; 005c6fbf
    MOV EDX,dword ptr [EAX]             ; 005c6fc0
        ;   Label: LAB_005c6fc0
    MOV dword ptr [0x0062676c],EDX      ; 005c6fc2 | DAT_0062676c
    JMP 0x005c6fbd                      ; 005c6fc8
        ;   XREF to: 005c6fbd (UNCONDITIONAL_JUMP)  ; LAB_005c6fbd
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c6fca
        ;   Label: LAB_005c6fca
    PUSH 0x0                            ; 005c6fcd
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c6fcf
    PUSH EDX                            ; 005c6fd2
    CALL dword ptr [EAX + 0x4]          ; 005c6fd3
    ADD ESP,0x8                         ; 005c6fd6
    JMP 0x005c6fb4                      ; 005c6fd9
        ;   XREF to: 005c6fb4 (UNCONDITIONAL_JUMP)

