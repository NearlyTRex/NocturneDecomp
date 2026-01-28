; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_staticInit_FUN_00599670(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CDeformableModelTypeInfo
;   WatcomTypeInfo g_CSkeletonTypeInfo
;   WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode
;   WatcomStaticDestructorNode g_SkeletonPoolDestructorNode
;   CDeformableModel[64] g_DeformableModelPool
;   CSkeleton[40] g_SkeletonPool
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x662ef0                       ; 00599670 | g_CDeformableModelTypeInfo
        ;   Label: core_skeleton.cpp_staticInit_FUN_00599670
    PUSH 0x40                           ; 00599675
    PUSH 0x368c8a0                      ; 00599677 | g_DeformableModelPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0059967c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00599681
    PUSH 0x681a4f                       ; 00599684 | g_DeformableModelPoolDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00599689
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0059968e
    PUSH 0x662f10                       ; 00599691 | g_CSkeletonTypeInfo
    PUSH 0x28                           ; 00599696
    PUSH 0x38cc8a4                      ; 00599698 | g_SkeletonPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0059969d
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005996a2
    PUSH 0x681a5f                       ; 005996a5 | g_SkeletonPoolDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 005996aa
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005996af
    RET                                 ; 005996b2

