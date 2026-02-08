; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_wateract_cpp_CWaterActor_getPropertyList_FUN_005eb940 (CWaterActor *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Opacity_006573d8
;   TerminatedCString s_Height_delta_006573e0
;   TerminatedCString s_Time_to_move_up_006573ed
;   TerminatedCString s_Time_to_move_down_006573fd
;   TerminatedCString s_Move_up_sound_0065740f
;   TerminatedCString s_Move_down_sound_0065741d
;   TerminatedCString s_Move_up_condition_0065742d
;   TerminatedCString s_Move_down_condition_0065743f
;   TerminatedCString s_Parameter_00657453
;   TerminatedCString s_State_0065747c
;   TerminatedCString s_Patch_size_00657482
;   TerminatedCString s_Round_0065748d
;   TerminatedCString s_Red_value_00657493
;   TerminatedCString s_Green_value_0065749d
;   TerminatedCString s_Blue_value_006574a9
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eb940
        ;   Label: core_wateract.cpp_CWaterActor_getPropertyList_FUN_005eb940
    PUSH ESI                            ; 005eb941
    MOV EBX,dword ptr [ESP + 0xc]       ; 005eb942
    MOV ESI,dword ptr [ESP + 0x10]      ; 005eb946
    PUSH ESI                            ; 005eb94a
    PUSH EBX                            ; 005eb94b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005eb94c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005eb951
    PUSH 0x0                            ; 005eb954
    LEA EAX,[EBX + 0x164]               ; 005eb956
    PUSH EAX                            ; 005eb95c
    PUSH 0x6573d8                       ; 005eb95d | = "Opacity"
    PUSH ESI                            ; 005eb962
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 005eb963
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005eb968
    PUSH 0x0                            ; 005eb96b
    LEA EAX,[EBX + 0x168]               ; 005eb96d
    PUSH EAX                            ; 005eb973
    PUSH 0x6573e0                       ; 005eb974 | = "Height delta"
    PUSH ESI                            ; 005eb979
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005eb97a
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005eb97f
    PUSH 0x0                            ; 005eb982
    LEA EAX,[EBX + 0x16c]               ; 005eb984
    PUSH EAX                            ; 005eb98a
    PUSH 0x6573ed                       ; 005eb98b | = "Time to move up"
    PUSH ESI                            ; 005eb990
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005eb991
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005eb996
    PUSH 0x0                            ; 005eb999
    LEA EAX,[EBX + 0x170]               ; 005eb99b
    PUSH EAX                            ; 005eb9a1
    PUSH 0x6573fd                       ; 005eb9a2 | = "Time to move down"
    PUSH ESI                            ; 005eb9a7
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005eb9a8
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005eb9ad
    LEA EAX,[EBX + 0x174]               ; 005eb9b0
    PUSH EAX                            ; 005eb9b6
    PUSH 0x65740f                       ; 005eb9b7 | = "Move up sound"
    PUSH ESI                            ; 005eb9bc
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 005eb9bd
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 005eb9c2
    LEA EAX,[EBX + 0x194]               ; 005eb9c5
    PUSH EAX                            ; 005eb9cb
    PUSH 0x65741d                       ; 005eb9cc | = "Move down sound"
    PUSH ESI                            ; 005eb9d1
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 005eb9d2
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 005eb9d7
    LEA EAX,[EBX + 0x1b4]               ; 005eb9da
    PUSH EAX                            ; 005eb9e0
    PUSH 0x65742d                       ; 005eb9e1 | = "Move up condition"
    PUSH ESI                            ; 005eb9e6
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 005eb9e7
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 005eb9ec
    LEA EAX,[EBX + 0x218]               ; 005eb9ef
    PUSH EAX                            ; 005eb9f5
    PUSH 0x65743f                       ; 005eb9f6 | = "Move down condition"
    PUSH ESI                            ; 005eb9fb
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 005eb9fc
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 005eba01
    PUSH 0x0                            ; 005eba04
    LEA EAX,[EBX + 0x27c]               ; 005eba06
    PUSH EAX                            ; 005eba0c
    PUSH 0x657453                       ; 005eba0d | = "Parameter"
    PUSH ESI                            ; 005eba12
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005eba13
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005eba18
    LEA EAX,[EBX + 0x280]               ; 005eba1b
    PUSH EAX                            ; 005eba21
    PUSH 0x6846d0                       ; 005eba22 | g_WaterActorStateTypePairs
    PUSH 0x4                            ; 005eba27
    PUSH 0x65747c                       ; 005eba29 | = "State"
    PUSH ESI                            ; 005eba2e
    CALL core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640 ; 005eba2f
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640(CActorPropertyList * this_ptr, char * property_name, int num_pairs, SEnumPair * pairs, ...)
    ADD ESP,0x14                        ; 005eba34
    PUSH 0x0                            ; 005eba37
    LEA EAX,[EBX + 0x284]               ; 005eba39
    PUSH EAX                            ; 005eba3f
    PUSH 0x657482                       ; 005eba40 | = "Patch size"
    PUSH ESI                            ; 005eba45
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005eba46
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005eba4b
    LEA EAX,[EBX + 0x288]               ; 005eba4e
    PUSH EAX                            ; 005eba54
    PUSH 0x65748d                       ; 005eba55 | = "Round"
    PUSH ESI                            ; 005eba5a
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 005eba5b
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 005eba60
    PUSH 0x0                            ; 005eba63
    LEA EAX,[EBX + 0x28c]               ; 005eba65
    PUSH EAX                            ; 005eba6b
    PUSH 0x657493                       ; 005eba6c | = "Red value"
    PUSH ESI                            ; 005eba71
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 005eba72
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005eba77
    PUSH 0x0                            ; 005eba7a
    LEA EAX,[EBX + 0x290]               ; 005eba7c
    PUSH EAX                            ; 005eba82
    PUSH 0x65749d                       ; 005eba83 | = "Green value"
    PUSH ESI                            ; 005eba88
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 005eba89
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005eba8e
    PUSH 0x0                            ; 005eba91
    ADD EBX,0x294                       ; 005eba93
    PUSH EBX                            ; 005eba99
    PUSH 0x6574a9                       ; 005eba9a | = "Blue value"
    PUSH ESI                            ; 005eba9f
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 005ebaa0
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005ebaa5
    POP ESI                             ; 005ebaa8
    POP EBX                             ; 005ebaa9
    RET                                 ; 005ebaaa

