; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_lightgun_cpp_CLightGun_getActorType_FUN_005058f0(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CLightGunClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2dd30b8                   ; 005058f0 | g_CLightGunClassInfo
        ;   Label: core_lightgun.cpp_CLightGun_getActorType_FUN_005058f0
    RET                                 ; 005058f5

