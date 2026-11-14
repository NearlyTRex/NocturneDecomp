; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_ammo_cpp_CAmmo_getActorType_FUN_0040dbb0(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAmmoClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c336c                    ; 0040dbb0 | g_CAmmoClassInfo
        ;   Label: core_ammo.cpp_CAmmo_getActorType_FUN_0040dbb0
    RET                                 ; 0040dbb5

