; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_FUN_004c7d60(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CGlassParticle* g_CFireEffectGlassParticlesEnd
;   CBulletTrail[10] g_BulletTrailPool
;
; Called Functions:
;   core_fire.cpp_FUN_004c2170
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c7d60
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c7d60
    PUSH EDI                            ; 004c7d61
    PUSH EBP                            ; 004c7d62
    MOV EDX,dword ptr [0x02d62d38]      ; 004c7d63 | CGlassParticle * g_CFireEffectGlassParticlesEnd
    LEA EAX,[EDX*0x8 + 0x0]             ; 004c7d69
    ADD EAX,EDX                         ; 004c7d70
    SHL EAX,0x2                         ; 004c7d72
    INC EDX                             ; 004c7d75
    ADD EAX,0x2d62d3c                   ; 004c7d76 | CBulletTrail[10] g_BulletTrailPool
    MOV dword ptr [0x02d62d38],EDX      ; 004c7d7b | CGlassParticle * g_CFireEffectGlassParticlesEnd
    CMP EDX,0xa                         ; 004c7d81
    JL 0x004c7d90                       ; 004c7d84 | LAB_004c7d90
        ;   XREF to: 004c7d90 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004c7d86
    XOR EBX,EBX                         ; 004c7d87
    MOV dword ptr [0x02d62d38],EBX      ; 004c7d89 | CGlassParticle * g_CFireEffectGlassParticlesEnd
    POP EBX                             ; 004c7d8f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004c7d90
        ;   Label: LAB_004c7d90
    PUSH dword ptr [ESP + 0x20]         ; 004c7d94
    PUSH ESI                            ; 004c7d98
    MOV EDI,dword ptr [ESP + 0x20]      ; 004c7d99
    PUSH EDI                            ; 004c7d9d
    MOV EBP,dword ptr [ESP + 0x20]      ; 004c7d9e
    PUSH EBP                            ; 004c7da2
    PUSH EAX                            ; 004c7da3
    CALL core_fire.cpp_FUN_004c2170     ; 004c7da4 | undefined core_fire.cpp_FUN_004c2170()
        ;   XREF to: 004c2170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004c7da9
    POP EBP                             ; 004c7dac
    POP EDI                             ; 004c7dad
    POP ESI                             ; 004c7dae
    RET                                 ; 004c7daf

