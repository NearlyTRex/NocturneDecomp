; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00585b60(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005ede24
;   undefined4 DAT_005ede2e
;   TerminatedCString s_neutral_005ede33
;   TerminatedCString s_destroyedEvent_005ede3b
;   TerminatedCString s_startLoc_005ede4a
;   TerminatedCString s_endLoc_005ede53
;   TerminatedCString s_state_005ede5a
;   TerminatedCString s_timer_005ede60
;   TerminatedCString s_winEvent_005ede66
;   TerminatedCString s_eatDistance_005ede6f
;   TerminatedCString s_visualType_005ede7b
;   undefined4 DAT_0061e4f8
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585b60
        ;   Label: FUN_00585b60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00585b61
    PUSH EBX                            ; 00585b65
    CALL FUN_0040c330                   ; 00585b66
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 00585b6b
    PUSH 0x5ede24                       ; 00585b6e | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 00585b73
    PUSH EAX                            ; 00585b79
    CALL FUN_0040ba60                   ; 00585b7a
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 00585b7f
    PUSH 0x5ede2e                       ; 00585b82 | DAT_005ede2e
    LEA EAX,[EBX + 0x434]               ; 00585b87
    PUSH EAX                            ; 00585b8d
    CALL FUN_0040b9e0                   ; 00585b8e
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00585b93
    PUSH 0x5ede33                       ; 00585b96 | = "neutral"
    LEA EAX,[EBX + 0x438]               ; 00585b9b
    PUSH EAX                            ; 00585ba1
    CALL FUN_0040b9e0                   ; 00585ba2
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00585ba7
    PUSH 0x5ede3b                       ; 00585baa | = "destroyedEvent"
    LEA EAX,[EBX + 0x43c]               ; 00585baf
    PUSH EAX                            ; 00585bb5
    CALL FUN_0040b730                   ; 00585bb6
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00585bbb
    PUSH 0x5ede4a                       ; 00585bbe | = "startLoc"
    LEA EAX,[EBX + 0x504]               ; 00585bc3
    PUSH EAX                            ; 00585bc9
    CALL FUN_0040b9e0                   ; 00585bca
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00585bcf
    PUSH 0x5ede53                       ; 00585bd2 | = "endLoc"
    LEA EAX,[EBX + 0x508]               ; 00585bd7
    PUSH EAX                            ; 00585bdd
    CALL FUN_0040b9e0                   ; 00585bde
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 00585be3
    PUSH 0x5ede5a                       ; 00585be6 | = "state"
    LEA EAX,[EBX + 0x514]               ; 00585beb
    PUSH EAX                            ; 00585bf1
    CALL FUN_0040b960                   ; 00585bf2
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00585bf7
    PUSH 0x5ede60                       ; 00585bfa | = "timer"
    LEA EAX,[EBX + 0x518]               ; 00585bff
    PUSH EAX                            ; 00585c05
    CALL FUN_0040b8e0                   ; 00585c06
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    MOV EDX,dword ptr [0x0061e4f8]      ; 00585c0b | DAT_0061e4f8
    ADD ESP,0x8                         ; 00585c11
    CMP EDX,0x2                         ; 00585c14
    JGE 0x00585c41                      ; 00585c17
        ;   XREF to: 00585c41 (CONDITIONAL_JUMP)  ; LAB_00585c41
    CMP dword ptr [0x0061e4f8],0x3      ; 00585c19 | DAT_0061e4f8
        ;   Label: LAB_00585c19
    JL 0x00585c36                       ; 00585c20
        ;   XREF to: 00585c36 (CONDITIONAL_JUMP)  ; LAB_00585c36
    PUSH 0x5ede6f                       ; 00585c22 | = "eatDistance"
    LEA EAX,[EBX + 0x50c]               ; 00585c27
    PUSH EAX                            ; 00585c2d
    CALL FUN_0040b8e0                   ; 00585c2e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00585c33
    CMP dword ptr [0x0061e4f8],0x4      ; 00585c36 | DAT_0061e4f8
        ;   Label: LAB_00585c36
    JGE 0x00585c57                      ; 00585c3d
        ;   XREF to: 00585c57 (CONDITIONAL_JUMP)  ; LAB_00585c57
    POP EBX                             ; 00585c3f
    RET                                 ; 00585c40
    PUSH 0x5ede66                       ; 00585c41 | = "winEvent"
        ;   Label: LAB_00585c41
    LEA EAX,[EBX + 0x4a0]               ; 00585c46
    PUSH EAX                            ; 00585c4c
    CALL FUN_0040b730                   ; 00585c4d
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00585c52
    JMP 0x00585c19                      ; 00585c55
        ;   XREF to: 00585c19 (UNCONDITIONAL_JUMP)  ; LAB_00585c19
    PUSH 0x5ede7b                       ; 00585c57 | = "visualType"
        ;   Label: LAB_00585c57
    ADD EBX,0x510                       ; 00585c5c
    PUSH EBX                            ; 00585c62
    CALL FUN_0040b960                   ; 00585c63
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00585c68
    POP EBX                             ; 00585c6b
    RET                                 ; 00585c6c

