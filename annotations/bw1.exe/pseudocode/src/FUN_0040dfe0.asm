; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040dfe0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5d31ad                       ; 0040dfe0
        ;   Label: FUN_0040dfe0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040dfe5
    PUSH EDX                            ; 0040dfe9
    CALL FUN_0040c550                   ; 0040dfea
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 0040dfef
    TEST EAX,EAX                        ; 0040dff2
    JZ 0x0040dffb                       ; 0040dff4
        ;   XREF to: 0040dffb (CONDITIONAL_JUMP)  ; LAB_0040dffb
    MOV EAX,0x2                         ; 0040dff6
    RET                                 ; 0040dffb
        ;   Label: LAB_0040dffb

