; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_minecar.cpp_FUN_00520e50()
;
;
; XREF[1]:
;   core_minecar.cpp_staticInit_FUN_00520e20 at 00520e2c
;
; Referenced Globals:
;   TerminatedCString s_core_minecar_cpp_00638961
;   CDemonActor_vtable PTR_core_minecar.cpp_FUN_006615d4
;
; Called Functions:
;   core_platfrm.cpp_FUN_0054c850
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x39                           ; 00520e50
        ;   Label: core_minecar.cpp_FUN_00520e50
    PUSH 0x638961                       ; 00520e52 | = "..\\core\\minecar.cpp" | s_core_minecar_cpp_00638961 = ..\core\minecar.cpp
    PUSH 0x730                          ; 00520e57
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00520e5c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00520e61
    TEST EAX,EAX                        ; 00520e64
    JNZ 0x00520e69                      ; 00520e66 | LAB_00520e69
        ;   XREF to: 00520e69 (CONDITIONAL_JUMP)
    RET                                 ; 00520e68
    PUSH EAX                            ; 00520e69
        ;   Label: LAB_00520e69
    CALL core_platfrm.cpp_FUN_0054c850  ; 00520e6a | CPlatform * core_platfrm.cpp_FUN_0054c850(CPlatform * this_ptr)
        ;   XREF to: 0054c850 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00520e6f
    MOV dword ptr [EAX + 0x154],0x6615d4 ; 00520e72 | CDemonActor_vtable PTR_core_minecar.cpp_FUN_006615d4
    RET                                 ; 00520e7c

