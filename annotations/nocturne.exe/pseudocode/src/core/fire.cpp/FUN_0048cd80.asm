; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048cd80(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d460                       ; 0048cd80
        ;   Label: core_fire.cpp_FUN_0048cd80
    PUSH 0x14                           ; 0048cd85
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cd87
    PUSH EDX                            ; 0048cd8b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cd8c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048cd91
    RET                                 ; 0048cd94

