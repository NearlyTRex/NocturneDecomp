; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c28dc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2b6f
;
; Called Functions:
;   crt_unknown.c_FUN_005c2760
;
; *****************************************************************************

section .text

    PUSH 0x2681060                      ; 005c28dc
        ;   Label: crt_unknown.c_FUN_005c28dc
    CALL crt_unknown.c_FUN_005c2760     ; 005c28e1
        ;   XREF to: 005c2760 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2760()
    ADD ESP,0x4                         ; 005c28e6
    RET                                 ; 005c28e9

