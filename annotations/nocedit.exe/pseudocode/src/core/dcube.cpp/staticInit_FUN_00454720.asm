; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_staticInit_FUN_00454720(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   CVector3f[16] g_CubeInputTriangleBuffer
;   CVector3f[16] g_ClipStageMaxYBuffer
;   CVector3f[16] g_ClipStageMinYBuffer
;   CVector3f[16] g_ClipStageMaxXBuffer
;   CVector3f[16] g_ClipStageMinXBuffer
;   CVector3f[16] g_ClipStageMinZBuffer
;   CVector3f[16] g_CubeClippedTriangleBuffer
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 00454720 | WatcomTypeInfo g_CVectorTypeInfo
        ;   Label: core_dcube.cpp_staticInit_FUN_00454720
    PUSH 0x10                           ; 00454725
    PUSH 0x15c42a8                      ; 00454727 | CVector3f[16] g_CubeInputTriangleBuffer
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0045472c | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00454731
    PUSH 0x6598c0                       ; 00454734 | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0x10                           ; 00454739
    PUSH 0x15c436c                      ; 0045473b | CVector3f[16] g_ClipStageMaxYBuffer
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00454740 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00454745
    PUSH 0x6598c0                       ; 00454748 | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0x10                           ; 0045474d
    PUSH 0x15c4430                      ; 0045474f | CVector3f[16] g_ClipStageMinYBuffer
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00454754 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00454759
    PUSH 0x6598c0                       ; 0045475c | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0x10                           ; 00454761
    PUSH 0x15c44f4                      ; 00454763 | CVector3f[16] g_ClipStageMaxXBuffer
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00454768 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045476d
    PUSH 0x6598c0                       ; 00454770 | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0x10                           ; 00454775
    PUSH 0x15c45b8                      ; 00454777 | CVector3f[16] g_ClipStageMinXBuffer
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0045477c | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00454781
    PUSH 0x6598c0                       ; 00454784 | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0x10                           ; 00454789
    PUSH 0x15c467c                      ; 0045478b | CVector3f[16] g_ClipStageMinZBuffer
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00454790 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00454795
    PUSH 0x6598c0                       ; 00454798 | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0x10                           ; 0045479d
    PUSH 0x15c4740                      ; 0045479f | CVector3f[16] g_CubeClippedTriangleBuffer
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004547a4 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004547a9
    RET                                 ; 004547ac

