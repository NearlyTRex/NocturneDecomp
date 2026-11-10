; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   scale
; float            Stack[0x10]:4   gore_multiplier
; float            Stack[0x14]:4   radius
;
; XREF[6]:
;   core_charactr.cpp_FUN_00427260 at 00427330
;   core_crate.cpp_FUN_0043a350 at 0043a3e4
;   core_event.cpp_FUN_00489670 at 0048a5d4
;   core_fire.cpp_CToss_process_FUN_004993f0 at 0049945f
;   core_flamecan.cpp_CFlameCan_process_FUN_004a0920 at 004a09d5
;   core_vessel.cpp_CCryptVessel_process_FUN_00585230 at 00585720
;
; Referenced Globals:
;   TerminatedCString s_xplode_wav_6_0_005d57fa
;   undefined4 DAT_0061c068
;   undefined4 DAT_01c975e0
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createCrater_FUN_0049e630
;   core_fire.cpp_FUN_00498d30
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e360
        ;   Label: core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360
    PUSH EDI                            ; 0049e361
    PUSH EBP                            ; 0049e362
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049e363
    MOV EAX,[0x01c975e0]                ; 0049e367 | DAT_01c975e0
    SHL EAX,0x2                         ; 0049e36c
    PUSH dword ptr [ESP + 0x1c]         ; 0049e36f
    MOV EDX,EAX                         ; 0049e373
    SHL EAX,0x3                         ; 0049e375
    PUSH dword ptr [ESP + 0x1c]         ; 0049e378
    SUB EAX,EDX                         ; 0049e37c
    PUSH EBX                            ; 0049e37e
    ADD EAX,0x1c975e4                   ; 0049e37f
    PUSH EAX                            ; 0049e384
    CALL core_fire.cpp_FUN_00498d30     ; 0049e385
        ;   XREF to: 00498d30 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_00498d30()
    MOV EDX,dword ptr [0x01c975e0]      ; 0049e38a | DAT_01c975e0
    INC EDX                             ; 0049e390
    ADD ESP,0x10                        ; 0049e391
    MOV dword ptr [0x01c975e0],EDX      ; 0049e394 | DAT_01c975e0
    CMP EDX,0xa                         ; 0049e39a
    JL 0x0049e3a9                       ; 0049e39d
        ;   XREF to: 0049e3a9 (CONDITIONAL_JUMP)  ; LAB_0049e3a9
    PUSH ESI                            ; 0049e39f
    XOR ESI,ESI                         ; 0049e3a0
    MOV dword ptr [0x01c975e0],ESI      ; 0049e3a2 | DAT_01c975e0
    POP ESI                             ; 0049e3a8
    PUSH EBX                            ; 0049e3a9
        ;   Label: LAB_0049e3a9
    PUSH 0x5d57fa                       ; 0049e3aa | = "xplode?.wav @ 6.0"
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049e3af
    PUSH EDI                            ; 0049e3b3
    MOV EBP,dword ptr [0x0061c068]      ; 0049e3b4 | DAT_0061c068
    PUSH EBP                            ; 0049e3ba
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 0049e3bb
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0049e3c0
    PUSH dword ptr [ESP + 0x20]         ; 0049e3c3
    PUSH EBX                            ; 0049e3c7
    PUSH EDI                            ; 0049e3c8
    CALL core_fire.cpp_CFireEffect_createCrater_FUN_0049e630 ; 0049e3c9
        ;   XREF to: 0049e630 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createCrater_FUN_0049e630(CFireEffect * this_ptr, CVector3f * position, float radius)
    ADD ESP,0xc                         ; 0049e3ce
    POP EBP                             ; 0049e3d1
    POP EDI                             ; 0049e3d2
    POP EBX                             ; 0049e3d3
    RET                                 ; 0049e3d4

