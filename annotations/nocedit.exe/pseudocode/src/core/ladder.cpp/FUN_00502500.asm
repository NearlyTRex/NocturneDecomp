; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ladder.cpp_FUN_00502500()
;
;
; XREF[1]:
;   core_ladder.cpp_staticInit_FUN_005024d0 at 005024dc
;
; Referenced Globals:
;   TerminatedCString s_core_ladder_cpp_00630df8
;
; Called Functions:
;   core_ladder.cpp_FUN_00502540
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2d                           ; 00502500
        ;   Label: core_ladder.cpp_FUN_00502500
    PUSH 0x630df8                       ; 00502502 | = "..\\core\\ladder.cpp" | s_core_ladder_cpp_00630df8 = ..\core\ladder.cpp
    PUSH 0x300                          ; 00502507
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0050250c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00502511
    TEST EAX,EAX                        ; 00502514
    JNZ 0x00502519                      ; 00502516 | LAB_00502519
        ;   XREF to: 00502519 (CONDITIONAL_JUMP)
    RET                                 ; 00502518
    PUSH EAX                            ; 00502519
        ;   Label: LAB_00502519
    CALL core_ladder.cpp_FUN_00502540   ; 0050251a | CLadder * core_ladder.cpp_FUN_00502540(CLadder * this_ptr)
        ;   XREF to: 00502540 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050251f
    RET                                 ; 00502522

