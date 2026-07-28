; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048cce0(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d500                       ; 0048cce0
        ;   Label: core_fire.cpp_FUN_0048cce0
    PUSH 0x32                           ; 0048cce5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cce7
    PUSH EDX                            ; 0048cceb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ccec
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ccf1
    RET                                 ; 0048ccf4

