; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMirrorHack * core_manpuz.cpp_CMirrorHack_factoryFunc_FUN_0050b0d0(void)
;
;
; XREF[1]:
;   core_manpuz.cpp_staticInit_FUN_00508890 at 005088bf
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_00635905
;
; Called Functions:
;   core_manpuz.cpp_CMirrorHack_ctor_FUN_0050b110
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x616                          ; 0050b0d0
        ;   Label: core_manpuz.cpp_CMirrorHack_factoryFunc_FUN_0050b0d0
    PUSH 0x635905                       ; 0050b0d5 | = "..\\core\\manpuz.cpp"
    PUSH 0x2d8                          ; 0050b0da
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0050b0df
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050b0e4
    TEST EAX,EAX                        ; 0050b0e7
    JNZ 0x0050b0ec                      ; 0050b0e9
        ;   XREF to: 0050b0ec (CONDITIONAL_JUMP)  ; LAB_0050b0ec
    RET                                 ; 0050b0eb
    PUSH EAX                            ; 0050b0ec
        ;   Label: LAB_0050b0ec
    CALL core_manpuz.cpp_CMirrorHack_ctor_FUN_0050b110 ; 0050b0ed
        ;   XREF to: 0050b110 (UNCONDITIONAL_CALL)  ; CMirrorHack * core_manpuz.cpp_CMirrorHack_ctor_FUN_0050b110(CMirrorHack * this_ptr)
    ADD ESP,0x4                         ; 0050b0f2
    RET                                 ; 0050b0f5

