; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00570bd0(undefined4 *param_1,short *param_2,uint param_3)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_0056d608 at 0056d5b0
;
; Called Functions:
;   FUN_0056f3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570bd0
        ;   Label: FUN_00570bd0
    PUSH ESI                            ; 00570bd1
    PUSH EDI                            ; 00570bd2
    PUSH EBP                            ; 00570bd3
    SUB ESP,0x4                         ; 00570bd4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00570bd7
    MOV EDX,dword ptr [ESP + 0x18]      ; 00570bdb
    XOR EBP,EBP                         ; 00570bdf
    TEST EDX,EDX                        ; 00570be1
    JZ 0x00570c60                       ; 00570be3
        ;   XREF to: 00570c60 (CONDITIONAL_JUMP)  ; LAB_00570c60
    CMP dword ptr [ESP + 0x20],0x0      ; 00570be9
        ;   Label: LAB_00570be9
    JBE 0x00570c87                      ; 00570bee
        ;   XREF to: 00570c87 (CONDITIONAL_JUMP)  ; LAB_00570c87
    MOV CX,word ptr [EBX]               ; 00570bf4
    TEST CX,CX                          ; 00570bf7
    JZ 0x00570c22                       ; 00570bfa
        ;   XREF to: 00570c22 (CONDITIONAL_JUMP)  ; LAB_00570c22
    XOR EAX,EAX                         ; 00570bfc
    MOV AX,CX                           ; 00570bfe
    PUSH EAX                            ; 00570c01
    LEA EAX,[ESP + 0x4]                 ; 00570c02
    PUSH EAX                            ; 00570c06
    CALL FUN_0056f3a0                   ; 00570c07
        ;   XREF to: 0056f3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f3a0()
    MOV EDX,EAX                         ; 00570c0c
    ADD ESP,0x8                         ; 00570c0e
    CMP EAX,-0x1                        ; 00570c11
    JZ 0x00570c89                       ; 00570c14
        ;   XREF to: 00570c89 (CONDITIONAL_JUMP)  ; LAB_00570c89
    CMP EAX,dword ptr [ESP + 0x20]      ; 00570c1a
    JA 0x00570c87                       ; 00570c1e
        ;   XREF to: 00570c87 (CONDITIONAL_JUMP)  ; LAB_00570c87
    JMP 0x00570c2b                      ; 00570c20
        ;   XREF to: 00570c2b (UNCONDITIONAL_JUMP)  ; LAB_00570c2b
    MOV EAX,dword ptr [ESP + 0x18]      ; 00570c22
        ;   Label: LAB_00570c22
    MOV byte ptr [EAX],0x0              ; 00570c26
    JMP 0x00570c87                      ; 00570c29
        ;   XREF to: 00570c87 (UNCONDITIONAL_JUMP)  ; LAB_00570c87
    MOV ESI,ESP                         ; 00570c2b
        ;   Label: LAB_00570c2b
    MOV EDI,dword ptr [ESP + 0x18]      ; 00570c2d
    MOV ECX,EAX                         ; 00570c31
    PUSH ES                             ; 00570c33
    MOV AX,DS                           ; 00570c34
    MOV ES,AX                           ; 00570c36
    PUSH EDI                            ; 00570c38
    MOV EAX,ECX                         ; 00570c39
    SHR ECX,0x2                         ; 00570c3b
    MOVSD.REP ES:EDI,ESI                ; 00570c3e
    MOV CL,AL                           ; 00570c40
    AND CL,0x3                          ; 00570c42
    MOVSB.REP ES:EDI,ESI                ; 00570c45
    POP EDI                             ; 00570c47
    POP ES                              ; 00570c48
    ADD EBX,0x2                         ; 00570c49
    ADD EBP,EDX                         ; 00570c4c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00570c4e
    ADD EDI,EDX                         ; 00570c52
    SUB EAX,EDX                         ; 00570c54
    MOV dword ptr [ESP + 0x18],EDI      ; 00570c56
    MOV dword ptr [ESP + 0x20],EAX      ; 00570c5a
    JMP 0x00570be9                      ; 00570c5e
        ;   XREF to: 00570be9 (UNCONDITIONAL_JUMP)  ; LAB_00570be9
    MOV DX,word ptr [EBX]               ; 00570c60
        ;   Label: LAB_00570c60
    TEST DX,DX                          ; 00570c63
    JZ 0x00570c87                       ; 00570c66
        ;   XREF to: 00570c87 (CONDITIONAL_JUMP)  ; LAB_00570c87
    XOR EAX,EAX                         ; 00570c68
    MOV AX,DX                           ; 00570c6a
    PUSH EAX                            ; 00570c6d
    LEA EAX,[ESP + 0x4]                 ; 00570c6e
    PUSH EAX                            ; 00570c72
    CALL FUN_0056f3a0                   ; 00570c73
        ;   XREF to: 0056f3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f3a0()
    ADD ESP,0x8                         ; 00570c78
    CMP EAX,-0x1                        ; 00570c7b
    JZ 0x00570c89                       ; 00570c7e
        ;   XREF to: 00570c89 (CONDITIONAL_JUMP)  ; LAB_00570c89
    ADD EBX,0x2                         ; 00570c80
    ADD EBP,EAX                         ; 00570c83
    JMP 0x00570c60                      ; 00570c85
        ;   XREF to: 00570c60 (UNCONDITIONAL_JUMP)  ; LAB_00570c60
    MOV EAX,EBP                         ; 00570c87
        ;   Label: LAB_00570c87
    ADD ESP,0x4                         ; 00570c89
        ;   Label: LAB_00570c89
    POP EBP                             ; 00570c8c
    POP EDI                             ; 00570c8d
    POP ESI                             ; 00570c8e
    POP EBX                             ; 00570c8f
    RET                                 ; 00570c90

