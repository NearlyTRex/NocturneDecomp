; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fire_cpp_FUN_004a3790(undefined4 param_1,float *param_2,float param_3,float *param_4,float *param_5,float *param_6)
;
; Local Variables:
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
;
; XREF[1]:
;   core_set.cpp_CDemonSet_processActors_FUN_005353e0 at 005356fe
;
; Referenced Globals:
;   undefined4 DAT_005c0a30
;   undefined4 DAT_005c0a38
;   undefined4 DAT_01cf609c
;   undefined4 DAT_01cf60b0
;   undefined4 DAT_01cf60b4
;   undefined4 DAT_01cf60b8
;   undefined4 DAT_01cf60bc
;   undefined4 DAT_01cf60c0
;   undefined4 DAT_01cf60c4
;   undefined4 DAT_01cf60cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3790
        ;   Label: core_fire.cpp_FUN_004a3790
    PUSH ESI                            ; 004a3791
    PUSH EDI                            ; 004a3792
    PUSH EBP                            ; 004a3793
    MOV EBP,ESP                         ; 004a3794
    SUB ESP,0x64                        ; 004a3796
    AND ESP,0xfffffff8                  ; 004a3799
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004a379c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004a379f
    MOV dword ptr [ESP + 0x4],EAX       ; 004a37a2
    MOV EDX,0x1cf6090                   ; 004a37a6
    XOR ECX,ECX                         ; 004a37ab
    FLD float ptr [EDX + 0xc]           ; 004a37ad | DAT_01cf609c | DAT_01cf60bc
        ;   Label: LAB_004a37ad
    MOV dword ptr [ESP + 0x60],EDX      ; 004a37b0
    FCOMP double ptr [0x005c0a30]       ; 004a37b4 | DAT_005c0a30
    FNSTSW AX                           ; 004a37ba
    SAHF                                ; 004a37bc
    JA 0x004a37d1                       ; 004a37bd
        ;   XREF to: 004a37d1 (CONDITIONAL_JUMP)  ; LAB_004a37d1
    INC ECX                             ; 004a37bf
        ;   Label: LAB_004a37bf
    ADD EDX,0x20                        ; 004a37c0
    CMP ECX,0xa                         ; 004a37c3
    JL 0x004a37ad                       ; 004a37c6
        ;   XREF to: 004a37ad (CONDITIONAL_JUMP)  ; LAB_004a37ad
    XOR EAX,EAX                         ; 004a37c8
    MOV ESP,EBP                         ; 004a37ca
    POP EBP                             ; 004a37cc
    POP EDI                             ; 004a37cd
    POP ESI                             ; 004a37ce
    POP EBX                             ; 004a37cf
    RET                                 ; 004a37d0
    FLD float ptr [EBX]                 ; 004a37d1
        ;   Label: LAB_004a37d1
    FLD float ptr [EBX + 0x4]           ; 004a37d3
    FLD float ptr [EBX + 0x8]           ; 004a37d6
    LEA EDI,[ESP + 0x44]                ; 004a37d9
    LEA ESI,[ESP + 0x2c]                ; 004a37dd
    FXCH ST2                            ; 004a37e1
    FSUB float ptr [EDX]                ; 004a37e3 | DAT_01cf60b0
    FXCH                                ; 004a37e5
    FSUB float ptr [EDX + 0x4]          ; 004a37e7 | DAT_01cf60b4
    FXCH ST2                            ; 004a37ea
    FSUB float ptr [EDX + 0x8]          ; 004a37ec | DAT_01cf60b8
    FXCH ST2                            ; 004a37ef
    FSTP float ptr [ESP + 0x30]         ; 004a37f1
    FXCH                                ; 004a37f5
    FSTP float ptr [ESP + 0x34]         ; 004a37f7
    FSTP float ptr [ESP + 0x2c]         ; 004a37fb
    MOVSD ES:EDI,ESI                    ; 004a37ff
    MOVSD ES:EDI,ESI                    ; 004a3800
    MOVSD ES:EDI,ESI                    ; 004a3801
    LEA EAX,[ESP + 0x44]                ; 004a3802
    LEA ESI,[ESP + 0x8]                 ; 004a3806
    CMP ESI,EAX                         ; 004a380a
    JZ 0x004a3826                       ; 004a380c
        ;   XREF to: 004a3826 (CONDITIONAL_JUMP)  ; LAB_004a3826
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a380e
    MOV dword ptr [ESP + 0x8],EAX       ; 004a3812
    MOV EAX,dword ptr [ESP + 0x48]      ; 004a3816
    MOV dword ptr [ESP + 0xc],EAX       ; 004a381a
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004a381e
    MOV dword ptr [ESP + 0x10],EAX      ; 004a3822
    FLD float ptr [ESP + 0xc]           ; 004a3826
        ;   Label: LAB_004a3826
    FMUL ST0                            ; 004a382a
    FLD float ptr [ESP + 0x8]           ; 004a382c
    FMUL ST0                            ; 004a3830
    FADDP                               ; 004a3832
    FLD float ptr [ESP + 0x10]          ; 004a3834
    FMUL ST0                            ; 004a3838
    FADDP                               ; 004a383a
    FSQRT                               ; 004a383c
    MOV EAX,dword ptr [ESP + 0x60]      ; 004a383e
    FLD float ptr [EAX + 0x10]          ; 004a3842 | DAT_01cf60c0
    FMUL double ptr [0x005c0a30]        ; 004a3845 | DAT_005c0a30
    FADD float ptr [ESP + 0x4]          ; 004a384b
    FXCH                                ; 004a384f
    FST float ptr [ESP]                 ; 004a3851
    FCOMPP                              ; 004a3854
    FNSTSW AX                           ; 004a3856
    SAHF                                ; 004a3858
    JNC 0x004a37bf                      ; 004a3859
        ;   XREF to: 004a37bf (CONDITIONAL_JUMP)  ; LAB_004a37bf
    MOV EDX,dword ptr [EBP + 0x20]      ; 004a385f
    TEST EDX,EDX                        ; 004a3862
    JZ 0x004a38eb                       ; 004a3864
        ;   XREF to: 004a38eb (CONDITIONAL_JUMP)  ; LAB_004a38eb
    FLD1                                ; 004a386a
    FLD float ptr [ESP + 0x8]           ; 004a386c
    FXCH                                ; 004a3870
    FDIV float ptr [ESP]                ; 004a3872
    FXCH                                ; 004a3875
    FMUL ST1                            ; 004a3877
    FLD float ptr [ESP + 0xc]           ; 004a3879
    FMUL ST2                            ; 004a387d
    FLD float ptr [ESP + 0x10]          ; 004a387f
    FMULP ST3                           ; 004a3883
    LEA EDI,[ESP + 0x20]                ; 004a3885
    LEA ESI,[ESP + 0x14]                ; 004a3889
    FXCH                                ; 004a388d
    FSTP float ptr [ESP + 0x14]         ; 004a388f
    FSTP float ptr [ESP + 0x18]         ; 004a3893
    FSTP float ptr [ESP + 0x1c]         ; 004a3897
    MOVSD ES:EDI,ESI                    ; 004a389b
    MOVSD ES:EDI,ESI                    ; 004a389c
    MOVSD ES:EDI,ESI                    ; 004a389d
    FLD float ptr [0x005c0a38]          ; 004a389e | DAT_005c0a38
    FLD float ptr [ESP + 0x20]          ; 004a38a4
    FMUL ST1                            ; 004a38a8
    FLD float ptr [ESP + 0x24]          ; 004a38aa
    FMUL ST2                            ; 004a38ae
    FLD float ptr [ESP + 0x28]          ; 004a38b0
    FMULP ST3                           ; 004a38b4
    LEA EAX,[ESP + 0x50]                ; 004a38b6
    LEA EDI,[ESP + 0x50]                ; 004a38ba
    LEA ESI,[ESP + 0x38]                ; 004a38be
    FXCH                                ; 004a38c2
    FSTP float ptr [ESP + 0x38]         ; 004a38c4
    FSTP float ptr [ESP + 0x3c]         ; 004a38c8
    FSTP float ptr [ESP + 0x40]         ; 004a38cc
    MOVSD ES:EDI,ESI                    ; 004a38d0
    MOVSD ES:EDI,ESI                    ; 004a38d1
    MOVSD ES:EDI,ESI                    ; 004a38d2
    CMP EAX,EDX                         ; 004a38d3
    JZ 0x004a38eb                       ; 004a38d5
        ;   XREF to: 004a38eb (CONDITIONAL_JUMP)  ; LAB_004a38eb
    MOV EAX,dword ptr [ESP + 0x50]      ; 004a38d7
    MOV dword ptr [EDX],EAX             ; 004a38db
    MOV EAX,dword ptr [ESP + 0x54]      ; 004a38dd
    MOV dword ptr [EDX + 0x4],EAX       ; 004a38e1
    MOV EAX,dword ptr [ESP + 0x58]      ; 004a38e4
    MOV dword ptr [EDX + 0x8],EAX       ; 004a38e8
    MOV EBX,dword ptr [EBP + 0x24]      ; 004a38eb
        ;   Label: LAB_004a38eb
    TEST EBX,EBX                        ; 004a38ee
    JZ 0x004a38fb                       ; 004a38f0
        ;   XREF to: 004a38fb (CONDITIONAL_JUMP)  ; LAB_004a38fb
    MOV EAX,dword ptr [ESP + 0x60]      ; 004a38f2
    MOV EDX,dword ptr [EAX + 0x14]      ; 004a38f6 | DAT_01cf60c4
    MOV dword ptr [EBX],EDX             ; 004a38f9
    MOV ESI,dword ptr [EBP + 0x28]      ; 004a38fb
        ;   Label: LAB_004a38fb
    TEST ESI,ESI                        ; 004a38fe
    JZ 0x004a390b                       ; 004a3900
        ;   XREF to: 004a390b (CONDITIONAL_JUMP)  ; LAB_004a390b
    MOV EAX,dword ptr [ESP + 0x60]      ; 004a3902
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004a3906 | DAT_01cf60cc
    MOV dword ptr [ESI],EAX             ; 004a3909
    MOV EAX,0x1                         ; 004a390b
        ;   Label: LAB_004a390b
    MOV ESP,EBP                         ; 004a3910
    POP EBP                             ; 004a3912
    POP EDI                             ; 004a3913
    POP ESI                             ; 004a3914
    POP EBX                             ; 004a3915
    RET                                 ; 004a3916

