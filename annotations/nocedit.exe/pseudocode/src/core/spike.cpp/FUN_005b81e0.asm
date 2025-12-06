; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_spike.cpp_FUN_005b81e0()
;
;
; XREF[1]:
;   core_spike.cpp_staticInit_FUN_005b81b0 at 005b81bc
;
; Referenced Globals:
;   TerminatedCString s_core_spike_cpp_00652dcf
;
; Called Functions:
;   core_spike.cpp_CSpike_ctor_FUN_005b8220
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x21                           ; 005b81e0
        ;   Label: core_spike.cpp_FUN_005b81e0
    PUSH 0x652dcf                       ; 005b81e2 | = "..\\core\\spike.cpp" | s_core_spike_cpp_00652dcf = ..\core\spike.cpp
    PUSH 0x560                          ; 005b81e7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005b81ec | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b81f1
    TEST EAX,EAX                        ; 005b81f4
    JNZ 0x005b81f9                      ; 005b81f6 | LAB_005b81f9
        ;   XREF to: 005b81f9 (CONDITIONAL_JUMP)
    RET                                 ; 005b81f8
    PUSH EAX                            ; 005b81f9
        ;   Label: LAB_005b81f9
    CALL core_spike.cpp_CSpike_ctor_FUN_005b8220 ; 005b81fa | CSpike * core_spike.cpp_CSpike_ctor_FUN_005b8220(CSpike * this_ptr)
        ;   XREF to: 005b8220 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b81ff
    RET                                 ; 005b8202

