; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[79]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a9fa
;   core_ammo.cpp_CAmmo_getBoundingBox_FUN_0040eca0 at 0040ecaf
;   core_ammobox.cpp_CAmmoBox_getBoundingBox_FUN_0040f340 at 0040f34f
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040f2b0 at 0040f302
;   core_anvil.cpp_CAnvil_getBoundingBox_FUN_0040f860 at 0040f86f
;   core_backgnd.cpp_CBackgroundActor_getBoundingBox_FUN_0040fff0 at 0040ffff
;   core_backgnd.cpp_CBackgroundActor_getCollisionType_FUN_004100a0 at 004100b9
;   core_bat.cpp_CBat_getBoundingBox_FUN_00411ea0 at 00411ec1
;   core_bat.cpp_CBat_process_FUN_00411c40 at 00411d28
;   core_battery.cpp_CBattery_getBoundingBox_FUN_00414f50 at 00414f5f
;   ... and 69 more
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0057cea8
;   TerminatedCString s_Tried_to_do_something_wi_0057cebb
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454530
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454531
    CMP dword ptr [EBX + 0x178],0x0     ; 00454535
    JZ 0x00454546                       ; 0045453c
        ;   XREF to: 00454546 (CONDITIONAL_JUMP)  ; LAB_00454546
    MOV EAX,dword ptr [EBX + 0x178]     ; 0045453e
    POP EBX                             ; 00454544
    RET                                 ; 00454545
    PUSH ESI                            ; 00454546
        ;   Label: LAB_00454546
    LEA EAX,[EBX + 0x78]                ; 00454547
    PUSH EAX                            ; 0045454a
    MOV ECX,0x57cea8                    ; 0045454b | = "..\\core\\dmodel.cpp"
    MOV ESI,0x52d                       ; 00454550
    PUSH 0x57cebb                       ; 00454555 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0045455a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00454560 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00454566
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0045456b
    POP ESI                             ; 0045456e
    MOV EAX,dword ptr [EBX + 0x178]     ; 0045456f
    POP EBX                             ; 00454575
    RET                                 ; 00454576

