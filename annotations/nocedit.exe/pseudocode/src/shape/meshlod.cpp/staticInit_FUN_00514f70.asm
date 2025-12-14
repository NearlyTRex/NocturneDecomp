; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_staticInit_FUN_00514f70(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   CVector3f[400] g_SamplePointArray
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x6598c0                       ; 00514f70 | g_CVectorTypeInfo
        ;   Label: shape_meshlod.cpp_staticInit_FUN_00514f70
    PUSH 0x190                          ; 00514f75
    PUSH 0x2f313f0                      ; 00514f7a | g_SamplePointArray
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00514f7f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00514f84
    RET                                 ; 00514f87

