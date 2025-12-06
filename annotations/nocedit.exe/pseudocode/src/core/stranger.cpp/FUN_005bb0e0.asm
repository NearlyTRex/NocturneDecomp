; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_FUN_005bb0e0()
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
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x1d3                          ; 005bb0e0
        ;   Label: core_stranger.cpp_FUN_005bb0e0
    PUSH 0x6531b4                       ; 005bb0e5 | = "..\\core\\stranger.cpp" | s_core_stranger_cpp_006531b4 = ..\core\stranger.cpp
    PUSH 0x1fe70                        ; 005bb0ea
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005bb0ef | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005bb0f4
    TEST EAX,EAX                        ; 005bb0f7
    JNZ 0x005bb0fc                      ; 005bb0f9 | LAB_005bb0fc
        ;   XREF to: 005bb0fc (CONDITIONAL_JUMP)
    RET                                 ; 005bb0fb
    PUSH EAX                            ; 005bb0fc
        ;   Label: LAB_005bb0fc
    CALL core_stranger.cpp_CStranger_ctor_FUN_005bb120 ; 005bb0fd | CStranger * core_stranger.cpp_CStranger_ctor_FUN_005bb120(CStranger * this_ptr)
        ;   XREF to: 005bb120 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005bb102
    RET                                 ; 005bb105

