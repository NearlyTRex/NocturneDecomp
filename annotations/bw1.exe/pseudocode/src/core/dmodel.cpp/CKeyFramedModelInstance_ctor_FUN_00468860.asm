; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[45]:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 at 0040dbd6
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e0b0 at 0040e0c6
;   core_anvil.cpp_CAnvil_ctor_FUN_0040e5d0 at 0040e5e6
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040eeb0 at 0040eec4
;   core_baron.cpp_staticInit_FUN_0040f180 at 0040f1a8
;   core_bat.cpp_CBat_ctor_FUN_00410b50 at 00410b72
;   core_battery.cpp_CBattery_ctor_FUN_00414410 at 00414424
;   core_biggs.cpp_CBiggs_ctor_FUN_004149f0 at 00414a06
;   core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b170 at 0041b178
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421ca0 at 00421cb4
;   ... and 35 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00468880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468860
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
    MOV EBX,dword ptr [ESP + 0x8]       ; 00468861
    MOV byte ptr [EBX + 0x78],0x0       ; 00468865
    PUSH EBX                            ; 00468869
    MOV dword ptr [EBX + 0x178],0x0     ; 0046886a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00468880 ; 00468874
        ;   XREF to: 00468880 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00468880(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00468879
    MOV EAX,EBX                         ; 0046887c
    POP EBX                             ; 0046887e
    RET                                 ; 0046887f

