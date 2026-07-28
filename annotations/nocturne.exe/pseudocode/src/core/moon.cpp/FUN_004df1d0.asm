; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moon_cpp_FUN_004df1d0(void *param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0c80                       ; 004df1d0
        ;   Label: core_moon.cpp_FUN_004df1d0
    PUSH 0x3                            ; 004df1d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df1d7
    PUSH EDX                            ; 004df1db
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004df1dc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004df1e1
    RET                                 ; 004df1e4

