; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_ammo_cpp_CAmmo_getActorType_FUN_0040dda0(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAmmoClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc36c                    ; 0040dda0 | g_CAmmoClassInfo
        ;   Label: core_ammo.cpp_CAmmo_getActorType_FUN_0040dda0
    RET                                 ; 0040dda5

