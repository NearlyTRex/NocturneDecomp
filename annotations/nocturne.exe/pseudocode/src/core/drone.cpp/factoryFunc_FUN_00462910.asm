; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrone * __cdecl core_drone_cpp_factoryFunc_FUN_00462910(void)
;
;
; Called Functions:
;   core_drone.cpp_CDrone_ctor_FUN_00462940
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd3c                         ; 00462910
        ;   Label: core_drone.cpp_factoryFunc_FUN_00462910
    CALL crt_unknown.c_FUN_0056497c     ; 00462915
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0046291a
    TEST EAX,EAX                        ; 0046291d
    JNZ 0x00462922                      ; 0046291f
        ;   XREF to: 00462922 (CONDITIONAL_JUMP)  ; LAB_00462922
    RET                                 ; 00462921
    PUSH EAX                            ; 00462922
        ;   Label: LAB_00462922
    CALL core_drone.cpp_CDrone_ctor_FUN_00462940 ; 00462923
        ;   XREF to: 00462940 (UNCONDITIONAL_CALL)  ; CDrone * core_drone.cpp_CDrone_ctor_FUN_00462940(CDrone * this_ptr)
    ADD ESP,0x4                         ; 00462928
    RET                                 ; 0046292b

