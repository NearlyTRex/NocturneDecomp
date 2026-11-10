; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[87]:
;   core_actor.cpp_FUN_004093a0 at 00409718
;   core_ammo.cpp_CAmmo_getBoundingBox_FUN_0040e170 at 0040e185
;   core_ammobox.cpp_CAmmoBox_getBoundingBox_FUN_0040e820 at 0040e835
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040e780 at 0040e7e1
;   core_anvil.cpp_CAnvil_getBoundingBox_FUN_0040ed50 at 0040ed65
;   core_backgnd.cpp_CBackgroundActor_getBoundingBox_FUN_0040f490 at 0040f4a5
;   core_backgnd.cpp_CBackgroundActor_getCollisionType_FUN_0040f560 at 0040f579
;   core_bat.cpp_CBat_getBoundingBox_FUN_00411480 at 004114a0
;   core_bat.cpp_CBat_process_FUN_00411200 at 004112f0
;   core_battery.cpp_CBattery_getBoundingBox_FUN_00414910 at 00414925
;   ... and 77 more
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005cfae1
;   TerminatedCString s_Tried_to_do_something_wi_005cfaf4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044fd20
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044fd21
    CMP dword ptr [EBX + 0x178],0x0     ; 0044fd25
    JZ 0x0044fd36                       ; 0044fd2c
        ;   XREF to: 0044fd36 (CONDITIONAL_JUMP)  ; LAB_0044fd36
    MOV EAX,dword ptr [EBX + 0x178]     ; 0044fd2e
    POP EBX                             ; 0044fd34
    RET                                 ; 0044fd35
    PUSH ESI                            ; 0044fd36
        ;   Label: LAB_0044fd36
    LEA EAX,[EBX + 0x78]                ; 0044fd37
    PUSH EAX                            ; 0044fd3a
    MOV ECX,0x5cfae1                    ; 0044fd3b | = "..\\core\\dmodel.cpp"
    MOV ESI,0x52d                       ; 0044fd40
    PUSH 0x5cfaf4                       ; 0044fd45 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0044fd4a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044fd50 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044fd56
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0044fd5b
    POP ESI                             ; 0044fd5e
    MOV EAX,dword ptr [EBX + 0x178]     ; 0044fd5f
    POP EBX                             ; 0044fd65
    RET                                 ; 0044fd66

