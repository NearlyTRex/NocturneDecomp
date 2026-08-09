; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrate * __cdecl core_crate_cpp_factoryFuncCrate_FUN_00448490(void)
;
;
; XREF[1]:
;   core_crate.cpp_staticInit_FUN_00448460 at 0044846c
;
; Referenced Globals:
;   TerminatedCString s_core_crate_cpp_00619ae1
;
; Called Functions:
;   core_crate.cpp_CCrate_ctor_FUN_004484d0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x1f                           ; 00448490
        ;   Label: core_crate.cpp_factoryFuncCrate_FUN_00448490
    PUSH 0x619ae1                       ; 00448492 | = "..\\core\\crate.cpp"
    PUSH 0x2fc                          ; 00448497
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 0044849c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004484a1
    TEST EAX,EAX                        ; 004484a4
    JNZ 0x004484a9                      ; 004484a6
        ;   XREF to: 004484a9 (CONDITIONAL_JUMP)  ; LAB_004484a9
    RET                                 ; 004484a8
    PUSH EAX                            ; 004484a9
        ;   Label: LAB_004484a9
    CALL core_crate.cpp_CCrate_ctor_FUN_004484d0 ; 004484aa
        ;   XREF to: 004484d0 (UNCONDITIONAL_CALL)  ; CCrate * core_crate.cpp_CCrate_ctor_FUN_004484d0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 004484af
    RET                                 ; 004484b2

