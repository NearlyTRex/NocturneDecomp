; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048ccc0(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d520                       ; 0048ccc0
        ;   Label: core_fire.cpp_FUN_0048ccc0
    PUSH 0x100                          ; 0048ccc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ccca
    PUSH EDX                            ; 0048ccce
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cccf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ccd4
    RET                                 ; 0048ccd7

