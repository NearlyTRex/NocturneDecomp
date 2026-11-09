; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_setup_FUN_00414470(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414470
        ;   Label: core_battery.cpp_CBattery_setup_FUN_00414470
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414471
    PUSH EBX                            ; 00414475
    CALL core_actor.cpp_FUN_00408850    ; 00414476
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041447b
    LEA EAX,[EBX + 0x158]               ; 0041447e
    PUSH EAX                            ; 00414484
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00414485
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041448a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0041448d
    POP EBX                             ; 00414497
    RET                                 ; 00414498

