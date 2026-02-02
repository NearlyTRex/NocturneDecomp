; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_baron_cpp_CBaron_getPropertyList_FUN_00414010 (CBaron *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Summon_condition_00615113
;   TerminatedCString s_Go_away_condition_00615124
;   TerminatedCString s_Summoned_00615136
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414010
        ;   Label: core_baron.cpp_CBaron_getPropertyList_FUN_00414010
    PUSH ESI                            ; 00414011
    MOV EBX,dword ptr [ESP + 0xc]       ; 00414012
    MOV ESI,dword ptr [ESP + 0x10]      ; 00414016
    PUSH ESI                            ; 0041401a
    PUSH EBX                            ; 0041401b
    CALL core_hero.cpp_CHero_getPropertyList_FUN_004f3f20 ; 0041401c
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_getPropertyList_FUN_004f3f20(CHero * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00414021
    LEA EAX,[EBX + 0x1fbd4]             ; 00414024
    PUSH EAX                            ; 0041402a
    PUSH 0x615113                       ; 0041402b | = "Summon condition"
    PUSH ESI                            ; 00414030
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00414031
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 00414036
    LEA EAX,[EBX + 0x1fc38]             ; 00414039
    PUSH EAX                            ; 0041403f
    PUSH 0x615124                       ; 00414040 | = "Go away condition"
    PUSH ESI                            ; 00414045
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00414046
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0041404b
    ADD EBX,0x1fccc                     ; 0041404e
    PUSH EBX                            ; 00414054
    PUSH 0x615136                       ; 00414055 | = "Summoned"
    PUSH ESI                            ; 0041405a
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0041405b
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 00414060
    POP ESI                             ; 00414063
    POP EBX                             ; 00414064
    RET                                 ; 00414065

