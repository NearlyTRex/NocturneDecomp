; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_factoryFuncAmmo_FUN_0040db90(void)
;
;
; XREF[1]:
;   core_ammo.cpp_staticInit_FUN_0040db60 at 0040db6c
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x31c                          ; 0040db90
        ;   Label: core_ammo.cpp_factoryFuncAmmo_FUN_0040db90
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 0040db95
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0040db9a
    TEST EAX,EAX                        ; 0040db9d
    JNZ 0x0040dba2                      ; 0040db9f
        ;   XREF to: 0040dba2 (CONDITIONAL_JUMP)  ; LAB_0040dba2
    RET                                 ; 0040dba1
    PUSH EAX                            ; 0040dba2
        ;   Label: LAB_0040dba2
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0 ; 0040dba3
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040dbc0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 0040dba8
    RET                                 ; 0040dbab

