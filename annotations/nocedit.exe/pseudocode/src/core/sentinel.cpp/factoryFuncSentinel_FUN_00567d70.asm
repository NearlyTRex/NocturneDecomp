; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_00567d70(void)
;
;
; XREF[1]:
;   core_sentinel.cpp_staticInit_FUN_00567d40 at 00567d4c
;
; Referenced Globals:
;   TerminatedCString s_core_sentinel_cpp_00645704
;
; Called Functions:
;   core_sentinel.cpp_CSentinel_ctor_FUN_00567db0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x5f                           ; 00567d70
        ;   Label: core_sentinel.cpp_factoryFuncSentinel_FUN_00567d70
    PUSH 0x645704                       ; 00567d72 | = "..\\core\\sentinel.cpp"
    PUSH 0xbec4                         ; 00567d77
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 00567d7c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00567d81
    TEST EAX,EAX                        ; 00567d84
    JNZ 0x00567d89                      ; 00567d86
        ;   XREF to: 00567d89 (CONDITIONAL_JUMP)  ; LAB_00567d89
    RET                                 ; 00567d88
    PUSH EAX                            ; 00567d89
        ;   Label: LAB_00567d89
    CALL core_sentinel.cpp_CSentinel_ctor_FUN_00567db0 ; 00567d8a
        ;   XREF to: 00567db0 (UNCONDITIONAL_CALL)  ; CSentinel * core_sentinel.cpp_CSentinel_ctor_FUN_00567db0(CSentinel * this_ptr)
    ADD ESP,0x4                         ; 00567d8f
    RET                                 ; 00567d92

