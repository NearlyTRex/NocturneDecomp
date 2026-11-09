; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_djien_cpp_FUN_004615b0(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   unkafter_djien.cpp_FUN_004610b0 at 0046116d
;   unkafter_djien.cpp_FUN_00461590 at 004615a0
;
; Referenced Globals:
;   undefined4 DAT_005d8ee0
;   undefined4 DAT_00612258
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004615b0
        ;   Label: unkafter_djien.cpp_FUN_004615b0
    PUSH EBP                            ; 004615b1
    SUB ESP,0x29c                       ; 004615b2
    MOV EBX,dword ptr [ESP + 0x2a8]     ; 004615b8
    MOV EBP,dword ptr [ESP + 0x2ac]     ; 004615bf
    PUSH EBX                            ; 004615c6
    MOV EAX,dword ptr [EBX + 0x154]     ; 004615c7
    CALL dword ptr [EAX + 0x10c]        ; 004615cd
    ADD ESP,0x4                         ; 004615d3
    TEST EAX,EAX                        ; 004615d6
    JNZ 0x004621b2                      ; 004615d8
        ;   XREF to: 004621b2 (CONDITIONAL_JUMP)  ; LAB_004621b2
    PUSH EDI                            ; 004615de
    PUSH ESI                            ; 004615df
    MOV dword ptr [ESP + 0x29c],EAX     ; 004615e0
    MOV EAX,dword ptr [EBX + 0xc2b0]    ; 004615e7
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004615ed
    JNZ 0x004621bd                      ; 004615f5
        ;   XREF to: 004621bd (CONDITIONAL_JUMP)  ; LAB_004621bd
    MOV EAX,dword ptr [EBX + 0xc2b4]    ; 004615fb
        ;   Label: LAB_004615fb
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00461601
    JZ 0x00461812                       ; 00461609
        ;   XREF to: 00461812 (CONDITIONAL_JUMP)  ; LAB_00461812
    MOV ECX,dword ptr [EBX + 0xc284]    ; 0046160f
    PUSH ECX                            ; 00461615
    LEA EAX,[EBX + 0x158]               ; 00461616
    PUSH EAX                            ; 0046161c
    LEA ESI,[ESP + 0x40]                ; 0046161d
    LEA EDI,[ESP + 0xe8]                ; 00461621
    CALL core_skeleton.cpp_FUN_00569130 ; 00461628
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x40]                ; 0046162d
    ADD ESP,0x8                         ; 00461631
    MOVSD ES:EDI,ESI                    ; 00461634
    MOVSD ES:EDI,ESI                    ; 00461635
    MOVSD ES:EDI,ESI                    ; 00461636
    LEA EAX,[ESP + 0xe0]                ; 00461637
    LEA ESI,[ESP + 0xb0]                ; 0046163e
    CMP ESI,EAX                         ; 00461645
    JZ 0x00461673                       ; 00461647
        ;   XREF to: 00461673 (CONDITIONAL_JUMP)  ; LAB_00461673
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00461649
    MOV dword ptr [ESP + 0xb0],EAX      ; 00461650
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00461657
    MOV dword ptr [ESP + 0xb4],EAX      ; 0046165e
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00461665
    MOV dword ptr [ESP + 0xb8],EAX      ; 0046166c
    MOV ESI,dword ptr [EBX + 0xc29c]    ; 00461673
        ;   Label: LAB_00461673
    PUSH ESI                            ; 00461679
    LEA EAX,[EBX + 0x158]               ; 0046167a
    PUSH EAX                            ; 00461680
    LEA ESI,[ESP + 0x58]                ; 00461681
    LEA EDI,[ESP + 0x1c0]               ; 00461685
    CALL core_skeleton.cpp_FUN_00569130 ; 0046168c
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x58]                ; 00461691
    ADD ESP,0x8                         ; 00461695
    MOVSD ES:EDI,ESI                    ; 00461698
    MOVSD ES:EDI,ESI                    ; 00461699
    MOVSD ES:EDI,ESI                    ; 0046169a
    LEA EAX,[ESP + 0x1b8]               ; 0046169b
    LEA ESI,[ESP + 0xd4]                ; 004616a2
    CMP ESI,EAX                         ; 004616a9
    JZ 0x004616d7                       ; 004616ab
        ;   XREF to: 004616d7 (CONDITIONAL_JUMP)  ; LAB_004616d7
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 004616ad
    MOV dword ptr [ESP + 0xd4],EAX      ; 004616b4
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 004616bb
    MOV dword ptr [ESP + 0xd8],EAX      ; 004616c2
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 004616c9
    MOV dword ptr [ESP + 0xdc],EAX      ; 004616d0
    FLD float ptr [ESP + 0xb0]          ; 004616d7
        ;   Label: LAB_004616d7
    FLD float ptr [ESP + 0xb4]          ; 004616de
    FLD float ptr [ESP + 0xb8]          ; 004616e5
    LEA EDI,[ESP + 0x1c4]               ; 004616ec
    LEA ESI,[ESP + 0x14c]               ; 004616f3
    FXCH ST2                            ; 004616fa
    FADD float ptr [ESP + 0xd4]         ; 004616fc
    FXCH                                ; 00461703
    FADD float ptr [ESP + 0xd8]         ; 00461705
    FXCH ST2                            ; 0046170c
    FADD float ptr [ESP + 0xdc]         ; 0046170e
    FXCH                                ; 00461715
    FSTP float ptr [ESP + 0x14c]        ; 00461717
    FXCH                                ; 0046171e
    FSTP float ptr [ESP + 0x150]        ; 00461720
    FSTP float ptr [ESP + 0x154]        ; 00461727
    MOVSD ES:EDI,ESI                    ; 0046172e
    MOVSD ES:EDI,ESI                    ; 0046172f
    MOVSD ES:EDI,ESI                    ; 00461730
    FLD float ptr [0x005d8ee0]          ; 00461731 | DAT_005d8ee0
    FLD float ptr [ESP + 0x1c4]         ; 00461737
    FMUL ST1                            ; 0046173e
    FLD float ptr [ESP + 0x1c8]         ; 00461740
    FMUL ST2                            ; 00461747
    FLD float ptr [ESP + 0x1cc]         ; 00461749
    FMULP ST3                           ; 00461750
    LEA EDI,[ESP + 0x254]               ; 00461752
    LEA ESI,[ESP + 0x17c]               ; 00461759
    FXCH                                ; 00461760
    FSTP float ptr [ESP + 0x17c]        ; 00461762
    FSTP float ptr [ESP + 0x180]        ; 00461769
    FSTP float ptr [ESP + 0x184]        ; 00461770
    MOVSD ES:EDI,ESI                    ; 00461777
    MOVSD ES:EDI,ESI                    ; 00461778
    MOVSD ES:EDI,ESI                    ; 00461779
    LEA EAX,[ESP + 0x254]               ; 0046177a
    LEA ESI,[ESP + 0x5c]                ; 00461781
    CMP ESI,EAX                         ; 00461785
    JZ 0x004617aa                       ; 00461787
        ;   XREF to: 004617aa (CONDITIONAL_JUMP)  ; LAB_004617aa
    MOV EAX,dword ptr [ESP + 0x254]     ; 00461789
    MOV dword ptr [ESP + 0x5c],EAX      ; 00461790
    MOV EAX,dword ptr [ESP + 0x258]     ; 00461794
    MOV dword ptr [ESP + 0x60],EAX      ; 0046179b
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0046179f
    MOV dword ptr [ESP + 0x64],EAX      ; 004617a6
    MOV ESI,dword ptr [ESP + 0x29c]     ; 004617aa
        ;   Label: LAB_004617aa
    LEA EAX,[ESI*0x4 + 0x0]             ; 004617b1
    SUB EAX,ESI                         ; 004617b8
    SHL EAX,0x2                         ; 004617ba
    LEA ESI,[EAX + EBP*0x1]             ; 004617bd
    LEA EAX,[ESP + 0xd4]                ; 004617c0
    CMP ESI,EAX                         ; 004617c7
    JZ 0x004617e8                       ; 004617c9
        ;   XREF to: 004617e8 (CONDITIONAL_JUMP)  ; LAB_004617e8
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004617cb
    MOV dword ptr [ESI],EAX             ; 004617d2
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004617d4
    MOV dword ptr [ESI + 0x4],EAX       ; 004617db
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004617de
    MOV dword ptr [ESI + 0x8],EAX       ; 004617e5
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004617e8
        ;   Label: LAB_004617e8
    MOV ESI,dword ptr [ESP + 0x2b8]     ; 004617ef
    MOV EDI,dword ptr [ESP + 0x29c]     ; 004617f6
    SHL EAX,0x2                         ; 004617fd
    INC EDI                             ; 00461800
    ADD ESI,EAX                         ; 00461801
    MOV EAX,dword ptr [EBX + 0xc2b4]    ; 00461803
    MOV dword ptr [ESP + 0x29c],EDI     ; 00461809
    MOV dword ptr [ESI],EAX             ; 00461810
    MOV EAX,dword ptr [EBX + 0xc2b8]    ; 00461812
        ;   Label: LAB_00461812
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00461818
    JZ 0x00461a15                       ; 00461820
        ;   XREF to: 00461a15 (CONDITIONAL_JUMP)  ; LAB_00461a15
    MOV ECX,dword ptr [EBX + 0xc288]    ; 00461826
    PUSH ECX                            ; 0046182c
    LEA EAX,[EBX + 0x158]               ; 0046182d
    PUSH EAX                            ; 00461833
    LEA ESI,[ESP + 0x13c]               ; 00461834
    LEA EDI,[ESP + 0x28c]               ; 0046183b
    CALL core_skeleton.cpp_FUN_00569130 ; 00461842
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x13c]               ; 00461847
    ADD ESP,0x8                         ; 0046184e
    MOVSD ES:EDI,ESI                    ; 00461851
    MOVSD ES:EDI,ESI                    ; 00461852
    MOVSD ES:EDI,ESI                    ; 00461853
    LEA EAX,[ESP + 0x284]               ; 00461854
    LEA ESI,[ESP + 0xb0]                ; 0046185b
    CMP ESI,EAX                         ; 00461862
    JZ 0x00461890                       ; 00461864
        ;   XREF to: 00461890 (CONDITIONAL_JUMP)  ; LAB_00461890
    MOV EAX,dword ptr [ESP + 0x284]     ; 00461866
    MOV dword ptr [ESP + 0xb0],EAX      ; 0046186d
    MOV EAX,dword ptr [ESP + 0x288]     ; 00461874
    MOV dword ptr [ESP + 0xb4],EAX      ; 0046187b
    MOV EAX,dword ptr [ESP + 0x28c]     ; 00461882
    MOV dword ptr [ESP + 0xb8],EAX      ; 00461889
    MOV ESI,dword ptr [EBX + 0xc2a0]    ; 00461890
        ;   Label: LAB_00461890
    PUSH ESI                            ; 00461896
    LEA EAX,[EBX + 0x158]               ; 00461897
    PUSH EAX                            ; 0046189d
    LEA ESI,[ESP + 0x148]               ; 0046189e
    LEA EDI,[ESP + 0xf4]                ; 004618a5
    CALL core_skeleton.cpp_FUN_00569130 ; 004618ac
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x148]               ; 004618b1
    ADD ESP,0x8                         ; 004618b8
    MOVSD ES:EDI,ESI                    ; 004618bb
    MOVSD ES:EDI,ESI                    ; 004618bc
    MOVSD ES:EDI,ESI                    ; 004618bd
    LEA EAX,[ESP + 0xec]                ; 004618be
    LEA ESI,[ESP + 0xd4]                ; 004618c5
    CMP ESI,EAX                         ; 004618cc
    JZ 0x004618fa                       ; 004618ce
        ;   XREF to: 004618fa (CONDITIONAL_JUMP)  ; LAB_004618fa
    MOV EAX,dword ptr [ESP + 0xec]      ; 004618d0
    MOV dword ptr [ESP + 0xd4],EAX      ; 004618d7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004618de
    MOV dword ptr [ESP + 0xd8],EAX      ; 004618e5
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004618ec
    MOV dword ptr [ESP + 0xdc],EAX      ; 004618f3
    FLD float ptr [ESP + 0xb0]          ; 004618fa
        ;   Label: LAB_004618fa
    FLD float ptr [ESP + 0xb4]          ; 00461901
    FLD float ptr [ESP + 0xb8]          ; 00461908
    LEA EDI,[ESP + 0x11c]               ; 0046190f
    LEA ESI,[ESP + 0x290]               ; 00461916
    FXCH ST2                            ; 0046191d
    FADD float ptr [ESP + 0xd4]         ; 0046191f
    FXCH                                ; 00461926
    FADD float ptr [ESP + 0xd8]         ; 00461928
    FXCH ST2                            ; 0046192f
    FADD float ptr [ESP + 0xdc]         ; 00461931
    FXCH                                ; 00461938
    FSTP float ptr [ESP + 0x290]        ; 0046193a
    FXCH                                ; 00461941
    FSTP float ptr [ESP + 0x294]        ; 00461943
    FSTP float ptr [ESP + 0x298]        ; 0046194a
    MOVSD ES:EDI,ESI                    ; 00461951
    MOVSD ES:EDI,ESI                    ; 00461952
    MOVSD ES:EDI,ESI                    ; 00461953
    FLD float ptr [0x005d8ee0]          ; 00461954 | DAT_005d8ee0
    FLD float ptr [ESP + 0x11c]         ; 0046195a
    FMUL ST1                            ; 00461961
    FLD float ptr [ESP + 0x120]         ; 00461963
    FMUL ST2                            ; 0046196a
    FLD float ptr [ESP + 0x124]         ; 0046196c
    FMULP ST3                           ; 00461973
    LEA EDI,[ESP + 0x104]               ; 00461975
    LEA ESI,[ESP + 0x8]                 ; 0046197c
    FXCH                                ; 00461980
    FSTP float ptr [ESP + 0x8]          ; 00461982
    FSTP float ptr [ESP + 0xc]          ; 00461986
    FSTP float ptr [ESP + 0x10]         ; 0046198a
    MOVSD ES:EDI,ESI                    ; 0046198e
    MOVSD ES:EDI,ESI                    ; 0046198f
    MOVSD ES:EDI,ESI                    ; 00461990
    LEA EAX,[ESP + 0x104]               ; 00461991
    LEA ESI,[ESP + 0x5c]                ; 00461998
    CMP ESI,EAX                         ; 0046199c
    JZ 0x004619c1                       ; 0046199e
        ;   XREF to: 004619c1 (CONDITIONAL_JUMP)  ; LAB_004619c1
    MOV EAX,dword ptr [ESP + 0x104]     ; 004619a0
    MOV dword ptr [ESP + 0x5c],EAX      ; 004619a7
    MOV EAX,dword ptr [ESP + 0x108]     ; 004619ab
    MOV dword ptr [ESP + 0x60],EAX      ; 004619b2
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004619b6
    MOV dword ptr [ESP + 0x64],EAX      ; 004619bd
    MOV ESI,dword ptr [ESP + 0x29c]     ; 004619c1
        ;   Label: LAB_004619c1
    LEA EAX,[ESI*0x4 + 0x0]             ; 004619c8
    SUB EAX,ESI                         ; 004619cf
    SHL EAX,0x2                         ; 004619d1
    LEA ESI,[EAX + EBP*0x1]             ; 004619d4
    LEA EAX,[ESP + 0x5c]                ; 004619d7
    CMP ESI,EAX                         ; 004619db
    JZ 0x004619f3                       ; 004619dd
        ;   XREF to: 004619f3 (CONDITIONAL_JUMP)  ; LAB_004619f3
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004619df
    MOV dword ptr [ESI],EAX             ; 004619e3
    MOV EAX,dword ptr [ESP + 0x60]      ; 004619e5
    MOV dword ptr [ESI + 0x4],EAX       ; 004619e9
    MOV EAX,dword ptr [ESP + 0x64]      ; 004619ec
    MOV dword ptr [ESI + 0x8],EAX       ; 004619f0
    MOV ESI,dword ptr [ESP + 0x29c]     ; 004619f3
        ;   Label: LAB_004619f3
    MOV EDI,dword ptr [ESP + 0x2b8]     ; 004619fa
    SHL ESI,0x2                         ; 00461a01
    ADD ESI,EDI                         ; 00461a04
    MOV EAX,dword ptr [EBX + 0xc2b8]    ; 00461a06
    MOV dword ptr [ESI],EAX             ; 00461a0c
    INC dword ptr [ESP + 0x29c]         ; 00461a0e
    MOV EAX,dword ptr [EBX + 0xc2bc]    ; 00461a15
        ;   Label: LAB_00461a15
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00461a1b
    JZ 0x00461c20                       ; 00461a23
        ;   XREF to: 00461c20 (CONDITIONAL_JUMP)  ; LAB_00461c20
    MOV ECX,dword ptr [EBX + 0xc28c]    ; 00461a29
    PUSH ECX                            ; 00461a2f
    LEA EAX,[EBX + 0x158]               ; 00461a30
    PUSH EAX                            ; 00461a36
    LEA ESI,[ESP + 0x19c]               ; 00461a37
    LEA EDI,[ESP + 0x1b4]               ; 00461a3e
    CALL core_skeleton.cpp_FUN_00569130 ; 00461a45
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x19c]               ; 00461a4a
    ADD ESP,0x8                         ; 00461a51
    MOVSD ES:EDI,ESI                    ; 00461a54
    MOVSD ES:EDI,ESI                    ; 00461a55
    MOVSD ES:EDI,ESI                    ; 00461a56
    LEA EAX,[ESP + 0x1ac]               ; 00461a57
    LEA ESI,[ESP + 0xb0]                ; 00461a5e
    CMP ESI,EAX                         ; 00461a65
    JZ 0x00461a93                       ; 00461a67
        ;   XREF to: 00461a93 (CONDITIONAL_JUMP)  ; LAB_00461a93
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 00461a69
    MOV dword ptr [ESP + 0xb0],EAX      ; 00461a70
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 00461a77
    MOV dword ptr [ESP + 0xb4],EAX      ; 00461a7e
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00461a85
    MOV dword ptr [ESP + 0xb8],EAX      ; 00461a8c
    MOV ESI,dword ptr [EBX + 0xc2a4]    ; 00461a93
        ;   Label: LAB_00461a93
    PUSH ESI                            ; 00461a99
    LEA EAX,[EBX + 0x158]               ; 00461a9a
    PUSH EAX                            ; 00461aa0
    LEA ESI,[ESP + 0x250]               ; 00461aa1
    LEA EDI,[ESP + 0xa0]                ; 00461aa8
    CALL core_skeleton.cpp_FUN_00569130 ; 00461aaf
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x250]               ; 00461ab4
    ADD ESP,0x8                         ; 00461abb
    MOVSD ES:EDI,ESI                    ; 00461abe
    MOVSD ES:EDI,ESI                    ; 00461abf
    MOVSD ES:EDI,ESI                    ; 00461ac0
    LEA EAX,[ESP + 0x98]                ; 00461ac1
    LEA ESI,[ESP + 0xd4]                ; 00461ac8
    CMP ESI,EAX                         ; 00461acf
    JZ 0x00461afd                       ; 00461ad1
        ;   XREF to: 00461afd (CONDITIONAL_JUMP)  ; LAB_00461afd
    MOV EAX,dword ptr [ESP + 0x98]      ; 00461ad3
    MOV dword ptr [ESP + 0xd4],EAX      ; 00461ada
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00461ae1
    MOV dword ptr [ESP + 0xd8],EAX      ; 00461ae8
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00461aef
    MOV dword ptr [ESP + 0xdc],EAX      ; 00461af6
    FLD float ptr [ESP + 0xb0]          ; 00461afd
        ;   Label: LAB_00461afd
    FLD float ptr [ESP + 0xb4]          ; 00461b04
    FLD float ptr [ESP + 0xb8]          ; 00461b0b
    LEA EDI,[ESP + 0xc8]                ; 00461b12
    LEA ESI,[ESP + 0x158]               ; 00461b19
    FXCH ST2                            ; 00461b20
    FADD float ptr [ESP + 0xd4]         ; 00461b22
    FXCH                                ; 00461b29
    FADD float ptr [ESP + 0xd8]         ; 00461b2b
    FXCH ST2                            ; 00461b32
    FADD float ptr [ESP + 0xdc]         ; 00461b34
    FXCH                                ; 00461b3b
    FSTP float ptr [ESP + 0x158]        ; 00461b3d
    FXCH                                ; 00461b44
    FSTP float ptr [ESP + 0x15c]        ; 00461b46
    FSTP float ptr [ESP + 0x160]        ; 00461b4d
    MOVSD ES:EDI,ESI                    ; 00461b54
    MOVSD ES:EDI,ESI                    ; 00461b55
    MOVSD ES:EDI,ESI                    ; 00461b56
    FLD float ptr [0x005d8ee0]          ; 00461b57 | DAT_005d8ee0
    FLD float ptr [ESP + 0xc8]          ; 00461b5d
    FMUL ST1                            ; 00461b64
    FLD float ptr [ESP + 0xcc]          ; 00461b66
    FMUL ST2                            ; 00461b6d
    FLD float ptr [ESP + 0xd0]          ; 00461b6f
    FMULP ST3                           ; 00461b76
    LEA EDI,[ESP + 0x200]               ; 00461b78
    LEA ESI,[ESP + 0x14]                ; 00461b7f
    FXCH                                ; 00461b83
    FSTP float ptr [ESP + 0x14]         ; 00461b85
    FSTP float ptr [ESP + 0x18]         ; 00461b89
    FSTP float ptr [ESP + 0x1c]         ; 00461b8d
    MOVSD ES:EDI,ESI                    ; 00461b91
    MOVSD ES:EDI,ESI                    ; 00461b92
    MOVSD ES:EDI,ESI                    ; 00461b93
    LEA EAX,[ESP + 0x200]               ; 00461b94
    LEA ESI,[ESP + 0x5c]                ; 00461b9b
    CMP ESI,EAX                         ; 00461b9f
    JZ 0x00461bc4                       ; 00461ba1
        ;   XREF to: 00461bc4 (CONDITIONAL_JUMP)  ; LAB_00461bc4
    MOV EAX,dword ptr [ESP + 0x200]     ; 00461ba3
    MOV dword ptr [ESP + 0x5c],EAX      ; 00461baa
    MOV EAX,dword ptr [ESP + 0x204]     ; 00461bae
    MOV dword ptr [ESP + 0x60],EAX      ; 00461bb5
    MOV EAX,dword ptr [ESP + 0x208]     ; 00461bb9
    MOV dword ptr [ESP + 0x64],EAX      ; 00461bc0
    MOV ESI,dword ptr [ESP + 0x29c]     ; 00461bc4
        ;   Label: LAB_00461bc4
    LEA EAX,[ESI*0x4 + 0x0]             ; 00461bcb
    SUB EAX,ESI                         ; 00461bd2
    SHL EAX,0x2                         ; 00461bd4
    LEA ESI,[EAX + EBP*0x1]             ; 00461bd7
    LEA EAX,[ESP + 0x5c]                ; 00461bda
    CMP ESI,EAX                         ; 00461bde
    JZ 0x00461bf6                       ; 00461be0
        ;   XREF to: 00461bf6 (CONDITIONAL_JUMP)  ; LAB_00461bf6
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00461be2
    MOV dword ptr [ESI],EAX             ; 00461be6
    MOV EAX,dword ptr [ESP + 0x60]      ; 00461be8
    MOV dword ptr [ESI + 0x4],EAX       ; 00461bec
    MOV EAX,dword ptr [ESP + 0x64]      ; 00461bef
    MOV dword ptr [ESI + 0x8],EAX       ; 00461bf3
    MOV EAX,dword ptr [ESP + 0x29c]     ; 00461bf6
        ;   Label: LAB_00461bf6
    MOV ESI,dword ptr [ESP + 0x2b8]     ; 00461bfd
    MOV EDI,dword ptr [ESP + 0x29c]     ; 00461c04
    SHL EAX,0x2                         ; 00461c0b
    INC EDI                             ; 00461c0e
    ADD ESI,EAX                         ; 00461c0f
    MOV EAX,dword ptr [EBX + 0xc2bc]    ; 00461c11
    MOV dword ptr [ESP + 0x29c],EDI     ; 00461c17
    MOV dword ptr [ESI],EAX             ; 00461c1e
    MOV EAX,dword ptr [EBX + 0xc2c0]    ; 00461c20
        ;   Label: LAB_00461c20
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00461c26
    JZ 0x00461e0d                       ; 00461c2e
        ;   XREF to: 00461e0d (CONDITIONAL_JUMP)  ; LAB_00461e0d
    MOV ECX,dword ptr [EBX + 0xc290]    ; 00461c34
    PUSH ECX                            ; 00461c3a
    LEA EAX,[EBX + 0x158]               ; 00461c3b
    PUSH EAX                            ; 00461c41
    LEA ESI,[ESP + 0xac]                ; 00461c42
    LEA EDI,[ESP + 0x28]                ; 00461c49
    CALL core_skeleton.cpp_FUN_00569130 ; 00461c4d
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0xac]                ; 00461c52
    ADD ESP,0x8                         ; 00461c59
    MOVSD ES:EDI,ESI                    ; 00461c5c
    MOVSD ES:EDI,ESI                    ; 00461c5d
    MOVSD ES:EDI,ESI                    ; 00461c5e
    LEA EAX,[ESP + 0xb0]                ; 00461c5f
    LEA ESI,[ESP + 0x20]                ; 00461c66
    CMP EAX,ESI                         ; 00461c6a
    JZ 0x00461c8f                       ; 00461c6c
        ;   XREF to: 00461c8f (CONDITIONAL_JUMP)  ; LAB_00461c8f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00461c6e
    MOV dword ptr [ESP + 0xb0],EAX      ; 00461c72
    MOV EAX,dword ptr [ESP + 0x24]      ; 00461c79
    MOV dword ptr [ESP + 0xb4],EAX      ; 00461c7d
    MOV EAX,dword ptr [ESP + 0x28]      ; 00461c84
    MOV dword ptr [ESP + 0xb8],EAX      ; 00461c88
    MOV ESI,dword ptr [EBX + 0xc2a8]    ; 00461c8f
        ;   Label: LAB_00461c8f
    PUSH ESI                            ; 00461c95
    LEA EAX,[EBX + 0x158]               ; 00461c96
    PUSH EAX                            ; 00461c9c
    LEA ESI,[ESP + 0xc4]                ; 00461c9d
    LEA EDI,[ESP + 0x4c]                ; 00461ca4
    CALL core_skeleton.cpp_FUN_00569130 ; 00461ca8
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0xc4]                ; 00461cad
    ADD ESP,0x8                         ; 00461cb4
    MOVSD ES:EDI,ESI                    ; 00461cb7
    MOVSD ES:EDI,ESI                    ; 00461cb8
    MOVSD ES:EDI,ESI                    ; 00461cb9
    LEA EAX,[ESP + 0x44]                ; 00461cba
    LEA ESI,[ESP + 0xd4]                ; 00461cbe
    CMP ESI,EAX                         ; 00461cc5
    JZ 0x00461cea                       ; 00461cc7
        ;   XREF to: 00461cea (CONDITIONAL_JUMP)  ; LAB_00461cea
    MOV EAX,dword ptr [ESP + 0x44]      ; 00461cc9
    MOV dword ptr [ESP + 0xd4],EAX      ; 00461ccd
    MOV EAX,dword ptr [ESP + 0x48]      ; 00461cd4
    MOV dword ptr [ESP + 0xd8],EAX      ; 00461cd8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00461cdf
    MOV dword ptr [ESP + 0xdc],EAX      ; 00461ce3
    FLD float ptr [ESP + 0xb0]          ; 00461cea
        ;   Label: LAB_00461cea
    FLD float ptr [ESP + 0xb4]          ; 00461cf1
    FLD float ptr [ESP + 0xb8]          ; 00461cf8
    LEA EDI,[ESP + 0x68]                ; 00461cff
    LEA ESI,[ESP + 0x1e8]               ; 00461d03
    FXCH ST2                            ; 00461d0a
    FADD float ptr [ESP + 0xd4]         ; 00461d0c
    FXCH                                ; 00461d13
    FADD float ptr [ESP + 0xd8]         ; 00461d15
    FXCH ST2                            ; 00461d1c
    FADD float ptr [ESP + 0xdc]         ; 00461d1e
    FXCH                                ; 00461d25
    FSTP float ptr [ESP + 0x1e8]        ; 00461d27
    FXCH                                ; 00461d2e
    FSTP float ptr [ESP + 0x1ec]        ; 00461d30
    FSTP float ptr [ESP + 0x1f0]        ; 00461d37
    MOVSD ES:EDI,ESI                    ; 00461d3e
    MOVSD ES:EDI,ESI                    ; 00461d3f
    MOVSD ES:EDI,ESI                    ; 00461d40
    FLD float ptr [0x005d8ee0]          ; 00461d41 | DAT_005d8ee0
    FLD float ptr [ESP + 0x68]          ; 00461d47
    FMUL ST1                            ; 00461d4b
    FLD float ptr [ESP + 0x6c]          ; 00461d4d
    FMUL ST2                            ; 00461d51
    FLD float ptr [ESP + 0x70]          ; 00461d53
    FMULP ST3                           ; 00461d57
    LEA EDI,[ESP + 0x8c]                ; 00461d59
    LEA ESI,[ESP + 0x1f4]               ; 00461d60
    FXCH                                ; 00461d67
    FSTP float ptr [ESP + 0x1f4]        ; 00461d69
    FSTP float ptr [ESP + 0x1f8]        ; 00461d70
    FSTP float ptr [ESP + 0x1fc]        ; 00461d77
    MOVSD ES:EDI,ESI                    ; 00461d7e
    MOVSD ES:EDI,ESI                    ; 00461d7f
    MOVSD ES:EDI,ESI                    ; 00461d80
    LEA EAX,[ESP + 0x8c]                ; 00461d81
    LEA ESI,[ESP + 0x5c]                ; 00461d88
    CMP ESI,EAX                         ; 00461d8c
    JZ 0x00461db1                       ; 00461d8e
        ;   XREF to: 00461db1 (CONDITIONAL_JUMP)  ; LAB_00461db1
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00461d90
    MOV dword ptr [ESP + 0x5c],EAX      ; 00461d97
    MOV EAX,dword ptr [ESP + 0x90]      ; 00461d9b
    MOV dword ptr [ESP + 0x60],EAX      ; 00461da2
    MOV EAX,dword ptr [ESP + 0x94]      ; 00461da6
    MOV dword ptr [ESP + 0x64],EAX      ; 00461dad
    MOV ESI,dword ptr [ESP + 0x29c]     ; 00461db1
        ;   Label: LAB_00461db1
    LEA EAX,[ESI*0x4 + 0x0]             ; 00461db8
    SUB EAX,ESI                         ; 00461dbf
    SHL EAX,0x2                         ; 00461dc1
    LEA ESI,[EAX + EBP*0x1]             ; 00461dc4
    LEA EAX,[ESP + 0x5c]                ; 00461dc7
    CMP ESI,EAX                         ; 00461dcb
    JZ 0x00461de3                       ; 00461dcd
        ;   XREF to: 00461de3 (CONDITIONAL_JUMP)  ; LAB_00461de3
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00461dcf
    MOV dword ptr [ESI],EAX             ; 00461dd3
    MOV EAX,dword ptr [ESP + 0x60]      ; 00461dd5
    MOV dword ptr [ESI + 0x4],EAX       ; 00461dd9
    MOV EAX,dword ptr [ESP + 0x64]      ; 00461ddc
    MOV dword ptr [ESI + 0x8],EAX       ; 00461de0
    MOV EAX,dword ptr [ESP + 0x29c]     ; 00461de3
        ;   Label: LAB_00461de3
    MOV ESI,dword ptr [ESP + 0x2b8]     ; 00461dea
    MOV EDI,dword ptr [ESP + 0x29c]     ; 00461df1
    SHL EAX,0x2                         ; 00461df8
    INC EDI                             ; 00461dfb
    ADD ESI,EAX                         ; 00461dfc
    MOV EAX,dword ptr [EBX + 0xc2c0]    ; 00461dfe
    MOV dword ptr [ESP + 0x29c],EDI     ; 00461e04
    MOV dword ptr [ESI],EAX             ; 00461e0b
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 00461e0d
        ;   Label: LAB_00461e0d
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00461e13
    JZ 0x00462024                       ; 00461e1b
        ;   XREF to: 00462024 (CONDITIONAL_JUMP)  ; LAB_00462024
    MOV ECX,dword ptr [EBX + 0xc294]    ; 00461e21
    PUSH ECX                            ; 00461e27
    LEA EAX,[EBX + 0x158]               ; 00461e28
    PUSH EAX                            ; 00461e2e
    LEA ESI,[ESP + 0x1a8]               ; 00461e2f
    LEA EDI,[ESP + 0x118]               ; 00461e36
    CALL core_skeleton.cpp_FUN_00569130 ; 00461e3d
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x1a8]               ; 00461e42
    ADD ESP,0x8                         ; 00461e49
    MOVSD ES:EDI,ESI                    ; 00461e4c
    MOVSD ES:EDI,ESI                    ; 00461e4d
    MOVSD ES:EDI,ESI                    ; 00461e4e
    LEA EAX,[ESP + 0x110]               ; 00461e4f
    LEA ESI,[ESP + 0xb0]                ; 00461e56
    CMP ESI,EAX                         ; 00461e5d
    JZ 0x00461e8b                       ; 00461e5f
        ;   XREF to: 00461e8b (CONDITIONAL_JUMP)  ; LAB_00461e8b
    MOV EAX,dword ptr [ESP + 0x110]     ; 00461e61
    MOV dword ptr [ESP + 0xb0],EAX      ; 00461e68
    MOV EAX,dword ptr [ESP + 0x114]     ; 00461e6f
    MOV dword ptr [ESP + 0xb4],EAX      ; 00461e76
    MOV EAX,dword ptr [ESP + 0x118]     ; 00461e7d
    MOV dword ptr [ESP + 0xb8],EAX      ; 00461e84
    MOV ESI,dword ptr [EBX + 0xc2ac]    ; 00461e8b
        ;   Label: LAB_00461e8b
    PUSH ESI                            ; 00461e91
    LEA EAX,[EBX + 0x158]               ; 00461e92
    PUSH EAX                            ; 00461e98
    LEA ESI,[ESP + 0x88]                ; 00461e99
    LEA EDI,[ESP + 0x280]               ; 00461ea0
    CALL core_skeleton.cpp_FUN_00569130 ; 00461ea7
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x88]                ; 00461eac
    ADD ESP,0x8                         ; 00461eb3
    MOVSD ES:EDI,ESI                    ; 00461eb6
    MOVSD ES:EDI,ESI                    ; 00461eb7
    MOVSD ES:EDI,ESI                    ; 00461eb8
    LEA EAX,[ESP + 0x278]               ; 00461eb9
    LEA ESI,[ESP + 0xd4]                ; 00461ec0
    CMP ESI,EAX                         ; 00461ec7
    JZ 0x00461ef5                       ; 00461ec9
        ;   XREF to: 00461ef5 (CONDITIONAL_JUMP)  ; LAB_00461ef5
    MOV EAX,dword ptr [ESP + 0x278]     ; 00461ecb
    MOV dword ptr [ESP + 0xd4],EAX      ; 00461ed2
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00461ed9
    MOV dword ptr [ESP + 0xd8],EAX      ; 00461ee0
    MOV EAX,dword ptr [ESP + 0x280]     ; 00461ee7
    MOV dword ptr [ESP + 0xdc],EAX      ; 00461eee
    FLD float ptr [ESP + 0xb0]          ; 00461ef5
        ;   Label: LAB_00461ef5
    FLD float ptr [ESP + 0xb4]          ; 00461efc
    FLD float ptr [ESP + 0xb8]          ; 00461f03
    LEA EDI,[ESP + 0x170]               ; 00461f0a
    LEA ESI,[ESP + 0x1dc]               ; 00461f11
    FXCH ST2                            ; 00461f18
    FADD float ptr [ESP + 0xd4]         ; 00461f1a
    FXCH                                ; 00461f21
    FADD float ptr [ESP + 0xd8]         ; 00461f23
    FXCH ST2                            ; 00461f2a
    FADD float ptr [ESP + 0xdc]         ; 00461f2c
    FXCH                                ; 00461f33
    FSTP float ptr [ESP + 0x1dc]        ; 00461f35
    FXCH                                ; 00461f3c
    FSTP float ptr [ESP + 0x1e0]        ; 00461f3e
    FSTP float ptr [ESP + 0x1e4]        ; 00461f45
    MOVSD ES:EDI,ESI                    ; 00461f4c
    MOVSD ES:EDI,ESI                    ; 00461f4d
    MOVSD ES:EDI,ESI                    ; 00461f4e
    FLD float ptr [0x005d8ee0]          ; 00461f4f | DAT_005d8ee0
    FLD float ptr [ESP + 0x170]         ; 00461f55
    FMUL ST1                            ; 00461f5c
    FLD float ptr [ESP + 0x174]         ; 00461f5e
    FMUL ST2                            ; 00461f65
    FLD float ptr [ESP + 0x178]         ; 00461f67
    FMULP ST3                           ; 00461f6e
    LEA EDI,[ESP + 0xf8]                ; 00461f70
    LEA ESI,[ESP + 0x20c]               ; 00461f77
    FXCH                                ; 00461f7e
    FSTP float ptr [ESP + 0x20c]        ; 00461f80
    FSTP float ptr [ESP + 0x210]        ; 00461f87
    FSTP float ptr [ESP + 0x214]        ; 00461f8e
    MOVSD ES:EDI,ESI                    ; 00461f95
    MOVSD ES:EDI,ESI                    ; 00461f96
    MOVSD ES:EDI,ESI                    ; 00461f97
    LEA EAX,[ESP + 0xf8]                ; 00461f98
    LEA ESI,[ESP + 0x5c]                ; 00461f9f
    CMP ESI,EAX                         ; 00461fa3
    JZ 0x00461fc8                       ; 00461fa5
        ;   XREF to: 00461fc8 (CONDITIONAL_JUMP)  ; LAB_00461fc8
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00461fa7
    MOV dword ptr [ESP + 0x5c],EAX      ; 00461fae
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00461fb2
    MOV dword ptr [ESP + 0x60],EAX      ; 00461fb9
    MOV EAX,dword ptr [ESP + 0x100]     ; 00461fbd
    MOV dword ptr [ESP + 0x64],EAX      ; 00461fc4
    MOV ESI,dword ptr [ESP + 0x29c]     ; 00461fc8
        ;   Label: LAB_00461fc8
    LEA EAX,[ESI*0x4 + 0x0]             ; 00461fcf
    SUB EAX,ESI                         ; 00461fd6
    SHL EAX,0x2                         ; 00461fd8
    LEA ESI,[EAX + EBP*0x1]             ; 00461fdb
    LEA EAX,[ESP + 0x5c]                ; 00461fde
    CMP ESI,EAX                         ; 00461fe2
    JZ 0x00461ffa                       ; 00461fe4
        ;   XREF to: 00461ffa (CONDITIONAL_JUMP)  ; LAB_00461ffa
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00461fe6
    MOV dword ptr [ESI],EAX             ; 00461fea
    MOV EAX,dword ptr [ESP + 0x60]      ; 00461fec
    MOV dword ptr [ESI + 0x4],EAX       ; 00461ff0
    MOV EAX,dword ptr [ESP + 0x64]      ; 00461ff3
    MOV dword ptr [ESI + 0x8],EAX       ; 00461ff7
    MOV EAX,dword ptr [ESP + 0x29c]     ; 00461ffa
        ;   Label: LAB_00461ffa
    MOV ESI,dword ptr [ESP + 0x2b8]     ; 00462001
    MOV EDI,dword ptr [ESP + 0x29c]     ; 00462008
    SHL EAX,0x2                         ; 0046200f
    INC EDI                             ; 00462012
    ADD ESI,EAX                         ; 00462013
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 00462015
    MOV dword ptr [ESP + 0x29c],EDI     ; 0046201b
    MOV dword ptr [ESI],EAX             ; 00462022
    CMP dword ptr [ESP + 0x29c],0x0     ; 00462024
        ;   Label: LAB_00462024
    JNZ 0x004620ea                      ; 0046202c
        ;   XREF to: 004620ea (CONDITIONAL_JUMP)  ; LAB_004620ea
    MOV EDX,dword ptr [EBX + 0xc268]    ; 00462032
    PUSH EDX                            ; 00462038
    LEA EAX,[EBX + 0x158]               ; 00462039
    PUSH EAX                            ; 0046203f
    LEA ESI,[ESP + 0x22c]               ; 00462040
    LEA EDI,[ESP + 0x238]               ; 00462047
    CALL core_skeleton.cpp_FUN_00569130 ; 0046204e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x22c]               ; 00462053
    ADD ESP,0x8                         ; 0046205a
    MOVSD ES:EDI,ESI                    ; 0046205d
    MOVSD ES:EDI,ESI                    ; 0046205e
    MOVSD ES:EDI,ESI                    ; 0046205f
    LEA EAX,[ESP + 0x230]               ; 00462060
    LEA ESI,[ESP + 0x5c]                ; 00462067
    CMP ESI,EAX                         ; 0046206b
    JZ 0x00462090                       ; 0046206d
        ;   XREF to: 00462090 (CONDITIONAL_JUMP)  ; LAB_00462090
    MOV EAX,dword ptr [ESP + 0x230]     ; 0046206f
    MOV dword ptr [ESP + 0x5c],EAX      ; 00462076
    MOV EAX,dword ptr [ESP + 0x234]     ; 0046207a
    MOV dword ptr [ESP + 0x60],EAX      ; 00462081
    MOV EAX,dword ptr [ESP + 0x238]     ; 00462085
    MOV dword ptr [ESP + 0x64],EAX      ; 0046208c
    MOV ESI,dword ptr [ESP + 0x29c]     ; 00462090
        ;   Label: LAB_00462090
    LEA EAX,[ESI*0x4 + 0x0]             ; 00462097
    SUB EAX,ESI                         ; 0046209e
    SHL EAX,0x2                         ; 004620a0
    LEA ESI,[EAX + EBP*0x1]             ; 004620a3
    LEA EAX,[ESP + 0x5c]                ; 004620a6
    CMP ESI,EAX                         ; 004620aa
    JZ 0x004620c2                       ; 004620ac
        ;   XREF to: 004620c2 (CONDITIONAL_JUMP)  ; LAB_004620c2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004620ae
    MOV dword ptr [ESI],EAX             ; 004620b2
    MOV EAX,dword ptr [ESP + 0x60]      ; 004620b4
    MOV dword ptr [ESI + 0x4],EAX       ; 004620b8
    MOV EAX,dword ptr [ESP + 0x64]      ; 004620bb
    MOV dword ptr [ESI + 0x8],EAX       ; 004620bf
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004620c2
        ;   Label: LAB_004620c2
    MOV ECX,dword ptr [ESP + 0x2b8]     ; 004620c9
    MOV ESI,dword ptr [ESP + 0x29c]     ; 004620d0
    SHL EAX,0x2                         ; 004620d7
    INC ESI                             ; 004620da
    ADD EAX,ECX                         ; 004620db
    MOV dword ptr [ESP + 0x29c],ESI     ; 004620dd
    MOV dword ptr [EAX],0x0             ; 004620e4
    MOV EDI,dword ptr [EBX + 0xc9c0]    ; 004620ea
        ;   Label: LAB_004620ea
    TEST EDI,EDI                        ; 004620f0
    JNZ 0x004621a0                      ; 004620f2
        ;   XREF to: 004621a0 (CONDITIONAL_JUMP)  ; LAB_004621a0
    FLD float ptr [EBX + 0xc1e4]        ; 004620f8
    FLDZ                                ; 004620fe
    FCOMPP                              ; 00462100
    FNSTSW AX                           ; 00462102
    SAHF                                ; 00462104
    JC 0x004621a0                       ; 00462105
        ;   XREF to: 004621a0 (CONDITIONAL_JUMP)  ; LAB_004621a0
    MOV EDX,dword ptr [EBX + 0xc2d4]    ; 0046210b
    CMP EDX,dword ptr [EBX + 0xc2d0]    ; 00462111
    JLE 0x004621a0                      ; 00462117
        ;   XREF to: 004621a0 (CONDITIONAL_JUMP)  ; LAB_004621a0
    MOV ESI,dword ptr [ESP + 0x29c]     ; 0046211d
    MOV dword ptr [ESP + 0x2a0],EDI     ; 00462124
    TEST ESI,ESI                        ; 0046212b
    JLE 0x004621a0                      ; 0046212d
        ;   XREF to: 004621a0 (CONDITIONAL_JUMP)  ; LAB_004621a0
    PUSH EBP                            ; 0046212f
        ;   Label: LAB_0046212f
    PUSH EBX                            ; 00462130
    LEA ESI,[ESP + 0x274]               ; 00462131
    CALL core_actor.cpp_FUN_00408b40    ; 00462138
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0046213d
    PUSH 0x612258                       ; 00462140 | DAT_00612258
    LEA EDI,[ESP + 0x264]               ; 00462145
    PUSH 0x3f800000                     ; 0046214c
    LEA ESI,[ESP + 0x274]               ; 00462151
    PUSH 0x3f000000                     ; 00462158
    LEA EAX,[ESP + 0x26c]               ; 0046215d
    PUSH 0x3f800000                     ; 00462164
    MOVSD ES:EDI,ESI                    ; 00462169
    MOVSD ES:EDI,ESI                    ; 0046216a
    MOVSD ES:EDI,ESI                    ; 0046216b
    PUSH EAX                            ; 0046216c
    MOV EDI,dword ptr [0x0061c010]      ; 0046216d | DAT_0061c010
    PUSH EDI                            ; 00462173
    CALL core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0 ; 00462174
        ;   XREF to: 004b70f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0(CFireEffect * this_ptr, CVector3f * position, float size, float alpha, ...)
    ADD ESP,0x18                        ; 00462179
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 0046217c
    ADD EBP,0xc                         ; 00462183
    INC EAX                             ; 00462186
    MOV EDX,dword ptr [ESP + 0x29c]     ; 00462187
    MOV dword ptr [ESP + 0x2a0],EAX     ; 0046218e
    CMP EAX,EDX                         ; 00462195
    JL 0x0046212f                       ; 00462197
        ;   XREF to: 0046212f (CONDITIONAL_JUMP)  ; LAB_0046212f
    LEA EAX,[EAX]                       ; 00462199
    NOP                                 ; 0046219f
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004621a0
        ;   Label: LAB_004621a0
    POP ESI                             ; 004621a7
    POP EDI                             ; 004621a8
    ADD ESP,0x29c                       ; 004621a9
    POP EBP                             ; 004621af
    POP EBX                             ; 004621b0
    RET                                 ; 004621b1
    XOR EAX,EAX                         ; 004621b2
        ;   Label: LAB_004621b2
    ADD ESP,0x29c                       ; 004621b4
    POP EBP                             ; 004621ba
    POP EBX                             ; 004621bb
    RET                                 ; 004621bc
    MOV ESI,dword ptr [EBX + 0xc280]    ; 004621bd
        ;   Label: LAB_004621bd
    PUSH ESI                            ; 004621c3
    LEA EAX,[EBX + 0x158]               ; 004621c4
    PUSH EAX                            ; 004621ca
    LEA ESI,[ESP + 0x7c]                ; 004621cb
    LEA EDI,[ESP + 0x130]               ; 004621cf
    CALL core_skeleton.cpp_FUN_00569130 ; 004621d6
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x7c]                ; 004621db
    ADD ESP,0x8                         ; 004621df
    MOVSD ES:EDI,ESI                    ; 004621e2
    MOVSD ES:EDI,ESI                    ; 004621e3
    MOVSD ES:EDI,ESI                    ; 004621e4
    LEA EAX,[ESP + 0x128]               ; 004621e5
    LEA ESI,[ESP + 0xb0]                ; 004621ec
    CMP ESI,EAX                         ; 004621f3
    JZ 0x00462221                       ; 004621f5
        ;   XREF to: 00462221 (CONDITIONAL_JUMP)  ; LAB_00462221
    MOV EAX,dword ptr [ESP + 0x128]     ; 004621f7
    MOV dword ptr [ESP + 0xb0],EAX      ; 004621fe
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00462205
    MOV dword ptr [ESP + 0xb4],EAX      ; 0046220c
    MOV EAX,dword ptr [ESP + 0x130]     ; 00462213
    MOV dword ptr [ESP + 0xb8],EAX      ; 0046221a
    MOV EDI,dword ptr [EBX + 0xc298]    ; 00462221
        ;   Label: LAB_00462221
    PUSH EDI                            ; 00462227
    LEA EAX,[EBX + 0x158]               ; 00462228
    PUSH EAX                            ; 0046222e
    LEA ESI,[ESP + 0x1d8]               ; 0046222f
    LEA EDI,[ESP + 0x16c]               ; 00462236
    CALL core_skeleton.cpp_FUN_00569130 ; 0046223d
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x1d8]               ; 00462242
    ADD ESP,0x8                         ; 00462249
    MOVSD ES:EDI,ESI                    ; 0046224c
    MOVSD ES:EDI,ESI                    ; 0046224d
    MOVSD ES:EDI,ESI                    ; 0046224e
    LEA EAX,[ESP + 0x164]               ; 0046224f
    LEA ESI,[ESP + 0xd4]                ; 00462256
    CMP ESI,EAX                         ; 0046225d
    JZ 0x0046228b                       ; 0046225f
        ;   XREF to: 0046228b (CONDITIONAL_JUMP)  ; LAB_0046228b
    MOV EAX,dword ptr [ESP + 0x164]     ; 00462261
    MOV dword ptr [ESP + 0xd4],EAX      ; 00462268
    MOV EAX,dword ptr [ESP + 0x168]     ; 0046226f
    MOV dword ptr [ESP + 0xd8],EAX      ; 00462276
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0046227d
    MOV dword ptr [ESP + 0xdc],EAX      ; 00462284
    FLD float ptr [ESP + 0xb0]          ; 0046228b
        ;   Label: LAB_0046228b
    FLD float ptr [ESP + 0xb4]          ; 00462292
    FLD float ptr [ESP + 0xb8]          ; 00462299
    LEA EDI,[ESP + 0x218]               ; 004622a0
    LEA ESI,[ESP + 0x2c]                ; 004622a7
    FXCH ST2                            ; 004622ab
    FADD float ptr [ESP + 0xd4]         ; 004622ad
    FXCH                                ; 004622b4
    FADD float ptr [ESP + 0xd8]         ; 004622b6
    FXCH ST2                            ; 004622bd
    FADD float ptr [ESP + 0xdc]         ; 004622bf
    FXCH                                ; 004622c6
    FSTP float ptr [ESP + 0x2c]         ; 004622c8
    FXCH                                ; 004622cc
    FSTP float ptr [ESP + 0x30]         ; 004622ce
    FSTP float ptr [ESP + 0x34]         ; 004622d2
    MOVSD ES:EDI,ESI                    ; 004622d6
    MOVSD ES:EDI,ESI                    ; 004622d7
    MOVSD ES:EDI,ESI                    ; 004622d8
    FLD float ptr [0x005d8ee0]          ; 004622d9 | DAT_005d8ee0
    FLD float ptr [ESP + 0x218]         ; 004622df
    FMUL ST1                            ; 004622e6
    FLD float ptr [ESP + 0x21c]         ; 004622e8
    FMUL ST2                            ; 004622ef
    FLD float ptr [ESP + 0x220]         ; 004622f1
    FMULP ST3                           ; 004622f8
    LEA EDI,[ESP + 0x188]               ; 004622fa
    LEA ESI,[ESP + 0x23c]               ; 00462301
    FXCH                                ; 00462308
    FSTP float ptr [ESP + 0x23c]        ; 0046230a
    FSTP float ptr [ESP + 0x240]        ; 00462311
    FSTP float ptr [ESP + 0x244]        ; 00462318
    MOVSD ES:EDI,ESI                    ; 0046231f
    MOVSD ES:EDI,ESI                    ; 00462320
    MOVSD ES:EDI,ESI                    ; 00462321
    LEA EAX,[ESP + 0x188]               ; 00462322
    LEA ESI,[ESP + 0x5c]                ; 00462329
    CMP ESI,EAX                         ; 0046232d
    JZ 0x00462352                       ; 0046232f
        ;   XREF to: 00462352 (CONDITIONAL_JUMP)  ; LAB_00462352
    MOV EAX,dword ptr [ESP + 0x188]     ; 00462331
    MOV dword ptr [ESP + 0x5c],EAX      ; 00462338
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0046233c
    MOV dword ptr [ESP + 0x60],EAX      ; 00462343
    MOV EAX,dword ptr [ESP + 0x190]     ; 00462347
    MOV dword ptr [ESP + 0x64],EAX      ; 0046234e
    MOV ESI,dword ptr [ESP + 0x29c]     ; 00462352
        ;   Label: LAB_00462352
    LEA EAX,[ESI*0x4 + 0x0]             ; 00462359
    SUB EAX,ESI                         ; 00462360
    SHL EAX,0x2                         ; 00462362
    LEA ESI,[EAX + EBP*0x1]             ; 00462365
    LEA EAX,[ESP + 0x5c]                ; 00462368
    CMP ESI,EAX                         ; 0046236c
    JZ 0x00462384                       ; 0046236e
        ;   XREF to: 00462384 (CONDITIONAL_JUMP)  ; LAB_00462384
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00462370
    MOV dword ptr [ESI],EAX             ; 00462374
    MOV EAX,dword ptr [ESP + 0x60]      ; 00462376
    MOV dword ptr [ESI + 0x4],EAX       ; 0046237a
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046237d
    MOV dword ptr [ESI + 0x8],EAX       ; 00462381
    MOV EAX,dword ptr [ESP + 0x29c]     ; 00462384
        ;   Label: LAB_00462384
    MOV ESI,dword ptr [ESP + 0x2b8]     ; 0046238b
    SHL EAX,0x2                         ; 00462392
    ADD ESI,EAX                         ; 00462395
    MOV EAX,dword ptr [EBX + 0xc2b0]    ; 00462397
    MOV dword ptr [ESI],EAX             ; 0046239d
    INC dword ptr [ESP + 0x29c]         ; 0046239f
    JMP 0x004615fb                      ; 004623a6
        ;   XREF to: 004615fb (UNCONDITIONAL_JUMP)  ; LAB_004615fb

