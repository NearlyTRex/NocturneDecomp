; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_anvil.cpp_constructor_FUN_00411ca0()
;
;
; XREF[1]:
;   core_anvil.cpp_staticInit_FUN_00411c70 at 00411c7c
;
; Referenced Globals:
;   TerminatedCString s_core_anvil_cpp_00614cfa
;
; Called Functions:
;   core_anvil.cpp_CAnvil_ctor_FUN_00411ce0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x20                           ; 00411ca0
        ;   Label: core_anvil.cpp_constructor_FUN_00411ca0
    PUSH 0x614cfa                       ; 00411ca2 | = "..\\core\\anvil.cpp" | s_core_anvil_cpp_00614cfa = ..\core\anvil.cpp
    PUSH 0x344                          ; 00411ca7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00411cac | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00411cb1
    TEST EAX,EAX                        ; 00411cb4
    JNZ 0x00411cb9                      ; 00411cb6 | LAB_00411cb9
        ;   XREF to: 00411cb9 (CONDITIONAL_JUMP)
    RET                                 ; 00411cb8
    PUSH EAX                            ; 00411cb9
        ;   Label: LAB_00411cb9
    CALL core_anvil.cpp_CAnvil_ctor_FUN_00411ce0 ; 00411cba | CAnvil * core_anvil.cpp_CAnvil_ctor_FUN_00411ce0(CAnvil * this_ptr)
        ;   XREF to: 00411ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00411cbf
    RET                                 ; 00411cc2

