; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_00409cf0(CDemonActorTransformState *transform_cache)
;
; Parameters:
; CDemonActorTransformState * Stack[0x4]:4   transform_cache
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30 at 00409d3e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00409cf0
        ;   Label: core_actor.cpp_initTransformCache_FUN_00409cf0
    MOV dword ptr [EAX + 0x8],0x0       ; 00409cf4
    LEA EDX,[EAX + 0xc]                 ; 00409cfb
    MOV ECX,dword ptr [EAX + 0x8]       ; 00409cfe
    MOV dword ptr [EAX + 0x4],ECX       ; 00409d01
    MOV ECX,dword ptr [EAX + 0x4]       ; 00409d04
    MOV dword ptr [EAX],ECX             ; 00409d07
    MOV dword ptr [EDX + 0x8],0x0       ; 00409d09
    MOV ECX,dword ptr [EDX + 0x8]       ; 00409d10
    MOV dword ptr [EDX + 0x4],ECX       ; 00409d13
    MOV ECX,dword ptr [EDX + 0x4]       ; 00409d16
    MOV dword ptr [EDX],ECX             ; 00409d19
    MOV dword ptr [EAX + 0x18],0x1f     ; 00409d1b
    RET                                 ; 00409d22

