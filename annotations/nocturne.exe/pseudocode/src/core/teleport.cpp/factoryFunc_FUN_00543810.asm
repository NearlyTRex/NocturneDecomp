; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleportDest * __cdecl core_teleport_cpp_factoryFunc_FUN_00543810(void)
;
;
; Called Functions:
;   core_teleport.cpp_CTeleportDest_ctor_FUN_00543840
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x150                          ; 00543810
        ;   Label: core_teleport.cpp_factoryFunc_FUN_00543810
    CALL crt_unknown.c_FUN_0056497c     ; 00543815
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0054381a
    TEST EAX,EAX                        ; 0054381d
    JNZ 0x00543822                      ; 0054381f
        ;   XREF to: 00543822 (CONDITIONAL_JUMP)  ; LAB_00543822
    RET                                 ; 00543821
    PUSH EAX                            ; 00543822
        ;   Label: LAB_00543822
    CALL core_teleport.cpp_CTeleportDest_ctor_FUN_00543840 ; 00543823
        ;   XREF to: 00543840 (UNCONDITIONAL_CALL)  ; CTeleportDest * core_teleport.cpp_CTeleportDest_ctor_FUN_00543840(CTeleportDest * this_ptr)
    ADD ESP,0x4                         ; 00543828
    RET                                 ; 0054382b

