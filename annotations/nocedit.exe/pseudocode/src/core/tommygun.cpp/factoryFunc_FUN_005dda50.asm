; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTommyGun * __cdecl core_tommygun_cpp_factoryFunc_FUN_005dda50(void)
;
;
; XREF[1]:
;   core_tommygun.cpp_staticInit_FUN_005dda20 at 005dda2c
;
; Referenced Globals:
;   TerminatedCString s_core_tommygun_cpp_0065548b
;
; Called Functions:
;   core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2f                           ; 005dda50
        ;   Label: core_tommygun.cpp_factoryFunc_FUN_005dda50
    PUSH 0x65548b                       ; 005dda52 | = "..\\core\\tommygun.cpp"
    PUSH 0x584                          ; 005dda57
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005dda5c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005dda61
    TEST EAX,EAX                        ; 005dda64
    JNZ 0x005dda69                      ; 005dda66
        ;   XREF to: 005dda69 (CONDITIONAL_JUMP)  ; LAB_005dda69
    RET                                 ; 005dda68
    PUSH EAX                            ; 005dda69
        ;   Label: LAB_005dda69
    CALL core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90 ; 005dda6a
        ;   XREF to: 005dda90 (UNCONDITIONAL_CALL)  ; CTommyGun * core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun * this_ptr)
    ADD ESP,0x4                         ; 005dda6f
    RET                                 ; 005dda72

