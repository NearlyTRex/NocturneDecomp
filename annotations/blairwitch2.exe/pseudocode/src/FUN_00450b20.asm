; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00450b20(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00450ac4 = 00450b42
;   undefined4 DAT_005cfe37
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb6b84
;
; Called Functions:
;   FUN_004244b0
;   FUN_0042b5e0
;   FUN_00450c60
;   FUN_004bd460
;   FUN_005035c0
;   FUN_005a8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450b20
        ;   Label: FUN_00450b20
    SUB ESP,0x8                         ; 00450b21
    MOV EBX,dword ptr [ESP + 0x10]      ; 00450b24
    PUSH dword ptr [ESP + 0x14]         ; 00450b28
    PUSH EBX                            ; 00450b2c
    CALL FUN_004244b0                   ; 00450b2d
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 00450b32
    TEST EAX,EAX                        ; 00450b35
    JNZ 0x00450bc2                      ; 00450b37
        ;   XREF to: 00450bc2 (CONDITIONAL_JUMP)  ; LAB_00450bc2
    ADD ESP,0x8                         ; 00450b3d
    POP EBX                             ; 00450b40
    RET                                 ; 00450b41
    MOV ESI,0x1                         ; 00450b42
        ;   Label: caseD_7
    CMP dword ptr [EBX + 0x256a4],0x7   ; 00450b47
        ;   Label: caseD_18
    JNZ 0x00450c06                      ; 00450b4e
        ;   XREF to: 00450c06 (CONDITIONAL_JUMP)  ; LAB_00450c06
    FLD float ptr [ESP + 0x18]          ; 00450b54
        ;   Label: LAB_00450b54
    FMUL double ptr [0x005cfe37]        ; 00450b58 | DAT_005cfe37
    FSTP float ptr [ESP + 0x4]          ; 00450b5e
    PUSH dword ptr [ESP + 0x4]          ; 00450b62
    PUSH EBX                            ; 00450b66
    CALL FUN_00450c60                   ; 00450b67
        ;   XREF to: 00450c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00450c60()
    ADD ESP,0x8                         ; 00450b6c
    PUSH dword ptr [ESP + 0x4]          ; 00450b6f
    PUSH EBX                            ; 00450b73
    CALL FUN_00450c60                   ; 00450b74
        ;   XREF to: 00450c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00450c60()
    ADD ESP,0x8                         ; 00450b79
    PUSH dword ptr [ESP + 0x4]          ; 00450b7c
    PUSH EBX                            ; 00450b80
    CALL FUN_00450c60                   ; 00450b81
        ;   XREF to: 00450c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00450c60()
    ADD ESP,0x8                         ; 00450b86
    PUSH dword ptr [ESP + 0x4]          ; 00450b89
    PUSH EBX                            ; 00450b8d
        ;   Label: LAB_00450b8d
    CALL FUN_00450c60                   ; 00450b8e
        ;   XREF to: 00450c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00450c60()
    ADD ESP,0x8                         ; 00450b93
    MOV ECX,dword ptr [0x00616494]      ; 00450b96 | DAT_00616494
    PUSH dword ptr [ESP + 0x8]          ; 00450b9c
    PUSH ECX                            ; 00450ba0 | DAT_01cb6900
    CALL FUN_004bd460                   ; 00450ba1
        ;   XREF to: 004bd460 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd460()
    ADD ESP,0x8                         ; 00450ba6
    ADD EBX,0x154                       ; 00450ba9
    PUSH dword ptr [ESP + 0x18]         ; 00450baf
    PUSH EBX                            ; 00450bb3
    CALL FUN_005a8180                   ; 00450bb4
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8180()
    ADD ESP,0x8                         ; 00450bb9
    POP ESI                             ; 00450bbc
    ADD ESP,0x8                         ; 00450bbd
    POP EBX                             ; 00450bc0
    RET                                 ; 00450bc1
    PUSH ESI                            ; 00450bc2
        ;   Label: LAB_00450bc2
    PUSH dword ptr [ESP + 0x18]         ; 00450bc3
    PUSH EBX                            ; 00450bc7
    CALL FUN_0042b5e0                   ; 00450bc8
        ;   XREF to: 0042b5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b5e0()
    MOV EAX,[0x00616494]                ; 00450bcd | DAT_00616494
    ADD ESP,0x8                         ; 00450bd2
    FLD float ptr [EAX + 0x284]         ; 00450bd5 | DAT_01cb6b84
    LEA EAX,[EBX + 0x2b4]               ; 00450bdb
    PUSH EAX                            ; 00450be1
    FSTP float ptr [ESP + 0xc]          ; 00450be2
    CALL FUN_005035c0                   ; 00450be6
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00450beb
    XOR ESI,ESI                         ; 00450bee
    SUB EAX,0x7                         ; 00450bf0
    ADD ESP,0x4                         ; 00450bf3
    CMP EAX,0x14                        ; 00450bf6
    JA 0x00450b47                       ; 00450bf9
        ;   XREF to: 00450b47 (CONDITIONAL_JUMP)  ; caseD_1a
    JMP dword ptr [EAX*0x4 + 0x450ac4]  ; 00450bff | caseD_1b | caseD_1a | switchdataD_00450ac4
        ;   Label: switchD
    TEST ESI,ESI                        ; 00450c06
        ;   Label: LAB_00450c06
    JNZ 0x00450b54                      ; 00450c08
        ;   XREF to: 00450b54 (CONDITIONAL_JUMP)  ; LAB_00450b54
    PUSH dword ptr [ESP + 0x18]         ; 00450c0e
    JMP 0x00450b8d                      ; 00450c12
        ;   XREF to: 00450b8d (UNCONDITIONAL_JUMP)  ; LAB_00450b8d

