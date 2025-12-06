; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_stranger.cpp_CStranger_getActorType_FUN_005bb110(CStranger * this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CStrangerClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6bb28                   ; 005bb110 | CDemonActorType g_CStrangerClassInfo
        ;   Label: core_stranger.cpp_CStranger_getActorType_FUN_005bb110
    RET                                 ; 005bb115

