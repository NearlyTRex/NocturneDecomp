; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004dea90(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5c66df                       ; 004dea90
        ;   Label: FUN_004dea90
    MOV EDX,dword ptr [ESP + 0xc]       ; 004dea95
    PUSH EDX                            ; 004dea99
    CALL FUN_0040c790                   ; 004dea9a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004dea9f
    TEST EAX,EAX                        ; 004deaa2
    JZ 0x004deaab                       ; 004deaa4
        ;   XREF to: 004deaab (CONDITIONAL_JUMP)  ; LAB_004deaab
    MOV EAX,0x2                         ; 004deaa6
    RET                                 ; 004deaab
        ;   Label: LAB_004deaab

