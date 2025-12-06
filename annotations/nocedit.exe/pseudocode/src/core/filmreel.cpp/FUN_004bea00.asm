; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_FUN_004bea00()
;
;
; XREF[1]:
;   core_filmreel.cpp_staticInit_FUN_004be620 at 004be64f
;
; Referenced Globals:
;   TerminatedCString s_core_filmreel_cpp_00629b27
;
; Called Functions:
;   core_filmreel.cpp_ctor_FUN_004bea40
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0xf3                           ; 004bea00
        ;   Label: core_filmreel.cpp_FUN_004bea00
    PUSH 0x629b27                       ; 004bea05 | = "..\\core\\filmreel.cpp" | s_core_filmreel_cpp_00629b27 = ..\core\filmreel.cpp
    PUSH 0x3e4                          ; 004bea0a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004bea0f | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bea14
    TEST EAX,EAX                        ; 004bea17
    JNZ 0x004bea1c                      ; 004bea19 | LAB_004bea1c
        ;   XREF to: 004bea1c (CONDITIONAL_JUMP)
    RET                                 ; 004bea1b
    PUSH EAX                            ; 004bea1c
        ;   Label: LAB_004bea1c
    CALL core_filmreel.cpp_ctor_FUN_004bea40 ; 004bea1d | CFilmProjector * core_filmreel.cpp_ctor_FUN_004bea40(CFilmProjector * this_ptr)
        ;   XREF to: 004bea40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bea22
    RET                                 ; 004bea25

