; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00593c10(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d9202+1
;   TerminatedCString s_modelName_005d9209
;   TerminatedCString s_guardDistance_005d9213
;   TerminatedCString s_motion_state_005d9221
;   TerminatedCString s_maxFadeTime_005d922e
;   TerminatedCString s_fadeOutOpacity_005d923a
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593c10
        ;   Label: FUN_00593c10
    PUSH ESI                            ; 00593c11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00593c12
    PUSH EBX                            ; 00593c16
    CALL FUN_00489120                   ; 00593c17
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 00593c1c
    PUSH 0x5d9203                       ; 00593c1f | s_speed_005d9202+1
    LEA ESI,[EBX + 0xcdcc]              ; 00593c24
    PUSH ESI                            ; 00593c2a
    CALL FUN_0040b830                   ; 00593c2b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00593c30
    PUSH 0x5d9209                       ; 00593c33 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00593c38
    PUSH ESI                            ; 00593c3e
    CALL FUN_0040ba30                   ; 00593c3f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 00593c44
    PUSH 0x5d9213                       ; 00593c47 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 00593c4c
    PUSH EAX                            ; 00593c52
    CALL FUN_0040b830                   ; 00593c53
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00593c58
    PUSH 0x5d9221                       ; 00593c5b | = "motion state"
    PUSH ESI                            ; 00593c60
    CALL FUN_0040bab0                   ; 00593c61
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 00593c66
    PUSH 0x5d922e                       ; 00593c69 | = "maxFadeTime"
    LEA EAX,[EBX + 0xd06c]              ; 00593c6e
    PUSH EAX                            ; 00593c74
    CALL FUN_0040b830                   ; 00593c75
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00593c7a
    PUSH 0x5d923a                       ; 00593c7d | = "fadeOutOpacity"
    ADD EBX,0xd070                      ; 00593c82
    PUSH EBX                            ; 00593c88
    CALL FUN_0040b8b0                   ; 00593c89
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 00593c8e
    POP ESI                             ; 00593c91
    POP EBX                             ; 00593c92
    RET                                 ; 00593c93

