; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZThumb * __cdecl core_setdir_cpp_CZThumb_arrdtor1500_FUN_0053a7c0(CZThumb *this_ptr,uint flags)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fb370                       ; 0053a7c0
        ;   Label: core_setdir.cpp_CZThumb_arrdtor1500_FUN_0053a7c0
    PUSH 0x5dc                          ; 0053a7c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053a7ca
    PUSH EDX                            ; 0053a7ce
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0053a7cf
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 0053a7d4
    RET                                 ; 0053a7d7

