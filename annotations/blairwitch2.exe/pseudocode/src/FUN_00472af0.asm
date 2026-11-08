; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00472af0(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[12]:
;   FUN_00472c60 at 004730a5
;   FUN_00473390 at 004736cc
;   FUN_004738d0 at 004739c7
;   FUN_00473b20 at 00473c55
;   FUN_00473e10 at 00473f7c
;   FUN_004746b0 at 00474719
;   FUN_00476300 at 0047640c
;   FUN_004764c0 at 004767d5
;   FUN_00476c30 at 00476cc2
;   FUN_004770c0 at 004770f9
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472af0
        ;   Label: FUN_00472af0
    PUSH EDI                            ; 00472af1
    PUSH EBP                            ; 00472af2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00472af3
    MOV EAX,dword ptr [ESP + 0x14]      ; 00472af7
    MOV ECX,dword ptr [ESP + 0x18]      ; 00472afb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00472aff
    TEST EAX,EAX                        ; 00472b03
    JL 0x00472b22                       ; 00472b05
        ;   XREF to: 00472b22 (CONDITIONAL_JUMP)  ; LAB_00472b22
    TEST ECX,ECX                        ; 00472b07
    JL 0x00472b22                       ; 00472b09
        ;   XREF to: 00472b22 (CONDITIONAL_JUMP)  ; LAB_00472b22
    TEST EBX,EBX                        ; 00472b0b
    JL 0x00472b22                       ; 00472b0d
        ;   XREF to: 00472b22 (CONDITIONAL_JUMP)  ; LAB_00472b22
    CMP EAX,dword ptr [EDX + 0x40]      ; 00472b0f
    JGE 0x00472b22                      ; 00472b12
        ;   XREF to: 00472b22 (CONDITIONAL_JUMP)  ; LAB_00472b22
    MOV EDI,dword ptr [EDX + 0x44]      ; 00472b14
    CMP ECX,EDI                         ; 00472b17
    JGE 0x00472b22                      ; 00472b19
        ;   XREF to: 00472b22 (CONDITIONAL_JUMP)  ; LAB_00472b22
    MOV EBP,dword ptr [EDX + 0x48]      ; 00472b1b
    CMP EBX,EBP                         ; 00472b1e
    JL 0x00472b28                       ; 00472b20
        ;   XREF to: 00472b28 (CONDITIONAL_JUMP)  ; LAB_00472b28
    XOR EAX,EAX                         ; 00472b22
        ;   Label: LAB_00472b22
    POP EBP                             ; 00472b24
    POP EDI                             ; 00472b25
    POP EBX                             ; 00472b26
    RET                                 ; 00472b27
    IMUL EAX,EDI                        ; 00472b28
        ;   Label: LAB_00472b28
    IMUL ECX,EBP                        ; 00472b2b
    IMUL EAX,EBP                        ; 00472b2e
    ADD ECX,EBX                         ; 00472b31
    ADD ECX,EAX                         ; 00472b33
    LEA EAX,[ECX*0x4 + 0x0]             ; 00472b35
    SUB EAX,ECX                         ; 00472b3c
    SHL EAX,0x2                         ; 00472b3e
    ADD ECX,EAX                         ; 00472b41
    SHL ECX,0x2                         ; 00472b43
    MOV EAX,dword ptr [EDX + 0x50]      ; 00472b46
    ADD EAX,ECX                         ; 00472b49
    POP EBP                             ; 00472b4b
    POP EDI                             ; 00472b4c
    POP EBX                             ; 00472b4d
    RET                                 ; 00472b4e

