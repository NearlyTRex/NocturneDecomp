; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00443d80(int param_1,undefined4 *param_2,uint param_3)
;
;
; Called Functions:
;   FUN_00444020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443d80
        ;   Label: FUN_00443d80
    PUSH ESI                            ; 00443d81
    PUSH EDI                            ; 00443d82
    PUSH EBP                            ; 00443d83
    SUB ESP,0x8                         ; 00443d84
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00443d87
    MOV EBP,dword ptr [ESP + 0x24]      ; 00443d8b
    CMP dword ptr [EBX + 0x10],0x0      ; 00443d8f
    JZ 0x00443e00                       ; 00443d93
        ;   XREF to: 00443e00 (CONDITIONAL_JUMP)  ; LAB_00443e00
    XOR ECX,ECX                         ; 00443d95
    MOV EAX,dword ptr [ESP + 0x20]      ; 00443d97
    MOV dword ptr [ESP],ECX             ; 00443d9b
    MOV dword ptr [ESP + 0x4],EAX       ; 00443d9e
    TEST EBP,EBP                        ; 00443da2
    JLE 0x00443df5                      ; 00443da4
        ;   XREF to: 00443df5 (CONDITIONAL_JUMP)  ; LAB_00443df5
    MOV ESI,dword ptr [EBX + 0x18]      ; 00443da6
        ;   Label: LAB_00443da6
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00443da9
    CMP EAX,ESI                         ; 00443dac
    JGE 0x00443df1                      ; 00443dae
        ;   XREF to: 00443df1 (CONDITIONAL_JUMP)  ; LAB_00443df1
    MOV EDX,ESI                         ; 00443db0
    SUB EDX,EAX                         ; 00443db2
    CMP EDX,EBP                         ; 00443db4
    JLE 0x00443dba                      ; 00443db6
        ;   XREF to: 00443dba (CONDITIONAL_JUMP)  ; LAB_00443dba
    MOV EDX,EBP                         ; 00443db8
    MOV EDI,dword ptr [ESP + 0x4]       ; 00443dba
        ;   Label: LAB_00443dba
    MOV ESI,dword ptr [EBX + 0x10]      ; 00443dbe
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00443dc1
    MOV ECX,EDX                         ; 00443dc4
    ADD ESI,EAX                         ; 00443dc6
    SUB EBP,EDX                         ; 00443dc8
    PUSH EDI                            ; 00443dca
    MOV EAX,ECX                         ; 00443dcb
    SHR ECX,0x2                         ; 00443dcd
    MOVSD.REP ES:EDI,ESI                ; 00443dd0
    MOV CL,AL                           ; 00443dd2
    AND CL,0x3                          ; 00443dd4
    MOVSB.REP ES:EDI,ESI                ; 00443dd7
    POP EDI                             ; 00443dd9
    LEA ESI,[EDI + EDX*0x1]             ; 00443dda
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00443ddd
    MOV EDI,dword ptr [ESP]             ; 00443de0
    MOV dword ptr [ESP + 0x4],ESI       ; 00443de3
    ADD ECX,EDX                         ; 00443de7
    ADD EDI,EDX                         ; 00443de9
    MOV dword ptr [EBX + 0x1c],ECX      ; 00443deb
    MOV dword ptr [ESP],EDI             ; 00443dee
    TEST EBP,EBP                        ; 00443df1
        ;   Label: LAB_00443df1
    JG 0x00443e07                       ; 00443df3
        ;   XREF to: 00443e07 (CONDITIONAL_JUMP)  ; LAB_00443e07
    MOV EAX,dword ptr [ESP]             ; 00443df5
        ;   Label: LAB_00443df5
    ADD ESP,0x8                         ; 00443df8
        ;   Label: LAB_00443df8
    POP EBP                             ; 00443dfb
    POP EDI                             ; 00443dfc
    POP ESI                             ; 00443dfd
    POP EBX                             ; 00443dfe
    RET                                 ; 00443dff
    MOV EAX,0xfffffffe                  ; 00443e00
        ;   Label: LAB_00443e00
    JMP 0x00443df8                      ; 00443e05
        ;   XREF to: 00443df8 (UNCONDITIONAL_JUMP)  ; LAB_00443df8
    PUSH EBX                            ; 00443e07
        ;   Label: LAB_00443e07
    CALL FUN_00444020                   ; 00443e08
        ;   XREF to: 00444020 (UNCONDITIONAL_CALL)  ; undefined FUN_00444020()
    ADD ESP,0x4                         ; 00443e0d
    CMP EAX,-0x1                        ; 00443e10
    JL 0x00443df8                       ; 00443e13
        ;   XREF to: 00443df8 (CONDITIONAL_JUMP)  ; LAB_00443df8
    TEST EAX,EAX                        ; 00443e15
    JL 0x00443e28                       ; 00443e17
        ;   XREF to: 00443e28 (CONDITIONAL_JUMP)  ; LAB_00443e28
    TEST EBP,EBP                        ; 00443e19
    JG 0x00443da6                       ; 00443e1b
        ;   XREF to: 00443da6 (CONDITIONAL_JUMP)  ; LAB_00443da6
    MOV EAX,dword ptr [ESP]             ; 00443e1d
    ADD ESP,0x8                         ; 00443e20
    POP EBP                             ; 00443e23
    POP EDI                             ; 00443e24
    POP ESI                             ; 00443e25
    POP EBX                             ; 00443e26
    RET                                 ; 00443e27
    CMP dword ptr [ESP],0x0             ; 00443e28
        ;   Label: LAB_00443e28
    JG 0x00443df5                       ; 00443e2c
        ;   XREF to: 00443df5 (CONDITIONAL_JUMP)  ; LAB_00443df5
    MOV EAX,0xffffffff                  ; 00443e2e
    ADD ESP,0x8                         ; 00443e33
    POP EBP                             ; 00443e36
    POP EDI                             ; 00443e37
    POP ESI                             ; 00443e38
    POP EBX                             ; 00443e39
    RET                                 ; 00443e3a

