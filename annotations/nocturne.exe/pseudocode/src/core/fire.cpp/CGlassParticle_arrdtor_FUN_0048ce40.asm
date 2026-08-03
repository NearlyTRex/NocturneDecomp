; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_arrdtor_FUN_0048ce40(CGlassParticle *this_ptr,uint flags)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d3a0                       ; 0048ce40
        ;   Label: core_fire.cpp_CGlassParticle_arrdtor_FUN_0048ce40
    PUSH 0x100                          ; 0048ce45
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ce4a
    PUSH EDX                            ; 0048ce4e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ce4f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048ce54
    RET                                 ; 0048ce57

