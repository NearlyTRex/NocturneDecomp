; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df880(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_model_005c6864+1
;   TerminatedCString s_ladderSize_005c686b
;   TerminatedCString s_masterActor_005c6876
;   TerminatedCString s_groundType_005c6882
;   undefined4 DAT_00600288
;
; Called Functions:
;   FUN_0040b400
;   FUN_0040b8b0
;   FUN_0040b930
;   FUN_0040b9b0
;   FUN_0040c280
;   FUN_004dfa70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df880
        ;   Label: FUN_004df880
    MOV EBX,dword ptr [ESP + 0x8]       ; 004df881
    PUSH EBX                            ; 004df885
    CALL FUN_0040c280                   ; 004df886
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 004df88b
    PUSH 0x5c6865                       ; 004df88e | s_model_005c6864+1
    LEA EAX,[EBX + 0x158]               ; 004df893
    PUSH EAX                            ; 004df899
    CALL FUN_0040b9b0                   ; 004df89a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 004df89f
    PUSH 0x5c686b                       ; 004df8a2 | = "ladderSize"
    LEA EAX,[EBX + 0x2d4]               ; 004df8a7
    PUSH EAX                            ; 004df8ad
    CALL FUN_0040b400                   ; 004df8ae
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    ADD ESP,0x8                         ; 004df8b3
    PUSH 0x5c6876                       ; 004df8b6 | = "masterActor"
    LEA EAX,[EBX + 0x2e0]               ; 004df8bb
    PUSH EAX                            ; 004df8c1
    CALL FUN_0040b930                   ; 004df8c2
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 004df8c7
    PUSH EBX                            ; 004df8ca
    CALL FUN_004dfa70                   ; 004df8cb
        ;   XREF to: 004dfa70 (UNCONDITIONAL_CALL)  ; undefined FUN_004dfa70()
    MOV EDX,dword ptr [0x00600288]      ; 004df8d0 | DAT_00600288
    ADD ESP,0x4                         ; 004df8d6
    CMP EDX,0x2                         ; 004df8d9
    JGE 0x004df8e0                      ; 004df8dc
        ;   XREF to: 004df8e0 (CONDITIONAL_JUMP)  ; LAB_004df8e0
    POP EBX                             ; 004df8de
    RET                                 ; 004df8df
    PUSH 0x5c6882                       ; 004df8e0 | = "groundType"
        ;   Label: LAB_004df8e0
    ADD EBX,0x2fc                       ; 004df8e5
    PUSH EBX                            ; 004df8eb
    CALL FUN_0040b8b0                   ; 004df8ec
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004df8f1
    POP EBX                             ; 004df8f4
    RET                                 ; 004df8f5

