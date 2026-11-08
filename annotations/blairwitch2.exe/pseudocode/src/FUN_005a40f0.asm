; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a40f0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_MeleeAttack_005f02b5
;   TerminatedCString s_ChaseComplete_005f02c1
;   TerminatedCString s_MeleeAttack_005f02cf
;   undefined4 DAT_005f02de
;   undefined4 DAT_005ff544
;
; Called Functions:
;   FUN_00423850
;   FUN_005035c0
;   FUN_00503620
;   FUN_0059d7f0
;   FUN_0059d8e0
;   FUN_0059f570
;   FUN_005a01a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a40f0
        ;   Label: FUN_005a40f0
    PUSH ESI                            ; 005a40f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a40f2
    MOV EAX,dword ptr [EBX + 0x11858]   ; 005a40f6
    LEA ESI,[EBX + 0x2b4]               ; 005a40fc
    CMP EAX,0x1                         ; 005a4102
    JNC 0x005a4204                      ; 005a4105
        ;   XREF to: 005a4204 (CONDITIONAL_JUMP)  ; LAB_005a4204
    TEST EAX,EAX                        ; 005a410b
    JZ 0x005a4112                       ; 005a410d
        ;   XREF to: 005a4112 (CONDITIONAL_JUMP)  ; LAB_005a4112
    POP ESI                             ; 005a410f
        ;   Label: LAB_005a410f
    POP EBX                             ; 005a4110
    RET                                 ; 005a4111
    PUSH 0x1                            ; 005a4112
        ;   Label: LAB_005a4112
    PUSH 0x4                            ; 005a4114
    PUSH ESI                            ; 005a4116
    CALL FUN_00503620                   ; 005a4117
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a411c
    PUSH 0x3f99999a                     ; 005a411f
    PUSH 0x0                            ; 005a4124
    PUSH dword ptr [EBX + 0x113c4]      ; 005a4126
    PUSH EBX                            ; 005a412c
    CALL FUN_005a01a0                   ; 005a412d
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a01a0()
    ADD ESP,0x10                        ; 005a4132
    PUSH EBX                            ; 005a4135
    CALL FUN_0059f570                   ; 005a4136
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f570()
    ADD ESP,0x4                         ; 005a413b
    MOV dword ptr [EBX + 0x11858],0x1   ; 005a413e
    POP ESI                             ; 005a4148
    POP EBX                             ; 005a4149
    RET                                 ; 005a414a
    PUSH ESI                            ; 005a414b
        ;   Label: LAB_005a414b
    CALL FUN_005035c0                   ; 005a414c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a4151
    ADD ESP,0x4                         ; 005a4154
    CMP EAX,0x4                         ; 005a4157
    JNZ 0x005a410f                      ; 005a415a
        ;   XREF to: 005a410f (CONDITIONAL_JUMP)  ; LAB_005a410f
    FLD float ptr [ESI + 0x8]           ; 005a415c
    FCOMP float ptr [0x005f02de]        ; 005a415f | DAT_005f02de
    FNSTSW AX                           ; 005a4165
    SAHF                                ; 005a4167
    JNC 0x005a4180                      ; 005a4168
        ;   XREF to: 005a4180 (CONDITIONAL_JUMP)  ; LAB_005a4180
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a416a
    ADD EAX,0x20                        ; 005a4170
    PUSH EAX                            ; 005a4173
    PUSH EBX                            ; 005a4174
    CALL FUN_00423850                   ; 005a4175
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    ADD ESP,0x8                         ; 005a417a
    POP ESI                             ; 005a417d
    POP EBX                             ; 005a417e
    RET                                 ; 005a417f
    PUSH 0x3f400000                     ; 005a4180
        ;   Label: LAB_005a4180
    PUSH 0x3f800000                     ; 005a4185
    PUSH dword ptr [EBX + 0x113c4]      ; 005a418a
    PUSH EBX                            ; 005a4190
    CALL FUN_005a01a0                   ; 005a4191
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a01a0()
    ADD ESP,0x10                        ; 005a4196
    PUSH EBX                            ; 005a4199
    CALL FUN_0059f570                   ; 005a419a
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f570()
    ADD ESP,0x4                         ; 005a419f
    MOV dword ptr [EBX + 0x11858],0x2   ; 005a41a2
    POP ESI                             ; 005a41ac
    POP EBX                             ; 005a41ad
    RET                                 ; 005a41ae
    PUSH ESI                            ; 005a41af
        ;   Label: LAB_005a41af
    CALL FUN_005035c0                   ; 005a41b0
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a41b5
    ADD ESP,0x4                         ; 005a41b8
    CMP EAX,0x3                         ; 005a41bb
    JNZ 0x005a410f                      ; 005a41be
        ;   XREF to: 005a410f (CONDITIONAL_JUMP)  ; LAB_005a410f
    PUSH 0x5f02b5                       ; 005a41c4 | = "MeleeAttack"
    LEA ESI,[EBX + 0x10af8]             ; 005a41c9
    PUSH 0x5f02c1                       ; 005a41cf | = "ChaseComplete"
    FLD float ptr [0x005ff544]          ; 005a41d4 | DAT_005ff544
    PUSH ESI                            ; 005a41da
    FSTP float ptr [EBX + 0x11394]      ; 005a41db
    CALL FUN_0059d7f0                   ; 005a41e1
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a41e6
    PUSH 0x5f02cf                       ; 005a41e9 | = "MeleeAttack"
    PUSH ESI                            ; 005a41ee
    CALL FUN_0059d8e0                   ; 005a41ef
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a41f4
    MOV dword ptr [EBX + 0x11858],0x0   ; 005a41f7
    POP ESI                             ; 005a4201
    POP EBX                             ; 005a4202
    RET                                 ; 005a4203
    JBE 0x005a414b                      ; 005a4204
        ;   XREF to: 005a414b (CONDITIONAL_JUMP)  ; LAB_005a414b
        ;   Label: LAB_005a4204
    CMP EAX,0x2                         ; 005a420a
    JZ 0x005a41af                       ; 005a420d
        ;   XREF to: 005a41af (CONDITIONAL_JUMP)  ; LAB_005a41af
    POP ESI                             ; 005a420f
    POP EBX                             ; 005a4210
    RET                                 ; 005a4211

