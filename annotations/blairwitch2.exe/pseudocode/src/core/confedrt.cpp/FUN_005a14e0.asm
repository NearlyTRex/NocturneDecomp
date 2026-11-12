; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_FUN_005a14e0(CDemonActor *param_1)
;
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_confedrt.cpp_CConfederate_processMotionEvent_FUN_005a1350 at 005a136d
;   core_confedrt.cpp_FUN_005a1030 at 005a10ef
;
; Referenced Globals:
;   TerminatedCString s_shotgun_wav_005efd2c
;   undefined4 DAT_005efd3b
;   undefined4 DAT_005efd3f
;   undefined4 DAT_005fedb8
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   undefined4 g_CDemonSetInstance.ray_origin.y
;   undefined4 g_CDemonSetInstance.ray_origin.z
;   undefined4 g_CDemonSetInstance.ray_target.x
;   undefined4 g_CDemonSetInstance.ray_target.y
;   undefined4 g_CDemonSetInstance.ray_target.z
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_fire.cpp_CFireEffect_createMuzzleEffect_FUN_0049d170
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   core_setcolid.cpp_FUN_00535ee0
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a14e0
        ;   Label: core_confedrt.cpp_FUN_005a14e0
    PUSH ESI                            ; 005a14e1
    PUSH EDI                            ; 005a14e2
    PUSH EBP                            ; 005a14e3
    MOV EBP,ESP                         ; 005a14e4
    SUB ESP,0x158                       ; 005a14e6
    AND ESP,0xfffffff8                  ; 005a14ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a14ef
    CMP dword ptr [EBX + 0x10a78],0x0   ; 005a14f2
    JNZ 0x005a1502                      ; 005a14f9
        ;   XREF to: 005a1502 (CONDITIONAL_JUMP)  ; LAB_005a1502
    MOV ESP,EBP                         ; 005a14fb
    POP EBP                             ; 005a14fd
    POP EDI                             ; 005a14fe
    POP ESI                             ; 005a14ff
    POP EBX                             ; 005a1500
    RET                                 ; 005a1501
    MOV EDX,dword ptr [EBX + 0x1185c]   ; 005a1502
        ;   Label: LAB_005a1502
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a1508
    SUB EAX,EDX                         ; 005a150f
    SHL EAX,0x4                         ; 005a1511
    LEA EDX,[EBX + 0x1134]              ; 005a1514
    ADD EAX,EDX                         ; 005a151a
    PUSH EAX                            ; 005a151c
    LEA ESI,[ESP + 0x114]               ; 005a151d
    PUSH 0x265370c                      ; 005a1524 | DAT_0265370c
    LEA EDI,[ESP + 0x94]                ; 005a1529
    MOV dword ptr [ESP + 0x15c],EDX     ; 005a1530
    CALL core_xform.cpp_FUN_00591530    ; 005a1537
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 005a153c
    LEA EAX,[ESP + 0x8c]                ; 005a153f
    LEA ESI,[ESP + 0x110]               ; 005a1546
    PUSH EAX                            ; 005a154d
    MOVSD ES:EDI,ESI                    ; 005a154e
    MOVSD ES:EDI,ESI                    ; 005a154f
    MOVSD ES:EDI,ESI                    ; 005a1550
    PUSH EBX                            ; 005a1551
    LEA ESI,[ESP + 0xb8]                ; 005a1552
    LEA EDI,[ESP + 0x58]                ; 005a1559
    CALL core_actor.cpp_FUN_00408d70    ; 005a155d
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xb8]                ; 005a1562
    ADD ESP,0x8                         ; 005a1569
    MOVSD ES:EDI,ESI                    ; 005a156c
    MOVSD ES:EDI,ESI                    ; 005a156d
    MOVSD ES:EDI,ESI                    ; 005a156e
    MOV EDX,dword ptr [EBX + 0x11858]   ; 005a156f
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a1575
    SUB EAX,EDX                         ; 005a157c
    MOV ESI,dword ptr [ESP + 0x154]     ; 005a157e
    SHL EAX,0x4                         ; 005a1585
    ADD EAX,ESI                         ; 005a1588
    PUSH EAX                            ; 005a158a
    PUSH 0x265370c                      ; 005a158b | DAT_0265370c
    LEA ESI,[ESP + 0x7c]                ; 005a1590
    LEA EDI,[ESP + 0x13c]               ; 005a1594
    CALL core_xform.cpp_FUN_00591530    ; 005a159b
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 005a15a0
    LEA EAX,[ESP + 0x134]               ; 005a15a3
    LEA ESI,[ESP + 0x74]                ; 005a15aa
    PUSH EAX                            ; 005a15ae
    MOVSD ES:EDI,ESI                    ; 005a15af
    MOVSD ES:EDI,ESI                    ; 005a15b0
    MOVSD ES:EDI,ESI                    ; 005a15b1
    PUSH EBX                            ; 005a15b2
    LEA ESI,[ESP + 0xe8]                ; 005a15b3
    LEA EDI,[ESP + 0xc4]                ; 005a15ba
    CALL core_actor.cpp_FUN_00408d70    ; 005a15c1
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 005a15c6
    LEA ESI,[ESP + 0xe0]                ; 005a15c9
    FLD float ptr [ESP + 0x50]          ; 005a15d0
    FLD float ptr [ESP + 0x54]          ; 005a15d4
    MOVSD ES:EDI,ESI                    ; 005a15d8
    MOVSD ES:EDI,ESI                    ; 005a15d9
    MOVSD ES:EDI,ESI                    ; 005a15da
    FLD float ptr [ESP + 0x58]          ; 005a15db
    LEA EDI,[ESP + 0x104]               ; 005a15df
    LEA ESI,[ESP + 0x11c]               ; 005a15e6
    FXCH ST2                            ; 005a15ed
    FSUB float ptr [ESP + 0xbc]         ; 005a15ef
    FXCH                                ; 005a15f6
    FSUB float ptr [ESP + 0xc0]         ; 005a15f8
    FXCH ST2                            ; 005a15ff
    FSUB float ptr [ESP + 0xc4]         ; 005a1601
    FXCH                                ; 005a1608
    FSTP float ptr [ESP + 0x11c]        ; 005a160a
    FXCH                                ; 005a1611
    FSTP float ptr [ESP + 0x120]        ; 005a1613
    FSTP float ptr [ESP + 0x124]        ; 005a161a
    MOVSD ES:EDI,ESI                    ; 005a1621
    MOVSD ES:EDI,ESI                    ; 005a1622
    MOVSD ES:EDI,ESI                    ; 005a1623
    FLD float ptr [0x005efd3b]          ; 005a1624 | DAT_005efd3b
    FLD float ptr [ESP + 0x104]         ; 005a162a
    FMUL ST1                            ; 005a1631
    FLD float ptr [ESP + 0x108]         ; 005a1633
    FMUL ST2                            ; 005a163a
    FLD float ptr [ESP + 0x10c]         ; 005a163c
    FMULP ST3                           ; 005a1643
    LEA EAX,[ESP + 0xc8]                ; 005a1645
    LEA EDX,[ESP + 0x104]               ; 005a164c
    LEA EDI,[ESP + 0xc8]                ; 005a1653
    LEA ESI,[ESP + 0x140]               ; 005a165a
    FXCH                                ; 005a1661
    FSTP float ptr [ESP + 0x104]        ; 005a1663
    FSTP float ptr [ESP + 0x108]        ; 005a166a
    FSTP float ptr [ESP + 0x10c]        ; 005a1671
    FLD float ptr [ESP + 0x104]         ; 005a1678
    FLD float ptr [ESP + 0x108]         ; 005a167f
    FLD float ptr [ESP + 0x10c]         ; 005a1686
    FXCH ST2                            ; 005a168d
    FADD float ptr [ESP + 0xbc]         ; 005a168f
    FXCH                                ; 005a1696
    FADD float ptr [ESP + 0xc0]         ; 005a1698
    FXCH ST2                            ; 005a169f
    FADD float ptr [ESP + 0xc4]         ; 005a16a1
    FXCH                                ; 005a16a8
    FSTP float ptr [ESP + 0x140]        ; 005a16aa
    FXCH                                ; 005a16b1
    FSTP float ptr [ESP + 0x144]        ; 005a16b3
    FSTP float ptr [ESP + 0x148]        ; 005a16ba
    MOVSD ES:EDI,ESI                    ; 005a16c1
    MOVSD ES:EDI,ESI                    ; 005a16c2
    MOVSD ES:EDI,ESI                    ; 005a16c3
    CMP EDX,EAX                         ; 005a16c4
    JZ 0x005a16f2                       ; 005a16c6
        ;   XREF to: 005a16f2 (CONDITIONAL_JUMP)  ; LAB_005a16f2
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005a16c8
    MOV dword ptr [ESP + 0x104],EAX     ; 005a16cf
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005a16d6
    MOV dword ptr [ESP + 0x108],EAX     ; 005a16dd
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005a16e4
    MOV dword ptr [ESP + 0x10c],EAX     ; 005a16eb
    LEA EAX,[EBX + 0x3c]                ; 005a16f2
        ;   Label: LAB_005a16f2
    PUSH EAX                            ; 005a16f5
    LEA EAX,[ESP + 0x108]               ; 005a16f6
    PUSH EAX                            ; 005a16fd
    MOV EDI,dword ptr [0x00614d30]      ; 005a16fe | DAT_00614d30
    PUSH EDI                            ; 005a1704
    CALL core_fire.cpp_CFireEffect_createMuzzleEffect_FUN_0049d170 ; 005a1705
        ;   XREF to: 0049d170 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleEffect_FUN_0049d170(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 005a170a
    PUSH 0xffff                         ; 005a170d
    PUSH 0x0                            ; 005a1712
    LEA EAX,[ESP + 0xc4]                ; 005a1714
    PUSH 0x3fc00000                     ; 005a171b
    PUSH EAX                            ; 005a1720
    MOV EAX,[0x00614d30]                ; 005a1721 | DAT_00614d30
    PUSH EAX                            ; 005a1726
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 005a1727
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 005a172c
    LEA EAX,[ESP + 0x50]                ; 005a172f
    PUSH EAX                            ; 005a1733
    PUSH 0x5efd2c                       ; 005a1734 | = "shotgun.wav"
    PUSH EBX                            ; 005a1739
    MOV EDX,dword ptr [0x0061c068]      ; 005a173a | DAT_0061c068
    PUSH EDX                            ; 005a1740
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a1741
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a1746
    LEA EDX,[ESP + 0x98]                ; 005a1749
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a1750
    PUSH EDX                            ; 005a1756
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005a1757
    PUSH EAX                            ; 005a175d
    CALL dword ptr [ESI + 0x5c]         ; 005a175e
    ADD ESP,0x8                         ; 005a1761
    LEA EAX,[ESP + 0x98]                ; 005a1764
    PUSH EAX                            ; 005a176b
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 005a176c
    PUSH ECX                            ; 005a1772
    LEA ESI,[ESP + 0xac]                ; 005a1773
    LEA EDI,[ESP + 0x100]               ; 005a177a
    CALL core_actor.cpp_FUN_00408d70    ; 005a1781
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xac]                ; 005a1786
    LEA EAX,[ESP + 0x100]               ; 005a178d
    ADD ESP,0x8                         ; 005a1794
    LEA EDX,[ESP + 0x98]                ; 005a1797
    MOVSD ES:EDI,ESI                    ; 005a179e
    MOVSD ES:EDI,ESI                    ; 005a179f
    MOVSD ES:EDI,ESI                    ; 005a17a0
    CMP EDX,EAX                         ; 005a17a1
    JZ 0x005a17cf                       ; 005a17a3
        ;   XREF to: 005a17cf (CONDITIONAL_JUMP)  ; LAB_005a17cf
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005a17a5
    MOV dword ptr [ESP + 0x98],EAX      ; 005a17ac
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005a17b3
    MOV dword ptr [ESP + 0x9c],EAX      ; 005a17ba
    MOV EAX,dword ptr [ESP + 0x100]     ; 005a17c1
    MOV dword ptr [ESP + 0xa0],EAX      ; 005a17c8
    LEA EDI,[ESP + 0x128]               ; 005a17cf
        ;   Label: LAB_005a17cf
    LEA ESI,[ESP + 0x50]                ; 005a17d6
    MOVSD ES:EDI,ESI                    ; 005a17da
    MOVSD ES:EDI,ESI                    ; 005a17db
    MOVSD ES:EDI,ESI                    ; 005a17dc
    MOV ESI,dword ptr [0x0061b5a8]      ; 005a17dd | g_CDemonSetPtr
    PUSH ESI                            ; 005a17e3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005a17e4
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005a17e9
    PUSH 0x1                            ; 005a17ec
    MOV EDI,dword ptr [0x0061b5a8]      ; 005a17ee | g_CDemonSetPtr
    PUSH EDI                            ; 005a17f4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 005a17f5
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 005a17fa
    PUSH EBX                            ; 005a17fd
    MOV EAX,[0x0061b5a8]                ; 005a17fe | g_CDemonSetPtr
    PUSH EAX                            ; 005a1803 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 005a1804
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005a1809
    LEA EAX,[ESP + 0x98]                ; 005a180c
    PUSH EAX                            ; 005a1813
    LEA EAX,[ESP + 0x12c]               ; 005a1814
    PUSH EAX                            ; 005a181b
    MOV EDX,dword ptr [0x0061b5a8]      ; 005a181c | g_CDemonSetPtr
    PUSH EDX                            ; 005a1822 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 005a1823
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x160],EAX     ; 005a1828
    FLD float ptr [ESP + 0x160]         ; 005a182f
    ADD ESP,0xc                         ; 005a1836
    FLDZ                                ; 005a1839
    FXCH                                ; 005a183b
    FSTP double ptr [ESP]               ; 005a183d
    FCOMP double ptr [ESP]              ; 005a1840
    FNSTSW AX                           ; 005a1843
    SAHF                                ; 005a1845
    JA 0x005a18a2                       ; 005a1846
        ;   XREF to: 005a18a2 (CONDITIONAL_JUMP)  ; LAB_005a18a2
    FLD1                                ; 005a1848
    FCOMP double ptr [ESP]              ; 005a184a
    FNSTSW AX                           ; 005a184d
    SAHF                                ; 005a184f
    JC 0x005a18a2                       ; 005a1850
        ;   XREF to: 005a18a2 (CONDITIONAL_JUMP)  ; LAB_005a18a2
    MOV ECX,dword ptr [0x007bdc94]      ; 005a1852 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 005a1858 | g_CDemonSetPtr
    PUSH ECX                            ; 005a185d
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005a185e | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 005a1864
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005a1865
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005a186a
    MOV dword ptr [ESP + 0x150],EAX     ; 005a186d
    TEST EAX,EAX                        ; 005a1874
    JZ 0x005a18b7                       ; 005a1876
        ;   XREF to: 005a18b7 (CONDITIONAL_JUMP)  ; LAB_005a18b7
    PUSH EAX                            ; 005a1878
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005a1879
    CALL dword ptr [EDX + 0x114]        ; 005a187f
    ADD ESP,0x4                         ; 005a1885
    TEST EAX,EAX                        ; 005a1888
    JLE 0x005a18b7                      ; 005a188a
        ;   XREF to: 005a18b7 (CONDITIONAL_JUMP)  ; LAB_005a18b7
    MOV EDI,dword ptr [0x0061b5a8]      ; 005a188c | g_CDemonSetPtr
        ;   Label: LAB_005a188c
    PUSH EDI                            ; 005a1892 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005a1893
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005a1898
    MOV ESP,EBP                         ; 005a189b
    POP EBP                             ; 005a189d
    POP EDI                             ; 005a189e
    POP ESI                             ; 005a189f
    POP EBX                             ; 005a18a0
    RET                                 ; 005a18a1
    MOV EAX,[0x0061b5a8]                ; 005a18a2 | g_CDemonSetPtr
        ;   Label: LAB_005a18a2
    PUSH EAX                            ; 005a18a7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005a18a8
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005a18ad
    MOV ESP,EBP                         ; 005a18b0
    POP EBP                             ; 005a18b2
    POP EDI                             ; 005a18b3
    POP ESI                             ; 005a18b4
    POP EBX                             ; 005a18b5
    RET                                 ; 005a18b6
    CMP dword ptr [ESP + 0x150],0x0     ; 005a18b7
        ;   Label: LAB_005a18b7
    JZ 0x005a188c                       ; 005a18bf
        ;   XREF to: 005a188c (CONDITIONAL_JUMP)  ; LAB_005a188c
    LEA EAX,[ESP + 0x8]                 ; 005a18c1
    PUSH EAX                            ; 005a18c5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 005a18c6
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,[0x005fedb8]                ; 005a18cb | DAT_005fedb8
    ADD ESP,0x4                         ; 005a18d0
    MOV dword ptr [ESP + 0xc],EAX       ; 005a18d3
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 005a18d7
    MOV EAX,[0x0061b5a8]                ; 005a18df | g_CDemonSetPtr
    LEA EDX,[EAX + 0x14d11c]            ; 005a18e4
    LEA EDI,[ESP + 0xec]                ; 005a18ea
    LEA ESI,[ESP + 0x5c]                ; 005a18f1
    FLD float ptr [EDX]                 ; 005a18f5 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EDX + 0x4]           ; 005a18f7 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EDX + 0x8]           ; 005a18fa | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 005a18fd
    FSUB float ptr [EAX + 0x14d110]     ; 005a18ff | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 005a1905
    FSUB float ptr [EAX + 0x14d114]     ; 005a1907 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 005a190d
    FSUB float ptr [EAX + 0x14d118]     ; 005a190f | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 005a1915
    FSTP float ptr [ESP + 0x5c]         ; 005a1917
    FXCH                                ; 005a191b
    FSTP float ptr [ESP + 0x60]         ; 005a191d
    FSTP float ptr [ESP + 0x64]         ; 005a1921
    MOVSD ES:EDI,ESI                    ; 005a1925
    MOVSD ES:EDI,ESI                    ; 005a1926
    MOVSD ES:EDI,ESI                    ; 005a1927
    FLD float ptr [ESP + 0xf0]          ; 005a1928
    FMUL ST0                            ; 005a192f
    FLD float ptr [ESP + 0xec]          ; 005a1931
    FMUL ST0                            ; 005a1938
    FADDP                               ; 005a193a
    FLD float ptr [ESP + 0xf4]          ; 005a193c
    FMUL ST0                            ; 005a1943
    FADDP                               ; 005a1945
    FSQRT                               ; 005a1947
    FDIVR double ptr [0x005efd3f]       ; 005a1949 | DAT_005efd3f
    FLD float ptr [ESP + 0xec]          ; 005a194f
    FXCH                                ; 005a1956
    FSTP float ptr [ESP + 0x14c]        ; 005a1958
    FMUL float ptr [ESP + 0x14c]        ; 005a195f
    FLD float ptr [ESP + 0xf0]          ; 005a1966
    FMUL float ptr [ESP + 0x14c]        ; 005a196d
    FLD float ptr [ESP + 0xf4]          ; 005a1974
    FMUL float ptr [ESP + 0x14c]        ; 005a197b
    LEA EDX,[ESP + 0x44]                ; 005a1982
    LEA EDI,[ESP + 0x44]                ; 005a1986
    LEA ESI,[ESP + 0xd4]                ; 005a198a
    LEA EAX,[ESP + 0x14]                ; 005a1991
    FXCH ST2                            ; 005a1995
    FSTP float ptr [ESP + 0xd4]         ; 005a1997
    FSTP float ptr [ESP + 0xd8]         ; 005a199e
    FSTP float ptr [ESP + 0xdc]         ; 005a19a5
    MOVSD ES:EDI,ESI                    ; 005a19ac
    MOVSD ES:EDI,ESI                    ; 005a19ad
    MOVSD ES:EDI,ESI                    ; 005a19ae
    CMP EAX,EDX                         ; 005a19af
    JZ 0x005a19cb                       ; 005a19b1
        ;   XREF to: 005a19cb (CONDITIONAL_JUMP)  ; LAB_005a19cb
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a19b3
    MOV dword ptr [ESP + 0x14],EAX      ; 005a19b7
    MOV EAX,dword ptr [ESP + 0x48]      ; 005a19bb
    MOV dword ptr [ESP + 0x18],EAX      ; 005a19bf
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005a19c3
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a19c7
    MOV EAX,[0x0061b5a8]                ; 005a19cb | g_CDemonSetPtr
        ;   Label: LAB_005a19cb
    ADD EAX,0x14d138                    ; 005a19d0
    PUSH EAX                            ; 005a19d5
    MOV EDX,dword ptr [ESP + 0x154]     ; 005a19d6
    PUSH EDX                            ; 005a19dd
    LEA ESI,[ESP + 0x88]                ; 005a19de
    LEA EDI,[ESP + 0x70]                ; 005a19e5
    CALL core_actor.cpp_FUN_00408de0    ; 005a19e9
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x88]                ; 005a19ee
    LEA EAX,[ESP + 0x70]                ; 005a19f5
    ADD ESP,0x8                         ; 005a19f9
    LEA EDX,[ESP + 0x24]                ; 005a19fc
    MOVSD ES:EDI,ESI                    ; 005a1a00
    MOVSD ES:EDI,ESI                    ; 005a1a01
    MOVSD ES:EDI,ESI                    ; 005a1a02
    CMP EDX,EAX                         ; 005a1a03
    JZ 0x005a1a1f                       ; 005a1a05
        ;   XREF to: 005a1a1f (CONDITIONAL_JUMP)  ; LAB_005a1a1f
    MOV EAX,dword ptr [ESP + 0x68]      ; 005a1a07
    MOV dword ptr [ESP + 0x24],EAX      ; 005a1a0b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005a1a0f
    MOV dword ptr [ESP + 0x28],EAX      ; 005a1a13
    MOV EAX,dword ptr [ESP + 0x70]      ; 005a1a17
    MOV dword ptr [ESP + 0x2c],EAX      ; 005a1a1b
    MOV ECX,0x65                        ; 005a1a1f
        ;   Label: LAB_005a1a1f
    MOV EDX,dword ptr [ESP + 0x150]     ; 005a1a24
    LEA EAX,[ESP + 0x8]                 ; 005a1a2b
    MOV dword ptr [ESP + 0x40],EBX      ; 005a1a2f
    PUSH EAX                            ; 005a1a33
    MOV EBX,dword ptr [ESP + 0x154]     ; 005a1a34
    MOV dword ptr [ESP + 0x3c],ECX      ; 005a1a3b
    PUSH EBX                            ; 005a1a3f
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 005a1a40
    CALL dword ptr [EDX + 0x110]        ; 005a1a46
    ADD ESP,0x8                         ; 005a1a4c
    MOV ESI,dword ptr [0x0061b5a8]      ; 005a1a4f | g_CDemonSetPtr
    PUSH ESI                            ; 005a1a55 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005a1a56
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005a1a5b
    MOV ESP,EBP                         ; 005a1a5e
    POP EBP                             ; 005a1a60
    POP EDI                             ; 005a1a61
    POP ESI                             ; 005a1a62
    POP EBX                             ; 005a1a63
    RET                                 ; 005a1a64

