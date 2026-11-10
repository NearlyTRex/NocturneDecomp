; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_process_FUN_00580610(CTVBat *this_ptr,float delta_time)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_CVampireBoss_005ed8cc
;   TerminatedCString s_core_tvbat_cpp_005ed8d9
;   TerminatedCString s_CTVBat_process_can_t_fol_005ed8eb
;   undefined4 DAT_005ed924
;   undefined4 DAT_005ed92c
;   undefined4 DAT_005ed934
;   undefined4 DAT_005ed93c
;   undefined4 DAT_005ed944
;   undefined4 DAT_005ed94c
;   undefined4 DAT_005ed954
;   undefined4 DAT_005ed95c
;   undefined4 DAT_005ed964
;   undefined4 DAT_005ed96c
;   undefined4 DAT_005ed974
;   undefined4 DAT_005ed978
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dtrace.cpp_FUN_00472c60
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
;   core_main.c_FUN_004e4500
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;   crt_math.c_atan2_FUN_005b9989
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_FUN_005515e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580610
        ;   Label: core_tvbat.cpp_CTVBat_process_FUN_00580610
    PUSH ESI                            ; 00580611
    PUSH EDI                            ; 00580612
    PUSH EBP                            ; 00580613
    MOV EBP,ESP                         ; 00580614
    SUB ESP,0x1e4                       ; 00580616
    AND ESP,0xfffffff8                  ; 0058061c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058061f
    CMP dword ptr [EBX + 0x10ca0],0x0   ; 00580622
    JZ 0x00580676                       ; 00580629
        ;   XREF to: 00580676 (CONDITIONAL_JUMP)  ; LAB_00580676
    CMP dword ptr [EBX + 0x10d2c],0x0   ; 0058062b
    JNZ 0x00580676                      ; 00580632
        ;   XREF to: 00580676 (CONDITIONAL_JUMP)  ; LAB_00580676
    XOR ESI,ESI                         ; 00580634
    XOR EDI,EDI                         ; 00580636
    MOV EAX,[0x0061b5a8]                ; 00580638 | g_CDemonSetPtr
        ;   Label: LAB_00580638
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 0058063d | g_CDemonSetInstance.enemy_count
    JGE 0x00580676                      ; 00580643
        ;   XREF to: 00580676 (CONDITIONAL_JUMP)  ; LAB_00580676
    PUSH 0x5ed8cc                       ; 00580645 | = "CVampireBoss"
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 0058064a
    PUSH ECX                            ; 00580651
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 00580652
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00580657
    TEST EAX,EAX                        ; 0058065a
    JNZ 0x00580664                      ; 0058065c
        ;   XREF to: 00580664 (CONDITIONAL_JUMP)  ; LAB_00580664
    INC EDI                             ; 0058065e
    ADD ESI,0x4                         ; 0058065f
    JMP 0x00580638                      ; 00580662
        ;   XREF to: 00580638 (UNCONDITIONAL_JUMP)  ; LAB_00580638
    MOV EAX,[0x0061b5a8]                ; 00580664 | g_CDemonSetPtr
        ;   Label: LAB_00580664
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 00580669
    MOV dword ptr [EBX + 0x10d2c],EAX   ; 00580670
    CMP dword ptr [EBX + 0x10ca0],0x0   ; 00580676
        ;   Label: LAB_00580676
    JZ 0x005806b8                       ; 0058067d
        ;   XREF to: 005806b8 (CONDITIONAL_JUMP)  ; LAB_005806b8
    MOV EDI,dword ptr [EBX + 0x10d2c]   ; 0058067f
    TEST EDI,EDI                        ; 00580685
    JZ 0x005806b8                       ; 00580687
        ;   XREF to: 005806b8 (CONDITIONAL_JUMP)  ; LAB_005806b8
    LEA ESI,[EBX + 0x10c80]             ; 00580689
    LEA EAX,[EDI + 0x20]                ; 0058068f
    CMP ESI,EAX                         ; 00580692
    JZ 0x005806a6                       ; 00580694
        ;   XREF to: 005806a6 (CONDITIONAL_JUMP)  ; LAB_005806a6
    MOV EDX,dword ptr [EAX]             ; 00580696
    MOV dword ptr [ESI],EDX             ; 00580698
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058069a
    MOV dword ptr [ESI + 0x4],EDX       ; 0058069d
    MOV EDX,dword ptr [EAX + 0x8]       ; 005806a0
    MOV dword ptr [ESI + 0x8],EDX       ; 005806a3
    FLD float ptr [EBX + 0x10c84]       ; 005806a6
        ;   Label: LAB_005806a6
    FADD float ptr [0x005ed924]         ; 005806ac | DAT_005ed924
    FSTP float ptr [EBX + 0x10c84]      ; 005806b2
    MOV EAX,dword ptr [EBX + 0x10cb4]   ; 005806b8
        ;   Label: LAB_005806b8
    CMP EAX,0x2                         ; 005806be
    JZ 0x00580d8d                       ; 005806c1
        ;   XREF to: 00580d8d (CONDITIONAL_JUMP)  ; LAB_00580d8d
    CMP EAX,0x3                         ; 005806c7
    JZ 0x00580d8d                       ; 005806ca
        ;   XREF to: 00580d8d (CONDITIONAL_JUMP)  ; LAB_00580d8d
    CMP EAX,0x1                         ; 005806d0
    JZ 0x00580d94                       ; 005806d3
        ;   XREF to: 00580d94 (CONDITIONAL_JUMP)  ; LAB_00580d94
    LEA EDI,[ESP + 0x180]               ; 005806d9
    LEA ESI,[EBX + 0x20]                ; 005806e0
    MOVSD ES:EDI,ESI                    ; 005806e3
    MOVSD ES:EDI,ESI                    ; 005806e4
    MOVSD ES:EDI,ESI                    ; 005806e5
    CMP dword ptr [EBX + 0x10ca0],0x0   ; 005806e6
    JZ 0x005810f2                       ; 005806ed
        ;   XREF to: 005810f2 (CONDITIONAL_JUMP)  ; LAB_005810f2
    MOV dword ptr [EBX + 0x10a78],0x0   ; 005806f3
    LEA EAX,[ESP + 0xa8]                ; 005806fd
        ;   Label: LAB_005806fd
    LEA ESI,[EBX + 0x10c80]             ; 00580704
    CMP EAX,ESI                         ; 0058070a
    JZ 0x0058072b                       ; 0058070c
        ;   XREF to: 0058072b (CONDITIONAL_JUMP)  ; LAB_0058072b
    MOV EAX,dword ptr [ESI]             ; 0058070e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00580710
    MOV EAX,dword ptr [ESI + 0x4]       ; 00580717
    MOV dword ptr [ESP + 0xac],EAX      ; 0058071a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00580721
    MOV dword ptr [ESP + 0xb0],EAX      ; 00580724
    LEA ESI,[EBX + 0x10c80]             ; 0058072b
        ;   Label: LAB_0058072b
    LEA EDI,[ESP + 0x84]                ; 00580731
    LEA EDX,[ESP + 0x114]               ; 00580738
    FLD float ptr [ESI + 0x4]           ; 0058073f
    FLD float ptr [ESI + 0x8]           ; 00580742
    LEA EAX,[EBX + 0x20]                ; 00580745
    FLD float ptr [ESI]                 ; 00580748
    LEA ESI,[ESP + 0x144]               ; 0058074a
    FSUB float ptr [EAX]                ; 00580751
    FXCH ST2                            ; 00580753
    FSUB float ptr [EAX + 0x4]          ; 00580755
    FXCH                                ; 00580758
    FSUB float ptr [EAX + 0x8]          ; 0058075a
    FXCH ST2                            ; 0058075d
    FSTP float ptr [ESP + 0x144]        ; 0058075f
    FSTP float ptr [ESP + 0x148]        ; 00580766
    FSTP float ptr [ESP + 0x14c]        ; 0058076d
    LEA EAX,[ESP + 0x84]                ; 00580774
    MOVSD ES:EDI,ESI                    ; 0058077b
    MOVSD ES:EDI,ESI                    ; 0058077c
    MOVSD ES:EDI,ESI                    ; 0058077d
    CMP EDX,EAX                         ; 0058077e
    JZ 0x005807ac                       ; 00580780
        ;   XREF to: 005807ac (CONDITIONAL_JUMP)  ; LAB_005807ac
    MOV EAX,dword ptr [ESP + 0x84]      ; 00580782
    MOV dword ptr [ESP + 0x114],EAX     ; 00580789
    MOV EAX,dword ptr [ESP + 0x88]      ; 00580790
    MOV dword ptr [ESP + 0x118],EAX     ; 00580797
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0058079e
    MOV dword ptr [ESP + 0x11c],EAX     ; 005807a5
    FLD float ptr [ESP + 0x118]         ; 005807ac
        ;   Label: LAB_005807ac
    FMUL ST0                            ; 005807b3
    FLD float ptr [ESP + 0x114]         ; 005807b5
    FMUL ST0                            ; 005807bc
    FADDP                               ; 005807be
    FLD float ptr [ESP + 0x11c]         ; 005807c0
    FMUL ST0                            ; 005807c7
    FADDP                               ; 005807c9
    FSQRT                               ; 005807cb
    FCOMP float ptr [EBX + 0x10c8c]     ; 005807cd
    FNSTSW AX                           ; 005807d3
    SAHF                                ; 005807d5
    JC 0x0058118c                       ; 005807d6
        ;   XREF to: 0058118c (CONDITIONAL_JUMP)  ; LAB_0058118c
    LEA EAX,[ESP + 0xa8]                ; 005807dc
        ;   Label: LAB_005807dc
    LEA ESI,[EBX + 0x10c80]             ; 005807e3
    CMP EAX,ESI                         ; 005807e9
    JZ 0x0058080a                       ; 005807eb
        ;   XREF to: 0058080a (CONDITIONAL_JUMP)  ; LAB_0058080a
    MOV EAX,dword ptr [ESI]             ; 005807ed
    MOV dword ptr [ESP + 0xa8],EAX      ; 005807ef
    MOV EAX,dword ptr [ESI + 0x4]       ; 005807f6
    MOV dword ptr [ESP + 0xac],EAX      ; 005807f9
    MOV EAX,dword ptr [ESI + 0x8]       ; 00580800
    MOV dword ptr [ESP + 0xb0],EAX      ; 00580803
    FLD float ptr [EBX + 0x10ca4]       ; 0058080a
        ;   Label: LAB_0058080a
    FLDZ                                ; 00580810
    FCOMPP                              ; 00580812
    FNSTSW AX                           ; 00580814
    SAHF                                ; 00580816
    JNC 0x005808d5                      ; 00580817
        ;   XREF to: 005808d5 (CONDITIONAL_JUMP)  ; LAB_005808d5
    FLD float ptr [EBX + 0x10ca4]       ; 0058081d
    FSUB float ptr [EBP + 0x18]         ; 00580823
    FST float ptr [EBX + 0x10ca4]       ; 00580826
    FLDZ                                ; 0058082c
    FCOMPP                              ; 0058082e
    FNSTSW AX                           ; 00580830
    SAHF                                ; 00580832
    JBE 0x0058083f                      ; 00580833
        ;   XREF to: 0058083f (CONDITIONAL_JUMP)  ; LAB_0058083f
    MOV dword ptr [EBX + 0x10ca4],0x0   ; 00580835
    MOV EAX,[0x0061b120]                ; 0058083f | g_CNetGamePtr
        ;   Label: LAB_0058083f
    CMP dword ptr [EAX],0x0             ; 00580844 | g_CNetGameInstance
    JZ 0x0058086c                       ; 00580847
        ;   XREF to: 0058086c (CONDITIONAL_JUMP)  ; LAB_0058086c
    MOV ECX,0x5ed8d9                    ; 00580849 | = "..\\core\\tvbat.cpp"
    MOV ESI,0x10a                       ; 0058084e
    PUSH 0x5ed8eb                       ; 00580853 | = "CTVBat::process - can't follow orders..."
    MOV dword ptr [0x01d046a0],ECX      ; 00580858 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0058085e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00580864
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00580869
    MOV EAX,[0x01cedef4]                ; 0058086c | DAT_01cedef4
        ;   Label: LAB_0058086c
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 00580871
    LEA EAX,[ESP + 0xa8]                ; 00580878
    ADD ESI,0x20                        ; 0058087f
    CMP EAX,ESI                         ; 00580882
    JZ 0x005808a3                       ; 00580884
        ;   XREF to: 005808a3 (CONDITIONAL_JUMP)  ; LAB_005808a3
    MOV EAX,dword ptr [ESI]             ; 00580886
    MOV dword ptr [ESP + 0xa8],EAX      ; 00580888
    MOV EAX,dword ptr [ESI + 0x4]       ; 0058088f
    MOV dword ptr [ESP + 0xac],EAX      ; 00580892
    MOV EAX,dword ptr [ESI + 0x8]       ; 00580899
    MOV dword ptr [ESP + 0xb0],EAX      ; 0058089c
    FLD float ptr [EBX + 0x10c9c]       ; 005808a3
        ;   Label: LAB_005808a3
    FADD double ptr [0x005ed92c]        ; 005808a9 | DAT_005ed92c
    MOV EAX,[0x01cedef4]                ; 005808af | DAT_01cedef4
    FLD float ptr [ESP + 0xac]          ; 005808b4
    FXCH                                ; 005808bb
    FADD ST0,ST1                        ; 005808bd
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005808bf
    FSTP ST1                            ; 005808c6
    FSTP float ptr [ESP + 0xac]         ; 005808c8
    MOV dword ptr [EBX + 0x10a78],EAX   ; 005808cf
    FLD float ptr [ESP + 0xa8]          ; 005808d5
        ;   Label: LAB_005808d5
    FLD float ptr [ESP + 0xac]          ; 005808dc
    FLD float ptr [ESP + 0xb0]          ; 005808e3
    LEA EDI,[ESP + 0x15c]               ; 005808ea
    LEA EAX,[EBX + 0x20]                ; 005808f1
    LEA ESI,[ESP + 0xc0]                ; 005808f4
    LEA EDX,[ESP + 0x15c]               ; 005808fb
    FXCH ST2                            ; 00580902
    FSUB float ptr [EAX]                ; 00580904
    FXCH                                ; 00580906
    FSUB float ptr [EAX + 0x4]          ; 00580908
    FXCH ST2                            ; 0058090b
    FSUB float ptr [EAX + 0x8]          ; 0058090d
    FXCH                                ; 00580910
    FSTP float ptr [ESP + 0xc0]         ; 00580912
    FXCH                                ; 00580919
    FSTP float ptr [ESP + 0xc4]         ; 0058091b
    FSTP float ptr [ESP + 0xc8]         ; 00580922
    LEA EAX,[ESP + 0x114]               ; 00580929
    MOVSD ES:EDI,ESI                    ; 00580930
    MOVSD ES:EDI,ESI                    ; 00580931
    MOVSD ES:EDI,ESI                    ; 00580932
    CMP EAX,EDX                         ; 00580933
    JZ 0x00580961                       ; 00580935
        ;   XREF to: 00580961 (CONDITIONAL_JUMP)  ; LAB_00580961
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00580937
    MOV dword ptr [ESP + 0x114],EAX     ; 0058093e
    MOV EAX,dword ptr [ESP + 0x160]     ; 00580945
    MOV dword ptr [ESP + 0x118],EAX     ; 0058094c
    MOV EAX,dword ptr [ESP + 0x164]     ; 00580953
    MOV dword ptr [ESP + 0x11c],EAX     ; 0058095a
    FLD float ptr [ESP + 0x11c]         ; 00580961
        ;   Label: LAB_00580961
    FLD float ptr [ESP + 0x114]         ; 00580968
    CALL crt_math.c_atan2_FUN_005b9989  ; 0058096f
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FLD float ptr [ESP + 0x11c]         ; 00580974
    FMUL ST0                            ; 0058097b
    FLD float ptr [ESP + 0x114]         ; 0058097d
    FMUL ST0                            ; 00580984
    FADDP                               ; 00580986
    FSQRT                               ; 00580988
    FLD float ptr [ESP + 0x118]         ; 0058098a
    FXCH                                ; 00580991
    FST float ptr [ESP + 0xc]           ; 00580993
    FXCH                                ; 00580997
    CALL crt_math.c_atan2_FUN_005b9989  ; 00580999
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0058099e
    FXCH                                ; 005809a4
    FSTP float ptr [ESP + 0x1d0]        ; 005809a6
    FCHS                                ; 005809ad
    FSTP float ptr [ESP + 0x1dc]        ; 005809af
    TEST EDI,EDI                        ; 005809b6
    JZ 0x00580b04                       ; 005809b8
        ;   XREF to: 00580b04 (CONDITIONAL_JUMP)  ; LAB_00580b04
    CMP dword ptr [EBX + 0x10ca0],0x0   ; 005809be
    JZ 0x00580b04                       ; 005809c5
        ;   XREF to: 00580b04 (CONDITIONAL_JUMP)  ; LAB_00580b04
    LEA EAX,[ESP + 0x50]                ; 005809cb
    PUSH EAX                            ; 005809cf
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 005809d0
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005809d5
    LEA ESI,[ESP + 0x50]                ; 005809d8
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005809dc
    PUSH ESI                            ; 005809e2
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005809e3
    PUSH EAX                            ; 005809e9
    LEA ESI,[EBX + 0x20]                ; 005809ea
    LEA EDI,[ESP + 0x158]               ; 005809ed
    CALL dword ptr [EDX + 0x44]         ; 005809f4
    FLD float ptr [ESI + 0x4]           ; 005809f7
    FLD float ptr [ESI + 0x8]           ; 005809fa
    FLD float ptr [ESI]                 ; 005809fd
    LEA EDX,[ESP + 0x11c]               ; 005809ff
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00580a06
    ADD ESP,0x8                         ; 00580a0c
    LEA ESI,[ESP + 0x108]               ; 00580a0f
    FSUB float ptr [EAX + 0x20]         ; 00580a16
    FXCH ST2                            ; 00580a19
    FSUB float ptr [EAX + 0x24]         ; 00580a1b
    FXCH                                ; 00580a1e
    FSUB float ptr [EAX + 0x28]         ; 00580a20
    FXCH ST2                            ; 00580a23
    FSTP float ptr [ESP + 0x108]        ; 00580a25
    FSTP float ptr [ESP + 0x10c]        ; 00580a2c
    FSTP float ptr [ESP + 0x110]        ; 00580a33
    LEA EAX,[ESP + 0x150]               ; 00580a3a
    MOVSD ES:EDI,ESI                    ; 00580a41
    MOVSD ES:EDI,ESI                    ; 00580a42
    MOVSD ES:EDI,ESI                    ; 00580a43
    CMP EDX,EAX                         ; 00580a44
    JZ 0x00580a72                       ; 00580a46
        ;   XREF to: 00580a72 (CONDITIONAL_JUMP)  ; LAB_00580a72
    MOV EAX,dword ptr [ESP + 0x150]     ; 00580a48
    MOV dword ptr [ESP + 0x114],EAX     ; 00580a4f
    MOV EAX,dword ptr [ESP + 0x154]     ; 00580a56
    MOV dword ptr [ESP + 0x118],EAX     ; 00580a5d
    MOV EAX,dword ptr [ESP + 0x158]     ; 00580a64
    MOV dword ptr [ESP + 0x11c],EAX     ; 00580a6b
    FLD float ptr [ESP + 0x118]         ; 00580a72
        ;   Label: LAB_00580a72
    FCOMP float ptr [ESP + 0x64]        ; 00580a79
    FNSTSW AX                           ; 00580a7d
    SAHF                                ; 00580a7f
    JC 0x00580b04                       ; 00580a80
        ;   XREF to: 00580b04 (CONDITIONAL_JUMP)  ; LAB_00580b04
    FLD float ptr [ESP + 0x118]         ; 00580a86
    FCOMP float ptr [ESP + 0x68]        ; 00580a8d
    FNSTSW AX                           ; 00580a91
    SAHF                                ; 00580a93
    JA 0x00580b04                       ; 00580a94
        ;   XREF to: 00580b04 (CONDITIONAL_JUMP)  ; LAB_00580b04
    FLD float ptr [ESP + 0xc]           ; 00580a96
    FCOMP double ptr [0x005ed93c]       ; 00580a9a | DAT_005ed93c
    FNSTSW AX                           ; 00580aa0
    SAHF                                ; 00580aa2
    JNC 0x00580b04                      ; 00580aa3
        ;   XREF to: 00580b04 (CONDITIONAL_JUMP)  ; LAB_00580b04
    LEA EAX,[ESP + 0x14]                ; 00580aa5
    PUSH EAX                            ; 00580aa9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00580aaa
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EDX,0x3f800000                  ; 00580aaf
    ADD ESP,0x4                         ; 00580ab4
    LEA ESI,[ESP + 0x14]                ; 00580ab7
    MOV dword ptr [ESP + 0x18],EDX      ; 00580abb
    MOV dword ptr [ESP + 0x48],EBX      ; 00580abf
    MOV dword ptr [ESP + 0x4c],EBX      ; 00580ac3
    PUSH ESI                            ; 00580ac7
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00580ac8
    PUSH EAX                            ; 00580ace
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00580acf
    CALL dword ptr [EDX + 0x110]        ; 00580ad5
    ADD ESP,0x8                         ; 00580adb
    FLD float ptr [ESP + 0x18]          ; 00580ade
    FLDZ                                ; 00580ae2
    FCOMPP                              ; 00580ae4
    FNSTSW AX                           ; 00580ae6
    SAHF                                ; 00580ae8
    JNC 0x00580b04                      ; 00580ae9
        ;   XREF to: 00580b04 (CONDITIONAL_JUMP)  ; LAB_00580b04
    PUSH 0x0                            ; 00580aeb
    PUSH 0x3                            ; 00580aed
    PUSH 0x0                            ; 00580aef
    LEA EAX,[EBX + 0x20]                ; 00580af1
    PUSH EAX                            ; 00580af4
    MOV ECX,dword ptr [0x006167e0]      ; 00580af5 | g_CGorePtr
    PUSH ECX                            ; 00580afb
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 00580afc
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00580b01
    FLD float ptr [EBX + 0x30]          ; 00580b04
        ;   Label: LAB_00580b04
    FLD ST0                             ; 00580b07
    FSIN                                ; 00580b09
    FLD float ptr [EBX + 0x34]          ; 00580b0b
    FLD ST0                             ; 00580b0e
    FSIN                                ; 00580b10
    FXCH ST3                            ; 00580b12
    FCOS                                ; 00580b14
    FXCH                                ; 00580b16
    FCOS                                ; 00580b18
    FXCH ST3                            ; 00580b1a
    FMUL ST1                            ; 00580b1c
    FXCH ST3                            ; 00580b1e
    FMULP                               ; 00580b20
    FLD float ptr [ESP + 0x1d0]         ; 00580b22
    FSUB float ptr [EBX + 0x34]         ; 00580b29
    FXCH ST2                            ; 00580b2c
    FCHS                                ; 00580b2e
    FSTP float ptr [ESP + 0x1b4]        ; 00580b30
    FXCH ST2                            ; 00580b37
    FSTP float ptr [ESP + 0x1c8]        ; 00580b39
    FXCH                                ; 00580b40
    FSTP float ptr [ESP + 0x1cc]        ; 00580b42
    SUB ESP,0x4                         ; 00580b49
    FSTP float ptr [ESP]                ; 00580b4c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00580b4f
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00580b54
    FLD float ptr [ESP + 0x1e4]         ; 00580b5b
    ADD ESP,0x4                         ; 00580b62
    FST float ptr [ESP + 0x1d0]         ; 00580b65
    FMUL float ptr [EBP + 0x18]         ; 00580b6c
    FMUL float ptr [EBX + 0x10c94]      ; 00580b6f
    FLD float ptr [ESP + 0x1dc]         ; 00580b75
    FSUB float ptr [EBX + 0x30]         ; 00580b7c
    FXCH                                ; 00580b7f
    FADD float ptr [EBX + 0x34]         ; 00580b81
    SUB ESP,0x4                         ; 00580b84
    FSTP float ptr [EBX + 0x34]         ; 00580b87
    FSTP float ptr [ESP]                ; 00580b8a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00580b8d
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00580b92
    FLD float ptr [ESP + 0x1e4]         ; 00580b99
    ADD ESP,0x4                         ; 00580ba0
    FLD float ptr [EBX + 0x10c98]       ; 00580ba3
    FMUL float ptr [ESP + 0x1c8]        ; 00580ba9
    FLD float ptr [EBX + 0x10c98]       ; 00580bb0
    FMUL float ptr [ESP + 0x1b4]        ; 00580bb6
    FLD float ptr [ESP + 0x1c8]         ; 00580bbd
    FMUL float ptr [EBX + 0x10c98]      ; 00580bc4
    FLD float ptr [ESP + 0x1b4]         ; 00580bca
    FMUL float ptr [EBX + 0x10c98]      ; 00580bd1
    FLD float ptr [ESP + 0x1cc]         ; 00580bd7
    FMUL float ptr [EBX + 0x10c98]      ; 00580bde
    FXCH ST5                            ; 00580be4
    FST float ptr [ESP + 0x1dc]         ; 00580be6
    FMUL float ptr [EBP + 0x18]         ; 00580bed
    FLD float ptr [ESP + 0x1d0]         ; 00580bf0
    FCHS                                ; 00580bf7
    FMUL double ptr [0x005ed944]        ; 00580bf9 | DAT_005ed944
    FXCH ST3                            ; 00580bff
    FMUL float ptr [EBP + 0x18]         ; 00580c01
    FXCH ST2                            ; 00580c04
    FMUL float ptr [EBP + 0x18]         ; 00580c06
    FXCH ST6                            ; 00580c09
    FMUL float ptr [EBP + 0x18]         ; 00580c0b
    FXCH                                ; 00580c0e
    FMUL float ptr [EBX + 0x10c94]      ; 00580c10
    FXCH ST5                            ; 00580c16
    FSTP float ptr [EBX + 0x10ca8]      ; 00580c18
    FLD float ptr [EBX + 0x10c98]       ; 00580c1e
    FMUL float ptr [ESP + 0x1cc]        ; 00580c24
    LEA EDI,[ESP + 0x138]               ; 00580c2b
    LEA ESI,[ESP + 0x78]                ; 00580c32
    LEA EAX,[EBX + 0x20]                ; 00580c36
    FXCH ST4                            ; 00580c39
    FSTP float ptr [EBX + 0x10cac]      ; 00580c3b
    FXCH ST3                            ; 00580c41
    FSTP float ptr [EBX + 0x10cb0]      ; 00580c43
    FXCH                                ; 00580c49
    FSTP float ptr [EBX + 0x38]         ; 00580c4b
    FADD float ptr [EBX + 0x20]         ; 00580c4e
    FXCH ST3                            ; 00580c51
    FADD float ptr [EBX + 0x24]         ; 00580c53
    FXCH                                ; 00580c56
    FADD float ptr [EBX + 0x28]         ; 00580c58
    FXCH ST2                            ; 00580c5b
    FADD float ptr [EBX + 0x30]         ; 00580c5d
    FXCH ST3                            ; 00580c60
    FSTP float ptr [EBX + 0x20]         ; 00580c62
    FSTP float ptr [EBX + 0x24]         ; 00580c65
    FSTP float ptr [EBX + 0x28]         ; 00580c68
    FSTP float ptr [EBX + 0x30]         ; 00580c6b
    FLD float ptr [EAX]                 ; 00580c6e
    FLD float ptr [EAX + 0x4]           ; 00580c70
    FLD float ptr [EAX + 0x8]           ; 00580c73
    FXCH ST2                            ; 00580c76
    FSUB float ptr [ESP + 0x180]        ; 00580c78
    FXCH                                ; 00580c7f
    FSUB float ptr [ESP + 0x184]        ; 00580c81
    FXCH ST2                            ; 00580c88
    FSUB float ptr [ESP + 0x188]        ; 00580c8a
    FXCH                                ; 00580c91
    FSTP float ptr [ESP + 0x78]         ; 00580c93
    FXCH                                ; 00580c97
    FSTP float ptr [ESP + 0x7c]         ; 00580c99
    FSTP float ptr [ESP + 0x80]         ; 00580c9d
    MOVSD ES:EDI,ESI                    ; 00580ca4
    MOVSD ES:EDI,ESI                    ; 00580ca5
    MOVSD ES:EDI,ESI                    ; 00580ca6
    FLD float ptr [ESP + 0x13c]         ; 00580ca7
    FMUL double ptr [0x005ed92c]        ; 00580cae | DAT_005ed92c
    FDIV float ptr [EBP + 0x18]         ; 00580cb4
    FADD double ptr [0x005ed94c]        ; 00580cb7 | DAT_005ed94c
    FST float ptr [ESP + 0x8]           ; 00580cbd
    FCOMP double ptr [0x005ed954]       ; 00580cc1 | DAT_005ed954
    FNSTSW AX                           ; 00580cc7
    SAHF                                ; 00580cc9
    JNC 0x00580cd4                      ; 00580cca
        ;   XREF to: 00580cd4 (CONDITIONAL_JUMP)  ; LAB_00580cd4
    MOV dword ptr [ESP + 0x8],0x41200000 ; 00580ccc
    FLD float ptr [ESP + 0x8]           ; 00580cd4
        ;   Label: LAB_00580cd4
    FCOMP double ptr [0x005ed95c]       ; 00580cd8 | DAT_005ed95c
    FNSTSW AX                           ; 00580cde
    SAHF                                ; 00580ce0
    JBE 0x00580ceb                      ; 00580ce1
        ;   XREF to: 00580ceb (CONDITIONAL_JUMP)  ; LAB_00580ceb
    MOV dword ptr [ESP + 0x8],0x42700000 ; 00580ce3
    FLD float ptr [ESP + 0x8]           ; 00580ceb
        ;   Label: LAB_00580ceb
    FSUB float ptr [EBX + 0x10c7c]      ; 00580cef
    FMUL double ptr [0x005ed964]        ; 00580cf5 | DAT_005ed964
    FLD float ptr [EBX + 0x10c7c]       ; 00580cfb
    FXCH                                ; 00580d01
    FADD ST0,ST1                        ; 00580d03
    FLD float ptr [EBP + 0x18]          ; 00580d05
    FXCH                                ; 00580d08
    FSTP ST2                            ; 00580d0a
    FXCH                                ; 00580d0c
    FSTP float ptr [EBX + 0x10c7c]      ; 00580d0e
    FMUL float ptr [EBX + 0x10c7c]      ; 00580d14
    FMUL float ptr [EBX + 0x10c78]      ; 00580d1a
    LEA EAX,[EBX + 0x10afc]             ; 00580d20
    FADD float ptr [EBX + 0x10af8]      ; 00580d26
    PUSH EAX                            ; 00580d2c
    FSTP float ptr [EBX + 0x10af8]      ; 00580d2d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00580d33
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00580d38
    MOV EDX,dword ptr [EAX + 0x100]     ; 00580d3b
    MOV dword ptr [ESP + 0x1e0],EDX     ; 00580d41
    FILD dword ptr [ESP + 0x1e0]        ; 00580d48
    FCOMP float ptr [EBX + 0x10af8]     ; 00580d4f
    FNSTSW AX                           ; 00580d55
    SAHF                                ; 00580d57
    JA 0x005811ab                       ; 00580d58
        ;   XREF to: 005811ab (CONDITIONAL_JUMP)  ; LAB_005811ab
    MOV dword ptr [EBX + 0x10af8],0x0   ; 00580d5e
    CMP byte ptr [EBX + 0x10cb8],0x0    ; 00580d68
        ;   Label: LAB_00580d68
    JZ 0x00580d8d                       ; 00580d6f
        ;   XREF to: 00580d8d (CONDITIONAL_JUMP)  ; LAB_00580d8d
    FLD float ptr [EBX + 0x10d28]       ; 00580d71
    FSUB float ptr [EBP + 0x18]         ; 00580d77
    FST float ptr [EBX + 0x10d28]       ; 00580d7a
    FLDZ                                ; 00580d80
    FCOMPP                              ; 00580d82
    FNSTSW AX                           ; 00580d84
    SAHF                                ; 00580d86
    JNC 0x005811d6                      ; 00580d87
        ;   XREF to: 005811d6 (CONDITIONAL_JUMP)  ; LAB_005811d6
    MOV ESP,EBP                         ; 00580d8d
        ;   Label: LAB_00580d8d
    POP EBP                             ; 00580d8f
    POP EDI                             ; 00580d90
    POP ESI                             ; 00580d91
    POP EBX                             ; 00580d92
    RET                                 ; 00580d93
    FLD float ptr [EBP + 0x18]          ; 00580d94
        ;   Label: LAB_00580d94
    FLD ST0                             ; 00580d97
    LEA EDI,[ESP + 0x9c]                ; 00580d99
    LEA ESI,[EBX + 0x20]                ; 00580da0
    FMUL double ptr [0x005ed96c]        ; 00580da3 | DAT_005ed96c
    MOVSD ES:EDI,ESI                    ; 00580da9
    MOVSD ES:EDI,ESI                    ; 00580daa
    MOVSD ES:EDI,ESI                    ; 00580dab
    FLD float ptr [EBX + 0x10cac]       ; 00580dac
    FXCH                                ; 00580db2
    FADD ST0,ST1                        ; 00580db4
    LEA EAX,[EBX + 0x10ca8]             ; 00580db6
    FSTP ST1                            ; 00580dbc
    FSTP float ptr [EBX + 0x10cac]      ; 00580dbe
    FLD float ptr [EAX]                 ; 00580dc4
    FMUL ST1                            ; 00580dc6
    FLD float ptr [EAX + 0x4]           ; 00580dc8
    FMUL ST2                            ; 00580dcb
    FLD float ptr [EAX + 0x8]           ; 00580dcd
    FMUL ST3                            ; 00580dd0
    PUSH 0x0                            ; 00580dd2
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00580dd4
    LEA EDI,[ESP + 0xf4]                ; 00580ddb
    LEA ESI,[ESP + 0x16c]               ; 00580de2
    LEA EAX,[EBX + 0x20]                ; 00580de9
    FXCH ST2                            ; 00580dec
    FSTP float ptr [ESP + 0x16c]        ; 00580dee
    FSTP float ptr [ESP + 0x170]        ; 00580df5
    FSTP float ptr [ESP + 0x174]        ; 00580dfc
    MOVSD ES:EDI,ESI                    ; 00580e03
    MOVSD ES:EDI,ESI                    ; 00580e04
    MOVSD ES:EDI,ESI                    ; 00580e05
    MOV dword ptr [ESP + 0x1dc],EAX     ; 00580e06
    FLD float ptr [EAX]                 ; 00580e0d
    FLD float ptr [EAX + 0x4]           ; 00580e0f
    FLD float ptr [EAX + 0x8]           ; 00580e12
    FXCH ST2                            ; 00580e15
    FADD float ptr [ESP + 0xf4]         ; 00580e17
    FXCH                                ; 00580e1e
    FADD float ptr [ESP + 0xf8]         ; 00580e20
    FXCH ST2                            ; 00580e27
    FADD float ptr [ESP + 0xfc]         ; 00580e29
    FXCH                                ; 00580e30
    FSTP float ptr [EAX]                ; 00580e32
    FXCH                                ; 00580e34
    FSTP float ptr [EAX + 0x4]          ; 00580e36
    FSTP float ptr [EAX + 0x8]          ; 00580e39
    LEA EAX,[ESP + 0xd0]                ; 00580e3c
    FMUL float ptr [EBX + 0x10c94]      ; 00580e43
    PUSH EAX                            ; 00580e49
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 00580e4a
    LEA EAX,[ESP + 0xa4]                ; 00580e51
    PUSH EDX                            ; 00580e58
    FMUL float ptr [0x005ed974]         ; 00580e59 | DAT_005ed974
    PUSH EAX                            ; 00580e5f
    FADD float ptr [EBX + 0x38]         ; 00580e60
    PUSH 0x1fc9c68                      ; 00580e63 | g_CDemonRaytraceInstance
    FSTP float ptr [EBX + 0x38]         ; 00580e68
    CALL core_dtrace.cpp_FUN_00472c60   ; 00580e6b
        ;   XREF to: 00472c60 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00472c60()
    MOV dword ptr [ESP + 0x1f4],EAX     ; 00580e70
    FLD float ptr [ESP + 0x1f4]         ; 00580e77
    ADD ESP,0x14                        ; 00580e7e
    FLDZ                                ; 00580e81
    FXCH                                ; 00580e83
    FST float ptr [ESP + 0x10]          ; 00580e85
    FSTP double ptr [ESP]               ; 00580e89
    FCOMP double ptr [ESP]              ; 00580e8c
    FNSTSW AX                           ; 00580e8f
    SAHF                                ; 00580e91
    JA 0x00581025                       ; 00580e92
        ;   XREF to: 00581025 (CONDITIONAL_JUMP)  ; LAB_00581025
    FLD1                                ; 00580e98
    FCOMP double ptr [ESP]              ; 00580e9a
    FNSTSW AX                           ; 00580e9d
    SAHF                                ; 00580e9f
    JBE 0x00581025                      ; 00580ea0
        ;   XREF to: 00581025 (CONDITIONAL_JUMP)  ; LAB_00581025
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00580ea6
    LEA EDI,[ESP + 0xe4]                ; 00580ead
    LEA ESI,[ESP + 0x12c]               ; 00580eb4
    FLD float ptr [EAX]                 ; 00580ebb
    FLD float ptr [EAX + 0x4]           ; 00580ebd
    FLD float ptr [EAX + 0x8]           ; 00580ec0
    FXCH ST2                            ; 00580ec3
    FSUB float ptr [ESP + 0x9c]         ; 00580ec5
    FXCH                                ; 00580ecc
    FSUB float ptr [ESP + 0xa0]         ; 00580ece
    FXCH ST2                            ; 00580ed5
    FSUB float ptr [ESP + 0xa4]         ; 00580ed7
    FXCH                                ; 00580ede
    FSTP float ptr [ESP + 0x12c]        ; 00580ee0
    FXCH                                ; 00580ee7
    FSTP float ptr [ESP + 0x130]        ; 00580ee9
    FSTP float ptr [ESP + 0x134]        ; 00580ef0
    MOVSD ES:EDI,ESI                    ; 00580ef7
    MOVSD ES:EDI,ESI                    ; 00580ef8
    MOVSD ES:EDI,ESI                    ; 00580ef9
    FLD float ptr [ESP + 0x10]          ; 00580efa
    FLD float ptr [ESP + 0xe4]          ; 00580efe
    FMUL ST1                            ; 00580f05
    FLD float ptr [ESP + 0xe8]          ; 00580f07
    FMUL ST2                            ; 00580f0e
    FLD float ptr [ESP + 0xec]          ; 00580f10
    FMULP ST3                           ; 00580f17
    LEA EDI,[ESP + 0x120]               ; 00580f19
    LEA ESI,[ESP + 0xb4]                ; 00580f20
    FXCH                                ; 00580f27
    FSTP float ptr [ESP + 0xb4]         ; 00580f29
    FSTP float ptr [ESP + 0xb8]         ; 00580f30
    FSTP float ptr [ESP + 0xbc]         ; 00580f37
    MOVSD ES:EDI,ESI                    ; 00580f3e
    MOVSD ES:EDI,ESI                    ; 00580f3f
    MOVSD ES:EDI,ESI                    ; 00580f40
    FLD float ptr [0x005ed978]          ; 00580f41 | DAT_005ed978
    FLD float ptr [ESP + 0x120]         ; 00580f47
    FMUL ST1                            ; 00580f4e
    FLD float ptr [ESP + 0x124]         ; 00580f50
    FMUL ST2                            ; 00580f57
    FLD float ptr [ESP + 0x128]         ; 00580f59
    FMULP ST3                           ; 00580f60
    FLD float ptr [ESP + 0x9c]          ; 00580f62
    FLD float ptr [ESP + 0xa0]          ; 00580f69
    LEA EDI,[ESP + 0xfc]                ; 00580f70
    LEA ESI,[ESP + 0x18c]               ; 00580f77
    FXCH ST3                            ; 00580f7e
    FSTP float ptr [ESP + 0x18c]        ; 00580f80
    FXCH                                ; 00580f87
    FSTP float ptr [ESP + 0x190]        ; 00580f89
    FXCH ST2                            ; 00580f90
    FSTP float ptr [ESP + 0x194]        ; 00580f92
    MOVSD ES:EDI,ESI                    ; 00580f99
    MOVSD ES:EDI,ESI                    ; 00580f9a
    MOVSD ES:EDI,ESI                    ; 00580f9b
    FLD float ptr [ESP + 0xa4]          ; 00580f9c
    LEA EDI,[ESP + 0x198]               ; 00580fa3
    LEA ESI,[ESP + 0x90]                ; 00580faa
    FXCH ST2                            ; 00580fb1
    FADD float ptr [ESP + 0xfc]         ; 00580fb3
    FXCH                                ; 00580fba
    FADD float ptr [ESP + 0x100]        ; 00580fbc
    FXCH ST2                            ; 00580fc3
    FADD float ptr [ESP + 0x104]        ; 00580fc5
    FXCH                                ; 00580fcc
    FSTP float ptr [ESP + 0x90]         ; 00580fce
    FXCH                                ; 00580fd5
    FSTP float ptr [ESP + 0x94]         ; 00580fd7
    FSTP float ptr [ESP + 0x98]         ; 00580fde
    MOVSD ES:EDI,ESI                    ; 00580fe5
    MOVSD ES:EDI,ESI                    ; 00580fe6
    MOVSD ES:EDI,ESI                    ; 00580fe7
    MOV EDX,dword ptr [ESP + 0x1d8]     ; 00580fe8
    MOV EAX,dword ptr [ESP + 0x198]     ; 00580fef
    MOV dword ptr [EDX],EAX             ; 00580ff6
    MOV EAX,dword ptr [ESP + 0x19c]     ; 00580ff8
    MOV dword ptr [EDX + 0x4],EAX       ; 00580fff
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 00581002
    MOV dword ptr [EDX + 0x8],EAX       ; 00581009
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0058100c
    MOV dword ptr [EAX + 0x8],0x0       ; 00581013
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058101a
    MOV dword ptr [EAX + 0x4],EDX       ; 0058101d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00581020
    MOV dword ptr [EAX],EDX             ; 00581023
    FLD float ptr [ESP + 0x9c]          ; 00581025
        ;   Label: LAB_00581025
    FLD float ptr [ESP + 0xa0]          ; 0058102c
    FLD float ptr [ESP + 0xa4]          ; 00581033
    LEA EDI,[ESP + 0xd8]                ; 0058103a
    LEA EAX,[EBX + 0x20]                ; 00581041
    LEA ESI,[ESP + 0x174]               ; 00581044
    LEA EDX,[ESP + 0x114]               ; 0058104b
    FXCH ST2                            ; 00581052
    FSUB float ptr [EAX]                ; 00581054
    FXCH                                ; 00581056
    FSUB float ptr [EAX + 0x4]          ; 00581058
    FXCH ST2                            ; 0058105b
    FSUB float ptr [EAX + 0x8]          ; 0058105d
    FXCH                                ; 00581060
    FSTP float ptr [ESP + 0x174]        ; 00581062
    FXCH                                ; 00581069
    FSTP float ptr [ESP + 0x178]        ; 0058106b
    FSTP float ptr [ESP + 0x17c]        ; 00581072
    LEA EAX,[ESP + 0xd8]                ; 00581079
    MOVSD ES:EDI,ESI                    ; 00581080
    MOVSD ES:EDI,ESI                    ; 00581081
    MOVSD ES:EDI,ESI                    ; 00581082
    CMP EDX,EAX                         ; 00581083
    JZ 0x005810b1                       ; 00581085
        ;   XREF to: 005810b1 (CONDITIONAL_JUMP)  ; LAB_005810b1
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00581087
    MOV dword ptr [ESP + 0x114],EAX     ; 0058108e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00581095
    MOV dword ptr [ESP + 0x118],EAX     ; 0058109c
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005810a3
    MOV dword ptr [ESP + 0x11c],EAX     ; 005810aa
    FLD float ptr [ESP + 0x118]         ; 005810b1
        ;   Label: LAB_005810b1
    FMUL ST0                            ; 005810b8
    FLD float ptr [ESP + 0x114]         ; 005810ba
    FMUL ST0                            ; 005810c1
    FADDP                               ; 005810c3
    FLD float ptr [ESP + 0x11c]         ; 005810c5
    FMUL ST0                            ; 005810cc
    FADDP                               ; 005810ce
    FSQRT                               ; 005810d0
    FCOMP double ptr [0x005ed97c]       ; 005810d2 | DAT_005ed97c
    FNSTSW AX                           ; 005810d8
    SAHF                                ; 005810da
    JNC 0x00580d8d                      ; 005810db
        ;   XREF to: 00580d8d (CONDITIONAL_JUMP)  ; LAB_00580d8d
    MOV dword ptr [EBX + 0x10cb4],0x2   ; 005810e1
    MOV ESP,EBP                         ; 005810eb
    POP EBP                             ; 005810ed
    POP EDI                             ; 005810ee
    POP ESI                             ; 005810ef
    POP EBX                             ; 005810f0
    RET                                 ; 005810f1
    MOV EAX,[0x01cedef4]                ; 005810f2 | DAT_01cedef4
        ;   Label: LAB_005810f2
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005810f7
    MOV dword ptr [EBX + 0x10a78],EAX   ; 005810fe
    TEST EAX,EAX                        ; 00581104
    JZ 0x005806fd                       ; 00581106
        ;   XREF to: 005806fd (CONDITIONAL_JUMP)  ; LAB_005806fd
    LEA ESI,[EAX + 0x20]                ; 0058110c
    LEA EAX,[ESP + 0xa8]                ; 0058110f
    CMP EAX,ESI                         ; 00581116
    JNZ 0x0058116d                      ; 00581118
        ;   XREF to: 0058116d (CONDITIONAL_JUMP)  ; LAB_0058116d
    FLD float ptr [EBX + 0x10c9c]       ; 0058111a
        ;   Label: LAB_0058111a
    FADD double ptr [0x005ed92c]        ; 00581120 | DAT_005ed92c
    FADD float ptr [ESP + 0xac]         ; 00581126
    FSTP float ptr [ESP + 0xac]         ; 0058112d
    MOV EAX,dword ptr [EBX + 0x6c]      ; 00581134
    MOV EDX,EAX                         ; 00581137
    MOV ESI,0x8                         ; 00581139
    SAR EDX,0x1f                        ; 0058113e
    IDIV ESI                            ; 00581141
    SUB EDX,0x4                         ; 00581143
    MOV dword ptr [ESP + 0x1e0],EDX     ; 00581146
    FILD dword ptr [ESP + 0x1e0]        ; 0058114d
    FMUL double ptr [0x005ed934]        ; 00581154 | DAT_005ed934
    FADD float ptr [ESP + 0xac]         ; 0058115a
    FSTP float ptr [ESP + 0xac]         ; 00581161
    JMP 0x0058072b                      ; 00581168
        ;   XREF to: 0058072b (UNCONDITIONAL_JUMP)  ; LAB_0058072b
    MOV EAX,dword ptr [ESI]             ; 0058116d
        ;   Label: LAB_0058116d
    MOV dword ptr [ESP + 0xa8],EAX      ; 0058116f
    MOV EAX,dword ptr [ESI + 0x4]       ; 00581176
    MOV dword ptr [ESP + 0xac],EAX      ; 00581179
    MOV EAX,dword ptr [ESI + 0x8]       ; 00581180
    MOV dword ptr [ESP + 0xb0],EAX      ; 00581183
    JMP 0x0058111a                      ; 0058118a
        ;   XREF to: 0058111a (UNCONDITIONAL_JUMP)  ; LAB_0058111a
    FLD float ptr [ESP + 0x118]         ; 0058118c
        ;   Label: LAB_0058118c
    FABS                                ; 00581193
    FLD float ptr [EBX + 0x10c90]       ; 00581195
    FCOMPP                              ; 0058119b
    FNSTSW AX                           ; 0058119d
    SAHF                                ; 0058119f
    JBE 0x005807dc                      ; 005811a0
        ;   XREF to: 005807dc (CONDITIONAL_JUMP)  ; LAB_005807dc
    JMP 0x0058080a                      ; 005811a6
        ;   XREF to: 0058080a (UNCONDITIONAL_JUMP)  ; LAB_0058080a
    FLDZ                                ; 005811ab
        ;   Label: LAB_005811ab
    FCOMP float ptr [EBX + 0x10af8]     ; 005811ad
    FNSTSW AX                           ; 005811b3
    SAHF                                ; 005811b5
    JBE 0x00580d68                      ; 005811b6
        ;   XREF to: 00580d68 (CONDITIONAL_JUMP)  ; LAB_00580d68
    DEC EDX                             ; 005811bc
    MOV dword ptr [ESP + 0x1e0],EDX     ; 005811bd
    FILD dword ptr [ESP + 0x1e0]        ; 005811c4
    FSTP float ptr [EBX + 0x10af8]      ; 005811cb
    JMP 0x00580d68                      ; 005811d1
        ;   XREF to: 00580d68 (UNCONDITIONAL_JUMP)  ; LAB_00580d68
    MOV EAX,dword ptr [EBX + 0x10d24]   ; 005811d6
        ;   Label: LAB_005811d6
    PUSH EAX                            ; 005811dc
    CALL sound_sndmain.cpp_FUN_00550b70 ; 005811dd
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 005811e2
    TEST EAX,EAX                        ; 005811e5
    JNZ 0x0058122f                      ; 005811e7
        ;   XREF to: 0058122f (CONDITIONAL_JUMP)  ; LAB_0058122f
    PUSH 0x42480000                     ; 005811e9
    SUB ESP,0x8                         ; 005811ee
    FLD float ptr [EBX + 0x28]          ; 005811f1
    FSTP double ptr [ESP]               ; 005811f4
    SUB ESP,0x8                         ; 005811f7
    FLD float ptr [EBX + 0x24]          ; 005811fa
    FSTP double ptr [ESP]               ; 005811fd
    SUB ESP,0x8                         ; 00581200
    FLD float ptr [EBX + 0x20]          ; 00581203
    FSTP double ptr [ESP]               ; 00581206
    CALL sound_sndmain.cpp_FUN_005515e0 ; 00581209
        ;   XREF to: 005515e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005515e0()
    ADD ESP,0x1c                        ; 0058120e
    TEST EAX,EAX                        ; 00581211
    JZ 0x0058122f                       ; 00581213
        ;   XREF to: 0058122f (CONDITIONAL_JUMP)  ; LAB_0058122f
    LEA EDX,[EBX + 0x10cb8]             ; 00581215
    PUSH EDX                            ; 0058121b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058121c
    PUSH EBX                            ; 00581222
    CALL dword ptr [EAX + 0x38]         ; 00581223
    ADD ESP,0x8                         ; 00581226
    MOV dword ptr [EBX + 0x10d24],EAX   ; 00581229
    PUSH dword ptr [EBX + 0x10d20]      ; 0058122f
        ;   Label: LAB_0058122f
    PUSH dword ptr [EBX + 0x10d1c]      ; 00581235
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058123b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00581240
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 00581247
    MOV dword ptr [EBX + 0x10d28],EAX   ; 0058124e
    ADD ESP,0x8                         ; 00581254
    MOV ESP,EBP                         ; 00581257
    POP EBP                             ; 00581259
    POP EDI                             ; 0058125a
    POP ESI                             ; 0058125b
    POP EBX                             ; 0058125c
    RET                                 ; 0058125d

