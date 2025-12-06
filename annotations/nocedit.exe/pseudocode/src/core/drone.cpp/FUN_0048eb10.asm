; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_drone.cpp_FUN_0048eb10()
;
;
; XREF[1]:
;   core_drone.cpp_staticInit_FUN_0048eae0 at 0048eaec
;
; Referenced Globals:
;   TerminatedCString s_core_drone_cpp_0062235b
;
; Called Functions:
;   core_drone.cpp_ctor_FUN_0048eb50
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x38                           ; 0048eb10
        ;   Label: core_drone.cpp_FUN_0048eb10
    PUSH 0x62235b                       ; 0048eb12 | = "..\\core\\drone.cpp" | s_core_drone_cpp_0062235b = ..\core\drone.cpp
    PUSH 0xbed4                         ; 0048eb17
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0048eb1c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048eb21
    TEST EAX,EAX                        ; 0048eb24
    JNZ 0x0048eb29                      ; 0048eb26 | LAB_0048eb29
        ;   XREF to: 0048eb29 (CONDITIONAL_JUMP)
    RET                                 ; 0048eb28
    PUSH EAX                            ; 0048eb29
        ;   Label: LAB_0048eb29
    CALL core_drone.cpp_ctor_FUN_0048eb50 ; 0048eb2a | CDrone * core_drone.cpp_ctor_FUN_0048eb50(CDrone * this_ptr)
        ;   XREF to: 0048eb50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048eb2f
    RET                                 ; 0048eb32

