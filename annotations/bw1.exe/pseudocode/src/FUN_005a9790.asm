; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9790(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005f9180
;   undefined4 DAT_005f918a
;   TerminatedCString s_neutral_005f918f
;   TerminatedCString s_destroyedEvent_005f9197
;   TerminatedCString s_startLoc_005f91a6
;   TerminatedCString s_endLoc_005f91af
;   TerminatedCString s_state_005f91b6
;   TerminatedCString s_timer_005f91bc
;   TerminatedCString s_winEvent_005f91c2
;   TerminatedCString s_eatDistance_005f91cb
;   TerminatedCString s_visualType_005f91d7
;   undefined4 DAT_00625c68
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9790
        ;   Label: FUN_005a9790
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9791
    PUSH EBX                            ; 005a9795
    CALL FUN_0040c040                   ; 005a9796
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 005a979b
    PUSH 0x5f9180                       ; 005a979e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005a97a3
    PUSH EAX                            ; 005a97a9
    CALL FUN_0040b770                   ; 005a97aa
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 005a97af
    PUSH 0x5f918a                       ; 005a97b2 | DAT_005f918a
    LEA EAX,[EBX + 0x2d8]               ; 005a97b7
    PUSH EAX                            ; 005a97bd
    CALL FUN_0040b6f0                   ; 005a97be
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a97c3
    PUSH 0x5f918f                       ; 005a97c6 | = "neutral"
    LEA EAX,[EBX + 0x2dc]               ; 005a97cb
    PUSH EAX                            ; 005a97d1
    CALL FUN_0040b6f0                   ; 005a97d2
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a97d7
    PUSH 0x5f9197                       ; 005a97da | = "destroyedEvent"
    LEA EAX,[EBX + 0x2e0]               ; 005a97df
    PUSH EAX                            ; 005a97e5
    CALL FUN_0040b440                   ; 005a97e6
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 005a97eb
    PUSH 0x5f91a6                       ; 005a97ee | = "startLoc"
    LEA EAX,[EBX + 0x3a8]               ; 005a97f3
    PUSH EAX                            ; 005a97f9
    CALL FUN_0040b6f0                   ; 005a97fa
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a97ff
    PUSH 0x5f91af                       ; 005a9802 | = "endLoc"
    LEA EAX,[EBX + 0x3ac]               ; 005a9807
    PUSH EAX                            ; 005a980d
    CALL FUN_0040b6f0                   ; 005a980e
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005a9813
    PUSH 0x5f91b6                       ; 005a9816 | = "state"
    LEA EAX,[EBX + 0x3b8]               ; 005a981b
    PUSH EAX                            ; 005a9821
    CALL FUN_0040b670                   ; 005a9822
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005a9827
    PUSH 0x5f91bc                       ; 005a982a | = "timer"
    LEA EAX,[EBX + 0x3bc]               ; 005a982f
    PUSH EAX                            ; 005a9835
    CALL FUN_0040b5f0                   ; 005a9836
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV EDX,dword ptr [0x00625c68]      ; 005a983b | DAT_00625c68
    ADD ESP,0x8                         ; 005a9841
    CMP EDX,0x2                         ; 005a9844
    JGE 0x005a9871                      ; 005a9847
        ;   XREF to: 005a9871 (CONDITIONAL_JUMP)  ; LAB_005a9871
    CMP dword ptr [0x00625c68],0x3      ; 005a9849 | DAT_00625c68
        ;   Label: LAB_005a9849
    JL 0x005a9866                       ; 005a9850
        ;   XREF to: 005a9866 (CONDITIONAL_JUMP)  ; LAB_005a9866
    PUSH 0x5f91cb                       ; 005a9852 | = "eatDistance"
    LEA EAX,[EBX + 0x3b0]               ; 005a9857
    PUSH EAX                            ; 005a985d
    CALL FUN_0040b5f0                   ; 005a985e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a9863
    CMP dword ptr [0x00625c68],0x4      ; 005a9866 | DAT_00625c68
        ;   Label: LAB_005a9866
    JGE 0x005a9887                      ; 005a986d
        ;   XREF to: 005a9887 (CONDITIONAL_JUMP)  ; LAB_005a9887
    POP EBX                             ; 005a986f
    RET                                 ; 005a9870
    PUSH 0x5f91c2                       ; 005a9871 | = "winEvent"
        ;   Label: LAB_005a9871
    LEA EAX,[EBX + 0x344]               ; 005a9876
    PUSH EAX                            ; 005a987c
    CALL FUN_0040b440                   ; 005a987d
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 005a9882
    JMP 0x005a9849                      ; 005a9885
        ;   XREF to: 005a9849 (UNCONDITIONAL_JUMP)  ; LAB_005a9849
    PUSH 0x5f91d7                       ; 005a9887 | = "visualType"
        ;   Label: LAB_005a9887
    ADD EBX,0x3b4                       ; 005a988c
    PUSH EBX                            ; 005a9892
    CALL FUN_0040b670                   ; 005a9893
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005a9898
    POP EBX                             ; 005a989b
    RET                                 ; 005a989c

