; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_grave.cpp_FUN_004ee5a0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ee5a0
        ;   Label: core_grave.cpp_FUN_004ee5a0
    ADD EAX,0x158                       ; 004ee5a4
    PUSH EAX                            ; 004ee5a9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004ee5aa | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004ee5af
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ee5b2
    PUSH EDX                            ; 004ee5b6
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004ee5b7 | void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)

