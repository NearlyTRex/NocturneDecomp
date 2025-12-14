; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_simbox.cpp_CSimBox_FUN_00588d00(CSimBox * this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_simbox.cpp_staticInit_FUN_00588cd0 at 00588cdc
;
; Referenced Globals:
;   TerminatedCString s_core_simbox_cpp_00649bda
;
; Called Functions:
;   core_simbox.cpp_CSimBox_ctor_FUN_00588d40
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x22                           ; 00588d00
        ;   Label: core_simbox.cpp_CSimBox_FUN_00588d00
    PUSH 0x649bda                       ; 00588d02 | = "..\\core\\simbox.cpp"
    PUSH 0x5cc                          ; 00588d07
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00588d0c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00588d11
    TEST EAX,EAX                        ; 00588d14
    JNZ 0x00588d19                      ; 00588d16
        ;   XREF to: 00588d19 (CONDITIONAL_JUMP)  ; LAB_00588d19
    RET                                 ; 00588d18
    PUSH EAX                            ; 00588d19
        ;   Label: LAB_00588d19
    CALL core_simbox.cpp_CSimBox_ctor_FUN_00588d40 ; 00588d1a
        ;   XREF to: 00588d40 (UNCONDITIONAL_CALL)  ; CSimBox * core_simbox.cpp_CSimBox_ctor_FUN_00588d40(CSimBox * this_ptr)
    ADD ESP,0x4                         ; 00588d1f
    RET                                 ; 00588d22

