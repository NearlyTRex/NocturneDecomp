; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_FUN_004c7f20(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_elephant.cpp_CElephantGun_fireProjectile_FUN_004a79f0 at 004a7b64
;   core_lightgun.cpp_CLightGun_fireProjectile_FUN_005066b0 at 0050684a
;   core_shotgun.cpp_CShotgun_FUN_005888f0 at 00588a64
;
; Referenced Globals:
;   float FLOAT_0065dcc0 = 0.02000000
;   CRock* g_CFireEffectRocksEnd
;   CLaserBeam[64] g_LaserBeamPool
;
; Called Functions:
;   core_fire.cpp_CLaserBeam_FUN_004c2420
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c7f20
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c7f20
    MOV EDX,dword ptr [0x02d667ac]      ; 004c7f21 | g_CFireEffectRocksEnd
    CMP EDX,0x40                        ; 004c7f27
    JL 0x004c7f2e                       ; 004c7f2a
        ;   XREF to: 004c7f2e (CONDITIONAL_JUMP)  ; LAB_004c7f2e
    POP EBP                             ; 004c7f2c
    RET                                 ; 004c7f2d
    PUSH EDI                            ; 004c7f2e
        ;   Label: LAB_004c7f2e
    PUSH ESI                            ; 004c7f2f
    PUSH EBX                            ; 004c7f30
    PUSH dword ptr [ESP + 0x30]         ; 004c7f31
    MOV ECX,dword ptr [ESP + 0x30]      ; 004c7f35
    PUSH dword ptr [0x0065dcc0]         ; 004c7f39 | FLOAT_0065dcc0
    PUSH ECX                            ; 004c7f3f
    MOV EBX,dword ptr [ESP + 0x34]      ; 004c7f40
    PUSH EBX                            ; 004c7f44
    MOV ESI,dword ptr [ESP + 0x34]      ; 004c7f45
    PUSH ESI                            ; 004c7f49
    PUSH 0x0                            ; 004c7f4a
    MOV EDI,dword ptr [ESP + 0x34]      ; 004c7f4c
    PUSH 0x0                            ; 004c7f50
    MOV EBP,dword ptr [ESP + 0x34]      ; 004c7f52
    PUSH dword ptr [ESP + 0x3c]         ; 004c7f56
    MOV EAX,EDX                         ; 004c7f5a
    PUSH EDI                            ; 004c7f5c
    SHL EAX,0x6                         ; 004c7f5d
    PUSH EBP                            ; 004c7f60
    ADD EAX,0x2d667b0                   ; 004c7f61 | g_LaserBeamPool
    PUSH EAX                            ; 004c7f66
    CALL core_fire.cpp_CLaserBeam_FUN_004c2420 ; 004c7f67
        ;   XREF to: 004c2420 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_FUN_004c2420(CLaserBeam * this_ptr)
    MOV EAX,[0x02d667ac]                ; 004c7f6c | g_CFireEffectRocksEnd
    INC EAX                             ; 004c7f71
    ADD ESP,0x2c                        ; 004c7f72
    MOV [0x02d667ac],EAX                ; 004c7f75 | g_CFireEffectRocksEnd
    POP EBX                             ; 004c7f7a
    POP ESI                             ; 004c7f7b
    POP EDI                             ; 004c7f7c
    POP EBP                             ; 004c7f7d
    RET                                 ; 004c7f7e

