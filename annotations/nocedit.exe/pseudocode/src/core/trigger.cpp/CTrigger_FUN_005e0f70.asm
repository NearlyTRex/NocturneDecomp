; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_trigger.cpp_CTrigger_FUN_005e0f70(CTrigger * this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_FUN_005ec4d0 at 005ec4da
;
; Referenced Globals:
;   TerminatedCString s_On_event_00655854
;   TerminatedCString s_Off_event_0065585d
;   TerminatedCString s_Event_type_00655893
;   TerminatedCString s_What_triggers_me_0065596f
;   TerminatedCString s_Shape_0065598d
;   TerminatedCString s_Actor_name_00655993
;   TerminatedCString s_Actor_type_s_0065599e
;   TerminatedCString s_Actor_name_wildcard_006559ac
;   TerminatedCString s_Light_min_006559c0
;   TerminatedCString s_Light_max_006559ca
;   TerminatedCString s_Laser_type_006559d4
;   TerminatedCString s_Hitpoints_006559df
;   TerminatedCString s_Damage_actor_name_wildca_006559e9
;   TerminatedCString s_pressurePlate_00655a04
;   TerminatedCString s_Test_radius_00655a12
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e480
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e0f70
        ;   Label: core_trigger.cpp_CTrigger_FUN_005e0f70
    PUSH ESI                            ; 005e0f71
    PUSH EBP                            ; 005e0f72
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e0f73
    MOV ESI,dword ptr [ESP + 0x14]      ; 005e0f77
    PUSH ESI                            ; 005e0f7b
    PUSH EBX                            ; 005e0f7c
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005e0f7d | void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0f82
    LEA EAX,[EBX + 0x224]               ; 005e0f85
    PUSH EAX                            ; 005e0f8b
    PUSH 0x655854                       ; 005e0f8c | = "On event" | s_On_event_00655854 = On event
    PUSH ESI                            ; 005e0f91
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 005e0f92 | void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e0f97
    LEA EAX,[EBX + 0x288]               ; 005e0f9a
    PUSH EAX                            ; 005e0fa0
    PUSH 0x65585d                       ; 005e0fa1 | = "Off event" | s_Off_event_0065585d = Off event
    PUSH ESI                            ; 005e0fa6
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 005e0fa7 | void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e0fac
    LEA EAX,[EBX + 0x15c]               ; 005e0faf
    PUSH EAX                            ; 005e0fb5
    PUSH 0x684364                       ; 005e0fb6 | void * PTR_s_Momentary_00684364
    PUSH 0x4                            ; 005e0fbb
    PUSH 0x655893                       ; 005e0fbd | = "Event type" | s_Event_type_00655893 = Event type
    PUSH ESI                            ; 005e0fc2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 005e0fc3 | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005e0fc8
    LEA EAX,[EBX + 0x174]               ; 005e0fcb
    PUSH EAX                            ; 005e0fd1
    PUSH 0x684384                       ; 005e0fd2 | void * PTR_s_Hero_triggers_me_00684384
    PUSH 0xa                            ; 005e0fd7
    PUSH 0x65596f                       ; 005e0fd9 | = "What triggers me" | s_What_triggers_me_0065596f = What triggers me
    PUSH ESI                            ; 005e0fde
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 005e0fdf | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005e0fe4
    LEA EAX,[EBX + 0x170]               ; 005e0fe7
    PUSH EAX                            ; 005e0fed
    PUSH 0x6843d4                       ; 005e0fee | void * PTR_s_Box_006843d4
    PUSH 0x2                            ; 005e0ff3
    PUSH 0x65598d                       ; 005e0ff5 | = "Shape" | s_Shape_0065598d = Shape
    PUSH ESI                            ; 005e0ffa
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 005e0ffb | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x174]     ; 005e1000
    ADD ESP,0x14                        ; 005e1006
    CMP EDX,0x1                         ; 005e1009
    JZ 0x005e1131                       ; 005e100c | LAB_005e1131
        ;   XREF to: 005e1131 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x174],0x9     ; 005e1012
        ;   Label: LAB_005e1012
    JNZ 0x005e104d                      ; 005e1019 | LAB_005e104d
        ;   XREF to: 005e104d (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005e101b
    PUSH 0x50                           ; 005e101d
    LEA EAX,[EBX + 0x1c8]               ; 005e101f
    PUSH EAX                            ; 005e1025
    PUSH 0x65599e                       ; 005e1026 | = "Actor type(s)" | s_Actor_type_s_0065599e = Actor type(s)
    PUSH ESI                            ; 005e102b
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 005e102c | void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005e1031
    PUSH 0x0                            ; 005e1034
    PUSH 0x50                           ; 005e1036
    LEA EAX,[EBX + 0x178]               ; 005e1038
    PUSH EAX                            ; 005e103e
    PUSH 0x6559ac                       ; 005e103f | = "Actor name wildcard" | s_Actor_name_wildcard_006559ac = Actor name wildcard
    PUSH ESI                            ; 005e1044
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 005e1045 | void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005e104a
    CMP dword ptr [EBX + 0x174],0x2     ; 005e104d
        ;   Label: LAB_005e104d
    JNZ 0x005e1092                      ; 005e1054 | LAB_005e1092
        ;   XREF to: 005e1092 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005e1056
    PUSH 0x3f800000                     ; 005e1058
    LEA EAX,[EBX + 0x21c]               ; 005e105d
    PUSH 0x0                            ; 005e1063
    PUSH EAX                            ; 005e1065
    PUSH 0x6559c0                       ; 005e1066 | = "Light min" | s_Light_min_006559c0 = Light min
    PUSH ESI                            ; 005e106b
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 005e106c | void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005e1071
    PUSH 0x0                            ; 005e1074
    PUSH 0x3f800000                     ; 005e1076
    LEA EAX,[EBX + 0x220]               ; 005e107b
    PUSH 0x0                            ; 005e1081
    PUSH EAX                            ; 005e1083
    PUSH 0x6559ca                       ; 005e1084 | = "Light max" | s_Light_max_006559ca = Light max
    PUSH ESI                            ; 005e1089
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 005e108a | void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005e108f
    CMP dword ptr [EBX + 0x174],0x5     ; 005e1092
        ;   Label: LAB_005e1092
    JNZ 0x005e10b2                      ; 005e1099 | LAB_005e10b2
        ;   XREF to: 005e10b2 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005e109b
    LEA EAX,[EBX + 0x2f4]               ; 005e109d
    PUSH EAX                            ; 005e10a3
    PUSH 0x6559d4                       ; 005e10a4 | = "Laser type" | s_Laser_type_006559d4 = Laser type
    PUSH ESI                            ; 005e10a9
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 005e10aa | void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005e10af
    CMP dword ptr [EBX + 0x174],0x7     ; 005e10b2
        ;   Label: LAB_005e10b2
    JNZ 0x005e10eb                      ; 005e10b9 | LAB_005e10eb
        ;   XREF to: 005e10eb (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005e10bb
    LEA EAX,[EBX + 0x2f8]               ; 005e10bd
    PUSH EAX                            ; 005e10c3
    PUSH 0x6559df                       ; 005e10c4 | = "Hitpoints" | s_Hitpoints_006559df = Hitpoints
    PUSH ESI                            ; 005e10c9
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 005e10ca | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005e10cf
    PUSH 0x0                            ; 005e10d2
    PUSH 0x64                           ; 005e10d4
    LEA EAX,[EBX + 0x304]               ; 005e10d6
    PUSH EAX                            ; 005e10dc
    PUSH 0x6559e9                       ; 005e10dd | = "Damage actor name wildcard" | s_Damage_actor_name_wildca_006559e9 = Damage actor name wildcard
    PUSH ESI                            ; 005e10e2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 005e10e3 | void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005e10e8
    MOV EDX,dword ptr [EBX + 0x174]     ; 005e10eb
        ;   Label: LAB_005e10eb
    CMP EDX,0x1                         ; 005e10f1
    JNZ 0x005e114f                      ; 005e10f4 | LAB_005e114f
        ;   XREF to: 005e114f (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x218]               ; 005e10f6
        ;   Label: LAB_005e10f6
    PUSH EAX                            ; 005e10fc
    PUSH 0x655a04                       ; 005e10fd | = "pressurePlate" | s_pressurePlate_00655a04 = pressurePlate
    PUSH ESI                            ; 005e1102
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 005e1103 | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e1108
    PUSH 0x0                            ; 005e110b
        ;   Label: LAB_005e110b
    LEA EAX,[EBX + 0x158]               ; 005e110d
    PUSH EAX                            ; 005e1113
    PUSH 0x655a12                       ; 005e1114 | = "Test radius" | s_Test_radius_00655a12 = Test radius
    PUSH ESI                            ; 005e1119
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 005e111a | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [EBX + 0x174]     ; 005e111f
    ADD ESP,0x10                        ; 005e1125
    CMP EBP,0x4                         ; 005e1128
    JZ 0x005e115a                       ; 005e112b | LAB_005e115a
        ;   XREF to: 005e115a (CONDITIONAL_JUMP)
    POP EBP                             ; 005e112d
    POP ESI                             ; 005e112e
    POP EBX                             ; 005e112f
    RET                                 ; 005e1130
    PUSH 0x0                            ; 005e1131
        ;   Label: LAB_005e1131
    PUSH 0x50                           ; 005e1133
    LEA EAX,[EBX + 0x178]               ; 005e1135
    PUSH EAX                            ; 005e113b
    PUSH 0x655993                       ; 005e113c | = "Actor name" | s_Actor_name_00655993 = Actor name
    PUSH ESI                            ; 005e1141
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 005e1142 | void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005e1147
    JMP 0x005e1012                      ; 005e114a | LAB_005e1012
        ;   XREF to: 005e1012 (UNCONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 005e114f
        ;   Label: LAB_005e114f
    JZ 0x005e10f6                       ; 005e1151 | LAB_005e10f6
        ;   XREF to: 005e10f6 (CONDITIONAL_JUMP)
    CMP EDX,0x9                         ; 005e1153
    JZ 0x005e10f6                       ; 005e1156 | LAB_005e10f6
        ;   XREF to: 005e10f6 (CONDITIONAL_JUMP)
    JMP 0x005e110b                      ; 005e1158 | LAB_005e110b
        ;   XREF to: 005e110b (UNCONDITIONAL_JUMP)
    ADD EBX,0x300                       ; 005e115a
        ;   Label: LAB_005e115a
    PUSH EBX                            ; 005e1160
    PUSH 0x655a1e                       ; 005e1161 | = "Auto aim at me" | s_Auto_aim_at_me_00655a1e = Auto aim at me
    PUSH ESI                            ; 005e1166
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 005e1167 | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e116c
    POP EBP                             ; 005e116f
    POP ESI                             ; 005e1170
    POP EBX                             ; 005e1171
    RET                                 ; 005e1172

