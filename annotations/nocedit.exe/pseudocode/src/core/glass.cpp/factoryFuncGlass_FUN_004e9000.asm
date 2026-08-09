; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004e9000(void)
;
;
; XREF[1]:
;   core_glass.cpp_staticInit_FUN_004e8fd0 at 004e8fdc
;
; Referenced Globals:
;   TerminatedCString s_core_glass_cpp_0062df50
;
; Called Functions:
;   core_glass.cpp_CGlass_ctor_FUN_004e9040
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2c                           ; 004e9000
        ;   Label: core_glass.cpp_factoryFuncGlass_FUN_004e9000
    PUSH 0x62df50                       ; 004e9002 | = "..\\core\\glass.cpp"
    PUSH 0xb40                          ; 004e9007
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 004e900c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004e9011
    TEST EAX,EAX                        ; 004e9014
    JNZ 0x004e9019                      ; 004e9016
        ;   XREF to: 004e9019 (CONDITIONAL_JUMP)  ; LAB_004e9019
    RET                                 ; 004e9018
    PUSH EAX                            ; 004e9019
        ;   Label: LAB_004e9019
    CALL core_glass.cpp_CGlass_ctor_FUN_004e9040 ; 004e901a
        ;   XREF to: 004e9040 (UNCONDITIONAL_CALL)  ; CGlass * core_glass.cpp_CGlass_ctor_FUN_004e9040(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004e901f
    RET                                 ; 004e9022

