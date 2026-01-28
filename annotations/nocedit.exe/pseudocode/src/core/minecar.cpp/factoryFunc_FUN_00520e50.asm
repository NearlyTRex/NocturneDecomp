; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMineCar * __cdecl core_minecar_cpp_factoryFunc_FUN_00520e50(void)
;
;
; XREF[1]:
;   core_minecar.cpp_staticInit_FUN_00520e20 at 00520e2c
;
; Referenced Globals:
;   TerminatedCString s_core_minecar_cpp_00638961
;   CDemonActor_vtable g_CMinecarVTable
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_ctor_FUN_0054c850
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x39                           ; 00520e50
        ;   Label: core_minecar.cpp_factoryFunc_FUN_00520e50
    PUSH 0x638961                       ; 00520e52 | = "..\\core\\minecar.cpp"
    PUSH 0x730                          ; 00520e57
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00520e5c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00520e61
    TEST EAX,EAX                        ; 00520e64
    JNZ 0x00520e69                      ; 00520e66
        ;   XREF to: 00520e69 (CONDITIONAL_JUMP)  ; LAB_00520e69
    RET                                 ; 00520e68
    PUSH EAX                            ; 00520e69
        ;   Label: LAB_00520e69
    CALL core_platfrm.cpp_CPlatform_ctor_FUN_0054c850 ; 00520e6a
        ;   XREF to: 0054c850 (UNCONDITIONAL_CALL)  ; CPlatform * core_platfrm.cpp_CPlatform_ctor_FUN_0054c850(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00520e6f
    MOV dword ptr [EAX + 0x154],0x6615d4 ; 00520e72 | g_CMinecarVTable
    RET                                 ; 00520e7c

