; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_005088e0()
;
;
; XREF[1]:
;   core_manpuz.cpp_staticInit_FUN_00508890 at 0050889c
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_0063568e
;
; Called Functions:
;   core_manpuz.cpp_FUN_00508920
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0xeb                           ; 005088e0
        ;   Label: core_manpuz.cpp_FUN_005088e0
    PUSH 0x63568e                       ; 005088e5 | = "..\\core\\manpuz.cpp" | s_core_manpuz_cpp_0063568e = ..\core\manpuz.cpp
    PUSH 0x1514                         ; 005088ea
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005088ef | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005088f4
    TEST EAX,EAX                        ; 005088f7
    JNZ 0x005088fc                      ; 005088f9 | LAB_005088fc
        ;   XREF to: 005088fc (CONDITIONAL_JUMP)
    RET                                 ; 005088fb
    PUSH EAX                            ; 005088fc
        ;   Label: LAB_005088fc
    CALL core_manpuz.cpp_FUN_00508920   ; 005088fd | CMansionPuzzleCircle * core_manpuz.cpp_FUN_00508920(CMansionPuzzleCircle * this_ptr)
        ;   XREF to: 00508920 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00508902
    RET                                 ; 00508905

