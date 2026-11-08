; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00404b00(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006093bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_0070ca5c
;   undefined4 DAT_0070ca74
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01c35e64
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_004039e0
;   FUN_00431d90
;   FUN_004e28b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404b00
        ;   Label: FUN_00404b00
    PUSH ESI                            ; 00404b01
    PUSH EDI                            ; 00404b02
    PUSH EBP                            ; 00404b03
    MOV ESI,dword ptr [0x01c35e6c]      ; 00404b04 | DAT_01c35e6c
    MOV EBX,dword ptr [ESP + 0x14]      ; 00404b0a
    LEA EDI,[EBX + 0x18]                ; 00404b0e
    LEA EAX,[EBX + 0x8]                 ; 00404b11
    PUSH EAX                            ; 00404b14
    CALL FUN_00403970                   ; 00404b15
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00404b1a
    TEST EAX,EAX                        ; 00404b1d
    JZ 0x00404b98                       ; 00404b1f
        ;   XREF to: 00404b98 (CONDITIONAL_JUMP)  ; LAB_00404b98
    CMP dword ptr [0x0070ca74],0x0      ; 00404b21 | DAT_0070ca74
    JZ 0x00404bcf                       ; 00404b28
        ;   XREF to: 00404bcf (CONDITIONAL_JUMP)  ; LAB_00404bcf
    CMP dword ptr [0x01c38b40],0x0      ; 00404b2e | DAT_01c38b40
    JNZ 0x00404bb5                      ; 00404b35
        ;   XREF to: 00404bb5 (CONDITIONAL_JUMP)  ; LAB_00404bb5
    CMP dword ptr [0x006141c0],0x20     ; 00404b3b | DAT_006141c0
    JNZ 0x00404bae                      ; 00404b42
        ;   XREF to: 00404bae (CONDITIONAL_JUMP)  ; LAB_00404bae
    MOV ESI,0x55d0b3                    ; 00404b44
    XOR EDX,EDX                         ; 00404b49
        ;   Label: LAB_00404b49
    MOV dword ptr [0x01c35e6c],ESI      ; 00404b4b | DAT_01c35e6c
    MOV dword ptr [0x01c38b58],EDX      ; 00404b51 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDX      ; 00404b57 | DAT_01c38b54
        ;   Label: LAB_00404b57
    MOV EBP,dword ptr [EBX + 0x10]      ; 00404b5d
    PUSH EBP                            ; 00404b60
    MOV EAX,dword ptr [EBX + 0xc]       ; 00404b61
    PUSH EAX                            ; 00404b64
    MOV EDX,dword ptr [EBX + 0x8]       ; 00404b65
    PUSH EDX                            ; 00404b68
    CALL FUN_004e28b0                   ; 00404b69
        ;   XREF to: 004e28b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e28b0()
    ADD ESP,0xc                         ; 00404b6e
    PUSH EAX                            ; 00404b71
    MOV ECX,dword ptr [0x0070ca5c]      ; 00404b72 | DAT_0070ca5c
    PUSH ECX                            ; 00404b78
    MOV [0x01c35e64],EAX                ; 00404b79 | DAT_01c35e64
    CALL FUN_004039e0                   ; 00404b7e
        ;   XREF to: 004039e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039e0()
    ADD ESP,0x8                         ; 00404b83
    PUSH EDI                            ; 00404b86
    MOV EDI,dword ptr [EBX + 0x4]       ; 00404b87
    PUSH EDI                            ; 00404b8a
    MOV [0x01c35e60],EAX                ; 00404b8b | DAT_01c35e60
    CALL FUN_00431d90                   ; 00404b90
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00404b95
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404b98
        ;   Label: LAB_00404b98
    ADD EBX,0x18                        ; 00404b9b
    SHL EAX,0x2                         ; 00404b9e
    MOV ESI,dword ptr [0x01c35e6c]      ; 00404ba1 | DAT_01c35e6c
    ADD EAX,EBX                         ; 00404ba7
    POP EBP                             ; 00404ba9
    POP EDI                             ; 00404baa
    POP ESI                             ; 00404bab
    POP EBX                             ; 00404bac
    RET                                 ; 00404bad
    MOV ESI,0x55d2e9                    ; 00404bae
        ;   Label: LAB_00404bae
    JMP 0x00404b49                      ; 00404bb3
        ;   XREF to: 00404b49 (UNCONDITIONAL_JUMP)  ; LAB_00404b49
    CMP dword ptr [0x006141c0],0x20     ; 00404bb5 | DAT_006141c0
        ;   Label: LAB_00404bb5
    JNZ 0x00404bc5                      ; 00404bbc
        ;   XREF to: 00404bc5 (CONDITIONAL_JUMP)  ; LAB_00404bc5
    MOV ESI,0x55b3b1                    ; 00404bbe | LAB_0055b3b1
    JMP 0x00404b49                      ; 00404bc3
        ;   XREF to: 00404b49 (UNCONDITIONAL_JUMP)  ; LAB_00404b49
    MOV ESI,0x55bb93                    ; 00404bc5 | LAB_0055bb93
        ;   Label: LAB_00404bc5
    JMP 0x00404b49                      ; 00404bca
        ;   XREF to: 00404b49 (UNCONDITIONAL_JUMP)  ; LAB_00404b49
    CMP dword ptr [0x006093bc],0x0      ; 00404bcf | DAT_006093bc
        ;   Label: LAB_00404bcf
    JZ 0x00404c28                       ; 00404bd6
        ;   XREF to: 00404c28 (CONDITIONAL_JUMP)  ; LAB_00404c28
    CMP dword ptr [0x01c38b40],0x0      ; 00404bd8 | DAT_01c38b40
    JNZ 0x00404c11                      ; 00404bdf
        ;   XREF to: 00404c11 (CONDITIONAL_JUMP)  ; LAB_00404c11
    CMP dword ptr [0x006141c0],0x20     ; 00404be1 | DAT_006141c0
    JNZ 0x00404c0a                      ; 00404be8
        ;   XREF to: 00404c0a (CONDITIONAL_JUMP)  ; LAB_00404c0a
    MOV ESI,0x55d0b3                    ; 00404bea
    MOV ECX,0x1                         ; 00404bef
        ;   Label: LAB_00404bef
    MOV EDX,0xd0                        ; 00404bf4
    MOV dword ptr [0x01c35e6c],ESI      ; 00404bf9 | DAT_01c35e6c
    MOV dword ptr [0x01c38b58],ECX      ; 00404bff | DAT_01c38b58
    JMP 0x00404b57                      ; 00404c05
        ;   XREF to: 00404b57 (UNCONDITIONAL_JUMP)  ; LAB_00404b57
    MOV ESI,0x55d2e9                    ; 00404c0a
        ;   Label: LAB_00404c0a
    JMP 0x00404bef                      ; 00404c0f
        ;   XREF to: 00404bef (UNCONDITIONAL_JUMP)  ; LAB_00404bef
    CMP dword ptr [0x006141c0],0x20     ; 00404c11 | DAT_006141c0
        ;   Label: LAB_00404c11
    JNZ 0x00404c21                      ; 00404c18
        ;   XREF to: 00404c21 (CONDITIONAL_JUMP)  ; LAB_00404c21
    MOV ESI,0x55b3b1                    ; 00404c1a | LAB_0055b3b1
    JMP 0x00404bef                      ; 00404c1f
        ;   XREF to: 00404bef (UNCONDITIONAL_JUMP)  ; LAB_00404bef
    MOV ESI,0x55bb93                    ; 00404c21 | LAB_0055bb93
        ;   Label: LAB_00404c21
    JMP 0x00404bef                      ; 00404c26
        ;   XREF to: 00404bef (UNCONDITIONAL_JUMP)  ; LAB_00404bef
    CMP dword ptr [0x01c38b40],0x0      ; 00404c28 | DAT_01c38b40
        ;   Label: LAB_00404c28
    JNZ 0x00404c5e                      ; 00404c2f
        ;   XREF to: 00404c5e (CONDITIONAL_JUMP)  ; LAB_00404c5e
    CMP dword ptr [0x006141c0],0x20     ; 00404c31 | DAT_006141c0
    JNZ 0x00404c57                      ; 00404c38
        ;   XREF to: 00404c57 (CONDITIONAL_JUMP)  ; LAB_00404c57
    MOV ESI,0x55d0b3                    ; 00404c3a
    MOV EDX,0x10                        ; 00404c3f
        ;   Label: LAB_00404c3f
    XOR ECX,ECX                         ; 00404c44
    MOV dword ptr [0x01c35e6c],ESI      ; 00404c46 | DAT_01c35e6c
    MOV dword ptr [0x01c38b58],ECX      ; 00404c4c | DAT_01c38b58
    JMP 0x00404b57                      ; 00404c52
        ;   XREF to: 00404b57 (UNCONDITIONAL_JUMP)  ; LAB_00404b57
    MOV ESI,0x55d2e9                    ; 00404c57
        ;   Label: LAB_00404c57
    JMP 0x00404c3f                      ; 00404c5c
        ;   XREF to: 00404c3f (UNCONDITIONAL_JUMP)  ; LAB_00404c3f
    CMP dword ptr [0x006141c0],0x20     ; 00404c5e | DAT_006141c0
        ;   Label: LAB_00404c5e
    JNZ 0x00404c6e                      ; 00404c65
        ;   XREF to: 00404c6e (CONDITIONAL_JUMP)  ; LAB_00404c6e
    MOV ESI,0x55b3b1                    ; 00404c67 | LAB_0055b3b1
    JMP 0x00404c3f                      ; 00404c6c
        ;   XREF to: 00404c3f (UNCONDITIONAL_JUMP)  ; LAB_00404c3f
    MOV ESI,0x55bb93                    ; 00404c6e | LAB_0055bb93
        ;   Label: LAB_00404c6e
    JMP 0x00404c3f                      ; 00404c73
        ;   XREF to: 00404c3f (UNCONDITIONAL_JUMP)  ; LAB_00404c3f

