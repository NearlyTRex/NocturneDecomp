; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dfilter_cpp_FUN_0044c540(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59ac90                       ; 0044c540
        ;   Label: core_dfilter.cpp_FUN_0044c540
    PUSH 0x4                            ; 0044c545
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044c547
    PUSH EDX                            ; 0044c54b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0044c54c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0044c551
    RET                                 ; 0044c554

