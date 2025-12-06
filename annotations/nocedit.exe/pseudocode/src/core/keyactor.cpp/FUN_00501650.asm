; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_keyactor.cpp_FUN_00501650()
;
;
; XREF[1]:
;   core_keyactor.cpp_staticInit_FUN_00501620 at 0050162c
;
; Referenced Globals:
;   TerminatedCString s_core_keyactor_cpp_00630c1f
;
; Called Functions:
;   core_keyactor.cpp_FUN_00501690
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x24                           ; 00501650
        ;   Label: core_keyactor.cpp_FUN_00501650
    PUSH 0x630c1f                       ; 00501652 | = "..\\core\\keyactor.cpp" | s_core_keyactor_cpp_00630c1f = ..\core\keyactor.cpp
    PUSH 0x31c                          ; 00501657
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0050165c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00501661
    TEST EAX,EAX                        ; 00501664
    JNZ 0x00501669                      ; 00501666 | LAB_00501669
        ;   XREF to: 00501669 (CONDITIONAL_JUMP)
    RET                                 ; 00501668
    PUSH EAX                            ; 00501669
        ;   Label: LAB_00501669
    CALL core_keyactor.cpp_FUN_00501690 ; 0050166a | undefined core_keyactor.cpp_FUN_00501690()
        ;   XREF to: 00501690 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050166f
    RET                                 ; 00501672

