; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049a650(CParticle *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
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
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createGlassParticle_FUN_004a2780 at 004a27c8
;
; Referenced Globals:
;   undefined4 DAT_005c05d0
;   undefined4 DAT_005c05d4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_particle.cpp_CParticle_setup_FUN_00509e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a650
        ;   Label: core_fire.cpp_FUN_0049a650
    PUSH ESI                            ; 0049a651
    PUSH EDI                            ; 0049a652
    PUSH EBP                            ; 0049a653
    MOV EBP,ESP                         ; 0049a654
    SUB ESP,0xa8                        ; 0049a656
    AND ESP,0xfffffff8                  ; 0049a65c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049a65f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0049a662
    MOV EDX,dword ptr [EBP + 0x18]      ; 0049a665
    MOV ESI,EDX                         ; 0049a668
    LEA EDI,[ESP + 0x60]                ; 0049a66a
    FLD float ptr [ESI + 0x4]           ; 0049a66e
    FLD float ptr [ESI + 0x8]           ; 0049a671
    FLD float ptr [ESI]                 ; 0049a674
    LEA ESI,[ESP + 0x30]                ; 0049a676
    FADD float ptr [EDX + 0xc]          ; 0049a67a
    FXCH ST2                            ; 0049a67d
    FADD float ptr [EDX + 0x10]         ; 0049a67f
    FXCH                                ; 0049a682
    FADD float ptr [EDX + 0x14]         ; 0049a684
    FXCH ST2                            ; 0049a687
    FSTP float ptr [ESP + 0x30]         ; 0049a689
    FSTP float ptr [ESP + 0x34]         ; 0049a68d
    FSTP float ptr [ESP + 0x38]         ; 0049a691
    MOVSD ES:EDI,ESI                    ; 0049a695
    MOVSD ES:EDI,ESI                    ; 0049a696
    MOVSD ES:EDI,ESI                    ; 0049a697
    FLD float ptr [ESP + 0x60]          ; 0049a698
    FLD float ptr [ESP + 0x64]          ; 0049a69c
    FLD float ptr [ESP + 0x68]          ; 0049a6a0
    LEA EDI,[ESP + 0xc]                 ; 0049a6a4
    LEA ESI,[ESP + 0x54]                ; 0049a6a8
    FXCH ST2                            ; 0049a6ac
    FADD float ptr [EDX + 0x18]         ; 0049a6ae
    FXCH                                ; 0049a6b1
    FADD float ptr [EDX + 0x1c]         ; 0049a6b3
    FXCH ST2                            ; 0049a6b6
    FADD float ptr [EDX + 0x20]         ; 0049a6b8
    FXCH                                ; 0049a6bb
    FSTP float ptr [ESP + 0x54]         ; 0049a6bd
    FXCH                                ; 0049a6c1
    FSTP float ptr [ESP + 0x58]         ; 0049a6c3
    FSTP float ptr [ESP + 0x5c]         ; 0049a6c7
    MOVSD ES:EDI,ESI                    ; 0049a6cb
    MOVSD ES:EDI,ESI                    ; 0049a6cc
    MOVSD ES:EDI,ESI                    ; 0049a6cd
    FLD float ptr [0x005c05d0]          ; 0049a6ce | DAT_005c05d0
    FLD float ptr [ESP + 0xc]           ; 0049a6d4
    FMUL ST1                            ; 0049a6d8
    FLD float ptr [ESP + 0x10]          ; 0049a6da
    FMUL ST2                            ; 0049a6de
    FLD float ptr [ESP + 0x14]          ; 0049a6e0
    FMULP ST3                           ; 0049a6e4
    LEA EAX,[ESP + 0x78]                ; 0049a6e6
    LEA EDX,[ESP + 0x48]                ; 0049a6ea
    LEA EDI,[ESP + 0x78]                ; 0049a6ee
    LEA ESI,[ESP + 0x18]                ; 0049a6f2
    FXCH                                ; 0049a6f6
    FSTP float ptr [ESP + 0x18]         ; 0049a6f8
    FSTP float ptr [ESP + 0x1c]         ; 0049a6fc
    FSTP float ptr [ESP + 0x20]         ; 0049a700
    MOVSD ES:EDI,ESI                    ; 0049a704
    MOVSD ES:EDI,ESI                    ; 0049a705
    MOVSD ES:EDI,ESI                    ; 0049a706
    CMP EDX,EAX                         ; 0049a707
    JZ 0x0049a726                       ; 0049a709
        ;   XREF to: 0049a726 (CONDITIONAL_JUMP)  ; LAB_0049a726
    MOV EAX,dword ptr [ESP + 0x78]      ; 0049a70b
    MOV dword ptr [ESP + 0x48],EAX      ; 0049a70f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0049a713
    MOV dword ptr [ESP + 0x4c],EAX      ; 0049a717
    MOV EAX,dword ptr [ESP + 0x80]      ; 0049a71b
    MOV dword ptr [ESP + 0x50],EAX      ; 0049a722
    MOV EAX,dword ptr [ECX]             ; 0049a726
        ;   Label: LAB_0049a726
    MOV dword ptr [EBX + 0x98],EAX      ; 0049a728
    MOV EAX,dword ptr [ECX + 0x4]       ; 0049a72e
    MOV dword ptr [EBX + 0x9c],EAX      ; 0049a731
    MOV EAX,dword ptr [ECX + 0x8]       ; 0049a737
    MOV dword ptr [EBX + 0xa0],EAX      ; 0049a73a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049a740
    MOV EAX,dword ptr [EAX]             ; 0049a743
    MOV dword ptr [EBX + 0xa4],EAX      ; 0049a745
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049a74b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0049a74e
    MOV dword ptr [EBX + 0xa8],EAX      ; 0049a751
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049a757
    PUSH 0x40490fdb                     ; 0049a75a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0049a75f
    PUSH 0x0                            ; 0049a762
    MOV dword ptr [EBX + 0xac],EAX      ; 0049a764
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049a76a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xac],EAX      ; 0049a76f
    FLD float ptr [ESP + 0xac]          ; 0049a776
    ADD ESP,0x8                         ; 0049a77d
    LEA EDI,[ESP + 0x84]                ; 0049a780
    PUSH 0x40c90fdb                     ; 0049a787
    MOV dword ptr [EBX + 0x94],0x0      ; 0049a78c
    PUSH 0x0                            ; 0049a796
    FSTP float ptr [EBX + 0x8c]         ; 0049a798
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049a79e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xac],EAX      ; 0049a7a3
    LEA ESI,[ESP + 0x8]                 ; 0049a7aa
    FLD float ptr [ESP + 0xac]          ; 0049a7ae
    ADD ESP,0x8                         ; 0049a7b5
    LEA EDX,[EBX + 0xb0]                ; 0049a7b8
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049a7be
    FSTP float ptr [EBX + 0x90]         ; 0049a7c1
    FLD float ptr [EAX + 0x4]           ; 0049a7c7
    FLD float ptr [EAX + 0x8]           ; 0049a7ca
    FLD float ptr [EAX]                 ; 0049a7cd
    LEA EAX,[ESP + 0x84]                ; 0049a7cf
    FSUB float ptr [ESP + 0x48]         ; 0049a7d6
    FXCH ST2                            ; 0049a7da
    FSUB float ptr [ESP + 0x4c]         ; 0049a7dc
    FXCH                                ; 0049a7e0
    FSUB float ptr [ESP + 0x50]         ; 0049a7e2
    FXCH ST2                            ; 0049a7e6
    FSTP float ptr [ESP]                ; 0049a7e8
    FSTP float ptr [ESP + 0x4]          ; 0049a7eb
    FSTP float ptr [ESP + 0x8]          ; 0049a7ef
    MOVSD ES:EDI,ESI                    ; 0049a7f3
    MOVSD ES:EDI,ESI                    ; 0049a7f4
    MOVSD ES:EDI,ESI                    ; 0049a7f5
    CMP EDX,EAX                         ; 0049a7f6
    JZ 0x0049a817                       ; 0049a7f8
        ;   XREF to: 0049a817 (CONDITIONAL_JUMP)  ; LAB_0049a817
    MOV EAX,dword ptr [ESP + 0x84]      ; 0049a7fa
    MOV dword ptr [EDX],EAX             ; 0049a801
    MOV EAX,dword ptr [ESP + 0x88]      ; 0049a803
    MOV dword ptr [EDX + 0x4],EAX       ; 0049a80a
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0049a80d
    MOV dword ptr [EDX + 0x8],EAX       ; 0049a814
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049a817
        ;   Label: LAB_0049a817
    LEA EDI,[ESP + 0x24]                ; 0049a81a
    LEA ESI,[ESP + 0x3c]                ; 0049a81e
    LEA EDX,[EBX + 0xbc]                ; 0049a822
    FLD float ptr [EAX + 0x10]          ; 0049a828
    FLD float ptr [EAX + 0x14]          ; 0049a82b
    FLD float ptr [EAX + 0xc]           ; 0049a82e
    LEA EAX,[ESP + 0x24]                ; 0049a831
    FSUB float ptr [ESP + 0x48]         ; 0049a835
    FXCH ST2                            ; 0049a839
    FSUB float ptr [ESP + 0x4c]         ; 0049a83b
    FXCH                                ; 0049a83f
    FSUB float ptr [ESP + 0x50]         ; 0049a841
    FXCH ST2                            ; 0049a845
    FSTP float ptr [ESP + 0x3c]         ; 0049a847
    FSTP float ptr [ESP + 0x40]         ; 0049a84b
    FSTP float ptr [ESP + 0x44]         ; 0049a84f
    MOVSD ES:EDI,ESI                    ; 0049a853
    MOVSD ES:EDI,ESI                    ; 0049a854
    MOVSD ES:EDI,ESI                    ; 0049a855
    CMP EDX,EAX                         ; 0049a856
    JZ 0x0049a86e                       ; 0049a858
        ;   XREF to: 0049a86e (CONDITIONAL_JUMP)  ; LAB_0049a86e
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049a85a
    MOV dword ptr [EDX],EAX             ; 0049a85e
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049a860
    MOV dword ptr [EDX + 0x4],EAX       ; 0049a864
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049a867
    MOV dword ptr [EDX + 0x8],EAX       ; 0049a86b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049a86e
        ;   Label: LAB_0049a86e
    LEA EDI,[ESP + 0x6c]                ; 0049a871
    LEA ESI,[ESP + 0x90]                ; 0049a875
    LEA EDX,[EBX + 0xc8]                ; 0049a87c
    FLD float ptr [EAX + 0x1c]          ; 0049a882
    FLD float ptr [EAX + 0x20]          ; 0049a885
    FLD float ptr [EAX + 0x18]          ; 0049a888
    LEA EAX,[ESP + 0x6c]                ; 0049a88b
    FSUB float ptr [ESP + 0x48]         ; 0049a88f
    FXCH ST2                            ; 0049a893
    FSUB float ptr [ESP + 0x4c]         ; 0049a895
    FXCH                                ; 0049a899
    FSUB float ptr [ESP + 0x50]         ; 0049a89b
    FXCH ST2                            ; 0049a89f
    FSTP float ptr [ESP + 0x90]         ; 0049a8a1
    FSTP float ptr [ESP + 0x94]         ; 0049a8a8
    FSTP float ptr [ESP + 0x98]         ; 0049a8af
    MOVSD ES:EDI,ESI                    ; 0049a8b6
    MOVSD ES:EDI,ESI                    ; 0049a8b7
    MOVSD ES:EDI,ESI                    ; 0049a8b8
    CMP EDX,EAX                         ; 0049a8b9
    JZ 0x0049a8d1                       ; 0049a8bb
        ;   XREF to: 0049a8d1 (CONDITIONAL_JUMP)  ; LAB_0049a8d1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0049a8bd
    MOV dword ptr [EDX],EAX             ; 0049a8c1
    MOV EAX,dword ptr [ESP + 0x70]      ; 0049a8c3
    MOV dword ptr [EDX + 0x4],EAX       ; 0049a8c7
    MOV EAX,dword ptr [ESP + 0x74]      ; 0049a8ca
    MOV dword ptr [EDX + 0x8],EAX       ; 0049a8ce
    MOV ECX,0x12                        ; 0049a8d1
        ;   Label: LAB_0049a8d1
    MOV ESI,dword ptr [EBP + 0x24]      ; 0049a8d6
    LEA EDI,[EBX + 0x44]                ; 0049a8d9
    PUSH 0x3f800000                     ; 0049a8dc
    MOV EAX,dword ptr [EBP + 0x28]      ; 0049a8e1
    MOVSD.REP ES:EDI,ESI                ; 0049a8e4
    PUSH 0xbf800000                     ; 0049a8e6
    MOV dword ptr [EBX + 0x40],EAX      ; 0049a8eb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049a8ee
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xac],EAX      ; 0049a8f3
    FLD float ptr [ESP + 0xac]          ; 0049a8fa
    ADD ESP,0x8                         ; 0049a901
    PUSH 0x40400000                     ; 0049a904
    PUSH 0x0                            ; 0049a909
    FSTP float ptr [EBX + 0xc]          ; 0049a90b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049a90e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xac],EAX      ; 0049a913
    FLD float ptr [ESP + 0xac]          ; 0049a91a
    ADD ESP,0x8                         ; 0049a921
    PUSH 0x3f800000                     ; 0049a924
    PUSH 0xbf800000                     ; 0049a929
    FSTP float ptr [EBX + 0x10]         ; 0049a92e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049a931
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xac],EAX      ; 0049a936
    LEA EDX,[EBX + 0xc]                 ; 0049a93d
    MOV EAX,dword ptr [ESP + 0xac]      ; 0049a940
    MOV dword ptr [EBX + 0x14],EAX      ; 0049a947
    FLD float ptr [EDX + 0x4]           ; 0049a94a
    FMUL ST0                            ; 0049a94d
    FLD float ptr [EDX]                 ; 0049a94f
    FMUL ST0                            ; 0049a951
    FADDP                               ; 0049a953
    FLD float ptr [EDX + 0x8]           ; 0049a955
    FMUL ST0                            ; 0049a958
    FADDP                               ; 0049a95a
    ADD ESP,0x8                         ; 0049a95c
    FSQRT                               ; 0049a95f
    FLDZ                                ; 0049a961
    FXCH                                ; 0049a963
    FSTP float ptr [ESP + 0xa0]         ; 0049a965
    FCOMP float ptr [ESP + 0xa0]        ; 0049a96c
    FNSTSW AX                           ; 0049a973
    SAHF                                ; 0049a975
    JNC 0x0049a9d4                      ; 0049a976
        ;   XREF to: 0049a9d4 (CONDITIONAL_JUMP)  ; LAB_0049a9d4
    FLD1                                ; 0049a978
    FLD float ptr [EDX]                 ; 0049a97a
    FXCH                                ; 0049a97c
    FDIV float ptr [ESP + 0xa0]         ; 0049a97e
    FXCH                                ; 0049a985
    FMUL ST1                            ; 0049a987
    FLD float ptr [EDX + 0x4]           ; 0049a989
    FMUL ST2                            ; 0049a98c
    FLD float ptr [EDX + 0x8]           ; 0049a98e
    FMULP ST3                           ; 0049a991
    FXCH                                ; 0049a993
    FSTP float ptr [EDX]                ; 0049a995
    FSTP float ptr [EDX + 0x4]          ; 0049a997
    FSTP float ptr [EDX + 0x8]          ; 0049a99a
    LEA EAX,[EBX + 0xc]                 ; 0049a99d
        ;   Label: LAB_0049a99d
    FLD float ptr [0x005c05d4]          ; 0049a9a0 | DAT_005c05d4
    FLD float ptr [EAX]                 ; 0049a9a6
    FMUL ST1                            ; 0049a9a8
    FLD float ptr [EAX + 0x4]           ; 0049a9aa
    FMUL ST2                            ; 0049a9ad
    FLD float ptr [EAX + 0x8]           ; 0049a9af
    FMULP ST3                           ; 0049a9b2
    PUSH EAX                            ; 0049a9b4
    FXCH                                ; 0049a9b5
    FSTP float ptr [EAX]                ; 0049a9b7
    FSTP float ptr [EAX + 0x4]          ; 0049a9b9
    FSTP float ptr [EAX + 0x8]          ; 0049a9bc
    LEA EAX,[ESP + 0x4c]                ; 0049a9bf
    PUSH EAX                            ; 0049a9c3
    PUSH EBX                            ; 0049a9c4
    CALL core_particle.cpp_CParticle_setup_FUN_00509e40 ; 0049a9c5
        ;   XREF to: 00509e40 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00509e40(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049a9ca
    MOV ESP,EBP                         ; 0049a9cd
    POP EBP                             ; 0049a9cf
    POP EDI                             ; 0049a9d0
    POP ESI                             ; 0049a9d1
    POP EBX                             ; 0049a9d2
    RET                                 ; 0049a9d3
    MOV dword ptr [EDX + 0x8],0x0       ; 0049a9d4
        ;   Label: LAB_0049a9d4
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049a9db
    MOV dword ptr [EDX + 0x4],EAX       ; 0049a9de
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049a9e1
    MOV dword ptr [EDX],EAX             ; 0049a9e4
    JMP 0x0049a99d                      ; 0049a9e6
        ;   XREF to: 0049a99d (UNCONDITIONAL_JUMP)  ; LAB_0049a99d

