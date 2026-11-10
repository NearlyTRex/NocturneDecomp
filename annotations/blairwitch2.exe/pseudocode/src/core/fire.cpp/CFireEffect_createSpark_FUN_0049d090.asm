; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; int              Stack[0x10]:4   intensity_target
; int              Stack[0x14]:4   intensity_scale
; int              Stack[0x18]:4   spark_type
; int              Stack[0x1c]:4   fade_rate
;
; XREF[19]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00412760 at 004128fd
;   core_batman.cpp_CBatman_processDamage_FUN_00414290 at 0041442d
;   core_bride.cpp_CBride_processDamage_FUN_0041ead0 at 0041ec92
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00464f60 at 004650ed
;   core_dynamite.cpp_CDynamite_process_FUN_0047a1e0 at 0047a3c5
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 00486de0
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50 at 0049cf51
;   core_fire.cpp_CFireball_onCollision_FUN_004964c0 at 00496510
;   core_fire.cpp_CFireball_process_FUN_00495960 at 00495a71
;   core_fire.cpp_CToss_process_FUN_004993f0 at 00499540
;   ... and 9 more
;
; Referenced Globals:
;   undefined4 DAT_01c7f4f0
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d090
        ;   Label: core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
    PUSH EDI                            ; 0049d091
    PUSH EBP                            ; 0049d092
    MOV EDX,dword ptr [0x01c7f4f0]      ; 0049d093 | DAT_01c7f4f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d099
    ADD EAX,EDX                         ; 0049d0a0
    SHL EAX,0x2                         ; 0049d0a2
    MOV EBX,0x1c7f4f4                   ; 0049d0a5
    ADD EAX,EDX                         ; 0049d0aa
    INC EDX                             ; 0049d0ac
    SHL EAX,0x2                         ; 0049d0ad
    MOV dword ptr [0x01c7f4f0],EDX      ; 0049d0b0 | DAT_01c7f4f0
    ADD EBX,EAX                         ; 0049d0b6
    CMP EDX,0x100                       ; 0049d0b8
    JL 0x0049d0ca                       ; 0049d0be
        ;   XREF to: 0049d0ca (CONDITIONAL_JUMP)  ; LAB_0049d0ca
    PUSH ESI                            ; 0049d0c0
    XOR ESI,ESI                         ; 0049d0c1
    MOV dword ptr [0x01c7f4f0],ESI      ; 0049d0c3 | DAT_01c7f4f0
    POP ESI                             ; 0049d0c9
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049d0ca
        ;   Label: LAB_0049d0ca
    PUSH EDI                            ; 0049d0ce
    MOV EBP,dword ptr [ESP + 0x18]      ; 0049d0cf
    PUSH EBP                            ; 0049d0d3
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049d0d4
    PUSH EBX                            ; 0049d0d7
    CALL dword ptr [EAX]                ; 0049d0d8
    ADD ESP,0xc                         ; 0049d0da
    PUSH 0xffff                         ; 0049d0dd
    PUSH 0xc000                         ; 0049d0e2
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0049d0e7
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0049d0ec
    MOV EDX,EAX                         ; 0049d0ef
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049d0f1
    IMUL EDX                            ; 0049d0f5
    SHRD EAX,EDX,0x10                   ; 0049d0f7
    MOV dword ptr [EBX + 0x48],0x0      ; 0049d0fb
    MOV dword ptr [EBX + 0x40],EAX      ; 0049d102
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049d105
    MOV dword ptr [EBX + 0x44],EAX      ; 0049d109
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049d10c
    MOV dword ptr [EBX + 0x4c],EAX      ; 0049d110
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049d113
    MOV dword ptr [EBX + 0x50],EAX      ; 0049d117
    POP EBP                             ; 0049d11a
    POP EDI                             ; 0049d11b
    POP EBX                             ; 0049d11c
    RET                                 ; 0049d11d

