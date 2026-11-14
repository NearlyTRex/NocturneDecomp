; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_flies_cpp_FUN_004c0630(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined8       Stack[-0xe8]:8  local_e8
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_flies.cpp_CFlies_initFly_FUN_004c0530 at 004c056a
;   core_flies.cpp_CFlies_process_FUN_004bfc00 at 004bff73
;
; Referenced Globals:
;   undefined4 DAT_005e078a
;   undefined4 DAT_005e0792
;   undefined4 DAT_005e079a
;   undefined4 DAT_005e07a2
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0630
        ;   Label: core_flies.cpp_FUN_004c0630
    PUSH EDI                            ; 004c0631
    PUSH EBP                            ; 004c0632
    MOV EBP,ESP                         ; 004c0633
    SUB ESP,0xd8                        ; 004c0635
    AND ESP,0xfffffff8                  ; 004c063b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c063e
    MOV dword ptr [ESP + 0xcc],ESI      ; 004c0641
    MOV ESI,dword ptr [EBP + 0x10]      ; 004c0648
    PUSH 0x3f800000                     ; 004c064b
    PUSH 0x0                            ; 004c0650
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c0652
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004c0657
    FLD float ptr [ESP + 0xdc]          ; 004c065e
    ADD ESP,0x8                         ; 004c0665
    FST float ptr [ESP + 0x28]          ; 004c0668
    FMUL float ptr [ESP + 0x28]         ; 004c066c
    FMUL float ptr [ESI + 0x15c]        ; 004c0670
    FSTP float ptr [ESP + 0x28]         ; 004c0676
    FLD float ptr [ESI + 0x158]         ; 004c067a
    FLD ST0                             ; 004c0680
    FMUL double ptr [0x005e078a]        ; 004c0682 | DAT_005e078a
    SUB ESP,0x4                         ; 004c0688
    FXCH                                ; 004c068b
    FMUL double ptr [0x005e0792]        ; 004c068d | DAT_005e0792
    FXCH                                ; 004c0693
    FSTP float ptr [ESP]                ; 004c0695
    SUB ESP,0x4                         ; 004c0698
    FSTP float ptr [ESP]                ; 004c069b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c069e
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004c06a3
    FLD float ptr [ESP + 0xdc]          ; 004c06aa
    ADD ESP,0x8                         ; 004c06b1
    FSTP float ptr [ESP + 0x24]         ; 004c06b4
    FLD float ptr [ESI + 0x160]         ; 004c06b8
    FLD ST0                             ; 004c06be
    FMUL double ptr [0x005e078a]        ; 004c06c0 | DAT_005e078a
    SUB ESP,0x4                         ; 004c06c6
    FXCH                                ; 004c06c9
    FMUL double ptr [0x005e0792]        ; 004c06cb | DAT_005e0792
    FXCH                                ; 004c06d1
    FSTP float ptr [ESP]                ; 004c06d3
    SUB ESP,0x4                         ; 004c06d6
    FSTP float ptr [ESP]                ; 004c06d9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c06dc
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004c06e1
    FLD float ptr [ESP + 0xdc]          ; 004c06e8
    ADD ESP,0x8                         ; 004c06ef
    FSTP float ptr [ESP + 0x2c]         ; 004c06f2
    TEST EBX,EBX                        ; 004c06f6
    JZ 0x004c0846                       ; 004c06f8
        ;   XREF to: 004c0846 (CONDITIONAL_JUMP)  ; LAB_004c0846
    FLD float ptr [ESP + 0x24]          ; 004c06fe
    FLD float ptr [ESP + 0x28]          ; 004c0702
    FLD float ptr [ESP + 0x2c]          ; 004c0706
    LEA EDI,[ESP + 0xb4]                ; 004c070a
    LEA ESI,[ESP + 0x84]                ; 004c0711
    FXCH ST2                            ; 004c0718
    FSUB float ptr [EBX]                ; 004c071a
    FXCH                                ; 004c071c
    FSUB float ptr [EBX + 0x4]          ; 004c071e
    FXCH ST2                            ; 004c0721
    FSUB float ptr [EBX + 0x8]          ; 004c0723
    FXCH                                ; 004c0726
    FSTP float ptr [ESP + 0x84]         ; 004c0728
    FXCH                                ; 004c072f
    FSTP float ptr [ESP + 0x88]         ; 004c0731
    FSTP float ptr [ESP + 0x8c]         ; 004c0738
    MOVSD ES:EDI,ESI                    ; 004c073f
    MOVSD ES:EDI,ESI                    ; 004c0740
    MOVSD ES:EDI,ESI                    ; 004c0741
    FLD float ptr [ESP + 0xb8]          ; 004c0742
    FMUL ST0                            ; 004c0749
    FLD float ptr [ESP + 0xb4]          ; 004c074b
    FMUL ST0                            ; 004c0752
    FADDP                               ; 004c0754
    FLD float ptr [ESP + 0xbc]          ; 004c0756
    FMUL ST0                            ; 004c075d
    FADDP                               ; 004c075f
    FSQRT                               ; 004c0761
    FST float ptr [ESP + 0x8]           ; 004c0763
    FST double ptr [ESP]                ; 004c0767
    FCOMP double ptr [0x005e079a]       ; 004c076a | DAT_005e079a
    FNSTSW AX                           ; 004c0770
    SAHF                                ; 004c0772
    JA 0x004c0861                       ; 004c0773
        ;   XREF to: 004c0861 (CONDITIONAL_JUMP)  ; LAB_004c0861
    FLD1                                ; 004c0779
    FCOMP double ptr [ESP]              ; 004c077b
    FNSTSW AX                           ; 004c077e
    SAHF                                ; 004c0780
    JBE 0x004c0846                      ; 004c0781
        ;   XREF to: 004c0846 (CONDITIONAL_JUMP)  ; LAB_004c0846
    FLDZ                                ; 004c0787
    FCOMP double ptr [ESP]              ; 004c0789
    FNSTSW AX                           ; 004c078c
    SAHF                                ; 004c078e
    JNC 0x004c0846                      ; 004c078f
        ;   XREF to: 004c0846 (CONDITIONAL_JUMP)  ; LAB_004c0846
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004c0795
    MOV dword ptr [ESP + 0x54],EAX      ; 004c079c
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004c07a0
    LEA EDI,[ESP + 0x90]                ; 004c07a7
    MOV dword ptr [ESP + 0x58],EAX      ; 004c07ae
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004c07b2
    LEA ESI,[ESP + 0x54]                ; 004c07b9
    MOV dword ptr [ESP + 0x5c],EAX      ; 004c07bd
    MOVSD ES:EDI,ESI                    ; 004c07c1
    MOVSD ES:EDI,ESI                    ; 004c07c2
    MOVSD ES:EDI,ESI                    ; 004c07c3
    FLD1                                ; 004c07c4
    FLD float ptr [ESP + 0x90]          ; 004c07c6
    FXCH                                ; 004c07cd
    FDIV float ptr [ESP + 0x8]          ; 004c07cf
    FXCH                                ; 004c07d3
    FMUL ST1                            ; 004c07d5
    FLD float ptr [ESP + 0x94]          ; 004c07d7
    FMUL ST2                            ; 004c07de
    FLD float ptr [ESP + 0x98]          ; 004c07e0
    FMULP ST3                           ; 004c07e7
    LEA EDI,[ESP + 0x18]                ; 004c07e9
    LEA ESI,[ESP + 0x6c]                ; 004c07ed
    FXCH                                ; 004c07f1
    FSTP float ptr [ESP + 0x6c]         ; 004c07f3
    FSTP float ptr [ESP + 0x70]         ; 004c07f7
    FSTP float ptr [ESP + 0x74]         ; 004c07fb
    MOVSD ES:EDI,ESI                    ; 004c07ff
    MOVSD ES:EDI,ESI                    ; 004c0800
    MOVSD ES:EDI,ESI                    ; 004c0801
    LEA EAX,[ESP + 0x24]                ; 004c0802
    FLD float ptr [EBX + 0x4]           ; 004c0806
    FLD float ptr [EBX + 0x8]           ; 004c0809
    FLD float ptr [EBX]                 ; 004c080c
    LEA EDI,[ESP + 0x3c]                ; 004c080e
    LEA ESI,[ESP + 0x78]                ; 004c0812
    LEA EBX,[ESP + 0x3c]                ; 004c0816
    FADD float ptr [ESP + 0x18]         ; 004c081a
    FXCH ST2                            ; 004c081e
    FADD float ptr [ESP + 0x1c]         ; 004c0820
    FXCH                                ; 004c0824
    FADD float ptr [ESP + 0x20]         ; 004c0826
    FXCH ST2                            ; 004c082a
    FSTP float ptr [ESP + 0x78]         ; 004c082c
    FSTP float ptr [ESP + 0x7c]         ; 004c0830
    FSTP float ptr [ESP + 0x80]         ; 004c0834
    MOVSD ES:EDI,ESI                    ; 004c083b
    MOVSD ES:EDI,ESI                    ; 004c083c
    MOVSD ES:EDI,ESI                    ; 004c083d
    CMP EAX,EBX                         ; 004c083e
    JNZ 0x004c0949                      ; 004c0840
        ;   XREF to: 004c0949 (CONDITIONAL_JUMP)  ; LAB_004c0949
    MOV EDI,dword ptr [ESP + 0xcc]      ; 004c0846
        ;   Label: LAB_004c0846
    LEA ESI,[ESP + 0x24]                ; 004c084d
    MOVSD ES:EDI,ESI                    ; 004c0851
    MOVSD ES:EDI,ESI                    ; 004c0852
    MOVSD ES:EDI,ESI                    ; 004c0853
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004c0854
    MOV ESP,EBP                         ; 004c085b
    POP EBP                             ; 004c085d
    POP EDI                             ; 004c085e
    POP EBX                             ; 004c085f
    RET                                 ; 004c0860
    FLD float ptr [0x005e07a2]          ; 004c0861 | DAT_005e07a2
        ;   Label: LAB_004c0861
    FLD float ptr [ESP + 0xb4]          ; 004c0867
    FMUL ST1                            ; 004c086e
    FLD float ptr [ESP + 0xb8]          ; 004c0870
    FMUL ST2                            ; 004c0877
    FLD float ptr [ESP + 0xbc]          ; 004c0879
    FMULP ST3                           ; 004c0880
    LEA EDI,[ESP + 0xc]                 ; 004c0882
    LEA ESI,[ESP + 0x9c]                ; 004c0886
    FXCH                                ; 004c088d
    FSTP float ptr [ESP + 0x9c]         ; 004c088f
    FSTP float ptr [ESP + 0xa0]         ; 004c0896
    FSTP float ptr [ESP + 0xa4]         ; 004c089d
    MOVSD ES:EDI,ESI                    ; 004c08a4
    MOVSD ES:EDI,ESI                    ; 004c08a5
    MOVSD ES:EDI,ESI                    ; 004c08a6
    FLD1                                ; 004c08a7
    FLD float ptr [ESP + 0xc]           ; 004c08a9
    FXCH                                ; 004c08ad
    FDIV float ptr [ESP + 0x8]          ; 004c08af
    FXCH                                ; 004c08b3
    FMUL ST1                            ; 004c08b5
    FLD float ptr [ESP + 0x10]          ; 004c08b7
    FMUL ST2                            ; 004c08bb
    FLD float ptr [ESP + 0x14]          ; 004c08bd
    FMULP ST3                           ; 004c08c1
    LEA EDI,[ESP + 0x30]                ; 004c08c3
    LEA ESI,[ESP + 0x60]                ; 004c08c7
    FXCH                                ; 004c08cb
    FSTP float ptr [ESP + 0x60]         ; 004c08cd
    FSTP float ptr [ESP + 0x64]         ; 004c08d1
    FSTP float ptr [ESP + 0x68]         ; 004c08d5
    MOVSD ES:EDI,ESI                    ; 004c08d9
    MOVSD ES:EDI,ESI                    ; 004c08da
    MOVSD ES:EDI,ESI                    ; 004c08db
    LEA EAX,[ESP + 0xa8]                ; 004c08dc
    FLD float ptr [EBX + 0x4]           ; 004c08e3
    FLD float ptr [EBX + 0x8]           ; 004c08e6
    FLD float ptr [EBX]                 ; 004c08e9
    LEA EDI,[ESP + 0xa8]                ; 004c08eb
    LEA ESI,[ESP + 0x48]                ; 004c08f2
    LEA EBX,[ESP + 0x24]                ; 004c08f6
    FADD float ptr [ESP + 0x30]         ; 004c08fa
    FXCH ST2                            ; 004c08fe
    FADD float ptr [ESP + 0x34]         ; 004c0900
    FXCH                                ; 004c0904
    FADD float ptr [ESP + 0x38]         ; 004c0906
    FXCH ST2                            ; 004c090a
    FSTP float ptr [ESP + 0x48]         ; 004c090c
    FSTP float ptr [ESP + 0x4c]         ; 004c0910
    FSTP float ptr [ESP + 0x50]         ; 004c0914
    MOVSD ES:EDI,ESI                    ; 004c0918
    MOVSD ES:EDI,ESI                    ; 004c0919
    MOVSD ES:EDI,ESI                    ; 004c091a
    CMP EBX,EAX                         ; 004c091b
    JZ 0x004c0846                       ; 004c091d
        ;   XREF to: 004c0846 (CONDITIONAL_JUMP)  ; LAB_004c0846
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004c0923
    MOV dword ptr [ESP + 0x24],EAX      ; 004c092a
    MOV EAX,dword ptr [ESP + 0xac]      ; 004c092e
    MOV dword ptr [ESP + 0x28],EAX      ; 004c0935
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004c0939
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c0940
    JMP 0x004c0846                      ; 004c0944
        ;   XREF to: 004c0846 (UNCONDITIONAL_JUMP)  ; LAB_004c0846
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c0949
        ;   Label: LAB_004c0949
    MOV dword ptr [ESP + 0x24],EAX      ; 004c094d
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c0951
    MOV dword ptr [ESP + 0x28],EAX      ; 004c0955
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c0959
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c095d
    JMP 0x004c0846                      ; 004c0961
        ;   XREF to: 004c0846 (UNCONDITIONAL_JUMP)  ; LAB_004c0846

