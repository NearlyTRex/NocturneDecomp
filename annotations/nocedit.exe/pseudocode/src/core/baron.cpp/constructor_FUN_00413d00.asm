; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_baron.cpp_constructor_FUN_00413d00()
;
;
; XREF[1]:
;   core_baron.cpp_FUN_00412b41 at 00412b5c
;
; Referenced Globals:
;   TerminatedCString s_core_baron_cpp_00615099
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2ab                          ; 00413d00
        ;   Label: core_baron.cpp_constructor_FUN_00413d00
    PUSH 0x615099                       ; 00413d05 | = "..\\core\\baron.cpp" | s_core_baron_cpp_00615099 = ..\core\baron.cpp
    PUSH 0x57c                          ; 00413d0a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00413d0f | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00413d14
    TEST EAX,EAX                        ; 00413d17
    JNZ 0x00413d1c                      ; 00413d19 | LAB_00413d1c
        ;   XREF to: 00413d1c (CONDITIONAL_JUMP)
    RET                                 ; 00413d1b
    PUSH EAX                            ; 00413d1c
        ;   Label: LAB_00413d1c
    CALL core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40 ; 00413d1d | CBaronWeapon * core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon * this_ptr)
        ;   XREF to: 00413d40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00413d22
    RET                                 ; 00413d25

