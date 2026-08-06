; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWaterActor * __cdecl core_wateract_cpp_factoryFunc_FUN_005511f0(void)
;
;
; Called Functions:
;   core_wateract.cpp_CWaterActor_ctor_FUN_00551220
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2b230                        ; 005511f0
        ;   Label: core_wateract.cpp_factoryFunc_FUN_005511f0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 005511f5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 005511fa
    TEST EAX,EAX                        ; 005511fd
    JNZ 0x00551202                      ; 005511ff
        ;   XREF to: 00551202 (CONDITIONAL_JUMP)  ; LAB_00551202
    RET                                 ; 00551201
    PUSH EAX                            ; 00551202
        ;   Label: LAB_00551202
    CALL core_wateract.cpp_CWaterActor_ctor_FUN_00551220 ; 00551203
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; CWaterActor * core_wateract.cpp_CWaterActor_ctor_FUN_00551220(CWaterActor * this_ptr)
    ADD ESP,0x4                         ; 00551208
    RET                                 ; 0055120b

