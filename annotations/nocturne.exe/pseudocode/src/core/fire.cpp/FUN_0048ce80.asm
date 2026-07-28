; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048ce80(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d360                       ; 0048ce80
        ;   Label: core_fire.cpp_FUN_0048ce80
    PUSH 0x100                          ; 0048ce85
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ce8a
    PUSH EDX                            ; 0048ce8e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ce8f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ce94
    RET                                 ; 0048ce97

