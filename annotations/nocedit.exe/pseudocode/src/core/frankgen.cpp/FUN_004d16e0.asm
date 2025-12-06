; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_frankgen.cpp_FUN_004d16e0()
;
;
; XREF[1]:
;   core_frankgen.cpp_staticInit_FUN_004d16b0 at 004d16bc
;
; Referenced Globals:
;   TerminatedCString s_core_frankgen_cpp_0062a8da
;
; Called Functions:
;   core_frankgen.cpp_FUN_004d1720
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x75                           ; 004d16e0
        ;   Label: core_frankgen.cpp_FUN_004d16e0
    PUSH 0x62a8da                       ; 004d16e2 | = "..\\core\\frankgen.cpp" | s_core_frankgen_cpp_0062a8da = ..\core\frankgen.cpp
    PUSH 0x49c                          ; 004d16e7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004d16ec | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004d16f1
    TEST EAX,EAX                        ; 004d16f4
    JNZ 0x004d16f9                      ; 004d16f6 | LAB_004d16f9
        ;   XREF to: 004d16f9 (CONDITIONAL_JUMP)
    RET                                 ; 004d16f8
    PUSH EAX                            ; 004d16f9
        ;   Label: LAB_004d16f9
    CALL core_frankgen.cpp_FUN_004d1720 ; 004d16fa | CFrankenstienMachine * core_frankgen.cpp_FUN_004d1720(CFrankenstienMachine * this_ptr)
        ;   XREF to: 004d1720 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d16ff
    RET                                 ; 004d1702

