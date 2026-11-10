; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad97c(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc28
;
; Called Functions:
;   crt_unknown.c_FUN_005ad8d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ad97c
        ;   Label: crt_unknown.c_FUN_005ad97c
    AND EAX,0xf                         ; 005ad980
    SHL EAX,0x4                         ; 005ad983
    ADD EAX,0x2d25a70                   ; 005ad986
    PUSH EAX                            ; 005ad98b
    CALL crt_unknown.c_FUN_005ad8d0     ; 005ad98c
        ;   XREF to: 005ad8d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad8d0()
    ADD ESP,0x4                         ; 005ad991
    RET                                 ; 005ad994

