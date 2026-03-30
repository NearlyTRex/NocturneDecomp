; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItem * __cdecl core_health_cpp_factoryFunc_FUN_004f1d90(void)
;
;
; XREF[1]:
;   core_health.cpp_staticInit_FUN_004f1d60 at 004f1d6c
;
; Referenced Globals:
;   TerminatedCString s_core_health_cpp_0062e9dd
;
; Called Functions:
;   core_health.cpp_CHealthItem_ctor_FUN_004f1dd0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x22                           ; 004f1d90
        ;   Label: core_health.cpp_factoryFunc_FUN_004f1d90
    PUSH 0x62e9dd                       ; 004f1d92 | = "..\\core\\health.cpp"
    PUSH 0x2dc                          ; 004f1d97
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 004f1d9c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004f1da1
    TEST EAX,EAX                        ; 004f1da4
    JNZ 0x004f1da9                      ; 004f1da6
        ;   XREF to: 004f1da9 (CONDITIONAL_JUMP)  ; LAB_004f1da9
    RET                                 ; 004f1da8
    PUSH EAX                            ; 004f1da9
        ;   Label: LAB_004f1da9
    CALL core_health.cpp_CHealthItem_ctor_FUN_004f1dd0 ; 004f1daa
        ;   XREF to: 004f1dd0 (UNCONDITIONAL_CALL)  ; CHealthItem * core_health.cpp_CHealthItem_ctor_FUN_004f1dd0(CHealthItem * this_ptr)
    ADD ESP,0x4                         ; 004f1daf
    RET                                 ; 004f1db2

