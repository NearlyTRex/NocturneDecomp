; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040f530(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5b62ec                       ; 0040f530
        ;   Label: FUN_0040f530
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040f535
    PUSH EDX                            ; 0040f539
    CALL FUN_0040c790                   ; 0040f53a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0040f53f
    TEST EAX,EAX                        ; 0040f542
    JZ 0x0040f54b                       ; 0040f544
        ;   XREF to: 0040f54b (CONDITIONAL_JUMP)  ; LAB_0040f54b
    MOV EAX,0x2                         ; 0040f546
    RET                                 ; 0040f54b
        ;   Label: LAB_0040f54b

