; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_gun.cpp_CGun_getActorType_FUN_004f02e0(CGun * this_ptr)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CGunClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2db86c4                   ; 004f02e0 | g_CGunClassInfo
        ;   Label: core_gun.cpp_CGun_getActorType_FUN_004f02e0
    RET                                 ; 004f02e5

