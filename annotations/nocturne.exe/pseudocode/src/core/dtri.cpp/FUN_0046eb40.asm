; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_0046eb40(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo_0059c080
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c080                       ; 0046eb40 | g_CDemonTriangleTypeInfo_0059c080
        ;   Label: core_dtri.cpp_FUN_0046eb40
    PUSH 0x8                            ; 0046eb45
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046eb47
    PUSH EDX                            ; 0046eb4b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0046eb4c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0046eb51
    RET                                 ; 0046eb54

