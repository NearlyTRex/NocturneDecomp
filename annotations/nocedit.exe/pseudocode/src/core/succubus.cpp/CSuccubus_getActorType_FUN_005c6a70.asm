; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_succubus_cpp_CSuccubus_getActorType_FUN_005c6a70(CSuccubus *this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CSuccubusClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6bb98                   ; 005c6a70 | g_CSuccubusClassInfo
        ;   Label: core_succubus.cpp_CSuccubus_getActorType_FUN_005c6a70
    RET                                 ; 005c6a75

