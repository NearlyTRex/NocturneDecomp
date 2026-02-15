; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameCan * __cdecl core_flamecan_cpp_factoryFunc_FUN_004cb120(void)
;
;
; XREF[1]:
;   core_flamecan.cpp_staticInit_FUN_004cb0f0 at 004cb0fc
;
; Referenced Globals:
;   TerminatedCString s_core_flamecan_cpp_0062a2b2
;
; Called Functions:
;   core_flamecan.cpp_CFlameCan_ctor_FUN_004cb160
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x22                           ; 004cb120
        ;   Label: core_flamecan.cpp_factoryFunc_FUN_004cb120
    PUSH 0x62a2b2                       ; 004cb122 | = "..\\core\\flamecan.cpp"
    PUSH 0x5e8                          ; 004cb127
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004cb12c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004cb131
    TEST EAX,EAX                        ; 004cb134
    JNZ 0x004cb139                      ; 004cb136
        ;   XREF to: 004cb139 (CONDITIONAL_JUMP)  ; LAB_004cb139
    RET                                 ; 004cb138
    PUSH EAX                            ; 004cb139
        ;   Label: LAB_004cb139
    CALL core_flamecan.cpp_CFlameCan_ctor_FUN_004cb160 ; 004cb13a
        ;   XREF to: 004cb160 (UNCONDITIONAL_CALL)  ; CFlameCan * core_flamecan.cpp_CFlameCan_ctor_FUN_004cb160(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004cb13f
    RET                                 ; 004cb142

