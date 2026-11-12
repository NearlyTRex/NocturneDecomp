; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_FUN_005a1030(CCharacter *param_1)
;
;
; XREF[1]:
;   core_confedrt.cpp_CConfederate_processStates_FUN_005a0b20 at 005a0b86
;
; Referenced Globals:
;   TerminatedCString s_MeleeAttack_005efc77
;   TerminatedCString s_ChaseComplete_005efc83
;   TerminatedCString s_Chasing_005efc91
;   TerminatedCString s_MeleeAttack_005efc99
;   TerminatedCString s_ChaseComplete_005efca5
;   TerminatedCString s_Chasing_005efcb3
;   undefined4 DAT_005efcbb
;   undefined4 DAT_005efcbf
;   undefined4 DAT_005fedb4
;
; Called Functions:
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
;   core_confedrt.cpp_FUN_005a14e0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_muzzle.cpp_FUN_0059d7f0
;   core_muzzle.cpp_FUN_0059d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1030
        ;   Label: core_confedrt.cpp_FUN_005a1030
    PUSH ESI                            ; 005a1031
    PUSH EDI                            ; 005a1032
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a1033
    PUSH EBX                            ; 005a1037
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a1038
    CALL dword ptr [EAX + 0x17c]        ; 005a103e
    ADD ESP,0x4                         ; 005a1044
    TEST EAX,EAX                        ; 005a1047
    JZ 0x005a10a6                       ; 005a1049
        ;   XREF to: 005a10a6 (CONDITIONAL_JUMP)  ; LAB_005a10a6
    MOV EDX,dword ptr [EBX + 0x11854]   ; 005a104b
    LEA ESI,[EBX + 0x10af8]             ; 005a1051
    TEST EDX,EDX                        ; 005a1057
    JZ 0x005a10aa                       ; 005a1059
        ;   XREF to: 005a10aa (CONDITIONAL_JUMP)  ; LAB_005a10aa
    LEA EDI,[EBX + 0x2b4]               ; 005a105b
    PUSH EDI                            ; 005a1061
    CALL core_motion.cpp_FUN_005035c0   ; 005a1062
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a1067
    ADD ESP,0x4                         ; 005a106a
    CMP EAX,0x3                         ; 005a106d
    JNC 0x005a115b                      ; 005a1070
        ;   XREF to: 005a115b (CONDITIONAL_JUMP)  ; LAB_005a115b
    CMP EAX,0x2                         ; 005a1076
    JNZ 0x005a1166                      ; 005a1079
        ;   XREF to: 005a1166 (CONDITIONAL_JUMP)  ; LAB_005a1166
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a107f
        ;   Label: LAB_005a107f
    ADD EAX,0x20                        ; 005a1085
    PUSH EAX                            ; 005a1088
    PUSH EBX                            ; 005a1089
    LEA ESI,[EBX + 0x2b4]               ; 005a108a
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005a1090
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    ADD ESP,0x8                         ; 005a1095
    FLD float ptr [ESI + 0x8]           ; 005a1098
    FCOMP float ptr [0x005efcbf]        ; 005a109b | DAT_005efcbf
    FNSTSW AX                           ; 005a10a1
    SAHF                                ; 005a10a3
    JA 0x005a10e1                       ; 005a10a4
        ;   XREF to: 005a10e1 (CONDITIONAL_JUMP)  ; LAB_005a10e1
    POP EDI                             ; 005a10a6
        ;   Label: LAB_005a10a6
    POP ESI                             ; 005a10a7
    POP EBX                             ; 005a10a8
    RET                                 ; 005a10a9
    PUSH 0x5efc77                       ; 005a10aa | = "MeleeAttack"
        ;   Label: LAB_005a10aa
    PUSH 0x5efc83                       ; 005a10af | = "ChaseComplete"
    FLD float ptr [0x005fedb4]          ; 005a10b4 | DAT_005fedb4
    PUSH ESI                            ; 005a10ba
    FSTP float ptr [EBX + 0x11394]      ; 005a10bb
    MOV dword ptr [EBX + 0x11398],EDX   ; 005a10c1
    CALL core_muzzle.cpp_FUN_0059d7f0   ; 005a10c7
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a10cc
    PUSH 0x5efc91                       ; 005a10cf | = "Chasing"
    PUSH ESI                            ; 005a10d4
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 005a10d5
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a10da
    POP EDI                             ; 005a10dd
    POP ESI                             ; 005a10de
    POP EBX                             ; 005a10df
    RET                                 ; 005a10e0
    PUSH 0x1                            ; 005a10e1
        ;   Label: LAB_005a10e1
    PUSH 0x3                            ; 005a10e3
    PUSH ESI                            ; 005a10e5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a10e6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a10eb
    PUSH EBX                            ; 005a10ee
    CALL core_confedrt.cpp_FUN_005a14e0 ; 005a10ef
        ;   XREF to: 005a14e0 (UNCONDITIONAL_CALL)  ; undefined core_confedrt.cpp_FUN_005a14e0()
    MOV ECX,dword ptr [EBX + 0x11854]   ; 005a10f4
    MOV dword ptr [EBX + 0x11850],0x0   ; 005a10fa
    DEC ECX                             ; 005a1104
    ADD ESP,0x4                         ; 005a1105
    MOV dword ptr [EBX + 0x11854],ECX   ; 005a1108
    POP EDI                             ; 005a110e
    POP ESI                             ; 005a110f
    POP EBX                             ; 005a1110
    RET                                 ; 005a1111
    FLD float ptr [EDI + 0x8]           ; 005a1112
        ;   Label: LAB_005a1112
    FCOMP float ptr [0x005efcbb]        ; 005a1115 | DAT_005efcbb
    FNSTSW AX                           ; 005a111b
    SAHF                                ; 005a111d
    JBE 0x005a10a6                      ; 005a111e
        ;   XREF to: 005a10a6 (CONDITIONAL_JUMP)  ; LAB_005a10a6
    PUSH 0x5efc99                       ; 005a1120 | = "MeleeAttack"
    PUSH 0x5efca5                       ; 005a1125 | = "ChaseComplete"
    FLD float ptr [0x005fedb4]          ; 005a112a | DAT_005fedb4
    MOV dword ptr [EBX + 0x11398],0x40a00000 ; 005a1130
    PUSH ESI                            ; 005a113a
    FSTP float ptr [EBX + 0x11394]      ; 005a113b
    CALL core_muzzle.cpp_FUN_0059d7f0   ; 005a1141
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a1146
    PUSH 0x5efcb3                       ; 005a1149 | = "Chasing"
    PUSH ESI                            ; 005a114e
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 005a114f
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a1154
    POP EDI                             ; 005a1157
    POP ESI                             ; 005a1158
    POP EBX                             ; 005a1159
    RET                                 ; 005a115a
    JBE 0x005a1112                      ; 005a115b
        ;   XREF to: 005a1112 (CONDITIONAL_JUMP)  ; LAB_005a1112
        ;   Label: LAB_005a115b
    CMP EAX,0xd                         ; 005a115d
    JZ 0x005a107f                       ; 005a1160
        ;   XREF to: 005a107f (CONDITIONAL_JUMP)  ; LAB_005a107f
    PUSH 0x1                            ; 005a1166
        ;   Label: LAB_005a1166
    PUSH 0x2                            ; 005a1168
    ADD EBX,0x2b4                       ; 005a116a
    PUSH EBX                            ; 005a1170
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a1171
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a1176
    POP EDI                             ; 005a1179
    POP ESI                             ; 005a117a
    POP EBX                             ; 005a117b
    RET                                 ; 005a117c

