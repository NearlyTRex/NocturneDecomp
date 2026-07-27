; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(int param_1)
;
;
; XREF[48]:
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 at 0040eebc
;   core_ammo.cpp_FUN_0040ec00 at 0040ec0a
;   core_ammobox.cpp_FUN_0040f0f0 at 0040f0fc
;   core_anvil.cpp_FUN_0040f5f0 at 0040f607
;   core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30 at 0040ff3c
;   core_baron.cpp_CBaron_setup_FUN_004102c0 at 0041046a
;   core_bat.cpp_CBat_setup_FUN_00411ae0 at 00411aef
;   core_battery.cpp_FUN_00414de0 at 00414df5
;   core_biggs.cpp_FUN_00415430 at 00415456
;   core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_00417ac0 at 00417b1e
;   ... and 38 more
;
; Called Functions:
;   core_dmodel.cpp_loadModel_FUN_004543b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00454510
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
    ADD EAX,0x78                        ; 00454514
    PUSH EAX                            ; 00454517
    CALL core_dmodel.cpp_loadModel_FUN_004543b0 ; 00454518
        ;   XREF to: 004543b0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_004543b0()
    ADD ESP,0x4                         ; 0045451d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00454520
    MOV dword ptr [EDX + 0x178],EAX     ; 00454524
    RET                                 ; 0045452a

