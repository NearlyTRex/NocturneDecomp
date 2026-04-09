; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_setup_FUN_00417ef0(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417ef0
        ;   Label: core_battery.cpp_CBattery_setup_FUN_00417ef0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00417ef1
    PUSH EBX                            ; 00417ef5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00417ef6
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00417efb
    LEA EAX,[EBX + 0x158]               ; 00417efe
    PUSH EAX                            ; 00417f04
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00417f05
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00417f0a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00417f0d
    POP EBX                             ; 00417f17
    RET                                 ; 00417f18

