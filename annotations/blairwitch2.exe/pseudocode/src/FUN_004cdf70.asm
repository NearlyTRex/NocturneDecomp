; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cdf70(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH 0x5d99ee                       ; 004cdf70
        ;   Label: FUN_004cdf70
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cdf75
    PUSH EDX                            ; 004cdf79
    CALL FUN_0040c840                   ; 004cdf7a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004cdf7f
    TEST EAX,EAX                        ; 004cdf82
    JZ 0x004cdf8b                       ; 004cdf84
        ;   XREF to: 004cdf8b (CONDITIONAL_JUMP)  ; LAB_004cdf8b
    MOV EAX,0x2                         ; 004cdf86
    RET                                 ; 004cdf8b
        ;   Label: LAB_004cdf8b

