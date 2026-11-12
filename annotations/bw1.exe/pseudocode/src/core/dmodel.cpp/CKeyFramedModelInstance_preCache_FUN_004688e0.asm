; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[51]:
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 at 0040df32
;   core_ammo.cpp_CAmmo_setup_FUN_0040dc50 at 0040dc5a
;   core_ammobox.cpp_CAmmoBox_setup_FUN_0040e160 at 0040e16c
;   core_anvil.cpp_CAnvil_setup_FUN_0040e660 at 0040e677
;   core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ef20 at 0040ef2c
;   core_baron.cpp_CBaron_setup_FUN_0040f300 at 0040f4aa
;   core_bat.cpp_CBat_setup_FUN_00410c20 at 00410c2f
;   core_battery.cpp_CBattery_setup_FUN_00414470 at 00414485
;   core_biggs.cpp_CBiggs_setup_FUN_00414ab0 at 00414ad6
;   core_bmppuzzl.cpp_CAudioRecPuzzle_load_FUN_00415fc0 at 00415fde
;   ... and 41 more
;
; Called Functions:
;   core_dmodel.cpp_loadModel_FUN_00468780
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004688e0
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
    ADD EAX,0x78                        ; 004688e4
    PUSH EAX                            ; 004688e7
    CALL core_dmodel.cpp_loadModel_FUN_00468780 ; 004688e8
        ;   XREF to: 00468780 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00468780(char * filename)
    ADD ESP,0x4                         ; 004688ed
    MOV EDX,dword ptr [ESP + 0x4]       ; 004688f0
    MOV dword ptr [EDX + 0x178],EAX     ; 004688f4
    RET                                 ; 004688fa

