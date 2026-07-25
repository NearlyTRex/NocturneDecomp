; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548aa0(void)
;
;
; Referenced Globals:
;   undefined4 SUB_00548b40
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00548aa0
        ;   Label: FUN_00548aa0
    PUSH 0xff                           ; 00548aa5
    PUSH 0xff                           ; 00548aaa
    PUSH 0xff                           ; 00548aaf
    PUSH 0x2dd10c0                      ; 00548ab4
    CALL 0x00548b40                     ; 00548ab9
        ;   XREF to: 00548b40 (UNCONDITIONAL_CALL)  ; SUB_00548b40
    ADD ESP,0x14                        ; 00548abe
    PUSH 0x0                            ; 00548ac1
    PUSH 0x0                            ; 00548ac3
    PUSH 0x0                            ; 00548ac5
    PUSH 0x0                            ; 00548ac7
    PUSH 0x2dd10c4                      ; 00548ac9
    CALL 0x00548b40                     ; 00548ace
        ;   XREF to: 00548b40 (UNCONDITIONAL_CALL)  ; SUB_00548b40
    ADD ESP,0x14                        ; 00548ad3
    RET                                 ; 00548ad6

