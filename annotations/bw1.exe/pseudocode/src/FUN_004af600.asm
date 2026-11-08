; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af600(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6)
;
; Local Variables:
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
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004b5d50 at 004b5da2
;
; Referenced Globals:
;   undefined4 DAT_005df294
;   undefined4 DAT_005df29c
;
; Called Functions:
;   FUN_0040cc00
;   FUN_00532160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af600
        ;   Label: FUN_004af600
    PUSH ESI                            ; 004af601
    PUSH EDI                            ; 004af602
    PUSH EBP                            ; 004af603
    MOV EBP,ESP                         ; 004af604
    SUB ESP,0xec                        ; 004af606
    AND ESP,0xfffffff8                  ; 004af60c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004af60f
    MOV ECX,dword ptr [EBP + 0x20]      ; 004af612
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af615
    MOV ESI,EAX                         ; 004af618
    LEA EDI,[ESP + 0x24]                ; 004af61a
    FLD float ptr [ESI + 0x4]           ; 004af61e
    FLD float ptr [ESI + 0x8]           ; 004af621
    FLD float ptr [ESI]                 ; 004af624
    LEA ESI,[ESP + 0xc]                 ; 004af626
    FADD float ptr [EAX + 0xc]          ; 004af62a
    FXCH ST2                            ; 004af62d
    FADD float ptr [EAX + 0x10]         ; 004af62f
    FXCH                                ; 004af632
    FADD float ptr [EAX + 0x14]         ; 004af634
    FXCH ST2                            ; 004af637
    FSTP float ptr [ESP + 0xc]          ; 004af639
    FSTP float ptr [ESP + 0x10]         ; 004af63d
    FSTP float ptr [ESP + 0x14]         ; 004af641
    MOVSD ES:EDI,ESI                    ; 004af645
    MOVSD ES:EDI,ESI                    ; 004af646
    MOVSD ES:EDI,ESI                    ; 004af647
    FLD float ptr [ESP + 0x24]          ; 004af648
    FLD float ptr [ESP + 0x28]          ; 004af64c
    FLD float ptr [ESP + 0x2c]          ; 004af650
    LEA EDI,[ESP + 0x60]                ; 004af654
    LEA ESI,[ESP + 0x84]                ; 004af658
    FXCH ST2                            ; 004af65f
    FADD float ptr [EAX + 0x18]         ; 004af661
    FXCH                                ; 004af664
    FADD float ptr [EAX + 0x1c]         ; 004af666
    FXCH ST2                            ; 004af669
    FADD float ptr [EAX + 0x20]         ; 004af66b
    FXCH                                ; 004af66e
    FSTP float ptr [ESP + 0x84]         ; 004af670
    FXCH                                ; 004af677
    FSTP float ptr [ESP + 0x88]         ; 004af679
    FSTP float ptr [ESP + 0x8c]         ; 004af680
    MOVSD ES:EDI,ESI                    ; 004af687
    MOVSD ES:EDI,ESI                    ; 004af688
    MOVSD ES:EDI,ESI                    ; 004af689
    FLD float ptr [0x005df294]          ; 004af68a | DAT_005df294
    FLD float ptr [ESP + 0x60]          ; 004af690
    FMUL ST1                            ; 004af694
    FLD float ptr [ESP + 0x64]          ; 004af696
    FMUL ST2                            ; 004af69a
    FLD float ptr [ESP + 0x68]          ; 004af69c
    FMULP ST3                           ; 004af6a0
    LEA EDX,[ESP + 0x3c]                ; 004af6a2
    LEA EAX,[ESP + 0x78]                ; 004af6a6
    LEA EDI,[ESP + 0x78]                ; 004af6aa
    LEA ESI,[ESP + 0x90]                ; 004af6ae
    FXCH                                ; 004af6b5
    FSTP float ptr [ESP + 0x90]         ; 004af6b7
    FSTP float ptr [ESP + 0x94]         ; 004af6be
    FSTP float ptr [ESP + 0x98]         ; 004af6c5
    MOVSD ES:EDI,ESI                    ; 004af6cc
    MOVSD ES:EDI,ESI                    ; 004af6cd
    MOVSD ES:EDI,ESI                    ; 004af6ce
    CMP EDX,EAX                         ; 004af6cf
    JZ 0x004af6ee                       ; 004af6d1
        ;   XREF to: 004af6ee (CONDITIONAL_JUMP)  ; LAB_004af6ee
    MOV EAX,dword ptr [ESP + 0x78]      ; 004af6d3
    MOV dword ptr [ESP + 0x3c],EAX      ; 004af6d7
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004af6db
    MOV dword ptr [ESP + 0x40],EAX      ; 004af6df
    MOV EAX,dword ptr [ESP + 0x80]      ; 004af6e3
    MOV dword ptr [ESP + 0x44],EAX      ; 004af6ea
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004af6ee
        ;   Label: LAB_004af6ee
    MOV EAX,dword ptr [EAX]             ; 004af6f1
    MOV dword ptr [EBX + 0x68],EAX      ; 004af6f3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004af6f6
    MOV EAX,dword ptr [EAX + 0x4]       ; 004af6f9
    MOV dword ptr [EBX + 0x6c],EAX      ; 004af6fc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004af6ff
    MOV EAX,dword ptr [EAX + 0x8]       ; 004af702
    MOV dword ptr [EBX + 0x70],EAX      ; 004af705
    MOV EAX,dword ptr [ECX]             ; 004af708
    MOV dword ptr [EBX + 0x74],EAX      ; 004af70a
    MOV EAX,dword ptr [ECX + 0x4]       ; 004af70d
    MOV dword ptr [EBX + 0x78],EAX      ; 004af710
    PUSH 0x40490fdb                     ; 004af713
    MOV EAX,dword ptr [ECX + 0x8]       ; 004af718
    PUSH 0x0                            ; 004af71b
    MOV dword ptr [EBX + 0x7c],EAX      ; 004af71d
    CALL FUN_0040cc00                   ; 004af720
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xf0],EAX      ; 004af725
    FLD float ptr [ESP + 0xf0]          ; 004af72c
    ADD ESP,0x8                         ; 004af733
    LEA EDI,[ESP + 0x9c]                ; 004af736
    PUSH 0x40c90fdb                     ; 004af73d
    MOV dword ptr [EBX + 0x64],0x0      ; 004af742
    PUSH 0x0                            ; 004af749
    FSTP float ptr [EBX + 0x5c]         ; 004af74b
    CALL FUN_0040cc00                   ; 004af74e
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xf0],EAX      ; 004af753
    LEA ESI,[ESP + 0x50]                ; 004af75a
    FLD float ptr [ESP + 0xf0]          ; 004af75e
    ADD ESP,0x8                         ; 004af765
    LEA EDX,[EBX + 0x80]                ; 004af768
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af76e
    FSTP float ptr [EBX + 0x60]         ; 004af771
    FLD float ptr [EAX + 0x4]           ; 004af774
    FLD float ptr [EAX + 0x8]           ; 004af777
    FLD float ptr [EAX]                 ; 004af77a
    LEA EAX,[ESP + 0x9c]                ; 004af77c
    FSUB float ptr [ESP + 0x3c]         ; 004af783
    FXCH ST2                            ; 004af787
    FSUB float ptr [ESP + 0x40]         ; 004af789
    FXCH                                ; 004af78d
    FSUB float ptr [ESP + 0x44]         ; 004af78f
    FXCH ST2                            ; 004af793
    FSTP float ptr [ESP + 0x48]         ; 004af795
    FSTP float ptr [ESP + 0x4c]         ; 004af799
    FSTP float ptr [ESP + 0x50]         ; 004af79d
    MOVSD ES:EDI,ESI                    ; 004af7a1
    MOVSD ES:EDI,ESI                    ; 004af7a2
    MOVSD ES:EDI,ESI                    ; 004af7a3
    CMP EDX,EAX                         ; 004af7a4
    JZ 0x004af7c5                       ; 004af7a6
        ;   XREF to: 004af7c5 (CONDITIONAL_JUMP)  ; LAB_004af7c5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004af7a8
    MOV dword ptr [EDX],EAX             ; 004af7af
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004af7b1
    MOV dword ptr [EDX + 0x4],EAX       ; 004af7b8
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004af7bb
    MOV dword ptr [EDX + 0x8],EAX       ; 004af7c2
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af7c5
        ;   Label: LAB_004af7c5
    LEA EDI,[ESP + 0xb4]                ; 004af7c8
    LEA ESI,[ESP + 0x30]                ; 004af7cf
    LEA EDX,[EBX + 0x8c]                ; 004af7d3
    FLD float ptr [EAX + 0x10]          ; 004af7d9
    FLD float ptr [EAX + 0x14]          ; 004af7dc
    FLD float ptr [EAX + 0xc]           ; 004af7df
    LEA EAX,[ESP + 0xb4]                ; 004af7e2
    FSUB float ptr [ESP + 0x3c]         ; 004af7e9
    FXCH ST2                            ; 004af7ed
    FSUB float ptr [ESP + 0x40]         ; 004af7ef
    FXCH                                ; 004af7f3
    FSUB float ptr [ESP + 0x44]         ; 004af7f5
    FXCH ST2                            ; 004af7f9
    FSTP float ptr [ESP + 0x30]         ; 004af7fb
    FSTP float ptr [ESP + 0x34]         ; 004af7ff
    FSTP float ptr [ESP + 0x38]         ; 004af803
    MOVSD ES:EDI,ESI                    ; 004af807
    MOVSD ES:EDI,ESI                    ; 004af808
    MOVSD ES:EDI,ESI                    ; 004af809
    CMP EDX,EAX                         ; 004af80a
    JZ 0x004af82b                       ; 004af80c
        ;   XREF to: 004af82b (CONDITIONAL_JUMP)  ; LAB_004af82b
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004af80e
    MOV dword ptr [EDX],EAX             ; 004af815
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004af817
    MOV dword ptr [EDX + 0x4],EAX       ; 004af81e
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004af821
    MOV dword ptr [EDX + 0x8],EAX       ; 004af828
    MOV EAX,dword ptr [EBP + 0x18]      ; 004af82b
        ;   Label: LAB_004af82b
    MOV EDI,ESP                         ; 004af82e
    LEA ESI,[ESP + 0xa8]                ; 004af830
    LEA EDX,[EBX + 0x98]                ; 004af837
    FLD float ptr [EAX + 0x1c]          ; 004af83d
    FLD float ptr [EAX + 0x20]          ; 004af840
    FLD float ptr [EAX + 0x18]          ; 004af843
    MOV EAX,ESP                         ; 004af846
    FSUB float ptr [ESP + 0x3c]         ; 004af848
    FXCH ST2                            ; 004af84c
    FSUB float ptr [ESP + 0x40]         ; 004af84e
    FXCH                                ; 004af852
    FSUB float ptr [ESP + 0x44]         ; 004af854
    FXCH ST2                            ; 004af858
    FSTP float ptr [ESP + 0xa8]         ; 004af85a
    FSTP float ptr [ESP + 0xac]         ; 004af861
    FSTP float ptr [ESP + 0xb0]         ; 004af868
    MOVSD ES:EDI,ESI                    ; 004af86f
    MOVSD ES:EDI,ESI                    ; 004af870
    MOVSD ES:EDI,ESI                    ; 004af871
    CMP EDX,EAX                         ; 004af872
    JZ 0x004af889                       ; 004af874
        ;   XREF to: 004af889 (CONDITIONAL_JUMP)  ; LAB_004af889
    MOV EAX,dword ptr [ESP]             ; 004af876
    MOV dword ptr [EDX],EAX             ; 004af879
    MOV EAX,dword ptr [ESP + 0x4]       ; 004af87b
    MOV dword ptr [EDX + 0x4],EAX       ; 004af87f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004af882
    MOV dword ptr [EDX + 0x8],EAX       ; 004af886
    MOV ECX,0x6                         ; 004af889
        ;   Label: LAB_004af889
    MOV ESI,dword ptr [EBP + 0x24]      ; 004af88e
    LEA EDI,[EBX + 0x44]                ; 004af891
    MOV EAX,dword ptr [EBP + 0x28]      ; 004af894
    MOVSD.REP ES:EDI,ESI                ; 004af897
    LEA EDX,[EBX + 0x98]                ; 004af899
    LEA EDI,[ESP + 0x6c]                ; 004af89f
    MOV dword ptr [EBX + 0x40],EAX      ; 004af8a3
    LEA ESI,[ESP + 0x18]                ; 004af8a6
    FLD float ptr [EDX]                 ; 004af8aa
    FLD float ptr [EDX + 0x4]           ; 004af8ac
    LEA EAX,[EBX + 0x80]                ; 004af8af
    FLD float ptr [EDX + 0x8]           ; 004af8b5
    FXCH ST2                            ; 004af8b8
    FSUB float ptr [EAX]                ; 004af8ba
    FXCH                                ; 004af8bc
    FSUB float ptr [EAX + 0x4]          ; 004af8be
    FXCH ST2                            ; 004af8c1
    FSUB float ptr [EAX + 0x8]          ; 004af8c3
    FXCH                                ; 004af8c6
    FSTP float ptr [ESP + 0x18]         ; 004af8c8
    FXCH                                ; 004af8cc
    FSTP float ptr [ESP + 0x1c]         ; 004af8ce
    FSTP float ptr [ESP + 0x20]         ; 004af8d2
    MOVSD ES:EDI,ESI                    ; 004af8d6
    MOVSD ES:EDI,ESI                    ; 004af8d7
    MOVSD ES:EDI,ESI                    ; 004af8d8
    FLD float ptr [ESP + 0x70]          ; 004af8d9
    FMUL ST0                            ; 004af8dd
    FLD float ptr [ESP + 0x6c]          ; 004af8df
    FMUL ST0                            ; 004af8e3
    FADDP                               ; 004af8e5
    FLD float ptr [ESP + 0x74]          ; 004af8e7
    FMUL ST0                            ; 004af8eb
    FADDP                               ; 004af8ed
    FSQRT                               ; 004af8ef
    FMUL double ptr [0x005df29c]        ; 004af8f1 | DAT_005df29c
    PUSH 0x3fc90fdb                     ; 004af8f7
    PUSH 0x3f490fdb                     ; 004af8fc
    FSTP float ptr [ESP + 0xec]         ; 004af901
    CALL FUN_0040cc00                   ; 004af908
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xf0],EAX      ; 004af90d
    FLD float ptr [ESP + 0xf0]          ; 004af914
    ADD ESP,0x8                         ; 004af91b
    PUSH 0x40c90fdb                     ; 004af91e
    PUSH 0x0                            ; 004af923
    FSTP float ptr [ESP + 0xd8]         ; 004af925
    CALL FUN_0040cc00                   ; 004af92c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xf0],EAX      ; 004af931
    FLD float ptr [ESP + 0xf0]          ; 004af938
    ADD ESP,0x8                         ; 004af93f
    FLD ST0                             ; 004af942
    FCOS                                ; 004af944
    FLD float ptr [ESP + 0xd0]          ; 004af946
    FLD ST0                             ; 004af94d
    FCOS                                ; 004af94f
    FXCH ST3                            ; 004af951
    FSIN                                ; 004af953
    FXCH                                ; 004af955
    FSIN                                ; 004af957
    FLD float ptr [ESP + 0xe4]          ; 004af959
    FXCH ST3                            ; 004af960
    FSTP float ptr [ESP + 0xd8]         ; 004af962
    FXCH ST2                            ; 004af969
    FMUL float ptr [ESP + 0xd8]         ; 004af96b
    FLD float ptr [ESP + 0xe4]          ; 004af972
    FXCH ST2                            ; 004af979
    FSTP float ptr [ESP + 0xd4]         ; 004af97b
    FXCH                                ; 004af982
    FMUL float ptr [ESP + 0xd4]         ; 004af984
    FLD float ptr [ESP + 0xe4]          ; 004af98b
    FXCH ST3                            ; 004af992
    FSTP float ptr [ESP + 0xdc]         ; 004af994
    FXCH ST2                            ; 004af99b
    FMUL float ptr [ESP + 0xdc]         ; 004af99d
    FXCH ST3                            ; 004af9a4
    FSTP float ptr [ESP + 0xe0]         ; 004af9a6
    FMUL float ptr [ESP + 0xe0]         ; 004af9ad
    LEA EAX,[ESP + 0x54]                ; 004af9b4
    FXCH                                ; 004af9b8
    FMUL float ptr [ESP + 0xe0]         ; 004af9ba
    PUSH EAX                            ; 004af9c1
    LEA EAX,[ESP + 0x40]                ; 004af9c2
    FXCH ST2                            ; 004af9c6
    FSTP float ptr [ESP + 0x5c]         ; 004af9c8
    PUSH EAX                            ; 004af9cc
    FSTP float ptr [ESP + 0x5c]         ; 004af9cd
    PUSH EBX                            ; 004af9d1
    FSTP float ptr [ESP + 0x68]         ; 004af9d2
    CALL FUN_00532160                   ; 004af9d6
        ;   XREF to: 00532160 (UNCONDITIONAL_CALL)  ; undefined FUN_00532160()
    ADD ESP,0xc                         ; 004af9db
    MOV ESP,EBP                         ; 004af9de
    POP EBP                             ; 004af9e0
    POP EDI                             ; 004af9e1
    POP ESI                             ; 004af9e2
    POP EBX                             ; 004af9e3
    RET                                 ; 004af9e4

