; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_keyactor.cpp_FUN_005016f0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005016f0
        ;   Label: core_keyactor.cpp_FUN_005016f0
    ADD EAX,0x158                       ; 005016f4
    PUSH EAX                            ; 005016f9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005016fa
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005016ff
    MOV EDX,dword ptr [ESP + 0x4]       ; 00501702
    PUSH EDX                            ; 00501706
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00501707
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

