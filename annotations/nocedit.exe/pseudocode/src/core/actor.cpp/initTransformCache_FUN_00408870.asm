; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_00408870(CDemonActorTransformState *transform_cache)
;
; Parameters:
; CDemonActorTransformState * Stack[0x4]:4   transform_cache
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0 at 004088be
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00408870
        ;   Label: core_actor.cpp_initTransformCache_FUN_00408870
    MOV dword ptr [EAX + 0x8],0x0       ; 00408874
    LEA EDX,[EAX + 0xc]                 ; 0040887b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0040887e
    MOV dword ptr [EAX + 0x4],ECX       ; 00408881
    MOV ECX,dword ptr [EAX + 0x4]       ; 00408884
    MOV dword ptr [EAX],ECX             ; 00408887
    MOV dword ptr [EDX + 0x8],0x0       ; 00408889
    MOV ECX,dword ptr [EDX + 0x8]       ; 00408890
    MOV dword ptr [EDX + 0x4],ECX       ; 00408893
    MOV ECX,dword ptr [EDX + 0x4]       ; 00408896
    MOV dword ptr [EDX],ECX             ; 00408899
    MOV dword ptr [EAX + 0x18],0x1f     ; 0040889b
    RET                                 ; 004088a2

