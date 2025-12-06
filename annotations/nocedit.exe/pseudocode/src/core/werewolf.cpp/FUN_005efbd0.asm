; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_werewolf.cpp_FUN_005efbd0()
;
;
; XREF[1]:
;   core_werewolf.cpp_staticInit_FUN_005efb70 at 005efb92
;
; Referenced Globals:
;   TerminatedCString s_core_werewolf_cpp_00657c3e
;
; Called Functions:
;   core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x59                           ; 005efbd0
        ;   Label: core_werewolf.cpp_FUN_005efbd0
    PUSH 0x657c3e                       ; 005efbd2 | = "..\\core\\werewolf.cpp" | s_core_werewolf_cpp_00657c3e = ..\core\werewolf.cpp
    PUSH 0xbf04                         ; 005efbd7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005efbdc | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005efbe1
    TEST EAX,EAX                        ; 005efbe4
    JNZ 0x005efbe9                      ; 005efbe6 | LAB_005efbe9
        ;   XREF to: 005efbe9 (CONDITIONAL_JUMP)
    RET                                 ; 005efbe8
    PUSH EAX                            ; 005efbe9
        ;   Label: LAB_005efbe9
    CALL core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10 ; 005efbea | CWerewolf * core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf * this_ptr)
        ;   XREF to: 005efc10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005efbef
    RET                                 ; 005efbf2

