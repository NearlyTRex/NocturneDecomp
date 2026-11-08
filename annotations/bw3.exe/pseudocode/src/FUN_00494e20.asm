; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00494e20(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00494bf0 at 00494c02
;   FUN_00494d00 at 00494d0a
;
; Called Functions:
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494e20
        ;   Label: FUN_00494e20
    PUSH ESI                            ; 00494e21
    PUSH EDI                            ; 00494e22
    PUSH EBP                            ; 00494e23
    MOV EDI,dword ptr [ESP + 0x14]      ; 00494e24
    MOV EBP,dword ptr [ESP + 0x18]      ; 00494e28
    MOV EDX,dword ptr [EDI + 0x337c]    ; 00494e2c
    XOR EBX,EBX                         ; 00494e32
    TEST EDX,EDX                        ; 00494e34
    JLE 0x00494e5a                      ; 00494e36
        ;   XREF to: 00494e5a (CONDITIONAL_JUMP)  ; LAB_00494e5a
    LEA ESI,[EDI + 0x3380]              ; 00494e38
    PUSH EBP                            ; 00494e3e
        ;   Label: LAB_00494e3e
    PUSH ESI                            ; 00494e3f
    CALL FUN_005a3260                   ; 00494e40
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00494e45
    TEST EAX,EAX                        ; 00494e48
    JZ 0x00494e64                       ; 00494e4a
        ;   XREF to: 00494e64 (CONDITIONAL_JUMP)  ; LAB_00494e64
    INC EBX                             ; 00494e4c
    MOV ECX,dword ptr [EDI + 0x337c]    ; 00494e4d
    ADD ESI,0x20                        ; 00494e53
    CMP EBX,ECX                         ; 00494e56
    JL 0x00494e3e                       ; 00494e58
        ;   XREF to: 00494e3e (CONDITIONAL_JUMP)  ; LAB_00494e3e
    MOV EAX,0xffffffff                  ; 00494e5a
        ;   Label: LAB_00494e5a
    POP EBP                             ; 00494e5f
    POP EDI                             ; 00494e60
    POP ESI                             ; 00494e61
    POP EBX                             ; 00494e62
    RET                                 ; 00494e63
    MOV EAX,EBX                         ; 00494e64
        ;   Label: LAB_00494e64
    POP EBP                             ; 00494e66
    POP EDI                             ; 00494e67
    POP ESI                             ; 00494e68
    POP EBX                             ; 00494e69
    RET                                 ; 00494e6a

