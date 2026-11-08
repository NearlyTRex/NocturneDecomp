; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bef1e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f64c
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061f64c]                ; 005bef1e | DAT_0061f64c
        ;   Label: FUN_005bef1e
    TEST EAX,EAX                        ; 005bef23
    JNZ 0x005bef2a                      ; 005bef25
        ;   XREF to: 005bef2a (CONDITIONAL_JUMP)  ; LAB_005bef2a
    JNZ 0x005bef34                      ; 005bef27
        ;   XREF to: 005bef34 (CONDITIONAL_JUMP)  ; LAB_005bef34
        ;   Label: LAB_005bef27
    RET                                 ; 005bef29
    MOV EDX,dword ptr [EAX]             ; 005bef2a
        ;   Label: LAB_005bef2a
    MOV dword ptr [0x0061f64c],EDX      ; 005bef2c | DAT_0061f64c
    JMP 0x005bef27                      ; 005bef32
        ;   XREF to: 005bef27 (UNCONDITIONAL_JUMP)  ; LAB_005bef27
    MOV EAX,dword ptr [EAX + 0x4]       ; 005bef34
        ;   Label: LAB_005bef34
    PUSH 0x0                            ; 005bef37
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bef39
    PUSH EDX                            ; 005bef3c
    CALL dword ptr [EAX + 0x4]          ; 005bef3d
    ADD ESP,0x8                         ; 005bef40
    JMP 0x005bef1e                      ; 005bef43
        ;   XREF to: 005bef1e (UNCONDITIONAL_JUMP)

