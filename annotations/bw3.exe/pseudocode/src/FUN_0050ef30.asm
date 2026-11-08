; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050ef30(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005cbb5c+1
;   TerminatedCString s_startEvent_005cbb67
;   TerminatedCString s_moving_005cbb72
;   TerminatedCString s_param_005cbb79
;   TerminatedCString s_maxAngle_005cbb7f
;   TerminatedCString s_swooshSound_005cbb88
;   TerminatedCString s_creak1Sound_005cbb94
;   TerminatedCString s_creak2Sound_005cbba0
;   TerminatedCString s_swooshPhaseBias_005cbbac
;   TerminatedCString s_killHero_005cbbbc
;   TerminatedCString s_killEnemy_005cbbc5
;   TerminatedCString s_decay_005cbbcf
;   TerminatedCString s_decayTimer_005cbbd5
;   TerminatedCString s_groundType_005cbbe0
;   TerminatedCString s_stopEvent_005cbbeb
;   ... and 2 more
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

    PUSH EBX                            ; 0050ef30
        ;   Label: FUN_0050ef30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050ef31
    PUSH EBX                            ; 0050ef35
    CALL FUN_0040c280                   ; 0050ef36
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 0050ef3b
    PUSH 0x5cbb5d                       ; 0050ef3e | s_modelName_005cbb5c+1
    LEA EAX,[EBX + 0x158]               ; 0050ef43
    PUSH EAX                            ; 0050ef49
    CALL FUN_0040b9b0                   ; 0050ef4a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 0050ef4f
    PUSH 0x5cbb67                       ; 0050ef52 | = "startEvent"
    LEA EAX,[EBX + 0x2d4]               ; 0050ef57
    PUSH EAX                            ; 0050ef5d
    CALL FUN_0040b680                   ; 0050ef5e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0050ef63
    PUSH 0x5cbb72                       ; 0050ef66 | = "moving"
    LEA EAX,[EBX + 0x39c]               ; 0050ef6b
    PUSH EAX                            ; 0050ef71
    CALL FUN_0040b8b0                   ; 0050ef72
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0050ef77
    PUSH 0x5cbb79                       ; 0050ef7a | = "param"
    LEA EAX,[EBX + 0x3a0]               ; 0050ef7f
    PUSH EAX                            ; 0050ef85
    CALL FUN_0040b830                   ; 0050ef86
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0050ef8b
    PUSH 0x5cbb7f                       ; 0050ef8e | = "maxAngle"
    LEA EAX,[EBX + 0x3a8]               ; 0050ef93
    PUSH EAX                            ; 0050ef99
    CALL FUN_0040b830                   ; 0050ef9a
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    MOV EDX,dword ptr [0x006036e0]      ; 0050ef9f | DAT_006036e0
    ADD ESP,0x8                         ; 0050efa5
    CMP EDX,0x2                         ; 0050efa8
    JGE 0x0050f09d                      ; 0050efab
        ;   XREF to: 0050f09d (CONDITIONAL_JUMP)  ; LAB_0050f09d
    CMP dword ptr [0x006036e0],0x3      ; 0050efb1 | DAT_006036e0
        ;   Label: LAB_0050efb1
    JL 0x0050eff6                       ; 0050efb8
        ;   XREF to: 0050eff6 (CONDITIONAL_JUMP)  ; LAB_0050eff6
    PUSH 0x5cbb94                       ; 0050efba | = "creak1Sound"
    LEA EAX,[EBX + 0x3d0]               ; 0050efbf
    PUSH EAX                            ; 0050efc5
    CALL FUN_0040b680                   ; 0050efc6
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0050efcb
    PUSH 0x5cbba0                       ; 0050efce | = "creak2Sound"
    LEA EAX,[EBX + 0x3f0]               ; 0050efd3
    PUSH EAX                            ; 0050efd9
    CALL FUN_0040b680                   ; 0050efda
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0050efdf
    PUSH 0x5cbbac                       ; 0050efe2 | = "swooshPhaseBias"
    LEA EAX,[EBX + 0x3cc]               ; 0050efe7
    PUSH EAX                            ; 0050efed
    CALL FUN_0040b830                   ; 0050efee
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0050eff3
    CMP dword ptr [0x006036e0],0x4      ; 0050eff6 | DAT_006036e0
        ;   Label: LAB_0050eff6
    JL 0x0050f027                       ; 0050effd
        ;   XREF to: 0050f027 (CONDITIONAL_JUMP)  ; LAB_0050f027
    PUSH 0x5cbbbc                       ; 0050efff | = "killHero"
    LEA EAX,[EBX + 0x428]               ; 0050f004
    PUSH EAX                            ; 0050f00a
    CALL FUN_0040b8b0                   ; 0050f00b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0050f010
    PUSH 0x5cbbc5                       ; 0050f013 | = "killEnemy"
    LEA EAX,[EBX + 0x42c]               ; 0050f018
    PUSH EAX                            ; 0050f01e
    CALL FUN_0040b8b0                   ; 0050f01f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0050f024
    CMP dword ptr [0x006036e0],0x5      ; 0050f027 | DAT_006036e0
        ;   Label: LAB_0050f027
    JL 0x0050f058                       ; 0050f02e
        ;   XREF to: 0050f058 (CONDITIONAL_JUMP)  ; LAB_0050f058
    PUSH 0x5cbbcf                       ; 0050f030 | = "decay"
    LEA EAX,[EBX + 0x430]               ; 0050f035
    PUSH EAX                            ; 0050f03b
    CALL FUN_0040b830                   ; 0050f03c
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0050f041
    PUSH 0x5cbbd5                       ; 0050f044 | = "decayTimer"
    LEA EAX,[EBX + 0x434]               ; 0050f049
    PUSH EAX                            ; 0050f04f
    CALL FUN_0040b830                   ; 0050f050
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 0050f055
    CMP dword ptr [0x006036e0],0x6      ; 0050f058 | DAT_006036e0
        ;   Label: LAB_0050f058
    JL 0x0050f075                       ; 0050f05f
        ;   XREF to: 0050f075 (CONDITIONAL_JUMP)  ; LAB_0050f075
    PUSH 0x5cbbe0                       ; 0050f061 | = "groundType"
    LEA EAX,[EBX + 0x438]               ; 0050f066
    PUSH EAX                            ; 0050f06c
    CALL FUN_0040b8b0                   ; 0050f06d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0050f072
    CMP dword ptr [0x006036e0],0x7      ; 0050f075 | DAT_006036e0
        ;   Label: LAB_0050f075
    JL 0x0050f092                       ; 0050f07c
        ;   XREF to: 0050f092 (CONDITIONAL_JUMP)  ; LAB_0050f092
    PUSH 0x5cbbeb                       ; 0050f07e | = "stopEvent"
    LEA EAX,[EBX + 0x338]               ; 0050f083
    PUSH EAX                            ; 0050f089
    CALL FUN_0040b680                   ; 0050f08a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0050f08f
    CMP dword ptr [0x006036e0],0x8      ; 0050f092 | DAT_006036e0
        ;   Label: LAB_0050f092
    JGE 0x0050f0b6                      ; 0050f099
        ;   XREF to: 0050f0b6 (CONDITIONAL_JUMP)  ; LAB_0050f0b6
    POP EBX                             ; 0050f09b
    RET                                 ; 0050f09c
    PUSH 0x5cbb88                       ; 0050f09d | = "swooshSound"
        ;   Label: LAB_0050f09d
    LEA EAX,[EBX + 0x3ac]               ; 0050f0a2
    PUSH EAX                            ; 0050f0a8
    CALL FUN_0040b680                   ; 0050f0a9
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 0050f0ae
    JMP 0x0050efb1                      ; 0050f0b1
        ;   XREF to: 0050efb1 (UNCONDITIONAL_JUMP)  ; LAB_0050efb1
    PUSH 0x5cbbf5                       ; 0050f0b6 | = "oneShot"
        ;   Label: LAB_0050f0b6
    ADD EBX,0x43c                       ; 0050f0bb
    PUSH EBX                            ; 0050f0c1
    CALL FUN_0040b8b0                   ; 0050f0c2
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 0050f0c7
    POP EBX                             ; 0050f0ca
    RET                                 ; 0050f0cb

