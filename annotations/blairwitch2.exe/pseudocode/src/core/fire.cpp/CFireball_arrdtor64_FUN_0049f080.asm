; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * core_fire_cpp_CFireball_arrdtor64_FUN_0049f080(CFireball *this_ptr,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6750                       ; 0049f080
        ;   Label: core_fire.cpp_CFireball_arrdtor64_FUN_0049f080
    PUSH 0x40                           ; 0049f085
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f087
    PUSH EDX                            ; 0049f08b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049f08c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 0049f091
    RET                                 ; 0049f094

