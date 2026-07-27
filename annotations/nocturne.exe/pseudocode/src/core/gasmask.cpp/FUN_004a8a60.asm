; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gasmask_cpp_FUN_004a8a60(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a8a60
        ;   Label: core_gasmask.cpp_FUN_004a8a60
    PUSH EDX                            ; 004a8a64
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004a8a65
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 004a8a6a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8a6d
    ADD EAX,0x150                       ; 004a8a71
    PUSH EAX                            ; 004a8a76
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004a8a77
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 004a8a7c
    RET                                 ; 004a8a7f

