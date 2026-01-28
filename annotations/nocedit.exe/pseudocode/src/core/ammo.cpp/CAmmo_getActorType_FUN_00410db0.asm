; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_ammo_cpp_CAmmo_getActorType_FUN_00410db0(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAmmoClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x82236c                    ; 00410db0 | g_CAmmoClassInfo
        ;   Label: core_ammo.cpp_CAmmo_getActorType_FUN_00410db0
    RET                                 ; 00410db5

