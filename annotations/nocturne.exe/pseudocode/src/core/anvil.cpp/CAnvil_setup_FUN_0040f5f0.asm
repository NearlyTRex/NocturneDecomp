; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040f5f0(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040f5f0
        ;   Label: core_anvil.cpp_CAnvil_setup_FUN_0040f5f0
    PUSH EDX                            ; 0040f5f4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0040f5f5
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f5fa
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040f5fd
    ADD EAX,0x150                       ; 0040f601
    PUSH EAX                            ; 0040f606
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0040f607
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f60c
    RET                                 ; 0040f60f

