; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_emitter.cpp_FUN_004a7c60()
;
;
; XREF[1]:
;   core_emitter.cpp_staticInit_FUN_004a7c30 at 004a7c3c
;
; Referenced Globals:
;   TerminatedCString s_core_emitter_cpp_00624053
;
; Called Functions:
;   core_emitter.cpp_ctor_FUN_004a7ca0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x3a                           ; 004a7c60
        ;   Label: core_emitter.cpp_FUN_004a7c60
    PUSH 0x624053                       ; 004a7c62 | = "..\\core\\emitter.cpp"
    PUSH 0x494                          ; 004a7c67
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004a7c6c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004a7c71
    TEST EAX,EAX                        ; 004a7c74
    JNZ 0x004a7c79                      ; 004a7c76
        ;   XREF to: 004a7c79 (CONDITIONAL_JUMP)  ; LAB_004a7c79
    RET                                 ; 004a7c78
    PUSH EAX                            ; 004a7c79
        ;   Label: LAB_004a7c79
    CALL core_emitter.cpp_ctor_FUN_004a7ca0 ; 004a7c7a
        ;   XREF to: 004a7ca0 (UNCONDITIONAL_CALL)  ; CEmitter * core_emitter.cpp_ctor_FUN_004a7ca0(CEmitter * this_ptr)
    ADD ESP,0x4                         ; 004a7c7f
    RET                                 ; 004a7c82

