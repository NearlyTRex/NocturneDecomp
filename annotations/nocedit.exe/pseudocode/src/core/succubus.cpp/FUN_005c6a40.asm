; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_succubus.cpp_FUN_005c6a40()
;
;
; XREF[1]:
;   core_succubus.cpp_staticInit_FUN_005c6a10 at 005c6a1c
;
; Referenced Globals:
;   TerminatedCString s_core_succubus_cpp_00653fc3
;
; Called Functions:
;   core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x4b                           ; 005c6a40
        ;   Label: core_succubus.cpp_FUN_005c6a40
    PUSH 0x653fc3                       ; 005c6a42 | = "..\\core\\succubus.cpp" | s_core_succubus_cpp_00653fc3 = ..\core\succubus.cpp
    PUSH 0xef68                         ; 005c6a47
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005c6a4c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c6a51
    TEST EAX,EAX                        ; 005c6a54
    JNZ 0x005c6a59                      ; 005c6a56 | LAB_005c6a59
        ;   XREF to: 005c6a59 (CONDITIONAL_JUMP)
    RET                                 ; 005c6a58
    PUSH EAX                            ; 005c6a59
        ;   Label: LAB_005c6a59
    CALL core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80 ; 005c6a5a | CSuccubus * core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus * this_ptr)
        ;   XREF to: 005c6a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c6a5f
    RET                                 ; 005c6a62

