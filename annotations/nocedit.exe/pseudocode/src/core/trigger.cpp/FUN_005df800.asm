; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_trigger.cpp_FUN_005df800()
;
;
; XREF[1]:
;   core_trigger.cpp_staticInit_FUN_005df7d0 at 005df7dc
;
; Referenced Globals:
;   TerminatedCString s_core_trigger_cpp_006555e5
;
; Called Functions:
;   core_trigger.cpp_CTrigger_ctor_FUN_005df840
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x35                           ; 005df800
        ;   Label: core_trigger.cpp_FUN_005df800
    PUSH 0x6555e5                       ; 005df802 | = "..\\core\\trigger.cpp" | s_core_trigger_cpp_006555e5 = ..\core\trigger.cpp
    PUSH 0x370                          ; 005df807
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005df80c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005df811
    TEST EAX,EAX                        ; 005df814
    JNZ 0x005df819                      ; 005df816 | LAB_005df819
        ;   XREF to: 005df819 (CONDITIONAL_JUMP)
    RET                                 ; 005df818
    PUSH EAX                            ; 005df819
        ;   Label: LAB_005df819
    CALL core_trigger.cpp_CTrigger_ctor_FUN_005df840 ; 005df81a | CTrigger * core_trigger.cpp_CTrigger_ctor_FUN_005df840(CTrigger * this_ptr)
        ;   XREF to: 005df840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005df81f
    RET                                 ; 005df822

