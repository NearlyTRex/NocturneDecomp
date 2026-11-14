; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDraculaBride * __cdecl core_dracbrid_cpp_factoryFuncDraculaBride_FUN_0047b080(void)
;
;
; Called Functions:
;   core_dracbrid.cpp_CDraculaBride_ctor_FUN_0047b0b0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc410                         ; 0047b080
        ;   Label: core_dracbrid.cpp_factoryFuncDraculaBride_FUN_0047b080
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0047b085
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0047b08a
    TEST EAX,EAX                        ; 0047b08d
    JNZ 0x0047b092                      ; 0047b08f
        ;   XREF to: 0047b092 (CONDITIONAL_JUMP)  ; LAB_0047b092
    RET                                 ; 0047b091
    PUSH EAX                            ; 0047b092
        ;   Label: LAB_0047b092
    CALL core_dracbrid.cpp_CDraculaBride_ctor_FUN_0047b0b0 ; 0047b093
        ;   XREF to: 0047b0b0 (UNCONDITIONAL_CALL)  ; CDraculaBride * core_dracbrid.cpp_CDraculaBride_ctor_FUN_0047b0b0(CDraculaBride * this_ptr)
    ADD ESP,0x4                         ; 0047b098
    RET                                 ; 0047b09b

