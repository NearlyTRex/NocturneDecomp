; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0060b133(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060b142 at 0060b173
;
; Called Functions:
;   crt_unknown.c_FUN_0060b0c8
;
; *****************************************************************************

section .text

    PUSH EDX                            ; 0060b133
        ;   Label: crt_unknown.c_FUN_0060b133
    PUSH EAX                            ; 0060b134
    CALL crt_unknown.c_FUN_0060b0c8     ; 0060b135
        ;   XREF to: 0060b0c8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060b0c8()
    ADD ESP,0x8                         ; 0060b13a
    POP EDI                             ; 0060b13d
    POP ESI                             ; 0060b13e
    POP EBX                             ; 0060b13f
    POP EBP                             ; 0060b140
    RET                                 ; 0060b141

