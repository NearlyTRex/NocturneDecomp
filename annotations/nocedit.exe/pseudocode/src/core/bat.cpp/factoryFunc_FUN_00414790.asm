; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_factoryFunc_FUN_00414790(void)
;
;
; XREF[1]:
;   core_bat.cpp_staticInit_FUN_004146c0 at 004146cc
;
; Referenced Globals:
;   TerminatedCString s_core_bat_cpp_006152cb
;
; Called Functions:
;   core_bat.cpp_CBat_ctor_FUN_004147d0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x5c                           ; 00414790
        ;   Label: core_bat.cpp_factoryFunc_FUN_00414790
    PUSH 0x6152cb                       ; 00414792 | = "..\\core\\bat.cpp"
    PUSH 0x388                          ; 00414797
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0041479c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004147a1
    TEST EAX,EAX                        ; 004147a4
    JNZ 0x004147a9                      ; 004147a6
        ;   XREF to: 004147a9 (CONDITIONAL_JUMP)  ; LAB_004147a9
    RET                                 ; 004147a8
    PUSH EAX                            ; 004147a9
        ;   Label: LAB_004147a9
    CALL core_bat.cpp_CBat_ctor_FUN_004147d0 ; 004147aa
        ;   XREF to: 004147d0 (UNCONDITIONAL_CALL)  ; CBat * core_bat.cpp_CBat_ctor_FUN_004147d0(CBat * this_ptr)
    ADD ESP,0x4                         ; 004147af
    RET                                 ; 004147b2

