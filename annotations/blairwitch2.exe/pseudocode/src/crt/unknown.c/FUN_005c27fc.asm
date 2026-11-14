; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c27fc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2ad1
;
; Called Functions:
;   crt_unknown.c_FUN_005c27c4
;
; *****************************************************************************

section .text

    PUSH 0x2680910                      ; 005c27fc
        ;   Label: crt_unknown.c_FUN_005c27fc
    CALL crt_unknown.c_FUN_005c27c4     ; 005c2801
        ;   XREF to: 005c27c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c27c4()
    ADD ESP,0x4                         ; 005c2806
    RET                                 ; 005c2809

