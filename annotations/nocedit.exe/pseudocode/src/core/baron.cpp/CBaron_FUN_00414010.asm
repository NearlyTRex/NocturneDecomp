; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_baron.cpp_CBaron_FUN_00414010(CBaron * this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Summon_condition_00615113
;   TerminatedCString s_Go_away_condition_00615124
;   TerminatedCString s_Summoned_00615136
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_hero.cpp_CHero_FUN_004f3f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414010
        ;   Label: core_baron.cpp_CBaron_FUN_00414010
    PUSH ESI                            ; 00414011
    MOV EBX,dword ptr [ESP + 0xc]       ; 00414012
    MOV ESI,dword ptr [ESP + 0x10]      ; 00414016
    PUSH ESI                            ; 0041401a
    PUSH EBX                            ; 0041401b
    CALL core_hero.cpp_CHero_FUN_004f3f20 ; 0041401c | void core_hero.cpp_CHero_FUN_004f3f20(CHero * this_ptr)
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00414021
    LEA EAX,[EBX + 0x1fbd4]             ; 00414024
    PUSH EAX                            ; 0041402a
    PUSH 0x615113                       ; 0041402b | = "Summon condition" | s_Summon_condition_00615113 = Summon condition
    PUSH ESI                            ; 00414030
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 00414031 | void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00414036
    LEA EAX,[EBX + 0x1fc38]             ; 00414039
    PUSH EAX                            ; 0041403f
    PUSH 0x615124                       ; 00414040 | = "Go away condition" | s_Go_away_condition_00615124 = Go away condition
    PUSH ESI                            ; 00414045
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 00414046 | void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041404b
    ADD EBX,0x1fccc                     ; 0041404e
    PUSH EBX                            ; 00414054
    PUSH 0x615136                       ; 00414055 | = "Summoned" | s_Summoned_00615136 = Summoned
    PUSH ESI                            ; 0041405a
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 0041405b | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00414060
    POP ESI                             ; 00414063
    POP EBX                             ; 00414064
    RET                                 ; 00414065

