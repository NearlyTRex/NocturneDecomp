; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_battery_cpp_FUN_00414de0(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414de0
        ;   Label: core_battery.cpp_FUN_00414de0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414de1
    PUSH EBX                            ; 00414de5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00414de6
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 00414deb
    LEA EAX,[EBX + 0x150]               ; 00414dee
    PUSH EAX                            ; 00414df4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00414df5
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 00414dfa
    MOV dword ptr [EBX + 0x2cc],0x0     ; 00414dfd
    POP EBX                             ; 00414e07
    RET                                 ; 00414e08

