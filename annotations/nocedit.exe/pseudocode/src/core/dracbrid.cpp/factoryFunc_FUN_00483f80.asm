; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDraculaBride * __cdecl core_dracbrid_cpp_factoryFunc_FUN_00483f80(void)
;
;
; XREF[1]:
;   core_dracbrid.cpp_staticInit_FUN_00483ef0 at 00483f20
;
; Referenced Globals:
;   TerminatedCString s_core_dracbrid_cpp_00621854
;
; Called Functions:
;   core_dracbrid.cpp_CDraculaBride_ctor_FUN_00483fc0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x78                           ; 00483f80
        ;   Label: core_dracbrid.cpp_factoryFunc_FUN_00483f80
    PUSH 0x621854                       ; 00483f82 | = "..\\core\\dracbrid.cpp"
    PUSH 0xbfec                         ; 00483f87
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00483f8c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00483f91
    TEST EAX,EAX                        ; 00483f94
    JNZ 0x00483f99                      ; 00483f96
        ;   XREF to: 00483f99 (CONDITIONAL_JUMP)  ; LAB_00483f99
    RET                                 ; 00483f98
    PUSH EAX                            ; 00483f99
        ;   Label: LAB_00483f99
    CALL core_dracbrid.cpp_CDraculaBride_ctor_FUN_00483fc0 ; 00483f9a
        ;   XREF to: 00483fc0 (UNCONDITIONAL_CALL)  ; CDraculaBride * core_dracbrid.cpp_CDraculaBride_ctor_FUN_00483fc0(CDraculaBride * this_ptr)
    ADD ESP,0x4                         ; 00483f9f
    RET                                 ; 00483fa2

