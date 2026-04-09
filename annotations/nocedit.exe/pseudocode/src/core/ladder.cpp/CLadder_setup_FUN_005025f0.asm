; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_setup_FUN_005025f0(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005025f0
        ;   Label: core_ladder.cpp_CLadder_setup_FUN_005025f0
    PUSH EDX                            ; 005025f4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005025f5
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005025fa
    MOV EAX,dword ptr [ESP + 0x4]       ; 005025fd
    ADD EAX,0x158                       ; 00502601
    PUSH EAX                            ; 00502606
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00502607
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050260c
    RET                                 ; 0050260f

