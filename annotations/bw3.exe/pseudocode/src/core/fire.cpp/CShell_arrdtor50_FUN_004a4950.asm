; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * core_fire_cpp_CShell_arrdtor50_FUN_004a4950(CShell *this_ptr,uint flags)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfc70                       ; 004a4950
        ;   Label: core_fire.cpp_CShell_arrdtor50_FUN_004a4950
    PUSH 0x32                           ; 004a4955
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4957
    PUSH EDX                            ; 004a495b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a495c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4961
    RET                                 ; 004a4964

