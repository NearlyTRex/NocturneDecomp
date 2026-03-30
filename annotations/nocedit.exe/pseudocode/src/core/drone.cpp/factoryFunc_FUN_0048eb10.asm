; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrone * __cdecl core_drone_cpp_factoryFunc_FUN_0048eb10(void)
;
;
; XREF[1]:
;   core_drone.cpp_staticInit_FUN_0048eae0 at 0048eaec
;
; Referenced Globals:
;   TerminatedCString s_core_drone_cpp_0062235b
;
; Called Functions:
;   core_drone.cpp_CDrone_ctor_FUN_0048eb50
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x38                           ; 0048eb10
        ;   Label: core_drone.cpp_factoryFunc_FUN_0048eb10
    PUSH 0x62235b                       ; 0048eb12 | = "..\\core\\drone.cpp"
    PUSH 0xbed4                         ; 0048eb17
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 0048eb1c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0048eb21
    TEST EAX,EAX                        ; 0048eb24
    JNZ 0x0048eb29                      ; 0048eb26
        ;   XREF to: 0048eb29 (CONDITIONAL_JUMP)  ; LAB_0048eb29
    RET                                 ; 0048eb28
    PUSH EAX                            ; 0048eb29
        ;   Label: LAB_0048eb29
    CALL core_drone.cpp_CDrone_ctor_FUN_0048eb50 ; 0048eb2a
        ;   XREF to: 0048eb50 (UNCONDITIONAL_CALL)  ; CDrone * core_drone.cpp_CDrone_ctor_FUN_0048eb50(CDrone * this_ptr)
    ADD ESP,0x4                         ; 0048eb2f
    RET                                 ; 0048eb32

