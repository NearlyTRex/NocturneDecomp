; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFunc_FUN_004d16e0(void)
;
;
; XREF[1]:
;   core_frankgen.cpp_staticInit_FUN_004d16b0 at 004d16bc
;
; Referenced Globals:
;   TerminatedCString s_core_frankgen_cpp_0062a8da
;
; Called Functions:
;   core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004d1720
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x75                           ; 004d16e0
        ;   Label: core_frankgen.cpp_factoryFunc_FUN_004d16e0
    PUSH 0x62a8da                       ; 004d16e2 | = "..\\core\\frankgen.cpp"
    PUSH 0x49c                          ; 004d16e7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004d16ec
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004d16f1
    TEST EAX,EAX                        ; 004d16f4
    JNZ 0x004d16f9                      ; 004d16f6
        ;   XREF to: 004d16f9 (CONDITIONAL_JUMP)  ; LAB_004d16f9
    RET                                 ; 004d16f8
    PUSH EAX                            ; 004d16f9
        ;   Label: LAB_004d16f9
    CALL core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004d1720 ; 004d16fa
        ;   XREF to: 004d1720 (UNCONDITIONAL_CALL)  ; CFrankenstienMachine * core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004d1720(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004d16ff
    RET                                 ; 004d1702

