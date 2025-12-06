; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_tommygun.cpp_CTommyGun_getActorType_FUN_005dda80(CTommyGun * this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTommyGunClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f873a4                   ; 005dda80 | CDemonActorType g_CTommyGunClassInfo
        ;   Label: core_tommygun.cpp_CTommyGun_getActorType_FUN_005dda80
    RET                                 ; 005dda85

