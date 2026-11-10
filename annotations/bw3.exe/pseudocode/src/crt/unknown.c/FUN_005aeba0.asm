; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aeba0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006075c1
;   undefined4 DAT_00607b5c
;
; Called Functions:
;   crt_unknown.c_FUN_005b024e
;   crt_unknown.c_FUN_005b0454
;   crt_unknown.c_FUN_005b07ae
;   crt_unknown.c_ldexp_FUN_005b0611
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aeba0
        ;   Label: crt_unknown.c_FUN_005aeba0
    SUB ESP,0x10                        ; 005aeba1
    MOV dword ptr [ESP + 0x8],0xc0000000 ; 005aeba4
    MOV dword ptr [ESP + 0xc],0x4150017e ; 005aebac
    MOV dword ptr [ESP],0x80000000      ; 005aebb4
    MOV dword ptr [ESP + 0x4],0x4147ffff ; 005aebbb
    CMP byte ptr [0x006075c1],0x3       ; 005aebc3 | DAT_006075c1
    JC 0x005aec15                       ; 005aebca
        ;   XREF to: 005aec15 (CONDITIONAL_JUMP)  ; LAB_005aec15
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aebcc
    MOV EDX,dword ptr [ESP + 0xc]       ; 005aebd0
    MOV EBX,dword ptr [ESP]             ; 005aebd4
    MOV ECX,dword ptr [ESP + 0x4]       ; 005aebd7
    CALL crt_unknown.c_FUN_005b024e     ; 005aebdb
        ;   XREF to: 005b024e (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b024e()
    MOV EBX,dword ptr [ESP]             ; 005aebe0
    MOV ECX,dword ptr [ESP + 0x4]       ; 005aebe3
    CALL crt_unknown.c_ldexp_FUN_005b0611 ; 005aebe7
        ;   XREF to: 005b0611 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_ldexp_FUN_005b0611()
    MOV EBX,EAX                         ; 005aebec
    MOV ECX,EDX                         ; 005aebee
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aebf0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005aebf4
    CALL crt_unknown.c_FUN_005b0454     ; 005aebf8
        ;   XREF to: 005b0454 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0454()
    MOV EBX,0xe2308c3a                  ; 005aebfd
    MOV ECX,0x3e45798e                  ; 005aec02
    CALL crt_unknown.c_FUN_005b07ae     ; 005aec07
        ;   XREF to: 005b07ae (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b07ae()
    JLE 0x005aec15                      ; 005aec0c
        ;   XREF to: 005aec15 (CONDITIONAL_JUMP)  ; LAB_005aec15
    OR byte ptr [0x00607b5c],0x1        ; 005aec0e | DAT_00607b5c
    ADD ESP,0x10                        ; 005aec15
        ;   Label: LAB_005aec15
    POP EBX                             ; 005aec18
    RET                                 ; 005aec19

