; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005835a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005f6217+1
;   TerminatedCString s_spikeType_005f6222
;   TerminatedCString s_spikeState_005f622c
;   TerminatedCString s_areWeActive_005f6237
;   TerminatedCString s_extendDistance_005f6243
;   TerminatedCString s_startEvent_005f6252
;   TerminatedCString s_stopEvent_005f625d
;   TerminatedCString s_extendEvent_005f6267
;   TerminatedCString s_retractEvent_005f6273
;   TerminatedCString s_extendTime_005f6280
;   TerminatedCString s_retractTime_005f628b
;   TerminatedCString s_extendSound_005f6297
;   TerminatedCString s_retractSound_005f62a3
;   TerminatedCString s_period_005f62b0
;   TerminatedCString s_damageStrength_005f62b7
;   ... and 1 more
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005835a0
        ;   Label: FUN_005835a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005835a1
    PUSH EBX                            ; 005835a5
    CALL FUN_0040c040                   ; 005835a6
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 005835ab
    PUSH 0x5f6218                       ; 005835ae | s_modelName_005f6217+1
    LEA EAX,[EBX + 0x158]               ; 005835b3
    PUSH EAX                            ; 005835b9
    CALL FUN_0040b770                   ; 005835ba
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 005835bf
    PUSH 0x5f6222                       ; 005835c2 | = "spikeType"
    LEA EAX,[EBX + 0x2d4]               ; 005835c7
    PUSH EAX                            ; 005835cd
    CALL FUN_0040b670                   ; 005835ce
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005835d3
    PUSH 0x5f622c                       ; 005835d6 | = "spikeState"
    LEA EAX,[EBX + 0x2d8]               ; 005835db
    PUSH EAX                            ; 005835e1
    CALL FUN_0040b670                   ; 005835e2
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005835e7
    PUSH 0x5f6237                       ; 005835ea | = "areWeActive"
    LEA EAX,[EBX + 0x2dc]               ; 005835ef
    PUSH EAX                            ; 005835f5
    CALL FUN_0040b670                   ; 005835f6
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005835fb
    PUSH 0x5f6243                       ; 005835fe | = "extendDistance"
    LEA EAX,[EBX + 0x2ec]               ; 00583603
    PUSH EAX                            ; 00583609
    CALL FUN_0040b5f0                   ; 0058360a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0058360f
    PUSH 0x5f6252                       ; 00583612 | = "startEvent"
    LEA EAX,[EBX + 0x2f0]               ; 00583617
    PUSH EAX                            ; 0058361d
    CALL FUN_0040b440                   ; 0058361e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00583623
    PUSH 0x5f625d                       ; 00583626 | = "stopEvent"
    LEA EAX,[EBX + 0x354]               ; 0058362b
    PUSH EAX                            ; 00583631
    CALL FUN_0040b440                   ; 00583632
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00583637
    PUSH 0x5f6267                       ; 0058363a | = "extendEvent"
    LEA EAX,[EBX + 0x3b8]               ; 0058363f
    PUSH EAX                            ; 00583645
    CALL FUN_0040b440                   ; 00583646
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0058364b
    PUSH 0x5f6273                       ; 0058364e | = "retractEvent"
    LEA EAX,[EBX + 0x41c]               ; 00583653
    PUSH EAX                            ; 00583659
    CALL FUN_0040b440                   ; 0058365a
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0058365f
    PUSH 0x5f6280                       ; 00583662 | = "extendTime"
    LEA EAX,[EBX + 0x480]               ; 00583667
    PUSH EAX                            ; 0058366d
    CALL FUN_0040b5f0                   ; 0058366e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00583673
    PUSH 0x5f628b                       ; 00583676 | = "retractTime"
    LEA EAX,[EBX + 0x484]               ; 0058367b
    PUSH EAX                            ; 00583681
    CALL FUN_0040b5f0                   ; 00583682
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00583687
    PUSH 0x5f6297                       ; 0058368a | = "extendSound"
    LEA EAX,[EBX + 0x48c]               ; 0058368f
    PUSH EAX                            ; 00583695
    CALL FUN_0040b440                   ; 00583696
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0058369b
    PUSH 0x5f62a3                       ; 0058369e | = "retractSound"
    LEA EAX,[EBX + 0x4f0]               ; 005836a3
    PUSH EAX                            ; 005836a9
    CALL FUN_0040b440                   ; 005836aa
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 005836af
    PUSH 0x5f62b0                       ; 005836b2 | = "period"
    LEA EAX,[EBX + 0x554]               ; 005836b7
    PUSH EAX                            ; 005836bd
    CALL FUN_0040b5f0                   ; 005836be
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005836c3
    PUSH 0x5f62b7                       ; 005836c6 | = "damageStrength"
    LEA EAX,[EBX + 0x558]               ; 005836cb
    PUSH EAX                            ; 005836d1
    CALL FUN_0040b5f0                   ; 005836d2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005836d7
    PUSH 0x5f62c6                       ; 005836da | = "param"
    ADD EBX,0x55c                       ; 005836df
    PUSH EBX                            ; 005836e5
    CALL FUN_0040b5f0                   ; 005836e6
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005836eb
    POP EBX                             ; 005836ee
    RET                                 ; 005836ef

