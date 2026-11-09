; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a9e24(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00607b10
;
; *****************************************************************************

section .text

    MOV EAX,[0x00607b10]                ; 005a9e24 | DAT_00607b10
        ;   Label: crt_unknown.c_FUN_005a9e24
    TEST EAX,EAX                        ; 005a9e29
    JNZ 0x005a9e30                      ; 005a9e2b
        ;   XREF to: 005a9e30 (CONDITIONAL_JUMP)  ; LAB_005a9e30
    JNZ 0x005a9e3a                      ; 005a9e2d
        ;   XREF to: 005a9e3a (CONDITIONAL_JUMP)  ; LAB_005a9e3a
        ;   Label: LAB_005a9e2d
    RET                                 ; 005a9e2f
    MOV EDX,dword ptr [EAX]             ; 005a9e30
        ;   Label: LAB_005a9e30
    MOV dword ptr [0x00607b10],EDX      ; 005a9e32 | DAT_00607b10
    JMP 0x005a9e2d                      ; 005a9e38
        ;   XREF to: 005a9e2d (UNCONDITIONAL_JUMP)  ; LAB_005a9e2d
    MOV EAX,dword ptr [EAX + 0x4]       ; 005a9e3a
        ;   Label: LAB_005a9e3a
    PUSH 0x0                            ; 005a9e3d
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a9e3f
    PUSH EDX                            ; 005a9e42
    CALL dword ptr [EAX + 0x4]          ; 005a9e43
    ADD ESP,0x8                         ; 005a9e46
    JMP 0x005a9e24                      ; 005a9e49
        ;   XREF to: 005a9e24 (UNCONDITIONAL_JUMP)

