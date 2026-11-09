; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6540(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c9e80 at 005c9e88
;
; Called Functions:
;   crt_unknown.c_FUN_005c654c
;
; *****************************************************************************

section .text

    PUSH -0x1                           ; 005c6540
        ;   Label: crt_unknown.c_FUN_005c6540
    CALL crt_unknown.c_FUN_005c654c     ; 005c6542
        ;   XREF to: 005c654c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c654c()
    ADD ESP,0x4                         ; 005c6547
    RET                                 ; 005c654a

