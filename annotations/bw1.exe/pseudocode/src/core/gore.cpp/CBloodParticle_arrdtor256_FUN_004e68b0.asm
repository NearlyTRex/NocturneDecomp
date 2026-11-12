; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * core_gore_cpp_CBloodParticle_arrdtor256_FUN_004e68b0(CBloodParticle *this_ptr,uint flags)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x601710                       ; 004e68b0
        ;   Label: core_gore.cpp_CBloodParticle_arrdtor256_FUN_004e68b0
    PUSH 0x100                          ; 004e68b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e68ba
    PUSH EDX                            ; 004e68be
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004e68bf
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004e68c4
    RET                                 ; 004e68c7

