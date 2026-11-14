; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004ddb10(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ddb10
        ;   Label: core_gasmask.cpp_CGasMask_setup_FUN_004ddb10
    PUSH EDX                            ; 004ddb14
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 004ddb15
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ddb1a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ddb1d
    ADD EAX,0x158                       ; 004ddb21
    PUSH EAX                            ; 004ddb26
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004ddb27
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ddb2c
    RET                                 ; 004ddb2f

