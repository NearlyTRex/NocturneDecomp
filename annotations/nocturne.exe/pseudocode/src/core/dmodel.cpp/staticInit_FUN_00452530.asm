; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_staticInit_FUN_00452530(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c__atexit_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x59c0a0                       ; 00452530
        ;   Label: core_dmodel.cpp_staticInit_FUN_00452530
    PUSH 0x100                          ; 00452535
    PUSH 0x1abb65c                      ; 0045253a
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0045253f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00452544
    PUSH 0x5ae638                       ; 00452547
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 0045254c
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00452551
    RET                                 ; 00452554

