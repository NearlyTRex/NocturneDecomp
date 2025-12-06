; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_FUN_00422950()
;
;
; XREF[1]:
;   core_boxactor.cpp_staticInit_FUN_00421650 at 004216a0
;
; Referenced Globals:
;   TerminatedCString s_core_boxactor_cpp_006168f3
;
; Called Functions:
;   core_boxactor.cpp_CLightActor_ctor_FUN_00422990
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2e3                          ; 00422950
        ;   Label: core_boxactor.cpp_FUN_00422950
    PUSH 0x6168f3                       ; 00422955 | = "..\\core\\boxactor.cpp" | s_core_boxactor_cpp_006168f3 = ..\core\boxactor.cpp
    PUSH 0x3678                         ; 0042295a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0042295f | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00422964
    TEST EAX,EAX                        ; 00422967
    JNZ 0x0042296c                      ; 00422969 | LAB_0042296c
        ;   XREF to: 0042296c (CONDITIONAL_JUMP)
    RET                                 ; 0042296b
    PUSH EAX                            ; 0042296c
        ;   Label: LAB_0042296c
    CALL core_boxactor.cpp_CLightActor_ctor_FUN_00422990 ; 0042296d | CLightActor * core_boxactor.cpp_CLightActor_ctor_FUN_00422990(CLightActor * this_ptr)
        ;   XREF to: 00422990 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00422972
    RET                                 ; 00422975

