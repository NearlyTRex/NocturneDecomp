; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c27ec(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2acc
;
; Called Functions:
;   crt_unknown.c_FUN_005c2760
;
; *****************************************************************************

section .text

    PUSH 0x2680910                      ; 005c27ec
        ;   Label: crt_unknown.c_FUN_005c27ec
    CALL crt_unknown.c_FUN_005c2760     ; 005c27f1
        ;   XREF to: 005c2760 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2760()
    ADD ESP,0x4                         ; 005c27f6
    RET                                 ; 005c27f9

