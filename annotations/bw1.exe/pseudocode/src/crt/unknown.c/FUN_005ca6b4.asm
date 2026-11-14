; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ca6b4(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005ccb50
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005ca6b4
        ;   Label: crt_unknown.c_FUN_005ca6b4
    CALL crt_unknown.c_FUN_005ccb50     ; 005ca6b6
        ;   XREF to: 005ccb50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ccb50()
    ADD ESP,0x4                         ; 005ca6bb
    RET                                 ; 005ca6be

