; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005a3bc0(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_005a3ad4 at 005a3adf
;   FUN_005a4404 at 005a4428
;
; Referenced Globals:
;   void* PTR_FUN_006079a4 = 005a7f44
;   void* PTR_FUN_006079a8 = 005a7f44
;   void* PTR_FUN_006079b0 = 005a7f58
;
; Called Functions:
;   FUN_005a3770
;   FUN_005a3b0c
;   FUN_005a54b0
;   FUN_005a5d00
;   FUN_005a7f44
;   FUN_005a7f58
;   FUN_005a9bc0
;   FUN_005a9cf0
;   FUN_005a9d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3bc0
        ;   Label: FUN_005a3bc0
    PUSH ESI                            ; 005a3bc1
    PUSH EDI                            ; 005a3bc2
    PUSH EBP                            ; 005a3bc3
    SUB ESP,0x114                       ; 005a3bc4
    MOV EBX,dword ptr [ESP + 0x128]     ; 005a3bca
    CMP dword ptr [EBX + 0xc],0x0       ; 005a3bd1
    JNZ 0x005a3be1                      ; 005a3bd5
        ;   XREF to: 005a3be1 (CONDITIONAL_JUMP)  ; LAB_005a3be1
    MOV EAX,0xffffffff                  ; 005a3bd7
    JMP 0x005a3ca7                      ; 005a3bdc
        ;   XREF to: 005a3ca7 (UNCONDITIONAL_JUMP)  ; LAB_005a3ca7
    MOV AH,byte ptr [EBX + 0xd]         ; 005a3be1
        ;   Label: LAB_005a3be1
    XOR ESI,ESI                         ; 005a3be4
    TEST AH,0x10                        ; 005a3be6
    JZ 0x005a3bf6                       ; 005a3be9
        ;   XREF to: 005a3bf6 (CONDITIONAL_JUMP)  ; LAB_005a3bf6
    PUSH EBX                            ; 005a3beb
    CALL FUN_005a9bc0                   ; 005a3bec
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9bc0()
    ADD ESP,0x4                         ; 005a3bf1
    MOV ESI,EAX                         ; 005a3bf4
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a3bf6
        ;   Label: LAB_005a3bf6
    PUSH ECX                            ; 005a3bf9
    CALL dword ptr [0x006079a4]         ; 005a3bfa | PTR_FUN_006079a4
    ADD ESP,0x4                         ; 005a3c00
    PUSH EBX                            ; 005a3c03
    CALL FUN_005a5d00                   ; 005a3c04
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5d00()
    ADD ESP,0x4                         ; 005a3c09
    CMP EAX,-0x1                        ; 005a3c0c
    JZ 0x005a3c20                       ; 005a3c0f
        ;   XREF to: 005a3c20 (CONDITIONAL_JUMP)  ; LAB_005a3c20
    PUSH 0x0                            ; 005a3c11
    PUSH EAX                            ; 005a3c13
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a3c14
    PUSH EDI                            ; 005a3c17
    CALL FUN_005a9cf0                   ; 005a3c18
        ;   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9cf0()
    ADD ESP,0xc                         ; 005a3c1d
    CMP dword ptr [ESP + 0x12c],0x0     ; 005a3c20
        ;   Label: LAB_005a3c20
    JZ 0x005a3c38                       ; 005a3c28
        ;   XREF to: 005a3c38 (CONDITIONAL_JUMP)  ; LAB_005a3c38
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a3c2a
    PUSH EAX                            ; 005a3c2d
    CALL FUN_005a9d80                   ; 005a3c2e
        ;   XREF to: 005a9d80 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9d80()
    ADD ESP,0x4                         ; 005a3c33
    OR ESI,EAX                          ; 005a3c36
    TEST byte ptr [EBX + 0xc],0x8       ; 005a3c38
        ;   Label: LAB_005a3c38
    JZ 0x005a3c57                       ; 005a3c3c
        ;   XREF to: 005a3c57 (CONDITIONAL_JUMP)  ; LAB_005a3c57
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a3c3e
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a3c41
    PUSH EDX                            ; 005a3c44
    CALL FUN_005a3770                   ; 005a3c45
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a3c4a
    ADD ESP,0x4                         ; 005a3c4d
    MOV dword ptr [EAX + 0x8],0x0       ; 005a3c50
    TEST byte ptr [EBX + 0xd],0x8       ; 005a3c57
        ;   Label: LAB_005a3c57
    JZ 0x005a3c81                       ; 005a3c5b
        ;   XREF to: 005a3c81 (CONDITIONAL_JUMP)  ; LAB_005a3c81
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a3c5d
    MOV AL,byte ptr [EAX + 0x14]        ; 005a3c60
    AND EAX,0xff                        ; 005a3c63
    PUSH EAX                            ; 005a3c68
    LEA EAX,[ESP + 0x4]                 ; 005a3c69
    PUSH EAX                            ; 005a3c6d
    CALL FUN_005a3b0c                   ; 005a3c6e
        ;   XREF to: 005a3b0c (UNCONDITIONAL_CALL)  ; undefined FUN_005a3b0c()
    ADD ESP,0x8                         ; 005a3c73
    MOV EAX,ESP                         ; 005a3c76
    PUSH EAX                            ; 005a3c78
    CALL FUN_005a54b0                   ; 005a3c79
        ;   XREF to: 005a54b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54b0()
    ADD ESP,0x4                         ; 005a3c7e
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a3c81
        ;   Label: LAB_005a3c81
    PUSH ECX                            ; 005a3c84
    CALL dword ptr [0x006079a8]         ; 005a3c85 | PTR_FUN_006079a8
    ADD ESP,0x4                         ; 005a3c8b
    CMP dword ptr [ESP + 0x12c],0x0     ; 005a3c8e
    JZ 0x005a3ca5                       ; 005a3c96
        ;   XREF to: 005a3ca5 (CONDITIONAL_JUMP)  ; LAB_005a3ca5
    MOV EBP,dword ptr [EBX + 0x10]      ; 005a3c98
    PUSH EBP                            ; 005a3c9b
    CALL dword ptr [0x006079b0]         ; 005a3c9c | PTR_FUN_006079b0
    ADD ESP,0x4                         ; 005a3ca2
    MOV EAX,ESI                         ; 005a3ca5
        ;   Label: LAB_005a3ca5
    ADD ESP,0x114                       ; 005a3ca7
        ;   Label: LAB_005a3ca7
    POP EBP                             ; 005a3cad
    POP EDI                             ; 005a3cae
    POP ESI                             ; 005a3caf
    POP EBX                             ; 005a3cb0
    RET                                 ; 005a3cb1

