; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_FUN_004c8c10(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_charactr.cpp_CCharacter_FUN_0042b930 at 0042b9b7
;   core_crate.cpp_FUN_00448a70 at 00448af4
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ab1f7
;   core_fire.cpp_CToss_process_FUN_004c4000 at 004c406d
;   core_flamecan.cpp_FUN_004cb390 at 004cb4af
;   core_vessel.cpp_CCryptVessel_process_FUN_005e91a0 at 005e9660
;
; Referenced Globals:
;   TerminatedCString s_xplode_wav_6_0_0062a08b
;   CSound* g_CSoundPtr = 03f6af64
;   CLaserBeam* g_LaserBeamActiveListHead
;   CExplosion[10] g_ExplosionPool
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_fire.cpp_CExplosion_FUN_004c3970
;   core_fire.cpp_CFireEffect_FUN_004c8ea0
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8c10
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c8c10
    PUSH EDI                            ; 004c8c11
    PUSH EBP                            ; 004c8c12
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c8c13
    MOV EAX,[0x02d677b0]                ; 004c8c17 | CLaserBeam * g_LaserBeamActiveListHead
    SHL EAX,0x2                         ; 004c8c1c
    PUSH dword ptr [ESP + 0x1c]         ; 004c8c1f
    MOV EDX,EAX                         ; 004c8c23
    SHL EAX,0x3                         ; 004c8c25
    PUSH dword ptr [ESP + 0x1c]         ; 004c8c28
    SUB EAX,EDX                         ; 004c8c2c
    PUSH EBX                            ; 004c8c2e
    ADD EAX,0x2d677b4                   ; 004c8c2f | CExplosion[10] g_ExplosionPool
    PUSH EAX                            ; 004c8c34
    CALL core_fire.cpp_CExplosion_FUN_004c3970 ; 004c8c35 | void core_fire.cpp_CExplosion_FUN_004c3970(CExplosion * this_ptr)
        ;   XREF to: 004c3970 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x02d677b0]      ; 004c8c3a | CLaserBeam * g_LaserBeamActiveListHead
    INC EDX                             ; 004c8c40
    ADD ESP,0x10                        ; 004c8c41
    MOV dword ptr [0x02d677b0],EDX      ; 004c8c44 | CLaserBeam * g_LaserBeamActiveListHead
    CMP EDX,0xa                         ; 004c8c4a
    JL 0x004c8c59                       ; 004c8c4d | LAB_004c8c59
        ;   XREF to: 004c8c59 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004c8c4f
    XOR ESI,ESI                         ; 004c8c50
    MOV dword ptr [0x02d677b0],ESI      ; 004c8c52 | CLaserBeam * g_LaserBeamActiveListHead
    POP ESI                             ; 004c8c58
    PUSH EBX                            ; 004c8c59
        ;   Label: LAB_004c8c59
    PUSH 0x62a08b                       ; 004c8c5a | = "xplode?.wav @ 6.0" | s_xplode_wav_6_0_0062a08b = xplode?.wav @ 6.0
    MOV EDI,dword ptr [ESP + 0x18]      ; 004c8c5f
    PUSH EDI                            ; 004c8c63
    MOV EBP,dword ptr [0x00681ef8]      ; 004c8c64 | CSound * g_CSoundPtr
    PUSH EBP                            ; 004c8c6a | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004c8c6b | void core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004c8c70
    PUSH dword ptr [ESP + 0x20]         ; 004c8c73
    PUSH EBX                            ; 004c8c77
    PUSH EDI                            ; 004c8c78
    CALL core_fire.cpp_CFireEffect_FUN_004c8ea0 ; 004c8c79 | void core_fire.cpp_CFireEffect_FUN_004c8ea0(CFireEffect * this_ptr)
        ;   XREF to: 004c8ea0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004c8c7e
    POP EBP                             ; 004c8c81
    POP EDI                             ; 004c8c82
    POP EBX                             ; 004c8c83
    RET                                 ; 004c8c84

