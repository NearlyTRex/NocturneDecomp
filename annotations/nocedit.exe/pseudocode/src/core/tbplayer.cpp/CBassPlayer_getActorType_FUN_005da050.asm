; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_tbplayer_cpp_CBassPlayer_getActorType_FUN_005da050(CBassPlayer *this_ptr)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBassPlayerClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6cc18                   ; 005da050 | g_CBassPlayerClassInfo
        ;   Label: core_tbplayer.cpp_CBassPlayer_getActorType_FUN_005da050
    RET                                 ; 005da055

