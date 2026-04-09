; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_anvil_cpp_CAnvil_setup_FUN_00411d70(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00411d70
        ;   Label: core_anvil.cpp_CAnvil_setup_FUN_00411d70
    PUSH EDX                            ; 00411d74
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00411d75
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00411d7a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00411d7d
    ADD EAX,0x158                       ; 00411d81
    PUSH EAX                            ; 00411d86
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00411d87
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411d8c
    RET                                 ; 00411d8f

