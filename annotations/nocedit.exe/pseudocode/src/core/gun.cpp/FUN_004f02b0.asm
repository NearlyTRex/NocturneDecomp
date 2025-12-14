; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gun.cpp_FUN_004f02b0()
;
;
; XREF[1]:
;   core_gun.cpp_staticInit_FUN_004f0280 at 004f028c
;
; Referenced Globals:
;   TerminatedCString s_core_gun_cpp_0062e788
;
; Called Functions:
;   core_gun.cpp_FUN_004f02f0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x29                           ; 004f02b0
        ;   Label: core_gun.cpp_FUN_004f02b0
    PUSH 0x62e788                       ; 004f02b2 | = "..\\core\\gun.cpp"
    PUSH 0x578                          ; 004f02b7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004f02bc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004f02c1
    TEST EAX,EAX                        ; 004f02c4
    JNZ 0x004f02c9                      ; 004f02c6
        ;   XREF to: 004f02c9 (CONDITIONAL_JUMP)  ; LAB_004f02c9
    RET                                 ; 004f02c8
    PUSH EAX                            ; 004f02c9
        ;   Label: LAB_004f02c9
    CALL core_gun.cpp_FUN_004f02f0      ; 004f02ca
        ;   XREF to: 004f02f0 (UNCONDITIONAL_CALL)  ; CGun * core_gun.cpp_FUN_004f02f0(CGun * this_ptr)
    ADD ESP,0x4                         ; 004f02cf
    RET                                 ; 004f02d2

