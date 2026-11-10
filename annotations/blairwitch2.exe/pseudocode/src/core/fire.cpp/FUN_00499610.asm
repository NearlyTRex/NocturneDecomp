; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_00499610(CCrater *param_1,float *param_2,float param_3)
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createCrater_FUN_0049e630 at 0049e64e
;
; Referenced Globals:
;   undefined4 DAT_005d55a2
;   undefined4 DAT_005d55aa
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_fire.cpp_CCrater_render_FUN_00499a00
;   core_setcolid.cpp_FUN_00534ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499610
        ;   Label: core_fire.cpp_FUN_00499610
    PUSH ESI                            ; 00499611
    PUSH EDI                            ; 00499612
    PUSH EBP                            ; 00499613
    SUB ESP,0x68                        ; 00499614
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00499617
    MOV EBX,dword ptr [ESP + 0x80]      ; 0049961b
    LEA EAX,[EBP + 0xc]                 ; 00499622
    CMP EAX,EBX                         ; 00499625
    JZ 0x00499639                       ; 00499627
        ;   XREF to: 00499639 (CONDITIONAL_JUMP)  ; LAB_00499639
    MOV EDX,dword ptr [EBX]             ; 00499629
    MOV dword ptr [EAX],EDX             ; 0049962b
    MOV EDX,dword ptr [EBX + 0x4]       ; 0049962d
    MOV dword ptr [EAX + 0x4],EDX       ; 00499630
    MOV EDX,dword ptr [EBX + 0x8]       ; 00499633
    MOV dword ptr [EAX + 0x8],EDX       ; 00499636
    PUSH EBP                            ; 00499639
        ;   Label: LAB_00499639
    CALL core_fire.cpp_CCrater_render_FUN_00499a00 ; 0049963a
        ;   XREF to: 00499a00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_00499a00(CCrater * this_ptr)
    ADD ESP,0x4                         ; 0049963f
    LEA EAX,[EBP + 0xc]                 ; 00499642
    PUSH 0x0                            ; 00499645
    MOV dword ptr [EBP],0x1             ; 00499647
    PUSH EAX                            ; 0049964e
    MOV EDX,dword ptr [0x0061b5a8]      ; 0049964f | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x4],0x0       ; 00499655
    PUSH EDX                            ; 0049965c | g_CDemonSetInstance
    MOV dword ptr [EBP + 0x8],0x3dcccccd ; 0049965d
    MOV EBX,EBP                         ; 00499664
    CALL core_setcolid.cpp_FUN_00534ea0 ; 00499666
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    MOV dword ptr [ESP + 0x70],EAX      ; 0049966b
    LEA ESI,[EBP + 0x24]                ; 0049966f
    MOV EAX,dword ptr [ESP + 0x70]      ; 00499672
    MOV dword ptr [EBP + 0x10],EAX      ; 00499676
    ADD ESP,0xc                         ; 00499679
    PUSH dword ptr [ESP + 0x84]         ; 0049967c
        ;   Label: LAB_0049967c
    FLD float ptr [ESP + 0x88]          ; 00499683
    FCHS                                ; 0049968a
    FSTP float ptr [ESP + 0x64]         ; 0049968c
    PUSH dword ptr [ESP + 0x64]         ; 00499690
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00499694
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x6c],EAX      ; 00499699
    FLD float ptr [ESP + 0x6c]          ; 0049969d
    ADD ESP,0x8                         ; 004996a1
    FMUL double ptr [0x005d55a2]        ; 004996a4 | DAT_005d55a2
    PUSH dword ptr [ESP + 0x84]         ; 004996aa
    FADD float ptr [EBP + 0xc]          ; 004996b1
    PUSH dword ptr [ESP + 0x64]         ; 004996b4
    FSTP float ptr [EBX + 0x1c]         ; 004996b8
    MOV EAX,dword ptr [EBP + 0x10]      ; 004996bb
    MOV dword ptr [EBX + 0x20],EAX      ; 004996be
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004996c1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x6c],EAX      ; 004996c6
    FLD float ptr [ESP + 0x6c]          ; 004996ca
    FMUL double ptr [0x005d55a2]        ; 004996ce | DAT_005d55a2
    ADD EBX,0xc                         ; 004996d4
    FADD float ptr [EBP + 0x14]         ; 004996d7
    ADD ESP,0x8                         ; 004996da
    FSTP float ptr [EBX + 0x18]         ; 004996dd
    CMP EBX,ESI                         ; 004996e0
    JNZ 0x0049967c                      ; 004996e2
        ;   XREF to: 0049967c (CONDITIONAL_JUMP)  ; LAB_0049967c
    LEA EBX,[EBP + 0xc]                 ; 004996e4
    MOV EDI,ESP                         ; 004996e7
    LEA ESI,[ESP + 0x3c]                ; 004996e9
    FLD float ptr [EBX]                 ; 004996ed
    FLD float ptr [EBX + 0x8]           ; 004996ef
    MOV EAX,dword ptr [EBX + 0x4]       ; 004996f2
    FXCH                                ; 004996f5
    FLD float ptr [ESP + 0x60]          ; 004996f7
    FXCH                                ; 004996fb
    FADD ST0,ST1                        ; 004996fd
    MOV dword ptr [ESP + 0x40],EAX      ; 004996ff
    FXCH ST2                            ; 00499703
    FADDP                               ; 00499705
    LEA EBX,[EBP + 0x40]                ; 00499707
    FXCH                                ; 0049970a
    FSTP float ptr [ESP + 0x3c]         ; 0049970c
    FSTP float ptr [ESP + 0x44]         ; 00499710
    MOV EAX,ESP                         ; 00499714
    MOVSD ES:EDI,ESI                    ; 00499716
    MOVSD ES:EDI,ESI                    ; 00499717
    MOVSD ES:EDI,ESI                    ; 00499718
    CMP EBX,EAX                         ; 00499719
    JZ 0x00499730                       ; 0049971b
        ;   XREF to: 00499730 (CONDITIONAL_JUMP)  ; LAB_00499730
    MOV EAX,dword ptr [ESP]             ; 0049971d
    MOV dword ptr [EBX],EAX             ; 00499720
    MOV EAX,dword ptr [ESP + 0x4]       ; 00499722
    MOV dword ptr [EBX + 0x4],EAX       ; 00499726
    MOV EAX,dword ptr [ESP + 0x8]       ; 00499729
    MOV dword ptr [EBX + 0x8],EAX       ; 0049972d
    FLD float ptr [ESP + 0x84]          ; 00499730
        ;   Label: LAB_00499730
    FLD ST0                             ; 00499737
    LEA EDI,[ESP + 0xc]                 ; 00499739
    LEA ESI,[ESP + 0x48]                ; 0049973d
    LEA EBX,[EBP + 0xc]                 ; 00499741
    FCHS                                ; 00499744
    FLD float ptr [EBX]                 ; 00499746
    FLD float ptr [EBX + 0x8]           ; 00499748
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049974b
    FXCH                                ; 0049974e
    FADDP ST3,ST0                       ; 00499750
    MOV dword ptr [ESP + 0x4c],EAX      ; 00499752
    FADDP                               ; 00499756
    LEA EBX,[EBP + 0x4c]                ; 00499758
    FXCH                                ; 0049975b
    FSTP float ptr [ESP + 0x48]         ; 0049975d
    FSTP float ptr [ESP + 0x50]         ; 00499761
    LEA EAX,[ESP + 0xc]                 ; 00499765
    MOVSD ES:EDI,ESI                    ; 00499769
    MOVSD ES:EDI,ESI                    ; 0049976a
    MOVSD ES:EDI,ESI                    ; 0049976b
    CMP EBX,EAX                         ; 0049976c
    JZ 0x00499784                       ; 0049976e
        ;   XREF to: 00499784 (CONDITIONAL_JUMP)  ; LAB_00499784
    MOV EAX,dword ptr [ESP + 0xc]       ; 00499770
    MOV dword ptr [EBX],EAX             ; 00499774
    MOV EAX,dword ptr [ESP + 0x10]      ; 00499776
    MOV dword ptr [EBX + 0x4],EAX       ; 0049977a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049977d
    MOV dword ptr [EBX + 0x8],EAX       ; 00499781
    LEA EBX,[EBP + 0xc]                 ; 00499784
        ;   Label: LAB_00499784
    LEA EDI,[ESP + 0x54]                ; 00499787
    LEA ESI,[ESP + 0x18]                ; 0049978b
    FLD float ptr [EBX]                 ; 0049978f
    FLD float ptr [EBX + 0x8]           ; 00499791
    MOV EAX,dword ptr [EBX + 0x4]       ; 00499794
    FXCH                                ; 00499797
    FLD float ptr [ESP + 0x84]          ; 00499799
    FXCH                                ; 004997a0
    FADD ST0,ST1                        ; 004997a2
    MOV dword ptr [ESP + 0x1c],EAX      ; 004997a4
    FXCH ST2                            ; 004997a8
    FADDP                               ; 004997aa
    LEA EBX,[EBP + 0x58]                ; 004997ac
    FXCH                                ; 004997af
    FSTP float ptr [ESP + 0x18]         ; 004997b1
    FSTP float ptr [ESP + 0x20]         ; 004997b5
    LEA EAX,[ESP + 0x54]                ; 004997b9
    MOVSD ES:EDI,ESI                    ; 004997bd
    MOVSD ES:EDI,ESI                    ; 004997be
    MOVSD ES:EDI,ESI                    ; 004997bf
    CMP EBX,EAX                         ; 004997c0
    JZ 0x004997d8                       ; 004997c2
        ;   XREF to: 004997d8 (CONDITIONAL_JUMP)  ; LAB_004997d8
    MOV EAX,dword ptr [ESP + 0x54]      ; 004997c4
    MOV dword ptr [EBX],EAX             ; 004997c8
    MOV EAX,dword ptr [ESP + 0x58]      ; 004997ca
    MOV dword ptr [EBX + 0x4],EAX       ; 004997ce
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004997d1
    MOV dword ptr [EBX + 0x8],EAX       ; 004997d5
    FLD float ptr [ESP + 0x84]          ; 004997d8
        ;   Label: LAB_004997d8
    FLD ST0                             ; 004997df
    LEA EDI,[ESP + 0x30]                ; 004997e1
    LEA ESI,[ESP + 0x24]                ; 004997e5
    LEA EBX,[EBP + 0xc]                 ; 004997e9
    FCHS                                ; 004997ec
    FLD float ptr [EBX]                 ; 004997ee
    FLD float ptr [EBX + 0x8]           ; 004997f0
    MOV EAX,dword ptr [EBX + 0x4]       ; 004997f3
    FXCH                                ; 004997f6
    FADDP ST2,ST0                       ; 004997f8
    MOV dword ptr [ESP + 0x28],EAX      ; 004997fa
    FADDP ST2,ST0                       ; 004997fe
    LEA EBX,[EBP + 0x64]                ; 00499800
    FSTP float ptr [ESP + 0x24]         ; 00499803
    FSTP float ptr [ESP + 0x2c]         ; 00499807
    LEA EAX,[ESP + 0x30]                ; 0049980b
    MOVSD ES:EDI,ESI                    ; 0049980f
    MOVSD ES:EDI,ESI                    ; 00499810
    MOVSD ES:EDI,ESI                    ; 00499811
    CMP EBX,EAX                         ; 00499812
    JZ 0x0049982a                       ; 00499814
        ;   XREF to: 0049982a (CONDITIONAL_JUMP)  ; LAB_0049982a
    MOV EAX,dword ptr [ESP + 0x30]      ; 00499816
    MOV dword ptr [EBX],EAX             ; 0049981a
    MOV EAX,dword ptr [ESP + 0x34]      ; 0049981c
    MOV dword ptr [EBX + 0x4],EAX       ; 00499820
    MOV EAX,dword ptr [ESP + 0x38]      ; 00499823
    MOV dword ptr [EBX + 0x8],EAX       ; 00499827
    LEA EAX,[EBP + 0x40]                ; 0049982a
        ;   Label: LAB_0049982a
    PUSH 0x0                            ; 0049982d
    PUSH EAX                            ; 0049982f
    MOV ECX,dword ptr [0x0061b5a8]      ; 00499830 | g_CDemonSetPtr
    PUSH ECX                            ; 00499836 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00534ea0 ; 00499837
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    MOV dword ptr [ESP + 0x70],EAX      ; 0049983c
    FLD float ptr [ESP + 0x70]          ; 00499840
    ADD ESP,0xc                         ; 00499844
    LEA EAX,[EBP + 0x4c]                ; 00499847
    PUSH 0x0                            ; 0049984a
    MOV EBX,dword ptr [0x0061b5a8]      ; 0049984c | g_CDemonSetPtr
    PUSH EAX                            ; 00499852
    FADD double ptr [0x005d55aa]        ; 00499853 | DAT_005d55aa
    PUSH EBX                            ; 00499859 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x44]         ; 0049985a
    CALL core_setcolid.cpp_FUN_00534ea0 ; 0049985d
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    MOV dword ptr [ESP + 0x70],EAX      ; 00499862
    FLD float ptr [ESP + 0x70]          ; 00499866
    ADD ESP,0xc                         ; 0049986a
    LEA EAX,[EBP + 0x58]                ; 0049986d
    PUSH 0x0                            ; 00499870
    MOV ESI,dword ptr [0x0061b5a8]      ; 00499872 | g_CDemonSetPtr
    PUSH EAX                            ; 00499878
    FADD double ptr [0x005d55aa]        ; 00499879 | DAT_005d55aa
    PUSH ESI                            ; 0049987f | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x50]         ; 00499880
    CALL core_setcolid.cpp_FUN_00534ea0 ; 00499883
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    MOV dword ptr [ESP + 0x70],EAX      ; 00499888
    FLD float ptr [ESP + 0x70]          ; 0049988c
    ADD ESP,0xc                         ; 00499890
    LEA EAX,[EBP + 0x64]                ; 00499893
    PUSH 0x0                            ; 00499896
    MOV EDI,dword ptr [0x0061b5a8]      ; 00499898 | g_CDemonSetPtr
    PUSH EAX                            ; 0049989e
    FADD double ptr [0x005d55aa]        ; 0049989f | DAT_005d55aa
    PUSH EDI                            ; 004998a5 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x5c]         ; 004998a6
    CALL core_setcolid.cpp_FUN_00534ea0 ; 004998a9
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    FLD float ptr [EBP + 0x44]          ; 004998ae
    FSUB float ptr [EBP + 0x10]         ; 004998b1
    MOV dword ptr [ESP + 0x70],EAX      ; 004998b4
    FABS                                ; 004998b8
    FLD float ptr [ESP + 0x70]          ; 004998ba
    FADD double ptr [0x005d55aa]        ; 004998be | DAT_005d55aa
    ADD ESP,0xc                         ; 004998c4
    FSTP float ptr [EBP + 0x68]         ; 004998c7
    FLD1                                ; 004998ca
    FCOMPP                              ; 004998cc
    FNSTSW AX                           ; 004998ce
    SAHF                                ; 004998d0
    JNC 0x004998d9                      ; 004998d1
        ;   XREF to: 004998d9 (CONDITIONAL_JUMP)  ; LAB_004998d9
    MOV EAX,dword ptr [EBP + 0x10]      ; 004998d3
    MOV dword ptr [EBP + 0x44],EAX      ; 004998d6
    FLD float ptr [EBP + 0x50]          ; 004998d9
        ;   Label: LAB_004998d9
    FSUB float ptr [EBP + 0x10]         ; 004998dc
    FABS                                ; 004998df
    FLD1                                ; 004998e1
    FCOMPP                              ; 004998e3
    FNSTSW AX                           ; 004998e5
    SAHF                                ; 004998e7
    JNC 0x004998f0                      ; 004998e8
        ;   XREF to: 004998f0 (CONDITIONAL_JUMP)  ; LAB_004998f0
    MOV EAX,dword ptr [EBP + 0x10]      ; 004998ea
    MOV dword ptr [EBP + 0x50],EAX      ; 004998ed
    FLD float ptr [EBP + 0x5c]          ; 004998f0
        ;   Label: LAB_004998f0
    FSUB float ptr [EBP + 0x10]         ; 004998f3
    FABS                                ; 004998f6
    FLD1                                ; 004998f8
    FCOMPP                              ; 004998fa
    FNSTSW AX                           ; 004998fc
    SAHF                                ; 004998fe
    JNC 0x00499907                      ; 004998ff
        ;   XREF to: 00499907 (CONDITIONAL_JUMP)  ; LAB_00499907
    MOV EAX,dword ptr [EBP + 0x10]      ; 00499901
    MOV dword ptr [EBP + 0x5c],EAX      ; 00499904
    FLD float ptr [EBP + 0x68]          ; 00499907
        ;   Label: LAB_00499907
    FSUB float ptr [EBP + 0x10]         ; 0049990a
    FABS                                ; 0049990d
    FLD1                                ; 0049990f
    FCOMPP                              ; 00499911
    FNSTSW AX                           ; 00499913
    SAHF                                ; 00499915
    JC 0x00499920                       ; 00499916
        ;   XREF to: 00499920 (CONDITIONAL_JUMP)  ; LAB_00499920
    ADD ESP,0x68                        ; 00499918
    POP EBP                             ; 0049991b
    POP EDI                             ; 0049991c
    POP ESI                             ; 0049991d
    POP EBX                             ; 0049991e
    RET                                 ; 0049991f
    MOV EAX,dword ptr [EBP + 0x10]      ; 00499920
        ;   Label: LAB_00499920
    MOV dword ptr [EBP + 0x68],EAX      ; 00499923
    ADD ESP,0x68                        ; 00499926
    POP EBP                             ; 00499929
    POP EDI                             ; 0049992a
    POP ESI                             ; 0049992b
    POP EBX                             ; 0049992c
    RET                                 ; 0049992d

