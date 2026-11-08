; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00428650(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005b7de8
;   TerminatedCString s_modelName_005b7dee
;   TerminatedCString s_motion_state_005b7df8
;   TerminatedCString s_partStatus_005b7e05
;   TerminatedCString s_alwaysChaseFast_005b7e10
;
; Called Functions:
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040ba30
;   FUN_0040bab0
;   FUN_0040bba0
;   FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428650
        ;   Label: FUN_00428650
    PUSH ESI                            ; 00428651
    MOV ESI,dword ptr [ESP + 0xc]       ; 00428652
    PUSH ESI                            ; 00428656
    CALL FUN_00489120                   ; 00428657
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined FUN_00489120()
    ADD ESP,0x4                         ; 0042865c
    PUSH 0x5b7de8                       ; 0042865f | = "speed"
    LEA EBX,[ESI + 0xcdcc]              ; 00428664
    PUSH EBX                            ; 0042866a
    CALL FUN_0040b830                   ; 0042866b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 00428670
    PUSH 0x5b7dee                       ; 00428673 | = "modelName"
    LEA EBX,[ESI + 0x158]               ; 00428678
    PUSH EBX                            ; 0042867e
    CALL FUN_0040ba30                   ; 0042867f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba30()
    ADD ESP,0x8                         ; 00428684
    PUSH 0x5b7df8                       ; 00428687 | = "motion state"
    PUSH EBX                            ; 0042868c
    CALL FUN_0040bab0                   ; 0042868d
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bab0()
    ADD ESP,0x8                         ; 00428692
    PUSH 0x5b7e05                       ; 00428695 | = "partStatus"
    PUSH EBX                            ; 0042869a
    CALL FUN_0040bba0                   ; 0042869b
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bba0()
    ADD ESP,0x8                         ; 004286a0
    PUSH 0x5b7e10                       ; 004286a3 | = "alwaysChaseFast"
    ADD ESI,0xd070                      ; 004286a8
    PUSH ESI                            ; 004286ae
    CALL FUN_0040b8b0                   ; 004286af
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004286b4
    POP ESI                             ; 004286b7
    POP EBX                             ; 004286b8
    RET                                 ; 004286b9

