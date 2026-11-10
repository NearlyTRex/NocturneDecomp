; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c288c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2b22
;
; Called Functions:
;   crt_unknown.c_FUN_005c27c4
;
; *****************************************************************************

section .text

    PUSH 0x2680a30                      ; 005c288c
        ;   Label: crt_unknown.c_FUN_005c288c
    CALL crt_unknown.c_FUN_005c27c4     ; 005c2891
        ;   XREF to: 005c27c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c27c4()
    ADD ESP,0x4                         ; 005c2896
    RET                                 ; 005c2899

