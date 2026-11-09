; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirefly * core_fire_cpp_CFirefly_arrdtor64_FUN_0049f0c0(CFirefly *this_ptr,uint flags)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f66b0                       ; 0049f0c0
        ;   Label: core_fire.cpp_CFirefly_arrdtor64_FUN_0049f0c0
    PUSH 0x40                           ; 0049f0c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f0c7
    PUSH EDX                            ; 0049f0cb
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049f0cc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 0049f0d1
    RET                                 ; 0049f0d4

