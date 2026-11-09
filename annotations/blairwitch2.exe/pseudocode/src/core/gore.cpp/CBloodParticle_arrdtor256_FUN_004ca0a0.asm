; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * core_gore_cpp_CBloodParticle_arrdtor256_FUN_004ca0a0(CBloodParticle *this_ptr,uint flags)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f7c10                       ; 004ca0a0
        ;   Label: core_gore.cpp_CBloodParticle_arrdtor256_FUN_004ca0a0
    PUSH 0x100                          ; 004ca0a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ca0aa
    PUSH EDX                            ; 004ca0ae
    CALL crt_memory.c___arrfini_FUN_005b854f ; 004ca0af
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 004ca0b4
    RET                                 ; 004ca0b7

