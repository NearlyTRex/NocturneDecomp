; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gargoyle.cpp_FUN_004e44a0()
;
;
; XREF[1]:
;   core_gargoyle.cpp_staticInit_FUN_004e4470 at 004e447c
;
; Referenced Globals:
;   TerminatedCString s_core_gargoyle_cpp_0062d7c1
;
; Called Functions:
;   core_gargoyle.cpp_FUN_004e44e0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x58                           ; 004e44a0
        ;   Label: core_gargoyle.cpp_FUN_004e44a0
    PUSH 0x62d7c1                       ; 004e44a2 | = "..\\core\\gargoyle.cpp" | s_core_gargoyle_cpp_0062d7c1 = ..\core\gargoyle.cpp
    PUSH 0xbf18                         ; 004e44a7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004e44ac | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e44b1
    TEST EAX,EAX                        ; 004e44b4
    JNZ 0x004e44b9                      ; 004e44b6 | LAB_004e44b9
        ;   XREF to: 004e44b9 (CONDITIONAL_JUMP)
    RET                                 ; 004e44b8
    PUSH EAX                            ; 004e44b9
        ;   Label: LAB_004e44b9
    CALL core_gargoyle.cpp_FUN_004e44e0 ; 004e44ba | CGargoyle * core_gargoyle.cpp_FUN_004e44e0(CGargoyle * this_ptr)
        ;   XREF to: 004e44e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e44bf
    RET                                 ; 004e44c2

