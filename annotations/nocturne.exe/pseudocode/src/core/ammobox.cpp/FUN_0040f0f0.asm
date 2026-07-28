; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammobox_cpp_FUN_0040f0f0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f0f0
        ;   Label: core_ammobox.cpp_FUN_0040f0f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f0f1
    LEA EAX,[EBX + 0x150]               ; 0040f0f5
    PUSH EAX                            ; 0040f0fb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0040f0fc
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f101
    PUSH EBX                            ; 0040f104
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0040f105
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f10a
    MOV dword ptr [EBX + 0x340],0x0     ; 0040f10d
    POP EBX                             ; 0040f117
    LEA EAX,[EAX]                       ; 0040f118
    MOV EDX,EDX                         ; 0040f11e

