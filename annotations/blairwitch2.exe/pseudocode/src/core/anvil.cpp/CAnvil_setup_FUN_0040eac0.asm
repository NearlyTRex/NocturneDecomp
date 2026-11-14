; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040eac0(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040eac0
        ;   Label: core_anvil.cpp_CAnvil_setup_FUN_0040eac0
    PUSH EDX                            ; 0040eac4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 0040eac5
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040eaca
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040eacd
    ADD EAX,0x2b4                       ; 0040ead1
    PUSH EAX                            ; 0040ead6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0040ead7
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040eadc
    RET                                 ; 0040eadf

