; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CConveyor * core_conveyor.cpp_factoryFunc_FUN_00441c60(void)
;
;
; XREF[1]:
;   core_conveyor.cpp_staticInit_FUN_00441c30 at 00441c3c
;
; Referenced Globals:
;   TerminatedCString s_core_conveyor_cpp_00618e25
;
; Called Functions:
;   core_conveyor.cpp_CConveyor_ctor_FUN_00441ca0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x23                           ; 00441c60
        ;   Label: core_conveyor.cpp_factoryFunc_FUN_00441c60
    PUSH 0x618e25                       ; 00441c62 | = "..\\core\\conveyor.cpp"
    PUSH 0x860                          ; 00441c67
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00441c6c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00441c71
    TEST EAX,EAX                        ; 00441c74
    JNZ 0x00441c79                      ; 00441c76
        ;   XREF to: 00441c79 (CONDITIONAL_JUMP)  ; LAB_00441c79
    RET                                 ; 00441c78
    PUSH EAX                            ; 00441c79
        ;   Label: LAB_00441c79
    CALL core_conveyor.cpp_CConveyor_ctor_FUN_00441ca0 ; 00441c7a
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CConveyor * core_conveyor.cpp_CConveyor_ctor_FUN_00441ca0(CConveyor * this_ptr)
    ADD ESP,0x4                         ; 00441c7f
    RET                                 ; 00441c82

