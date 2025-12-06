; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vampboss.cpp_FUN_005e5550()
;
;
; XREF[1]:
;   core_vampboss.cpp_staticInit_FUN_005e5520 at 005e552c
;
; Referenced Globals:
;   TerminatedCString s_core_vampboss_cpp_00656ab0
;
; Called Functions:
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x60                           ; 005e5550
        ;   Label: core_vampboss.cpp_FUN_005e5550
    PUSH 0x656ab0                       ; 005e5552 | = "..\\core\\vampboss.cpp" | s_core_vampboss_cpp_00656ab0 = ..\core\vampboss.cpp
    PUSH 0xce920                        ; 005e5557
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005e555c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e5561
    TEST EAX,EAX                        ; 005e5564
    JNZ 0x005e5569                      ; 005e5566 | LAB_005e5569
        ;   XREF to: 005e5569 (CONDITIONAL_JUMP)
    RET                                 ; 005e5568
    PUSH EAX                            ; 005e5569
        ;   Label: LAB_005e5569
    CALL core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590 ; 005e556a | CVampireBoss * core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss * this_ptr)
        ;   XREF to: 005e5590 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e556f
    RET                                 ; 005e5572

