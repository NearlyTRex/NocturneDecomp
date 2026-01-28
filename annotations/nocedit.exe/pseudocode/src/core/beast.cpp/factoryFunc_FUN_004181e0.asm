; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBeast * __cdecl core_beast_cpp_factoryFunc_FUN_004181e0(void)
;
;
; XREF[1]:
;   core_beast.cpp_staticInit_FUN_004181b0 at 004181bc
;
; Referenced Globals:
;   TerminatedCString s_core_beast_cpp_00615a5c
;
; Called Functions:
;   core_beast.cpp_CBeast_ctor_FUN_00418220
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2d                           ; 004181e0
        ;   Label: core_beast.cpp_factoryFunc_FUN_004181e0
    PUSH 0x615a5c                       ; 004181e2 | = "..\\core\\beast.cpp"
    PUSH 0xbebc                         ; 004181e7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004181ec
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004181f1
    TEST EAX,EAX                        ; 004181f4
    JNZ 0x004181f9                      ; 004181f6
        ;   XREF to: 004181f9 (CONDITIONAL_JUMP)  ; LAB_004181f9
    RET                                 ; 004181f8
    PUSH EAX                            ; 004181f9
        ;   Label: LAB_004181f9
    CALL core_beast.cpp_CBeast_ctor_FUN_00418220 ; 004181fa
        ;   XREF to: 00418220 (UNCONDITIONAL_CALL)  ; CBeast * core_beast.cpp_CBeast_ctor_FUN_00418220(CBeast * this_ptr)
    ADD ESP,0x4                         ; 004181ff
    RET                                 ; 00418202

