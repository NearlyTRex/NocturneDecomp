; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_staticInit_FUN_0052c8c0(void)
;
;
; Called Functions:
;   core_sound.cpp_FUN_0052dd00
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c_FUN_00564bb0
;   shape_edittool.cpp_CStrList_ctor_FUN_00473b60
;
; *****************************************************************************

section .text

    PUSH 0x2dc9450                      ; 0052c8c0
        ;   Label: core_sound.cpp_staticInit_FUN_0052c8c0
    CALL core_sound.cpp_FUN_0052dd00    ; 0052c8c5
        ;   XREF to: 0052dd00 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_FUN_0052dd00()
    ADD ESP,0x4                         ; 0052c8ca
    PUSH 0x2dc9610                      ; 0052c8cd
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00473b60 ; 0052c8d2
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_ctor_FUN_00473b60()
    ADD ESP,0x4                         ; 0052c8d7
    PUSH 0x5bed50                       ; 0052c8da
    CALL crt_unknown.c_FUN_00564bb0     ; 0052c8df
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 0052c8e4
    PUSH 0x5a22f0                       ; 0052c8e7
    PUSH 0xa                            ; 0052c8ec
    PUSH 0x2dc9ca4                      ; 0052c8ee
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0052c8f3
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0052c8f8
    RET                                 ; 0052c8fb

