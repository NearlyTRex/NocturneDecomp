; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_glass_cpp_FUN_004e34b0(CDemonActor *param_1)
;
; Local Variables:
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[11]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040a501
;   core_crossbow.cpp_CCrossbow_fire_FUN_00449a50 at 0044a068
;   core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0 at 0049e932
;   core_glass.cpp_CGlass_process_FUN_004e19c0 at 004e19f9
;   core_gun.cpp_CGun_fire_FUN_004e8630 at 004e8e21
;   core_hiram.cpp_CHiram_process_FUN_004ed2b0 at 004ed3a4
;   core_rifle.cpp_CRifle_fire_FUN_00540080 at 00540741
;   core_set.cpp_CDemonSet_processActors_FUN_0054fc20 at 0054ffff
;   core_shotgun.cpp_CShotgun_fire_FUN_00561760 at 00561ef5
;   core_tommygun.cpp_CTommyGun_fire_FUN_00598420 at 00598c56
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 s_s_7YEARS_RAW_005e3fb3+1
;   undefined4 s_s_7YEARS_RAW_005e3fb3+2
;   undefined4 s_s_7YEARS_RAW_005e3fb3+3
;   undefined4 s_s_7YEARS_RAW_005e3fb3+4
;   TerminatedCString s_glass_1_wav_2_0_005e3fbf
;   undefined4 DAT_005e3fd4
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4a8
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f690
;   core_glass.cpp_FUN_004e2320
;   core_set.cpp_CDemonSet_markMirrorCameraDirty_FUN_00555730
;   core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060
;   crt_memory.c___arrinit_FUN_005c0357
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e34b0
        ;   Label: core_glass.cpp_FUN_004e34b0
    PUSH ESI                            ; 004e34b1
    PUSH EDI                            ; 004e34b2
    PUSH EBP                            ; 004e34b3
    SUB ESP,0x11c                       ; 004e34b4
    MOV EBX,dword ptr [ESP + 0x130]     ; 004e34ba
    CMP dword ptr [EBX + 0x180],0x0     ; 004e34c1
    JNZ 0x004e3841                      ; 004e34c8
        ;   XREF to: 004e3841 (CONDITIONAL_JUMP)  ; LAB_004e3841
    MOV ECX,dword ptr [EBX + 0x1e8]     ; 004e34ce
    MOV dword ptr [EBX + 0x180],0x1     ; 004e34d4
    TEST ECX,ECX                        ; 004e34de
    JNZ 0x004e384c                      ; 004e34e0
        ;   XREF to: 004e384c (CONDITIONAL_JUMP)  ; LAB_004e384c
    PUSH 0x5fb430                       ; 004e34e6 | g_CVectorTypeInfo
        ;   Label: LAB_004e34e6
    PUSH 0x4                            ; 004e34eb
    LEA EAX,[ESP + 0x8]                 ; 004e34ed
    PUSH EAX                            ; 004e34f1
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004e34f2
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    FLD float ptr [EBX + 0x158]         ; 004e34f7
    FMUL double ptr [0x005e3fd4]        ; 004e34fd | DAT_005e3fd4
    LEA ESI,[ESP + 0xa4]                ; 004e3503
    XOR EDI,EDI                         ; 004e350a
    ADD ESP,0xc                         ; 004e350c
    LEA EAX,[ESP + 0xbc]                ; 004e350f
    MOV dword ptr [ESP + 0xc0],EDI      ; 004e3516
    PUSH EAX                            ; 004e351d
    LEA EAX,[EBX + 0x3c]                ; 004e351e
    MOV dword ptr [ESP + 0xc8],EDI      ; 004e3521
    PUSH EAX                            ; 004e3528
    FSTP float ptr [ESP + 0xc4]         ; 004e3529
    LEA EDI,[ESP + 0x70]                ; 004e3530
    CALL core_dirmat.cpp_FUN_0045f690   ; 004e3534
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0xa0]                ; 004e3539
    ADD ESP,0x8                         ; 004e3540
    LEA EAX,[EBX + 0x20]                ; 004e3543
    MOVSD ES:EDI,ESI                    ; 004e3546
    MOVSD ES:EDI,ESI                    ; 004e3547
    MOVSD ES:EDI,ESI                    ; 004e3548
    FLD float ptr [EAX]                 ; 004e3549
    FLD float ptr [EAX + 0x4]           ; 004e354b
    FLD float ptr [EAX + 0x8]           ; 004e354e
    LEA EDI,[ESP + 0xf8]                ; 004e3551
    LEA ESI,[ESP + 0x80]                ; 004e3558
    FXCH ST2                            ; 004e355f
    FADD float ptr [ESP + 0x68]         ; 004e3561
    FXCH                                ; 004e3565
    FADD float ptr [ESP + 0x6c]         ; 004e3567
    FXCH ST2                            ; 004e356b
    FADD float ptr [ESP + 0x70]         ; 004e356d
    FXCH                                ; 004e3571
    FSTP float ptr [ESP + 0x80]         ; 004e3573
    FXCH                                ; 004e357a
    FSTP float ptr [ESP + 0x84]         ; 004e357c
    FSTP float ptr [ESP + 0x88]         ; 004e3583
    MOVSD ES:EDI,ESI                    ; 004e358a
    MOVSD ES:EDI,ESI                    ; 004e358b
    MOVSD ES:EDI,ESI                    ; 004e358c
    LEA EAX,[ESP + 0xf8]                ; 004e358d
    MOV ESI,ESP                         ; 004e3594
    CMP ESI,EAX                         ; 004e3596
    JZ 0x004e35ba                       ; 004e3598
        ;   XREF to: 004e35ba (CONDITIONAL_JUMP)  ; LAB_004e35ba
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004e359a
    MOV dword ptr [ESP],EAX             ; 004e35a1
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004e35a4
    MOV dword ptr [ESP + 0x4],EAX       ; 004e35ab
    MOV EAX,dword ptr [ESP + 0x100]     ; 004e35af
    MOV dword ptr [ESP + 0x8],EAX       ; 004e35b6
    FLD float ptr [ESP + 0xc0]          ; 004e35ba
        ;   Label: LAB_004e35ba
    LEA EAX,[ESP + 0xbc]                ; 004e35c1
    LEA ESI,[ESP + 0xa4]                ; 004e35c8
    LEA EDI,[ESP + 0xd4]                ; 004e35cf
    PUSH EAX                            ; 004e35d6
    LEA EAX,[EBX + 0x3c]                ; 004e35d7
    FADD float ptr [EBX + 0x15c]        ; 004e35da
    PUSH EAX                            ; 004e35e0
    FSTP float ptr [ESP + 0xc8]         ; 004e35e1
    CALL core_dirmat.cpp_FUN_0045f690   ; 004e35e8
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0xac]                ; 004e35ed
    ADD ESP,0x8                         ; 004e35f4
    LEA EAX,[EBX + 0x20]                ; 004e35f7
    MOVSD ES:EDI,ESI                    ; 004e35fa
    MOVSD ES:EDI,ESI                    ; 004e35fb
    MOVSD ES:EDI,ESI                    ; 004e35fc
    FLD float ptr [EAX]                 ; 004e35fd
    FLD float ptr [EAX + 0x4]           ; 004e35ff
    FLD float ptr [EAX + 0x8]           ; 004e3602
    LEA EDI,[ESP + 0x5c]                ; 004e3605
    LEA ESI,[ESP + 0xc8]                ; 004e3609
    FXCH ST2                            ; 004e3610
    FADD float ptr [ESP + 0xd4]         ; 004e3612
    FXCH                                ; 004e3619
    FADD float ptr [ESP + 0xd8]         ; 004e361b
    FXCH ST2                            ; 004e3622
    FADD float ptr [ESP + 0xdc]         ; 004e3624
    FXCH                                ; 004e362b
    FSTP float ptr [ESP + 0xc8]         ; 004e362d
    FXCH                                ; 004e3634
    FSTP float ptr [ESP + 0xcc]         ; 004e3636
    FSTP float ptr [ESP + 0xd0]         ; 004e363d
    MOVSD ES:EDI,ESI                    ; 004e3644
    MOVSD ES:EDI,ESI                    ; 004e3645
    MOVSD ES:EDI,ESI                    ; 004e3646
    LEA EAX,[ESP + 0xc]                 ; 004e3647
    LEA ESI,[ESP + 0x5c]                ; 004e364b
    CMP EAX,ESI                         ; 004e364f
    JZ 0x004e366b                       ; 004e3651
        ;   XREF to: 004e366b (CONDITIONAL_JUMP)  ; LAB_004e366b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004e3653
    MOV dword ptr [ESP + 0xc],EAX       ; 004e3657
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e365b
    MOV dword ptr [ESP + 0x10],EAX      ; 004e365f
    MOV EAX,dword ptr [ESP + 0x64]      ; 004e3663
    MOV dword ptr [ESP + 0x14],EAX      ; 004e3667
    XOR byte ptr [ESP + 0xbf],0x80      ; 004e366b
        ;   Label: LAB_004e366b
    LEA EAX,[ESP + 0xbc]                ; 004e3673
    PUSH EAX                            ; 004e367a
    LEA EAX,[EBX + 0x3c]                ; 004e367b
    PUSH EAX                            ; 004e367e
    LEA ESI,[ESP + 0xf4]                ; 004e367f
    LEA EDI,[ESP + 0x58]                ; 004e3686
    CALL core_dirmat.cpp_FUN_0045f690   ; 004e368a
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0xf4]                ; 004e368f
    ADD ESP,0x8                         ; 004e3696
    LEA EAX,[EBX + 0x20]                ; 004e3699
    MOVSD ES:EDI,ESI                    ; 004e369c
    MOVSD ES:EDI,ESI                    ; 004e369d
    MOVSD ES:EDI,ESI                    ; 004e369e
    FLD float ptr [EAX]                 ; 004e369f
    FLD float ptr [EAX + 0x4]           ; 004e36a1
    FLD float ptr [EAX + 0x8]           ; 004e36a4
    LEA EDI,[ESP + 0x8c]                ; 004e36a7
    LEA ESI,[ESP + 0x74]                ; 004e36ae
    FXCH ST2                            ; 004e36b2
    FADD float ptr [ESP + 0x50]         ; 004e36b4
    FXCH                                ; 004e36b8
    FADD float ptr [ESP + 0x54]         ; 004e36ba
    FXCH ST2                            ; 004e36be
    FADD float ptr [ESP + 0x58]         ; 004e36c0
    FXCH                                ; 004e36c4
    FSTP float ptr [ESP + 0x74]         ; 004e36c6
    FXCH                                ; 004e36ca
    FSTP float ptr [ESP + 0x78]         ; 004e36cc
    FSTP float ptr [ESP + 0x7c]         ; 004e36d0
    MOVSD ES:EDI,ESI                    ; 004e36d4
    MOVSD ES:EDI,ESI                    ; 004e36d5
    MOVSD ES:EDI,ESI                    ; 004e36d6
    LEA EAX,[ESP + 0x8c]                ; 004e36d7
    LEA ESI,[ESP + 0x18]                ; 004e36de
    CMP ESI,EAX                         ; 004e36e2
    JZ 0x004e3707                       ; 004e36e4
        ;   XREF to: 004e3707 (CONDITIONAL_JUMP)  ; LAB_004e3707
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004e36e6
    MOV dword ptr [ESP + 0x18],EAX      ; 004e36ed
    MOV EAX,dword ptr [ESP + 0x90]      ; 004e36f1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e36f8
    MOV EAX,dword ptr [ESP + 0x94]      ; 004e36fc
    MOV dword ptr [ESP + 0x20],EAX      ; 004e3703
    XOR EAX,EAX                         ; 004e3707
        ;   Label: LAB_004e3707
    MOV dword ptr [ESP + 0xc0],EAX      ; 004e3709
    LEA EAX,[ESP + 0xbc]                ; 004e3710
    PUSH EAX                            ; 004e3717
    LEA EAX,[EBX + 0x3c]                ; 004e3718
    PUSH EAX                            ; 004e371b
    LEA ESI,[ESP + 0x118]               ; 004e371c
    LEA EDI,[ESP + 0xe8]                ; 004e3723
    CALL core_dirmat.cpp_FUN_0045f690   ; 004e372a
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x118]               ; 004e372f
    ADD ESP,0x8                         ; 004e3736
    LEA EAX,[EBX + 0x20]                ; 004e3739
    MOVSD ES:EDI,ESI                    ; 004e373c
    MOVSD ES:EDI,ESI                    ; 004e373d
    MOVSD ES:EDI,ESI                    ; 004e373e
    FLD float ptr [EAX]                 ; 004e373f
    FLD float ptr [EAX + 0x4]           ; 004e3741
    FLD float ptr [EAX + 0x8]           ; 004e3744
    LEA EDI,[ESP + 0x104]               ; 004e3747
    LEA ESI,[ESP + 0xb0]                ; 004e374e
    FXCH ST2                            ; 004e3755
    FADD float ptr [ESP + 0xe0]         ; 004e3757
    FXCH                                ; 004e375e
    FADD float ptr [ESP + 0xe4]         ; 004e3760
    FXCH ST2                            ; 004e3767
    FADD float ptr [ESP + 0xe8]         ; 004e3769
    FXCH                                ; 004e3770
    FSTP float ptr [ESP + 0xb0]         ; 004e3772
    FXCH                                ; 004e3779
    FSTP float ptr [ESP + 0xb4]         ; 004e377b
    FSTP float ptr [ESP + 0xb8]         ; 004e3782
    MOVSD ES:EDI,ESI                    ; 004e3789
    MOVSD ES:EDI,ESI                    ; 004e378a
    MOVSD ES:EDI,ESI                    ; 004e378b
    LEA EAX,[ESP + 0x104]               ; 004e378c
    LEA ESI,[ESP + 0x24]                ; 004e3793
    CMP ESI,EAX                         ; 004e3797
    JZ 0x004e37bc                       ; 004e3799
        ;   XREF to: 004e37bc (CONDITIONAL_JUMP)  ; LAB_004e37bc
    MOV EAX,dword ptr [ESP + 0x104]     ; 004e379b
    MOV dword ptr [ESP + 0x24],EAX      ; 004e37a2
    MOV EAX,dword ptr [ESP + 0x108]     ; 004e37a6
    MOV dword ptr [ESP + 0x28],EAX      ; 004e37ad
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004e37b1
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e37b8
    LEA EAX,[EBX + 0x164]               ; 004e37bc
        ;   Label: LAB_004e37bc
    PUSH EAX                            ; 004e37c2
    MOV EDX,dword ptr [0x00612560]      ; 004e37c3 | DAT_00612560
    PUSH EDX                            ; 004e37c9 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e37ca
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ECX,dword ptr [0x0061b4a8]      ; 004e37cf | DAT_0061b4a8
    ADD ESP,0x8                         ; 004e37d5
    CMP ECX,0x40                        ; 004e37d8
    JNZ 0x004e388f                      ; 004e37db
        ;   XREF to: 004e388f (CONDITIONAL_JUMP)  ; LAB_004e388f
    MOV EAX,0xf80000                    ; 004e37e1
    MOV EBP,0x80000                     ; 004e37e6
    MOV dword ptr [ESP + 0x30],EAX      ; 004e37eb
    MOV dword ptr [ESP + 0x44],EBP      ; 004e37ef
    MOV dword ptr [ESP + 0x34],EBP      ; 004e37f3
    MOV dword ptr [ESP + 0x48],EAX      ; 004e37f7
    MOV dword ptr [ESP + 0x38],EBP      ; 004e37fb
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e37ff
    MOV dword ptr [ESP + 0x3c],EAX      ; 004e3803
    MOV dword ptr [ESP + 0x40],EBP      ; 004e3807
    PUSH 0x0                            ; 004e380b
        ;   Label: LAB_004e380b
    LEA EAX,[ESP + 0x34]                ; 004e380d
    PUSH EAX                            ; 004e3811
    LEA EAX,[ESP + 0x48]                ; 004e3812
    PUSH EAX                            ; 004e3816
    LEA EAX,[ESP + 0xc]                 ; 004e3817
    PUSH EAX                            ; 004e381b
    PUSH EBX                            ; 004e381c
    CALL core_glass.cpp_FUN_004e2320    ; 004e381d
        ;   XREF to: 004e2320 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e2320()
    ADD ESP,0x14                        ; 004e3822
    PUSH 0x5e3fbf                       ; 004e3825 | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e382a
    PUSH EBX                            ; 004e3830
    CALL dword ptr [EAX + 0x2c]         ; 004e3831
    MOV EDX,dword ptr [EBX + 0x370]     ; 004e3834
    ADD ESP,0x8                         ; 004e383a
    TEST EDX,EDX                        ; 004e383d
    JNZ 0x004e38be                      ; 004e383f
        ;   XREF to: 004e38be (CONDITIONAL_JUMP)  ; LAB_004e38be
    ADD ESP,0x11c                       ; 004e3841
        ;   Label: LAB_004e3841
    POP EBP                             ; 004e3847
    POP EDI                             ; 004e3848
    POP ESI                             ; 004e3849
    POP EBX                             ; 004e384a
    RET                                 ; 004e384b
    MOV ESI,0x5e3fb4                    ; 004e384c | s_s_7YEARS_RAW_005e3fb3+1
        ;   Label: LAB_004e384c
    LEA EDI,[EBX + 0x16c]               ; 004e3851
    MOV dword ptr [EBX + 0x17c],0xffff  ; 004e3857
    PUSH EDI                            ; 004e3861
    MOV AL,byte ptr [ESI]               ; 004e3862 | s_s_7YEARS_RAW_005e3fb3+1 | s_s_7YEARS_RAW_005e3fb3+3
        ;   Label: LAB_004e3862
    MOV byte ptr [EDI],AL               ; 004e3864
    CMP AL,0x0                          ; 004e3866
    JZ 0x004e387a                       ; 004e3868
        ;   XREF to: 004e387a (CONDITIONAL_JUMP)  ; LAB_004e387a
    MOV AL,byte ptr [ESI + 0x1]         ; 004e386a | s_s_7YEARS_RAW_005e3fb3+2 | s_s_7YEARS_RAW_005e3fb3+4
    ADD ESI,0x2                         ; 004e386d
    MOV byte ptr [EDI + 0x1],AL         ; 004e3870
    ADD EDI,0x2                         ; 004e3873
    CMP AL,0x0                          ; 004e3876
    JNZ 0x004e3862                      ; 004e3878
        ;   XREF to: 004e3862 (CONDITIONAL_JUMP)  ; LAB_004e3862
    POP EDI                             ; 004e387a
        ;   Label: LAB_004e387a
    MOV ESI,dword ptr [0x00622c18]      ; 004e387b | g_CDemonSetPtr
    PUSH ESI                            ; 004e3881 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_markMirrorCameraDirty_FUN_00555730 ; 004e3882
        ;   XREF to: 00555730 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_markMirrorCameraDirty_FUN_00555730(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e3887
    JMP 0x004e34e6                      ; 004e388a
        ;   XREF to: 004e34e6 (UNCONDITIONAL_JUMP)  ; LAB_004e34e6
    MOV EDI,0xfe0000                    ; 004e388f
        ;   Label: LAB_004e388f
    MOV ESI,0x20000                     ; 004e3894
    MOV dword ptr [ESP + 0x30],EDI      ; 004e3899
    MOV dword ptr [ESP + 0x44],ESI      ; 004e389d
    MOV dword ptr [ESP + 0x34],ESI      ; 004e38a1
    MOV dword ptr [ESP + 0x48],EDI      ; 004e38a5
    MOV dword ptr [ESP + 0x38],ESI      ; 004e38a9
    MOV dword ptr [ESP + 0x4c],EDI      ; 004e38ad
    MOV dword ptr [ESP + 0x3c],EDI      ; 004e38b1
    MOV dword ptr [ESP + 0x40],ESI      ; 004e38b5
    JMP 0x004e380b                      ; 004e38b9
        ;   XREF to: 004e380b (UNCONDITIONAL_JUMP)  ; LAB_004e380b
    PUSH EBX                            ; 004e38be
        ;   Label: LAB_004e38be
    MOV ECX,dword ptr [0x00622c18]      ; 004e38bf | g_CDemonSetPtr
    PUSH ECX                            ; 004e38c5 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060 ; 004e38c6
        ;   XREF to: 0054f060 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e38cb
    MOV dword ptr [EBX + 0xb3c],0x1     ; 004e38ce
    ADD ESP,0x11c                       ; 004e38d8
    POP EBP                             ; 004e38de
    POP EDI                             ; 004e38df
    POP ESI                             ; 004e38e0
    POP EBX                             ; 004e38e1
    RET                                 ; 004e38e2

