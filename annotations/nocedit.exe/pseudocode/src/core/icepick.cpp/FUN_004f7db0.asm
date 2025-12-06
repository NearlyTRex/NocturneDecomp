; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_FUN_004f7db0()
;
;
; XREF[1]:
;   core_icepick.cpp_staticInit_FUN_004f7d80 at 004f7d8c
;
; Referenced Globals:
;   TerminatedCString s_core_icepick_cpp_0062f594
;
; Called Functions:
;   core_icepick.cpp_FUN_004f7df0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x66                           ; 004f7db0
        ;   Label: core_icepick.cpp_FUN_004f7db0
    PUSH 0x62f594                       ; 004f7db2 | = "..\\core\\icepick.cpp" | s_core_icepick_cpp_0062f594 = ..\core\icepick.cpp
    PUSH 0x1fc04                        ; 004f7db7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004f7dbc | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7dc1
    TEST EAX,EAX                        ; 004f7dc4
    JNZ 0x004f7dc9                      ; 004f7dc6 | LAB_004f7dc9
        ;   XREF to: 004f7dc9 (CONDITIONAL_JUMP)
    RET                                 ; 004f7dc8
    PUSH EAX                            ; 004f7dc9
        ;   Label: LAB_004f7dc9
    CALL core_icepick.cpp_FUN_004f7df0  ; 004f7dca | CIcePick * core_icepick.cpp_FUN_004f7df0(CIcePick * this_ptr)
        ;   XREF to: 004f7df0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f7dcf
    RET                                 ; 004f7dd2

