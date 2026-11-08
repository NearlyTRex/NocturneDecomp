; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004144a0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5d3ba7                       ; 004144a0
        ;   Label: FUN_004144a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004144a5
    PUSH EDX                            ; 004144a9
    CALL FUN_0040c550                   ; 004144aa
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004144af
    TEST EAX,EAX                        ; 004144b2
    JZ 0x004144bb                       ; 004144b4
        ;   XREF to: 004144bb (CONDITIONAL_JUMP)  ; LAB_004144bb
    MOV EAX,0x2                         ; 004144b6
    RET                                 ; 004144bb
        ;   Label: LAB_004144bb

