; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059b4a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005d9b97+1
;   TerminatedCString s_motion_state_005d9ba2
;   TerminatedCString s_shootMe_005d9baf
;   TerminatedCString s_poolMe_005d9bb7
;   TerminatedCString s_speed_005d9bbe
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_00509800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b4a0
        ;   Label: FUN_0059b4a0
    PUSH ESI                            ; 0059b4a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059b4a2
    PUSH EBX                            ; 0059b4a6
    CALL FUN_00509800                   ; 0059b4a7
        ;   XREF to: 00509800 (UNCONDITIONAL_CALL)  ; undefined FUN_00509800()
    ADD ESP,0x4                         ; 0059b4ac
    PUSH 0x5d9b98                       ; 0059b4af | s_modelName_005d9b97+1
    LEA ESI,[EBX + 0x158]               ; 0059b4b4
    PUSH ESI                            ; 0059b4ba
    CALL FUN_0040ba30                   ; 0059b4bb
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 0059b4c0
    PUSH 0x5d9ba2                       ; 0059b4c3 | = "motion state"
    PUSH ESI                            ; 0059b4c8
    CALL FUN_0040bab0                   ; 0059b4c9
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 0059b4ce
    PUSH 0x5d9baf                       ; 0059b4d1 | = "shootMe"
    LEA ESI,[EBX + 0x34160]             ; 0059b4d6
    PUSH ESI                            ; 0059b4dc
    CALL FUN_0040b8b0                   ; 0059b4dd
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0059b4e2
    PUSH 0x5d9bb7                       ; 0059b4e5 | = "poolMe"
    LEA ESI,[EBX + 0x34164]             ; 0059b4ea
    PUSH ESI                            ; 0059b4f0
    CALL FUN_0040b8b0                   ; 0059b4f1
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0059b4f6
    PUSH 0x5d9bbe                       ; 0059b4f9 | = "speed"
    ADD EBX,0x34168                     ; 0059b4fe
    PUSH EBX                            ; 0059b504
    CALL FUN_0040b830                   ; 0059b505
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0059b50a
    POP ESI                             ; 0059b50d
    POP EBX                             ; 0059b50e
    RET                                 ; 0059b50f

