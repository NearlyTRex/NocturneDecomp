; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_CAmmo_setup_FUN_0040ec00(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ec00
        ;   Label: core_ammo.cpp_CAmmo_setup_FUN_0040ec00
    ADD EAX,0x150                       ; 0040ec04
    PUSH EAX                            ; 0040ec09
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0040ec0a
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040ec0f
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040ec12
    PUSH EDX                            ; 0040ec16
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0040ec17
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040ec1c
    NOP                                 ; 0040ec1f

