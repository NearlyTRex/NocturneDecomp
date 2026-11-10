; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_setup_FUN_0040f500(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f500
        ;   Label: core_battery.cpp_CBattery_setup_FUN_0040f500
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f501
    PUSH EBX                            ; 0040f505
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 0040f506
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f50b
    LEA EAX,[EBX + 0x158]               ; 0040f50e
    PUSH EAX                            ; 0040f514
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0040f515
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f51a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0040f51d
    POP EBX                             ; 0040f527
    RET                                 ; 0040f528

