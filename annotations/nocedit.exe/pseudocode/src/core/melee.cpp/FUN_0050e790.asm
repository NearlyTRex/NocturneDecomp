; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_melee.cpp_FUN_0050e790()
;
;
; XREF[1]:
;   core_melee.cpp_staticInit_FUN_0050e760 at 0050e76c
;
; Referenced Globals:
;   TerminatedCString s_core_melee_cpp_00635bc4
;
; Called Functions:
;   core_melee.cpp_FUN_0050e7d0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x26                           ; 0050e790
        ;   Label: core_melee.cpp_FUN_0050e790
    PUSH 0x635bc4                       ; 0050e792 | = "..\\core\\melee.cpp" | s_core_melee_cpp_00635bc4 = ..\core\melee.cpp
    PUSH 0x6cc                          ; 0050e797
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0050e79c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050e7a1
    TEST EAX,EAX                        ; 0050e7a4
    JNZ 0x0050e7a9                      ; 0050e7a6 | LAB_0050e7a9
        ;   XREF to: 0050e7a9 (CONDITIONAL_JUMP)
    RET                                 ; 0050e7a8
    PUSH EAX                            ; 0050e7a9
        ;   Label: LAB_0050e7a9
    CALL core_melee.cpp_FUN_0050e7d0    ; 0050e7aa | CMelee * core_melee.cpp_FUN_0050e7d0(CMelee * this_ptr)
        ;   XREF to: 0050e7d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050e7af
    RET                                 ; 0050e7b2

