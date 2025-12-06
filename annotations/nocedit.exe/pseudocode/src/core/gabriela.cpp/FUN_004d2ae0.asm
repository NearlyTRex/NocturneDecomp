; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gabriela.cpp_FUN_004d2ae0()
;
;
; XREF[1]:
;   core_gabriela.cpp_staticInit_FUN_004d2910 at 004d29ad
;
; Referenced Globals:
;   TerminatedCString s_core_gabriela_cpp_0062acb5
;
; Called Functions:
;   core_gabriela.cpp_constructorMaybe_FUN_004d2b20
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0xf0                           ; 004d2ae0
        ;   Label: core_gabriela.cpp_FUN_004d2ae0
    PUSH 0x62acb5                       ; 004d2ae5 | = "..\\core\\gabriela.cpp" | s_core_gabriela_cpp_0062acb5 = ..\core\gabriela.cpp
    PUSH 0x5fa88                        ; 004d2aea
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004d2aef | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004d2af4
    TEST EAX,EAX                        ; 004d2af7
    JNZ 0x004d2afc                      ; 004d2af9 | LAB_004d2afc
        ;   XREF to: 004d2afc (CONDITIONAL_JUMP)
    RET                                 ; 004d2afb
    PUSH EAX                            ; 004d2afc
        ;   Label: LAB_004d2afc
    CALL core_gabriela.cpp_constructorMaybe_FUN_004d2b20 ; 004d2afd | CGabriella * core_gabriela.cpp_constructorMaybe_FUN_004d2b20(CGabriella * this_ptr)
        ;   XREF to: 004d2b20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d2b02
    RET                                 ; 004d2b05

