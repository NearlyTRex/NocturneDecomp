; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_smiley.cpp_FUN_005a23f0()
;
;
; XREF[1]:
;   core_smiley.cpp_staticInit_FUN_005a23c0 at 005a23cc
;
; Referenced Globals:
;   TerminatedCString s_core_smiley_cpp_0064f152
;
; Called Functions:
;   core_smiley.cpp_CSmiley_ctor_FUN_005a2430
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x6e                           ; 005a23f0
        ;   Label: core_smiley.cpp_FUN_005a23f0
    PUSH 0x64f152                       ; 005a23f2 | = "..\\core\\smiley.cpp"
    PUSH 0xbf00                         ; 005a23f7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005a23fc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005a2401
    TEST EAX,EAX                        ; 005a2404
    JNZ 0x005a2409                      ; 005a2406
        ;   XREF to: 005a2409 (CONDITIONAL_JUMP)  ; LAB_005a2409
    RET                                 ; 005a2408
    PUSH EAX                            ; 005a2409
        ;   Label: LAB_005a2409
    CALL core_smiley.cpp_CSmiley_ctor_FUN_005a2430 ; 005a240a
        ;   XREF to: 005a2430 (UNCONDITIONAL_CALL)  ; CSmiley * core_smiley.cpp_CSmiley_ctor_FUN_005a2430(CSmiley * this_ptr)
    ADD ESP,0x4                         ; 005a240f
    RET                                 ; 005a2412

