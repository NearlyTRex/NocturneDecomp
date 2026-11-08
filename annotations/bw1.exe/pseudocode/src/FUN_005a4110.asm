; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4110(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_homePos_005f8ba7+1
;   TerminatedCString s_modelName_005f8bb0
;   TerminatedCString s_speed_005f8bba
;   TerminatedCString s_maxDistance_005f8bc0
;   TerminatedCString s_maxHeight_005f8bcc
;   TerminatedCString s_rotSpeed_005f8bd6
;   TerminatedCString s_moveSpeed_005f8bdf
;   TerminatedCString s_followOrders_005f8be9
;   TerminatedCString s_state_005f8bf6
;   TerminatedCString s_periodicSoundTimerMin_005f8bfc
;   TerminatedCString s_periodicSoundTimerMax_005f8c12
;   undefined4 DAT_00625c18
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b770
;   FUN_0040c040
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4110
        ;   Label: FUN_005a4110
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a4111
    CMP dword ptr [0x00625c18],0x3      ; 005a4115 | DAT_00625c18
    JL 0x005a41fe                       ; 005a411c
        ;   XREF to: 005a41fe (CONDITIONAL_JUMP)  ; LAB_005a41fe
    PUSH EBX                            ; 005a4122
    CALL FUN_004a0520                   ; 005a4123
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 005a4128
        ;   Label: LAB_005a4128
    PUSH 0x5f8ba8                       ; 005a412b | s_homePos_005f8ba7+1
    LEA EAX,[EBX + 0xc3f0]              ; 005a4130
    PUSH EAX                            ; 005a4136
    CALL FUN_0040b1c0                   ; 005a4137
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 005a413c
    PUSH 0x5f8bb0                       ; 005a413f | = "modelName"
    LEA EAX,[EBX + 0xc26c]              ; 005a4144
    PUSH EAX                            ; 005a414a
    CALL FUN_0040b770                   ; 005a414b
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    MOV ECX,dword ptr [0x00625c18]      ; 005a4150 | DAT_00625c18
    ADD ESP,0x8                         ; 005a4156
    CMP ECX,0x2                         ; 005a4159
    JL 0x005a41d6                       ; 005a415c
        ;   XREF to: 005a41d6 (CONDITIONAL_JUMP)  ; LAB_005a41d6
    PUSH 0x5f8bba                       ; 005a415e | = "speed"
    LEA EAX,[EBX + 0xc3e8]              ; 005a4163
    PUSH EAX                            ; 005a4169
    CALL FUN_0040b5f0                   ; 005a416a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a416f
    PUSH 0x5f8bc0                       ; 005a4172 | = "maxDistance"
    LEA EAX,[EBX + 0xc3fc]              ; 005a4177
    PUSH EAX                            ; 005a417d
    CALL FUN_0040b5f0                   ; 005a417e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a4183
    PUSH 0x5f8bcc                       ; 005a4186 | = "maxHeight"
    LEA EAX,[EBX + 0xc400]              ; 005a418b
    PUSH EAX                            ; 005a4191
    CALL FUN_0040b5f0                   ; 005a4192
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a4197
    PUSH 0x5f8bd6                       ; 005a419a | = "rotSpeed"
    LEA EAX,[EBX + 0xc404]              ; 005a419f
    PUSH EAX                            ; 005a41a5
    CALL FUN_0040b5f0                   ; 005a41a6
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a41ab
    PUSH 0x5f8bdf                       ; 005a41ae | = "moveSpeed"
    LEA EAX,[EBX + 0xc408]              ; 005a41b3
    PUSH EAX                            ; 005a41b9
    CALL FUN_0040b5f0                   ; 005a41ba
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a41bf
    PUSH 0x5f8be9                       ; 005a41c2 | = "followOrders"
    LEA EAX,[EBX + 0xc410]              ; 005a41c7
    PUSH EAX                            ; 005a41cd
    CALL FUN_0040b670                   ; 005a41ce
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005a41d3
    CMP dword ptr [0x00625c18],0x4      ; 005a41d6 | DAT_00625c18
        ;   Label: LAB_005a41d6
    JL 0x005a4209                       ; 005a41dd
        ;   XREF to: 005a4209 (CONDITIONAL_JUMP)  ; LAB_005a4209
    PUSH 0x5f8bf6                       ; 005a41df | = "state"
    LEA EAX,[EBX + 0xc424]              ; 005a41e4
    PUSH EAX                            ; 005a41ea
    CALL FUN_0040b670                   ; 005a41eb
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005a41f0
    CMP dword ptr [0x00625c18],0x5      ; 005a41f3 | DAT_00625c18
    JGE 0x005a421e                      ; 005a41fa
        ;   XREF to: 005a421e (CONDITIONAL_JUMP)  ; LAB_005a421e
    POP EBX                             ; 005a41fc
    RET                                 ; 005a41fd
    PUSH EBX                            ; 005a41fe
        ;   Label: LAB_005a41fe
    CALL FUN_0040c040                   ; 005a41ff
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    JMP 0x005a4128                      ; 005a4204
        ;   XREF to: 005a4128 (UNCONDITIONAL_JUMP)  ; LAB_005a4128
    MOV dword ptr [EBX + 0xc424],0x0    ; 005a4209
        ;   Label: LAB_005a4209
    CMP dword ptr [0x00625c18],0x5      ; 005a4213 | DAT_00625c18
    JGE 0x005a421e                      ; 005a421a
        ;   XREF to: 005a421e (CONDITIONAL_JUMP)  ; LAB_005a421e
    POP EBX                             ; 005a421c
    RET                                 ; 005a421d
    PUSH 0x0                            ; 005a421e
        ;   Label: LAB_005a421e
    LEA EAX,[EBX + 0xc428]              ; 005a4220
    PUSH EAX                            ; 005a4226
    CALL FUN_0040b440                   ; 005a4227
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 005a422c
    PUSH 0x5f8bfc                       ; 005a422f | = "periodicSoundTimerMin"
    LEA EAX,[EBX + 0xc48c]              ; 005a4234
    PUSH EAX                            ; 005a423a
    CALL FUN_0040b5f0                   ; 005a423b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a4240
    PUSH 0x5f8c12                       ; 005a4243 | = "periodicSoundTimerMax"
    ADD EBX,0xc490                      ; 005a4248
    PUSH EBX                            ; 005a424e
    CALL FUN_0040b5f0                   ; 005a424f
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005a4254
    POP EBX                             ; 005a4257
    RET                                 ; 005a4258

