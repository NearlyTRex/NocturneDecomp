; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShovel * __cdecl core_shovel_cpp_factoryFunc_FUN_00588b60(void)
;
;
; XREF[1]:
;   core_shovel.cpp_staticInit_FUN_00588b30 at 00588b3c
;
; Referenced Globals:
;   TerminatedCString s_core_shovel_cpp_00649b87
;
; Called Functions:
;   core_shovel.cpp_CShovel_ctor_FUN_00588ba0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x20                           ; 00588b60
        ;   Label: core_shovel.cpp_factoryFunc_FUN_00588b60
    PUSH 0x649b87                       ; 00588b62 | = "..\\core\\shovel.cpp"
    PUSH 0x578                          ; 00588b67
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00588b6c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00588b71
    TEST EAX,EAX                        ; 00588b74
    JNZ 0x00588b79                      ; 00588b76
        ;   XREF to: 00588b79 (CONDITIONAL_JUMP)  ; LAB_00588b79
    RET                                 ; 00588b78
    PUSH EAX                            ; 00588b79
        ;   Label: LAB_00588b79
    CALL core_shovel.cpp_CShovel_ctor_FUN_00588ba0 ; 00588b7a
        ;   XREF to: 00588ba0 (UNCONDITIONAL_CALL)  ; CShovel * core_shovel.cpp_CShovel_ctor_FUN_00588ba0(CShovel * this_ptr)
    ADD ESP,0x4                         ; 00588b7f
    RET                                 ; 00588b82

