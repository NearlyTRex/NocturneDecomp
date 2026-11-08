; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00445d10(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5b99f6                       ; 00445d10
        ;   Label: FUN_00445d10
    MOV EDX,dword ptr [ESP + 0xc]       ; 00445d15
    PUSH EDX                            ; 00445d19
    CALL FUN_0040c790                   ; 00445d1a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 00445d1f
    TEST EAX,EAX                        ; 00445d22
    JZ 0x00445d2b                       ; 00445d24
        ;   XREF to: 00445d2b (CONDITIONAL_JUMP)  ; LAB_00445d2b
    MOV EAX,0x4                         ; 00445d26
    RET                                 ; 00445d2b
        ;   Label: LAB_00445d2b

