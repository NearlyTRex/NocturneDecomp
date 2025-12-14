; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_fire.cpp_CFireball_onCollision_FUN_004c1690(CFireball * this_ptr, CVector3f * collision_normal)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; Referenced Globals:
;   TerminatedCString s_rock_x_wav_00629cb3
;   TerminatedCString s_rock_x_wav_00629cbe
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CFireEffect g_CFireEffectInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_fire.cpp_CFireEffect_FUN_004c7db0
;   core_set.cpp_CDemonSet_FUN_00570fa0
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1690
        ;   Label: core_fire.cpp_CFireball_onCollision_FUN_004c1690
    PUSH ESI                            ; 004c1691
    PUSH EDI                            ; 004c1692
    PUSH EBP                            ; 004c1693
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c1694
    MOV EDX,dword ptr [EBX + 0x58]      ; 004c1698
    PUSH EDX                            ; 004c169b
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004c169c
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0x44]      ; 004c16a1
    ADD ESP,0x4                         ; 004c16a4
    TEST ECX,ECX                        ; 004c16a7
    JNZ 0x004c174d                      ; 004c16a9
        ;   XREF to: 004c174d (CONDITIONAL_JUMP)  ; LAB_004c174d
    XOR ESI,ESI                         ; 004c16af
    XOR EDI,EDI                         ; 004c16b1
    PUSH EDI                            ; 004c16b3
        ;   Label: LAB_004c16b3
    PUSH 0x1                            ; 004c16b4
    PUSH EDI                            ; 004c16b6
    PUSH EBX                            ; 004c16b7
    MOV EAX,[0x0067a3d0]                ; 004c16b8 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 004c16bd | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c7db0 ; 004c16be
        ;   XREF to: 004c7db0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c7db0(CFireEffect * this_ptr)
    ADD ESP,0x14                        ; 004c16c3
    PUSH 0xffff                         ; 004c16c6
    PUSH EDI                            ; 004c16cb
    PUSH 0x10000                        ; 004c16cc
    PUSH 0x10000                        ; 004c16d1
    PUSH EDI                            ; 004c16d6
    PUSH EBX                            ; 004c16d7
    MOV EDX,dword ptr [0x0067a3d0]      ; 004c16d8 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 004c16de | g_CFireEffectInstance
    INC ESI                             ; 004c16df
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004c16e0
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004c16e5
    CMP ESI,0x8                         ; 004c16e8
    JL 0x004c16b3                       ; 004c16eb
        ;   XREF to: 004c16b3 (CONDITIONAL_JUMP)  ; LAB_004c16b3
    PUSH 0x3f800000                     ; 004c16ed
    PUSH 0x0                            ; 004c16f2
    PUSH 0x0                            ; 004c16f4
    MOV ECX,dword ptr [0x006810c8]      ; 004c16f6 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 004c16fc
    PUSH ECX                            ; 004c1701 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570fa0 ; 004c1702
        ;   XREF to: 00570fa0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570fa0(CDemonSet * this_ptr)
    ADD ESP,0x14                        ; 004c1707
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 004c170a
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    SUB ESP,0x8                         ; 004c170f
    FLD float ptr [EBX + 0x8]           ; 004c1712
    FSTP double ptr [ESP]               ; 004c1715
    SUB ESP,0x8                         ; 004c1718
    FLD float ptr [EBX + 0x4]           ; 004c171b
    FSTP double ptr [ESP]               ; 004c171e
    SUB ESP,0x8                         ; 004c1721
    FLD float ptr [EBX]                 ; 004c1724
    FSTP double ptr [ESP]               ; 004c1726
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0 ; 004c1729
        ;   XREF to: 005a88e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 004c172e
    PUSH 0x629cb3                       ; 004c1731 | = "rock-x.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 004c1736
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   Label: LAB_004c1736
    ADD ESP,0x4                         ; 004c173b
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 004c173e
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV EAX,0x1                         ; 004c1743
    POP EBP                             ; 004c1748
    POP EDI                             ; 004c1749
    POP ESI                             ; 004c174a
    POP EBX                             ; 004c174b
    RET                                 ; 004c174c
    CMP ECX,0x2                         ; 004c174d
        ;   Label: LAB_004c174d
    JNZ 0x004c17b5                      ; 004c1750
        ;   XREF to: 004c17b5 (CONDITIONAL_JUMP)  ; LAB_004c17b5
    XOR ESI,ESI                         ; 004c1752
    MOV EDI,0x10000                     ; 004c1754
    PUSH 0xffff                         ; 004c1759
        ;   Label: LAB_004c1759
    PUSH 0x2                            ; 004c175e
    PUSH EDI                            ; 004c1760
    PUSH EDI                            ; 004c1761
    PUSH 0x0                            ; 004c1762
    PUSH EBX                            ; 004c1764
    MOV EBP,dword ptr [0x0067a3d0]      ; 004c1765 | g_CFireEffectPtr
    PUSH EBP                            ; 004c176b | g_CFireEffectInstance
    INC ESI                             ; 004c176c
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004c176d
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004c1772
    CMP ESI,0x8                         ; 004c1775
    JL 0x004c1759                       ; 004c1778
        ;   XREF to: 004c1759 (CONDITIONAL_JUMP)  ; LAB_004c1759
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 004c177a
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    SUB ESP,0x8                         ; 004c177f
    FLD float ptr [EBX + 0x8]           ; 004c1782
    FSTP double ptr [ESP]               ; 004c1785
    SUB ESP,0x8                         ; 004c1788
    FLD float ptr [EBX + 0x4]           ; 004c178b
    FSTP double ptr [ESP]               ; 004c178e
    SUB ESP,0x8                         ; 004c1791
    FLD float ptr [EBX]                 ; 004c1794
    FSTP double ptr [ESP]               ; 004c1796
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0 ; 004c1799
        ;   XREF to: 005a88e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 004c179e
    PUSH 0x3f4ccccd                     ; 004c17a1
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 004c17a6
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
    ADD ESP,0x4                         ; 004c17ab
    PUSH 0x629cbe                       ; 004c17ae | = "rock-x.wav"
    JMP 0x004c1736                      ; 004c17b3
        ;   XREF to: 004c1736 (UNCONDITIONAL_JUMP)  ; LAB_004c1736
    XOR EAX,EAX                         ; 004c17b5
        ;   Label: LAB_004c17b5
    POP EBP                             ; 004c17b7
    POP EDI                             ; 004c17b8
    POP ESI                             ; 004c17b9
    POP EBX                             ; 004c17ba
    RET                                 ; 004c17bb

