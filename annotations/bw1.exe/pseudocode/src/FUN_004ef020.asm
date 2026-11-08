; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ef020(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_followState_005e4f1a
;   TerminatedCString s_hostageState_005e4f26
;   TerminatedCString s_goalWayPoint_005e4f33
;   TerminatedCString s_modelName_005e4f40
;   TerminatedCString s_motion_state_005e4f4a
;   TerminatedCString s_partStatus_005e4f57
;   TerminatedCString s_rescueDistance_005e4f62
;   TerminatedCString s_rescueCondition_005e4f71
;   TerminatedCString s_clothList_005e4f81
;   TerminatedCString s_rescueEvent_005e4f8b
;   TerminatedCString s_heroFoundMeEvent_005e4f97
;   TerminatedCString s_heroLeftMeEvent_005e4fa8
;   TerminatedCString s_heroCameBackEvent_005e4fb8
;   TerminatedCString s_goingToSitDownEvent_005e4fca
;   TerminatedCString s_sitDownEvent_005e4fde
;   ... and 7 more
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b560
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_0040b960
;   FUN_0040bce0
;   FUN_00531bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef020
        ;   Label: FUN_004ef020
    PUSH ESI                            ; 004ef021
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ef022
    PUSH EBX                            ; 004ef026
    CALL FUN_00531bf0                   ; 004ef027
        ;   XREF to: 00531bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00531bf0()
    ADD ESP,0x4                         ; 004ef02c
    PUSH 0x5e4f1a                       ; 004ef02f | = "followState"
    LEA ESI,[EBX + 0x1fe64]             ; 004ef034
    PUSH ESI                            ; 004ef03a
    CALL FUN_0040b670                   ; 004ef03b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004ef040
    PUSH 0x5e4f26                       ; 004ef043 | = "hostageState"
    LEA ESI,[EBX + 0x1fe6c]             ; 004ef048
    PUSH ESI                            ; 004ef04e
    CALL FUN_0040b670                   ; 004ef04f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004ef054
    PUSH 0x5e4f33                       ; 004ef057 | = "goalWayPoint"
    LEA ESI,[EBX + 0x1fe70]             ; 004ef05c
    PUSH ESI                            ; 004ef062
    CALL FUN_0040b6f0                   ; 004ef063
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    MOV EDX,dword ptr [0x0061ef8c]      ; 004ef068 | DAT_0061ef8c
    ADD ESP,0x8                         ; 004ef06e
    CMP EDX,0xa                         ; 004ef071
    JL 0x004ef1eb                       ; 004ef074
        ;   XREF to: 004ef1eb (CONDITIONAL_JUMP)  ; LAB_004ef1eb
    PUSH 0x5e4f57                       ; 004ef07a | = "partStatus"
        ;   Label: LAB_004ef07a
    LEA ESI,[EBX + 0x158]               ; 004ef07f
    PUSH ESI                            ; 004ef085
    CALL FUN_0040b960                   ; 004ef086
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004ef08b
    PUSH 0x5e4f62                       ; 004ef08e | = "rescueDistance"
    LEA ESI,[EBX + 0x1fab8]             ; 004ef093
    PUSH ESI                            ; 004ef099
    CALL FUN_0040b5f0                   ; 004ef09a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 004ef09f
    PUSH 0x5e4f71                       ; 004ef0a2 | = "rescueCondition"
    LEA ESI,[EBX + 0x1fabc]             ; 004ef0a7
    PUSH ESI                            ; 004ef0ad
    CALL FUN_0040b440                   ; 004ef0ae
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    MOV ECX,dword ptr [0x0061ef8c]      ; 004ef0b3 | DAT_0061ef8c
    ADD ESP,0x8                         ; 004ef0b9
    CMP ECX,0x2                         ; 004ef0bc
    JL 0x004ef0da                       ; 004ef0bf
        ;   XREF to: 004ef0da (CONDITIONAL_JUMP)  ; LAB_004ef0da
    CMP ECX,0x5                         ; 004ef0c1
    JGE 0x004ef0da                      ; 004ef0c4
        ;   XREF to: 004ef0da (CONDITIONAL_JUMP)  ; LAB_004ef0da
    PUSH 0x5e4f81                       ; 004ef0c6 | = "clothList"
    LEA ESI,[EBX + 0x2ca0]              ; 004ef0cb
    PUSH ESI                            ; 004ef0d1
    CALL FUN_0040bce0                   ; 004ef0d2
        ;   XREF to: 0040bce0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bce0()
    ADD ESP,0x8                         ; 004ef0d7
    CMP dword ptr [0x0061ef8c],0x3      ; 004ef0da | DAT_0061ef8c
        ;   Label: LAB_004ef0da
    JL 0x004ef0f7                       ; 004ef0e1
        ;   XREF to: 004ef0f7 (CONDITIONAL_JUMP)  ; LAB_004ef0f7
    PUSH 0x5e4f8b                       ; 004ef0e3 | = "rescueEvent"
    LEA ESI,[EBX + 0x1fb20]             ; 004ef0e8
    PUSH ESI                            ; 004ef0ee
    CALL FUN_0040b440                   ; 004ef0ef
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ef0f4
    CMP dword ptr [0x0061ef8c],0x4      ; 004ef0f7 | DAT_0061ef8c
        ;   Label: LAB_004ef0f7
    JL 0x004ef164                       ; 004ef0fe
        ;   XREF to: 004ef164 (CONDITIONAL_JUMP)  ; LAB_004ef164
    PUSH 0x5e4f97                       ; 004ef100 | = "heroFoundMeEvent"
    LEA ESI,[EBX + 0x1fb40]             ; 004ef105
    PUSH ESI                            ; 004ef10b
    CALL FUN_0040b440                   ; 004ef10c
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ef111
    PUSH 0x5e4fa8                       ; 004ef114 | = "heroLeftMeEvent"
    LEA ESI,[EBX + 0x1fba4]             ; 004ef119
    PUSH ESI                            ; 004ef11f
    CALL FUN_0040b440                   ; 004ef120
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ef125
    PUSH 0x5e4fb8                       ; 004ef128 | = "heroCameBackEvent"
    LEA ESI,[EBX + 0x1fc08]             ; 004ef12d
    PUSH ESI                            ; 004ef133
    CALL FUN_0040b440                   ; 004ef134
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ef139
    PUSH 0x5e4fca                       ; 004ef13c | = "goingToSitDownEvent"
    LEA ESI,[EBX + 0x1fcd0]             ; 004ef141
    PUSH ESI                            ; 004ef147
    CALL FUN_0040b440                   ; 004ef148
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ef14d
    PUSH 0x5e4fde                       ; 004ef150 | = "sitDownEvent"
    LEA ESI,[EBX + 0x1fd34]             ; 004ef155
    PUSH ESI                            ; 004ef15b
    CALL FUN_0040b440                   ; 004ef15c
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ef161
    CMP dword ptr [0x0061ef8c],0x6      ; 004ef164 | DAT_0061ef8c
        ;   Label: LAB_004ef164
    JL 0x004ef181                       ; 004ef16b
        ;   XREF to: 004ef181 (CONDITIONAL_JUMP)  ; LAB_004ef181
    PUSH 0x5e4feb                       ; 004ef16d | = "noShadowsWhenSaved"
    LEA ESI,[EBX + 0x1fe8c]             ; 004ef172
    PUSH ESI                            ; 004ef178
    CALL FUN_0040b670                   ; 004ef179
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004ef17e
    CMP dword ptr [0x0061ef8c],0x7      ; 004ef181 | DAT_0061ef8c
        ;   Label: LAB_004ef181
    JL 0x004ef19e                       ; 004ef188
        ;   XREF to: 004ef19e (CONDITIONAL_JUMP)  ; LAB_004ef19e
    PUSH 0x5e4ffe                       ; 004ef18a | = "getEatenEvent"
    LEA ESI,[EBX + 0x1fc6c]             ; 004ef18f
    PUSH ESI                            ; 004ef195
    CALL FUN_0040b440                   ; 004ef196
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ef19b
    MOV ECX,dword ptr [0x0061ef8c]      ; 004ef19e | DAT_0061ef8c
        ;   Label: LAB_004ef19e
    CMP ECX,0x8                         ; 004ef1a4
    JL 0x004ef1c2                       ; 004ef1a7
        ;   XREF to: 004ef1c2 (CONDITIONAL_JUMP)  ; LAB_004ef1c2
    CMP ECX,0xc                         ; 004ef1a9
    JGE 0x004ef1c2                      ; 004ef1ac
        ;   XREF to: 004ef1c2 (CONDITIONAL_JUMP)  ; LAB_004ef1c2
    PUSH 0x5e500c                       ; 004ef1ae | = "descriptiveName"
    LEA ESI,[EBX + 0x2544]              ; 004ef1b3
    PUSH ESI                            ; 004ef1b9
    CALL FUN_0040b560                   ; 004ef1ba
        ;   XREF to: 0040b560 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b560()
    ADD ESP,0x8                         ; 004ef1bf
    CMP dword ptr [0x0061ef8c],0x9      ; 004ef1c2 | DAT_0061ef8c
        ;   Label: LAB_004ef1c2
    JL 0x004ef1df                       ; 004ef1c9
        ;   XREF to: 004ef1df (CONDITIONAL_JUMP)  ; LAB_004ef1df
    PUSH 0x5e501c                       ; 004ef1cb | = "sitDownWayPoint"
    LEA ESI,[EBX + 0x1fe74]             ; 004ef1d0
    PUSH ESI                            ; 004ef1d6
    CALL FUN_0040b6f0                   ; 004ef1d7
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 004ef1dc
    CMP dword ptr [0x0061ef8c],0xb      ; 004ef1df | DAT_0061ef8c
        ;   Label: LAB_004ef1df
    JGE 0x004ef212                      ; 004ef1e6
        ;   XREF to: 004ef212 (CONDITIONAL_JUMP)  ; LAB_004ef212
    POP ESI                             ; 004ef1e8
    POP EBX                             ; 004ef1e9
    RET                                 ; 004ef1ea
    PUSH 0x5e4f40                       ; 004ef1eb | = "modelName"
        ;   Label: LAB_004ef1eb
    LEA ESI,[EBX + 0x158]               ; 004ef1f0
    PUSH ESI                            ; 004ef1f6
    CALL FUN_0040b7f0                   ; 004ef1f7
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    ADD ESP,0x8                         ; 004ef1fc
    PUSH 0x5e4f4a                       ; 004ef1ff | = "motion state"
    PUSH ESI                            ; 004ef204
    CALL FUN_0040b870                   ; 004ef205
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 004ef20a
    JMP 0x004ef07a                      ; 004ef20d
        ;   XREF to: 004ef07a (UNCONDITIONAL_JUMP)  ; LAB_004ef07a
    PUSH 0x5e502c                       ; 004ef212 | = "damageSound"
        ;   Label: LAB_004ef212
    LEA ESI,[EBX + 0x1fd98]             ; 004ef217
    PUSH ESI                            ; 004ef21d
    CALL FUN_0040b440                   ; 004ef21e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ef223
    PUSH 0x5e5038                       ; 004ef226 | = "dieSound"
    ADD EBX,0x1fdfc                     ; 004ef22b
    PUSH EBX                            ; 004ef231
    CALL FUN_0040b440                   ; 004ef232
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ef237
    POP ESI                             ; 004ef23a
    POP EBX                             ; 004ef23b
    RET                                 ; 004ef23c

