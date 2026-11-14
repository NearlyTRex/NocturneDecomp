; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_004085c0(CDemonActorTransformState *transform_cache)
;
; Parameters:
; CDemonActorTransformState * Stack[0x4]:4   transform_cache
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600 at 0040860e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004085c0
        ;   Label: core_actor.cpp_initTransformCache_FUN_004085c0
    MOV dword ptr [EAX + 0x8],0x0       ; 004085c4
    LEA EDX,[EAX + 0xc]                 ; 004085cb
    MOV ECX,dword ptr [EAX + 0x8]       ; 004085ce
    MOV dword ptr [EAX + 0x4],ECX       ; 004085d1
    MOV ECX,dword ptr [EAX + 0x4]       ; 004085d4
    MOV dword ptr [EAX],ECX             ; 004085d7
    MOV dword ptr [EDX + 0x8],0x0       ; 004085d9
    MOV ECX,dword ptr [EDX + 0x8]       ; 004085e0
    MOV dword ptr [EDX + 0x4],ECX       ; 004085e3
    MOV ECX,dword ptr [EDX + 0x4]       ; 004085e6
    MOV dword ptr [EDX],ECX             ; 004085e9
    MOV dword ptr [EAX + 0x18],0x1f     ; 004085eb
    RET                                 ; 004085f2

