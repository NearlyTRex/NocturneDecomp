; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireball_onCollision_FUN_004964c0(CFireball *this_ptr,CVector3f *collision_normal)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
;
; Referenced Globals:
;   TerminatedCString s_rock_x_wav_005d540a
;   TerminatedCString s_rock_x_wav_005d5415
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createFireball_FUN_0049d500
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00534800
;   sound_sndmain.cpp_FUN_00550110
;   sound_sndmain.cpp_FUN_005506b0
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxVolume_FUN_00550270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004964c0
        ;   Label: core_fire.cpp_CFireball_onCollision_FUN_004964c0
    PUSH ESI                            ; 004964c1
    PUSH EDI                            ; 004964c2
    PUSH EBP                            ; 004964c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004964c4
    MOV EDX,dword ptr [EBX + 0x60]      ; 004964c8
    PUSH EDX                            ; 004964cb
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004964cc
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0x4c]      ; 004964d1
    ADD ESP,0x4                         ; 004964d4
    TEST ECX,ECX                        ; 004964d7
    JNZ 0x0049657d                      ; 004964d9
        ;   XREF to: 0049657d (CONDITIONAL_JUMP)  ; LAB_0049657d
    XOR ESI,ESI                         ; 004964df
    XOR EDI,EDI                         ; 004964e1
    PUSH EDI                            ; 004964e3
        ;   Label: LAB_004964e3
    PUSH 0x1                            ; 004964e4
    PUSH EDI                            ; 004964e6
    PUSH EBX                            ; 004964e7
    MOV EAX,[0x00614d30]                ; 004964e8 | DAT_00614d30
    PUSH EAX                            ; 004964ed
    CALL core_fire.cpp_CFireEffect_createFireball_FUN_0049d500 ; 004964ee
        ;   XREF to: 0049d500 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFireball_FUN_0049d500(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 004964f3
    PUSH 0xffff                         ; 004964f6
    PUSH EDI                            ; 004964fb
    PUSH 0x10000                        ; 004964fc
    PUSH 0x10000                        ; 00496501
    PUSH EDI                            ; 00496506
    PUSH EBX                            ; 00496507
    MOV EDX,dword ptr [0x00614d30]      ; 00496508 | DAT_00614d30
    PUSH EDX                            ; 0049650e
    INC ESI                             ; 0049650f
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 00496510
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00496515
    CMP ESI,0x8                         ; 00496518
    JL 0x004964e3                       ; 0049651b
        ;   XREF to: 004964e3 (CONDITIONAL_JUMP)  ; LAB_004964e3
    PUSH 0x3f800000                     ; 0049651d
    PUSH 0x0                            ; 00496522
    PUSH 0x0                            ; 00496524
    MOV ECX,dword ptr [0x0061b5a8]      ; 00496526 | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 0049652c
    PUSH ECX                            ; 00496531 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00534800 ; 00496532
        ;   XREF to: 00534800 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00534800(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 00496537
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0049653a
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    SUB ESP,0x8                         ; 0049653f
    FLD float ptr [EBX + 0x8]           ; 00496542
    FSTP double ptr [ESP]               ; 00496545
    SUB ESP,0x8                         ; 00496548
    FLD float ptr [EBX + 0x4]           ; 0049654b
    FSTP double ptr [ESP]               ; 0049654e
    SUB ESP,0x8                         ; 00496551
    FLD float ptr [EBX]                 ; 00496554
    FSTP double ptr [ESP]               ; 00496556
    CALL sound_sndmain.cpp_FUN_00550110 ; 00496559
        ;   XREF to: 00550110 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00550110(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 0049655e
    PUSH 0x5d540a                       ; 00496561 | = "rock-x.wav"
    CALL sound_sndmain.cpp_FUN_005506b0 ; 00496566
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
        ;   Label: LAB_00496566
    ADD ESP,0x4                         ; 0049656b
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 0049656e
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV EAX,0x1                         ; 00496573
    POP EBP                             ; 00496578
    POP EDI                             ; 00496579
    POP ESI                             ; 0049657a
    POP EBX                             ; 0049657b
    RET                                 ; 0049657c
    CMP ECX,0x2                         ; 0049657d
        ;   Label: LAB_0049657d
    JNZ 0x004965e5                      ; 00496580
        ;   XREF to: 004965e5 (CONDITIONAL_JUMP)  ; LAB_004965e5
    XOR ESI,ESI                         ; 00496582
    MOV EDI,0x10000                     ; 00496584
    PUSH 0xffff                         ; 00496589
        ;   Label: LAB_00496589
    PUSH 0x2                            ; 0049658e
    PUSH EDI                            ; 00496590
    PUSH EDI                            ; 00496591
    PUSH 0x0                            ; 00496592
    PUSH EBX                            ; 00496594
    MOV EBP,dword ptr [0x00614d30]      ; 00496595 | DAT_00614d30
    PUSH EBP                            ; 0049659b
    INC ESI                             ; 0049659c
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 0049659d
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004965a2
    CMP ESI,0x8                         ; 004965a5
    JL 0x00496589                       ; 004965a8
        ;   XREF to: 00496589 (CONDITIONAL_JUMP)  ; LAB_00496589
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 004965aa
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    SUB ESP,0x8                         ; 004965af
    FLD float ptr [EBX + 0x8]           ; 004965b2
    FSTP double ptr [ESP]               ; 004965b5
    SUB ESP,0x8                         ; 004965b8
    FLD float ptr [EBX + 0x4]           ; 004965bb
    FSTP double ptr [ESP]               ; 004965be
    SUB ESP,0x8                         ; 004965c1
    FLD float ptr [EBX]                 ; 004965c4
    FSTP double ptr [ESP]               ; 004965c6
    CALL sound_sndmain.cpp_FUN_00550110 ; 004965c9
        ;   XREF to: 00550110 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00550110(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 004965ce
    PUSH 0x3f4ccccd                     ; 004965d1
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_00550270 ; 004965d6
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_00550270(float volume)
    ADD ESP,0x4                         ; 004965db
    PUSH 0x5d5415                       ; 004965de | = "rock-x.wav"
    JMP 0x00496566                      ; 004965e3
        ;   XREF to: 00496566 (UNCONDITIONAL_JUMP)  ; LAB_00496566
    XOR EAX,EAX                         ; 004965e5
        ;   Label: LAB_004965e5
    POP EBP                             ; 004965e7
    POP EDI                             ; 004965e8
    POP ESI                             ; 004965e9
    POP EBX                             ; 004965ea
    RET                                 ; 004965eb

