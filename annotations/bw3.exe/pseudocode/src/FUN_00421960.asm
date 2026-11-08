; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00421960(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_count_005b7770+1
;   TerminatedCString s_modelCount_005b7777
;   undefined4 DAT_005b7782
;   TerminatedCString s_modelName_005b7783
;   TerminatedCString s_allowChase_005b778d
;   TerminatedCString s_allowSwarm_005b7798
;   TerminatedCString s_allowChaseEvent_005b77a3
;   TerminatedCString s_allowSwarmEvent_005b77b3
;   TerminatedCString s_animateEvent_005b77c3
;   TerminatedCString s_remove_bug_timer_005b77d0
;   TerminatedCString s_max_life_timer_005b77e1
;   undefined4 DAT_005f0e7c
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   FUN_0040b680
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040b9b0
;   FUN_004625f0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421960
        ;   Label: FUN_00421960
    PUSH ESI                            ; 00421961
    PUSH EDI                            ; 00421962
    PUSH EBP                            ; 00421963
    MOV EDI,dword ptr [ESP + 0x14]      ; 00421964
    PUSH EDI                            ; 00421968
    CALL FUN_00489120                   ; 00421969
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 0042196e
    PUSH 0x5b7771                       ; 00421971 | s_count_005b7770+1
    LEA EBX,[EDI + 0xd058]              ; 00421976
    PUSH EBX                            ; 0042197c
    CALL FUN_0040b8b0                   ; 0042197d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 00421982
    PUSH 0x5b7777                       ; 00421985 | = "modelCount"
    LEA EBX,[EDI + 0x1345c]             ; 0042198a
    PUSH EBX                            ; 00421990
    CALL FUN_0040b8b0                   ; 00421991
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    MOV EDX,dword ptr [0x007df9b8]      ; 00421996 | DAT_007df9b8
    ADD ESP,0x8                         ; 0042199c
    CMP EDX,0x1                         ; 0042199f
    JZ 0x00421a53                       ; 004219a2
        ;   XREF to: 00421a53 (CONDITIONAL_JUMP)  ; LAB_00421a53
    MOV ECX,dword ptr [EDI + 0x1345c]   ; 004219a8
        ;   Label: LAB_004219a8
    XOR ESI,ESI                         ; 004219ae
    TEST ECX,ECX                        ; 004219b0
    JLE 0x004219e0                      ; 004219b2
        ;   XREF to: 004219e0 (CONDITIONAL_JUMP)  ; LAB_004219e0
    LEA EBX,[EDI + 0x13460]             ; 004219b4
    PUSH 0x5b7783                       ; 004219ba | = "modelName"
        ;   Label: LAB_004219ba
    PUSH EBX                            ; 004219bf
    INC ESI                             ; 004219c0
    CALL FUN_0040b9b0                   ; 004219c1
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 004219c6
    MOV EBP,dword ptr [EDI + 0x1345c]   ; 004219c9
    ADD EBX,0x17c                       ; 004219cf
    CMP ESI,EBP                         ; 004219d5
    JL 0x004219ba                       ; 004219d7
        ;   XREF to: 004219ba (CONDITIONAL_JUMP)  ; LAB_004219ba
    LEA EAX,[EAX]                       ; 004219d9
    NOP                                 ; 004219df
    PUSH 0x5b778d                       ; 004219e0 | = "allowChase"
        ;   Label: LAB_004219e0
    LEA EBX,[EDI + 0x1bd2c]             ; 004219e5
    PUSH EBX                            ; 004219eb
    CALL FUN_0040b8b0                   ; 004219ec
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004219f1
    PUSH 0x5b7798                       ; 004219f4 | = "allowSwarm"
    LEA EBX,[EDI + 0x1bd30]             ; 004219f9
    PUSH EBX                            ; 004219ff
    CALL FUN_0040b8b0                   ; 00421a00
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 00421a05
    PUSH 0x5b77a3                       ; 00421a08 | = "allowChaseEvent"
    LEA EBX,[EDI + 0x1bd3c]             ; 00421a0d
    PUSH EBX                            ; 00421a13
    CALL FUN_0040b680                   ; 00421a14
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 00421a19
    PUSH 0x5b77b3                       ; 00421a1c | = "allowSwarmEvent"
    LEA EBX,[EDI + 0x1bda0]             ; 00421a21
    PUSH EBX                            ; 00421a27
    CALL FUN_0040b680                   ; 00421a28
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 00421a2d
    PUSH 0x5b77c3                       ; 00421a30 | = "animateEvent"
    LEA EBX,[EDI + 0x1be04]             ; 00421a35
    PUSH EBX                            ; 00421a3b
    CALL FUN_0040b680                   ; 00421a3c
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    MOV EAX,[0x005f0e7c]                ; 00421a41 | DAT_005f0e7c
    ADD ESP,0x8                         ; 00421a46
    CMP EAX,0x2                         ; 00421a49
    JGE 0x00421a6c                      ; 00421a4c
        ;   XREF to: 00421a6c (CONDITIONAL_JUMP)  ; LAB_00421a6c
    POP EBP                             ; 00421a4e
    POP EDI                             ; 00421a4f
    POP ESI                             ; 00421a50
    POP EBX                             ; 00421a51
    RET                                 ; 00421a52
    PUSH 0x5b7782                       ; 00421a53 | DAT_005b7782
        ;   Label: LAB_00421a53
    LEA EBX,[EDI + 0x13460]             ; 00421a58
    PUSH EBX                            ; 00421a5e
    CALL FUN_004625f0                   ; 00421a5f
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 00421a64
    JMP 0x004219a8                      ; 00421a67
        ;   XREF to: 004219a8 (UNCONDITIONAL_JUMP)  ; LAB_004219a8
    PUSH 0x5b77d0                       ; 00421a6c | = "remove_bug_timer"
        ;   Label: LAB_00421a6c
    LEA EBX,[EDI + 0x1bd34]             ; 00421a71
    PUSH EBX                            ; 00421a77
    CALL FUN_0040b830                   ; 00421a78
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00421a7d
    PUSH 0x5b77e1                       ; 00421a80 | = "max_life_timer"
    ADD EDI,0x1bd38                     ; 00421a85
    PUSH EDI                            ; 00421a8b
    CALL FUN_0040b830                   ; 00421a8c
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00421a91
    POP EBP                             ; 00421a94
    POP EDI                             ; 00421a95
    POP ESI                             ; 00421a96
    POP EBX                             ; 00421a97
    RET                                 ; 00421a98

