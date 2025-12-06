; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_scat.cpp_FUN_00556e90()
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
        ;   Label: core_scat.cpp_FUN_00556e90
    PUSH 0x641200                       ; 00556e95 | = "..\\core\\scat.cpp" | s_core_scat_cpp_00641200 = ..\core\scat.cpp
    PUSH 0x1fc00                        ; 00556e9a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00556e9f | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00556ea4
    TEST EAX,EAX                        ; 00556ea7
    JNZ 0x00556eac                      ; 00556ea9 | LAB_00556eac
        ;   XREF to: 00556eac (CONDITIONAL_JUMP)
    RET                                 ; 00556eab
    PUSH EAX                            ; 00556eac
        ;   Label: LAB_00556eac
    CALL core_scat.cpp_CScat_ctor_FUN_00556ed0 ; 00556ead | CScat * core_scat.cpp_CScat_ctor_FUN_00556ed0(CScat * this_ptr)
        ;   XREF to: 00556ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00556eb2
    RET                                 ; 00556eb5

