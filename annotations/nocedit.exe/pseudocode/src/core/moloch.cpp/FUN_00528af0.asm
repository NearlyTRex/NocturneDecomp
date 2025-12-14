; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_moloch.cpp_FUN_00528af0()
;
;
; XREF[1]:
;   core_moloch.cpp_staticInit_FUN_00528ac0 at 00528acc
;
; Referenced Globals:
;   TerminatedCString s_core_moloch_cpp_00639d35
;
; Called Functions:
;   core_moloch.cpp_CMoloch_ctor_FUN_00528b30
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2e                           ; 00528af0
        ;   Label: core_moloch.cpp_FUN_00528af0
    PUSH 0x639d35                       ; 00528af2 | = "..\\core\\moloch.cpp"
    PUSH 0x22b98                        ; 00528af7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00528afc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00528b01
    TEST EAX,EAX                        ; 00528b04
    JNZ 0x00528b09                      ; 00528b06
        ;   XREF to: 00528b09 (CONDITIONAL_JUMP)  ; LAB_00528b09
    RET                                 ; 00528b08
    PUSH EAX                            ; 00528b09
        ;   Label: LAB_00528b09
    CALL core_moloch.cpp_CMoloch_ctor_FUN_00528b30 ; 00528b0a
        ;   XREF to: 00528b30 (UNCONDITIONAL_CALL)  ; CMoloch * core_moloch.cpp_CMoloch_ctor_FUN_00528b30(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 00528b0f
    RET                                 ; 00528b12

