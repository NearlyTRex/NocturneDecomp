; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLarva * __cdecl core_larva_cpp_factoryFunc_FUN_00502f50(void)
;
;
; XREF[1]:
;   core_larva.cpp_staticInit_FUN_00502f20 at 00502f2c
;
; Referenced Globals:
;   TerminatedCString s_core_larva_cpp_00630eca
;
; Called Functions:
;   core_larva.cpp_CLarva_ctor_FUN_00502f90
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x36                           ; 00502f50
        ;   Label: core_larva.cpp_factoryFunc_FUN_00502f50
    PUSH 0x630eca                       ; 00502f52 | = "..\\core\\larva.cpp"
    PUSH 0xbec8                         ; 00502f57
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00502f5c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00502f61
    TEST EAX,EAX                        ; 00502f64
    JNZ 0x00502f69                      ; 00502f66
        ;   XREF to: 00502f69 (CONDITIONAL_JUMP)  ; LAB_00502f69
    RET                                 ; 00502f68
    PUSH EAX                            ; 00502f69
        ;   Label: LAB_00502f69
    CALL core_larva.cpp_CLarva_ctor_FUN_00502f90 ; 00502f6a
        ;   XREF to: 00502f90 (UNCONDITIONAL_CALL)  ; CLarva * core_larva.cpp_CLarva_ctor_FUN_00502f90(CLarva * this_ptr)
    ADD ESP,0x4                         ; 00502f6f
    RET                                 ; 00502f72

