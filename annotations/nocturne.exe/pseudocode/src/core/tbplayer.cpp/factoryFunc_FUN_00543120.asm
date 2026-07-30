; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBassPlayer * __cdecl core_tbplayer_cpp_factoryFunc_FUN_00543120(void)
;
;
; Called Functions:
;   core_tbplayer.cpp_FUN_00543150
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1f578                        ; 00543120
        ;   Label: core_tbplayer.cpp_factoryFunc_FUN_00543120
    CALL crt_unknown.c_FUN_0056497c     ; 00543125
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0054312a
    TEST EAX,EAX                        ; 0054312d
    JNZ 0x00543132                      ; 0054312f
        ;   XREF to: 00543132 (CONDITIONAL_JUMP)  ; LAB_00543132
    RET                                 ; 00543131
    PUSH EAX                            ; 00543132
        ;   Label: LAB_00543132
    CALL core_tbplayer.cpp_FUN_00543150 ; 00543133
        ;   XREF to: 00543150 (UNCONDITIONAL_CALL)  ; undefined core_tbplayer.cpp_FUN_00543150()
    ADD ESP,0x4                         ; 00543138
    RET                                 ; 0054313b

