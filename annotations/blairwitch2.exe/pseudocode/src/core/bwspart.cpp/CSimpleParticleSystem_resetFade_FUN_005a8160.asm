; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bwspart_cpp_CSimpleParticleSystem_resetFade_FUN_005a8160(CSimpleParticleSystem *this_ptr)
;
; Parameters:
; CSimpleParticleSystem * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bwspart.cpp_CSimpleParticleSystem_start_FUN_005a80d0 at 005a80ec
;   core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100 at 005a8121
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8160
        ;   Label: core_bwspart.cpp_CSimpleParticleSystem_resetFade_FUN_005a8160
    FLD float ptr [EAX + 0x2c]          ; 005a8164
    MOV EDX,dword ptr [EAX + 0x24]      ; 005a8167
    MOV dword ptr [EAX + 0xc],EDX       ; 005a816a
    FSTP float ptr [EAX + 0x30]         ; 005a816d
    RET                                 ; 005a8170

