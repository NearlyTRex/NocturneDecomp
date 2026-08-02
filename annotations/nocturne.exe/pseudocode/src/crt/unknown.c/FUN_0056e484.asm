; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e484(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e6f7
;
; Called Functions:
;   crt_unknown.c_FUN_0056e174
;   crt_unknown.c_FUN_0056e37c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056e484
        ;   Label: crt_unknown.c_FUN_0056e484
    AND EAX,0xf                         ; 0056e488
    SHL EAX,0x4                         ; 0056e48b
    ADD EAX,0x2de54d0                   ; 0056e48e
    PUSH EAX                            ; 0056e493
    CALL crt_unknown.c_FUN_0056e37c     ; 0056e494
        ;   XREF to: 0056e37c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e37c()
    ADD ESP,0x4                         ; 0056e499
    MOV EDX,dword ptr [ESP + 0x4]       ; 0056e49c
    PUSH EDX                            ; 0056e4a0
    CALL crt_unknown.c_FUN_0056e174     ; 0056e4a1
        ;   XREF to: 0056e174 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e174()
    ADD ESP,0x4                         ; 0056e4a6
    RET                                 ; 0056e4a9

