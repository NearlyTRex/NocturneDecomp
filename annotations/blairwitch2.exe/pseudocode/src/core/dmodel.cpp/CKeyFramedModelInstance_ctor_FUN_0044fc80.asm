; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[47]:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0 at 0040ddc6
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e510 at 0040e526
;   core_anvil.cpp_CAnvil_ctor_FUN_0040ea30 at 0040ea46
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040f330 at 0040f344
;   core_baron.cpp_staticInit_FUN_0040f600 at 0040f628
;   core_bat.cpp_CBat_ctor_FUN_00410fd0 at 00410ff2
;   core_battery.cpp_CBattery_ctor_FUN_00414720 at 00414734
;   core_biggs.cpp_CBiggs_ctor_FUN_00414d10 at 00414d26
;   core_bodypart.cpp_SBodyPartModel_ctor_FUN_00417cf0 at 00417cf8
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30 at 0041bd44
;   ... and 37 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_0044fca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044fc80
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044fc81
    MOV byte ptr [EBX + 0x78],0x0       ; 0044fc85
    PUSH EBX                            ; 0044fc89
    MOV dword ptr [EBX + 0x178],0x0     ; 0044fc8a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_0044fca0 ; 0044fc94
        ;   XREF to: 0044fca0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_0044fca0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044fc99
    MOV EAX,EBX                         ; 0044fc9c
    POP EBX                             ; 0044fc9e
    RET                                 ; 0044fc9f

