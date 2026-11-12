; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[54]:
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040e240 at 0040e3a2
;   core_ammo.cpp_CAmmo_setup_FUN_0040deb0 at 0040deba
;   core_ammobox.cpp_CAmmoBox_setup_FUN_0040e5c0 at 0040e5cc
;   core_anvil.cpp_CAnvil_setup_FUN_0040eac0 at 0040ead7
;   core_backgnd.cpp_CBackgroundActor_setup_FUN_0040f3a0 at 0040f3ac
;   core_baron.cpp_CBaron_setup_FUN_0040f780 at 0040f92a
;   core_bat.cpp_CBat_setup_FUN_004110a0 at 004110af
;   core_battery.cpp_CBattery_setup_FUN_00414780 at 00414795
;   core_biggs.cpp_CBiggs_setup_FUN_00414dd0 at 00414df6
;   core_bmppuzzl.cpp_CAudioRecPuzzle_load_FUN_0059af30 at 0059af4d
;   ... and 44 more
;
; Called Functions:
;   core_dmodel.cpp_loadModel_FUN_0044fba0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044fd00
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
    ADD EAX,0x78                        ; 0044fd04
    PUSH EAX                            ; 0044fd07
    CALL core_dmodel.cpp_loadModel_FUN_0044fba0 ; 0044fd08
        ;   XREF to: 0044fba0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_0044fba0()
    ADD ESP,0x4                         ; 0044fd0d
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044fd10
    MOV dword ptr [EDX + 0x178],EAX     ; 0044fd14
    RET                                 ; 0044fd1a

