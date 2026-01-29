; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_staticInit_FUN_00438b80(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_CDeformableModelInstanceDestructorNode
;   CDeformableModelInstance g_CDeformableModelInstanceInstance
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   crt_stdlib.c__atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x838e58                       ; 00438b80 | g_CDeformableModelInstanceInstance
        ;   Label: core_cloth.cpp_staticInit_FUN_00438b80
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 00438b85
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00438b8a
    PUSH 0x66e808                       ; 00438b8d | g_CDeformableModelInstanceDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00438b92
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00438b97
    RET                                 ; 00438b9a

