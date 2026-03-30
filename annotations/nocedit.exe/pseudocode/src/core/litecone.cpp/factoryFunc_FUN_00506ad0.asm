; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_factoryFunc_FUN_00506ad0(void)
;
;
; XREF[1]:
;   core_litecone.cpp_staticInit_FUN_00506aa0 at 00506aac
;
; Referenced Globals:
;   TerminatedCString s_core_litecone_cpp_00631541
;
; Called Functions:
;   core_litecone.cpp_CLightCone_ctor_FUN_00506b10
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x26                           ; 00506ad0
        ;   Label: core_litecone.cpp_factoryFunc_FUN_00506ad0
    PUSH 0x631541                       ; 00506ad2 | = "..\\core\\litecone.cpp"
    PUSH 0x22c                          ; 00506ad7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 00506adc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00506ae1
    TEST EAX,EAX                        ; 00506ae4
    JNZ 0x00506ae9                      ; 00506ae6
        ;   XREF to: 00506ae9 (CONDITIONAL_JUMP)  ; LAB_00506ae9
    RET                                 ; 00506ae8
    PUSH EAX                            ; 00506ae9
        ;   Label: LAB_00506ae9
    CALL core_litecone.cpp_CLightCone_ctor_FUN_00506b10 ; 00506aea
        ;   XREF to: 00506b10 (UNCONDITIONAL_CALL)  ; CLightCone * core_litecone.cpp_CLightCone_ctor_FUN_00506b10(CLightCone * this_ptr)
    ADD ESP,0x4                         ; 00506aef
    RET                                 ; 00506af2

