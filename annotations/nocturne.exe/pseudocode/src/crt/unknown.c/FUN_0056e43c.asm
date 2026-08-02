; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e43c(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e6e8
;
; Called Functions:
;   crt_unknown.c_FUN_0056e390
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056e43c
        ;   Label: crt_unknown.c_FUN_0056e43c
    AND EAX,0xf                         ; 0056e440
    SHL EAX,0x4                         ; 0056e443
    ADD EAX,0x2de54d0                   ; 0056e446
    PUSH EAX                            ; 0056e44b
    CALL crt_unknown.c_FUN_0056e390     ; 0056e44c
        ;   XREF to: 0056e390 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e390()
    ADD ESP,0x4                         ; 0056e451
    RET                                 ; 0056e454

