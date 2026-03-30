; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrip * __cdecl core_drip_cpp_factoryFunc_FUN_0048dfc0(void)
;
;
; XREF[1]:
;   core_drip.cpp_staticInit_FUN_0048df80 at 0048df8c
;
; Referenced Globals:
;   TerminatedCString s_core_drip_cpp_00622205
;
; Called Functions:
;   core_drip.cpp_CDrip_ctor_FUN_0048e000
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x32                           ; 0048dfc0
        ;   Label: core_drip.cpp_factoryFunc_FUN_0048dfc0
    PUSH 0x622205                       ; 0048dfc2 | = "..\\core\\drip.cpp"
    PUSH 0x33c                          ; 0048dfc7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 0048dfcc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0048dfd1
    TEST EAX,EAX                        ; 0048dfd4
    JNZ 0x0048dfd9                      ; 0048dfd6
        ;   XREF to: 0048dfd9 (CONDITIONAL_JUMP)  ; LAB_0048dfd9
    RET                                 ; 0048dfd8
    PUSH EAX                            ; 0048dfd9
        ;   Label: LAB_0048dfd9
    CALL core_drip.cpp_CDrip_ctor_FUN_0048e000 ; 0048dfda
        ;   XREF to: 0048e000 (UNCONDITIONAL_CALL)  ; CDrip * core_drip.cpp_CDrip_ctor_FUN_0048e000(CDrip * this_ptr)
    ADD ESP,0x4                         ; 0048dfdf
    RET                                 ; 0048dfe2

