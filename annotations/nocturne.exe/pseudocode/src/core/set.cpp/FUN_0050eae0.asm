; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0050eae0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0050eae0 | g_CVectorTypeInfo_005993b0
        ;   Label: core_set.cpp_FUN_0050eae0
    PUSH 0xfa0                          ; 0050eae5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050eaea
    PUSH EDX                            ; 0050eaee
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0050eaef
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0050eaf4
    RET                                 ; 0050eaf7

