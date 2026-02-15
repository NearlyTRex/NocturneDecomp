; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlashlight * __cdecl core_flashlit_cpp_factoryFunc_FUN_004cbb80(void)
;
;
; XREF[1]:
;   core_flashlit.cpp_staticInit_FUN_004cbb50 at 004cbb5c
;
; Referenced Globals:
;   TerminatedCString s_core_flashlit_cpp_0062a3b4
;
; Called Functions:
;   core_flashlit.cpp_CFlashlight_ctor_FUN_004cbbc0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2b                           ; 004cbb80
        ;   Label: core_flashlit.cpp_factoryFunc_FUN_004cbb80
    PUSH 0x62a3b4                       ; 004cbb82 | = "..\\core\\flashlit.cpp"
    PUSH 0x578                          ; 004cbb87
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004cbb8c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004cbb91
    TEST EAX,EAX                        ; 004cbb94
    JNZ 0x004cbb99                      ; 004cbb96
        ;   XREF to: 004cbb99 (CONDITIONAL_JUMP)  ; LAB_004cbb99
    RET                                 ; 004cbb98
    PUSH EAX                            ; 004cbb99
        ;   Label: LAB_004cbb99
    CALL core_flashlit.cpp_CFlashlight_ctor_FUN_004cbbc0 ; 004cbb9a
        ;   XREF to: 004cbbc0 (UNCONDITIONAL_CALL)  ; CFlashlight * core_flashlit.cpp_CFlashlight_ctor_FUN_004cbbc0(CFlashlight * this_ptr)
    ADD ESP,0x4                         ; 004cbb9f
    RET                                 ; 004cbba2

