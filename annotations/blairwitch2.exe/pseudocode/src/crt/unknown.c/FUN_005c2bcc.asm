; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c2bcc(void)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c2620_0061f6c8 = 005c2620
;
; Called Functions:
;   crt_unknown.c_FUN_005c26c8
;   crt_unknown.c_FUN_005c26f4
;   crt_unknown.c_FUN_005c2a94
;   crt_unknown.c_FUN_005c3750
;   crt_unknown.c_FUN_005c4cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2bcc
        ;   Label: crt_unknown.c_FUN_005c2bcc
    PUSH ESI                            ; 005c2bcd
    PUSH 0x2680910                      ; 005c2bce
    MOV EBX,0x2680930                   ; 005c2bd3
    CALL dword ptr [0x0061f6c8]         ; 005c2bd8 | PTR_crt_unknown.c_FUN_005c2620_0061f6c8
    ADD ESP,0x4                         ; 005c2bde
    LEA ESI,[EBX + 0x100]               ; 005c2be1
    PUSH EBX                            ; 005c2be7
        ;   Label: LAB_005c2be7
    CALL dword ptr [0x0061f6c8]         ; 005c2be8 | PTR_crt_unknown.c_FUN_005c2620_0061f6c8
    ADD EBX,0x10                        ; 005c2bee
    ADD ESP,0x4                         ; 005c2bf1
    CMP EBX,ESI                         ; 005c2bf4
    JNZ 0x005c2be7                      ; 005c2bf6
        ;   XREF to: 005c2be7 (CONDITIONAL_JUMP)  ; LAB_005c2be7
    PUSH 0x2681060                      ; 005c2bf8
    CALL dword ptr [0x0061f6c8]         ; 005c2bfd | PTR_crt_unknown.c_FUN_005c2620_0061f6c8
    ADD ESP,0x4                         ; 005c2c03
    CALL crt_unknown.c_FUN_005c26f4     ; 005c2c06
        ;   XREF to: 005c26f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26f4()
    CALL crt_unknown.c_FUN_005c4cb0     ; 005c2c0b
        ;   XREF to: 005c4cb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4cb0()
    CALL crt_unknown.c_FUN_005c3750     ; 005c2c10
        ;   XREF to: 005c3750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3750()
    PUSH 0x2680a30                      ; 005c2c15
    CALL dword ptr [0x0061f6c8]         ; 005c2c1a | PTR_crt_unknown.c_FUN_005c2620_0061f6c8
    ADD ESP,0x4                         ; 005c2c20
    PUSH 0x2680920                      ; 005c2c23
    CALL dword ptr [0x0061f6c8]         ; 005c2c28 | PTR_crt_unknown.c_FUN_005c2620_0061f6c8
    ADD ESP,0x4                         ; 005c2c2e
    PUSH 0x2681050                      ; 005c2c31
    CALL dword ptr [0x0061f6c8]         ; 005c2c36 | PTR_crt_unknown.c_FUN_005c2620_0061f6c8
    ADD ESP,0x4                         ; 005c2c3c
    PUSH 0x2681040                      ; 005c2c3f
    CALL dword ptr [0x0061f6c8]         ; 005c2c44 | PTR_crt_unknown.c_FUN_005c2620_0061f6c8
    ADD ESP,0x4                         ; 005c2c4a
    CALL crt_unknown.c_FUN_005c26c8     ; 005c2c4d
        ;   XREF to: 005c26c8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c26c8()
    CALL crt_unknown.c_FUN_005c2a94     ; 005c2c52
        ;   XREF to: 005c2a94 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2a94()
    POP ESI                             ; 005c2c57
    POP EBX                             ; 005c2c58
    RET                                 ; 005c2c59

