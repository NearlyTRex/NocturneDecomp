; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_arrdtor256_FUN_004b7950(CGlassParticle *this_ptr,uint flags)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x6001a0                       ; 004b7950
        ;   Label: core_fire.cpp_CGlassParticle_arrdtor256_FUN_004b7950
    PUSH 0x100                          ; 004b7955
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b795a
    PUSH EDX                            ; 004b795e
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b795f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b7964
    RET                                 ; 004b7967

