; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c28bc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2ad6
;
; Called Functions:
;   crt_unknown.c_FUN_005c2760
;
; *****************************************************************************

section .text

    PUSH 0x2681050                      ; 005c28bc
        ;   Label: crt_unknown.c_FUN_005c28bc
    CALL crt_unknown.c_FUN_005c2760     ; 005c28c1
        ;   XREF to: 005c2760 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2760()
    ADD ESP,0x4                         ; 005c28c6
    RET                                 ; 005c28c9

