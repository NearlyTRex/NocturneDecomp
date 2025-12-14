; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_baron.cpp_CBaronWeapon_getActorType_FUN_00413d30(CBaronWeapon * this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBaronWeaponClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822698                    ; 00413d30 | g_CBaronWeaponClassInfo
        ;   Label: core_baron.cpp_CBaronWeapon_getActorType_FUN_00413d30
    RET                                 ; 00413d35

