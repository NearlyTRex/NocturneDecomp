; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mirror.cpp_staticInit_FUN_00520fb0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   CVector3f[32] g_MirrorInputVertices
;   CVector3f[32] g_MirrorOutputVertices
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 00520fb0 | g_CVectorTypeInfo
        ;   Label: core_mirror.cpp_staticInit_FUN_00520fb0
    PUSH 0x20                           ; 00520fb5
    PUSH 0x2f33408                      ; 00520fb7 | g_MirrorInputVertices
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00520fbc
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00520fc1
    PUSH 0x6598c0                       ; 00520fc4 | g_CVectorTypeInfo
    PUSH 0x20                           ; 00520fc9
    PUSH 0x2f3358c                      ; 00520fcb | g_MirrorOutputVertices
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00520fd0
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00520fd5
    RET                                 ; 00520fd8

