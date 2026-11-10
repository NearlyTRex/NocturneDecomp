; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_setup_FUN_00414780(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414780
        ;   Label: core_battery.cpp_CBattery_setup_FUN_00414780
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414781
    PUSH EBX                            ; 00414785
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 00414786
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041478b
    LEA EAX,[EBX + 0x2b4]               ; 0041478e
    PUSH EAX                            ; 00414794
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00414795
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041479a
    MOV dword ptr [EBX + 0x430],0x0     ; 0041479d
    POP EBX                             ; 004147a7
    RET                                 ; 004147a8

