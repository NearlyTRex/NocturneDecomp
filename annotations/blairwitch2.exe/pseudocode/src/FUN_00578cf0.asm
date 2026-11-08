; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00578cf0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00578bf0 at 00578bfb
;   FUN_00579720 at 00579733
;
; Called Functions:
;   FUN_00578d60
;   FUN_005ba8cc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00578cf0
        ;   Label: FUN_00578cf0
    SUB ESP,0x10                        ; 00578cf1
    LEA EAX,[ESP + 0xc]                 ; 00578cf4
    PUSH EAX                            ; 00578cf8
    LEA EAX,[ESP + 0xc]                 ; 00578cf9
    PUSH EAX                            ; 00578cfd
    LEA EAX,[ESP + 0xc]                 ; 00578cfe
    PUSH EAX                            ; 00578d02
    LEA EAX,[ESP + 0xc]                 ; 00578d03
    PUSH EAX                            ; 00578d07
    PUSH 0x5ed008                       ; 00578d08
    MOV EDX,dword ptr [ESP + 0x30]      ; 00578d0d
    PUSH EDX                            ; 00578d11
    CALL FUN_005ba8cc                   ; 00578d12
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; undefined FUN_005ba8cc()
    ADD ESP,0x18                        ; 00578d17
    CMP EAX,0x4                         ; 00578d1a
    JZ 0x00578d26                       ; 00578d1d
        ;   XREF to: 00578d26 (CONDITIONAL_JUMP)  ; LAB_00578d26
    XOR EAX,EAX                         ; 00578d1f
    ADD ESP,0x10                        ; 00578d21
    POP EBP                             ; 00578d24
    RET                                 ; 00578d25
    PUSH EDI                            ; 00578d26
        ;   Label: LAB_00578d26
    PUSH ESI                            ; 00578d27
    PUSH EBX                            ; 00578d28
    MOV ECX,dword ptr [ESP + 0x18]      ; 00578d29
    PUSH ECX                            ; 00578d2d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00578d2e
    PUSH EBX                            ; 00578d32
    MOV ESI,dword ptr [ESP + 0x18]      ; 00578d33
    PUSH ESI                            ; 00578d37
    MOV EDI,dword ptr [ESP + 0x18]      ; 00578d38
    PUSH EDI                            ; 00578d3c
    MOV EBP,dword ptr [ESP + 0x34]      ; 00578d3d
    PUSH EBP                            ; 00578d41
    CALL FUN_00578d60                   ; 00578d42
        ;   XREF to: 00578d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00578d60()
    ADD ESP,0x14                        ; 00578d47
    POP EBX                             ; 00578d4a
    POP ESI                             ; 00578d4b
    POP EDI                             ; 00578d4c
    ADD ESP,0x10                        ; 00578d4d
    POP EBP                             ; 00578d50
    RET                                 ; 00578d51

