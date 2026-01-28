; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_ammobox_cpp_CAmmoBox_getActorType_FUN_00411590(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CAmmoBoxClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x8223a8                    ; 00411590 | g_CAmmoBoxClassInfo
        ;   Label: core_ammobox.cpp_CAmmoBox_getActorType_FUN_00411590
    RET                                 ; 00411595

