; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_004f2530(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1200                       ; 004f2530
        ;   Label: core_path.cpp_FUN_004f2530
    PUSH 0xc                            ; 004f2535
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f2537
    PUSH EDX                            ; 004f253b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004f253c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f2541
    RET                                 ; 004f2544

