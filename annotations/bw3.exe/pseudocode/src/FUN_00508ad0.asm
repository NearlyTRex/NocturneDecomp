; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00508ad0(void)
;
;
; Called Functions:
;   FUN_00508af0
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1dd67dc                      ; 00508ad0
        ;   Label: FUN_00508ad0
    CALL FUN_00508af0                   ; 00508ad5
        ;   XREF to: 00508af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00508af0()
    ADD ESP,0x4                         ; 00508ada
    PUSH 0x6035c0                       ; 00508add
    CALL FUN_005a3e13                   ; 00508ae2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 00508ae7
    RET                                 ; 00508aea

