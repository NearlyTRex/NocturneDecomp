; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00566e70(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005d5b31+1
;   TerminatedCString s_spikeType_005d5b3c
;   TerminatedCString s_spikeState_005d5b46
;   TerminatedCString s_areWeActive_005d5b51
;   TerminatedCString s_extendDistance_005d5b5d
;   TerminatedCString s_startEvent_005d5b6c
;   TerminatedCString s_stopEvent_005d5b77
;   TerminatedCString s_extendEvent_005d5b81
;   TerminatedCString s_retractEvent_005d5b8d
;   TerminatedCString s_extendTime_005d5b9a
;   TerminatedCString s_retractTime_005d5ba5
;   TerminatedCString s_extendSound_005d5bb1
;   TerminatedCString s_retractSound_005d5bbd
;   TerminatedCString s_period_005d5bca
;   TerminatedCString s_damageStrength_005d5bd1
;   ... and 1 more
;
; Called Functions:
;   FUN_0040b680
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040b9b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566e70
        ;   Label: FUN_00566e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00566e71
    PUSH EBX                            ; 00566e75
    CALL FUN_0040c280                   ; 00566e76
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 00566e7b
    PUSH 0x5d5b32                       ; 00566e7e | s_modelName_005d5b31+1
    LEA EAX,[EBX + 0x158]               ; 00566e83
    PUSH EAX                            ; 00566e89
    CALL FUN_0040b9b0                   ; 00566e8a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 00566e8f
    PUSH 0x5d5b3c                       ; 00566e92 | = "spikeType"
    LEA EAX,[EBX + 0x2d4]               ; 00566e97
    PUSH EAX                            ; 00566e9d
    CALL FUN_0040b8b0                   ; 00566e9e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 00566ea3
    PUSH 0x5d5b46                       ; 00566ea6 | = "spikeState"
    LEA EAX,[EBX + 0x2d8]               ; 00566eab
    PUSH EAX                            ; 00566eb1
    CALL FUN_0040b8b0                   ; 00566eb2
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 00566eb7
    PUSH 0x5d5b51                       ; 00566eba | = "areWeActive"
    LEA EAX,[EBX + 0x2dc]               ; 00566ebf
    PUSH EAX                            ; 00566ec5
    CALL FUN_0040b8b0                   ; 00566ec6
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 00566ecb
    PUSH 0x5d5b5d                       ; 00566ece | = "extendDistance"
    LEA EAX,[EBX + 0x2ec]               ; 00566ed3
    PUSH EAX                            ; 00566ed9
    CALL FUN_0040b830                   ; 00566eda
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00566edf
    PUSH 0x5d5b6c                       ; 00566ee2 | = "startEvent"
    LEA EAX,[EBX + 0x2f0]               ; 00566ee7
    PUSH EAX                            ; 00566eed
    CALL FUN_0040b680                   ; 00566eee
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 00566ef3
    PUSH 0x5d5b77                       ; 00566ef6 | = "stopEvent"
    LEA EAX,[EBX + 0x354]               ; 00566efb
    PUSH EAX                            ; 00566f01
    CALL FUN_0040b680                   ; 00566f02
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 00566f07
    PUSH 0x5d5b81                       ; 00566f0a | = "extendEvent"
    LEA EAX,[EBX + 0x3b8]               ; 00566f0f
    PUSH EAX                            ; 00566f15
    CALL FUN_0040b680                   ; 00566f16
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 00566f1b
    PUSH 0x5d5b8d                       ; 00566f1e | = "retractEvent"
    LEA EAX,[EBX + 0x41c]               ; 00566f23
    PUSH EAX                            ; 00566f29
    CALL FUN_0040b680                   ; 00566f2a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 00566f2f
    PUSH 0x5d5b9a                       ; 00566f32 | = "extendTime"
    LEA EAX,[EBX + 0x480]               ; 00566f37
    PUSH EAX                            ; 00566f3d
    CALL FUN_0040b830                   ; 00566f3e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00566f43
    PUSH 0x5d5ba5                       ; 00566f46 | = "retractTime"
    LEA EAX,[EBX + 0x484]               ; 00566f4b
    PUSH EAX                            ; 00566f51
    CALL FUN_0040b830                   ; 00566f52
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00566f57
    PUSH 0x5d5bb1                       ; 00566f5a | = "extendSound"
    LEA EAX,[EBX + 0x48c]               ; 00566f5f
    PUSH EAX                            ; 00566f65
    CALL FUN_0040b680                   ; 00566f66
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 00566f6b
    PUSH 0x5d5bbd                       ; 00566f6e | = "retractSound"
    LEA EAX,[EBX + 0x4f0]               ; 00566f73
    PUSH EAX                            ; 00566f79
    CALL FUN_0040b680                   ; 00566f7a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 00566f7f
    PUSH 0x5d5bca                       ; 00566f82 | = "period"
    LEA EAX,[EBX + 0x554]               ; 00566f87
    PUSH EAX                            ; 00566f8d
    CALL FUN_0040b830                   ; 00566f8e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00566f93
    PUSH 0x5d5bd1                       ; 00566f96 | = "damageStrength"
    LEA EAX,[EBX + 0x558]               ; 00566f9b
    PUSH EAX                            ; 00566fa1
    CALL FUN_0040b830                   ; 00566fa2
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00566fa7
    PUSH 0x5d5be0                       ; 00566faa | = "param"
    ADD EBX,0x55c                       ; 00566faf
    PUSH EBX                            ; 00566fb5
    CALL FUN_0040b830                   ; 00566fb6
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00566fbb
    POP EBX                             ; 00566fbe
    RET                                 ; 00566fbf

