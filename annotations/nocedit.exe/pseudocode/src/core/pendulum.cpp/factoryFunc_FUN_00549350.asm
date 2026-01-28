; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPendulum * __cdecl core_pendulum_cpp_factoryFunc_FUN_00549350(void)
;
;
; XREF[1]:
;   core_pendulum.cpp_staticInit_FUN_00549320 at 0054932c
;
; Referenced Globals:
;   TerminatedCString s_core_pendulum_cpp_0063ec5b
;
; Called Functions:
;   core_pendulum.cpp_CPendulum_ctor_FUN_00549390
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2b                           ; 00549350
        ;   Label: core_pendulum.cpp_factoryFunc_FUN_00549350
    PUSH 0x63ec5b                       ; 00549352 | = "..\\core\\pendulum.cpp"
    PUSH 0x444                          ; 00549357
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0054935c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00549361
    TEST EAX,EAX                        ; 00549364
    JNZ 0x00549369                      ; 00549366
        ;   XREF to: 00549369 (CONDITIONAL_JUMP)  ; LAB_00549369
    RET                                 ; 00549368
    PUSH EAX                            ; 00549369
        ;   Label: LAB_00549369
    CALL core_pendulum.cpp_CPendulum_ctor_FUN_00549390 ; 0054936a
        ;   XREF to: 00549390 (UNCONDITIONAL_CALL)  ; CPendulum * core_pendulum.cpp_CPendulum_ctor_FUN_00549390(CPendulum * this_ptr)
    ADD ESP,0x4                         ; 0054936f
    RET                                 ; 00549372

