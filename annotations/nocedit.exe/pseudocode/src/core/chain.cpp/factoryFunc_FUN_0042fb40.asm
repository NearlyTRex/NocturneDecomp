; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CChain * __cdecl core_chain_cpp_factoryFunc_FUN_0042fb40(void)
;
;
; XREF[1]:
;   core_chain.cpp_staticInit_FUN_0042fb10 at 0042fb1c
;
; Referenced Globals:
;   TerminatedCString s_core_chain_cpp_00617791
;
; Called Functions:
;   core_chain.cpp_CChain_ctor_FUN_0042fb80
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x30                           ; 0042fb40
        ;   Label: core_chain.cpp_factoryFunc_FUN_0042fb40
    PUSH 0x617791                       ; 0042fb42 | = "..\\core\\chain.cpp"
    PUSH 0x578                          ; 0042fb47
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0042fb4c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0042fb51
    TEST EAX,EAX                        ; 0042fb54
    JNZ 0x0042fb59                      ; 0042fb56
        ;   XREF to: 0042fb59 (CONDITIONAL_JUMP)  ; LAB_0042fb59
    RET                                 ; 0042fb58
    PUSH EAX                            ; 0042fb59
        ;   Label: LAB_0042fb59
    CALL core_chain.cpp_CChain_ctor_FUN_0042fb80 ; 0042fb5a
        ;   XREF to: 0042fb80 (UNCONDITIONAL_CALL)  ; CChain * core_chain.cpp_CChain_ctor_FUN_0042fb80(CChain * this_ptr)
    ADD ESP,0x4                         ; 0042fb5f
    RET                                 ; 0042fb62

