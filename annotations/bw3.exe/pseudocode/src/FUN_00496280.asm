; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00496280(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5c03fb                       ; 00496280
        ;   Label: FUN_00496280
    MOV EDX,dword ptr [ESP + 0xc]       ; 00496285
    PUSH EDX                            ; 00496289
    CALL FUN_0040c790                   ; 0049628a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0049628f
    TEST EAX,EAX                        ; 00496292
    JZ 0x0049629b                       ; 00496294
        ;   XREF to: 0049629b (CONDITIONAL_JUMP)  ; LAB_0049629b
    MOV EAX,0x2                         ; 00496296
    RET                                 ; 0049629b
        ;   Label: LAB_0049629b

