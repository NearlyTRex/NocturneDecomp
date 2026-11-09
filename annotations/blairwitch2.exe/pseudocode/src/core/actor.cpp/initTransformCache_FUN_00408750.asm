; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_initTransformCache_FUN_00408750(undefined4 *param_1)
;
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790 at 0040879e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00408750
        ;   Label: core_actor.cpp_initTransformCache_FUN_00408750
    MOV dword ptr [EAX + 0x8],0x0       ; 00408754
    LEA EDX,[EAX + 0xc]                 ; 0040875b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0040875e
    MOV dword ptr [EAX + 0x4],ECX       ; 00408761
    MOV ECX,dword ptr [EAX + 0x4]       ; 00408764
    MOV dword ptr [EAX],ECX             ; 00408767
    MOV dword ptr [EDX + 0x8],0x0       ; 00408769
    MOV ECX,dword ptr [EDX + 0x8]       ; 00408770
    MOV dword ptr [EDX + 0x4],ECX       ; 00408773
    MOV ECX,dword ptr [EDX + 0x4]       ; 00408776
    MOV dword ptr [EDX],ECX             ; 00408779
    MOV dword ptr [EAX + 0x18],0x1f     ; 0040877b
    RET                                 ; 00408782

