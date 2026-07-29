; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSmokeParticle * __cdecl core_fire_cpp_CSmokeParticle_arrdtor_FUN_0048cee0(CSmokeParticle *objs,uint flags)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSmokeParticleTypeInfo_0059d300
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d300                       ; 0048cee0 | g_CSmokeParticleTypeInfo_0059d300
        ;   Label: core_fire.cpp_CSmokeParticle_arrdtor_FUN_0048cee0
    PUSH 0x800                          ; 0048cee5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ceea
    PUSH EDX                            ; 0048ceee
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ceef
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048cef4
    RET                                 ; 0048cef7

