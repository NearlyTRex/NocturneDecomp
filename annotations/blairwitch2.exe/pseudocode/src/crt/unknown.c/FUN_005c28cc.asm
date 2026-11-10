; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c28cc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2b04
;
; Called Functions:
;   crt_unknown.c_FUN_005c27c4
;
; *****************************************************************************

section .text

    PUSH 0x2681050                      ; 005c28cc
        ;   Label: crt_unknown.c_FUN_005c28cc
    CALL crt_unknown.c_FUN_005c27c4     ; 005c28d1
        ;   XREF to: 005c27c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c27c4()
    ADD ESP,0x4                         ; 005c28d6
    RET                                 ; 005c28d9

