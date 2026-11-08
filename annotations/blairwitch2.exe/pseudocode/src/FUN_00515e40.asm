; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00515e40(int param_1)
;
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515e40
        ;   Label: FUN_00515e40
    PUSH ESI                            ; 00515e41
    PUSH EDI                            ; 00515e42
    SUB ESP,0x30                        ; 00515e43
    MOV EBX,dword ptr [ESP + 0x40]      ; 00515e46
    PUSH EBX                            ; 00515e4a
    CALL FUN_004089d0                   ; 00515e4b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 00515e50
    PUSH 0x0                            ; 00515e53
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00515e55
    PUSH EBX                            ; 00515e5b
    LEA ESI,[ESP + 0x8]                 ; 00515e5c
    LEA EDI,[ESP + 0x20]                ; 00515e60
    CALL dword ptr [EAX + 0x24]         ; 00515e64
    MOV ECX,0x6                         ; 00515e67
    ADD ESP,0x4                         ; 00515e6c
    LEA EAX,[ESP + 0x1c]                ; 00515e6f
    LEA ESI,[ESP + 0x4]                 ; 00515e73
    PUSH EAX                            ; 00515e77
    MOVSD.REP ES:EDI,ESI                ; 00515e78
    CALL FUN_0041a840                   ; 00515e7a
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 00515e7f
    MOV ESI,EAX                         ; 00515e82
    TEST EAX,EAX                        ; 00515e84
    JNZ 0x00515e9a                      ; 00515e86
        ;   XREF to: 00515e9a (CONDITIONAL_JUMP)  ; LAB_00515e9a
    PUSH EBX                            ; 00515e88
    CALL FUN_00408a10                   ; 00515e89
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00515e8e
    MOV EAX,ESI                         ; 00515e91
    ADD ESP,0x30                        ; 00515e93
    POP EDI                             ; 00515e96
    POP ESI                             ; 00515e97
    POP EBX                             ; 00515e98
    RET                                 ; 00515e99
    PUSH -0x1                           ; 00515e9a
        ;   Label: LAB_00515e9a
    LEA EAX,[EBX + 0x2b4]               ; 00515e9c
    PUSH 0x0                            ; 00515ea2
    PUSH EAX                            ; 00515ea4
    CALL FUN_0044fcc0                   ; 00515ea5
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 00515eaa
    PUSH EBX                            ; 00515ead
    CALL FUN_00408a10                   ; 00515eae
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00515eb3
    MOV EAX,ESI                         ; 00515eb6
    ADD ESP,0x30                        ; 00515eb8
    POP EDI                             ; 00515ebb
    POP ESI                             ; 00515ebc
    POP EBX                             ; 00515ebd
    RET                                 ; 00515ebe

