; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CScat * core_scat.cpp_factoryFunc_FUN_00556e90(void)
;
;
; XREF[1]:
;   core_scat.cpp_staticInit_FUN_00556e00 at 00556e0c
;
; Referenced Globals:
;   TerminatedCString s_core_scat_cpp_00641200
;
; Called Functions:
;   core_scat.cpp_CScat_ctor_FUN_00556ed0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x87                           ; 00556e90
        ;   Label: core_scat.cpp_factoryFunc_FUN_00556e90
    PUSH 0x641200                       ; 00556e95 | = "..\\core\\scat.cpp"
    PUSH 0x1fc00                        ; 00556e9a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00556e9f
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00556ea4
    TEST EAX,EAX                        ; 00556ea7
    JNZ 0x00556eac                      ; 00556ea9
        ;   XREF to: 00556eac (CONDITIONAL_JUMP)  ; LAB_00556eac
    RET                                 ; 00556eab
    PUSH EAX                            ; 00556eac
        ;   Label: LAB_00556eac
    CALL core_scat.cpp_CScat_ctor_FUN_00556ed0 ; 00556ead
        ;   XREF to: 00556ed0 (UNCONDITIONAL_CALL)  ; CScat * core_scat.cpp_CScat_ctor_FUN_00556ed0(CScat * this_ptr)
    ADD ESP,0x4                         ; 00556eb2
    RET                                 ; 00556eb5

