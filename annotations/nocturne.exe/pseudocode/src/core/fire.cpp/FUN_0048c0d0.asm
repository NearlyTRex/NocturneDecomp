; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0048c0d0(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   scale
; float            Stack[0x10]:4   gore_multiplier
; float            Stack[0x14]:4   radius
;
; XREF[6]:
;   core_charactr.cpp_CCharacter_explode_FUN_00427ab0 at 00427b37
;   core_crate.cpp_CCrate_explode_FUN_0043cdb0 at 0043ce34
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b187
;   core_fire.cpp_CToss_process_FUN_004874d0 at 0048753d
;   core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0 at 0048e6bf
;   core_vessel.cpp_CCryptVessel_process_FUN_0054fc60 at 00550120
;
; Referenced Globals:
;   TerminatedCString s_xplode_wav_6_0_005814f4
;   int INT_005b9284 = 0x1c70f74
;   undefined4 DAT_005bed68
;   undefined4 DAT_01c5d704
;
; Called Functions:
;   core_fire.cpp_CExplosion_activate_FUN_00486e40
;   core_fire.cpp_CFireEffect_createCrater_FUN_0048c370
;   core_sound.cpp_CSound_playActorSound_FUN_0052ea60
;   xxx_unk.c_FUN_004940d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c0d0
        ;   Label: core_fire.cpp_FUN_0048c0d0
    PUSH EDI                            ; 0048c0d1
    PUSH EBP                            ; 0048c0d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048c0d3
    MOV EAX,[0x01c5d704]                ; 0048c0d7 | DAT_01c5d704
    SHL EAX,0x2                         ; 0048c0dc
    PUSH dword ptr [ESP + 0x1c]         ; 0048c0df
    MOV EDX,EAX                         ; 0048c0e3
    SHL EAX,0x3                         ; 0048c0e5
    PUSH dword ptr [ESP + 0x1c]         ; 0048c0e8
    SUB EAX,EDX                         ; 0048c0ec
    PUSH EBX                            ; 0048c0ee
    ADD EAX,0x1c5d708                   ; 0048c0ef
    PUSH EAX                            ; 0048c0f4
    CALL core_fire.cpp_CExplosion_activate_FUN_00486e40 ; 0048c0f5
        ;   XREF to: 00486e40 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CExplosion_activate_FUN_00486e40(CExplosion * this_ptr, CVector3f * position, float scale, float gore_multiplier)
    MOV EDX,dword ptr [0x01c5d704]      ; 0048c0fa | DAT_01c5d704
    INC EDX                             ; 0048c100
    ADD ESP,0x10                        ; 0048c101
    MOV dword ptr [0x01c5d704],EDX      ; 0048c104 | DAT_01c5d704
    CMP EDX,0xa                         ; 0048c10a
    JL 0x0048c119                       ; 0048c10d
        ;   XREF to: 0048c119 (CONDITIONAL_JUMP)  ; LAB_0048c119
    PUSH ESI                            ; 0048c10f
    XOR ESI,ESI                         ; 0048c110
    MOV dword ptr [0x01c5d704],ESI      ; 0048c112 | DAT_01c5d704
    POP ESI                             ; 0048c118
    PUSH EBX                            ; 0048c119
        ;   Label: LAB_0048c119
    PUSH 0x5814f4                       ; 0048c11a | = "xplode?.wav @ 6.0"
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048c11f
    PUSH EDI                            ; 0048c123
    MOV EBP,dword ptr [0x005bed68]      ; 0048c124 | DAT_005bed68
    PUSH EBP                            ; 0048c12a
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 0048c12b
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0048c130
    PUSH dword ptr [ESP + 0x20]         ; 0048c133
    PUSH EBX                            ; 0048c137
    PUSH EDI                            ; 0048c138
    CALL core_fire.cpp_CFireEffect_createCrater_FUN_0048c370 ; 0048c139
        ;   XREF to: 0048c370 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createCrater_FUN_0048c370(CFireEffect * this_ptr, CVector3f * position, float radius)
    ADD ESP,0xc                         ; 0048c13e
    MOV EDX,dword ptr [0x005b9284]      ; 0048c141 | INT_005b9284
    PUSH EDX                            ; 0048c147
    CALL xxx_unk.c_FUN_004940d0         ; 0048c148
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 0048c14d
    POP EBP                             ; 0048c150
    POP EDI                             ; 0048c151
    POP EBX                             ; 0048c152
    RET                                 ; 0048c153

