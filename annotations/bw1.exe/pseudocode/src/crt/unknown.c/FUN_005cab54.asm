; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cab54(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cadc7
;
; Called Functions:
;   crt_unknown.c_FUN_005c8d24
;   crt_unknown.c_FUN_005caa4c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cab54
        ;   Label: crt_unknown.c_FUN_005cab54
    AND EAX,0xf                         ; 005cab58
    SHL EAX,0x4                         ; 005cab5b
    ADD EAX,0x2c9f820                   ; 005cab5e
    PUSH EAX                            ; 005cab63
    CALL crt_unknown.c_FUN_005caa4c     ; 005cab64
        ;   XREF to: 005caa4c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caa4c()
    ADD ESP,0x4                         ; 005cab69
    MOV EDX,dword ptr [ESP + 0x4]       ; 005cab6c
    PUSH EDX                            ; 005cab70
    CALL crt_unknown.c_FUN_005c8d24     ; 005cab71
        ;   XREF to: 005c8d24 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8d24()
    ADD ESP,0x4                         ; 005cab76
    RET                                 ; 005cab79

