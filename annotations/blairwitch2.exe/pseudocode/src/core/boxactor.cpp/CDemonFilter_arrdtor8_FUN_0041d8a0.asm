; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * core_boxactor_cpp_CDemonFilter_arrdtor8_FUN_0041d8a0(CDemonFilter *this_ptr,uint flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f3c00                       ; 0041d8a0
        ;   Label: core_boxactor.cpp_CDemonFilter_arrdtor8_FUN_0041d8a0
    PUSH 0x8                            ; 0041d8a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041d8a7
    PUSH EDX                            ; 0041d8ab
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0041d8ac
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041d8b1
    RET                                 ; 0041d8b4

