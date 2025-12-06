; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hpriest.cpp_FUN_004f7b30()
;
;
; XREF[1]:
;   core_hpriest.cpp_staticInit_FUN_004f7b00 at 004f7b0c
;
; Referenced Globals:
;   TerminatedCString s_core_hpriest_cpp_0062f549
;
; Called Functions:
;   core_hpriest.cpp_FUN_004f7b70
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x1d                           ; 004f7b30
        ;   Label: core_hpriest.cpp_FUN_004f7b30
    PUSH 0x62f549                       ; 004f7b32 | = "..\\core\\hpriest.cpp" | s_core_hpriest_cpp_0062f549 = ..\core\hpriest.cpp
    PUSH 0x1f76c                        ; 004f7b37
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004f7b3c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7b41
    TEST EAX,EAX                        ; 004f7b44
    JNZ 0x004f7b49                      ; 004f7b46 | LAB_004f7b49
        ;   XREF to: 004f7b49 (CONDITIONAL_JUMP)
    RET                                 ; 004f7b48
    PUSH EAX                            ; 004f7b49
        ;   Label: LAB_004f7b49
    CALL core_hpriest.cpp_FUN_004f7b70  ; 004f7b4a | CHighPriestOfGardath * core_hpriest.cpp_FUN_004f7b70(CHighPriestOfGardath * this_ptr)
        ;   XREF to: 004f7b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f7b4f
    RET                                 ; 004f7b52

