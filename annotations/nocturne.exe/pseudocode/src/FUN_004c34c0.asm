; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c34c0(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c34c0
        ;   Label: FUN_004c34c0
    ADD EAX,0x150                       ; 004c34c4
    PUSH EAX                            ; 004c34c9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004c34ca
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 004c34cf
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c34d2
    PUSH EDX                            ; 004c34d6
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004c34d7
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 004c34dc
    RET                                 ; 004c34df

