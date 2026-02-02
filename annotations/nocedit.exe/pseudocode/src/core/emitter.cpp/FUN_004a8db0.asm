; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_emitter_cpp_FUN_004a8db0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Emitter_type_006241e7
;   TerminatedCString s_State_006241f4
;   TerminatedCString s_Max_Emit_Time_006241fa
;   TerminatedCString s_Emit_period_00624208
;   TerminatedCString s_On_event_00624214
;   TerminatedCString s_Off_event_0062421d
;   TerminatedCString s_Laser_R_00624227
;   TerminatedCString s_Laser_G_0062422f
;   TerminatedCString s_Laser_B_00624237
;   TerminatedCString s_Laser_Type_0062423f
;   TerminatedCString s_Slew_target_mode_0062424a
;   TerminatedCString s_Target_0062425b
;   TerminatedCString s_Model_file_kfm_00624262
;   TerminatedCString s_Speed_00624274
;   TerminatedCString s_Periodic_0062427a
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8db0
        ;   Label: core_emitter.cpp_FUN_004a8db0
    PUSH ESI                            ; 004a8db1
    PUSH EDI                            ; 004a8db2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a8db3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a8db7
    PUSH ESI                            ; 004a8dbb
    PUSH EBX                            ; 004a8dbc
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004a8dbd
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004a8dc2
    LEA EAX,[EBX + 0x158]               ; 004a8dc5
    PUSH EAX                            ; 004a8dcb
    PUSH 0x6792ec                       ; 004a8dcc | PTR_s_Spark_006792ec
    PUSH 0xb                            ; 004a8dd1
    PUSH 0x6241e7                       ; 004a8dd3 | = "Emitter type"
    PUSH ESI                            ; 004a8dd8
    CALL core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640 ; 004a8dd9
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640(CActorPropertyList * this_ptr, void * pairs, int num_pairs, int * data_ptr)
    ADD ESP,0x14                        ; 004a8dde
    LEA EAX,[EBX + 0x168]               ; 004a8de1
    PUSH EAX                            ; 004a8de7
    PUSH 0x6241f4                       ; 004a8de8 | = "State"
    PUSH ESI                            ; 004a8ded
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 004a8dee
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 004a8df3
    PUSH 0x0                            ; 004a8df6
    LEA EAX,[EBX + 0x234]               ; 004a8df8
    PUSH EAX                            ; 004a8dfe
    PUSH 0x6241fa                       ; 004a8dff | = "Max Emit Time"
    PUSH ESI                            ; 004a8e04
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004a8e05
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    MOV EDX,dword ptr [EBX + 0x158]     ; 004a8e0a
    ADD ESP,0x10                        ; 004a8e10
    CMP EDX,0x3                         ; 004a8e13
    JNZ 0x004a8f96                      ; 004a8e16
        ;   XREF to: 004a8f96 (CONDITIONAL_JUMP)  ; LAB_004a8f96
    LEA EAX,[EBX + 0x16c]               ; 004a8e1c
        ;   Label: LAB_004a8e1c
    PUSH EAX                            ; 004a8e22
    PUSH 0x624214                       ; 004a8e23 | = "On event"
    PUSH ESI                            ; 004a8e28
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 004a8e29
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 004a8e2e
    LEA EAX,[EBX + 0x1d0]               ; 004a8e31
    PUSH EAX                            ; 004a8e37
    PUSH 0x62421d                       ; 004a8e38 | = "Off event"
    PUSH ESI                            ; 004a8e3d
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 004a8e3e
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    MOV ECX,dword ptr [EBX + 0x158]     ; 004a8e43
    ADD ESP,0xc                         ; 004a8e49
    CMP ECX,0x3                         ; 004a8e4c
    JNZ 0x004a8eeb                      ; 004a8e4f
        ;   XREF to: 004a8eeb (CONDITIONAL_JUMP)  ; LAB_004a8eeb
    PUSH 0x0                            ; 004a8e55
    LEA EAX,[EBX + 0x23c]               ; 004a8e57
    PUSH EAX                            ; 004a8e5d
    PUSH 0x624227                       ; 004a8e5e | = "Laser R"
    PUSH ESI                            ; 004a8e63
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 004a8e64
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004a8e69
    PUSH 0x0                            ; 004a8e6c
    LEA EAX,[EBX + 0x240]               ; 004a8e6e
    PUSH EAX                            ; 004a8e74
    PUSH 0x62422f                       ; 004a8e75 | = "Laser G"
    PUSH ESI                            ; 004a8e7a
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 004a8e7b
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004a8e80
    PUSH 0x0                            ; 004a8e83
    LEA EAX,[EBX + 0x244]               ; 004a8e85
    PUSH EAX                            ; 004a8e8b
    PUSH 0x624237                       ; 004a8e8c | = "Laser B"
    PUSH ESI                            ; 004a8e91
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 004a8e92
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004a8e97
    PUSH 0x0                            ; 004a8e9a
    LEA EAX,[EBX + 0x238]               ; 004a8e9c
    PUSH EAX                            ; 004a8ea2
    PUSH 0x62423f                       ; 004a8ea3 | = "Laser Type"
    PUSH ESI                            ; 004a8ea8
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 004a8ea9
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004a8eae
    PUSH 0x2cf2b5c                      ; 004a8eb1 | DAT_02cf2b5c
    PUSH 0x62424a                       ; 004a8eb6 | = "Slew target mode"
    PUSH ESI                            ; 004a8ebb
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 004a8ebc
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    MOV EDI,dword ptr [0x02cf2b5c]      ; 004a8ec1 | DAT_02cf2b5c
    ADD ESP,0xc                         ; 004a8ec7
    TEST EDI,EDI                        ; 004a8eca
    JZ 0x004a8eeb                       ; 004a8ecc
        ;   XREF to: 004a8eeb (CONDITIONAL_JUMP)  ; LAB_004a8eeb
    CMP EBX,dword ptr [0x02cf2b78]      ; 004a8ece | DAT_02cf2b78
    JNZ 0x004a8eeb                      ; 004a8ed4
        ;   XREF to: 004a8eeb (CONDITIONAL_JUMP)  ; LAB_004a8eeb
    PUSH 0x0                            ; 004a8ed6
    PUSH 0x2cf2b60                      ; 004a8ed8 | DAT_02cf2b60
    PUSH 0x62425b                       ; 004a8edd | = "Target"
    PUSH ESI                            ; 004a8ee2
    CALL core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260 ; 004a8ee3
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260(CActorPropertyList * this_ptr, char * property_name, CVector3f * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004a8ee8
    CMP dword ptr [EBX + 0x158],0x4     ; 004a8eeb
        ;   Label: LAB_004a8eeb
    JNZ 0x004a8f22                      ; 004a8ef2
        ;   XREF to: 004a8f22 (CONDITIONAL_JUMP)  ; LAB_004a8f22
    PUSH 0x0                            ; 004a8ef4
    LEA EAX,[EBX + 0x248]               ; 004a8ef6
    PUSH EAX                            ; 004a8efc
    PUSH 0x624262                       ; 004a8efd | = "Model file (.kfm)"
    PUSH ESI                            ; 004a8f02
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 004a8f03
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 004a8f08
    PUSH 0x0                            ; 004a8f0b
    LEA EAX,[EBX + 0x3c4]               ; 004a8f0d
    PUSH EAX                            ; 004a8f13
    PUSH 0x624274                       ; 004a8f14 | = "Speed"
    PUSH ESI                            ; 004a8f19
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004a8f1a
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004a8f1f
    LEA EAX,[EBX + 0x3c8]               ; 004a8f22
        ;   Label: LAB_004a8f22
    PUSH EAX                            ; 004a8f28
    PUSH 0x62427a                       ; 004a8f29 | = "Periodic"
    PUSH ESI                            ; 004a8f2e
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 004a8f2f
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    MOV EDX,dword ptr [EBX + 0x3c8]     ; 004a8f34
    ADD ESP,0xc                         ; 004a8f3a
    TEST EDX,EDX                        ; 004a8f3d
    JZ 0x004a8f58                       ; 004a8f3f
        ;   XREF to: 004a8f58 (CONDITIONAL_JUMP)  ; LAB_004a8f58
    PUSH 0x0                            ; 004a8f41
    LEA EAX,[EBX + 0x3cc]               ; 004a8f43
    PUSH EAX                            ; 004a8f49
    PUSH 0x624283                       ; 004a8f4a | = "Off time"
    PUSH ESI                            ; 004a8f4f
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004a8f50
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004a8f55
    CMP dword ptr [EBX + 0x158],0x9     ; 004a8f58
        ;   Label: LAB_004a8f58
    JZ 0x004a8fb9                       ; 004a8f5f
        ;   XREF to: 004a8fb9 (CONDITIONAL_JUMP)  ; LAB_004a8fb9
    LEA EAX,[EBX + 0x3d4]               ; 004a8f61
        ;   Label: LAB_004a8f61
    PUSH EAX                            ; 004a8f67
    PUSH 0x6242a5                       ; 004a8f68 | = "Sound"
    PUSH ESI                            ; 004a8f6d
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 004a8f6e
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 004a8f73
    ADD EBX,0x43c                       ; 004a8f76
    PUSH EBX                            ; 004a8f7c
    PUSH 0x679344                       ; 004a8f7d | PTR_s_Normal_00679344
    PUSH 0x2                            ; 004a8f82
    PUSH 0x6242bb                       ; 004a8f84 | = "Sound type"
    PUSH ESI                            ; 004a8f89
    CALL core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640 ; 004a8f8a
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640(CActorPropertyList * this_ptr, void * pairs, int num_pairs, int * data_ptr)
    ADD ESP,0x14                        ; 004a8f8f
    POP EDI                             ; 004a8f92
    POP ESI                             ; 004a8f93
    POP EBX                             ; 004a8f94
    RET                                 ; 004a8f95
    PUSH 0x0                            ; 004a8f96
        ;   Label: LAB_004a8f96
    PUSH 0x461c3c00                     ; 004a8f98
    LEA EAX,[EBX + 0x444]               ; 004a8f9d
    PUSH 0x0                            ; 004a8fa3
    PUSH EAX                            ; 004a8fa5
    PUSH 0x624208                       ; 004a8fa6 | = "Emit period"
    PUSH ESI                            ; 004a8fab
    CALL core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0 ; 004a8fac
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, float min_value, ...)
    ADD ESP,0x18                        ; 004a8fb1
    JMP 0x004a8e1c                      ; 004a8fb4
        ;   XREF to: 004a8e1c (UNCONDITIONAL_JUMP)  ; LAB_004a8e1c
    PUSH 0x0                            ; 004a8fb9
        ;   Label: LAB_004a8fb9
    PUSH 0x62428c                       ; 004a8fbb | = "CDemonActor"
    PUSH 0x1                            ; 004a8fc0
    LEA EAX,[EBX + 0x3d0]               ; 004a8fc2
    PUSH EAX                            ; 004a8fc8
    PUSH 0x624298                       ; 004a8fc9 | = "Actor to fry"
    PUSH ESI                            ; 004a8fce
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 004a8fcf
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, void * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 004a8fd4
    JMP 0x004a8f61                      ; 004a8fd7
        ;   XREF to: 004a8f61 (UNCONDITIONAL_JUMP)  ; LAB_004a8f61

