; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_factoryFunc_FUN_004119e0(void)
;
;
; XREF[1]:
;   core_bat.cpp_staticInit_FUN_00411910 at 0041191c
;
; Called Functions:
;   core_bat.cpp_CBat_ctor_FUN_00411a10
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x380                          ; 004119e0
        ;   Label: core_bat.cpp_factoryFunc_FUN_004119e0
    CALL crt_memory.c_operator_new_FUN_0056497c ; 004119e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 004119ea
    TEST EAX,EAX                        ; 004119ed
    JNZ 0x004119f2                      ; 004119ef
        ;   XREF to: 004119f2 (CONDITIONAL_JUMP)  ; LAB_004119f2
    RET                                 ; 004119f1
    PUSH EAX                            ; 004119f2
        ;   Label: LAB_004119f2
    CALL core_bat.cpp_CBat_ctor_FUN_00411a10 ; 004119f3
        ;   XREF to: 00411a10 (UNCONDITIONAL_CALL)  ; CBat * core_bat.cpp_CBat_ctor_FUN_00411a10(CBat * this_ptr)
    ADD ESP,0x4                         ; 004119f8
    RET                                 ; 004119fb

