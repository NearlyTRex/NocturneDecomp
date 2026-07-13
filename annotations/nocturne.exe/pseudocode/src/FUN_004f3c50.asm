; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3c50(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_0058d08f+1
;   string s_startEvent_0058d09a
;   string s_moving_0058d0a5
;   string s_param_0058d0ac
;   string s_maxAngle_0058d0b2
;   string s_swooshSound_0058d0bb
;   string s_creak1Sound_0058d0c7
;   string s_creak2Sound_0058d0d3
;   string s_swooshPhaseBias_0058d0df
;   string s_killHero_0058d0ef
;   string s_killEnemy_0058d0f8
;   string s_decay_0058d102
;   string s_decayTimer_0058d108
;   string s_groundType_0058d113
;   string s_stopEvent_0058d11e
;   ... and 2 more
;
; Called Functions:
;   FUN_0040c6d0
;   FUN_0040c880
;   FUN_0040c900
;   FUN_0040ca00
;   FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3c50
        ;   Label: FUN_004f3c50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3c51
    PUSH EBX                            ; 004f3c55
    CALL FUN_0040d2d0                   ; 004f3c56
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 004f3c5b
    PUSH 0x58d090                       ; 004f3c5e | s_modelName_0058d08f+1
    LEA EAX,[EBX + 0x150]               ; 004f3c63
    PUSH EAX                            ; 004f3c69
    CALL FUN_0040ca00                   ; 004f3c6a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca00()
    ADD ESP,0x8                         ; 004f3c6f
    PUSH 0x58d09a                       ; 004f3c72 | = "startEvent"
    LEA EAX,[EBX + 0x2cc]               ; 004f3c77
    PUSH EAX                            ; 004f3c7d
    CALL FUN_0040c6d0                   ; 004f3c7e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004f3c83
    PUSH 0x58d0a5                       ; 004f3c86 | = "moving"
    LEA EAX,[EBX + 0x394]               ; 004f3c8b
    PUSH EAX                            ; 004f3c91
    CALL FUN_0040c900                   ; 004f3c92
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004f3c97
    PUSH 0x58d0ac                       ; 004f3c9a | = "param"
    LEA EAX,[EBX + 0x398]               ; 004f3c9f
    PUSH EAX                            ; 004f3ca5
    CALL FUN_0040c880                   ; 004f3ca6
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004f3cab
    PUSH 0x58d0b2                       ; 004f3cae | = "maxAngle"
    LEA EAX,[EBX + 0x3a0]               ; 004f3cb3
    PUSH EAX                            ; 004f3cb9
    CALL FUN_0040c880                   ; 004f3cba
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    MOV EDX,dword ptr [0x005be164]      ; 004f3cbf | DAT_005be164
    ADD ESP,0x8                         ; 004f3cc5
    CMP EDX,0x2                         ; 004f3cc8
    JGE 0x004f3dbd                      ; 004f3ccb
        ;   XREF to: 004f3dbd (CONDITIONAL_JUMP)  ; LAB_004f3dbd
    CMP dword ptr [0x005be164],0x3      ; 004f3cd1 | DAT_005be164
        ;   Label: LAB_004f3cd1
    JL 0x004f3d16                       ; 004f3cd8
        ;   XREF to: 004f3d16 (CONDITIONAL_JUMP)  ; LAB_004f3d16
    PUSH 0x58d0c7                       ; 004f3cda | = "creak1Sound"
    LEA EAX,[EBX + 0x3c8]               ; 004f3cdf
    PUSH EAX                            ; 004f3ce5
    CALL FUN_0040c6d0                   ; 004f3ce6
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004f3ceb
    PUSH 0x58d0d3                       ; 004f3cee | = "creak2Sound"
    LEA EAX,[EBX + 0x3e8]               ; 004f3cf3
    PUSH EAX                            ; 004f3cf9
    CALL FUN_0040c6d0                   ; 004f3cfa
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004f3cff
    PUSH 0x58d0df                       ; 004f3d02 | = "swooshPhaseBias"
    LEA EAX,[EBX + 0x3c4]               ; 004f3d07
    PUSH EAX                            ; 004f3d0d
    CALL FUN_0040c880                   ; 004f3d0e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004f3d13
    CMP dword ptr [0x005be164],0x4      ; 004f3d16 | DAT_005be164
        ;   Label: LAB_004f3d16
    JL 0x004f3d47                       ; 004f3d1d
        ;   XREF to: 004f3d47 (CONDITIONAL_JUMP)  ; LAB_004f3d47
    PUSH 0x58d0ef                       ; 004f3d1f | = "killHero"
    LEA EAX,[EBX + 0x420]               ; 004f3d24
    PUSH EAX                            ; 004f3d2a
    CALL FUN_0040c900                   ; 004f3d2b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004f3d30
    PUSH 0x58d0f8                       ; 004f3d33 | = "killEnemy"
    LEA EAX,[EBX + 0x424]               ; 004f3d38
    PUSH EAX                            ; 004f3d3e
    CALL FUN_0040c900                   ; 004f3d3f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004f3d44
    CMP dword ptr [0x005be164],0x5      ; 004f3d47 | DAT_005be164
        ;   Label: LAB_004f3d47
    JL 0x004f3d78                       ; 004f3d4e
        ;   XREF to: 004f3d78 (CONDITIONAL_JUMP)  ; LAB_004f3d78
    PUSH 0x58d102                       ; 004f3d50 | = "decay"
    LEA EAX,[EBX + 0x428]               ; 004f3d55
    PUSH EAX                            ; 004f3d5b
    CALL FUN_0040c880                   ; 004f3d5c
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004f3d61
    PUSH 0x58d108                       ; 004f3d64 | = "decayTimer"
    LEA EAX,[EBX + 0x42c]               ; 004f3d69
    PUSH EAX                            ; 004f3d6f
    CALL FUN_0040c880                   ; 004f3d70
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 004f3d75
    CMP dword ptr [0x005be164],0x6      ; 004f3d78 | DAT_005be164
        ;   Label: LAB_004f3d78
    JL 0x004f3d95                       ; 004f3d7f
        ;   XREF to: 004f3d95 (CONDITIONAL_JUMP)  ; LAB_004f3d95
    PUSH 0x58d113                       ; 004f3d81 | = "groundType"
    LEA EAX,[EBX + 0x430]               ; 004f3d86
    PUSH EAX                            ; 004f3d8c
    CALL FUN_0040c900                   ; 004f3d8d
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004f3d92
    CMP dword ptr [0x005be164],0x7      ; 004f3d95 | DAT_005be164
        ;   Label: LAB_004f3d95
    JL 0x004f3db2                       ; 004f3d9c
        ;   XREF to: 004f3db2 (CONDITIONAL_JUMP)  ; LAB_004f3db2
    PUSH 0x58d11e                       ; 004f3d9e | = "stopEvent"
    LEA EAX,[EBX + 0x330]               ; 004f3da3
    PUSH EAX                            ; 004f3da9
    CALL FUN_0040c6d0                   ; 004f3daa
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004f3daf
    CMP dword ptr [0x005be164],0x8      ; 004f3db2 | DAT_005be164
        ;   Label: LAB_004f3db2
    JGE 0x004f3dd6                      ; 004f3db9
        ;   XREF to: 004f3dd6 (CONDITIONAL_JUMP)  ; LAB_004f3dd6
    POP EBX                             ; 004f3dbb
    RET                                 ; 004f3dbc
    PUSH 0x58d0bb                       ; 004f3dbd | = "swooshSound"
        ;   Label: LAB_004f3dbd
    LEA EAX,[EBX + 0x3a4]               ; 004f3dc2
    PUSH EAX                            ; 004f3dc8
    CALL FUN_0040c6d0                   ; 004f3dc9
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 004f3dce
    JMP 0x004f3cd1                      ; 004f3dd1
        ;   XREF to: 004f3cd1 (UNCONDITIONAL_JUMP)  ; LAB_004f3cd1
    PUSH 0x58d128                       ; 004f3dd6 | = "oneShot"
        ;   Label: LAB_004f3dd6
    ADD EBX,0x434                       ; 004f3ddb
    PUSH EBX                            ; 004f3de1
    CALL FUN_0040c900                   ; 004f3de2
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 004f3de7
    POP EBX                             ; 004f3dea
    RET                                 ; 004f3deb

