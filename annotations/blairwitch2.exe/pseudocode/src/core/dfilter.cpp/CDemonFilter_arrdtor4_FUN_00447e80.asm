; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonFilter * core_dfilter_cpp_CDemonFilter_arrdtor4_FUN_00447e80(CDemonFilter *this_ptr,uint flags)
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

    PUSH 0x5f3c00                       ; 00447e80
        ;   Label: core_dfilter.cpp_CDemonFilter_arrdtor4_FUN_00447e80
    PUSH 0x4                            ; 00447e85
    MOV EDX,dword ptr [ESP + 0xc]       ; 00447e87
    PUSH EDX                            ; 00447e8b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 00447e8c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 00447e91
    RET                                 ; 00447e94

