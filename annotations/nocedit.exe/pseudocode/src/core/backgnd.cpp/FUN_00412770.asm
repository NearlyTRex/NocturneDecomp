; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_backgnd.cpp_FUN_00412770()
;
;
; XREF[1]:
;   core_backgnd.cpp_staticInit_FUN_00412740 at 0041274c
;
; Referenced Globals:
;   TerminatedCString s_core_backgnd_cpp_00614e3f
;
; Called Functions:
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x26                           ; 00412770
        ;   Label: core_backgnd.cpp_FUN_00412770
    PUSH 0x614e3f                       ; 00412772 | = "..\\core\\backgnd.cpp" | s_core_backgnd_cpp_00614e3f = ..\core\backgnd.cpp
    PUSH 0x2dc                          ; 00412777
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0041277c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00412781
    TEST EAX,EAX                        ; 00412784
    JNZ 0x00412789                      ; 00412786 | LAB_00412789
        ;   XREF to: 00412789 (CONDITIONAL_JUMP)
    RET                                 ; 00412788
    PUSH EAX                            ; 00412789
        ;   Label: LAB_00412789
    CALL core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0 ; 0041278a | CBackgroundActor * core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor * this_ptr)
        ;   XREF to: 004127b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041278f
    RET                                 ; 00412792

