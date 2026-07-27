; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_FUN_00532ff0(void)
;
;
; Called Functions:
;   core_spike.cpp_CSpike_ctor_FUN_00533020
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x558                          ; 00532ff0
        ;   Label: core_spike.cpp_FUN_00532ff0
    CALL crt_unknown.c_FUN_0056497c     ; 00532ff5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00532ffa
    TEST EAX,EAX                        ; 00532ffd
    JNZ 0x00533002                      ; 00532fff
        ;   XREF to: 00533002 (CONDITIONAL_JUMP)  ; LAB_00533002
    RET                                 ; 00533001
    PUSH EAX                            ; 00533002
        ;   Label: LAB_00533002
    CALL core_spike.cpp_CSpike_ctor_FUN_00533020 ; 00533003
        ;   XREF to: 00533020 (UNCONDITIONAL_CALL)  ; undefined core_spike.cpp_CSpike_ctor_FUN_00533020()
    ADD ESP,0x4                         ; 00533008
    RET                                 ; 0053300b

