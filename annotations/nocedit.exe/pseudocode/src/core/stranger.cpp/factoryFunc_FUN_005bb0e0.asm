; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStranger * __cdecl core_stranger_cpp_factoryFunc_FUN_005bb0e0(void)
;
;
; XREF[1]:
;   core_stranger.cpp_staticInit_FUN_005bae80 at 005baea2
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_006531b4
;
; Called Functions:
;   core_stranger.cpp_CStranger_ctor_FUN_005bb120
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x1d3                          ; 005bb0e0
        ;   Label: core_stranger.cpp_factoryFunc_FUN_005bb0e0
    PUSH 0x6531b4                       ; 005bb0e5 | = "..\\core\\stranger.cpp"
    PUSH 0x1fe70                        ; 005bb0ea
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 005bb0ef
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005bb0f4
    TEST EAX,EAX                        ; 005bb0f7
    JNZ 0x005bb0fc                      ; 005bb0f9
        ;   XREF to: 005bb0fc (CONDITIONAL_JUMP)  ; LAB_005bb0fc
    RET                                 ; 005bb0fb
    PUSH EAX                            ; 005bb0fc
        ;   Label: LAB_005bb0fc
    CALL core_stranger.cpp_CStranger_ctor_FUN_005bb120 ; 005bb0fd
        ;   XREF to: 005bb120 (UNCONDITIONAL_CALL)  ; CStranger * core_stranger.cpp_CStranger_ctor_FUN_005bb120(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005bb102
    RET                                 ; 005bb105

