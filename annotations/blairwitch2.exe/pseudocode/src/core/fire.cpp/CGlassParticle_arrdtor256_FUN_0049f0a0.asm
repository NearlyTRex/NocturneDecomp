; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_arrdtor256_FUN_0049f0a0(CGlassParticle *this_ptr,uint flags)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6710                       ; 0049f0a0
        ;   Label: core_fire.cpp_CGlassParticle_arrdtor256_FUN_0049f0a0
    PUSH 0x100                          ; 0049f0a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f0aa
    PUSH EDX                            ; 0049f0ae
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049f0af
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0049f0b4
    RET                                 ; 0049f0b7

