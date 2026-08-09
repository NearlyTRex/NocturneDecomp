; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGasMask * __cdecl core_gasmask_cpp_factoryFuncGasMask_FUN_004e5cc0(void)
;
;
; XREF[1]:
;   core_gasmask.cpp_staticInit_FUN_004e5c90 at 004e5c9c
;
; Referenced Globals:
;   TerminatedCString s_core_gasmask_cpp_0062da95
;
; Called Functions:
;   core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x1e                           ; 004e5cc0
        ;   Label: core_gasmask.cpp_factoryFuncGasMask_FUN_004e5cc0
    PUSH 0x62da95                       ; 004e5cc2 | = "..\\core\\gasmask.cpp"
    PUSH 0x2d8                          ; 004e5cc7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 004e5ccc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004e5cd1
    TEST EAX,EAX                        ; 004e5cd4
    JNZ 0x004e5cd9                      ; 004e5cd6
        ;   XREF to: 004e5cd9 (CONDITIONAL_JUMP)  ; LAB_004e5cd9
    RET                                 ; 004e5cd8
    PUSH EAX                            ; 004e5cd9
        ;   Label: LAB_004e5cd9
    CALL core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00 ; 004e5cda
        ;   XREF to: 004e5d00 (UNCONDITIONAL_CALL)  ; CGasMask * core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00(CGasMask * this_ptr)
    ADD ESP,0x4                         ; 004e5cdf
    RET                                 ; 004e5ce2

