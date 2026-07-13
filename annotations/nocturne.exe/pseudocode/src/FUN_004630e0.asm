; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004630e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_0057df2a+2
;   string s_modelName_0057df32
;   string s_guardDistance_0057df3c
;   string s_motion_state_0057df4a
;   undefined4 DAT_005b0660
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040ca80
;   FUN_0040cb00
;   FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004630e0
        ;   Label: FUN_004630e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004630e1
    PUSH EBX                            ; 004630e5
    CALL FUN_004796c0                   ; 004630e6
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796c0()
    ADD ESP,0x4                         ; 004630eb
    PUSH 0x57df2c                       ; 004630ee | s_speed_0057df2a+2
    LEA EAX,[EBX + 0xbc8c]              ; 004630f3
    PUSH EAX                            ; 004630f9
    CALL FUN_0040c880                   ; 004630fa
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004630ff
    PUSH 0x57df32                       ; 00463102 | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00463107
    PUSH EAX                            ; 0046310d
    CALL FUN_0040ca80                   ; 0046310e
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca80()
    MOV EDX,dword ptr [0x005b0660]      ; 00463113 | DAT_005b0660
    ADD ESP,0x8                         ; 00463119
    CMP EDX,0x2                         ; 0046311c
    JL 0x00463137                       ; 0046311f
        ;   XREF to: 00463137 (CONDITIONAL_JUMP)  ; LAB_00463137
    PUSH 0x57df4a                       ; 00463121 | = "motion state"
        ;   Label: LAB_00463121
    ADD EBX,0x150                       ; 00463126
    PUSH EBX                            ; 0046312c
    CALL FUN_0040cb00                   ; 0046312d
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 00463132
    POP EBX                             ; 00463135
    RET                                 ; 00463136
    PUSH 0x57df3c                       ; 00463137 | = "guardDistance"
        ;   Label: LAB_00463137
    LEA EAX,[EBX + 0xbc9c]              ; 0046313c
    PUSH EAX                            ; 00463142
    CALL FUN_0040c880                   ; 00463143
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00463148
    JMP 0x00463121                      ; 0046314b
        ;   XREF to: 00463121 (UNCONDITIONAL_JUMP)  ; LAB_00463121

