; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; XREF[27]:
;   core_armour.cpp_CArmour_getPropertyList_FUN_00412470 at 0041247d
;   core_batcreat.cpp_CBatCreature_getPropertyList_FUN_004162b0 at 004162bc
;   core_batman.cpp_CBatman_getPropertyList_FUN_00417cd0 at 00417cdd
;   core_beast.cpp_CBeast_getPropertyList_FUN_00418420 at 0041842c
;   core_biggs.cpp_CBiggs_getPropertyList_FUN_00418c80 at 00418c8d
;   core_boneguy.cpp_CBoneGuy_getPropertyList_FUN_0041d990 at 0041d99d
;   core_bride.cpp_CBride_getPropertyList_FUN_00424b10 at 00424b1b
;   core_bugs.cpp_CBugs_getPropertyList_FUN_004277e0 at 004277f0
;   core_cow.cpp_CZombieCow_getPropertyList_FUN_00444c50 at 00444c5c
;   core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920 at 0047f92c
;   ... and 17 more
;
; Referenced Globals:
;   TerminatedCString s_Speed_006243e2
;   TerminatedCString s_Randomize_me_006243e8
;   TerminatedCString s_Size_scale_006243f5
;   TerminatedCString s_hitPoints_00624400
;   TerminatedCString s_patrolNamePattern_0062440a
;   TerminatedCString s_Guard_distance_0062441c
;   TerminatedCString s_Victim_height_0062442b
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa170
        ;   Label: core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
    PUSH ESI                            ; 004aa171
    MOV ESI,dword ptr [ESP + 0xc]       ; 004aa172
    MOV EBX,dword ptr [ESP + 0x10]      ; 004aa176
    PUSH EBX                            ; 004aa17a
    PUSH ESI                            ; 004aa17b
    CALL core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730 ; 004aa17c
        ;   XREF to: 0042f730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_getPropertyList_FUN_0042f730(CCharacter * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004aa181
    PUSH 0x0                            ; 004aa184
    PUSH 0x41a00000                     ; 004aa186
    LEA EAX,[ESI + 0xbe24]              ; 004aa18b
    PUSH 0x3dcccccd                     ; 004aa191
    PUSH EAX                            ; 004aa196
    PUSH 0x6243e2                       ; 004aa197 | = "Speed"
    PUSH EBX                            ; 004aa19c
    CALL core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0 ; 004aa19d
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, float min_value, ...)
    ADD ESP,0x18                        ; 004aa1a2
    LEA EAX,[ESI + 0xbe2c]              ; 004aa1a5
    PUSH EAX                            ; 004aa1ab
    PUSH 0x6243e8                       ; 004aa1ac | = "Randomize me"
    PUSH EBX                            ; 004aa1b1
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 004aa1b2
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 004aa1b7
    PUSH 0x0                            ; 004aa1ba
    LEA EAX,[ESI + 0x261c]              ; 004aa1bc
    PUSH EAX                            ; 004aa1c2
    PUSH 0x6243f5                       ; 004aa1c3 | = "Size scale"
    PUSH EBX                            ; 004aa1c8
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004aa1c9
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004aa1ce
    PUSH 0x0                            ; 004aa1d1
    MOV dword ptr [EAX + 0x58],0x1      ; 004aa1d3
    LEA EAX,[ESI + 0x243c]              ; 004aa1da
    PUSH EAX                            ; 004aa1e0
    PUSH 0x624400                       ; 004aa1e1 | = "hitPoints"
    PUSH EBX                            ; 004aa1e6
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004aa1e7
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004aa1ec
    PUSH 0x0                            ; 004aa1ef
    PUSH 0x64                           ; 004aa1f1
    LEA EAX,[ESI + 0xbe48]              ; 004aa1f3
    PUSH EAX                            ; 004aa1f9
    PUSH 0x62440a                       ; 004aa1fa | = "patrolNamePattern"
    PUSH EBX                            ; 004aa1ff
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 004aa200
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 004aa205
    PUSH 0x0                            ; 004aa208
    PUSH 0x43c80000                     ; 004aa20a
    LEA EAX,[ESI + 0xbe34]              ; 004aa20f
    PUSH 0x3f800000                     ; 004aa215
    PUSH EAX                            ; 004aa21a
    PUSH 0x62441c                       ; 004aa21b | = "Guard distance"
    PUSH EBX                            ; 004aa220
    CALL core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0 ; 004aa221
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, float min_value, ...)
    ADD ESP,0x18                        ; 004aa226
    PUSH 0x0                            ; 004aa229
    ADD ESI,0xbeb0                      ; 004aa22b
    PUSH ESI                            ; 004aa231
    PUSH 0x62442b                       ; 004aa232 | = "Victim height"
    PUSH EBX                            ; 004aa237
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004aa238
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004aa23d
    POP ESI                             ; 004aa240
    POP EBX                             ; 004aa241
    LEA EAX,[EAX]                       ; 004aa242
    LEA EDX,[EDX]                       ; 004aa248
    MOV EAX,EAX                         ; 004aa24e

