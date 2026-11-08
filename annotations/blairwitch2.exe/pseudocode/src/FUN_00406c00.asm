; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406c00(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00403a20
;   FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406c00
        ;   Label: FUN_00406c00
    PUSH ESI                            ; 00406c01
    PUSH EBP                            ; 00406c02
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406c03
    LEA ESI,[EBX + 0x18]                ; 00406c07
    LEA EAX,[EBX + 0x8]                 ; 00406c0a
    PUSH EAX                            ; 00406c0d
    CALL FUN_00403970                   ; 00406c0e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00406c13
    TEST EAX,EAX                        ; 00406c16
    JZ 0x00406c64                       ; 00406c18
        ;   XREF to: 00406c64 (CONDITIONAL_JUMP)  ; LAB_00406c64
    CMP dword ptr [0x01c38b40],0x0      ; 00406c1a | DAT_01c38b40
    JNZ 0x00406c7f                      ; 00406c21
        ;   XREF to: 00406c7f (CONDITIONAL_JUMP)  ; LAB_00406c7f
    CMP dword ptr [0x006141c0],0x20     ; 00406c23 | DAT_006141c0
    JNZ 0x00406c73                      ; 00406c2a
        ;   XREF to: 00406c73 (CONDITIONAL_JUMP)  ; LAB_00406c73
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406c2c | DAT_01c35e6c
    PUSH EDI                            ; 00406c36
        ;   Label: LAB_00406c36
    MOV EDI,0x163                       ; 00406c37
    MOV EBP,0x1                         ; 00406c3c
    PUSH EBX                            ; 00406c41
    MOV dword ptr [0x01c38b54],EDI      ; 00406c42 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00406c48 | DAT_01c38b58
    CALL FUN_00403a20                   ; 00406c4e
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00403a20()
    ADD ESP,0x4                         ; 00406c53
    PUSH ESI                            ; 00406c56
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406c57
    PUSH EAX                            ; 00406c5a
    CALL FUN_00431d90                   ; 00406c5b
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00406c60
    POP EDI                             ; 00406c63
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406c64
        ;   Label: LAB_00406c64
    ADD EBX,0x18                        ; 00406c67
    SHL EAX,0x2                         ; 00406c6a
    ADD EAX,EBX                         ; 00406c6d
    POP EBP                             ; 00406c6f
    POP ESI                             ; 00406c70
    POP EBX                             ; 00406c71
    RET                                 ; 00406c72
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406c73 | DAT_01c35e6c
        ;   Label: LAB_00406c73
    JMP 0x00406c36                      ; 00406c7d
        ;   XREF to: 00406c36 (UNCONDITIONAL_JUMP)  ; LAB_00406c36
    CMP dword ptr [0x006141c0],0x20     ; 00406c7f | DAT_006141c0
        ;   Label: LAB_00406c7f
    JNZ 0x00406c94                      ; 00406c86
        ;   XREF to: 00406c94 (CONDITIONAL_JUMP)  ; LAB_00406c94
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406c88 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00406c36                      ; 00406c92
        ;   XREF to: 00406c36 (UNCONDITIONAL_JUMP)  ; LAB_00406c36
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406c94 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00406c94
    JMP 0x00406c36                      ; 00406c9e
        ;   XREF to: 00406c36 (UNCONDITIONAL_JUMP)  ; LAB_00406c36

