; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPlatform * __cdecl core_platfrm_cpp_factoryFunc_FUN_0054c810(void)
;
;
; XREF[1]:
;   core_platfrm.cpp_staticInit_FUN_0054c7e0 at 0054c7ec
;
; Referenced Globals:
;   TerminatedCString s_core_platfrm_cpp_0063f760
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_0054c850
;   shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x31                           ; 0054c810
        ;   Label: core_platfrm.cpp_factoryFunc_FUN_0054c810
    PUSH 0x63f760                       ; 0054c812 | = "..\\core\\platfrm.cpp"
    PUSH 0x72c                          ; 0054c817
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0 ; 0054c81c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054c821
    TEST EAX,EAX                        ; 0054c824
    JNZ 0x0054c829                      ; 0054c826
        ;   XREF to: 0054c829 (CONDITIONAL_JUMP)  ; LAB_0054c829
    RET                                 ; 0054c828
    PUSH EAX                            ; 0054c829
        ;   Label: LAB_0054c829
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_0054c850 ; 0054c82a
        ;   XREF to: 0054c850 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_0054c850(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 0054c82f
    RET                                 ; 0054c832

