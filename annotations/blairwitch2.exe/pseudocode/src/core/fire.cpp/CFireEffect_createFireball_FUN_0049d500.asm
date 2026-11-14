; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_0049d500(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; int              Stack[0x10]:4   lighting_active
; uint             Stack[0x14]:4   sfx_handle
;
; XREF[3]:
;   core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_00486a80 at 00486c65
;   core_fire.cpp_CFireball_onCollision_FUN_004964c0 at 004964ee
;   core_larva.cpp_CLarva_process_FUN_004e0670 at 004e0b2e
;
; Referenced Globals:
;   undefined4 DAT_01c913d0
;   undefined4 g_FireballPool[0].base.vtable
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00550da0
;   sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00550ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d500
        ;   Label: core_fire.cpp_CFireEffect_createFireball_FUN_0049d500
    PUSH EDI                            ; 0049d501
    PUSH EBP                            ; 0049d502
    MOV EAX,[0x01c913d0]                ; 0049d503 | DAT_01c913d0
    LEA EBX,[EAX*0x4 + 0x0]             ; 0049d508
    ADD EBX,EAX                         ; 0049d50f
    SHL EBX,0x3                         ; 0049d511
    ADD EBX,EAX                         ; 0049d514
    SHL EBX,0x2                         ; 0049d516
    LEA EDX,[EAX + 0x1]                 ; 0049d519
    ADD EBX,0x1c913d4                   ; 0049d51c
    MOV dword ptr [0x01c913d0],EDX      ; 0049d522 | DAT_01c913d0
    CMP EDX,0x40                        ; 0049d528
    JL 0x0049d537                       ; 0049d52b
        ;   XREF to: 0049d537 (CONDITIONAL_JUMP)  ; LAB_0049d537
    PUSH ESI                            ; 0049d52d
    XOR ESI,ESI                         ; 0049d52e
    MOV dword ptr [0x01c913d0],ESI      ; 0049d530 | DAT_01c913d0
    POP ESI                             ; 0049d536
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049d537
        ;   Label: LAB_0049d537
    PUSH EDI                            ; 0049d53b
    MOV EBP,dword ptr [ESP + 0x18]      ; 0049d53c
    PUSH EBP                            ; 0049d540
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049d541 | g_FireballPool[0].base.vtable
    PUSH EBX                            ; 0049d544
    CALL dword ptr [EAX]                ; 0049d545
    ADD ESP,0xc                         ; 0049d547
    PUSH 0xffff                         ; 0049d54a
    PUSH 0xc000                         ; 0049d54f
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0049d554
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0049d559
    MOV dword ptr [EBX + 0x40],EAX      ; 0049d55c
    CMP dword ptr [ESP + 0x1c],0x0      ; 0049d55f
    JNZ 0x0049d5a0                      ; 0049d564
        ;   XREF to: 0049d5a0 (CONDITIONAL_JUMP)  ; LAB_0049d5a0
    MOV dword ptr [EBX + 0x44],0x2000   ; 0049d566
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049d56d
        ;   Label: LAB_0049d56d
    PUSH EBX                            ; 0049d571
    MOV dword ptr [EBX + 0x4c],EAX      ; 0049d572
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049d575
    MOV dword ptr [EBX + 0x48],0x0      ; 0049d579
    PUSH EAX                            ; 0049d580
    MOV dword ptr [EBX + 0x60],EAX      ; 0049d581
    CALL sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00550da0 ; 0049d584
        ;   XREF to: 00550da0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00550da0(uint sfx_handle, CVector3f * position_source_ptr)
    ADD ESP,0x8                         ; 0049d589
    LEA EAX,[EBX + 0xc]                 ; 0049d58c
    PUSH EAX                            ; 0049d58f
    MOV ECX,dword ptr [EBX + 0x60]      ; 0049d590
    PUSH ECX                            ; 0049d593
    CALL sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00550ea0 ; 0049d594
        ;   XREF to: 00550ea0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00550ea0(uint sfx_handle, CVector3f * velocity_source_ptr)
    ADD ESP,0x8                         ; 0049d599
    POP EBP                             ; 0049d59c
    POP EDI                             ; 0049d59d
    POP EBX                             ; 0049d59e
    RET                                 ; 0049d59f
    MOV dword ptr [EBX + 0x44],0x8000   ; 0049d5a0
        ;   Label: LAB_0049d5a0
    JMP 0x0049d56d                      ; 0049d5a7
        ;   XREF to: 0049d56d (UNCONDITIONAL_JUMP)  ; LAB_0049d56d

