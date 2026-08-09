; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWaterActor * __cdecl core_wateract_cpp_factoryFuncWaterActor_FUN_005ea860(void)
;
;
; XREF[1]:
;   core_wateract.cpp_staticInit_FUN_005ea810 at 005ea844
;
; Referenced Globals:
;   TerminatedCString s_core_wateract_cpp_00657253
;
; Called Functions:
;   core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x55                           ; 005ea860
        ;   Label: core_wateract.cpp_factoryFuncWaterActor_FUN_005ea860
    PUSH 0x657253                       ; 005ea862 | = "..\\core\\wateract.cpp"
    PUSH 0x2b238                        ; 005ea867
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 005ea86c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ea871
    TEST EAX,EAX                        ; 005ea874
    JNZ 0x005ea879                      ; 005ea876
        ;   XREF to: 005ea879 (CONDITIONAL_JUMP)  ; LAB_005ea879
    RET                                 ; 005ea878
    PUSH EAX                            ; 005ea879
        ;   Label: LAB_005ea879
    CALL core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0 ; 005ea87a
        ;   XREF to: 005ea8a0 (UNCONDITIONAL_CALL)  ; CWaterActor * core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0(CWaterActor * this_ptr)
    ADD ESP,0x4                         ; 005ea87f
    RET                                 ; 005ea882

