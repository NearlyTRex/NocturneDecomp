; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_00563e50(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 s_spawn_name_005d54bd+2
;   TerminatedCString s_actor_class_name_005d54ca
;   TerminatedCString s_spawn_timer_005d54db
;   TerminatedCString s_spawn_time_005d54e7
;   TerminatedCString s_number_of_spawns_005d54f2
;   TerminatedCString s_max_number_of_spawns_005d5503
;   TerminatedCString s_starting_state_005d5518
;   TerminatedCString s_spawnmodelName_005d5527
;   TerminatedCString s_reset_timer_005d5536
;   TerminatedCString s_dont_spawn_when_in_view_005d5542
;   TerminatedCString s_startGuardDist_005d555a
;   int g_CSpawnerClassVersion = 0x5
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_actor.cpp_FUN_0040ba30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563e50
        ;   Label: engine_special.cpp_FUN_00563e50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00563e51
    PUSH EBX                            ; 00563e55
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00563e56
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00563e5b
    PUSH 0x5d54bf                       ; 00563e5e | s_spawn_name_005d54bd+2
    LEA EAX,[EBX + 0x158]               ; 00563e63
    PUSH EAX                            ; 00563e69
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00563e6a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00563e6f
    PUSH 0x5d54ca                       ; 00563e72 | = "actor_class_name"
    LEA EAX,[EBX + 0x176]               ; 00563e77
    PUSH EAX                            ; 00563e7d
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00563e7e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00563e83
    PUSH 0x5d54db                       ; 00563e86 | = "spawn_timer"
    LEA EAX,[EBX + 0x1b4]               ; 00563e8b
    PUSH EAX                            ; 00563e91
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00563e92
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00563e97
    PUSH 0x5d54e7                       ; 00563e9a | = "spawn_time"
    LEA EAX,[EBX + 0x1bc]               ; 00563e9f
    PUSH EAX                            ; 00563ea5
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00563ea6
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    MOV EDX,dword ptr [0x00606710]      ; 00563eab | g_CSpawnerClassVersion
    ADD ESP,0x8                         ; 00563eb1
    CMP EDX,0x2                         ; 00563eb4
    JGE 0x00563f12                      ; 00563eb7
        ;   XREF to: 00563f12 (CONDITIONAL_JUMP)  ; LAB_00563f12
    CMP dword ptr [0x00606710],0x3      ; 00563eb9 | g_CSpawnerClassVersion
        ;   Label: LAB_00563eb9
    JL 0x00563ed6                       ; 00563ec0
        ;   XREF to: 00563ed6 (CONDITIONAL_JUMP)  ; LAB_00563ed6
    PUSH 0x5d5527                       ; 00563ec2 | = "spawnmodelName"
    LEA EAX,[EBX + 0x1d0]               ; 00563ec7
    PUSH EAX                            ; 00563ecd
    CALL core_actor.cpp_FUN_0040ba30    ; 00563ece
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00563ed3
    CMP dword ptr [0x00606710],0x4      ; 00563ed6 | g_CSpawnerClassVersion
        ;   Label: LAB_00563ed6
    JL 0x00563f07                       ; 00563edd
        ;   XREF to: 00563f07 (CONDITIONAL_JUMP)  ; LAB_00563f07
    PUSH 0x5d5536                       ; 00563edf | = "reset_timer"
    LEA EAX,[EBX + 0x1b8]               ; 00563ee4
    PUSH EAX                            ; 00563eea
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00563eeb
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00563ef0
    PUSH 0x5d5542                       ; 00563ef3 | = "dont_spawn_when_in_view"
    LEA EAX,[EBX + 0x1c8]               ; 00563ef8
    PUSH EAX                            ; 00563efe
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00563eff
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00563f04
    CMP dword ptr [0x00606710],0x5      ; 00563f07 | g_CSpawnerClassVersion
        ;   Label: LAB_00563f07
    JGE 0x00563f53                      ; 00563f0e
        ;   XREF to: 00563f53 (CONDITIONAL_JUMP)  ; LAB_00563f53
    POP EBX                             ; 00563f10
    RET                                 ; 00563f11
    PUSH 0x5d54f2                       ; 00563f12 | = "number_of_spawns"
        ;   Label: LAB_00563f12
    LEA EAX,[EBX + 0x1c0]               ; 00563f17
    PUSH EAX                            ; 00563f1d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00563f1e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00563f23
    PUSH 0x5d5503                       ; 00563f26 | = "max_number_of_spawns"
    LEA EAX,[EBX + 0x1c4]               ; 00563f2b
    PUSH EAX                            ; 00563f31
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00563f32
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00563f37
    PUSH 0x5d5518                       ; 00563f3a | = "starting_state"
    LEA EAX,[EBX + 0x194]               ; 00563f3f
    PUSH EAX                            ; 00563f45
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00563f46
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00563f4b
    JMP 0x00563eb9                      ; 00563f4e
        ;   XREF to: 00563eb9 (UNCONDITIONAL_JUMP)  ; LAB_00563eb9
    PUSH 0x5d555a                       ; 00563f53 | = "startGuardDist"
        ;   Label: LAB_00563f53
    ADD EBX,0x1cc                       ; 00563f58
    PUSH EBX                            ; 00563f5e
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00563f5f
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00563f64
    POP EBX                             ; 00563f67
    RET                                 ; 00563f68

