; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_flame_cpp_factoryFuncFlame_FUN_004c9a60(void)
;
;
; XREF[1]:
;   core_flame.cpp_staticInit_FUN_004c9a30 at 004c9a3c
;
; Referenced Globals:
;   TerminatedCString s_core_flame_cpp_0062a0dd
;
; Called Functions:
;   core_flame.cpp_CFlame_ctor_FUN_004c9aa0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x75                           ; 004c9a60
        ;   Label: core_flame.cpp_factoryFuncFlame_FUN_004c9a60
    PUSH 0x62a0dd                       ; 004c9a62 | = "..\\core\\flame.cpp"
    PUSH 0x2a4                          ; 004c9a67
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 004c9a6c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004c9a71
    TEST EAX,EAX                        ; 004c9a74
    JNZ 0x004c9a79                      ; 004c9a76
        ;   XREF to: 004c9a79 (CONDITIONAL_JUMP)  ; LAB_004c9a79
    RET                                 ; 004c9a78
    PUSH EAX                            ; 004c9a79
        ;   Label: LAB_004c9a79
    CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0 ; 004c9a7a
        ;   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004c9aa0(CFlame * this_ptr)
    ADD ESP,0x4                         ; 004c9a7f
    RET                                 ; 004c9a82

