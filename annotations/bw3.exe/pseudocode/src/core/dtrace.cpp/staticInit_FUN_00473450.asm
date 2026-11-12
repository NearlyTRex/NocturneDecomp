; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_staticInit_FUN_00473450(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x5db0f0                       ; 00473450
        ;   Label: core_dtrace.cpp_staticInit_FUN_00473450
    PUSH 0x4e20                         ; 00473455
    PUSH 0x1c1f03c                      ; 0047345a
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0047345f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00473464
    RET                                 ; 00473467

