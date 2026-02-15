; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_getPropertyList_FUN_005e51a0(CTVBat *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_006569f6
;   TerminatedCString s_Rotation_speed_00656a08
;   TerminatedCString s_Movement_speed_00656a17
;   TerminatedCString s_Follow_orders_00656a26
;   TerminatedCString s_Periodic_sound_00656a34
;   TerminatedCString s_Sound_period_min_00656a43
;   TerminatedCString s_Sound_period_max_00656a54
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e51a0
        ;   Label: core_tvbat.cpp_CTVBat_getPropertyList_FUN_005e51a0
    PUSH ESI                            ; 005e51a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e51a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005e51a6
    PUSH ESI                            ; 005e51aa
    PUSH EBX                            ; 005e51ab
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 005e51ac
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005e51b1
    PUSH 0x0                            ; 005e51b4
    LEA EAX,[EBX + 0xbec0]              ; 005e51b6
    PUSH EAX                            ; 005e51bc
    PUSH 0x6569f6                       ; 005e51bd | = "Model file (.kfm)"
    PUSH ESI                            ; 005e51c2
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 005e51c3
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 005e51c8
    PUSH 0x0                            ; 005e51cb
    LEA EAX,[EBX + 0xc058]              ; 005e51cd
    PUSH EAX                            ; 005e51d3
    PUSH 0x656a08                       ; 005e51d4 | = "Rotation speed"
    PUSH ESI                            ; 005e51d9
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005e51da
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005e51df
    PUSH 0x0                            ; 005e51e2
    LEA EAX,[EBX + 0xc05c]              ; 005e51e4
    PUSH EAX                            ; 005e51ea
    PUSH 0x656a17                       ; 005e51eb | = "Movement speed"
    PUSH ESI                            ; 005e51f0
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005e51f1
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005e51f6
    LEA EAX,[EBX + 0xc064]              ; 005e51f9
    PUSH EAX                            ; 005e51ff
    PUSH 0x656a26                       ; 005e5200 | = "Follow orders"
    PUSH ESI                            ; 005e5205
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 005e5206
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 005e520b
    LEA EAX,[EBX + 0xc07c]              ; 005e520e
    PUSH EAX                            ; 005e5214
    PUSH 0x656a34                       ; 005e5215 | = "Periodic sound"
    PUSH ESI                            ; 005e521a
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 005e521b
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 005e5220
    PUSH 0x0                            ; 005e5223
    LEA EAX,[EBX + 0xc0e0]              ; 005e5225
    PUSH EAX                            ; 005e522b
    PUSH 0x656a43                       ; 005e522c | = "Sound period min"
    PUSH ESI                            ; 005e5231
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005e5232
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005e5237
    PUSH 0x0                            ; 005e523a
    ADD EBX,0xc0e4                      ; 005e523c
    PUSH EBX                            ; 005e5242
    PUSH 0x656a54                       ; 005e5243 | = "Sound period max"
    PUSH ESI                            ; 005e5248
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005e5249
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005e524e
    POP ESI                             ; 005e5251
    POP EBX                             ; 005e5252
    RET                                 ; 005e5253

