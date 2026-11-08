; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410c90(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_courseFilename_005d35da
;   TerminatedCString s_param_005d35e9
;   TerminatedCString s_speed_005d35ef
;   TerminatedCString s_flapSpeedMult_005d35f5
;   TerminatedCString s_courseSpeed_005d3603
;   TerminatedCString s_modelName_005d360f
;   TerminatedCString s_periodicSoundTimerMin_005d3619
;   TerminatedCString s_periodicSoundTimerMax_005d362f
;   undefined4 DAT_005d3649
;   undefined4 DAT_00610968
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410c90
        ;   Label: FUN_00410c90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410c91
    PUSH EBX                            ; 00410c95
    CALL FUN_0040c040                   ; 00410c96
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 00410c9b
    PUSH 0x5d35da                       ; 00410c9e | = "courseFilename"
    LEA EAX,[EBX + 0x158]               ; 00410ca3
    PUSH EAX                            ; 00410ca9
    CALL FUN_0040b440                   ; 00410caa
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00410caf
    PUSH 0x5d35e9                       ; 00410cb2 | = "param"
    LEA EAX,[EBX + 0x304]               ; 00410cb7
    PUSH EAX                            ; 00410cbd
    CALL FUN_0040b5f0                   ; 00410cbe
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV EDX,dword ptr [0x00610968]      ; 00410cc3 | DAT_00610968
    ADD ESP,0x8                         ; 00410cc9
    LEA EAX,[EBX + 0x30c]               ; 00410ccc
    CMP EDX,0x3                         ; 00410cd2
    JL 0x00410d21                       ; 00410cd5
        ;   XREF to: 00410d21 (CONDITIONAL_JUMP)  ; LAB_00410d21
    PUSH 0x5d35f5                       ; 00410cd7 | = "flapSpeedMult"
    PUSH EAX                            ; 00410cdc
    CALL FUN_0040b5f0                   ; 00410cdd
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00410ce2
    PUSH 0x5d3603                       ; 00410ce5 | = "courseSpeed"
    LEA EAX,[EBX + 0x308]               ; 00410cea
    PUSH EAX                            ; 00410cf0
    CALL FUN_0040b5f0                   ; 00410cf1
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00410cf6
    CMP dword ptr [0x00610968],0x2      ; 00410cf9 | DAT_00610968
        ;   Label: LAB_00410cf9
    JL 0x00410d16                       ; 00410d00
        ;   XREF to: 00410d16 (CONDITIONAL_JUMP)  ; LAB_00410d16
    PUSH 0x5d360f                       ; 00410d02 | = "modelName"
    LEA EAX,[EBX + 0x188]               ; 00410d07
    PUSH EAX                            ; 00410d0d
    CALL FUN_0040b770                   ; 00410d0e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 00410d13
    CMP dword ptr [0x00610968],0x4      ; 00410d16 | DAT_00610968
        ;   Label: LAB_00410d16
    JGE 0x00410d43                      ; 00410d1d
        ;   XREF to: 00410d43 (CONDITIONAL_JUMP)  ; LAB_00410d43
    POP EBX                             ; 00410d1f
    RET                                 ; 00410d20
    PUSH 0x5d35ef                       ; 00410d21 | = "speed"
        ;   Label: LAB_00410d21
    PUSH EAX                            ; 00410d26
    CALL FUN_0040b5f0                   ; 00410d27
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    FLD float ptr [EBX + 0x30c]         ; 00410d2c
    FMUL double ptr [0x005d3649]        ; 00410d32 | DAT_005d3649
    ADD ESP,0x8                         ; 00410d38
    FSTP float ptr [EBX + 0x308]        ; 00410d3b
    JMP 0x00410cf9                      ; 00410d41
        ;   XREF to: 00410cf9 (UNCONDITIONAL_JUMP)  ; LAB_00410cf9
    PUSH 0x0                            ; 00410d43
        ;   Label: LAB_00410d43
    LEA EAX,[EBX + 0x314]               ; 00410d45
    PUSH EAX                            ; 00410d4b
    CALL FUN_0040b440                   ; 00410d4c
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00410d51
    PUSH 0x5d3619                       ; 00410d54 | = "periodicSoundTimerMin"
    LEA EAX,[EBX + 0x378]               ; 00410d59
    PUSH EAX                            ; 00410d5f
    CALL FUN_0040b5f0                   ; 00410d60
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00410d65
    PUSH 0x5d362f                       ; 00410d68 | = "periodicSoundTimerMax"
    ADD EBX,0x37c                       ; 00410d6d
    PUSH EBX                            ; 00410d73
    CALL FUN_0040b5f0                   ; 00410d74
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00410d79
    POP EBX                             ; 00410d7c
    RET                                 ; 00410d7d

