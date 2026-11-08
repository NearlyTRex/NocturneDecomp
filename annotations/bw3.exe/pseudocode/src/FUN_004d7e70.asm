; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7e70(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_imp_die_wav_005c567f+1
;   TerminatedCString s_imp_hurt_wav_005c568d
;   undefined4 DAT_005c56a0
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_00408b80
;   FUN_00489b80
;   FUN_004a23c0
;   FUN_004d7bd0
;   FUN_004fc070
;   FUN_004fc0d0
;   FUN_00556700
;   FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7e70
        ;   Label: FUN_004d7e70
    PUSH EBP                            ; 004d7e71
    SUB ESP,0x20                        ; 004d7e72
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004d7e75
    MOV EDX,dword ptr [EBP + 0xd054]    ; 004d7e79
    PUSH EDX                            ; 004d7e7f
    CALL FUN_00556be0                   ; 004d7e80
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 004d7e85
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d7e88
    CMP dword ptr [EAX + 0x28],0x8      ; 004d7e8c
    JNZ 0x004d7eee                      ; 004d7e90
        ;   XREF to: 004d7eee (CONDITIONAL_JUMP)  ; LAB_004d7eee
    PUSH EDI                            ; 004d7e92
    PUSH ESI                            ; 004d7e93
    FLD float ptr [EAX + 0x4]           ; 004d7e94
    ADD EAX,0x1c                        ; 004d7e97
    FLD ST0                             ; 004d7e9a
    FMUL double ptr [0x005c56a0]        ; 004d7e9c | DAT_005c56a0
    PUSH EAX                            ; 004d7ea2
    LEA ESI,[ESP + 0xc]                 ; 004d7ea3
    LEA EDI,[ESP + 0x18]                ; 004d7ea7
    PUSH EBP                            ; 004d7eab
    FSTP ST1                            ; 004d7eac
    FSTP float ptr [EAX + -0x18]        ; 004d7eae
    CALL FUN_00408b80                   ; 004d7eb1
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x10]                ; 004d7eb6
    ADD ESP,0x8                         ; 004d7eba
    XOR EBX,EBX                         ; 004d7ebd
    MOVSD ES:EDI,ESI                    ; 004d7ebf
    MOVSD ES:EDI,ESI                    ; 004d7ec0
    MOVSD ES:EDI,ESI                    ; 004d7ec1
    MOV ESI,0x4000                      ; 004d7ec2
    PUSH 0xffff                         ; 004d7ec7
        ;   Label: LAB_004d7ec7
    PUSH 0x0                            ; 004d7ecc
    PUSH ESI                            ; 004d7ece
    PUSH ESI                            ; 004d7ecf
    PUSH 0x0                            ; 004d7ed0
    LEA EAX,[ESP + 0x28]                ; 004d7ed2
    PUSH EAX                            ; 004d7ed6
    MOV EDI,dword ptr [0x005fc5a0]      ; 004d7ed7 | DAT_005fc5a0
    PUSH EDI                            ; 004d7edd
    INC EBX                             ; 004d7ede
    CALL FUN_004a23c0                   ; 004d7edf
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x1c                        ; 004d7ee4
    CMP EBX,0x5                         ; 004d7ee7
    JL 0x004d7ec7                       ; 004d7eea
        ;   XREF to: 004d7ec7 (CONDITIONAL_JUMP)  ; LAB_004d7ec7
    POP ESI                             ; 004d7eec
    POP EDI                             ; 004d7eed
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d7eee
        ;   Label: LAB_004d7eee
    PUSH EAX                            ; 004d7ef2
    PUSH EBP                            ; 004d7ef3
    CALL FUN_004d7bd0                   ; 004d7ef4
        ;   XREF to: 004d7bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7bd0()
    ADD ESP,0x8                         ; 004d7ef9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d7efc
    FLD float ptr [EAX + 0x4]           ; 004d7f00
    FSUBR float ptr [EBP + 0x2538]      ; 004d7f03
    LEA EBX,[EBP + 0x158]               ; 004d7f09
    FST float ptr [EBP + 0x2538]        ; 004d7f0f
    FLDZ                                ; 004d7f15
    FCOMPP                              ; 004d7f17
    FNSTSW AX                           ; 004d7f19
    SAHF                                ; 004d7f1b
    JC 0x004d7f86                       ; 004d7f1c
        ;   XREF to: 004d7f86 (CONDITIONAL_JUMP)  ; LAB_004d7f86
    PUSH EBX                            ; 004d7f1e
    MOV dword ptr [EBP + 0x2538],0x0    ; 004d7f1f
    CALL FUN_004fc070                   ; 004d7f29
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d7f2e
    ADD ESP,0x4                         ; 004d7f31
    CMP EAX,0x6                         ; 004d7f34
    JZ 0x004d7f72                       ; 004d7f37
        ;   XREF to: 004d7f72 (CONDITIONAL_JUMP)  ; LAB_004d7f72
    CMP EAX,0x7                         ; 004d7f39
    JZ 0x004d7f72                       ; 004d7f3c
        ;   XREF to: 004d7f72 (CONDITIONAL_JUMP)  ; LAB_004d7f72
    PUSH 0x1                            ; 004d7f3e
    PUSH 0x6                            ; 004d7f40
    PUSH EBX                            ; 004d7f42
    CALL FUN_004fc0d0                   ; 004d7f43
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 004d7f48
    MOV ECX,dword ptr [EBP + 0xd058]    ; 004d7f4b
    PUSH ECX                            ; 004d7f51
    CALL FUN_00556be0                   ; 004d7f52
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 004d7f57
    PUSH 0x5c5680                       ; 004d7f5a | s_imp_die_wav_005c567f+1
    MOV EAX,dword ptr [EBP + 0x154]     ; 004d7f5f
        ;   Label: LAB_004d7f5f
    PUSH EBP                            ; 004d7f65
    CALL dword ptr [EAX + 0x2c]         ; 004d7f66
    ADD ESP,0x8                         ; 004d7f69
    MOV dword ptr [EBP + 0xd058],EAX    ; 004d7f6c
    MOV EBX,dword ptr [ESP + 0x30]      ; 004d7f72
        ;   Label: LAB_004d7f72
    PUSH EBX                            ; 004d7f76
    PUSH EBP                            ; 004d7f77
    CALL FUN_00489b80                   ; 004d7f78
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00489b80()
    ADD ESP,0x8                         ; 004d7f7d
    ADD ESP,0x20                        ; 004d7f80
    POP EBP                             ; 004d7f83
    POP EBX                             ; 004d7f84
    RET                                 ; 004d7f85
    PUSH 0x1                            ; 004d7f86
        ;   Label: LAB_004d7f86
    PUSH 0x5                            ; 004d7f88
    PUSH EBX                            ; 004d7f8a
    CALL FUN_004fc0d0                   ; 004d7f8b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 004d7f90
    MOV EDX,dword ptr [EBP + 0xd058]    ; 004d7f93
    PUSH EDX                            ; 004d7f99
    CALL FUN_00556700                   ; 004d7f9a
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 004d7f9f
    TEST EAX,EAX                        ; 004d7fa2
    JNZ 0x004d7f72                      ; 004d7fa4
        ;   XREF to: 004d7f72 (CONDITIONAL_JUMP)  ; LAB_004d7f72
    PUSH 0x5c568d                       ; 004d7fa6 | = "imp-hurt?.wav"
    JMP 0x004d7f5f                      ; 004d7fab
        ;   XREF to: 004d7f5f (UNCONDITIONAL_JUMP)  ; LAB_004d7f5f

