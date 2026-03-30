; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CImp * __cdecl core_imp_cpp_factoryFunc_FUN_004f9860(void)
;
;
; XREF[1]:
;   core_imp.cpp_staticInit_FUN_004f9830 at 004f983c
;
; Referenced Globals:
;   TerminatedCString s_core_imp_cpp_0062f823
;
; Called Functions:
;   core_imp.cpp_CImp_ctor_FUN_004f98a0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x59                           ; 004f9860
        ;   Label: core_imp.cpp_factoryFunc_FUN_004f9860
    PUSH 0x62f823                       ; 004f9862 | = "..\\core\\imp.cpp"
    PUSH 0xbef4                         ; 004f9867
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 004f986c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004f9871
    TEST EAX,EAX                        ; 004f9874
    JNZ 0x004f9879                      ; 004f9876
        ;   XREF to: 004f9879 (CONDITIONAL_JUMP)  ; LAB_004f9879
    RET                                 ; 004f9878
    PUSH EAX                            ; 004f9879
        ;   Label: LAB_004f9879
    CALL core_imp.cpp_CImp_ctor_FUN_004f98a0 ; 004f987a
        ;   XREF to: 004f98a0 (UNCONDITIONAL_CALL)  ; CImp * core_imp.cpp_CImp_ctor_FUN_004f98a0(CImp * this_ptr)
    ADD ESP,0x4                         ; 004f987f
    RET                                 ; 004f9882

