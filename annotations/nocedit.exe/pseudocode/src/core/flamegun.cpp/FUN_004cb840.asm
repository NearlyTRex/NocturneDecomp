; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flamegun.cpp_FUN_004cb840()
;
;
; XREF[1]:
;   core_flamegun.cpp_staticInit_FUN_004cb810 at 004cb81c
;
; Referenced Globals:
;   TerminatedCString s_core_flamegun_cpp_0062a379
;
; Called Functions:
;   core_flamegun.cpp_FUN_004cb880
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2a                           ; 004cb840
        ;   Label: core_flamegun.cpp_FUN_004cb840
    PUSH 0x62a379                       ; 004cb842 | = "..\\core\\flamegun.cpp" | s_core_flamegun_cpp_0062a379 = ..\core\flamegun.cpp
    PUSH 0x588                          ; 004cb847
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004cb84c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004cb851
    TEST EAX,EAX                        ; 004cb854
    JNZ 0x004cb859                      ; 004cb856 | LAB_004cb859
        ;   XREF to: 004cb859 (CONDITIONAL_JUMP)
    RET                                 ; 004cb858
    PUSH EAX                            ; 004cb859
        ;   Label: LAB_004cb859
    CALL core_flamegun.cpp_FUN_004cb880 ; 004cb85a | CFlameThrower * core_flamegun.cpp_FUN_004cb880(CFlameThrower * this_ptr)
        ;   XREF to: 004cb880 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cb85f
    RET                                 ; 004cb862

