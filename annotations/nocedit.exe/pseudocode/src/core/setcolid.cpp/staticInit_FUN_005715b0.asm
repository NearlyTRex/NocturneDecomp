; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setcolid_cpp_staticInit_FUN_005715b0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_SRaytraceStateTypeInfo
;   SRaytraceState[5] g_RaytraceStateStack
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH 0x662950                       ; 005715b0 | g_SRaytraceStateTypeInfo
        ;   Label: core_setcolid.cpp_staticInit_FUN_005715b0
    PUSH 0x5                            ; 005715b5
    PUSH 0x33469f0                      ; 005715b7 | g_RaytraceStateStack
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005715bc
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005715c1
    RET                                 ; 005715c4

