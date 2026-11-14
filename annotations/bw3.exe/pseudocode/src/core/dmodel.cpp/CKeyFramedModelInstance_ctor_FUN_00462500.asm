; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[36]:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040de60 at 0040de76
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e5c0 at 0040e5d6
;   core_bat.cpp_CBat_ctor_FUN_0040ede0 at 0040ee02
;   core_battery.cpp_CBattery_ctor_FUN_0040f4a0 at 0040f4b4
;   core_bmppuzzl.cpp_CAudioRecPuzzle_ctor_FUN_00411b50 at 00411b82
;   core_bodypart.cpp_SBodyPartModel_ctor_FUN_00416da0 at 00416da8
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0 at 0041eff4
;   core_charactr.cpp_staticInit_FUN_0042ab80 at 0042ab85
;   core_crate.cpp_CCrate_ctor_FUN_00445bd0 at 00445be4
;   core_door.cpp_CDoor_ctor_FUN_00463ab0 at 00463ac6
;   ... and 26 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00462520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462500
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
    MOV EBX,dword ptr [ESP + 0x8]       ; 00462501
    MOV byte ptr [EBX + 0x78],0x0       ; 00462505
    PUSH EBX                            ; 00462509
    MOV dword ptr [EBX + 0x178],0x0     ; 0046250a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00462520 ; 00462514
        ;   XREF to: 00462520 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00462520(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00462519
    MOV EAX,EBX                         ; 0046251c
    POP EBX                             ; 0046251e
    RET                                 ; 0046251f

