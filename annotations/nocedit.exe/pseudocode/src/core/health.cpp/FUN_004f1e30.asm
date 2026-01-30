; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_health_cpp_FUN_004f1e30(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f1e30
        ;   Label: core_health.cpp_FUN_004f1e30
    ADD EAX,0x158                       ; 004f1e34
    PUSH EAX                            ; 004f1e39
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004f1e3a
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f1e3f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004f1e42
    PUSH EDX                            ; 004f1e46
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004f1e47
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

