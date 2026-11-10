; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[68]:
;   core_actor.cpp_FUN_004091b0 at 004095a7
;   core_ammo.cpp_CAmmoManaLarge_process_FUN_0040e2b0 at 0040e2c1
;   core_ammo.cpp_CAmmoMana_process_FUN_0040e140 at 0040e151
;   core_ammo.cpp_CAmmo_getBoundingBox_FUN_0040dfc0 at 0040dfd5
;   core_ammobox.cpp_CAmmoBox_getBoundingBox_FUN_0040e8b0 at 0040e8c5
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040e810 at 0040e871
;   core_bat.cpp_CBat_getBoundingBox_FUN_0040f290 at 0040f2b0
;   core_bat.cpp_CBat_process_FUN_0040f010 at 0040f100
;   core_battery.cpp_CBattery_getBoundingBox_FUN_0040f690 at 0040f6a5
;   core_boxactor.cpp_CBoxActor_getBoundingBox_FUN_0041fb30 at 0041fb50
;   ... and 58 more
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005bbb16
;   TerminatedCString s_Tried_to_do_something_wi_005bbb29
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004625a0
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004625a1
    CMP dword ptr [EBX + 0x178],0x0     ; 004625a5
    JZ 0x004625b6                       ; 004625ac
        ;   XREF to: 004625b6 (CONDITIONAL_JUMP)  ; LAB_004625b6
    MOV EAX,dword ptr [EBX + 0x178]     ; 004625ae
    POP EBX                             ; 004625b4
    RET                                 ; 004625b5
    PUSH ESI                            ; 004625b6
        ;   Label: LAB_004625b6
    LEA EAX,[EBX + 0x78]                ; 004625b7
    PUSH EAX                            ; 004625ba
    MOV ECX,0x5bbb16                    ; 004625bb | = "..\\core\\dmodel.cpp"
    MOV ESI,0x52d                       ; 004625c0
    PUSH 0x5bbb29                       ; 004625c5 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004625ca | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004625d0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004625d6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004625db
    POP ESI                             ; 004625de
    MOV EAX,dword ptr [EBX + 0x178]     ; 004625df
    POP EBX                             ; 004625e5
    RET                                 ; 004625e6

