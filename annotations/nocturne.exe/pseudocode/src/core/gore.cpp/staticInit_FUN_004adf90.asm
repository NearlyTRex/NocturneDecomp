; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_staticInit_FUN_004adf90(void)
;
;
; Called Functions:
;   core_gore.cpp_CGore_ctor_FUN_004afd80
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c__atexit_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x1c78c7c                      ; 004adf90
        ;   Label: core_gore.cpp_staticInit_FUN_004adf90
    CALL core_gore.cpp_CGore_ctor_FUN_004afd80 ; 004adf95
        ;   XREF to: 004afd80 (UNCONDITIONAL_CALL)  ; CGore * core_gore.cpp_CGore_ctor_FUN_004afd80(CGore * this_ptr)
    ADD ESP,0x4                         ; 004adf9a
    PUSH 0x5b9694                       ; 004adf9d
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004adfa2
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004adfa7
    PUSH 0x59e530                       ; 004adfaa
    PUSH 0x100                          ; 004adfaf
    PUSH 0x1c78cec                      ; 004adfb4
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004adfb9
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004adfbe
    PUSH 0x5b96a4                       ; 004adfc1
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004adfc6
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004adfcb
    PUSH 0x59e550                       ; 004adfce
    PUSH 0x7d0                          ; 004adfd3
    PUSH 0x1c7ccf4                      ; 004adfd8
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004adfdd
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004adfe2
    PUSH 0x59e570                       ; 004adfe5
    PUSH 0x20                           ; 004adfea
    PUSH 0x1c9e03c                      ; 004adfec
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004adff1
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004adff6
    PUSH 0x59e590                       ; 004adff9
    PUSH 0x3e8                          ; 004adffe
    PUSH 0x1c9e544                      ; 004ae003
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004ae008
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ae00d
    PUSH 0x5b96b4                       ; 004ae010
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004ae015
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004ae01a
    RET                                 ; 004ae01d

