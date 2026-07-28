; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048cea0(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d340                       ; 0048cea0
        ;   Label: core_fire.cpp_FUN_0048cea0
    PUSH 0x100                          ; 0048cea5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ceaa
    PUSH EDX                            ; 0048ceae
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ceaf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ceb4
    RET                                 ; 0048ceb7

