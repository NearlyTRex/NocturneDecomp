; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_staticInit_FUN_00517140(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c__atexit_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x5a1f20                       ; 00517140
        ;   Label: core_skeleton.cpp_staticInit_FUN_00517140
    PUSH 0x40                           ; 00517145
    PUSH 0x268cef4                      ; 00517147
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0051714c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00517151
    PUSH 0x5be980                       ; 00517154
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00517159
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0051715e
    PUSH 0x5a1f40                       ; 00517161
    PUSH 0x28                           ; 00517166
    PUSH 0x2737ef8                      ; 00517168
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0051716d
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00517172
    PUSH 0x5be990                       ; 00517175
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 0051717a
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0051717f
    RET                                 ; 00517182

