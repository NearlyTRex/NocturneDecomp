; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_ghoul_cpp_CGhoul_getActorType_FUN_004e6020(CGhoul *this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CGhoulClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d832c0                   ; 004e6020 | g_CGhoulClassInfo
        ;   Label: core_ghoul.cpp_CGhoul_getActorType_FUN_004e6020
    RET                                 ; 004e6025

