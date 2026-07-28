; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004b0ac0(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59e530                       ; 004b0ac0
        ;   Label: core_gore.cpp_FUN_004b0ac0
    PUSH 0x100                          ; 004b0ac5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b0aca
    PUSH EDX                            ; 004b0ace
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004b0acf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b0ad4
    RET                                 ; 004b0ad7

