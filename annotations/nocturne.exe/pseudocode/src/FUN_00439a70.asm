; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00439a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004a4170 at 004a44e9
;
; Called Functions:
;   FUN_004394f0
;   FUN_00439590
;   FUN_00439760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439a70
        ;   Label: FUN_00439a70
    PUSH ESI                            ; 00439a71
    PUSH EBP                            ; 00439a72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00439a73
    CMP dword ptr [EBX + 0x2c],0x0      ; 00439a77
    JL 0x00439abc                       ; 00439a7b
        ;   XREF to: 00439abc (CONDITIONAL_JUMP)  ; LAB_00439abc
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00439a7d
        ;   Label: LAB_00439a7d
    PUSH EBP                            ; 00439a81
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00439a82
    PUSH EAX                            ; 00439a85
    LEA ESI,[EBX + 0x4]                 ; 00439a86
    PUSH ESI                            ; 00439a89
    CALL FUN_00439760                   ; 00439a8a
        ;   XREF to: 00439760 (UNCONDITIONAL_CALL)  ; undefined FUN_00439760()
    MOV EDX,dword ptr [EBX + 0x28]      ; 00439a8f
    ADD ESP,0xc                         ; 00439a92
    TEST EDX,EDX                        ; 00439a95
    JL 0x00439aaf                       ; 00439a97
        ;   XREF to: 00439aaf (CONDITIONAL_JUMP)  ; LAB_00439aaf
    PUSH EDX                            ; 00439a99
    PUSH EAX                            ; 00439a9a
    PUSH ESI                            ; 00439a9b
    CALL FUN_004394f0                   ; 00439a9c
        ;   XREF to: 004394f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004394f0()
    ADD ESP,0xc                         ; 00439aa1
    TEST EAX,EAX                        ; 00439aa4
    JZ 0x00439aaf                       ; 00439aa6
        ;   XREF to: 00439aaf (CONDITIONAL_JUMP)  ; LAB_00439aaf
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00439aa8
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00439aaf
        ;   Label: LAB_00439aaf
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00439ab2
    MOV dword ptr [EBX + 0x28],EAX      ; 00439ab9
    MOV ECX,dword ptr [ESP + 0x18]      ; 00439abc
        ;   Label: LAB_00439abc
    PUSH ECX                            ; 00439ac0
    MOV ESI,dword ptr [ESP + 0x18]      ; 00439ac1
    PUSH ESI                            ; 00439ac5
    LEA EAX,[EBX + 0x18]                ; 00439ac6
    PUSH EAX                            ; 00439ac9
    LEA EAX,[EBX + 0x4]                 ; 00439aca
    PUSH EAX                            ; 00439acd
    CALL FUN_00439590                   ; 00439ace
        ;   XREF to: 00439590 (UNCONDITIONAL_CALL)  ; undefined FUN_00439590()
    ADD ESP,0x10                        ; 00439ad3
    MOV dword ptr [EBX + 0x2c],EAX      ; 00439ad6
    TEST EAX,EAX                        ; 00439ad9
    JGE 0x00439a7d                      ; 00439adb
        ;   XREF to: 00439a7d (CONDITIONAL_JUMP)  ; LAB_00439a7d
    MOV EAX,0x1                         ; 00439add
    POP EBP                             ; 00439ae2
    POP ESI                             ; 00439ae3
    POP EBX                             ; 00439ae4
    RET                                 ; 00439ae5

