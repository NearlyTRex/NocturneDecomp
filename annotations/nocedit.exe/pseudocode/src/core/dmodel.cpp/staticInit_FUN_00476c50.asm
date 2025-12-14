; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_staticInit_FUN_00476c50(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CKeyFramedModelTypeInfo
;   WatcomStaticDestructorNode g_CKeyFramedModelPoolDestructorNode
;   CKeyFramedModel[256] g_CKeyFramedModelPool
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x65c9b0                       ; 00476c50 | g_CKeyFramedModelTypeInfo
        ;   Label: core_dmodel.cpp_staticInit_FUN_00476c50
    PUSH 0x100                          ; 00476c55
    PUSH 0x26a7484                      ; 00476c5a | g_CKeyFramedModelPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00476c5f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00476c64
    PUSH 0x6700e0                       ; 00476c67 | g_CKeyFramedModelPoolDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00476c6c
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00476c71
    RET                                 ; 00476c74

