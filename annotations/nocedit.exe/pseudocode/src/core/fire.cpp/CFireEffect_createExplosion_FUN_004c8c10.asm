; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10(CFireEffect *this_ptr,CVector3f *position,float scale,int damage_amount)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   scale
; int              Stack[0x10]:4   damage_amount
;
; XREF[6]:
;   core_charactr.cpp_CCharacter_explode_FUN_0042b930 at 0042b9b7
;   core_crate.cpp_CCrate_FUN_00448a70 at 00448af4
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ab1f7
;   core_fire.cpp_CToss_process_FUN_004c4000 at 004c406d
;   core_flamecan.cpp_CFlameCan_process_FUN_004cb390 at 004cb4af
;   core_vessel.cpp_CCryptVessel_process_FUN_005e91a0 at 005e9660
;
; Referenced Globals:
;   TerminatedCString s_xplode_wav_6_0_0062a08b
;   CSound* g_CSoundPtr = 03f6af64
;   int g_ExplosionPoolIndex
;   CExplosion[10] g_ExplosionPool
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_fire.cpp_CExplosion_activate_FUN_004c3970
;   core_fire.cpp_CFireEffect_createCrater_FUN_004c8ea0
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8c10
        ;   Label: core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10
    PUSH EDI                            ; 004c8c11
    PUSH EBP                            ; 004c8c12
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c8c13
    MOV EAX,[0x02d677b0]                ; 004c8c17 | g_ExplosionPoolIndex
    SHL EAX,0x2                         ; 004c8c1c
    PUSH dword ptr [ESP + 0x1c]         ; 004c8c1f
    MOV EDX,EAX                         ; 004c8c23
    SHL EAX,0x3                         ; 004c8c25
    PUSH dword ptr [ESP + 0x1c]         ; 004c8c28
    SUB EAX,EDX                         ; 004c8c2c
    PUSH EBX                            ; 004c8c2e
    ADD EAX,0x2d677b4                   ; 004c8c2f | g_ExplosionPool
    PUSH EAX                            ; 004c8c34
    CALL core_fire.cpp_CExplosion_activate_FUN_004c3970 ; 004c8c35
        ;   XREF to: 004c3970 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CExplosion_activate_FUN_004c3970(CExplosion * this_ptr, CVector3f * position, float scale, int damage_amount)
    MOV EDX,dword ptr [0x02d677b0]      ; 004c8c3a | g_ExplosionPoolIndex
    INC EDX                             ; 004c8c40
    ADD ESP,0x10                        ; 004c8c41
    MOV dword ptr [0x02d677b0],EDX      ; 004c8c44 | g_ExplosionPoolIndex
    CMP EDX,0xa                         ; 004c8c4a
    JL 0x004c8c59                       ; 004c8c4d
        ;   XREF to: 004c8c59 (CONDITIONAL_JUMP)  ; LAB_004c8c59
    PUSH ESI                            ; 004c8c4f
    XOR ESI,ESI                         ; 004c8c50
    MOV dword ptr [0x02d677b0],ESI      ; 004c8c52 | g_ExplosionPoolIndex
    POP ESI                             ; 004c8c58
    PUSH EBX                            ; 004c8c59
        ;   Label: LAB_004c8c59
    PUSH 0x62a08b                       ; 004c8c5a | = "xplode?.wav @ 6.0"
    MOV EDI,dword ptr [ESP + 0x18]      ; 004c8c5f
    PUSH EDI                            ; 004c8c63
    MOV EBP,dword ptr [0x00681ef8]      ; 004c8c64 | g_CSoundPtr
    PUSH EBP                            ; 004c8c6a | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004c8c6b
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004c8c70
    PUSH dword ptr [ESP + 0x20]         ; 004c8c73
    PUSH EBX                            ; 004c8c77
    PUSH EDI                            ; 004c8c78
    CALL core_fire.cpp_CFireEffect_createCrater_FUN_004c8ea0 ; 004c8c79
        ;   XREF to: 004c8ea0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createCrater_FUN_004c8ea0(CFireEffect * this_ptr)
    ADD ESP,0xc                         ; 004c8c7e
    POP EBP                             ; 004c8c81
    POP EDI                             ; 004c8c82
    POP EBX                             ; 004c8c83
    RET                                 ; 004c8c84

