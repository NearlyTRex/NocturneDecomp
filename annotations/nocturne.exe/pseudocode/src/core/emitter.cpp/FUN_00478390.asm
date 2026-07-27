; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_FUN_00478390(void)
;
;
; Called Functions:
;   core_emitter.cpp_CEmitter_ctor_FUN_004783c0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x48c                          ; 00478390
        ;   Label: core_emitter.cpp_FUN_00478390
    CALL crt_unknown.c_FUN_0056497c     ; 00478395
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0047839a
    TEST EAX,EAX                        ; 0047839d
    JNZ 0x004783a2                      ; 0047839f
        ;   XREF to: 004783a2 (CONDITIONAL_JUMP)  ; LAB_004783a2
    RET                                 ; 004783a1
    PUSH EAX                            ; 004783a2
        ;   Label: LAB_004783a2
    CALL core_emitter.cpp_CEmitter_ctor_FUN_004783c0 ; 004783a3
        ;   XREF to: 004783c0 (UNCONDITIONAL_CALL)  ; undefined core_emitter.cpp_CEmitter_ctor_FUN_004783c0()
    ADD ESP,0x4                         ; 004783a8
    RET                                 ; 004783ab

