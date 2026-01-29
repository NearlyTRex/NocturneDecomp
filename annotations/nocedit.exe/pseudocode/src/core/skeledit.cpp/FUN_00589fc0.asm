; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_skeledit_cpp_FUN_00589fc0(void)
;
;
; XREF[2]:
;   core_skeledit.cpp_FUN_00589fa0 at 00589fb0
;   core_skeledit.cpp_FUN_00589fe0 at 00589ff8
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 00589fc0
        ;   Label: core_skeledit.cpp_FUN_00589fc0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00589fc5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH 0x310                          ; 00589fca
    PUSH 0x0                            ; 00589fcf
    MOV EDX,dword ptr [ESP + 0xc]       ; 00589fd1
    PUSH EDX                            ; 00589fd5
    CALL crt_memory.c_memset_FUN_005fde40 ; 00589fd6
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00589fdb
    RET                                 ; 00589fde

