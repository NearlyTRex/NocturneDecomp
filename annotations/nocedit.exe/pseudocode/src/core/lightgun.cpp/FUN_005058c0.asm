; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_lightgun.cpp_FUN_005058c0()
;
;
; XREF[1]:
;   core_lightgun.cpp_staticInit_FUN_00505890 at 0050589c
;
; Referenced Globals:
;   TerminatedCString s_core_lightgun_cpp_00631440
;
; Called Functions:
;   core_lightgun.cpp_FUN_00505900
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x3a                           ; 005058c0
        ;   Label: core_lightgun.cpp_FUN_005058c0
    PUSH 0x631440                       ; 005058c2 | = "..\\core\\lightgun.cpp"
    PUSH 0x590                          ; 005058c7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005058cc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005058d1
    TEST EAX,EAX                        ; 005058d4
    JNZ 0x005058d9                      ; 005058d6
        ;   XREF to: 005058d9 (CONDITIONAL_JUMP)  ; LAB_005058d9
    RET                                 ; 005058d8
    PUSH EAX                            ; 005058d9
        ;   Label: LAB_005058d9
    CALL core_lightgun.cpp_FUN_00505900 ; 005058da
        ;   XREF to: 00505900 (UNCONDITIONAL_CALL)  ; CLightGun * core_lightgun.cpp_FUN_00505900(CLightGun * this_ptr)
    ADD ESP,0x4                         ; 005058df
    RET                                 ; 005058e2

