; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_crossbow.cpp_FUN_00448c30()
;
;
; XREF[1]:
;   core_crossbow.cpp_staticInit_FUN_00448c00 at 00448c0c
;
; Referenced Globals:
;   TerminatedCString s_core_crossbow_cpp_00619b64
;
; Called Functions:
;   core_crossbow.cpp_FUN_00448c70
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2f                           ; 00448c30
        ;   Label: core_crossbow.cpp_FUN_00448c30
    PUSH 0x619b64                       ; 00448c32 | = "..\\core\\crossbow.cpp" | s_core_crossbow_cpp_00619b64 = ..\core\crossbow.cpp
    PUSH 0x820                          ; 00448c37
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00448c3c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00448c41
    TEST EAX,EAX                        ; 00448c44
    JNZ 0x00448c49                      ; 00448c46 | LAB_00448c49
        ;   XREF to: 00448c49 (CONDITIONAL_JUMP)
    RET                                 ; 00448c48
    PUSH EAX                            ; 00448c49
        ;   Label: LAB_00448c49
    CALL core_crossbow.cpp_FUN_00448c70 ; 00448c4a | CCrossbow * core_crossbow.cpp_FUN_00448c70(CCrossbow * this_ptr)
        ;   XREF to: 00448c70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00448c4f
    RET                                 ; 00448c52

