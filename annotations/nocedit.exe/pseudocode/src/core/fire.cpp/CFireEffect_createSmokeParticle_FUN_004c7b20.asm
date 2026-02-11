; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 (CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence, int alpha_value)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   drag_factor
; CVector3f *      Stack[0x10]:4   wind_influence
; int              Stack[0x14]:4   alpha_value
;
; XREF[11]:
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 004131c0
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416bad
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40 at 0042ec33
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 00484a51
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a83a2
;   core_fire.cpp_CCrater_process_FUN_004c4550 at 004c45d1
;   core_fire.cpp_CFireEffect_FUN_004c7620 at 004c7638
;   core_fire.cpp_CFireball_process_FUN_004c0b30 at 004c0c1f
;   core_fire.cpp_CGunFlame_process_FUN_004c4f60 at 004c5047
;   core_flame.cpp_CFlame_process_FUN_004c9c00 at 004c9d09
;   ... and 1 more
;
; Referenced Globals:
;   int g_SmokeParticleAllocIndex
;   CSmokeParticle[2048] g_SmokeParticlePool
;
; Called Functions:
;   core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c7b20
        ;   Label: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
    PUSH EDI                            ; 004c7b21
    PUSH EBP                            ; 004c7b22
    MOV EDX,dword ptr [0x02d141e8]      ; 004c7b23 | g_SmokeParticleAllocIndex
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c7b29
    SUB EAX,EDX                         ; 004c7b30
    SHL EAX,0x2                         ; 004c7b32
    SUB EAX,EDX                         ; 004c7b35
    SHL EAX,0x2                         ; 004c7b37
    INC EDX                             ; 004c7b3a
    ADD EAX,0x2d141ec                   ; 004c7b3b | g_SmokeParticlePool
    MOV dword ptr [0x02d141e8],EDX      ; 004c7b40 | g_SmokeParticleAllocIndex
    CMP EDX,0x800                       ; 004c7b46
    JL 0x004c7b58                       ; 004c7b4c
        ;   XREF to: 004c7b58 (CONDITIONAL_JUMP)  ; LAB_004c7b58
    PUSH EBX                            ; 004c7b4e
    XOR EBX,EBX                         ; 004c7b4f
    MOV dword ptr [0x02d141e8],EBX      ; 004c7b51 | g_SmokeParticleAllocIndex
    POP EBX                             ; 004c7b57
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c7b58
        ;   Label: LAB_004c7b58
    PUSH ESI                            ; 004c7b5c
    MOV EDI,dword ptr [ESP + 0x20]      ; 004c7b5d
    PUSH EDI                            ; 004c7b61
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004c7b62
    PUSH dword ptr [ESP + 0x20]         ; 004c7b66
    PUSH EBP                            ; 004c7b6a
    PUSH EAX                            ; 004c7b6b
    CALL core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0 ; 004c7b6c
        ;   XREF to: 004bf2f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0(CSmokeParticle * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004c7b71
    POP EBP                             ; 004c7b74
    POP EDI                             ; 004c7b75
    POP ESI                             ; 004c7b76
    RET                                 ; 004c7b77

