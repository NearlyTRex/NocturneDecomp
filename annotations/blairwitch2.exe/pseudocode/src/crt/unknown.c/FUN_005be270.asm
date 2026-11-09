; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005be270(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c1b30 at 005c1b38
;
; Called Functions:
;   crt_unknown.c_FUN_005be27c
;
; *****************************************************************************

section .text

    PUSH -0x1                           ; 005be270
        ;   Label: crt_unknown.c_FUN_005be270
    CALL crt_unknown.c_FUN_005be27c     ; 005be272
        ;   XREF to: 005be27c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be27c()
    ADD ESP,0x4                         ; 005be277
    RET                                 ; 005be27a

