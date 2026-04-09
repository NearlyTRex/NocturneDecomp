; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004e5d50(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e5d50
        ;   Label: core_gasmask.cpp_CGasMask_setup_FUN_004e5d50
    PUSH EDX                            ; 004e5d54
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004e5d55
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e5d5a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e5d5d
    ADD EAX,0x158                       ; 004e5d61
    PUSH EAX                            ; 004e5d66
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004e5d67
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e5d6c
    RET                                 ; 004e5d6f

