; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_arrdtor256_FUN_004cf240(CBloodParticle *this_ptr,uint flags)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e0e80                       ; 004cf240
        ;   Label: core_gore.cpp_CBloodParticle_arrdtor256_FUN_004cf240
    PUSH 0x100                          ; 004cf245
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cf24a
    PUSH EDX                            ; 004cf24e
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004cf24f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cf254
    RET                                 ; 004cf257

