; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e458(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e6ed
;
; Called Functions:
;   crt_unknown.c_FUN_0056e3f4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056e458
        ;   Label: crt_unknown.c_FUN_0056e458
    AND EAX,0xf                         ; 0056e45c
    SHL EAX,0x4                         ; 0056e45f
    ADD EAX,0x2de54d0                   ; 0056e462
    PUSH EAX                            ; 0056e467
    CALL crt_unknown.c_FUN_0056e3f4     ; 0056e468
        ;   XREF to: 0056e3f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e3f4()
    ADD ESP,0x4                         ; 0056e46d
    RET                                 ; 0056e470

