; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[43]:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040eb70 at 0040eb86
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040f040 at 0040f056
;   core_anvil.cpp_CAnvil_ctor_FUN_0040f560 at 0040f576
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040fed0 at 0040fee4
;   core_baron.cpp_staticInit_FUN_00410140 at 00410168
;   core_bat.cpp_CBat_ctor_FUN_00411a10 at 00411a32
;   core_battery.cpp_CBattery_ctor_FUN_00414d80 at 00414d94
;   core_biggs.cpp_CBiggs_ctor_FUN_00415370 at 00415386
;   core_bodypart.cpp_SBodyPartModel_ctor_FUN_004180e0 at 004180e8
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300 at 0041e314
;   ... and 33 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454490
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454491
    MOV byte ptr [EBX + 0x78],0x0       ; 00454495
    PUSH EBX                            ; 00454499
    MOV dword ptr [EBX + 0x178],0x0     ; 0045449a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0 ; 004544a4
        ;   XREF to: 004544b0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004544a9
    MOV EAX,EBX                         ; 004544ac
    POP EBX                             ; 004544ae
    RET                                 ; 004544af

