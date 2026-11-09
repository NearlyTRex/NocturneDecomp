; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_FUN_005424f0(int param_1,float param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined        Stack[-0x1a0]:1  local_1a0
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
;
; XREF[1]:
;   core_scat.cpp_FUN_00540df0 at 005411c4
;
; Referenced Globals:
;   undefined4 DAT_005edec7
;   undefined4 DAT_005edecf
;   undefined4 DAT_005eded7
;   undefined4 DAT_005ededb
;   undefined4 DAT_005ededf
;   undefined4 DAT_005edee7
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01e7e02c
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_0040cd60
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_scat.cpp_FUN_00542b90
;   core_skeleton.cpp_FUN_00569040
;   core_vecdir.cpp_FUN_005a7520
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005424f0
        ;   Label: core_scat.cpp_FUN_005424f0
    PUSH ESI                            ; 005424f1
    PUSH EDI                            ; 005424f2
    PUSH EBP                            ; 005424f3
    MOV EBP,ESP                         ; 005424f4
    SUB ESP,0x194                       ; 005424f6
    AND ESP,0xfffffff8                  ; 005424fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005424ff
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00542502
    MOV dword ptr [EAX + 0x1ffd4],0x0   ; 00542505
    TEST EDX,EDX                        ; 0054250f
    JZ 0x005426fd                       ; 00542511
        ;   XREF to: 005426fd (CONDITIONAL_JUMP)  ; LAB_005426fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542517
        ;   Label: LAB_00542517
    MOV EAX,dword ptr [EAX + 0x1ffc4]   ; 0054251a
    MOV dword ptr [ESP],EAX             ; 00542520
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542523
    MOV EAX,dword ptr [EAX + 0x1ffc8]   ; 00542526
    MOV dword ptr [ESP + 0x184],EAX     ; 0054252c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542533
    CMP dword ptr [EAX + 0x1fae4],0x0   ; 00542536
    JNZ 0x00542723                      ; 0054253d
        ;   XREF to: 00542723 (CONDITIONAL_JUMP)  ; LAB_00542723
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542543
        ;   Label: LAB_00542543
    CMP dword ptr [EAX + 0x1ffac],0x0   ; 00542546
    JNZ 0x00542796                      ; 0054254d
        ;   XREF to: 00542796 (CONDITIONAL_JUMP)  ; LAB_00542796
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542553
        ;   Label: LAB_00542553
    MOV dword ptr [EAX + 0x1ffd0],0x0   ; 00542556
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542560
        ;   Label: LAB_00542560
    CMP dword ptr [EAX + 0xc1e4],0x0    ; 00542563
    JZ 0x00542851                       ; 0054256a
        ;   XREF to: 00542851 (CONDITIONAL_JUMP)  ; LAB_00542851
    MOV EDX,dword ptr [EAX + 0x1ffd0]   ; 00542570
    TEST EDX,EDX                        ; 00542576
    JNZ 0x0054259c                      ; 00542578
        ;   XREF to: 0054259c (CONDITIONAL_JUMP)  ; LAB_0054259c
    MOV dword ptr [EAX + 0x1ffc8],EDX   ; 0054257a
    MOV EDX,dword ptr [EAX + 0x1ffc8]   ; 00542580
    MOV dword ptr [EAX + 0x1ffc4],EDX   ; 00542586
    MOV EAX,dword ptr [EAX + 0x1ffc4]   ; 0054258c
    MOV dword ptr [ESP + 0x184],EAX     ; 00542592
    MOV dword ptr [ESP],EAX             ; 00542599
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054259c
        ;   Label: LAB_0054259c
    FLD float ptr [ESP + 0x184]         ; 0054259f
    FSUB float ptr [EAX + 0x1ffc8]      ; 005425a6
    SUB ESP,0x4                         ; 005425ac
    FSTP float ptr [ESP]                ; 005425af
    CALL core_actor.cpp_FUN_0040cd60    ; 005425b2
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [ESP + 0x194],EAX     ; 005425b7
    FLD float ptr [ESP + 0x194]         ; 005425be
    ADD ESP,0x4                         ; 005425c5
    FLD float ptr [ESP]                 ; 005425c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005425cb
    FXCH                                ; 005425ce
    FSTP float ptr [ESP + 0x17c]        ; 005425d0
    FSUB float ptr [EAX + 0x1ffc4]      ; 005425d7
    SUB ESP,0x4                         ; 005425dd
    FSTP float ptr [ESP]                ; 005425e0
    CALL core_actor.cpp_FUN_0040cd60    ; 005425e3
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [ESP + 0x194],EAX     ; 005425e8
    FLD float ptr [ESP + 0x194]         ; 005425ef
    ADD ESP,0x4                         ; 005425f6
    FLD float ptr [EBP + 0x18]          ; 005425f9
    FMUL float ptr [0x005edec7]         ; 005425fc | DAT_005edec7
    FMUL double ptr [0x005ededf]        ; 00542602 | DAT_005ededf
    FLD float ptr [ESP + 0x17c]         ; 00542608
    FXCH ST2                            ; 0054260f
    FSTP float ptr [ESP + 0x178]        ; 00542611
    FST float ptr [ESP + 0x180]         ; 00542618
    FCHS                                ; 0054261f
    FSTP float ptr [ESP + 0x170]        ; 00542621
    FCOMP float ptr [ESP + 0x170]       ; 00542628
    FNSTSW AX                           ; 0054262f
    SAHF                                ; 00542631
    JNC 0x00542642                      ; 00542632
        ;   XREF to: 00542642 (CONDITIONAL_JUMP)  ; LAB_00542642
    MOV EAX,dword ptr [ESP + 0x170]     ; 00542634
    MOV dword ptr [ESP + 0x17c],EAX     ; 0054263b
    FLD float ptr [ESP + 0x17c]         ; 00542642
        ;   Label: LAB_00542642
    FCOMP float ptr [ESP + 0x180]       ; 00542649
    FNSTSW AX                           ; 00542650
    SAHF                                ; 00542652
    JBE 0x00542663                      ; 00542653
        ;   XREF to: 00542663 (CONDITIONAL_JUMP)  ; LAB_00542663
    MOV EAX,dword ptr [ESP + 0x180]     ; 00542655
    MOV dword ptr [ESP + 0x17c],EAX     ; 0054265c
    FLD float ptr [ESP + 0x178]         ; 00542663
        ;   Label: LAB_00542663
    FLD float ptr [ESP + 0x180]         ; 0054266a
    FCHS                                ; 00542671
    FSTP float ptr [ESP + 0x16c]        ; 00542673
    FCOMP float ptr [ESP + 0x16c]       ; 0054267a
    FNSTSW AX                           ; 00542681
    SAHF                                ; 00542683
    JNC 0x00542694                      ; 00542684
        ;   XREF to: 00542694 (CONDITIONAL_JUMP)  ; LAB_00542694
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00542686
    MOV dword ptr [ESP + 0x178],EAX     ; 0054268d
    FLD float ptr [ESP + 0x178]         ; 00542694
        ;   Label: LAB_00542694
    FCOMP float ptr [ESP + 0x180]       ; 0054269b
    FNSTSW AX                           ; 005426a2
    SAHF                                ; 005426a4
    JBE 0x005426b5                      ; 005426a5
        ;   XREF to: 005426b5 (CONDITIONAL_JUMP)  ; LAB_005426b5
    MOV EAX,dword ptr [ESP + 0x180]     ; 005426a7
    MOV dword ptr [ESP + 0x178],EAX     ; 005426ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 005426b5
        ;   Label: LAB_005426b5
    FLD float ptr [EAX + 0x1ffc8]       ; 005426b8
    FLD float ptr [EAX + 0x1ffc4]       ; 005426be
    MOV ECX,dword ptr [EAX + 0x1ffd0]   ; 005426c4
    FADD float ptr [ESP + 0x178]        ; 005426ca
    FXCH                                ; 005426d1
    FADD float ptr [ESP + 0x17c]        ; 005426d3
    FXCH                                ; 005426da
    FSTP float ptr [EAX + 0x1ffc4]      ; 005426dc
    FSTP float ptr [EAX + 0x1ffc8]      ; 005426e2
    TEST ECX,ECX                        ; 005426e8
    JZ 0x005426f6                       ; 005426ea
        ;   XREF to: 005426f6 (CONDITIONAL_JUMP)  ; LAB_005426f6
    CMP dword ptr [EBP + 0x1c],0x0      ; 005426ec
    JZ 0x00542b00                       ; 005426f0
        ;   XREF to: 00542b00 (CONDITIONAL_JUMP)  ; LAB_00542b00
    MOV ESP,EBP                         ; 005426f6
        ;   Label: LAB_005426f6
    POP EBP                             ; 005426f8
    POP EDI                             ; 005426f9
    POP ESI                             ; 005426fa
    POP EBX                             ; 005426fb
    RET                                 ; 005426fc
    ADD EAX,0x158                       ; 005426fd
        ;   Label: LAB_005426fd
    PUSH EAX                            ; 00542702
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00542703
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00542708
    ADD ESP,0x4                         ; 0054270b
    CMP EAX,0x2                         ; 0054270e
    JNZ 0x00542517                      ; 00542711
        ;   XREF to: 00542517 (CONDITIONAL_JUMP)  ; LAB_00542517
    MOV dword ptr [EBP + 0x1c],0x1      ; 00542717
    JMP 0x00542517                      ; 0054271e
        ;   XREF to: 00542517 (UNCONDITIONAL_JUMP)  ; LAB_00542517
    CMP dword ptr [EAX + 0xc1d4],0x2    ; 00542723
        ;   Label: LAB_00542723
    JZ 0x00542543                       ; 0054272a
        ;   XREF to: 00542543 (CONDITIONAL_JUMP)  ; LAB_00542543
    FLD float ptr [EAX + 0xc204]        ; 00542730
    FMUL float ptr [0x005edec7]         ; 00542736 | DAT_005edec7
    FMUL double ptr [0x005edecf]        ; 0054273c | DAT_005edecf
    FMUL float ptr [EBP + 0x18]         ; 00542742
    MOV EDI,0x3fc90fdb                  ; 00542745
    FLD float ptr [ESP]                 ; 0054274a
    FXCH                                ; 0054274d
    FADD ST0,ST1                        ; 0054274f
    MOV dword ptr [ESP + 0x174],EDI     ; 00542751
    FSTP ST1                            ; 00542758
    FST float ptr [ESP]                 ; 0054275a
    FCOMP float ptr [0x005eded7]        ; 0054275d | DAT_005eded7
    FNSTSW AX                           ; 00542763
    SAHF                                ; 00542765
    JNC 0x0054276f                      ; 00542766
        ;   XREF to: 0054276f (CONDITIONAL_JUMP)  ; LAB_0054276f
    MOV dword ptr [ESP],0xbfc90fdb      ; 00542768
    FLD float ptr [ESP]                 ; 0054276f
        ;   Label: LAB_0054276f
    FCOMP float ptr [ESP + 0x174]       ; 00542772
    FNSTSW AX                           ; 00542779
    SAHF                                ; 0054277b
    JBE 0x00542788                      ; 0054277c
        ;   XREF to: 00542788 (CONDITIONAL_JUMP)  ; LAB_00542788
    MOV EAX,dword ptr [ESP + 0x174]     ; 0054277e
    MOV dword ptr [ESP],EAX             ; 00542785
    XOR EDX,EDX                         ; 00542788
        ;   Label: LAB_00542788
    MOV dword ptr [ESP + 0x184],EDX     ; 0054278a
    JMP 0x0054259c                      ; 00542791
        ;   XREF to: 0054259c (UNCONDITIONAL_JUMP)  ; LAB_0054259c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00542796
        ;   Label: LAB_00542796
    TEST EBX,EBX                        ; 00542799
    JNZ 0x00542553                      ; 0054279b
        ;   XREF to: 00542553 (CONDITIONAL_JUMP)  ; LAB_00542553
    MOV ESI,dword ptr [EAX + 0xc1e4]    ; 005427a1
    TEST ESI,ESI                        ; 005427a7
    JNZ 0x00542560                      ; 005427a9
        ;   XREF to: 00542560 (CONDITIONAL_JUMP)  ; LAB_00542560
    MOV EDI,0x7149f2ca                  ; 005427af
    MOV dword ptr [ESP + 0x188],EBX     ; 005427b4
    MOV dword ptr [ESP + 0x18c],EDI     ; 005427bb
    XOR EDI,EDI                         ; 005427c2
    MOV EAX,[0x00622c18]                ; 005427c4 | g_CDemonSetPtr
        ;   Label: LAB_005427c4
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 005427c9 | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x0054283c                      ; 005427cf
        ;   XREF to: 0054283c (CONDITIONAL_JUMP)  ; LAB_0054283c
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d168] ; 005427d1 | g_CDemonSetInstance.field1364328_0x14d168
    MOV EAX,dword ptr [EBP + 0x14]      ; 005427d8
    CMP EBX,dword ptr [EAX + 0x1ffd0]   ; 005427db
    SETZ AL                             ; 005427e1
    AND EAX,0xff                        ; 005427e4
    PUSH EAX                            ; 005427e9
    PUSH EBX                            ; 005427ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 005427eb
    PUSH EAX                            ; 005427ee
    CALL core_scat.cpp_FUN_00542b90     ; 005427ef
        ;   XREF to: 00542b90 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_FUN_00542b90()
    MOV dword ptr [ESP + 0x19c],EAX     ; 005427f4
    FLD float ptr [ESP + 0x19c]         ; 005427fb
    ADD ESP,0xc                         ; 00542802
    FST float ptr [ESP + 0x4]           ; 00542805
    FLDZ                                ; 00542809
    FCOMPP                              ; 0054280b
    FNSTSW AX                           ; 0054280d
    SAHF                                ; 0054280f
    JBE 0x00542818                      ; 00542810
        ;   XREF to: 00542818 (CONDITIONAL_JUMP)  ; LAB_00542818
    INC ESI                             ; 00542812
        ;   Label: LAB_00542812
    ADD EDI,0x4                         ; 00542813
    JMP 0x005427c4                      ; 00542816
        ;   XREF to: 005427c4 (UNCONDITIONAL_JUMP)  ; LAB_005427c4
    FLD float ptr [ESP + 0x4]           ; 00542818
        ;   Label: LAB_00542818
    FCOMP float ptr [ESP + 0x18c]       ; 0054281c
    FNSTSW AX                           ; 00542823
    SAHF                                ; 00542825
    JNC 0x00542812                      ; 00542826
        ;   XREF to: 00542812 (CONDITIONAL_JUMP)  ; LAB_00542812
    MOV EAX,dword ptr [ESP + 0x4]       ; 00542828
    MOV dword ptr [ESP + 0x188],EBX     ; 0054282c
    MOV dword ptr [ESP + 0x18c],EAX     ; 00542833
    JMP 0x00542812                      ; 0054283a
        ;   XREF to: 00542812 (UNCONDITIONAL_JUMP)  ; LAB_00542812
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054283c
        ;   Label: LAB_0054283c
    MOV EAX,dword ptr [ESP + 0x188]     ; 0054283f
    MOV dword ptr [EBX + 0x1ffd0],EAX   ; 00542846
    JMP 0x00542560                      ; 0054284c
        ;   XREF to: 00542560 (UNCONDITIONAL_JUMP)  ; LAB_00542560
    CMP dword ptr [EAX + 0x1ffd0],0x0   ; 00542851
        ;   Label: LAB_00542851
    JZ 0x0054259c                       ; 00542858
        ;   XREF to: 0054259c (CONDITIONAL_JUMP)  ; LAB_0054259c
    PUSH 0x5fb430                       ; 0054285e | g_CVectorTypeInfo
    PUSH 0xa                            ; 00542863
    LEA EAX,[ESP + 0x10]                ; 00542865
    PUSH EAX                            ; 00542869
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0054286a
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0054286f
    LEA ESI,[ESP + 0x8]                 ; 00542872
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542876
    PUSH ESI                            ; 00542879
    MOV EAX,dword ptr [EAX + 0x1ffd0]   ; 0054287a
    PUSH EAX                            ; 00542880
    MOV EBX,dword ptr [EAX + 0x154]     ; 00542881
    CALL dword ptr [EBX + 0x54]         ; 00542887
    ADD ESP,0x8                         ; 0054288a
    TEST EAX,EAX                        ; 0054288d
    JLE 0x005429f2                      ; 0054288f
        ;   XREF to: 005429f2 (CONDITIONAL_JUMP)  ; LAB_005429f2
    LEA EAX,[ESP + 0xf8]                ; 00542895
    LEA EBX,[ESP + 0x8]                 ; 0054289c
    CMP EAX,EBX                         ; 005428a0
    JZ 0x005428c5                       ; 005428a2
        ;   XREF to: 005428c5 (CONDITIONAL_JUMP)  ; LAB_005428c5
    MOV EAX,dword ptr [ESP + 0x8]       ; 005428a4
    MOV dword ptr [ESP + 0xf8],EAX      ; 005428a8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005428af
    MOV dword ptr [ESP + 0xfc],EAX      ; 005428b3
    MOV EAX,dword ptr [ESP + 0x10]      ; 005428ba
    MOV dword ptr [ESP + 0x100],EAX     ; 005428be
        ;   Label: LAB_005428be
    LEA EAX,[ESP + 0xf8]                ; 005428c5
        ;   Label: LAB_005428c5
    PUSH EAX                            ; 005428cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005428cd
    MOV EBX,dword ptr [EAX + 0x1ffd0]   ; 005428d0
    PUSH EBX                            ; 005428d6
    LEA ESI,[ESP + 0x130]               ; 005428d7
    LEA EDI,[ESP + 0xc4]                ; 005428de
    CALL core_actor.cpp_FUN_00408b40    ; 005428e5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x130]               ; 005428ea
    ADD ESP,0x8                         ; 005428f1
    LEA EAX,[ESP + 0xbc]                ; 005428f4
    MOVSD ES:EDI,ESI                    ; 005428fb
    MOVSD ES:EDI,ESI                    ; 005428fc
    MOVSD ES:EDI,ESI                    ; 005428fd
    PUSH EAX                            ; 005428fe
    MOV ESI,dword ptr [EBP + 0x14]      ; 005428ff
    PUSH ESI                            ; 00542902
    LEA ESI,[ESP + 0xb8]                ; 00542903
    LEA EDI,[ESP + 0x124]               ; 0054290a
    CALL core_actor.cpp_FUN_00408bb0    ; 00542911
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xb8]                ; 00542916
    ADD ESP,0x8                         ; 0054291d
    MOVSD ES:EDI,ESI                    ; 00542920
    MOVSD ES:EDI,ESI                    ; 00542921
    MOVSD ES:EDI,ESI                    ; 00542922
    MOV EDI,dword ptr [0x01e7e02c]      ; 00542923 | DAT_01e7e02c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542929
    PUSH EDI                            ; 0054292c
    ADD EAX,0x158                       ; 0054292d
    PUSH EAX                            ; 00542932
    LEA ESI,[ESP + 0x148]               ; 00542933
    LEA EDI,[ESP + 0xf4]                ; 0054293a
    CALL core_skeleton.cpp_FUN_00569040 ; 00542941
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[ESP + 0x148]               ; 00542946
    ADD ESP,0x8                         ; 0054294d
    LEA EAX,[ESP + 0x104]               ; 00542950
    FLD float ptr [ESP + 0x11c]         ; 00542957
    FLD float ptr [ESP + 0x120]         ; 0054295e
    MOVSD ES:EDI,ESI                    ; 00542965
    MOVSD ES:EDI,ESI                    ; 00542966
    MOVSD ES:EDI,ESI                    ; 00542967
    FLD float ptr [ESP + 0x124]         ; 00542968
    LEA EDI,[ESP + 0x104]               ; 0054296f
    LEA ESI,[ESP + 0xe0]                ; 00542976
    FXCH ST2                            ; 0054297d
    FSUB float ptr [ESP + 0xec]         ; 0054297f
    FXCH                                ; 00542986
    FSUB float ptr [ESP + 0xf0]         ; 00542988
    FXCH ST2                            ; 0054298f
    FSUB float ptr [ESP + 0xf4]         ; 00542991
    FXCH                                ; 00542998
    FSTP float ptr [ESP + 0xe0]         ; 0054299a
    FXCH                                ; 005429a1
    FSTP float ptr [ESP + 0xe4]         ; 005429a3
    FSTP float ptr [ESP + 0xe8]         ; 005429aa
    MOVSD ES:EDI,ESI                    ; 005429b1
    MOVSD ES:EDI,ESI                    ; 005429b2
    MOVSD ES:EDI,ESI                    ; 005429b3
    PUSH EAX                            ; 005429b4
    LEA ESI,[ESP + 0x138]               ; 005429b5
    LEA EDI,[ESP + 0x150]               ; 005429bc
    CALL core_vecdir.cpp_FUN_005a7520   ; 005429c3
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x138]               ; 005429c8
    ADD ESP,0x4                         ; 005429cf
    MOVSD ES:EDI,ESI                    ; 005429d2
    MOVSD ES:EDI,ESI                    ; 005429d3
    MOVSD ES:EDI,ESI                    ; 005429d4
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005429d5
    MOV dword ptr [ESP],EAX             ; 005429dc
    MOV EAX,dword ptr [ESP + 0x150]     ; 005429df
    MOV dword ptr [ESP + 0x184],EAX     ; 005429e6
    JMP 0x0054259c                      ; 005429ed
        ;   XREF to: 0054259c (UNCONDITIONAL_JUMP)  ; LAB_0054259c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005429f2
        ;   Label: LAB_005429f2
    MOV EAX,dword ptr [EAX + 0x1ffd0]   ; 005429f5
    PUSH EAX                            ; 005429fb
    MOV EBX,dword ptr [EAX + 0x154]     ; 005429fc
    LEA ESI,[ESP + 0x84]                ; 00542a02
    LEA EDI,[ESP + 0x9c]                ; 00542a09
    CALL dword ptr [EBX + 0x1c]         ; 00542a10
    MOV ECX,0x6                         ; 00542a13
    LEA ESI,[ESP + 0x84]                ; 00542a18
    ADD ESP,0x4                         ; 00542a1f
    MOVSD.REP ES:EDI,ESI                ; 00542a22
    LEA EAX,[ESP + 0x98]                ; 00542a24
    FLD float ptr [ESP + 0x98]          ; 00542a2b
    FLD float ptr [ESP + 0x9c]          ; 00542a32
    FLD float ptr [ESP + 0xa0]          ; 00542a39
    LEA EDI,[ESP + 0x110]               ; 00542a40
    LEA ESI,[ESP + 0x158]               ; 00542a47
    FXCH ST2                            ; 00542a4e
    FADD float ptr [EAX + 0xc]          ; 00542a50
    FXCH                                ; 00542a53
    FADD float ptr [EAX + 0x10]         ; 00542a55
    FXCH ST2                            ; 00542a58
    FADD float ptr [EAX + 0x14]         ; 00542a5a
    FXCH                                ; 00542a5d
    FSTP float ptr [ESP + 0x158]        ; 00542a5f
    FXCH                                ; 00542a66
    FSTP float ptr [ESP + 0x15c]        ; 00542a68
    FSTP float ptr [ESP + 0x160]        ; 00542a6f
    MOVSD ES:EDI,ESI                    ; 00542a76
    MOVSD ES:EDI,ESI                    ; 00542a77
    MOVSD ES:EDI,ESI                    ; 00542a78
    FLD float ptr [0x005ededb]          ; 00542a79 | DAT_005ededb
    FLD float ptr [ESP + 0x110]         ; 00542a7f
    FMUL ST1                            ; 00542a86
    FLD float ptr [ESP + 0x114]         ; 00542a88
    FMUL ST2                            ; 00542a8f
    FLD float ptr [ESP + 0x118]         ; 00542a91
    FMULP ST3                           ; 00542a98
    LEA EBX,[ESP + 0xf8]                ; 00542a9a
    LEA EAX,[ESP + 0xd4]                ; 00542aa1
    LEA EDI,[ESP + 0xd4]                ; 00542aa8
    LEA ESI,[ESP + 0xc8]                ; 00542aaf
    FXCH                                ; 00542ab6
    FSTP float ptr [ESP + 0xc8]         ; 00542ab8
    FSTP float ptr [ESP + 0xcc]         ; 00542abf
    FSTP float ptr [ESP + 0xd0]         ; 00542ac6
    MOVSD ES:EDI,ESI                    ; 00542acd
    MOVSD ES:EDI,ESI                    ; 00542ace
    MOVSD ES:EDI,ESI                    ; 00542acf
    CMP EBX,EAX                         ; 00542ad0
    JZ 0x005428c5                       ; 00542ad2
        ;   XREF to: 005428c5 (CONDITIONAL_JUMP)  ; LAB_005428c5
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00542ad8
    MOV dword ptr [ESP + 0xf8],EAX      ; 00542adf
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00542ae6
    MOV dword ptr [ESP + 0xfc],EAX      ; 00542aed
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00542af4
    JMP 0x005428be                      ; 00542afb
        ;   XREF to: 005428be (UNCONDITIONAL_JUMP)  ; LAB_005428be
    FLD float ptr [EAX + 0x1ffc8]       ; 00542b00
        ;   Label: LAB_00542b00
    FSUB float ptr [ESP + 0x184]        ; 00542b06
    SUB ESP,0x4                         ; 00542b0d
    FSTP float ptr [ESP]                ; 00542b10
    CALL core_actor.cpp_FUN_0040cd60    ; 00542b13
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [ESP + 0x194],EAX     ; 00542b18
    FLD float ptr [ESP + 0x194]         ; 00542b1f
    FABS                                ; 00542b26
    ADD ESP,0x4                         ; 00542b28
    FCOMP double ptr [0x005edee7]       ; 00542b2b | DAT_005edee7
    FNSTSW AX                           ; 00542b31
    SAHF                                ; 00542b33
    JNC 0x00542b4a                      ; 00542b34
        ;   XREF to: 00542b4a (CONDITIONAL_JUMP)  ; LAB_00542b4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542b36
        ;   Label: LAB_00542b36
    MOV dword ptr [EAX + 0x1ffd4],0x1   ; 00542b39
    MOV ESP,EBP                         ; 00542b43
    POP EBP                             ; 00542b45
    POP EDI                             ; 00542b46
    POP ESI                             ; 00542b47
    POP EBX                             ; 00542b48
    RET                                 ; 00542b49
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542b4a
        ;   Label: LAB_00542b4a
    FLD float ptr [EAX + 0x1ffc8]       ; 00542b4d
    FSUB float ptr [ESP + 0x184]        ; 00542b53
    SUB ESP,0x4                         ; 00542b5a
    FSTP float ptr [ESP]                ; 00542b5d
    CALL core_actor.cpp_FUN_0040cd60    ; 00542b60
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [ESP + 0x194],EAX     ; 00542b65
    FLD float ptr [ESP + 0x194]         ; 00542b6c
    FABS                                ; 00542b73
    ADD ESP,0x4                         ; 00542b75
    FCOMP double ptr [0x005edee7]       ; 00542b78 | DAT_005edee7
    FNSTSW AX                           ; 00542b7e
    SAHF                                ; 00542b80
    JC 0x00542b36                       ; 00542b81
        ;   XREF to: 00542b36 (CONDITIONAL_JUMP)  ; LAB_00542b36
    MOV ESP,EBP                         ; 00542b83
    POP EBP                             ; 00542b85
    POP EDI                             ; 00542b86
    POP ESI                             ; 00542b87
    POP EBX                             ; 00542b88
    RET                                 ; 00542b89

