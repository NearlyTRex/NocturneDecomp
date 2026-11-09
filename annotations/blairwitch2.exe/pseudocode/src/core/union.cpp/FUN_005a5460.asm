; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_union_cpp_FUN_005a5460(CDemonActor *param_1)
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
; XREF[3]:
;   core_union.cpp_FUN_005a4e90 at 005a4f5d
;   core_union.cpp_FUN_005a5130 at 005a5206
;   core_union.cpp_FUN_005a5300 at 005a531d
;
; Referenced Globals:
;   TerminatedCString s_shotgun_wav_005f05c7
;   undefined4 DAT_005f05d6
;   undefined4 DAT_005f05da
;   undefined4 DAT_005ff8f8
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364240_0x14d110
;   undefined4 g_CDemonSetInstance.field1364244_0x14d114
;   undefined4 g_CDemonSetInstance.field1364248_0x14d118
;   undefined4 g_CDemonSetInstance.field1364252_0x14d11c
;   undefined4 g_CDemonSetInstance.field1364256_0x14d120
;   undefined4 g_CDemonSetInstance.field1364260_0x14d124
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
;   core_fire.cpp_FUN_0049d170
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   core_setcolid.cpp_FUN_00535ee0
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5460
        ;   Label: core_union.cpp_FUN_005a5460
    PUSH ESI                            ; 005a5461
    PUSH EDI                            ; 005a5462
    PUSH EBP                            ; 005a5463
    MOV EBP,ESP                         ; 005a5464
    SUB ESP,0x158                       ; 005a5466
    AND ESP,0xfffffff8                  ; 005a546c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a546f
    CMP dword ptr [EBX + 0x10a78],0x0   ; 005a5472
    JNZ 0x005a5482                      ; 005a5479
        ;   XREF to: 005a5482 (CONDITIONAL_JUMP)  ; LAB_005a5482
    MOV ESP,EBP                         ; 005a547b
    POP EBP                             ; 005a547d
    POP EDI                             ; 005a547e
    POP ESI                             ; 005a547f
    POP EBX                             ; 005a5480
    RET                                 ; 005a5481
    MOV EDX,dword ptr [EBX + 0x1185c]   ; 005a5482
        ;   Label: LAB_005a5482
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a5488
    SUB EAX,EDX                         ; 005a548f
    SHL EAX,0x4                         ; 005a5491
    LEA EDX,[EBX + 0x1134]              ; 005a5494
    ADD EAX,EDX                         ; 005a549a
    PUSH EAX                            ; 005a549c
    LEA ESI,[ESP + 0x114]               ; 005a549d
    PUSH 0x265370c                      ; 005a54a4 | DAT_0265370c
    LEA EDI,[ESP + 0x94]                ; 005a54a9
    MOV dword ptr [ESP + 0x15c],EDX     ; 005a54b0
    CALL core_xform.cpp_FUN_00591530    ; 005a54b7
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 005a54bc
    LEA EAX,[ESP + 0x8c]                ; 005a54bf
    LEA ESI,[ESP + 0x110]               ; 005a54c6
    PUSH EAX                            ; 005a54cd
    MOVSD ES:EDI,ESI                    ; 005a54ce
    MOVSD ES:EDI,ESI                    ; 005a54cf
    MOVSD ES:EDI,ESI                    ; 005a54d0
    PUSH EBX                            ; 005a54d1
    LEA ESI,[ESP + 0xb8]                ; 005a54d2
    LEA EDI,[ESP + 0x58]                ; 005a54d9
    CALL core_actor.cpp_FUN_00408d70    ; 005a54dd
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xb8]                ; 005a54e2
    ADD ESP,0x8                         ; 005a54e9
    MOVSD ES:EDI,ESI                    ; 005a54ec
    MOVSD ES:EDI,ESI                    ; 005a54ed
    MOVSD ES:EDI,ESI                    ; 005a54ee
    MOV EDX,dword ptr [EBX + 0x11858]   ; 005a54ef
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a54f5
    SUB EAX,EDX                         ; 005a54fc
    MOV ESI,dword ptr [ESP + 0x154]     ; 005a54fe
    SHL EAX,0x4                         ; 005a5505
    ADD EAX,ESI                         ; 005a5508
    PUSH EAX                            ; 005a550a
    PUSH 0x265370c                      ; 005a550b | DAT_0265370c
    LEA ESI,[ESP + 0x7c]                ; 005a5510
    LEA EDI,[ESP + 0x13c]               ; 005a5514
    CALL core_xform.cpp_FUN_00591530    ; 005a551b
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 005a5520
    LEA EAX,[ESP + 0x134]               ; 005a5523
    LEA ESI,[ESP + 0x74]                ; 005a552a
    PUSH EAX                            ; 005a552e
    MOVSD ES:EDI,ESI                    ; 005a552f
    MOVSD ES:EDI,ESI                    ; 005a5530
    MOVSD ES:EDI,ESI                    ; 005a5531
    PUSH EBX                            ; 005a5532
    LEA ESI,[ESP + 0xe8]                ; 005a5533
    LEA EDI,[ESP + 0xc4]                ; 005a553a
    CALL core_actor.cpp_FUN_00408d70    ; 005a5541
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 005a5546
    LEA ESI,[ESP + 0xe0]                ; 005a5549
    FLD float ptr [ESP + 0x50]          ; 005a5550
    FLD float ptr [ESP + 0x54]          ; 005a5554
    MOVSD ES:EDI,ESI                    ; 005a5558
    MOVSD ES:EDI,ESI                    ; 005a5559
    MOVSD ES:EDI,ESI                    ; 005a555a
    FLD float ptr [ESP + 0x58]          ; 005a555b
    LEA EDI,[ESP + 0x104]               ; 005a555f
    LEA ESI,[ESP + 0x11c]               ; 005a5566
    FXCH ST2                            ; 005a556d
    FSUB float ptr [ESP + 0xbc]         ; 005a556f
    FXCH                                ; 005a5576
    FSUB float ptr [ESP + 0xc0]         ; 005a5578
    FXCH ST2                            ; 005a557f
    FSUB float ptr [ESP + 0xc4]         ; 005a5581
    FXCH                                ; 005a5588
    FSTP float ptr [ESP + 0x11c]        ; 005a558a
    FXCH                                ; 005a5591
    FSTP float ptr [ESP + 0x120]        ; 005a5593
    FSTP float ptr [ESP + 0x124]        ; 005a559a
    MOVSD ES:EDI,ESI                    ; 005a55a1
    MOVSD ES:EDI,ESI                    ; 005a55a2
    MOVSD ES:EDI,ESI                    ; 005a55a3
    FLD float ptr [0x005f05d6]          ; 005a55a4 | DAT_005f05d6
    FLD float ptr [ESP + 0x104]         ; 005a55aa
    FMUL ST1                            ; 005a55b1
    FLD float ptr [ESP + 0x108]         ; 005a55b3
    FMUL ST2                            ; 005a55ba
    FLD float ptr [ESP + 0x10c]         ; 005a55bc
    FMULP ST3                           ; 005a55c3
    LEA EAX,[ESP + 0xc8]                ; 005a55c5
    LEA EDX,[ESP + 0x104]               ; 005a55cc
    LEA EDI,[ESP + 0xc8]                ; 005a55d3
    LEA ESI,[ESP + 0x140]               ; 005a55da
    FXCH                                ; 005a55e1
    FSTP float ptr [ESP + 0x104]        ; 005a55e3
    FSTP float ptr [ESP + 0x108]        ; 005a55ea
    FSTP float ptr [ESP + 0x10c]        ; 005a55f1
    FLD float ptr [ESP + 0x104]         ; 005a55f8
    FLD float ptr [ESP + 0x108]         ; 005a55ff
    FLD float ptr [ESP + 0x10c]         ; 005a5606
    FXCH ST2                            ; 005a560d
    FADD float ptr [ESP + 0xbc]         ; 005a560f
    FXCH                                ; 005a5616
    FADD float ptr [ESP + 0xc0]         ; 005a5618
    FXCH ST2                            ; 005a561f
    FADD float ptr [ESP + 0xc4]         ; 005a5621
    FXCH                                ; 005a5628
    FSTP float ptr [ESP + 0x140]        ; 005a562a
    FXCH                                ; 005a5631
    FSTP float ptr [ESP + 0x144]        ; 005a5633
    FSTP float ptr [ESP + 0x148]        ; 005a563a
    MOVSD ES:EDI,ESI                    ; 005a5641
    MOVSD ES:EDI,ESI                    ; 005a5642
    MOVSD ES:EDI,ESI                    ; 005a5643
    CMP EDX,EAX                         ; 005a5644
    JZ 0x005a5672                       ; 005a5646
        ;   XREF to: 005a5672 (CONDITIONAL_JUMP)  ; LAB_005a5672
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005a5648
    MOV dword ptr [ESP + 0x104],EAX     ; 005a564f
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005a5656
    MOV dword ptr [ESP + 0x108],EAX     ; 005a565d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005a5664
    MOV dword ptr [ESP + 0x10c],EAX     ; 005a566b
    LEA EAX,[EBX + 0x3c]                ; 005a5672
        ;   Label: LAB_005a5672
    PUSH EAX                            ; 005a5675
    LEA EAX,[ESP + 0x108]               ; 005a5676
    PUSH EAX                            ; 005a567d
    MOV EDI,dword ptr [0x00614d30]      ; 005a567e | DAT_00614d30
    PUSH EDI                            ; 005a5684
    CALL core_fire.cpp_FUN_0049d170     ; 005a5685
        ;   XREF to: 0049d170 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049d170()
    ADD ESP,0xc                         ; 005a568a
    PUSH 0xffff                         ; 005a568d
    PUSH 0x0                            ; 005a5692
    LEA EAX,[ESP + 0xc4]                ; 005a5694
    PUSH 0x3fc00000                     ; 005a569b
    PUSH EAX                            ; 005a56a0
    MOV EAX,[0x00614d30]                ; 005a56a1 | DAT_00614d30
    PUSH EAX                            ; 005a56a6
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 005a56a7
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 005a56ac
    LEA EAX,[ESP + 0x50]                ; 005a56af
    PUSH EAX                            ; 005a56b3
    PUSH 0x5f05c7                       ; 005a56b4 | = "shotgun.wav"
    PUSH EBX                            ; 005a56b9
    MOV EDX,dword ptr [0x0061c068]      ; 005a56ba | DAT_0061c068
    PUSH EDX                            ; 005a56c0
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a56c1
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a56c6
    LEA EDX,[ESP + 0x98]                ; 005a56c9
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a56d0
    PUSH EDX                            ; 005a56d6
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005a56d7
    PUSH EAX                            ; 005a56dd
    CALL dword ptr [ESI + 0x5c]         ; 005a56de
    ADD ESP,0x8                         ; 005a56e1
    LEA EAX,[ESP + 0x98]                ; 005a56e4
    PUSH EAX                            ; 005a56eb
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 005a56ec
    PUSH ECX                            ; 005a56f2
    LEA ESI,[ESP + 0xac]                ; 005a56f3
    LEA EDI,[ESP + 0x100]               ; 005a56fa
    CALL core_actor.cpp_FUN_00408d70    ; 005a5701
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xac]                ; 005a5706
    LEA EAX,[ESP + 0x100]               ; 005a570d
    ADD ESP,0x8                         ; 005a5714
    LEA EDX,[ESP + 0x98]                ; 005a5717
    MOVSD ES:EDI,ESI                    ; 005a571e
    MOVSD ES:EDI,ESI                    ; 005a571f
    MOVSD ES:EDI,ESI                    ; 005a5720
    CMP EDX,EAX                         ; 005a5721
    JZ 0x005a574f                       ; 005a5723
        ;   XREF to: 005a574f (CONDITIONAL_JUMP)  ; LAB_005a574f
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005a5725
    MOV dword ptr [ESP + 0x98],EAX      ; 005a572c
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005a5733
    MOV dword ptr [ESP + 0x9c],EAX      ; 005a573a
    MOV EAX,dword ptr [ESP + 0x100]     ; 005a5741
    MOV dword ptr [ESP + 0xa0],EAX      ; 005a5748
    LEA EDI,[ESP + 0x128]               ; 005a574f
        ;   Label: LAB_005a574f
    LEA ESI,[ESP + 0x50]                ; 005a5756
    MOVSD ES:EDI,ESI                    ; 005a575a
    MOVSD ES:EDI,ESI                    ; 005a575b
    MOVSD ES:EDI,ESI                    ; 005a575c
    MOV ESI,dword ptr [0x0061b5a8]      ; 005a575d | g_CDemonSetPtr
    PUSH ESI                            ; 005a5763 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005a5764
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005a5769
    PUSH 0x1                            ; 005a576c
    MOV EDI,dword ptr [0x0061b5a8]      ; 005a576e | g_CDemonSetPtr
    PUSH EDI                            ; 005a5774 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 005a5775
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 005a577a
    PUSH EBX                            ; 005a577d
    MOV EAX,[0x0061b5a8]                ; 005a577e | g_CDemonSetPtr
    PUSH EAX                            ; 005a5783 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 005a5784
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005a5789
    LEA EAX,[ESP + 0x98]                ; 005a578c
    PUSH EAX                            ; 005a5793
    LEA EAX,[ESP + 0x12c]               ; 005a5794
    PUSH EAX                            ; 005a579b
    MOV EDX,dword ptr [0x0061b5a8]      ; 005a579c | g_CDemonSetPtr
    PUSH EDX                            ; 005a57a2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 005a57a3
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x160],EAX     ; 005a57a8
    FLD float ptr [ESP + 0x160]         ; 005a57af
    ADD ESP,0xc                         ; 005a57b6
    FLDZ                                ; 005a57b9
    FXCH                                ; 005a57bb
    FSTP double ptr [ESP]               ; 005a57bd
    FCOMP double ptr [ESP]              ; 005a57c0
    FNSTSW AX                           ; 005a57c3
    SAHF                                ; 005a57c5
    JA 0x005a5822                       ; 005a57c6
        ;   XREF to: 005a5822 (CONDITIONAL_JUMP)  ; LAB_005a5822
    FLD1                                ; 005a57c8
    FCOMP double ptr [ESP]              ; 005a57ca
    FNSTSW AX                           ; 005a57cd
    SAHF                                ; 005a57cf
    JC 0x005a5822                       ; 005a57d0
        ;   XREF to: 005a5822 (CONDITIONAL_JUMP)  ; LAB_005a5822
    MOV ECX,dword ptr [0x007bdc94]      ; 005a57d2 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 005a57d8 | g_CDemonSetPtr
    PUSH ECX                            ; 005a57dd
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005a57de | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ESI                            ; 005a57e4
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005a57e5
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 005a57ea
    MOV dword ptr [ESP + 0x150],EAX     ; 005a57ed
    TEST EAX,EAX                        ; 005a57f4
    JZ 0x005a5837                       ; 005a57f6
        ;   XREF to: 005a5837 (CONDITIONAL_JUMP)  ; LAB_005a5837
    PUSH EAX                            ; 005a57f8
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005a57f9
    CALL dword ptr [EDX + 0x114]        ; 005a57ff
    ADD ESP,0x4                         ; 005a5805
    TEST EAX,EAX                        ; 005a5808
    JLE 0x005a5837                      ; 005a580a
        ;   XREF to: 005a5837 (CONDITIONAL_JUMP)  ; LAB_005a5837
    MOV EDI,dword ptr [0x0061b5a8]      ; 005a580c | g_CDemonSetPtr
        ;   Label: LAB_005a580c
    PUSH EDI                            ; 005a5812 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005a5813
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005a5818
    MOV ESP,EBP                         ; 005a581b
    POP EBP                             ; 005a581d
    POP EDI                             ; 005a581e
    POP ESI                             ; 005a581f
    POP EBX                             ; 005a5820
    RET                                 ; 005a5821
    MOV EAX,[0x0061b5a8]                ; 005a5822 | g_CDemonSetPtr
        ;   Label: LAB_005a5822
    PUSH EAX                            ; 005a5827 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005a5828
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005a582d
    MOV ESP,EBP                         ; 005a5830
    POP EBP                             ; 005a5832
    POP EDI                             ; 005a5833
    POP ESI                             ; 005a5834
    POP EBX                             ; 005a5835
    RET                                 ; 005a5836
    CMP dword ptr [ESP + 0x150],0x0     ; 005a5837
        ;   Label: LAB_005a5837
    JZ 0x005a580c                       ; 005a583f
        ;   XREF to: 005a580c (CONDITIONAL_JUMP)  ; LAB_005a580c
    LEA EAX,[ESP + 0x8]                 ; 005a5841
    PUSH EAX                            ; 005a5845
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 005a5846
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,[0x005ff8f8]                ; 005a584b | DAT_005ff8f8
    ADD ESP,0x4                         ; 005a5850
    MOV dword ptr [ESP + 0xc],EAX       ; 005a5853
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 005a5857
    MOV EAX,[0x0061b5a8]                ; 005a585f | g_CDemonSetPtr
    LEA EDX,[EAX + 0x14d11c]            ; 005a5864
    LEA EDI,[ESP + 0xec]                ; 005a586a
    LEA ESI,[ESP + 0x5c]                ; 005a5871
    FLD float ptr [EDX]                 ; 005a5875 | g_CDemonSetInstance.field1364252_0x14d11c
    FLD float ptr [EDX + 0x4]           ; 005a5877 | g_CDemonSetInstance.field1364256_0x14d120
    FLD float ptr [EDX + 0x8]           ; 005a587a | g_CDemonSetInstance.field1364260_0x14d124
    FXCH ST2                            ; 005a587d
    FSUB float ptr [EAX + 0x14d110]     ; 005a587f | g_CDemonSetInstance.field1364240_0x14d110
    FXCH                                ; 005a5885
    FSUB float ptr [EAX + 0x14d114]     ; 005a5887 | g_CDemonSetInstance.field1364244_0x14d114
    FXCH ST2                            ; 005a588d
    FSUB float ptr [EAX + 0x14d118]     ; 005a588f | g_CDemonSetInstance.field1364248_0x14d118
    FXCH                                ; 005a5895
    FSTP float ptr [ESP + 0x5c]         ; 005a5897
    FXCH                                ; 005a589b
    FSTP float ptr [ESP + 0x60]         ; 005a589d
    FSTP float ptr [ESP + 0x64]         ; 005a58a1
    MOVSD ES:EDI,ESI                    ; 005a58a5
    MOVSD ES:EDI,ESI                    ; 005a58a6
    MOVSD ES:EDI,ESI                    ; 005a58a7
    FLD float ptr [ESP + 0xf0]          ; 005a58a8
    FMUL ST0                            ; 005a58af
    FLD float ptr [ESP + 0xec]          ; 005a58b1
    FMUL ST0                            ; 005a58b8
    FADDP                               ; 005a58ba
    FLD float ptr [ESP + 0xf4]          ; 005a58bc
    FMUL ST0                            ; 005a58c3
    FADDP                               ; 005a58c5
    FSQRT                               ; 005a58c7
    FDIVR double ptr [0x005f05da]       ; 005a58c9 | DAT_005f05da
    FLD float ptr [ESP + 0xec]          ; 005a58cf
    FXCH                                ; 005a58d6
    FSTP float ptr [ESP + 0x14c]        ; 005a58d8
    FMUL float ptr [ESP + 0x14c]        ; 005a58df
    FLD float ptr [ESP + 0xf0]          ; 005a58e6
    FMUL float ptr [ESP + 0x14c]        ; 005a58ed
    FLD float ptr [ESP + 0xf4]          ; 005a58f4
    FMUL float ptr [ESP + 0x14c]        ; 005a58fb
    LEA EDX,[ESP + 0x44]                ; 005a5902
    LEA EDI,[ESP + 0x44]                ; 005a5906
    LEA ESI,[ESP + 0xd4]                ; 005a590a
    LEA EAX,[ESP + 0x14]                ; 005a5911
    FXCH ST2                            ; 005a5915
    FSTP float ptr [ESP + 0xd4]         ; 005a5917
    FSTP float ptr [ESP + 0xd8]         ; 005a591e
    FSTP float ptr [ESP + 0xdc]         ; 005a5925
    MOVSD ES:EDI,ESI                    ; 005a592c
    MOVSD ES:EDI,ESI                    ; 005a592d
    MOVSD ES:EDI,ESI                    ; 005a592e
    CMP EAX,EDX                         ; 005a592f
    JZ 0x005a594b                       ; 005a5931
        ;   XREF to: 005a594b (CONDITIONAL_JUMP)  ; LAB_005a594b
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a5933
    MOV dword ptr [ESP + 0x14],EAX      ; 005a5937
    MOV EAX,dword ptr [ESP + 0x48]      ; 005a593b
    MOV dword ptr [ESP + 0x18],EAX      ; 005a593f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005a5943
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a5947
    MOV EAX,[0x0061b5a8]                ; 005a594b | g_CDemonSetPtr
        ;   Label: LAB_005a594b
    ADD EAX,0x14d138                    ; 005a5950
    PUSH EAX                            ; 005a5955
    MOV EDX,dword ptr [ESP + 0x154]     ; 005a5956
    PUSH EDX                            ; 005a595d
    LEA ESI,[ESP + 0x88]                ; 005a595e
    LEA EDI,[ESP + 0x70]                ; 005a5965
    CALL core_actor.cpp_FUN_00408de0    ; 005a5969
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x88]                ; 005a596e
    LEA EAX,[ESP + 0x70]                ; 005a5975
    ADD ESP,0x8                         ; 005a5979
    LEA EDX,[ESP + 0x24]                ; 005a597c
    MOVSD ES:EDI,ESI                    ; 005a5980
    MOVSD ES:EDI,ESI                    ; 005a5981
    MOVSD ES:EDI,ESI                    ; 005a5982
    CMP EDX,EAX                         ; 005a5983
    JZ 0x005a599f                       ; 005a5985
        ;   XREF to: 005a599f (CONDITIONAL_JUMP)  ; LAB_005a599f
    MOV EAX,dword ptr [ESP + 0x68]      ; 005a5987
    MOV dword ptr [ESP + 0x24],EAX      ; 005a598b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005a598f
    MOV dword ptr [ESP + 0x28],EAX      ; 005a5993
    MOV EAX,dword ptr [ESP + 0x70]      ; 005a5997
    MOV dword ptr [ESP + 0x2c],EAX      ; 005a599b
    MOV ECX,0x65                        ; 005a599f
        ;   Label: LAB_005a599f
    MOV EDX,dword ptr [ESP + 0x150]     ; 005a59a4
    LEA EAX,[ESP + 0x8]                 ; 005a59ab
    MOV dword ptr [ESP + 0x40],EBX      ; 005a59af
    PUSH EAX                            ; 005a59b3
    MOV EBX,dword ptr [ESP + 0x154]     ; 005a59b4
    MOV dword ptr [ESP + 0x3c],ECX      ; 005a59bb
    PUSH EBX                            ; 005a59bf
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 005a59c0
    CALL dword ptr [EDX + 0x110]        ; 005a59c6
    ADD ESP,0x8                         ; 005a59cc
    MOV ESI,dword ptr [0x0061b5a8]      ; 005a59cf | g_CDemonSetPtr
    PUSH ESI                            ; 005a59d5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005a59d6
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005a59db
    MOV ESP,EBP                         ; 005a59de
    POP EBP                             ; 005a59e0
    POP EDI                             ; 005a59e1
    POP ESI                             ; 005a59e2
    POP EBX                             ; 005a59e3
    RET                                 ; 005a59e4

