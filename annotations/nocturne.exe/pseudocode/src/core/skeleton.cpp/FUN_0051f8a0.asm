; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0051f8a0(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1f20                       ; 0051f8a0
        ;   Label: core_skeleton.cpp_FUN_0051f8a0
    PUSH 0x40                           ; 0051f8a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051f8a7
    PUSH EDX                            ; 0051f8ab
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0051f8ac
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051f8b1
    RET                                 ; 0051f8b4

