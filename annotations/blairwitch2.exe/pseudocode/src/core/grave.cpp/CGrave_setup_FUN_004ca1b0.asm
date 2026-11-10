; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_setup_FUN_004ca1b0(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca1b0
        ;   Label: core_grave.cpp_CGrave_setup_FUN_004ca1b0
    ADD EAX,0x2b4                       ; 004ca1b4
    PUSH EAX                            ; 004ca1b9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004ca1ba
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ca1bf
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ca1c2
    PUSH EDX                            ; 004ca1c6
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 004ca1c7
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ca1cc
    RET                                 ; 004ca1cf

