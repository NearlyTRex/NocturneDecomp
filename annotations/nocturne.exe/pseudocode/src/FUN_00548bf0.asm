; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00548bf0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00548af0 at 00548afb
;
; Called Functions:
;   FUN_00548c60
;   FUN_00566b5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00548bf0
        ;   Label: FUN_00548bf0
    SUB ESP,0x10                        ; 00548bf1
    LEA EAX,[ESP + 0xc]                 ; 00548bf4
    PUSH EAX                            ; 00548bf8
    LEA EAX,[ESP + 0xc]                 ; 00548bf9
    PUSH EAX                            ; 00548bfd
    LEA EAX,[ESP + 0xc]                 ; 00548bfe
    PUSH EAX                            ; 00548c02
    LEA EAX,[ESP + 0xc]                 ; 00548c03
    PUSH EAX                            ; 00548c07
    PUSH 0x596c1d                       ; 00548c08
    MOV EDX,dword ptr [ESP + 0x30]      ; 00548c0d
    PUSH EDX                            ; 00548c11
    CALL FUN_00566b5c                   ; 00548c12
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined FUN_00566b5c()
    ADD ESP,0x18                        ; 00548c17
    CMP EAX,0x4                         ; 00548c1a
    JZ 0x00548c26                       ; 00548c1d
        ;   XREF to: 00548c26 (CONDITIONAL_JUMP)  ; LAB_00548c26
    XOR EAX,EAX                         ; 00548c1f
    ADD ESP,0x10                        ; 00548c21
    POP EBP                             ; 00548c24
    RET                                 ; 00548c25
    PUSH EDI                            ; 00548c26
        ;   Label: LAB_00548c26
    PUSH ESI                            ; 00548c27
    PUSH EBX                            ; 00548c28
    MOV ECX,dword ptr [ESP + 0x18]      ; 00548c29
    PUSH ECX                            ; 00548c2d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00548c2e
    PUSH EBX                            ; 00548c32
    MOV ESI,dword ptr [ESP + 0x18]      ; 00548c33
    PUSH ESI                            ; 00548c37
    MOV EDI,dword ptr [ESP + 0x18]      ; 00548c38
    PUSH EDI                            ; 00548c3c
    MOV EBP,dword ptr [ESP + 0x34]      ; 00548c3d
    PUSH EBP                            ; 00548c41
    CALL FUN_00548c60                   ; 00548c42
        ;   XREF to: 00548c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00548c60()
    ADD ESP,0x14                        ; 00548c47
    POP EBX                             ; 00548c4a
    POP ESI                             ; 00548c4b
    POP EDI                             ; 00548c4c
    ADD ESP,0x10                        ; 00548c4d
    POP EBP                             ; 00548c50
    RET                                 ; 00548c51

