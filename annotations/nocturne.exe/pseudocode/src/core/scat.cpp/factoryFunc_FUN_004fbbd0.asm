; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScat * __cdecl core_scat_cpp_factoryFunc_FUN_004fbbd0(void)
;
;
; Called Functions:
;   core_scat.cpp_FUN_004fbc00
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1fa68                        ; 004fbbd0
        ;   Label: core_scat.cpp_factoryFunc_FUN_004fbbd0
    CALL crt_unknown.c_FUN_0056497c     ; 004fbbd5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004fbbda
    TEST EAX,EAX                        ; 004fbbdd
    JNZ 0x004fbbe2                      ; 004fbbdf
        ;   XREF to: 004fbbe2 (CONDITIONAL_JUMP)  ; LAB_004fbbe2
    RET                                 ; 004fbbe1
    PUSH EAX                            ; 004fbbe2
        ;   Label: LAB_004fbbe2
    CALL core_scat.cpp_FUN_004fbc00     ; 004fbbe3
        ;   XREF to: 004fbc00 (UNCONDITIONAL_CALL)  ; CScat * core_scat.cpp_FUN_004fbc00(CScat * this_ptr)
    ADD ESP,0x4                         ; 004fbbe8
    RET                                 ; 004fbbeb

