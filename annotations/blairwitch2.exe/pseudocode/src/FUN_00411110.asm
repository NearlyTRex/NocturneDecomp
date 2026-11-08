; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411110(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_courseFilename_005cb66f
;   TerminatedCString s_param_005cb67e
;   TerminatedCString s_speed_005cb684
;   TerminatedCString s_flapSpeedMult_005cb68a
;   TerminatedCString s_courseSpeed_005cb698
;   TerminatedCString s_modelName_005cb6a4
;   TerminatedCString s_periodicSoundTimerMin_005cb6ae
;   TerminatedCString s_periodicSoundTimerMax_005cb6c4
;   undefined4 DAT_005cb6de
;   undefined4 DAT_00609864
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411110
        ;   Label: FUN_00411110
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411111
    PUSH EBX                            ; 00411115
    CALL FUN_0040c330                   ; 00411116
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 0041111b
    PUSH 0x5cb66f                       ; 0041111e | = "courseFilename"
    LEA EAX,[EBX + 0x2b4]               ; 00411123
    PUSH EAX                            ; 00411129
    CALL FUN_0040b730                   ; 0041112a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0041112f
    PUSH 0x5cb67e                       ; 00411132 | = "param"
    LEA EAX,[EBX + 0x460]               ; 00411137
    PUSH EAX                            ; 0041113d
    CALL FUN_0040b8e0                   ; 0041113e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    MOV EDX,dword ptr [0x00609864]      ; 00411143 | DAT_00609864
    ADD ESP,0x8                         ; 00411149
    LEA EAX,[EBX + 0x468]               ; 0041114c
    CMP EDX,0x3                         ; 00411152
    JL 0x004111a1                       ; 00411155
        ;   XREF to: 004111a1 (CONDITIONAL_JUMP)  ; LAB_004111a1
    PUSH 0x5cb68a                       ; 00411157 | = "flapSpeedMult"
    PUSH EAX                            ; 0041115c
    CALL FUN_0040b8e0                   ; 0041115d
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00411162
    PUSH 0x5cb698                       ; 00411165 | = "courseSpeed"
    LEA EAX,[EBX + 0x464]               ; 0041116a
    PUSH EAX                            ; 00411170
    CALL FUN_0040b8e0                   ; 00411171
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00411176
    CMP dword ptr [0x00609864],0x2      ; 00411179 | DAT_00609864
        ;   Label: LAB_00411179
    JL 0x00411196                       ; 00411180
        ;   XREF to: 00411196 (CONDITIONAL_JUMP)  ; LAB_00411196
    PUSH 0x5cb6a4                       ; 00411182 | = "modelName"
    LEA EAX,[EBX + 0x2e4]               ; 00411187
    PUSH EAX                            ; 0041118d
    CALL FUN_0040ba60                   ; 0041118e
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 00411193
    CMP dword ptr [0x00609864],0x4      ; 00411196 | DAT_00609864
        ;   Label: LAB_00411196
    JGE 0x004111c3                      ; 0041119d
        ;   XREF to: 004111c3 (CONDITIONAL_JUMP)  ; LAB_004111c3
    POP EBX                             ; 0041119f
    RET                                 ; 004111a0
    PUSH 0x5cb684                       ; 004111a1 | = "speed"
        ;   Label: LAB_004111a1
    PUSH EAX                            ; 004111a6
    CALL FUN_0040b8e0                   ; 004111a7
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    FLD float ptr [EBX + 0x468]         ; 004111ac
    FMUL double ptr [0x005cb6de]        ; 004111b2 | DAT_005cb6de
    ADD ESP,0x8                         ; 004111b8
    FSTP float ptr [EBX + 0x464]        ; 004111bb
    JMP 0x00411179                      ; 004111c1
        ;   XREF to: 00411179 (UNCONDITIONAL_JUMP)  ; LAB_00411179
    PUSH 0x0                            ; 004111c3
        ;   Label: LAB_004111c3
    LEA EAX,[EBX + 0x470]               ; 004111c5
    PUSH EAX                            ; 004111cb
    CALL FUN_0040b730                   ; 004111cc
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004111d1
    PUSH 0x5cb6ae                       ; 004111d4 | = "periodicSoundTimerMin"
    LEA EAX,[EBX + 0x4d4]               ; 004111d9
    PUSH EAX                            ; 004111df
    CALL FUN_0040b8e0                   ; 004111e0
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 004111e5
    PUSH 0x5cb6c4                       ; 004111e8 | = "periodicSoundTimerMax"
    ADD EBX,0x4d8                       ; 004111ed
    PUSH EBX                            ; 004111f3
    CALL FUN_0040b8e0                   ; 004111f4
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 004111f9
    POP EBX                             ; 004111fc
    RET                                 ; 004111fd

