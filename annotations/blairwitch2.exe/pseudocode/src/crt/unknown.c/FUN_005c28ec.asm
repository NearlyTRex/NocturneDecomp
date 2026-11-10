; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c28ec(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2b5a
;
; Called Functions:
;   crt_unknown.c_FUN_005c27c4
;
; *****************************************************************************

section .text

    PUSH 0x2681060                      ; 005c28ec
        ;   Label: crt_unknown.c_FUN_005c28ec
    CALL crt_unknown.c_FUN_005c27c4     ; 005c28f1
        ;   XREF to: 005c27c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c27c4()
    ADD ESP,0x4                         ; 005c28f6
    RET                                 ; 005c28f9

