; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_00552360(void *param_1)
;
;
; XREF[1]:
;   core_wateract.cpp_FUN_005522d0 at 005522e5
;
; Referenced Globals:
;   WatcomTypeInfo g_SWaterVertexTypeInfo_005a3fd0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a3fd0                       ; 00552360 | g_SWaterVertexTypeInfo_005a3fd0
        ;   Label: core_wateract.cpp_FUN_00552360
    PUSH 0x3e8                          ; 00552365
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055236a
    PUSH EDX                            ; 0055236e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0055236f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00552374
    RET                                 ; 00552377

