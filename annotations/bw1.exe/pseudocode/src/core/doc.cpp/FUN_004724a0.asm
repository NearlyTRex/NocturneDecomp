; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_004724a0(CDemonActor *param_1,int param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
;
; XREF[1]:
;   core_doc.cpp_FUN_00469550 at 0046a483
;
; Referenced Globals:
;   undefined4 DAT_005da2c4
;   undefined4 DAT_005da2cc
;   undefined4 DAT_005da2d4
;   undefined4 DAT_005da2dc
;   undefined4 DAT_005da2e4
;   undefined4 DAT_005da2ec
;   undefined4 DAT_005da2f4
;   undefined4 DAT_005da2fc
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_005fecd0
;   undefined4 DAT_005fecd4
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01b68824
;   undefined4 DAT_01b6884c
;   CDemonSet g_CDemonSetInstance
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230
;   core_skeleton.cpp_FUN_00569040
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_math.c_acos_FUN_005c1d04
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004724a0
        ;   Label: core_doc.cpp_FUN_004724a0
    PUSH ESI                            ; 004724a1
    PUSH EDI                            ; 004724a2
    PUSH EBP                            ; 004724a3
    MOV EBP,ESP                         ; 004724a4
    SUB ESP,0x258                       ; 004724a6
    AND ESP,0xfffffff8                  ; 004724ac
    MOV ESI,dword ptr [EBP + 0x18]      ; 004724af
    MOV EAX,dword ptr [EBP + 0x14]      ; 004724b2
    ADD EAX,0x1ffe0                     ; 004724b5
    MOV dword ptr [ESP + 0x238],EAX     ; 004724ba
    CMP ESI,0x1                         ; 004724c1
    JZ 0x004728ea                       ; 004724c4
        ;   XREF to: 004728ea (CONDITIONAL_JUMP)  ; LAB_004728ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 004724ca
        ;   Label: LAB_004724ca
    MOV EDX,dword ptr [EAX + 0x20004]   ; 004724cd
    TEST EDX,EDX                        ; 004724d3
    JNZ 0x00472919                      ; 004724d5
        ;   XREF to: 00472919 (CONDITIONAL_JUMP)  ; LAB_00472919
    MOV EAX,dword ptr [ESP + 0x238]     ; 004724db
    MOV dword ptr [EAX + 0xc],EDX       ; 004724e2
    MOV dword ptr [EAX + 0x4],EDX       ; 004724e5
    LEA EAX,[ESI*0x8 + 0x0]             ; 004724e8
    MOV EBX,EAX                         ; 004724ef
    SHL EAX,0x4                         ; 004724f1
    MOV ECX,dword ptr [EBP + 0x14]      ; 004724f4
    SUB EAX,EBX                         ; 004724f7
    ADD EAX,ECX                         ; 004724f9
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 004724fb
    TEST EBX,EBX                        ; 00472501
    JZ 0x00472514                       ; 00472503
        ;   XREF to: 00472514 (CONDITIONAL_JUMP)  ; LAB_00472514
    PUSH EBX                            ; 00472505
    MOV EDX,dword ptr [EBX + 0x154]     ; 00472506
    CALL dword ptr [EDX + 0x74]         ; 0047250c
    ADD ESP,0x4                         ; 0047250f
    MOV EDX,EAX                         ; 00472512
    TEST DL,0x4                         ; 00472514
        ;   Label: LAB_00472514
    JZ 0x004728fe                       ; 00472517
        ;   XREF to: 004728fe (CONDITIONAL_JUMP)  ; LAB_004728fe
    MOV EBX,0x3                         ; 0047251d
    TEST ESI,ESI                        ; 00472522
        ;   Label: LAB_00472522
    JZ 0x00472924                       ; 00472524
        ;   XREF to: 00472924 (CONDITIONAL_JUMP)  ; LAB_00472924
    MOV EAX,[0x01b68824]                ; 0047252a | DAT_01b68824
    MOV dword ptr [ESP + 0x204],EAX     ; 0047252f
    MOV EAX,[0x01b6884c]                ; 00472536 | DAT_01b6884c
    MOV dword ptr [ESP + 0x200],EAX     ; 0047253b
    TEST EBX,EBX                        ; 00472542
    JNZ 0x00472937                      ; 00472544
        ;   XREF to: 00472937 (CONDITIONAL_JUMP)  ; LAB_00472937
    MOV EDX,0x3fa78d36                  ; 0047254a
        ;   Label: LAB_0047254a
    MOV EAX,0xbf060a92                  ; 0047254f
    MOV dword ptr [ESP + 0x22c],EDX     ; 00472554
    MOV dword ptr [ESP + 0x230],EAX     ; 0047255b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472562
        ;   Label: LAB_00472562
    FLD float ptr [EAX + 0xc204]        ; 00472565
    FMUL float ptr [0x005da2c4]         ; 0047256b | DAT_005da2c4
    FMUL double ptr [0x005da2cc]        ; 00472571 | DAT_005da2cc
    FMUL float ptr [EBP + 0x1c]         ; 00472577
    MOV EAX,dword ptr [ESP + 0x238]     ; 0047257a
    FLD float ptr [EAX]                 ; 00472581
    FXCH                                ; 00472583
    FADD ST0,ST1                        ; 00472585
    MOV dword ptr [EAX + 0x4],0x0       ; 00472587
    FSTP ST1                            ; 0047258e
    FST float ptr [EAX]                 ; 00472590
    FCOMP float ptr [0x005fecd0]        ; 00472592 | DAT_005fecd0
    FNSTSW AX                           ; 00472598
    SAHF                                ; 0047259a
    JNC 0x004725ac                      ; 0047259b
        ;   XREF to: 004725ac (CONDITIONAL_JUMP)  ; LAB_004725ac
    MOV EAX,dword ptr [ESP + 0x238]     ; 0047259d
    MOV EDX,dword ptr [0x005fecd0]      ; 004725a4 | DAT_005fecd0
    MOV dword ptr [EAX],EDX             ; 004725aa
    MOV EAX,dword ptr [ESP + 0x238]     ; 004725ac
        ;   Label: LAB_004725ac
    FLD float ptr [EAX]                 ; 004725b3
    FCOMP float ptr [0x005fecd4]        ; 004725b5 | DAT_005fecd4
    FNSTSW AX                           ; 004725bb
    SAHF                                ; 004725bd
    JBE 0x004725cf                      ; 004725be
        ;   XREF to: 004725cf (CONDITIONAL_JUMP)  ; LAB_004725cf
    MOV EAX,dword ptr [ESP + 0x238]     ; 004725c0
    MOV EDX,dword ptr [0x005fecd4]      ; 004725c7 | DAT_005fecd4
    MOV dword ptr [EAX],EDX             ; 004725cd
    MOV EAX,dword ptr [ESP + 0x238]     ; 004725cf
        ;   Label: LAB_004725cf
    FLD float ptr [EAX + 0xc]           ; 004725d6
    FCOMP float ptr [ESP + 0x230]       ; 004725d9
    FNSTSW AX                           ; 004725e0
    SAHF                                ; 004725e2
    JNC 0x004725f6                      ; 004725e3
        ;   XREF to: 004725f6 (CONDITIONAL_JUMP)  ; LAB_004725f6
    MOV EDX,dword ptr [ESP + 0x238]     ; 004725e5
    MOV EAX,dword ptr [ESP + 0x230]     ; 004725ec
    MOV dword ptr [EDX + 0xc],EAX       ; 004725f3
    MOV EAX,dword ptr [ESP + 0x238]     ; 004725f6
        ;   Label: LAB_004725f6
    FLD float ptr [EAX + 0xc]           ; 004725fd
    FCOMP float ptr [ESP + 0x22c]       ; 00472600
    FNSTSW AX                           ; 00472607
    SAHF                                ; 00472609
    JBE 0x0047261d                      ; 0047260a
        ;   XREF to: 0047261d (CONDITIONAL_JUMP)  ; LAB_0047261d
    MOV EDX,dword ptr [ESP + 0x238]     ; 0047260c
    MOV EAX,dword ptr [ESP + 0x22c]     ; 00472613
    MOV dword ptr [EDX + 0xc],EAX       ; 0047261a
    MOV EAX,dword ptr [ESP + 0x238]     ; 0047261d
        ;   Label: LAB_0047261d
    FLD float ptr [EAX + 0x4]           ; 00472624
    FCOMP float ptr [ESP + 0x230]       ; 00472627
    FNSTSW AX                           ; 0047262e
    SAHF                                ; 00472630
    JNC 0x00472644                      ; 00472631
        ;   XREF to: 00472644 (CONDITIONAL_JUMP)  ; LAB_00472644
    MOV EDX,dword ptr [ESP + 0x238]     ; 00472633
    MOV EAX,dword ptr [ESP + 0x230]     ; 0047263a
    MOV dword ptr [EDX + 0x4],EAX       ; 00472641
    MOV EAX,dword ptr [ESP + 0x238]     ; 00472644
        ;   Label: LAB_00472644
    FLD float ptr [EAX + 0x4]           ; 0047264b
    FCOMP float ptr [ESP + 0x22c]       ; 0047264e
    FNSTSW AX                           ; 00472655
    SAHF                                ; 00472657
    JBE 0x0047266b                      ; 00472658
        ;   XREF to: 0047266b (CONDITIONAL_JUMP)  ; LAB_0047266b
    MOV EDX,dword ptr [ESP + 0x238]     ; 0047265a
    MOV EAX,dword ptr [ESP + 0x22c]     ; 00472661
    MOV dword ptr [EDX + 0x4],EAX       ; 00472668
    MOV EAX,dword ptr [ESP + 0x238]     ; 0047266b
        ;   Label: LAB_0047266b
    MOV dword ptr [EAX + 0x1c],0x0      ; 00472672
    MOV EAX,dword ptr [EAX + 0x4]       ; 00472679
    MOV dword ptr [ESP + 0x228],EAX     ; 0047267c
    MOV EAX,dword ptr [ESP + 0x238]     ; 00472683
    MOV EAX,dword ptr [EAX]             ; 0047268a
    MOV dword ptr [ESP + 0x224],EAX     ; 0047268c
    CMP EBX,0x3                         ; 00472693
    JZ 0x00472ee1                       ; 00472696
        ;   XREF to: 00472ee1 (CONDITIONAL_JUMP)  ; LAB_00472ee1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047269c
    MOV ECX,dword ptr [EAX + 0x1fae4]   ; 0047269f
    TEST ECX,ECX                        ; 004726a5
    JNZ 0x00472ee1                      ; 004726a7
        ;   XREF to: 00472ee1 (CONDITIONAL_JUMP)  ; LAB_00472ee1
    MOV dword ptr [ESP + 0xec],ECX      ; 004726ad
    MOV dword ptr [ESP + 0xf0],ECX      ; 004726b4
    MOV dword ptr [ESP + 0xe8],ECX      ; 004726bb
    MOV EDX,dword ptr [EAX + 0x20004]   ; 004726c2
    TEST EDX,EDX                        ; 004726c8
    JZ 0x00472732                       ; 004726ca
        ;   XREF to: 00472732 (CONDITIONAL_JUMP)  ; LAB_00472732
    MOV EAX,EDX                         ; 004726cc
    PUSH EAX                            ; 004726ce
    MOV EDX,dword ptr [EDX + 0x154]     ; 004726cf
    LEA ESI,[ESP + 0x104]               ; 004726d5
    LEA EDI,[ESP + 0x170]               ; 004726dc
    CALL dword ptr [EDX + 0xe0]         ; 004726e3
    LEA ESI,[ESP + 0x104]               ; 004726e9
    LEA EAX,[ESP + 0x170]               ; 004726f0
    ADD ESP,0x4                         ; 004726f7
    LEA EDX,[ESP + 0xe8]                ; 004726fa
    MOVSD ES:EDI,ESI                    ; 00472701
    MOVSD ES:EDI,ESI                    ; 00472702
    MOVSD ES:EDI,ESI                    ; 00472703
    CMP EDX,EAX                         ; 00472704
    JZ 0x00472732                       ; 00472706
        ;   XREF to: 00472732 (CONDITIONAL_JUMP)  ; LAB_00472732
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00472708
    MOV dword ptr [ESP + 0xe8],EAX      ; 0047270f
    MOV EAX,dword ptr [ESP + 0x170]     ; 00472716
    MOV dword ptr [ESP + 0xec],EAX      ; 0047271d
    MOV EAX,dword ptr [ESP + 0x174]     ; 00472724
    MOV dword ptr [ESP + 0xf0],EAX      ; 0047272b
    TEST EBX,EBX                        ; 00472732
        ;   Label: LAB_00472732
    JNZ 0x0047295d                      ; 00472734
        ;   XREF to: 0047295d (CONDITIONAL_JUMP)  ; LAB_0047295d
    MOV EBX,dword ptr [ESP + 0x204]     ; 0047273a
        ;   Label: LAB_0047273a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472741
    PUSH EBX                            ; 00472744
    ADD EAX,0x158                       ; 00472745
    PUSH EAX                            ; 0047274a
    LEA ESI,[ESP + 0x150]               ; 0047274b
    LEA EDI,[ESP + 0x12c]               ; 00472752
    CALL core_skeleton.cpp_FUN_00569040 ; 00472759
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[ESP + 0x150]               ; 0047275e
    LEA EAX,[ESP + 0x12c]               ; 00472765
    ADD ESP,0x8                         ; 0047276c
    LEA EDX,[ESP + 0x19c]               ; 0047276f
    MOVSD ES:EDI,ESI                    ; 00472776
    MOVSD ES:EDI,ESI                    ; 00472777
    MOVSD ES:EDI,ESI                    ; 00472778
    CMP EDX,EAX                         ; 00472779
    JNZ 0x004729dc                      ; 0047277b
        ;   XREF to: 004729dc (CONDITIONAL_JUMP)  ; LAB_004729dc
    LEA EAX,[ESP + 0x19c]               ; 00472781
        ;   Label: LAB_00472781
    PUSH EAX                            ; 00472788
    MOV ESI,dword ptr [EBP + 0x14]      ; 00472789
    PUSH ESI                            ; 0047278c
    LEA ESI,[ESP + 0x114]               ; 0047278d
    LEA EDI,[ESP + 0x168]               ; 00472794
    CALL core_actor.cpp_FUN_00408b40    ; 0047279b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004727a0
    LEA ESI,[ESP + 0x10c]               ; 004727a3
    MOV EAX,dword ptr [ESP + 0x238]     ; 004727aa
    MOVSD ES:EDI,ESI                    ; 004727b1
    MOVSD ES:EDI,ESI                    ; 004727b2
    MOVSD ES:EDI,ESI                    ; 004727b3
    MOV EAX,dword ptr [EAX]             ; 004727b4
    XOR EDI,EDI                         ; 004727b6
    MOV dword ptr [ESP + 0xdc],EAX      ; 004727b8
    MOV EAX,dword ptr [ESP + 0x238]     ; 004727bf
    MOV dword ptr [ESP + 0xe4],EDI      ; 004727c6
    MOV EAX,dword ptr [EAX + 0x4]       ; 004727cd
    MOV dword ptr [ESP + 0xe0],EAX      ; 004727d0
    LEA EAX,[ESP + 0xdc]                ; 004727d7
    PUSH EAX                            ; 004727de
    LEA EAX,[ESP + 0xb8]                ; 004727df
    PUSH EAX                            ; 004727e6
    LEA ESI,[ESP + 0x198]               ; 004727e7
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 004727ee
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV ECX,0x3f800000                  ; 004727f3
    ADD ESP,0x8                         ; 004727f8
    LEA EAX,[ESP + 0x1b4]               ; 004727fb
    MOV dword ptr [ESP + 0x1b4],EDI     ; 00472802
    PUSH EAX                            ; 00472809
    LEA EAX,[ESP + 0xb8]                ; 0047280a
    MOV dword ptr [ESP + 0x1bc],EDI     ; 00472811
    PUSH EAX                            ; 00472818
    MOV dword ptr [ESP + 0x1c4],ECX     ; 00472819
    LEA EDI,[ESP + 0x1ec]               ; 00472820
    CALL core_dirmat.cpp_FUN_0045f690   ; 00472827
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x198]               ; 0047282c
    ADD ESP,0x8                         ; 00472833
    MOVSD ES:EDI,ESI                    ; 00472836
    MOVSD ES:EDI,ESI                    ; 00472837
    MOVSD ES:EDI,ESI                    ; 00472838
    MOV EBX,0x7149f2ca                  ; 00472839
    XOR ESI,ESI                         ; 0047283e
    MOV dword ptr [ESP + 0x23c],EBX     ; 00472840
    MOV dword ptr [ESP + 0x220],ESI     ; 00472847
    MOV dword ptr [ESP + 0x21c],ESI     ; 0047284e
    MOV EAX,[0x00622c18]                ; 00472855 | g_CDemonSetPtr
        ;   Label: LAB_00472855
    MOV EDX,dword ptr [ESP + 0x220]     ; 0047285a
    CMP EDX,dword ptr [EAX + 0x152f30]  ; 00472861 | g_CDemonSetInstance.threat_count
    JGE 0x00472ef2                      ; 00472867
        ;   XREF to: 00472ef2 (CONDITIONAL_JUMP)  ; LAB_00472ef2
    ADD EAX,dword ptr [ESP + 0x21c]     ; 0047286d
    PUSH 0x5fb430                       ; 00472874 | g_CVectorTypeInfo
    MOV EAX,dword ptr [EAX + 0x152f34]  ; 00472879
    PUSH 0xa                            ; 0047287f
    MOV dword ptr [ESP + 0x248],EAX     ; 00472881
    LEA EAX,[ESP + 0x44]                ; 00472888
    PUSH EAX                            ; 0047288c
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0047288d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00472892
    LEA EAX,[ESP + 0x3c]                ; 00472895
    PUSH EAX                            ; 00472899
    MOV ESI,dword ptr [ESP + 0x244]     ; 0047289a
    MOV EBX,dword ptr [ESP + 0x244]     ; 004728a1
    PUSH ESI                            ; 004728a8
    MOV EBX,dword ptr [EBX + 0x154]     ; 004728a9
    CALL dword ptr [EBX + 0x54]         ; 004728af
    ADD ESP,0x8                         ; 004728b2
    MOV dword ptr [ESP + 0x234],EAX     ; 004728b5
    CMP EAX,0x1                         ; 004728bc
    JGE 0x00472a0b                      ; 004728bf
        ;   XREF to: 00472a0b (CONDITIONAL_JUMP)  ; LAB_00472a0b
    MOV EDX,dword ptr [ESP + 0x220]     ; 004728c5
        ;   Label: LAB_004728c5
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004728cc
    INC EDX                             ; 004728d3
    ADD EAX,0x4                         ; 004728d4
    MOV dword ptr [ESP + 0x220],EDX     ; 004728d7
    MOV dword ptr [ESP + 0x21c],EAX     ; 004728de
    JMP 0x00472855                      ; 004728e5
        ;   XREF to: 00472855 (UNCONDITIONAL_JUMP)  ; LAB_00472855
    MOV EAX,dword ptr [EBP + 0x14]      ; 004728ea
        ;   Label: LAB_004728ea
    ADD EAX,0x1ffc0                     ; 004728ed
    MOV dword ptr [ESP + 0x238],EAX     ; 004728f2
    JMP 0x004724ca                      ; 004728f9
        ;   XREF to: 004724ca (UNCONDITIONAL_JUMP)  ; LAB_004724ca
    MOV EAX,dword ptr [ESP + 0x238]     ; 004728fe
        ;   Label: LAB_004728fe
    MOV dword ptr [EAX + 0x8],0x0       ; 00472905
    MOV dword ptr [EAX],0x0             ; 0047290c
    MOV ESP,EBP                         ; 00472912
        ;   Label: LAB_00472912
    POP EBP                             ; 00472914
    POP EDI                             ; 00472915
    POP ESI                             ; 00472916
    POP EBX                             ; 00472917
    RET                                 ; 00472918
    MOV EBX,dword ptr [EDX + 0x2e0]     ; 00472919
        ;   Label: LAB_00472919
    JMP 0x00472522                      ; 0047291f
        ;   XREF to: 00472522 (UNCONDITIONAL_JUMP)  ; LAB_00472522
    MOV EAX,dword ptr [ESP + 0x238]     ; 00472924
        ;   Label: LAB_00472924
    MOV dword ptr [EAX + 0x8],ESI       ; 0047292b
    MOV dword ptr [EAX],ESI             ; 0047292e
    MOV ESP,EBP                         ; 00472930
    POP EBP                             ; 00472932
    POP EDI                             ; 00472933
    POP ESI                             ; 00472934
    POP EBX                             ; 00472935
    RET                                 ; 00472936
    CMP EBX,0x5                         ; 00472937
        ;   Label: LAB_00472937
    JZ 0x0047254a                       ; 0047293a
        ;   XREF to: 0047254a (CONDITIONAL_JUMP)  ; LAB_0047254a
    MOV EDI,0x3f060a92                  ; 00472940
    MOV ESI,0xbf060a92                  ; 00472945
    MOV dword ptr [ESP + 0x22c],EDI     ; 0047294a
    MOV dword ptr [ESP + 0x230],ESI     ; 00472951
    JMP 0x00472562                      ; 00472958
        ;   XREF to: 00472562 (UNCONDITIONAL_JUMP)  ; LAB_00472562
    CMP EBX,0x5                         ; 0047295d
        ;   Label: LAB_0047295d
    JZ 0x0047273a                       ; 00472960
        ;   XREF to: 0047273a (CONDITIONAL_JUMP)  ; LAB_0047273a
    MOV ECX,dword ptr [ESP + 0x200]     ; 00472966
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047296d
    PUSH ECX                            ; 00472970
    ADD EAX,0x158                       ; 00472971
    PUSH EAX                            ; 00472976
    LEA ESI,[ESP + 0x18c]               ; 00472977
    LEA EDI,[ESP + 0x144]               ; 0047297e
    CALL core_skeleton.cpp_FUN_00569040 ; 00472985
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[ESP + 0x18c]               ; 0047298a
    LEA EDX,[ESP + 0x144]               ; 00472991
    ADD ESP,0x8                         ; 00472998
    LEA EAX,[ESP + 0x19c]               ; 0047299b
    MOVSD ES:EDI,ESI                    ; 004729a2
    MOVSD ES:EDI,ESI                    ; 004729a3
    MOVSD ES:EDI,ESI                    ; 004729a4
    CMP EAX,EDX                         ; 004729a5
    JZ 0x00472781                       ; 004729a7
        ;   XREF to: 00472781 (CONDITIONAL_JUMP)  ; LAB_00472781
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004729ad
    MOV dword ptr [ESP + 0x19c],EAX     ; 004729b4
    MOV EAX,dword ptr [ESP + 0x140]     ; 004729bb
    MOV dword ptr [ESP + 0x1a0],EAX     ; 004729c2
    MOV EAX,dword ptr [ESP + 0x144]     ; 004729c9
    MOV dword ptr [ESP + 0x1a4],EAX     ; 004729d0
    JMP 0x00472781                      ; 004729d7
        ;   XREF to: 00472781 (UNCONDITIONAL_JUMP)  ; LAB_00472781
    MOV EAX,dword ptr [ESP + 0x124]     ; 004729dc
        ;   Label: LAB_004729dc
    MOV dword ptr [ESP + 0x19c],EAX     ; 004729e3
    MOV EAX,dword ptr [ESP + 0x128]     ; 004729ea
    MOV dword ptr [ESP + 0x1a0],EAX     ; 004729f1
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004729f8
    MOV dword ptr [ESP + 0x1a4],EAX     ; 004729ff
    JMP 0x00472781                      ; 00472a06
        ;   XREF to: 00472781 (UNCONDITIONAL_JUMP)  ; LAB_00472781
    XOR EBX,EBX                         ; 00472a0b
        ;   Label: LAB_00472a0b
    TEST EAX,EAX                        ; 00472a0d
    JLE 0x004728c5                      ; 00472a0f
        ;   XREF to: 004728c5 (CONDITIONAL_JUMP)  ; LAB_004728c5
    LEA EAX,[ESP + 0x3c]                ; 00472a15
    MOV dword ptr [ESP + 0x24c],EAX     ; 00472a19
    MOV EDX,dword ptr [ESP + 0x24c]     ; 00472a20
        ;   Label: LAB_00472a20
    PUSH EDX                            ; 00472a27
    MOV ECX,dword ptr [ESP + 0x244]     ; 00472a28
    PUSH ECX                            ; 00472a2f
    LEA ESI,[ESP + 0x138]               ; 00472a30
    LEA EDI,[ESP + 0xfc]                ; 00472a37
    CALL core_actor.cpp_FUN_00408b40    ; 00472a3e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x138]               ; 00472a43
    ADD ESP,0x8                         ; 00472a4a
    LEA EAX,[ESP + 0xf4]                ; 00472a4d
    MOVSD ES:EDI,ESI                    ; 00472a54
    MOVSD ES:EDI,ESI                    ; 00472a55
    MOVSD ES:EDI,ESI                    ; 00472a56
    PUSH EAX                            ; 00472a57
    MOV ESI,dword ptr [EBP + 0x14]      ; 00472a58
    PUSH ESI                            ; 00472a5b
    LEA ESI,[ESP + 0x120]               ; 00472a5c
    LEA EDI,[ESP + 0x180]               ; 00472a63
    CALL core_actor.cpp_FUN_00408bb0    ; 00472a6a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x120]               ; 00472a6f
    ADD ESP,0x8                         ; 00472a76
    MOVSD ES:EDI,ESI                    ; 00472a79
    MOVSD ES:EDI,ESI                    ; 00472a7a
    MOVSD ES:EDI,ESI                    ; 00472a7b
    FLD float ptr [ESP + 0x178]         ; 00472a7c
    FLD float ptr [ESP + 0x17c]         ; 00472a83
    FLD float ptr [ESP + 0x180]         ; 00472a8a
    LEA EDI,[ESP + 0x154]               ; 00472a91
    LEA ESI,[ESP + 0x1a8]               ; 00472a98
    FXCH ST2                            ; 00472a9f
    FSUB float ptr [ESP + 0x19c]        ; 00472aa1
    FXCH                                ; 00472aa8
    FSUB float ptr [ESP + 0x1a0]        ; 00472aaa
    FXCH ST2                            ; 00472ab1
    FSUB float ptr [ESP + 0x1a4]        ; 00472ab3
    FXCH                                ; 00472aba
    FSTP float ptr [ESP + 0x1a8]        ; 00472abc
    FXCH                                ; 00472ac3
    FSTP float ptr [ESP + 0x1ac]        ; 00472ac5
    FSTP float ptr [ESP + 0x1b0]        ; 00472acc
    MOVSD ES:EDI,ESI                    ; 00472ad3
    MOVSD ES:EDI,ESI                    ; 00472ad4
    MOVSD ES:EDI,ESI                    ; 00472ad5
    FLDZ                                ; 00472ad6
    FLD float ptr [ESP + 0x15c]         ; 00472ad8
    FSTP double ptr [ESP + 0x20]        ; 00472adf
    FCOMP double ptr [ESP + 0x20]       ; 00472ae3
    FNSTSW AX                           ; 00472ae7
    SAHF                                ; 00472ae9
    JC 0x00472b12                       ; 00472aea
        ;   XREF to: 00472b12 (CONDITIONAL_JUMP)  ; LAB_00472b12
    MOV EDI,dword ptr [ESP + 0x24c]     ; 00472aec
        ;   Label: LAB_00472aec
    MOV EAX,dword ptr [ESP + 0x234]     ; 00472af3
    ADD EDI,0xc                         ; 00472afa
    INC EBX                             ; 00472afd
    MOV dword ptr [ESP + 0x24c],EDI     ; 00472afe
    CMP EBX,EAX                         ; 00472b05
    JGE 0x004728c5                      ; 00472b07
        ;   XREF to: 004728c5 (CONDITIONAL_JUMP)  ; LAB_004728c5
    JMP 0x00472a20                      ; 00472b0d
        ;   XREF to: 00472a20 (UNCONDITIONAL_JUMP)  ; LAB_00472a20
    FLD double ptr [ESP + 0x20]         ; 00472b12
        ;   Label: LAB_00472b12
    FCOMP double ptr [0x005da2f4]       ; 00472b16 | DAT_005da2f4
    FNSTSW AX                           ; 00472b1c
    SAHF                                ; 00472b1e
    JA 0x00472aec                       ; 00472b1f
        ;   XREF to: 00472aec (CONDITIONAL_JUMP)  ; LAB_00472aec
    LEA EAX,[ESP + 0x154]               ; 00472b21
    PUSH EAX                            ; 00472b28
    LEA ESI,[ESP + 0x1c4]               ; 00472b29
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00472b30
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 00472b35
    FLD float ptr [ESP + 0x158]         ; 00472b38
    FMUL ST0                            ; 00472b3f
    FLD float ptr [ESP + 0x154]         ; 00472b41
    FMUL ST0                            ; 00472b48
    FADDP                               ; 00472b4a
    FLD float ptr [ESP + 0x15c]         ; 00472b4c
    FMUL ST0                            ; 00472b53
    FADDP                               ; 00472b55
    FSQRT                               ; 00472b57
    LEA EDI,[ESP + 0x1cc]               ; 00472b59
    LEA ESI,[ESP + 0x1c0]               ; 00472b60
    MOVSD ES:EDI,ESI                    ; 00472b67
    MOVSD ES:EDI,ESI                    ; 00472b68
    MOVSD ES:EDI,ESI                    ; 00472b69
    FST float ptr [ESP + 0x28]          ; 00472b6a
    MOV EAX,dword ptr [ESP + 0x28]      ; 00472b6e
    FST double ptr [ESP + 0x18]         ; 00472b72
    MOV dword ptr [ESP + 0x30],EAX      ; 00472b76
    FCOMP double ptr [0x005da2ec]       ; 00472b7a | DAT_005da2ec
    FNSTSW AX                           ; 00472b80
    SAHF                                ; 00472b82
    JBE 0x00472bb1                      ; 00472b83
        ;   XREF to: 00472bb1 (CONDITIONAL_JUMP)  ; LAB_00472bb1
    FLD float ptr [ESP + 0xe8]          ; 00472b85
    FCHS                                ; 00472b8c
    FSTP float ptr [ESP + 0x250]        ; 00472b8e
    JNC 0x00472d90                      ; 00472b95
        ;   XREF to: 00472d90 (CONDITIONAL_JUMP)  ; LAB_00472d90
    FLD float ptr [ESP + 0x30]          ; 00472b9b
        ;   Label: LAB_00472b9b
    FST double ptr [ESP]                ; 00472b9f
    FCOMP double ptr [0x005da2ec]       ; 00472ba2 | DAT_005da2ec
    FNSTSW AX                           ; 00472ba8
    SAHF                                ; 00472baa
    JNC 0x00472e39                      ; 00472bab
        ;   XREF to: 00472e39 (CONDITIONAL_JUMP)  ; LAB_00472e39
    LEA EDI,[ESP + 0x1d8]               ; 00472bb1
        ;   Label: LAB_00472bb1
    LEA ESI,[ESP + 0x1cc]               ; 00472bb8
    MOVSD ES:EDI,ESI                    ; 00472bbf
    MOVSD ES:EDI,ESI                    ; 00472bc0
    MOVSD ES:EDI,ESI                    ; 00472bc1
    MOV EDI,0x3f060a92                  ; 00472bc2
    FLD float ptr [ESP + 0x15c]         ; 00472bc7
    MOV dword ptr [ESP + 0x2c],EDI      ; 00472bce
    FCOMP double ptr [0x005da2fc]       ; 00472bd2 | DAT_005da2fc
    FNSTSW AX                           ; 00472bd8
    SAHF                                ; 00472bda
    JNC 0x00472be5                      ; 00472bdb
        ;   XREF to: 00472be5 (CONDITIONAL_JUMP)  ; LAB_00472be5
    MOV dword ptr [ESP + 0x2c],0x3fc90fdb ; 00472bdd
    FLD float ptr [ESP + 0x1d8]         ; 00472be5
        ;   Label: LAB_00472be5
    FABS                                ; 00472bec
    FLD float ptr [ESP + 0x2c]          ; 00472bee
    FCOMPP                              ; 00472bf2
    FNSTSW AX                           ; 00472bf4
    SAHF                                ; 00472bf6
    JC 0x00472aec                       ; 00472bf7
        ;   XREF to: 00472aec (CONDITIONAL_JUMP)  ; LAB_00472aec
    FLD float ptr [ESP + 0x1dc]         ; 00472bfd
    FCOMP float ptr [ESP + 0x230]       ; 00472c04
    FNSTSW AX                           ; 00472c0b
    SAHF                                ; 00472c0d
    JC 0x00472aec                       ; 00472c0e
        ;   XREF to: 00472aec (CONDITIONAL_JUMP)  ; LAB_00472aec
    FLD float ptr [ESP + 0x1dc]         ; 00472c14
    FCOMP float ptr [ESP + 0x22c]       ; 00472c1b
    FNSTSW AX                           ; 00472c22
    SAHF                                ; 00472c24
    JA 0x00472aec                       ; 00472c25
        ;   XREF to: 00472aec (CONDITIONAL_JUMP)  ; LAB_00472aec
    FLD float ptr [ESP + 0x158]         ; 00472c2b
    FMUL ST0                            ; 00472c32
    FLD float ptr [ESP + 0x154]         ; 00472c34
    FMUL ST0                            ; 00472c3b
    FADDP                               ; 00472c3d
    FLD float ptr [ESP + 0x15c]         ; 00472c3f
    FMUL ST0                            ; 00472c46
    FADDP                               ; 00472c48
    FSQRT                               ; 00472c4a
    FLD1                                ; 00472c4c
    FLD float ptr [ESP + 0x158]         ; 00472c4e
    FXCH                                ; 00472c55
    FDIV ST0,ST2                        ; 00472c57
    FXCH                                ; 00472c59
    FMUL ST1                            ; 00472c5b
    FLD float ptr [ESP + 0x154]         ; 00472c5d
    FMUL ST2                            ; 00472c64
    FXCH                                ; 00472c66
    FST float ptr [ESP + 0x158]         ; 00472c68
    FMUL float ptr [ESP + 0x1e8]        ; 00472c6f
    FXCH                                ; 00472c76
    FST float ptr [ESP + 0x154]         ; 00472c78
    FMUL float ptr [ESP + 0x1e4]        ; 00472c7f
    FLD float ptr [ESP + 0x15c]         ; 00472c86
    FMULP ST3                           ; 00472c8d
    FADDP                               ; 00472c8f
    FXCH                                ; 00472c91
    FST float ptr [ESP + 0x15c]         ; 00472c93
    FMUL float ptr [ESP + 0x1ec]        ; 00472c9a
    FADDP                               ; 00472ca1
    FSUBR double ptr [0x005da2cc]       ; 00472ca3 | DAT_005da2cc
    FXCH                                ; 00472ca9
    FMUL double ptr [0x005da2d4]        ; 00472cab | DAT_005da2d4
    FADDP                               ; 00472cb1
    FST float ptr [ESP + 0x38]          ; 00472cb3
    FCOMP float ptr [ESP + 0x23c]       ; 00472cb7
    FNSTSW AX                           ; 00472cbe
    SAHF                                ; 00472cc0
    JNC 0x00472aec                      ; 00472cc1
        ;   XREF to: 00472aec (CONDITIONAL_JUMP)  ; LAB_00472aec
    MOV EDX,dword ptr [0x00622c18]      ; 00472cc7 | g_CDemonSetPtr
    PUSH EDX                            ; 00472ccd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00472cce
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00472cd3
    PUSH 0x2                            ; 00472cd6
    MOV ECX,dword ptr [0x00622c18]      ; 00472cd8 | g_CDemonSetPtr
    PUSH ECX                            ; 00472cde | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 00472cdf
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00472ce4
    MOV ESI,dword ptr [EBP + 0x14]      ; 00472ce7
    PUSH ESI                            ; 00472cea
    MOV EDI,dword ptr [0x00622c18]      ; 00472ceb | g_CDemonSetPtr
    PUSH EDI                            ; 00472cf1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00472cf2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00472cf7
    MOV EAX,dword ptr [ESP + 0x240]     ; 00472cfa
    PUSH EAX                            ; 00472d01
    MOV EDX,dword ptr [0x00622c18]      ; 00472d02 | g_CDemonSetPtr
    PUSH EDX                            ; 00472d08 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00472d09
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00472d0e
    LEA EAX,[ESP + 0xf4]                ; 00472d11
    PUSH EAX                            ; 00472d18
    LEA EAX,[ESP + 0x164]               ; 00472d19
    PUSH EAX                            ; 00472d20
    MOV ECX,dword ptr [0x00622c18]      ; 00472d21 | g_CDemonSetPtr
    PUSH ECX                            ; 00472d27 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 ; 00472d28
        ;   XREF to: 00557230 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 00472d2d
    MOV EDI,dword ptr [0x00622c18]      ; 00472d30 | g_CDemonSetPtr
    PUSH EDI                            ; 00472d36 | g_CDemonSetInstance
    MOV ESI,EAX                         ; 00472d37
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00472d39
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00472d3e
    TEST ESI,ESI                        ; 00472d41
    JNZ 0x00472aec                      ; 00472d43
        ;   XREF to: 00472aec (CONDITIONAL_JUMP)  ; LAB_00472aec
    MOV EAX,dword ptr [ESP + 0x38]      ; 00472d49
    MOV dword ptr [ESP + 0x23c],EAX     ; 00472d4d
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00472d54
    MOV dword ptr [ESP + 0x228],EAX     ; 00472d5b
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00472d62
    MOV dword ptr [ESP + 0x224],EAX     ; 00472d69
    MOV EAX,dword ptr [ESP + 0x238]     ; 00472d70
    MOV dword ptr [EAX + 0x1c],0x1      ; 00472d77
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472d7e
    MOV dword ptr [EAX + 0x20020],0x40000000 ; 00472d81
    JMP 0x00472aec                      ; 00472d8b
        ;   XREF to: 00472aec (UNCONDITIONAL_JUMP)  ; LAB_00472aec
    FLD float ptr [ESP + 0x28]          ; 00472d90
        ;   Label: LAB_00472d90
    FMUL ST0                            ; 00472d94
    FLD float ptr [ESP + 0x250]         ; 00472d96
    FMUL ST0                            ; 00472d9d
    FSUBP                               ; 00472d9f
    FSQRT                               ; 00472da1
    FDIV double ptr [ESP + 0x18]        ; 00472da3
    FLD1                                ; 00472da7
    FXCH                                ; 00472da9
    FSTP double ptr [ESP + 0x10]        ; 00472dab
    FCOMP double ptr [ESP + 0x10]       ; 00472daf
    FNSTSW AX                           ; 00472db3
    SAHF                                ; 00472db5
    JBE 0x00472b9b                      ; 00472db6
        ;   XREF to: 00472b9b (CONDITIONAL_JUMP)  ; LAB_00472b9b
    FLDZ                                ; 00472dbc
    FCOMP double ptr [ESP + 0x10]       ; 00472dbe
    FNSTSW AX                           ; 00472dc2
    SAHF                                ; 00472dc4
    JA 0x00472b9b                       ; 00472dc5
        ;   XREF to: 00472b9b (CONDITIONAL_JUMP)  ; LAB_00472b9b
    FLD double ptr [ESP + 0x10]         ; 00472dcb
    CALL crt_math.c_acos_FUN_005c1d04   ; 00472dcf
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 00472dd4
    FXCH                                ; 00472dd6
    FSTP float ptr [ESP + 0x248]        ; 00472dd8
    FCOMP float ptr [ESP + 0x250]       ; 00472ddf
    FNSTSW AX                           ; 00472de6
    SAHF                                ; 00472de8
    JBE 0x00472e29                      ; 00472de9
        ;   XREF to: 00472e29 (CONDITIONAL_JUMP)  ; LAB_00472e29
    FLD float ptr [ESP + 0x1d0]         ; 00472deb
    FSUB float ptr [ESP + 0x248]        ; 00472df2
    FSTP float ptr [ESP + 0x1d0]        ; 00472df9
        ;   Label: LAB_00472df9
    PUSH dword ptr [ESP + 0x1d0]        ; 00472e00
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00472e07
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 00472e0c
    FLD float ptr [ESP + 0x258]         ; 00472e13
    ADD ESP,0x4                         ; 00472e1a
    FSTP float ptr [ESP + 0x1d0]        ; 00472e1d
    JMP 0x00472b9b                      ; 00472e24
        ;   XREF to: 00472b9b (UNCONDITIONAL_JUMP)  ; LAB_00472b9b
    FLD float ptr [ESP + 0x1d0]         ; 00472e29
        ;   Label: LAB_00472e29
    FADD float ptr [ESP + 0x248]        ; 00472e30
    JMP 0x00472df9                      ; 00472e37
        ;   XREF to: 00472df9 (UNCONDITIONAL_JUMP)  ; LAB_00472df9
    FLD float ptr [ESP + 0x30]          ; 00472e39
        ;   Label: LAB_00472e39
    FMUL ST0                            ; 00472e3d
    FLD float ptr [ESP + 0xec]          ; 00472e3f
    FMUL ST0                            ; 00472e46
    FSUBP                               ; 00472e48
    FSQRT                               ; 00472e4a
    FDIV double ptr [ESP]               ; 00472e4c
    FLD1                                ; 00472e4f
    FXCH                                ; 00472e51
    FSTP double ptr [ESP + 0x8]         ; 00472e53
    FCOMP double ptr [ESP + 0x8]        ; 00472e57
    FNSTSW AX                           ; 00472e5b
    SAHF                                ; 00472e5d
    JBE 0x00472bb1                      ; 00472e5e
        ;   XREF to: 00472bb1 (CONDITIONAL_JUMP)  ; LAB_00472bb1
    FLDZ                                ; 00472e64
    FCOMP double ptr [ESP + 0x8]        ; 00472e66
    FNSTSW AX                           ; 00472e6a
    SAHF                                ; 00472e6c
    JA 0x00472bb1                       ; 00472e6d
        ;   XREF to: 00472bb1 (CONDITIONAL_JUMP)  ; LAB_00472bb1
    FLD double ptr [ESP + 0x8]          ; 00472e73
    CALL crt_math.c_acos_FUN_005c1d04   ; 00472e77
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 00472e7c
    FXCH                                ; 00472e7e
    FSTP float ptr [ESP + 0x244]        ; 00472e80
    FCOMP float ptr [ESP + 0xec]        ; 00472e87
    FNSTSW AX                           ; 00472e8e
    SAHF                                ; 00472e90
    JBE 0x00472ed1                      ; 00472e91
        ;   XREF to: 00472ed1 (CONDITIONAL_JUMP)  ; LAB_00472ed1
    FLD float ptr [ESP + 0x1cc]         ; 00472e93
    FSUB float ptr [ESP + 0x244]        ; 00472e9a
    FSTP float ptr [ESP + 0x1cc]        ; 00472ea1
        ;   Label: LAB_00472ea1
    PUSH dword ptr [ESP + 0x1cc]        ; 00472ea8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00472eaf
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 00472eb4
    FLD float ptr [ESP + 0x258]         ; 00472ebb
    ADD ESP,0x4                         ; 00472ec2
    FSTP float ptr [ESP + 0x1cc]        ; 00472ec5
    JMP 0x00472bb1                      ; 00472ecc
        ;   XREF to: 00472bb1 (UNCONDITIONAL_JUMP)  ; LAB_00472bb1
    FLD float ptr [ESP + 0x1cc]         ; 00472ed1
        ;   Label: LAB_00472ed1
    FADD float ptr [ESP + 0x244]        ; 00472ed8
    JMP 0x00472ea1                      ; 00472edf
        ;   XREF to: 00472ea1 (UNCONDITIONAL_JUMP)  ; LAB_00472ea1
    MOV EDX,dword ptr [ESP + 0x238]     ; 00472ee1
        ;   Label: LAB_00472ee1
    MOV EAX,dword ptr [ESP + 0x228]     ; 00472ee8
    MOV dword ptr [EDX + 0xc],EAX       ; 00472eef
    FLD float ptr [EBP + 0x1c]          ; 00472ef2
        ;   Label: LAB_00472ef2
    FMUL float ptr [0x005da2c4]         ; 00472ef5 | DAT_005da2c4
    FMUL double ptr [0x005da2dc]        ; 00472efb | DAT_005da2dc
    FSTP float ptr [ESP + 0x218]        ; 00472f01
    MOV EAX,dword ptr [ESP + 0x218]     ; 00472f08
    MOV dword ptr [ESP + 0x34],EAX      ; 00472f0f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472f13
    FLD float ptr [EAX + 0x20020]       ; 00472f16
    FLDZ                                ; 00472f1c
    FCOMPP                              ; 00472f1e
    FNSTSW AX                           ; 00472f20
    SAHF                                ; 00472f22
    JNC 0x00472f7f                      ; 00472f23
        ;   XREF to: 00472f7f (CONDITIONAL_JUMP)  ; LAB_00472f7f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472f25
    FLD float ptr [EAX + 0x20020]       ; 00472f28
    FSUB float ptr [EBP + 0x1c]         ; 00472f2e
    FST float ptr [EAX + 0x20020]       ; 00472f31
    FLDZ                                ; 00472f37
    FCOMPP                              ; 00472f39
    FNSTSW AX                           ; 00472f3b
    SAHF                                ; 00472f3d
    JBE 0x00472f4d                      ; 00472f3e
        ;   XREF to: 00472f4d (CONDITIONAL_JUMP)  ; LAB_00472f4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472f40
    MOV dword ptr [EAX + 0x20020],0x0   ; 00472f43
    MOV EAX,dword ptr [EBP + 0x14]      ; 00472f4d
        ;   Label: LAB_00472f4d
    FLD float ptr [EAX + 0x20020]       ; 00472f50
    FLD float ptr [ESP + 0x34]          ; 00472f56
    FLD ST0                             ; 00472f5a
    FMUL double ptr [0x005da2e4]        ; 00472f5c | DAT_005da2e4
    FDIVRP ST2,ST0                      ; 00472f62
    FXCH                                ; 00472f64
    FST float ptr [ESP + 0x218]         ; 00472f66
    FCOMPP                              ; 00472f6d
    FNSTSW AX                           ; 00472f6f
    SAHF                                ; 00472f71
    JBE 0x00472f7f                      ; 00472f72
        ;   XREF to: 00472f7f (CONDITIONAL_JUMP)  ; LAB_00472f7f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00472f74
    MOV dword ptr [ESP + 0x218],EAX     ; 00472f78
    MOV EAX,dword ptr [ESP + 0x238]     ; 00472f7f
        ;   Label: LAB_00472f7f
    FLD float ptr [ESP + 0x228]         ; 00472f86
    FSUB float ptr [EAX + 0xc]          ; 00472f8d
    SUB ESP,0x4                         ; 00472f90
    FSTP float ptr [ESP]                ; 00472f93
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00472f96
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 00472f9b
    FLD float ptr [ESP + 0x258]         ; 00472fa2
    ADD ESP,0x4                         ; 00472fa9
    FLD float ptr [ESP + 0x224]         ; 00472fac
    MOV EAX,dword ptr [ESP + 0x238]     ; 00472fb3
    FXCH                                ; 00472fba
    FSTP float ptr [ESP + 0x210]        ; 00472fbc
    FSUB float ptr [EAX + 0x8]          ; 00472fc3
    SUB ESP,0x4                         ; 00472fc6
    FSTP float ptr [ESP]                ; 00472fc9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00472fcc
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 00472fd1
    FLD float ptr [ESP + 0x258]         ; 00472fd8
    ADD ESP,0x4                         ; 00472fdf
    FLD float ptr [ESP + 0x218]         ; 00472fe2
    FLD float ptr [ESP + 0x210]         ; 00472fe9
    FXCH ST2                            ; 00472ff0
    FSTP float ptr [ESP + 0x214]        ; 00472ff2
    FCHS                                ; 00472ff9
    FSTP float ptr [ESP + 0x208]        ; 00472ffb
    FCOMP float ptr [ESP + 0x208]       ; 00473002
    FNSTSW AX                           ; 00473009
    SAHF                                ; 0047300b
    JNC 0x0047301c                      ; 0047300c
        ;   XREF to: 0047301c (CONDITIONAL_JUMP)  ; LAB_0047301c
    MOV EAX,dword ptr [ESP + 0x208]     ; 0047300e
    MOV dword ptr [ESP + 0x210],EAX     ; 00473015
    FLD float ptr [ESP + 0x210]         ; 0047301c
        ;   Label: LAB_0047301c
    FCOMP float ptr [ESP + 0x218]       ; 00473023
    FNSTSW AX                           ; 0047302a
    SAHF                                ; 0047302c
    JBE 0x0047303d                      ; 0047302d
        ;   XREF to: 0047303d (CONDITIONAL_JUMP)  ; LAB_0047303d
    MOV EAX,dword ptr [ESP + 0x218]     ; 0047302f
    MOV dword ptr [ESP + 0x210],EAX     ; 00473036
    FLD float ptr [ESP + 0x214]         ; 0047303d
        ;   Label: LAB_0047303d
    FLD float ptr [ESP + 0x218]         ; 00473044
    FCHS                                ; 0047304b
    FSTP float ptr [ESP + 0x20c]        ; 0047304d
    FCOMP float ptr [ESP + 0x20c]       ; 00473054
    FNSTSW AX                           ; 0047305b
    SAHF                                ; 0047305d
    JNC 0x0047306e                      ; 0047305e
        ;   XREF to: 0047306e (CONDITIONAL_JUMP)  ; LAB_0047306e
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00473060
    MOV dword ptr [ESP + 0x214],EAX     ; 00473067
    FLD float ptr [ESP + 0x214]         ; 0047306e
        ;   Label: LAB_0047306e
    FCOMP float ptr [ESP + 0x218]       ; 00473075
    FNSTSW AX                           ; 0047307c
    SAHF                                ; 0047307e
    JBE 0x0047308f                      ; 0047307f
        ;   XREF to: 0047308f (CONDITIONAL_JUMP)  ; LAB_0047308f
    MOV EAX,dword ptr [ESP + 0x218]     ; 00473081
    MOV dword ptr [ESP + 0x214],EAX     ; 00473088
    MOV EAX,dword ptr [ESP + 0x238]     ; 0047308f
        ;   Label: LAB_0047308f
    FLD float ptr [EAX + 0xc]           ; 00473096
    FADD float ptr [ESP + 0x210]        ; 00473099
    SUB ESP,0x4                         ; 004730a0
    FSTP float ptr [ESP]                ; 004730a3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004730a6
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 004730ab
    FLD float ptr [ESP + 0x258]         ; 004730b2
    ADD ESP,0x4                         ; 004730b9
    MOV EAX,dword ptr [ESP + 0x238]     ; 004730bc
    FLD float ptr [EAX + 0x8]           ; 004730c3
    FADD float ptr [ESP + 0x214]        ; 004730c6
    SUB ESP,0x4                         ; 004730cd
    FXCH                                ; 004730d0
    FSTP float ptr [EAX + 0xc]          ; 004730d2
    FSTP float ptr [ESP]                ; 004730d5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004730d8
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 004730dd
    FLD float ptr [ESP + 0x258]         ; 004730e4
    ADD ESP,0x4                         ; 004730eb
    MOV EAX,dword ptr [ESP + 0x238]     ; 004730ee
    FSTP float ptr [EAX + 0x8]          ; 004730f5
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004730f8
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 004730fb
    CMP ECX,0x1                         ; 00473102
    JNZ 0x00472912                      ; 00473105
        ;   XREF to: 00472912 (CONDITIONAL_JUMP)  ; LAB_00472912
    FLD float ptr [EAX + 0xc]           ; 0047310b
    FSUB float ptr [ESP + 0x228]        ; 0047310e
    FABS                                ; 00473115
    FCOMP double ptr [0x005da2ec]       ; 00473117 | DAT_005da2ec
    FNSTSW AX                           ; 0047311d
    SAHF                                ; 0047311f
    JNC 0x00472912                      ; 00473120
        ;   XREF to: 00472912 (CONDITIONAL_JUMP)  ; LAB_00472912
    MOV EAX,dword ptr [ESP + 0x238]     ; 00473126
    FLD float ptr [EAX + 0x8]           ; 0047312d
    FSUB float ptr [ESP + 0x224]        ; 00473130
    FABS                                ; 00473137
    FCOMP double ptr [0x005da2ec]       ; 00473139 | DAT_005da2ec
    FNSTSW AX                           ; 0047313f
    SAHF                                ; 00473141
    JNC 0x00472912                      ; 00473142
        ;   XREF to: 00472912 (CONDITIONAL_JUMP)  ; LAB_00472912
    MOV EAX,dword ptr [ESP + 0x238]     ; 00473148
    MOV dword ptr [EAX + 0x1c],0x2      ; 0047314f
    MOV ESP,EBP                         ; 00473156
    POP EBP                             ; 00473158
    POP EDI                             ; 00473159
    POP ESI                             ; 0047315a
    POP EBX                             ; 0047315b
    RET                                 ; 0047315c

