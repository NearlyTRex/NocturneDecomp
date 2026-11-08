; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00494d80(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00491a10 at 00491a76
;   FUN_004948e0 at 00494900
;
; Called Functions:
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494d80
        ;   Label: FUN_00494d80
    PUSH ESI                            ; 00494d81
    PUSH EDI                            ; 00494d82
    PUSH EBP                            ; 00494d83
    MOV EDI,dword ptr [ESP + 0x14]      ; 00494d84
    MOV EBP,dword ptr [ESP + 0x18]      ; 00494d88
    MOV EDX,dword ptr [EDI + 0x1908]    ; 00494d8c
    XOR EBX,EBX                         ; 00494d92
    TEST EDX,EDX                        ; 00494d94
    JLE 0x00494dba                      ; 00494d96
        ;   XREF to: 00494dba (CONDITIONAL_JUMP)  ; LAB_00494dba
    LEA ESI,[EDI + 0x190c]              ; 00494d98
    PUSH EBP                            ; 00494d9e
        ;   Label: LAB_00494d9e
    PUSH ESI                            ; 00494d9f
    CALL FUN_005a3260                   ; 00494da0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00494da5
    TEST EAX,EAX                        ; 00494da8
    JZ 0x00494dc4                       ; 00494daa
        ;   XREF to: 00494dc4 (CONDITIONAL_JUMP)  ; LAB_00494dc4
    INC EBX                             ; 00494dac
    MOV ECX,dword ptr [EDI + 0x1908]    ; 00494dad
    ADD ESI,0x20                        ; 00494db3
    CMP EBX,ECX                         ; 00494db6
    JL 0x00494d9e                       ; 00494db8
        ;   XREF to: 00494d9e (CONDITIONAL_JUMP)  ; LAB_00494d9e
    MOV EAX,0xffffffff                  ; 00494dba
        ;   Label: LAB_00494dba
    POP EBP                             ; 00494dbf
    POP EDI                             ; 00494dc0
    POP ESI                             ; 00494dc1
    POP EBX                             ; 00494dc2
    RET                                 ; 00494dc3
    MOV EAX,EBX                         ; 00494dc4
        ;   Label: LAB_00494dc4
    POP EBP                             ; 00494dc6
    POP EDI                             ; 00494dc7
    POP ESI                             ; 00494dc8
    POP EBX                             ; 00494dc9
    RET                                 ; 00494dca

