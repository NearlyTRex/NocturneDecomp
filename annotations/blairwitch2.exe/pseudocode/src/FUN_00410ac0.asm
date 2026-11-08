; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410ac0(int param_1)
;
;
; XREF[4]:
;   FUN_00410960 at 00410965
;   FUN_00410990 at 00410996
;   FUN_004109d0 at 004109d6
;   FUN_00410a30 at 00410a89
;
; Referenced Globals:
;   TerminatedCString s_CBaron_005cb608
;   undefined4 DAT_00618170
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_007bc518
;   undefined4 DAT_01d182f0
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_0040c5a0
;   FUN_0040c8f0
;   FUN_004fc200
;   FUN_004fcda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410ac0
        ;   Label: FUN_00410ac0
    PUSH ESI                            ; 00410ac1
    PUSH EDI                            ; 00410ac2
    PUSH EBP                            ; 00410ac3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00410ac4
    CMP dword ptr [EDI + 0x6d4],0x0     ; 00410ac8
    JNZ 0x00410aeb                      ; 00410acf
        ;   XREF to: 00410aeb (CONDITIONAL_JUMP)  ; LAB_00410aeb
    XOR ESI,ESI                         ; 00410ad1
    XOR EBX,EBX                         ; 00410ad3
    MOV EAX,[0x0061b5a8]                ; 00410ad5 | DAT_0061b5a8 | DAT_01e661b8
        ;   Label: LAB_00410ad5
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00410ada | DAT_01fb331c
    JL 0x00410af0                       ; 00410ae0
        ;   XREF to: 00410af0 (CONDITIONAL_JUMP)  ; LAB_00410af0
    CMP dword ptr [EDI + 0x6d4],0x0     ; 00410ae2
        ;   Label: LAB_00410ae2
    JZ 0x00410b17                       ; 00410ae9
        ;   XREF to: 00410b17 (CONDITIONAL_JUMP)  ; LAB_00410b17
    POP EBP                             ; 00410aeb
        ;   Label: LAB_00410aeb
    POP EDI                             ; 00410aec
    POP ESI                             ; 00410aed
    POP EBX                             ; 00410aee
    RET                                 ; 00410aef
    MOV EBP,dword ptr [0x007bc518]      ; 00410af0 | DAT_007bc518
        ;   Label: LAB_00410af0
    PUSH EBP                            ; 00410af6
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 00410af7 | DAT_01fb3320
    PUSH EDX                            ; 00410afe
    CALL FUN_0040c8f0                   ; 00410aff
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 00410b04
    MOV dword ptr [EDI + 0x6d4],EAX     ; 00410b07
    TEST EAX,EAX                        ; 00410b0d
    JNZ 0x00410ae2                      ; 00410b0f
        ;   XREF to: 00410ae2 (CONDITIONAL_JUMP)  ; LAB_00410ae2
    INC EBX                             ; 00410b11
    ADD ESI,0x4                         ; 00410b12
    JMP 0x00410ad5                      ; 00410b15
        ;   XREF to: 00410ad5 (UNCONDITIONAL_JUMP)  ; LAB_00410ad5
    PUSH 0x5cb608                       ; 00410b17 | = "CBaron"
        ;   Label: LAB_00410b17
    CALL FUN_0040c5a0                   ; 00410b1c
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    ADD ESP,0x4                         ; 00410b21
    PUSH EAX                            ; 00410b24
    MOV EBP,dword ptr [0x00618170]      ; 00410b25 | DAT_00618170
    PUSH EBP                            ; 00410b2b | DAT_01d182f0
    MOV dword ptr [EDI + 0x6d4],EAX     ; 00410b2c
    CALL FUN_004fcda0                   ; 00410b32
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcda0()
    ADD ESP,0x8                         ; 00410b37
    MOV EAX,dword ptr [EDI + 0x6d4]     ; 00410b3a
    PUSH EAX                            ; 00410b40
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 00410b41
    CALL dword ptr [EBX + 0x8]          ; 00410b47
    ADD ESP,0x4                         ; 00410b4a
    MOV EAX,dword ptr [EDI + 0x6d4]     ; 00410b4d
    PUSH EAX                            ; 00410b53
    MOV EDX,dword ptr [0x00618170]      ; 00410b54 | DAT_00618170
    PUSH EDX                            ; 00410b5a | DAT_01d182f0
    LEA ESI,[EDI + 0x30]                ; 00410b5b
    CALL FUN_004fc200                   ; 00410b5e
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc200()
    ADD ESP,0x8                         ; 00410b63
    ADD EDI,0x20                        ; 00410b66
    PUSH ESI                            ; 00410b69
    MOV EAX,dword ptr [EDI + 0x6b4]     ; 00410b6a
    PUSH EDI                            ; 00410b70
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 00410b71
    PUSH EAX                            ; 00410b77
    CALL dword ptr [EBX + 0x70]         ; 00410b78
    ADD ESP,0xc                         ; 00410b7b
    POP EBP                             ; 00410b7e
    POP EDI                             ; 00410b7f
    POP ESI                             ; 00410b80
    POP EBX                             ; 00410b81
    RET                                 ; 00410b82

