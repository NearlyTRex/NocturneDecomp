; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_goggles_cpp_CGoggles_setup_FUN_0059c0b0(CGoggles *this_ptr)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c0b0
        ;   Label: core_goggles.cpp_CGoggles_setup_FUN_0059c0b0
    PUSH EDX                            ; 0059c0b4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 0059c0b5
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059c0ba
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c0bd
    ADD EAX,0x2b4                       ; 0059c0c1
    PUSH EAX                            ; 0059c0c6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0059c0c7
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059c0cc
    RET                                 ; 0059c0cf

