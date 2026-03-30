; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBugs * __cdecl core_bugs_cpp_factoryFunc_FUN_00424c70(void)
;
;
; XREF[1]:
;   core_bugs.cpp_staticInit_FUN_00424c40 at 00424c4c
;
; Referenced Globals:
;   TerminatedCString s_core_bugs_cpp_00616ccf
;
; Called Functions:
;   core_bugs.cpp_CBugs_ctor_FUN_00424cb0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x3e                           ; 00424c70
        ;   Label: core_bugs.cpp_factoryFunc_FUN_00424c70
    PUSH 0x616ccf                       ; 00424c72 | = "..\\core\\bugs.cpp"
    PUSH 0x199f8                        ; 00424c77
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 00424c7c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00424c81
    TEST EAX,EAX                        ; 00424c84
    JNZ 0x00424c89                      ; 00424c86
        ;   XREF to: 00424c89 (CONDITIONAL_JUMP)  ; LAB_00424c89
    RET                                 ; 00424c88
    PUSH EAX                            ; 00424c89
        ;   Label: LAB_00424c89
    CALL core_bugs.cpp_CBugs_ctor_FUN_00424cb0 ; 00424c8a
        ;   XREF to: 00424cb0 (UNCONDITIONAL_CALL)  ; CBugs * core_bugs.cpp_CBugs_ctor_FUN_00424cb0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00424c8f
    RET                                 ; 00424c92

