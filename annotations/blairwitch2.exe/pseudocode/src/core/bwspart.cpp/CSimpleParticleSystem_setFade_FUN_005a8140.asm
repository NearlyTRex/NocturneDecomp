; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bwspart_cpp_CSimpleParticleSystem_setFade_FUN_005a8140(CSimpleParticleSystem *this_ptr,float param_2,float param_3,float param_4)
;
; Parameters:
; CSimpleParticleSystem * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
;
; XREF[1]:
;   core_actor.cpp_FUN_0040cea0 at 0040cec7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8140
        ;   Label: core_bwspart.cpp_CSimpleParticleSystem_setFade_FUN_005a8140
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a8144
    MOV dword ptr [EAX + 0x24],EDX      ; 005a8148
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a814b
    MOV dword ptr [EAX + 0x28],EDX      ; 005a814f
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a8152
    MOV dword ptr [EAX + 0x2c],EDX      ; 005a8156
    RET                                 ; 005a8159

