; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0(CGore *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; int              Stack[0x10]:4   blood_type
;
; XREF[9]:
;   core_bodypart.cpp_CBodyPart_spawnGore_FUN_0041b1b0 at 0041b1dd
;   core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670 at 0042b749
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810 at 0042b890
;   core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 at 0042b7f3
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 at 004edbe0
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f5093
;   core_melee.cpp_CMelee_process_FUN_0050ec10 at 0050ecb4
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e6ce
;   core_tentacle.cpp_CTentacle_process_FUN_005db050 at 005db463
;
; Referenced Globals:
;   int g_BloodParticleIndex
;   CBloodParticle[256] g_BloodParticles
;
; Called Functions:
;   core_gore.cpp_CBloodParticle_setup_FUN_004eb9a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004edaa0
        ;   Label: core_gore.cpp_CGore_spawnBloodParticles_FUN_004edaa0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004edaa1
    CMP EDX,0x2                         ; 004edaa5
    JZ 0x004edaec                       ; 004edaa8
        ;   XREF to: 004edaec (CONDITIONAL_JUMP)  ; LAB_004edaec
    PUSH EDI                            ; 004edaaa
    MOV EAX,[0x02d833d0]                ; 004edaab | g_BloodParticleIndex
    MOV ECX,dword ptr [0x02d833d0]      ; 004edab0 | g_BloodParticleIndex
    SHL EAX,0x6                         ; 004edab6
    INC ECX                             ; 004edab9
    ADD EAX,0x2d833d4                   ; 004edaba | g_BloodParticles
    MOV dword ptr [0x02d833d0],ECX      ; 004edabf | g_BloodParticleIndex
    CMP ECX,0x100                       ; 004edac5
    JL 0x004edad7                       ; 004edacb
        ;   XREF to: 004edad7 (CONDITIONAL_JUMP)  ; LAB_004edad7
    PUSH ESI                            ; 004edacd
    XOR ESI,ESI                         ; 004edace
    MOV dword ptr [0x02d833d0],ESI      ; 004edad0 | g_BloodParticleIndex
    POP ESI                             ; 004edad6
    PUSH EDX                            ; 004edad7
        ;   Label: LAB_004edad7
    MOV EDI,dword ptr [ESP + 0x18]      ; 004edad8
    PUSH EDI                            ; 004edadc
    MOV EBP,dword ptr [ESP + 0x18]      ; 004edadd
    PUSH EBP                            ; 004edae1
    PUSH EAX                            ; 004edae2
    CALL core_gore.cpp_CBloodParticle_setup_FUN_004eb9a0 ; 004edae3
        ;   XREF to: 004eb9a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodParticle_setup_FUN_004eb9a0(CBloodParticle * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 004edae8
    POP EDI                             ; 004edaeb
    POP EBP                             ; 004edaec
        ;   Label: LAB_004edaec
    RET                                 ; 004edaed

