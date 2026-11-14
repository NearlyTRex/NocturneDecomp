; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a9d80(uint param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_stdio.c_fclose_FUN_005a3bc0 at 005a3c2e
;   crt_unknown.c_FUN_005aeff0 at 005af01f
;
; Referenced Globals:
;   void* PTR_CloseHandle_005b3518 = 001b3c48
;   undefined4 DAT_00607b18
;   undefined4 DAT_00607b1c
;   undefined4 DAT_00607b24
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   CloseHandle
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005ab978
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9d80
        ;   Label: crt_unknown.c_FUN_005a9d80
    PUSH ESI                            ; 005a9d81
    PUSH EDI                            ; 005a9d82
    PUSH EBP                            ; 005a9d83
    SUB ESP,0x4                         ; 005a9d84
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a9d87
    TEST EBX,EBX                        ; 005a9d8b
    JL 0x005a9d97                       ; 005a9d8d
        ;   XREF to: 005a9d97 (CONDITIONAL_JUMP)  ; LAB_005a9d97
    CMP EBX,dword ptr [0x00607b84]      ; 005a9d8f | DAT_00607b84
    JBE 0x005a9dab                      ; 005a9d95
        ;   XREF to: 005a9dab (CONDITIONAL_JUMP)  ; LAB_005a9dab
    PUSH 0x4                            ; 005a9d97
        ;   Label: LAB_005a9d97
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a9d99
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005a9d9e
    ADD ESP,0x4                         ; 005a9da3
    JMP 0x005a9e1c                      ; 005a9da6
        ;   XREF to: 005a9e1c (UNCONDITIONAL_JUMP)  ; LAB_005a9e1c
    MOV ESI,dword ptr [0x00607bdc]      ; 005a9dab | DAT_00607bdc
        ;   Label: LAB_005a9dab
    MOV ECX,dword ptr [0x00607b24]      ; 005a9db1 | DAT_00607b24
    XOR EBP,EBP                         ; 005a9db7
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 005a9db9
    XOR EDI,EDI                         ; 005a9dbc
    MOV dword ptr [ESP],EAX             ; 005a9dbe
    TEST ECX,ECX                        ; 005a9dc1
    JZ 0x005a9deb                       ; 005a9dc3
        ;   XREF to: 005a9deb (CONDITIONAL_JUMP)  ; LAB_005a9deb
    PUSH EBX                            ; 005a9dc5
    CALL dword ptr [0x00607b18]         ; 005a9dc6 | DAT_00607b18
    MOV ESI,EAX                         ; 005a9dcc
    ADD ESP,0x4                         ; 005a9dce
    TEST EAX,EAX                        ; 005a9dd1
    JZ 0x005a9deb                       ; 005a9dd3
        ;   XREF to: 005a9deb (CONDITIONAL_JUMP)  ; LAB_005a9deb
    PUSH EBX                            ; 005a9dd5
    CALL dword ptr [0x00607b1c]         ; 005a9dd6 | DAT_00607b1c
    ADD ESP,0x4                         ; 005a9ddc
    PUSH ESI                            ; 005a9ddf
    CALL dword ptr [0x00607b24]         ; 005a9de0 | DAT_00607b24
    ADD ESP,0x4                         ; 005a9de6
    JMP 0x005a9e0f                      ; 005a9de9
        ;   XREF to: 005a9e0f (UNCONDITIONAL_JUMP)  ; LAB_005a9e0f
    TEST EBP,EBP                        ; 005a9deb
        ;   Label: LAB_005a9deb
    JNZ 0x005a9e0f                      ; 005a9ded
        ;   XREF to: 005a9e0f (CONDITIONAL_JUMP)  ; LAB_005a9e0f
    MOV ESI,dword ptr [ESP]             ; 005a9def
    PUSH ESI                            ; 005a9df2
    CALL dword ptr CS:[0x5b3518]        ; 005a9df3 | PTR_CloseHandle_005b3518
    TEST EAX,EAX                        ; 005a9dfa
    JNZ 0x005a9e0f                      ; 005a9dfc
        ;   XREF to: 005a9e0f (CONDITIONAL_JUMP)  ; LAB_005a9e0f
    PUSH 0x4                            ; 005a9dfe
    MOV EDI,0xffffffff                  ; 005a9e00
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a9e05
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005a9e0a
    JMP 0x005a9e1a                      ; 005a9e0d
        ;   XREF to: 005a9e1a (UNCONDITIONAL_JUMP)  ; LAB_005a9e1a
    PUSH 0x0                            ; 005a9e0f
        ;   Label: LAB_005a9e0f
    PUSH EBX                            ; 005a9e11
    CALL crt_unknown.c_FUN_005ab978     ; 005a9e12
        ;   XREF to: 005ab978 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab978()
    ADD ESP,0x8                         ; 005a9e17
    MOV EAX,EDI                         ; 005a9e1a
        ;   Label: LAB_005a9e1a
    ADD ESP,0x4                         ; 005a9e1c
        ;   Label: LAB_005a9e1c
    POP EBP                             ; 005a9e1f
    POP EDI                             ; 005a9e20
    POP ESI                             ; 005a9e21
    POP EBX                             ; 005a9e22
    RET                                 ; 005a9e23

