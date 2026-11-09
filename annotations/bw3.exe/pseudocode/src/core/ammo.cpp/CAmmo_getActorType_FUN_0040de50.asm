; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_ammo_cpp_CAmmo_getActorType_FUN_0040de50(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAmmoClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dfcec                    ; 0040de50 | g_CAmmoClassInfo
        ;   Label: core_ammo.cpp_CAmmo_getActorType_FUN_0040de50
    RET                                 ; 0040de55

