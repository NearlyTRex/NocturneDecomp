; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_005c7dc0(uint param_1,LPCVOID param_2,DWORD param_3)
;
;
; XREF[2]:
;   FUN_005c1a70 at 005c1b38
;   FUN_005c6d50 at 005c6db2
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005d0640 = 001d11be
;   void* PTR_WriteFile_005d068c = 001d1308
;   void* PTR_FUN_00626600 = 005c50d4
;   void* PTR_FUN_00626604 = 005c50d4
;   undefined4 DAT_00626774
;   undefined4 DAT_006267a0
;   undefined4 DAT_006267e0
;   undefined4 DAT_00626838
;
; Called Functions:
;   FUN_005c50d4
;   FUN_005c6450
;   FUN_005c862c
;   FUN_005c8ae0
;   SetFilePointer
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7dc0
        ;   Label: FUN_005c7dc0
    PUSH ESI                            ; 005c7dc1
    PUSH EDI                            ; 005c7dc2
    PUSH EBP                            ; 005c7dc3
    SUB ESP,0x4                         ; 005c7dc4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c7dc7
    MOV EDI,dword ptr [ESP + 0x20]      ; 005c7dcb
    TEST EBX,EBX                        ; 005c7dcf
    JL 0x005c7ddb                       ; 005c7dd1
        ;   XREF to: 005c7ddb (CONDITIONAL_JUMP)  ; LAB_005c7ddb
    CMP EBX,dword ptr [0x006267e0]      ; 005c7dd3 | DAT_006267e0
    JBE 0x005c7def                      ; 005c7dd9
        ;   XREF to: 005c7def (CONDITIONAL_JUMP)  ; LAB_005c7def
    PUSH 0x4                            ; 005c7ddb
        ;   Label: LAB_005c7ddb
    CALL FUN_005c6450                   ; 005c7ddd
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    MOV EAX,0xffffffff                  ; 005c7de2
    ADD ESP,0x4                         ; 005c7de7
    JMP 0x005c7ec2                      ; 005c7dea
        ;   XREF to: 005c7ec2 (UNCONDITIONAL_JUMP)  ; LAB_005c7ec2
    MOV ESI,dword ptr [0x00626838]      ; 005c7def | DAT_00626838
        ;   Label: LAB_005c7def
    PUSH EBX                            ; 005c7df5
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 005c7df6
    CALL dword ptr [0x00626600]         ; 005c7df9 | PTR_FUN_00626600
    ADD ESP,0x4                         ; 005c7dff
    PUSH EBX                            ; 005c7e02
    CALL FUN_005c8ae0                   ; 005c7e03
        ;   XREF to: 005c8ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8ae0()
    ADD ESP,0x4                         ; 005c7e08
    TEST AL,0x80                        ; 005c7e0b
    JZ 0x005c7e39                       ; 005c7e0d
        ;   XREF to: 005c7e39 (CONDITIONAL_JUMP)  ; LAB_005c7e39
    PUSH 0x2                            ; 005c7e0f
    PUSH 0x0                            ; 005c7e11
    PUSH 0x0                            ; 005c7e13
    PUSH ESI                            ; 005c7e15
    CALL dword ptr CS:[0x5d0640]        ; 005c7e16 | PTR_SetFilePointer_005d0640
    CMP EAX,-0x1                        ; 005c7e1d
    JNZ 0x005c7e39                      ; 005c7e20
        ;   XREF to: 005c7e39 (CONDITIONAL_JUMP)  ; LAB_005c7e39
    PUSH EBX                            ; 005c7e22
    CALL dword ptr [0x00626604]         ; 005c7e23 | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005c7e29
    CALL FUN_005c862c                   ; 005c7e2c
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined FUN_005c862c()
    ADD ESP,0x4                         ; 005c7e31
    POP EBP                             ; 005c7e34
    POP EDI                             ; 005c7e35
    POP ESI                             ; 005c7e36
    POP EBX                             ; 005c7e37
    RET                                 ; 005c7e38
    CMP dword ptr [0x006267a0],0x0      ; 005c7e39 | DAT_006267a0
        ;   Label: LAB_005c7e39
    JZ 0x005c7e76                       ; 005c7e40
        ;   XREF to: 005c7e76 (CONDITIONAL_JUMP)  ; LAB_005c7e76
    PUSH EBX                            ; 005c7e42
    CALL dword ptr [0x00626774]         ; 005c7e43 | DAT_00626774
    ADD ESP,0x4                         ; 005c7e49
    TEST EAX,EAX                        ; 005c7e4c
    JZ 0x005c7e76                       ; 005c7e4e
        ;   XREF to: 005c7e76 (CONDITIONAL_JUMP)  ; LAB_005c7e76
    PUSH EDI                            ; 005c7e50
    MOV EDX,dword ptr [ESP + 0x20]      ; 005c7e51
    PUSH EDX                            ; 005c7e55
    PUSH EAX                            ; 005c7e56
    CALL dword ptr [0x006267a0]         ; 005c7e57 | DAT_006267a0
    ADD ESP,0xc                         ; 005c7e5d
    PUSH EBX                            ; 005c7e60
    MOV ESI,EAX                         ; 005c7e61
    CALL dword ptr [0x00626604]         ; 005c7e63 | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005c7e69
    MOV EAX,ESI                         ; 005c7e6c
    ADD ESP,0x4                         ; 005c7e6e
    POP EBP                             ; 005c7e71
    POP EDI                             ; 005c7e72
    POP ESI                             ; 005c7e73
    POP EBX                             ; 005c7e74
    RET                                 ; 005c7e75
    PUSH 0x0                            ; 005c7e76
        ;   Label: LAB_005c7e76
    LEA EAX,[ESP + 0x4]                 ; 005c7e78
    PUSH EAX                            ; 005c7e7c
    PUSH EDI                            ; 005c7e7d
    MOV EBP,dword ptr [ESP + 0x28]      ; 005c7e7e
    PUSH EBP                            ; 005c7e82
    PUSH ESI                            ; 005c7e83
    CALL dword ptr CS:[0x5d068c]        ; 005c7e84 | PTR_WriteFile_005d068c
    TEST EAX,EAX                        ; 005c7e8b
    JNZ 0x005c7ea6                      ; 005c7e8d
        ;   XREF to: 005c7ea6 (CONDITIONAL_JUMP)  ; LAB_005c7ea6
    PUSH EBX                            ; 005c7e8f
    CALL dword ptr [0x00626604]         ; 005c7e90 | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005c7e96
    CALL FUN_005c862c                   ; 005c7e99
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined FUN_005c862c()
    ADD ESP,0x4                         ; 005c7e9e
    POP EBP                             ; 005c7ea1
    POP EDI                             ; 005c7ea2
    POP ESI                             ; 005c7ea3
    POP EBX                             ; 005c7ea4
    RET                                 ; 005c7ea5
    CMP EDI,dword ptr [ESP]             ; 005c7ea6
        ;   Label: LAB_005c7ea6
    JZ 0x005c7eb5                       ; 005c7ea9
        ;   XREF to: 005c7eb5 (CONDITIONAL_JUMP)  ; LAB_005c7eb5
    PUSH 0xc                            ; 005c7eab
    CALL FUN_005c6450                   ; 005c7ead
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    ADD ESP,0x4                         ; 005c7eb2
    PUSH EBX                            ; 005c7eb5
        ;   Label: LAB_005c7eb5
    CALL dword ptr [0x00626604]         ; 005c7eb6 | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005c7ebc
    MOV EAX,dword ptr [ESP]             ; 005c7ebf
    ADD ESP,0x4                         ; 005c7ec2
        ;   Label: LAB_005c7ec2
    POP EBP                             ; 005c7ec5
    POP EDI                             ; 005c7ec6
    POP ESI                             ; 005c7ec7
    POP EBX                             ; 005c7ec8
    RET                                 ; 005c7ec9

