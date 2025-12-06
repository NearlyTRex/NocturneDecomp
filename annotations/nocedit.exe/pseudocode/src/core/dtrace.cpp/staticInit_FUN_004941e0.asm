; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_staticInit_FUN_004941e0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   CVector3f[20000] g_PVSCubePositions
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 004941e0 | WatcomTypeInfo g_CVectorTypeInfo
        ;   Label: core_dtrace.cpp_staticInit_FUN_004941e0
    PUSH 0x4e20                         ; 004941e5
    PUSH 0x2cb3c2c                      ; 004941ea | CVector3f[20000] g_PVSCubePositions
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004941ef | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004941f4
    RET                                 ; 004941f7

