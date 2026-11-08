; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a6ba0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004a70d0 at 004a72b1
;
; Referenced Globals:
;   undefined4 DAT_005de184
;
; Called Functions:
;   FUN_004a9eb0
;   FUN_004a9f00
;   FUN_004a9f50
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6ba0
        ;   Label: FUN_004a6ba0
    PUSH ESI                            ; 004a6ba1
    PUSH EDI                            ; 004a6ba2
    PUSH EBP                            ; 004a6ba3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a6ba4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a6ba8
    PUSH 0x5de184                       ; 004a6bac | DAT_005de184
    PUSH EBP                            ; 004a6bb1
    CALL FUN_005c04e0                   ; 004a6bb2
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004a6bb7
    TEST EAX,EAX                        ; 004a6bba
    JZ 0x004a6bfa                       ; 004a6bbc
        ;   XREF to: 004a6bfa (CONDITIONAL_JUMP)  ; LAB_004a6bfa
    MOV EDX,dword ptr [EDI + 0xc84]     ; 004a6bbe
    XOR ESI,ESI                         ; 004a6bc4
    TEST EDX,EDX                        ; 004a6bc6
    JLE 0x004a6bec                      ; 004a6bc8
        ;   XREF to: 004a6bec (CONDITIONAL_JUMP)  ; LAB_004a6bec
    LEA EBX,[EDI + 0xc88]               ; 004a6bca
    PUSH EBP                            ; 004a6bd0
        ;   Label: LAB_004a6bd0
    PUSH EBX                            ; 004a6bd1
    CALL FUN_005c04e0                   ; 004a6bd2
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004a6bd7
    TEST EAX,EAX                        ; 004a6bda
    JZ 0x004a6bfa                       ; 004a6bdc
        ;   XREF to: 004a6bfa (CONDITIONAL_JUMP)  ; LAB_004a6bfa
    INC ESI                             ; 004a6bde
    MOV ECX,dword ptr [EDI + 0xc84]     ; 004a6bdf
    ADD EBX,0x20                        ; 004a6be5
    CMP ESI,ECX                         ; 004a6be8
    JL 0x004a6bd0                       ; 004a6bea
        ;   XREF to: 004a6bd0 (CONDITIONAL_JUMP)  ; LAB_004a6bd0
    PUSH EBP                            ; 004a6bec
        ;   Label: LAB_004a6bec
    PUSH EDI                            ; 004a6bed
    CALL FUN_004a9eb0                   ; 004a6bee
        ;   XREF to: 004a9eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9eb0()
    ADD ESP,0x8                         ; 004a6bf3
    TEST EAX,EAX                        ; 004a6bf6
    JL 0x004a6c04                       ; 004a6bf8
        ;   XREF to: 004a6c04 (CONDITIONAL_JUMP)  ; LAB_004a6c04
    MOV EAX,0x1                         ; 004a6bfa
        ;   Label: LAB_004a6bfa
    POP EBP                             ; 004a6bff
    POP EDI                             ; 004a6c00
    POP ESI                             ; 004a6c01
    POP EBX                             ; 004a6c02
    RET                                 ; 004a6c03
    PUSH EBP                            ; 004a6c04
        ;   Label: LAB_004a6c04
    PUSH EDI                            ; 004a6c05
    CALL FUN_004a9f00                   ; 004a6c06
        ;   XREF to: 004a9f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9f00()
    ADD ESP,0x8                         ; 004a6c0b
    TEST EAX,EAX                        ; 004a6c0e
    JGE 0x004a6bfa                      ; 004a6c10
        ;   XREF to: 004a6bfa (CONDITIONAL_JUMP)  ; LAB_004a6bfa
    PUSH EBP                            ; 004a6c12
    PUSH EDI                            ; 004a6c13
    CALL FUN_004a9f50                   ; 004a6c14
        ;   XREF to: 004a9f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9f50()
    ADD ESP,0x8                         ; 004a6c19
    TEST EAX,EAX                        ; 004a6c1c
    JGE 0x004a6bfa                      ; 004a6c1e
        ;   XREF to: 004a6bfa (CONDITIONAL_JUMP)  ; LAB_004a6bfa
    XOR EAX,EAX                         ; 004a6c20
    POP EBP                             ; 004a6c22
    POP EDI                             ; 004a6c23
    POP ESI                             ; 004a6c24
    POP EBX                             ; 004a6c25
    RET                                 ; 004a6c26

