; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053cf90(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_objectToPickUp_00595bf6+1
;   string s_doorToOpen_00595c06
;   string s_leverToPull_00595c11
;   string s_ladderToClimb_00595c1d
;   string s_lhCarryObject_00595c2b
;   string s_rhCarryObject_00595c39
;   string s_ladderToDescend_00595c47
;   string s_gunsDrawn_00595c57
;   string s_weapon_00595c61
;   string s_actionPending_00595c68
;   string s_layerActionIndex_00595c76
;   string s_layerActionT_00595c87
;   undefined4 DAT_005c0ff0
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040c900
;   FUN_0040c980
;   FUN_004b49a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cf90
        ;   Label: FUN_0053cf90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053cf91
    PUSH EBX                            ; 0053cf95
    CALL FUN_004b49a0                   ; 0053cf96
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b49a0()
    MOV EDX,dword ptr [0x005c0ff0]      ; 0053cf9b | DAT_005c0ff0
    ADD ESP,0x4                         ; 0053cfa1
    CMP EDX,0x2                         ; 0053cfa4
    JL 0x0053cffe                       ; 0053cfa7
        ;   XREF to: 0053cffe (CONDITIONAL_JUMP)  ; LAB_0053cffe
    CMP EDX,0x4                         ; 0053cfa9
    JG 0x0053cffe                       ; 0053cfac
        ;   XREF to: 0053cffe (CONDITIONAL_JUMP)  ; LAB_0053cffe
    PUSH 0x595bf7                       ; 0053cfae | s_objectToPickUp_00595bf6+1
    LEA EAX,[EBX + 0x1fa08]             ; 0053cfb3
    PUSH EAX                            ; 0053cfb9
    CALL FUN_0040c980                   ; 0053cfba
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0053cfbf
    PUSH 0x595c06                       ; 0053cfc2 | = "doorToOpen"
    LEA EAX,[EBX + 0x1fa04]             ; 0053cfc7
    PUSH EAX                            ; 0053cfcd
    CALL FUN_0040c980                   ; 0053cfce
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0053cfd3
    PUSH 0x595c11                       ; 0053cfd6 | = "leverToPull"
    LEA EAX,[EBX + 0x1fa10]             ; 0053cfdb
    PUSH EAX                            ; 0053cfe1
    CALL FUN_0040c980                   ; 0053cfe2
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0053cfe7
    PUSH 0x595c1d                       ; 0053cfea | = "ladderToClimb"
    LEA EAX,[EBX + 0x1fa14]             ; 0053cfef
    PUSH EAX                            ; 0053cff5
    CALL FUN_0040c980                   ; 0053cff6
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0053cffb
    CMP dword ptr [0x005c0ff0],0x2      ; 0053cffe | DAT_005c0ff0
        ;   Label: LAB_0053cffe
    JNZ 0x0053d02f                      ; 0053d005
        ;   XREF to: 0053d02f (CONDITIONAL_JUMP)  ; LAB_0053d02f
    PUSH 0x595c2b                       ; 0053d007 | = "lhCarryObject"
    LEA EAX,[EBX + 0x24ac]              ; 0053d00c
    PUSH EAX                            ; 0053d012
    CALL FUN_0040c980                   ; 0053d013
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0053d018
    PUSH 0x595c39                       ; 0053d01b | = "rhCarryObject"
    LEA EAX,[EBX + 0x24f0]              ; 0053d020
    PUSH EAX                            ; 0053d026
    CALL FUN_0040c980                   ; 0053d027
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0053d02c
    CMP dword ptr [0x005c0ff0],0x4      ; 0053d02f | DAT_005c0ff0
        ;   Label: LAB_0053d02f
    JL 0x0053d04c                       ; 0053d036
        ;   XREF to: 0053d04c (CONDITIONAL_JUMP)  ; LAB_0053d04c
    PUSH 0x595c47                       ; 0053d038 | = "ladderToDescend"
    LEA EAX,[EBX + 0x1fa90]             ; 0053d03d
    PUSH EAX                            ; 0053d043
    CALL FUN_0040c980                   ; 0053d044
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0053d049
    CMP dword ptr [0x005c0ff0],0x6      ; 0053d04c | DAT_005c0ff0
        ;   Label: LAB_0053d04c
    JL 0x0053d069                       ; 0053d053
        ;   XREF to: 0053d069 (CONDITIONAL_JUMP)  ; LAB_0053d069
    PUSH 0x595c57                       ; 0053d055 | = "gunsDrawn"
    LEA EAX,[EBX + 0x1fa3c]             ; 0053d05a
    PUSH EAX                            ; 0053d060
    CALL FUN_0040c900                   ; 0053d061
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0053d066
    CMP dword ptr [0x005c0ff0],0x7      ; 0053d069 | DAT_005c0ff0
        ;   Label: LAB_0053d069
    JL 0x0053d086                       ; 0053d070
        ;   XREF to: 0053d086 (CONDITIONAL_JUMP)  ; LAB_0053d086
    PUSH 0x595c61                       ; 0053d072 | = "weapon"
    LEA EAX,[EBX + 0x1fa94]             ; 0053d077
    PUSH EAX                            ; 0053d07d
    CALL FUN_0040c980                   ; 0053d07e
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0053d083
    CMP dword ptr [0x005c0ff0],0x8      ; 0053d086 | DAT_005c0ff0
        ;   Label: LAB_0053d086
    JL 0x0053d0a3                       ; 0053d08d
        ;   XREF to: 0053d0a3 (CONDITIONAL_JUMP)  ; LAB_0053d0a3
    PUSH 0x595c68                       ; 0053d08f | = "actionPending"
    LEA EAX,[EBX + 0x1faa0]             ; 0053d094
    PUSH EAX                            ; 0053d09a
    CALL FUN_0040c900                   ; 0053d09b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0053d0a0
    CMP dword ptr [0x005c0ff0],0x9      ; 0053d0a3 | DAT_005c0ff0
        ;   Label: LAB_0053d0a3
    JGE 0x0053d0ae                      ; 0053d0aa
        ;   XREF to: 0053d0ae (CONDITIONAL_JUMP)  ; LAB_0053d0ae
    POP EBX                             ; 0053d0ac
    RET                                 ; 0053d0ad
    PUSH 0x595c76                       ; 0053d0ae | = "layerActionIndex"
        ;   Label: LAB_0053d0ae
    LEA EAX,[EBX + 0x2a84]              ; 0053d0b3
    PUSH EAX                            ; 0053d0b9
    CALL FUN_0040c900                   ; 0053d0ba
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0053d0bf
    PUSH 0x595c87                       ; 0053d0c2 | = "layerActionT"
    ADD EBX,0x2a88                      ; 0053d0c7
    PUSH EBX                            ; 0053d0cd
    CALL FUN_0040c880                   ; 0053d0ce
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 0053d0d3
    POP EBX                             ; 0053d0d6
    RET                                 ; 0053d0d7

