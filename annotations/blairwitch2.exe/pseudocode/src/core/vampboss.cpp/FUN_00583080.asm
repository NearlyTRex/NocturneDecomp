; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vampboss_cpp_FUN_00583080(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined4 s_human_model_motion_state_005edacb+1
;   TerminatedCString s_bat_model_motion_state_005edae5
;   TerminatedCString s_wayPoint0_005edafc
;   TerminatedCString s_wayPoint1_005edb06
;   TerminatedCString s_wayPoint2_005edb10
;   TerminatedCString s_wayPoint3_005edb1a
;   undefined4 DAT_005edb24
;   TerminatedCString s_morphT_005edb29
;   int g_CVampireBossClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583080
        ;   Label: core_vampboss.cpp_FUN_00583080
    MOV EBX,dword ptr [ESP + 0x8]       ; 00583081
    PUSH EBX                            ; 00583085
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 00583086
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    MOV EDX,dword ptr [0x0061e4bc]      ; 0058308b | g_CVampireBossClassVersion
    ADD ESP,0x4                         ; 00583091
    CMP EDX,0x2                         ; 00583094
    JGE 0x005830fd                      ; 00583097
        ;   XREF to: 005830fd (CONDITIONAL_JUMP)  ; LAB_005830fd
    CMP dword ptr [0x0061e4bc],0x3      ; 00583099 | g_CVampireBossClassVersion
        ;   Label: LAB_00583099
    JL 0x005830f2                       ; 005830a0
        ;   XREF to: 005830f2 (CONDITIONAL_JUMP)  ; LAB_005830f2
    PUSH 0x5edafc                       ; 005830a2 | = "wayPoint0"
    LEA EAX,[EBX + 0xc3b88]             ; 005830a7
    PUSH EAX                            ; 005830ad
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 005830ae
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 005830b3
    PUSH 0x5edb06                       ; 005830b6 | = "wayPoint1"
    LEA EAX,[EBX + 0xc3b8c]             ; 005830bb
    PUSH EAX                            ; 005830c1
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 005830c2
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 005830c7
    PUSH 0x5edb10                       ; 005830ca | = "wayPoint2"
    LEA EAX,[EBX + 0xc3b90]             ; 005830cf
    PUSH EAX                            ; 005830d5
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 005830d6
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 005830db
    PUSH 0x5edb1a                       ; 005830de | = "wayPoint3"
    LEA EAX,[EBX + 0xc3b94]             ; 005830e3
    PUSH EAX                            ; 005830e9
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 005830ea
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 005830ef
    CMP dword ptr [0x0061e4bc],0x4      ; 005830f2 | g_CVampireBossClassVersion
        ;   Label: LAB_005830f2
    JGE 0x0058312a                      ; 005830f9
        ;   XREF to: 0058312a (CONDITIONAL_JUMP)  ; LAB_0058312a
    POP EBX                             ; 005830fb
    RET                                 ; 005830fc
    PUSH 0x5edacc                       ; 005830fd | s_human_model_motion_state_005edacb+1
        ;   Label: LAB_005830fd
    LEA EAX,[EBX + 0x2b4]               ; 00583102
    PUSH EAX                            ; 00583108
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 00583109
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 0058310e
    PUSH 0x5edae5                       ; 00583111 | = "bat model motion state"
    LEA EAX,[EBX + 0x10af8]             ; 00583116
    PUSH EAX                            ; 0058311c
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 0058311d
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 00583122
    JMP 0x00583099                      ; 00583125
        ;   XREF to: 00583099 (UNCONDITIONAL_JUMP)  ; LAB_00583099
    PUSH 0x5edb24                       ; 0058312a | DAT_005edb24
        ;   Label: LAB_0058312a
    LEA EAX,[EBX + 0xc2f3c]             ; 0058312f
    PUSH EAX                            ; 00583135
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00583136
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058313b
    PUSH 0x5edb29                       ; 0058313e | = "morphT"
    ADD EBX,0xc3b6c                     ; 00583143
    PUSH EBX                            ; 00583149
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0058314a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0058314f
    POP EBX                             ; 00583152
    RET                                 ; 00583153

