; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_setup_FUN_004e69c0(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e69c0
        ;   Label: core_grave.cpp_CGrave_setup_FUN_004e69c0
    ADD EAX,0x158                       ; 004e69c4
    PUSH EAX                            ; 004e69c9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004e69ca
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e69cf
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e69d2
    PUSH EDX                            ; 004e69d6
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 004e69d7
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e69dc
    RET                                 ; 004e69df

