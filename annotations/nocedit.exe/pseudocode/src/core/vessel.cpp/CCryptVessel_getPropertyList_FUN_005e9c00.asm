; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vessel_cpp_CCryptVessel_getPropertyList_FUN_005e9c00(CCryptVessel *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_006570e5
;   TerminatedCString s_CCryptVessel_006570f7
;   TerminatedCString s_Prey_00657104
;   TerminatedCString s_CCryptVessel_00657109
;   TerminatedCString s_Neutral_00657116
;   TerminatedCString s_Destroyed_event_momentar_0065711e
;   TerminatedCString s_CActorDestination_0065713a
;   TerminatedCString s_Start_loc_0065714c
;   TerminatedCString s_CActorDestination_00657156
;   TerminatedCString s_End_loc_00657168
;   TerminatedCString s_Win_event_persistant_00657170
;   TerminatedCString s_Eat_distance_00657187
;   TerminatedCString s_Visual_type_006571a3
;   SEnumPair[3] g_CryptVesselVisualTypePairs
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e9c00
        ;   Label: core_vessel.cpp_CCryptVessel_getPropertyList_FUN_005e9c00
    PUSH ESI                            ; 005e9c01
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e9c02
    MOV ESI,dword ptr [ESP + 0x10]      ; 005e9c06
    PUSH ESI                            ; 005e9c0a
    PUSH EBX                            ; 005e9c0b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005e9c0c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005e9c11
    PUSH 0x0                            ; 005e9c14
    LEA EAX,[EBX + 0x158]               ; 005e9c16
    PUSH EAX                            ; 005e9c1c
    PUSH 0x6570e5                       ; 005e9c1d | = "Model file (.kfm)"
    PUSH ESI                            ; 005e9c22
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 005e9c23
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 005e9c28
    PUSH 0x0                            ; 005e9c2b
    PUSH 0x6570f7                       ; 005e9c2d | = "CCryptVessel"
    PUSH 0x1                            ; 005e9c32
    LEA EAX,[EBX + 0x2d8]               ; 005e9c34
    PUSH EAX                            ; 005e9c3a
    PUSH 0x657104                       ; 005e9c3b | = "Prey"
    PUSH ESI                            ; 005e9c40
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005e9c41
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005e9c46
    PUSH 0x0                            ; 005e9c49
    PUSH 0x657109                       ; 005e9c4b | = "CCryptVessel"
    PUSH 0x1                            ; 005e9c50
    LEA EAX,[EBX + 0x2dc]               ; 005e9c52
    PUSH EAX                            ; 005e9c58
    PUSH 0x657116                       ; 005e9c59 | = "Neutral"
    PUSH ESI                            ; 005e9c5e
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005e9c5f
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005e9c64
    LEA EAX,[EBX + 0x2e0]               ; 005e9c67
    PUSH EAX                            ; 005e9c6d
    PUSH 0x65711e                       ; 005e9c6e | = "Destroyed event (momentary)"
    PUSH ESI                            ; 005e9c73
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 005e9c74
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 005e9c79
    PUSH 0x0                            ; 005e9c7c
    PUSH 0x65713a                       ; 005e9c7e | = "CActorDestination"
    PUSH 0x1                            ; 005e9c83
    LEA EAX,[EBX + 0x3a8]               ; 005e9c85
    PUSH EAX                            ; 005e9c8b
    PUSH 0x65714c                       ; 005e9c8c | = "Start loc"
    PUSH ESI                            ; 005e9c91
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005e9c92
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005e9c97
    PUSH 0x0                            ; 005e9c9a
    PUSH 0x657156                       ; 005e9c9c | = "CActorDestination"
    PUSH 0x1                            ; 005e9ca1
    LEA EAX,[EBX + 0x3ac]               ; 005e9ca3
    PUSH EAX                            ; 005e9ca9
    PUSH 0x657168                       ; 005e9caa | = "End loc"
    PUSH ESI                            ; 005e9caf
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005e9cb0
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005e9cb5
    LEA EAX,[EBX + 0x344]               ; 005e9cb8
    PUSH EAX                            ; 005e9cbe
    PUSH 0x657170                       ; 005e9cbf | = "Win event (persistant)"
    PUSH ESI                            ; 005e9cc4
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 005e9cc5
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 005e9cca
    PUSH 0x0                            ; 005e9ccd
    LEA EAX,[EBX + 0x3b0]               ; 005e9ccf
    PUSH EAX                            ; 005e9cd5
    PUSH 0x657187                       ; 005e9cd6 | = "Eat distance"
    PUSH ESI                            ; 005e9cdb
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005e9cdc
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005e9ce1
    ADD EBX,0x3b4                       ; 005e9ce4
    PUSH EBX                            ; 005e9cea
    PUSH 0x6844b0                       ; 005e9ceb | g_CryptVesselVisualTypePairs
    PUSH 0x3                            ; 005e9cf0
    PUSH 0x6571a3                       ; 005e9cf2 | = "Visual type"
    PUSH ESI                            ; 005e9cf7
    CALL core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640 ; 005e9cf8
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640(CActorPropertyList * this_ptr, char * property_name, int num_pairs, SEnumPair * pairs, ...)
    ADD ESP,0x14                        ; 005e9cfd
    POP ESI                             ; 005e9d00
    POP EBX                             ; 005e9d01
    RET                                 ; 005e9d02

