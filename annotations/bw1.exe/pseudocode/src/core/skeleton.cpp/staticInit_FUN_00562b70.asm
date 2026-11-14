; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_staticInit_FUN_00562b70(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x6058e0                       ; 00562b70
        ;   Label: core_skeleton.cpp_staticInit_FUN_00562b70
    PUSH 0x40                           ; 00562b75
    PUSH 0x26b82bc                      ; 00562b77
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00562b7c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00562b81
    PUSH 0x62322c                       ; 00562b84
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00562b89
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00562b8e
    PUSH 0x605900                       ; 00562b91
    PUSH 0x28                           ; 00562b96
    PUSH 0x27903bc                      ; 00562b98
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00562b9d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00562ba2
    PUSH 0x62323c                       ; 00562ba5
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00562baa
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00562baf
    RET                                 ; 00562bb2

