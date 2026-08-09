; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_00545af0(void)
;
;
; XREF[1]:
;   core_passngr.cpp_staticInit_FUN_00545ac0 at 00545acc
;
; Referenced Globals:
;   TerminatedCString s_core_passngr_cpp_0063e770
;
; Called Functions:
;   core_passngr.cpp_CPassenger_ctor_FUN_00545b30
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x43                           ; 00545af0
        ;   Label: core_passngr.cpp_factoryFuncPassenger_FUN_00545af0
    PUSH 0x63e770                       ; 00545af2 | = "..\\core\\passngr.cpp"
    PUSH 0x20448                        ; 00545af7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 00545afc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00545b01
    TEST EAX,EAX                        ; 00545b04
    JNZ 0x00545b09                      ; 00545b06
        ;   XREF to: 00545b09 (CONDITIONAL_JUMP)  ; LAB_00545b09
    RET                                 ; 00545b08
    PUSH EAX                            ; 00545b09
        ;   Label: LAB_00545b09
    CALL core_passngr.cpp_CPassenger_ctor_FUN_00545b30 ; 00545b0a
        ;   XREF to: 00545b30 (UNCONDITIONAL_CALL)  ; CPassenger * core_passngr.cpp_CPassenger_ctor_FUN_00545b30(CPassenger * this_ptr)
    ADD ESP,0x4                         ; 00545b0f
    RET                                 ; 00545b12

