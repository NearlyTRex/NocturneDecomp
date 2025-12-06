; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_werewolf.cpp_CWerewolf_getActorType_FUN_005efc00(CWerewolf * this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CWerewolfClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f96b5c                   ; 005efc00 | CDemonActorType g_CWerewolfClassInfo
        ;   Label: core_werewolf.cpp_CWerewolf_getActorType_FUN_005efc00
    RET                                 ; 005efc05

