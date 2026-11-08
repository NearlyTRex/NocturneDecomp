; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047b4c0(void)
;
;
; Called Functions:
;   FUN_0047c740
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1c5b0e4                      ; 0047b4c0
        ;   Label: FUN_0047b4c0
    CALL FUN_0047c740                   ; 0047b4c5
        ;   XREF to: 0047c740 (UNCONDITIONAL_CALL)  ; undefined FUN_0047c740()
    ADD ESP,0x4                         ; 0047b4ca
    PUSH 0x5fb130                       ; 0047b4cd
    CALL FUN_005a3e13                   ; 0047b4d2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 0047b4d7
    RET                                 ; 0047b4da

