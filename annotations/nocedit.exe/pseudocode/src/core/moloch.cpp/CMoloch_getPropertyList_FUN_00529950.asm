; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_moloch_cpp_CMoloch_getPropertyList_FUN_00529950(CMoloch *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_In_human_form_00639ee1
;   TerminatedCString s_humanToDemonCond_00639eef
;   TerminatedCString s_demonToHumanCond_00639f00
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_hero.cpp_CHero_getPropertyList_FUN_004f3f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529950
        ;   Label: core_moloch.cpp_CMoloch_getPropertyList_FUN_00529950
    PUSH ESI                            ; 00529951
    MOV EBX,dword ptr [ESP + 0xc]       ; 00529952
    MOV ESI,dword ptr [ESP + 0x10]      ; 00529956
    PUSH ESI                            ; 0052995a
    PUSH EBX                            ; 0052995b
    CALL core_hero.cpp_CHero_getPropertyList_FUN_004f3f20 ; 0052995c
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_getPropertyList_FUN_004f3f20(CHero * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00529961
    LEA EAX,[EBX + 0x21e88]             ; 00529964
    PUSH EAX                            ; 0052996a
    PUSH 0x639ee1                       ; 0052996b | = "In human form"
    PUSH ESI                            ; 00529970
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 00529971
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 00529976
    LEA EAX,[EBX + 0x21e94]             ; 00529979
    PUSH EAX                            ; 0052997f
    PUSH 0x639eef                       ; 00529980 | = "humanToDemonCond"
    PUSH ESI                            ; 00529985
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00529986
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0052998b
    ADD EBX,0x21ef8                     ; 0052998e
    PUSH EBX                            ; 00529994
    PUSH 0x639f00                       ; 00529995 | = "demonToHumanCond"
    PUSH ESI                            ; 0052999a
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0052999b
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 005299a0
    POP ESI                             ; 005299a3
    POP EBX                             ; 005299a4
    RET                                 ; 005299a5

