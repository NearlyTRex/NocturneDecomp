; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0051f880(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1f40                       ; 0051f880
        ;   Label: core_skeleton.cpp_FUN_0051f880
    PUSH 0x28                           ; 0051f885
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051f887
    PUSH EDX                            ; 0051f88b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0051f88c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051f891
    RET                                 ; 0051f894

