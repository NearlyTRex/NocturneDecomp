; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4340(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c4340
        ;   Label: FUN_004c4340
    PUSH EDX                            ; 004c4344
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004c4345
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 004c434a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c434d
    ADD EAX,0x150                       ; 004c4351
    PUSH EAX                            ; 004c4356
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004c4357
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 004c435c
    RET                                 ; 004c435f

