; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_elephant_cpp_CElephantGun_getActorType_FUN_004a6fd0(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CElephantGunClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2cf2b20                   ; 004a6fd0 | g_CElephantGunClassInfo
        ;   Label: core_elephant.cpp_CElephantGun_getActorType_FUN_004a6fd0
    RET                                 ; 004a6fd5

