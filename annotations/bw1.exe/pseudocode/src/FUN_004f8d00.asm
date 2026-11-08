; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8d00(int param_1,int param_2,int param_3)
;
;
; XREF[7]:
;   FUN_00474400 at 004746a7
;   FUN_004f6fa0 at 004f6fc3
;   FUN_004f9bd0 at 004f9dcd
;   FUN_004fc310 at 004fc34c
;   FUN_00544460 at 00548a60
;   FUN_005907a0 at 0059098d
;   FUN_005a6da0 at 005a6f86
;
; Called Functions:
;   FUN_00408560
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8d00
        ;   Label: FUN_004f8d00
    PUSH ESI                            ; 004f8d01
    PUSH EDI                            ; 004f8d02
    PUSH EBP                            ; 004f8d03
    MOV ECX,dword ptr [ESP + 0x14]      ; 004f8d04
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f8d08
    CMP EBX,dword ptr [ECX + 0x338]     ; 004f8d0c
    JZ 0x004f8d73                       ; 004f8d12
        ;   XREF to: 004f8d73 (CONDITIONAL_JUMP)  ; LAB_004f8d73
    CMP EBX,dword ptr [ECX + 0x33c]     ; 004f8d14
        ;   Label: LAB_004f8d14
    JNZ 0x004f8d26                      ; 004f8d1a
        ;   XREF to: 004f8d26 (CONDITIONAL_JUMP)  ; LAB_004f8d26
    MOV dword ptr [ECX + 0x33c],0x0     ; 004f8d1c
    CMP EBX,dword ptr [ECX + 0x45c]     ; 004f8d26
        ;   Label: LAB_004f8d26
    JNZ 0x004f8d38                      ; 004f8d2c
        ;   XREF to: 004f8d38 (CONDITIONAL_JUMP)  ; LAB_004f8d38
    MOV dword ptr [ECX + 0x45c],0x0     ; 004f8d2e
    CMP EBX,dword ptr [ECX + 0x460]     ; 004f8d38
        ;   Label: LAB_004f8d38
    JNZ 0x004f8d4a                      ; 004f8d3e
        ;   XREF to: 004f8d4a (CONDITIONAL_JUMP)  ; LAB_004f8d4a
    MOV dword ptr [ECX + 0x460],0x0     ; 004f8d40
    MOV EDX,dword ptr [ECX + 0x10]      ; 004f8d4a
        ;   Label: LAB_004f8d4a
    XOR EAX,EAX                         ; 004f8d4d
    TEST EDX,EDX                        ; 004f8d4f
    JLE 0x004f8d6e                      ; 004f8d51
        ;   XREF to: 004f8d6e (CONDITIONAL_JUMP)  ; LAB_004f8d6e
    MOV EDX,ECX                         ; 004f8d53
    MOV EDI,dword ptr [EDX + 0x14]      ; 004f8d55
        ;   Label: LAB_004f8d55
    LEA ESI,[EAX*0x4 + 0x0]             ; 004f8d58
    CMP EBX,EDI                         ; 004f8d5f
    JZ 0x004f8d7f                       ; 004f8d61
        ;   XREF to: 004f8d7f (CONDITIONAL_JUMP)  ; LAB_004f8d7f
    INC EAX                             ; 004f8d63
    MOV ESI,dword ptr [ECX + 0x10]      ; 004f8d64
    ADD EDX,0x4                         ; 004f8d67
    CMP EAX,ESI                         ; 004f8d6a
    JL 0x004f8d55                       ; 004f8d6c
        ;   XREF to: 004f8d55 (CONDITIONAL_JUMP)  ; LAB_004f8d55
    POP EBP                             ; 004f8d6e
        ;   Label: LAB_004f8d6e
    POP EDI                             ; 004f8d6f
    POP ESI                             ; 004f8d70
    POP EBX                             ; 004f8d71
    RET                                 ; 004f8d72
    MOV dword ptr [ECX + 0x338],0x0     ; 004f8d73
        ;   Label: LAB_004f8d73
    JMP 0x004f8d14                      ; 004f8d7d
        ;   XREF to: 004f8d14 (UNCONDITIONAL_JUMP)  ; LAB_004f8d14
    MOV EBP,dword ptr [ECX + 0x10]      ; 004f8d7f
        ;   Label: LAB_004f8d7f
    DEC EBP                             ; 004f8d82
    MOV EDX,EBP                         ; 004f8d83
    SUB EDX,EAX                         ; 004f8d85
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f8d87
    ADD ECX,0x14                        ; 004f8d8e
    PUSH EAX                            ; 004f8d91
    LEA EAX,[ESI + 0x4]                 ; 004f8d92
    ADD EAX,ECX                         ; 004f8d95
    PUSH EAX                            ; 004f8d97
    MOV dword ptr [ECX + -0x4],EBP      ; 004f8d98
    ADD ECX,ESI                         ; 004f8d9b
    PUSH ECX                            ; 004f8d9d
    CALL FUN_005c25d0                   ; 004f8d9e
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 004f8da3
    CMP dword ptr [ESP + 0x1c],0x0      ; 004f8da6
    JZ 0x004f8d6e                       ; 004f8dab
        ;   XREF to: 004f8d6e (CONDITIONAL_JUMP)  ; LAB_004f8d6e
    PUSH EDI                            ; 004f8dad
    CALL FUN_00408560                   ; 004f8dae
        ;   XREF to: 00408560 (UNCONDITIONAL_CALL)  ; undefined FUN_00408560()
    ADD ESP,0x4                         ; 004f8db3
    POP EBP                             ; 004f8db6
    POP EDI                             ; 004f8db7
    POP ESI                             ; 004f8db8
    POP EBX                             ; 004f8db9
    RET                                 ; 004f8dba

