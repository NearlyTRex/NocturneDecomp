; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c287c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2b18
;
; Called Functions:
;   crt_unknown.c_FUN_005c2760
;
; *****************************************************************************

section .text

    PUSH 0x2680a30                      ; 005c287c
        ;   Label: crt_unknown.c_FUN_005c287c
    CALL crt_unknown.c_FUN_005c2760     ; 005c2881
        ;   XREF to: 005c2760 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2760()
    ADD ESP,0x4                         ; 005c2886
    RET                                 ; 005c2889

