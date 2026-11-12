; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlassParticle * core_fire_cpp_CGlassParticle_arrdtor1000_FUN_004a49f0(CGlassParticle *this_ptr,uint flags)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfaf0                       ; 004a49f0
        ;   Label: core_fire.cpp_CGlassParticle_arrdtor1000_FUN_004a49f0
    PUSH 0x3e8                          ; 004a49f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a49fa
    PUSH EDX                            ; 004a49fe
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a49ff
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a4a04
    RET                                 ; 004a4a07

