; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTurret * __cdecl core_turret_cpp_factoryFunc_FUN_005e20b0(void)
;
;
; XREF[1]:
;   core_turret.cpp_staticInit_FUN_005e2080 at 005e208c
;
; Referenced Globals:
;   TerminatedCString s_core_turret_cpp_006565b0
;
; Called Functions:
;   core_turret.cpp_CTurret_ctor_FUN_005e20f0
;   shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0xa2                           ; 005e20b0
        ;   Label: core_turret.cpp_factoryFunc_FUN_005e20b0
    PUSH 0x6565b0                       ; 005e20b5 | = "..\\core\\turret.cpp"
    PUSH 0x8bc                          ; 005e20ba
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0 ; 005e20bf
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005e20c4
    TEST EAX,EAX                        ; 005e20c7
    JNZ 0x005e20cc                      ; 005e20c9
        ;   XREF to: 005e20cc (CONDITIONAL_JUMP)  ; LAB_005e20cc
    RET                                 ; 005e20cb
    PUSH EAX                            ; 005e20cc
        ;   Label: LAB_005e20cc
    CALL core_turret.cpp_CTurret_ctor_FUN_005e20f0 ; 005e20cd
        ;   XREF to: 005e20f0 (UNCONDITIONAL_CALL)  ; CTurret * core_turret.cpp_CTurret_ctor_FUN_005e20f0(CTurret * this_ptr)
    ADD ESP,0x4                         ; 005e20d2
    RET                                 ; 005e20d5

