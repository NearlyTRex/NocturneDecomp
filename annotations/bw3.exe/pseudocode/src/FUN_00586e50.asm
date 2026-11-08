; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00586e50(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_Aspeed_005d82ed+2
;   TerminatedCString s_modelName_005d82f5
;   TerminatedCString s_guardDistance_005d82ff
;   TerminatedCString s_motion_state_005d830d
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586e50
        ;   Label: FUN_00586e50
    PUSH ESI                            ; 00586e51
    MOV ESI,dword ptr [ESP + 0xc]       ; 00586e52
    PUSH ESI                            ; 00586e56
    CALL FUN_00489120                   ; 00586e57
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 00586e5c
    PUSH 0x5d82ef                       ; 00586e5f | s_Aspeed_005d82ed+2
    LEA EBX,[ESI + 0xcdcc]              ; 00586e64
    PUSH EBX                            ; 00586e6a
    CALL FUN_0040b830                   ; 00586e6b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00586e70
    PUSH 0x5d82f5                       ; 00586e73 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 00586e78
    PUSH EBX                            ; 00586e7e
    CALL FUN_0040ba30                   ; 00586e7f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 00586e84
    PUSH 0x5d82ff                       ; 00586e87 | = "guardDistance"
    ADD ESI,0xcddc                      ; 00586e8c
    PUSH ESI                            ; 00586e92
    CALL FUN_0040b830                   ; 00586e93
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00586e98
    PUSH 0x5d830d                       ; 00586e9b | = "motion state"
    PUSH EBX                            ; 00586ea0
    CALL FUN_0040bab0                   ; 00586ea1
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 00586ea6
    POP ESI                             ; 00586ea9
    POP EBX                             ; 00586eaa
    RET                                 ; 00586eab

