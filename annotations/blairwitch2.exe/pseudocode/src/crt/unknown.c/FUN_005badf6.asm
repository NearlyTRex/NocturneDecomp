; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005badf6(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005badd7 at 005badda
;   crt_unknown.c_FUN_005c045c at 005c05df
;
; Called Functions:
;   crt_unknown.c_FUN_005c1c20
;
; *****************************************************************************

section .text

    POP EAX                             ; 005badf6
        ;   Label: crt_unknown.c_FUN_005badf6
    PUSH 0x1                            ; 005badf7
    PUSH 0x61f164                       ; 005badf9
    CALL crt_unknown.c_FUN_005c1c20     ; 005badfe
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1c20()

