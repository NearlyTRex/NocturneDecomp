; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[43]:
;   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 at 00410dd6
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0 at 004115b6
;   core_anvil.cpp_CAnvil_ctor_FUN_00411ce0 at 00411cf6
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0 at 004127c4
;   core_baron.cpp_FUN_00412b41 at 00412b48
;   core_bat.cpp_CBat_ctor_FUN_004147d0 at 004147f2
;   core_battery.cpp_CBattery_ctor_FUN_00417e90 at 00417ea4
;   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 at 004185d6
;   core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660 at 0041b668
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 at 00421714
;   ... and 33 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478ce0
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00478ce1
    MOV byte ptr [EBX + 0x78],0x0       ; 00478ce5
    PUSH EBX                            ; 00478ce9
    MOV dword ptr [EBX + 0x178],0x0     ; 00478cea
    CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00 ; 00478cf4
        ;   XREF to: 00478d00 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00478cf9
    MOV EAX,EBX                         ; 00478cfc
    POP EBX                             ; 00478cfe
    RET                                 ; 00478cff

