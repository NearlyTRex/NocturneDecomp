; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c4080(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0b3c at 005c0b6f
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce18_0061f2b4 = 005bce18
;   undefined4 DAT_0061f480
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005bec40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4080
        ;   Label: crt_unknown.c_FUN_005c4080
    PUSH ESI                            ; 005c4081
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c4082
    TEST EBX,EBX                        ; 005c4086
    JL 0x005c4092                       ; 005c4088
        ;   XREF to: 005c4092 (CONDITIONAL_JUMP)  ; LAB_005c4092
    CMP EBX,dword ptr [0x0061f480]      ; 005c408a | DAT_0061f480
    JBE 0x005c40a4                      ; 005c4090
        ;   XREF to: 005c40a4 (CONDITIONAL_JUMP)  ; LAB_005c40a4
    PUSH 0x4                            ; 005c4092
        ;   Label: LAB_005c4092
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c4094
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005c4099
    ADD ESP,0x4                         ; 005c409e
    POP ESI                             ; 005c40a1
    POP EBX                             ; 005c40a2
    RET                                 ; 005c40a3
    PUSH EBX                            ; 005c40a4
        ;   Label: LAB_005c40a4
    CALL dword ptr [0x0061f2a8]         ; 005c40a5 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    ADD ESP,0x4                         ; 005c40ab
    PUSH EBX                            ; 005c40ae
    CALL crt_unknown.c_FUN_005bec40     ; 005c40af
        ;   XREF to: 005bec40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bec40()
    ADD ESP,0x4                         ; 005c40b4
    PUSH EBX                            ; 005c40b7
    MOV ESI,EAX                         ; 005c40b8
    CALL dword ptr [0x0061f2ac]         ; 005c40ba | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005c40c0
    PUSH EBX                            ; 005c40c3
    CALL dword ptr [0x0061f2b4]         ; 005c40c4 | PTR_crt_unknown.c_FUN_005bce18_0061f2b4
    ADD ESP,0x4                         ; 005c40ca
    MOV EAX,ESI                         ; 005c40cd
    POP ESI                             ; 005c40cf
    POP EBX                             ; 005c40d0
    RET                                 ; 005c40d1

