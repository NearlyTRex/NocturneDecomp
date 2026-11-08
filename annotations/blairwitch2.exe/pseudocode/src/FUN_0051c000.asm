; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051c000(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e2992
;   TerminatedCString s_pod_ini_005e2995
;   TerminatedCString s_pod_005e299d
;   undefined4 DAT_005e29a3
;   undefined4 DAT_005e29a7
;
; Called Functions:
;   FUN_00460e10
;   FUN_00460e30
;   FUN_00460e50
;   FUN_00460ed0
;   FUN_00460f50
;   FUN_005b8100
;   FUN_005b89c0
;   FUN_005b910c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c000
        ;   Label: FUN_0051c000
    PUSH EDI                            ; 0051c001
    SUB ESP,0x168                       ; 0051c002
    MOV EBX,dword ptr [ESP + 0x174]     ; 0051c008
    PUSH 0x5e2992                       ; 0051c00f | DAT_005e2992
    PUSH 0x5e2995                       ; 0051c014 | = "pod.ini"
    CALL FUN_005b910c                   ; 0051c019
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined FUN_005b910c()
    ADD ESP,0x8                         ; 0051c01e
    MOV EDI,EAX                         ; 0051c021
    TEST EAX,EAX                        ; 0051c023
    JNZ 0x0051c093                      ; 0051c025
        ;   XREF to: 0051c093 (CONDITIONAL_JUMP)  ; LAB_0051c093
    MOV EAX,ESP                         ; 0051c02b
    PUSH EAX                            ; 0051c02d
    CALL FUN_00460e10                   ; 0051c02e
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e10()
    ADD ESP,0x4                         ; 0051c033
    PUSH 0x5e299d                       ; 0051c036 | = "*.pod"
    LEA EAX,[ESP + 0x4]                 ; 0051c03b
    PUSH EAX                            ; 0051c03f
    CALL FUN_00460e50                   ; 0051c040
        ;   XREF to: 00460e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e50()
    ADD ESP,0x8                         ; 0051c045
    CMP byte ptr [ESP],0x0              ; 0051c048
    JZ 0x0051c070                       ; 0051c04c
        ;   XREF to: 0051c070 (CONDITIONAL_JUMP)  ; LAB_0051c070
    MOV EDX,ESP                         ; 0051c04e
        ;   Label: LAB_0051c04e
    PUSH EDX                            ; 0051c050
    MOV EAX,dword ptr [EBX + 0x194]     ; 0051c051
    PUSH EBX                            ; 0051c057
    CALL dword ptr [EAX + 0xc]          ; 0051c058
    ADD ESP,0x8                         ; 0051c05b
    MOV EAX,ESP                         ; 0051c05e
    PUSH EAX                            ; 0051c060
    CALL FUN_00460ed0                   ; 0051c061
        ;   XREF to: 00460ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460ed0()
    ADD ESP,0x4                         ; 0051c066
    CMP byte ptr [ESP],0x0              ; 0051c069
    JNZ 0x0051c04e                      ; 0051c06d
        ;   XREF to: 0051c04e (CONDITIONAL_JUMP)  ; LAB_0051c04e
    NOP                                 ; 0051c06f
    MOV EAX,ESP                         ; 0051c070
        ;   Label: LAB_0051c070
    PUSH EAX                            ; 0051c072
    CALL FUN_00460f50                   ; 0051c073
        ;   XREF to: 00460f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f50()
    ADD ESP,0x4                         ; 0051c078
    PUSH 0x0                            ; 0051c07b
    LEA EAX,[ESP + 0x4]                 ; 0051c07d
    PUSH EAX                            ; 0051c081
    CALL FUN_00460e30                   ; 0051c082
        ;   XREF to: 00460e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e30()
    ADD ESP,0x8                         ; 0051c087
    ADD ESP,0x168                       ; 0051c08a
    POP EDI                             ; 0051c090
    POP EBX                             ; 0051c091
    RET                                 ; 0051c092
    PUSH ESI                            ; 0051c093
        ;   Label: LAB_0051c093
    LEA EDX,[ESP + 0x168]               ; 0051c094
    PUSH EDX                            ; 0051c09b
    PUSH 0x5e29a3                       ; 0051c09c | DAT_005e29a3
    PUSH EAX                            ; 0051c0a1
    CALL FUN_005b8100                   ; 0051c0a2
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0051c0a7
    MOV EDX,dword ptr [ESP + 0x168]     ; 0051c0aa
    XOR ESI,ESI                         ; 0051c0b1
    TEST EDX,EDX                        ; 0051c0b3
    JLE 0x0051c0f0                      ; 0051c0b5
        ;   XREF to: 0051c0f0 (CONDITIONAL_JUMP)  ; LAB_0051c0f0
    LEA EAX,[ESP + 0x118]               ; 0051c0b7
        ;   Label: LAB_0051c0b7
    PUSH EAX                            ; 0051c0be
    PUSH 0x5e29a7                       ; 0051c0bf | DAT_005e29a7
    PUSH EDI                            ; 0051c0c4
    CALL FUN_005b8100                   ; 0051c0c5
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0051c0ca
    LEA EAX,[ESP + 0x118]               ; 0051c0cd
    PUSH EAX                            ; 0051c0d4
    MOV EDX,dword ptr [EBX + 0x194]     ; 0051c0d5
    PUSH EBX                            ; 0051c0db
    CALL dword ptr [EDX + 0xc]          ; 0051c0dc
    ADD ESP,0x8                         ; 0051c0df
    INC ESI                             ; 0051c0e2
    CMP ESI,dword ptr [ESP + 0x168]     ; 0051c0e3
    JL 0x0051c0b7                       ; 0051c0ea
        ;   XREF to: 0051c0b7 (CONDITIONAL_JUMP)  ; LAB_0051c0b7
    LEA EAX,[EAX]                       ; 0051c0ec
    PUSH EDI                            ; 0051c0f0
        ;   Label: LAB_0051c0f0
    CALL FUN_005b89c0                   ; 0051c0f1
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0051c0f6
    POP ESI                             ; 0051c0f9
    ADD ESP,0x168                       ; 0051c0fa
    POP EDI                             ; 0051c100
    POP EBX                             ; 0051c101
    RET                                 ; 0051c102

