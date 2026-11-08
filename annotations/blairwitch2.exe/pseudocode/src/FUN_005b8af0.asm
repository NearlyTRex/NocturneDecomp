; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005b8af0(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_005b8a04 at 005b8a0f
;   FUN_005b9124 at 005b9148
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;   void* PTR_FUN_0061f2b4 = 005bce18
;
; Called Functions:
;   FUN_005b86a0
;   FUN_005b8a3c
;   FUN_005ba1e0
;   FUN_005baab0
;   FUN_005bce04
;   FUN_005bce18
;   FUN_005bea80
;   FUN_005bebb0
;   FUN_005bec40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8af0
        ;   Label: FUN_005b8af0
    PUSH ESI                            ; 005b8af1
    PUSH EDI                            ; 005b8af2
    PUSH EBP                            ; 005b8af3
    SUB ESP,0x114                       ; 005b8af4
    MOV EBX,dword ptr [ESP + 0x128]     ; 005b8afa
    CMP dword ptr [EBX + 0xc],0x0       ; 005b8b01
    JNZ 0x005b8b11                      ; 005b8b05
        ;   XREF to: 005b8b11 (CONDITIONAL_JUMP)  ; LAB_005b8b11
    MOV EAX,0xffffffff                  ; 005b8b07
    JMP 0x005b8bd7                      ; 005b8b0c
        ;   XREF to: 005b8bd7 (UNCONDITIONAL_JUMP)  ; LAB_005b8bd7
    MOV AH,byte ptr [EBX + 0xd]         ; 005b8b11
        ;   Label: LAB_005b8b11
    XOR ESI,ESI                         ; 005b8b14
    TEST AH,0x10                        ; 005b8b16
    JZ 0x005b8b26                       ; 005b8b19
        ;   XREF to: 005b8b26 (CONDITIONAL_JUMP)  ; LAB_005b8b26
    PUSH EBX                            ; 005b8b1b
    CALL FUN_005bea80                   ; 005b8b1c
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined FUN_005bea80()
    ADD ESP,0x4                         ; 005b8b21
    MOV ESI,EAX                         ; 005b8b24
    MOV ECX,dword ptr [EBX + 0x10]      ; 005b8b26
        ;   Label: LAB_005b8b26
    PUSH ECX                            ; 005b8b29
    CALL dword ptr [0x0061f2a8]         ; 005b8b2a | PTR_FUN_0061f2a8
    ADD ESP,0x4                         ; 005b8b30
    PUSH EBX                            ; 005b8b33
    CALL FUN_005baab0                   ; 005b8b34
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; undefined FUN_005baab0()
    ADD ESP,0x4                         ; 005b8b39
    CMP EAX,-0x1                        ; 005b8b3c
    JZ 0x005b8b50                       ; 005b8b3f
        ;   XREF to: 005b8b50 (CONDITIONAL_JUMP)  ; LAB_005b8b50
    PUSH 0x0                            ; 005b8b41
    PUSH EAX                            ; 005b8b43
    MOV EDI,dword ptr [EBX + 0x10]      ; 005b8b44
    PUSH EDI                            ; 005b8b47
    CALL FUN_005bebb0                   ; 005b8b48
        ;   XREF to: 005bebb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005bebb0()
    ADD ESP,0xc                         ; 005b8b4d
    CMP dword ptr [ESP + 0x12c],0x0     ; 005b8b50
        ;   Label: LAB_005b8b50
    JZ 0x005b8b68                       ; 005b8b58
        ;   XREF to: 005b8b68 (CONDITIONAL_JUMP)  ; LAB_005b8b68
    MOV EAX,dword ptr [EBX + 0x10]      ; 005b8b5a
    PUSH EAX                            ; 005b8b5d
    CALL FUN_005bec40                   ; 005b8b5e
        ;   XREF to: 005bec40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bec40()
    ADD ESP,0x4                         ; 005b8b63
    OR ESI,EAX                          ; 005b8b66
    TEST byte ptr [EBX + 0xc],0x8       ; 005b8b68
        ;   Label: LAB_005b8b68
    JZ 0x005b8b87                       ; 005b8b6c
        ;   XREF to: 005b8b87 (CONDITIONAL_JUMP)  ; LAB_005b8b87
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b8b6e
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b8b71
    PUSH EDX                            ; 005b8b74
    CALL FUN_005b86a0                   ; 005b8b75
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b8b7a
    ADD ESP,0x4                         ; 005b8b7d
    MOV dword ptr [EAX + 0x8],0x0       ; 005b8b80
    TEST byte ptr [EBX + 0xd],0x8       ; 005b8b87
        ;   Label: LAB_005b8b87
    JZ 0x005b8bb1                       ; 005b8b8b
        ;   XREF to: 005b8bb1 (CONDITIONAL_JUMP)  ; LAB_005b8bb1
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b8b8d
    MOV AL,byte ptr [EAX + 0x14]        ; 005b8b90
    AND EAX,0xff                        ; 005b8b93
    PUSH EAX                            ; 005b8b98
    LEA EAX,[ESP + 0x4]                 ; 005b8b99
    PUSH EAX                            ; 005b8b9d
    CALL FUN_005b8a3c                   ; 005b8b9e
        ;   XREF to: 005b8a3c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8a3c()
    ADD ESP,0x8                         ; 005b8ba3
    MOV EAX,ESP                         ; 005b8ba6
    PUSH EAX                            ; 005b8ba8
    CALL FUN_005ba1e0                   ; 005b8ba9
        ;   XREF to: 005ba1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1e0()
    ADD ESP,0x4                         ; 005b8bae
    MOV ECX,dword ptr [EBX + 0x10]      ; 005b8bb1
        ;   Label: LAB_005b8bb1
    PUSH ECX                            ; 005b8bb4
    CALL dword ptr [0x0061f2ac]         ; 005b8bb5 | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005b8bbb
    CMP dword ptr [ESP + 0x12c],0x0     ; 005b8bbe
    JZ 0x005b8bd5                       ; 005b8bc6
        ;   XREF to: 005b8bd5 (CONDITIONAL_JUMP)  ; LAB_005b8bd5
    MOV EBP,dword ptr [EBX + 0x10]      ; 005b8bc8
    PUSH EBP                            ; 005b8bcb
    CALL dword ptr [0x0061f2b4]         ; 005b8bcc | PTR_FUN_0061f2b4
    ADD ESP,0x4                         ; 005b8bd2
    MOV EAX,ESI                         ; 005b8bd5
        ;   Label: LAB_005b8bd5
    ADD ESP,0x114                       ; 005b8bd7
        ;   Label: LAB_005b8bd7
    POP EBP                             ; 005b8bdd
    POP EDI                             ; 005b8bde
    POP ESI                             ; 005b8bdf
    POP EBX                             ; 005b8be0
    RET                                 ; 005b8be1

