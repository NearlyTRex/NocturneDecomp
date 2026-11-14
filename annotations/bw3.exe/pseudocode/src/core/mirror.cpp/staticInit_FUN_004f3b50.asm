; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_staticInit_FUN_004f3b50(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x5db0f0                       ; 004f3b50
        ;   Label: core_mirror.cpp_staticInit_FUN_004f3b50
    PUSH 0x20                           ; 004f3b55
    PUSH 0x1d80d54                      ; 004f3b57
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004f3b5c
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f3b61
    PUSH 0x5db0f0                       ; 004f3b64
    PUSH 0x20                           ; 004f3b69
    PUSH 0x1d80ed8                      ; 004f3b6b
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004f3b70
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f3b75
    RET                                 ; 004f3b78

