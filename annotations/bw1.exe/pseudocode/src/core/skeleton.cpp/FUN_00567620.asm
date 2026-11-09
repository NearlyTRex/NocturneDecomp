; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00567620(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x1890]:4  local_1890
; undefined        Stack[-0x188c]:1  local_188c
; undefined        Stack[-0x124c]:1  local_124c
; undefined        Stack[-0xc0c]:1  local_c0c
; undefined        Stack[-0x2ac]:1  local_2ac
; undefined        Stack[-0x29c]:1  local_29c
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x27c]:1  local_27c
; undefined        Stack[-0x26c]:1  local_26c
; undefined        Stack[-0x25c]:1  local_25c
; undefined        Stack[-0x24c]:1  local_24c
; undefined        Stack[-0x23c]:1  local_23c
; undefined        Stack[-0x22c]:1  local_22c
; undefined        Stack[-0x21c]:1  local_21c
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0x1ec]:1  local_1ec
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x15c]:1  local_15c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xdc]:1  local_dc
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_doc.cpp_FUN_0046e630 at 0046e66e
;   core_gabriela.cpp_FUN_004c89c0 at 004c8e48
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 at 005675af
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0 at 00567601
;   core_stranger.cpp_FUN_00589f10 at 00589f4e
;
; Called Functions:
;   core_motion.cpp_FUN_00525240
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580
;   core_skeleton.cpp_FUN_005635a0
;   core_skeleton.cpp_FUN_00563630
;   core_xform.cpp_multiplyQuaternion_FUN_005b77b0
;   core_xform.cpp_negateFirstComponent_FUN_005b7750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567620
        ;   Label: core_skeleton.cpp_FUN_00567620
    PUSH ESI                            ; 00567621
    PUSH EDI                            ; 00567622
    PUSH EBP                            ; 00567623
    MOV EBP,ESP                         ; 00567624
    SUB ESP,0x1880                      ; 00567626
    AND ESP,0xfffffff8                  ; 0056762c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056762f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00567632
    PUSH EDX                            ; 00567635
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00567636
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 0056763b
    ADD ESP,0x4                         ; 0056763d
    MOV EBX,EAX                         ; 00567640
    MOV EAX,ESP                         ; 00567642
    PUSH EAX                            ; 00567644
    LEA EAX,[ESP + 0x1814]              ; 00567645
    PUSH EAX                            ; 0056764c
    LEA EAX,[ESP + 0x1814]              ; 0056764d
    PUSH EAX                            ; 00567654
    PUSH dword ptr [EBP + 0x1c]         ; 00567655
    PUSH EDI                            ; 00567658
    MOV ECX,dword ptr [EBP + 0x14]      ; 00567659
    PUSH ECX                            ; 0056765c
    CALL core_motion.cpp_FUN_00525240   ; 0056765d
        ;   XREF to: 00525240 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_00525240(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 00567662
    CMP dword ptr [EBP + 0x20],0x0      ; 00567665
    JL 0x005676f5                       ; 00567669
        ;   XREF to: 005676f5 (CONDITIONAL_JUMP)  ; LAB_005676f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056766f
    MOV EDX,dword ptr [EAX + 0x2340]    ; 00567672
    CMP EDX,0x1                         ; 00567678
    JZ 0x00567937                       ; 0056767b
        ;   XREF to: 00567937 (CONDITIONAL_JUMP)  ; LAB_00567937
    CMP EDX,0x2                         ; 00567681
    JZ 0x00567beb                       ; 00567684
        ;   XREF to: 00567beb (CONDITIONAL_JUMP)  ; LAB_00567beb
    XOR EDI,EDI                         ; 0056768a
    MOV EAX,dword ptr [ESI + 0x1de78]   ; 0056768c
    MOV dword ptr [ESP + 0x1870],EDI    ; 00567692
    TEST EAX,EAX                        ; 00567699
    JLE 0x005676ee                      ; 0056769b
        ;   XREF to: 005676ee (CONDITIONAL_JUMP)  ; LAB_005676ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056769d
    MOV dword ptr [ESP + 0x1848],EAX    ; 005676a0
    MOV ESI,dword ptr [EBP + 0x20]      ; 005676a7
        ;   Label: LAB_005676a7
    PUSH ESI                            ; 005676aa
    MOV EDI,dword ptr [ESP + 0x1874]    ; 005676ab
    PUSH EDI                            ; 005676b2
    PUSH EBX                            ; 005676b3
    CALL core_skeleton.cpp_FUN_00563630 ; 005676b4
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 005676b9
    TEST EAX,EAX                        ; 005676bc
    JGE 0x005680bc                      ; 005676be
        ;   XREF to: 005680bc (CONDITIONAL_JUMP)  ; LAB_005680bc
    MOV EAX,dword ptr [ESP + 0x1848]    ; 005676c4
        ;   Label: LAB_005676c4
    MOV EDX,dword ptr [ESP + 0x1870]    ; 005676cb
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 005676d2
    ADD EAX,0x10                        ; 005676d8
    INC EDX                             ; 005676db
    MOV dword ptr [ESP + 0x1848],EAX    ; 005676dc
    MOV dword ptr [ESP + 0x1870],EDX    ; 005676e3
    CMP EDX,ECX                         ; 005676ea
    JL 0x005676a7                       ; 005676ec
        ;   XREF to: 005676a7 (CONDITIONAL_JUMP)  ; LAB_005676a7
    MOV ESP,EBP                         ; 005676ee
        ;   Label: LAB_005676ee
    POP EBP                             ; 005676f0
    POP EDI                             ; 005676f1
    POP ESI                             ; 005676f2
    POP EBX                             ; 005676f3
    RET                                 ; 005676f4
    XOR ECX,ECX                         ; 005676f5
        ;   Label: LAB_005676f5
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 005676f7
    MOV dword ptr [ESP + 0x1860],ECX    ; 005676fd
    TEST EDI,EDI                        ; 00567704
    JLE 0x005677b0                      ; 00567706
        ;   XREF to: 005677b0 (CONDITIONAL_JUMP)  ; LAB_005677b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056770c
    MOV dword ptr [ESP + 0x183c],EAX    ; 0056770f
    MOV dword ptr [ESP + 0x1850],EAX    ; 00567716
    MOV ESI,dword ptr [ESP + 0x1810]    ; 0056771d
        ;   Label: LAB_0056771d
    PUSH dword ptr [ESP]                ; 00567724
    PUSH ESI                            ; 00567727
    MOV EDI,dword ptr [ESP + 0x1814]    ; 00567728
    PUSH EDI                            ; 0056772f
    MOV EAX,dword ptr [ESP + 0x186c]    ; 00567730
    PUSH EAX                            ; 00567737
    PUSH EBX                            ; 00567738
    LEA ESI,[ESP + 0x1768]              ; 00567739
    CALL core_skeleton.cpp_FUN_005635a0 ; 00567740
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005635a0()
    ADD ESP,0x14                        ; 00567745
    LEA ESI,[ESP + 0x1754]              ; 00567748
    MOV EDI,dword ptr [ESP + 0x183c]    ; 0056774f
    MOV EAX,dword ptr [ESP + 0x1850]    ; 00567756
    MOV ECX,dword ptr [ESP + 0x183c]    ; 0056775d
    LEA EDX,[EAX + 0x4]                 ; 00567764
    LEA EDI,[EDI + 0x6b0]               ; 00567767
    ADD ECX,0x10                        ; 0056776d
    MOV dword ptr [ESP + 0x1850],EDX    ; 00567770
    MOVSD ES:EDI,ESI                    ; 00567777
    MOVSD ES:EDI,ESI                    ; 00567778
    MOVSD ES:EDI,ESI                    ; 00567779
    MOVSD ES:EDI,ESI                    ; 0056777a
    MOV dword ptr [ESP + 0x183c],ECX    ; 0056777b
    FLD float ptr [EAX + 0x514]         ; 00567782
    MOV ESI,dword ptr [ESP + 0x1860]    ; 00567788
    FSTP float ptr [EAX + 0xcf0]        ; 0056778f
    INC ESI                             ; 00567795
    MOV EDI,dword ptr [EBX + 0x1de78]   ; 00567796
    MOV dword ptr [ESP + 0x1860],ESI    ; 0056779c
    CMP ESI,EDI                         ; 005677a3
    JL 0x0056771d                       ; 005677a5
        ;   XREF to: 0056771d (CONDITIONAL_JUMP)  ; LAB_0056771d
    LEA EAX,[EAX]                       ; 005677ab
    MOV ECX,ECX                         ; 005677ae
    MOV EDX,dword ptr [ESP + 0x1810]    ; 005677b0
        ;   Label: LAB_005677b0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005677b7
    SUB EAX,EDX                         ; 005677be
    MOV EDX,dword ptr [EBX + 0x1ec94]   ; 005677c0
    FLD float ptr [EDX + EAX*0x4]       ; 005677c6
    FMUL float ptr [ESP]                ; 005677c9
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 005677cc
    FMUL float ptr [ESP]                ; 005677d0
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 005677d3
    FMUL float ptr [ESP]                ; 005677d7
    FLD float ptr [ESP]                 ; 005677da
    LEA EDI,[ESP + 0x17dc]              ; 005677dd
    LEA ESI,[ESP + 0x1800]              ; 005677e4
    FLD1                                ; 005677eb
    MOV EBX,dword ptr [ESP + 0x180c]    ; 005677ed
    FSUBRP                              ; 005677f4
    LEA EAX,[EBX*0x4 + 0x0]             ; 005677f6
    FXCH ST3                            ; 005677fd
    FSTP float ptr [ESP + 0x1800]       ; 005677ff
    FXCH                                ; 00567806
    FSTP float ptr [ESP + 0x1804]       ; 00567808
    FSTP float ptr [ESP + 0x1808]       ; 0056780f
    SUB EAX,EBX                         ; 00567816
    MOVSD ES:EDI,ESI                    ; 00567818
    MOVSD ES:EDI,ESI                    ; 00567819
    MOVSD ES:EDI,ESI                    ; 0056781a
    FSTP float ptr [ESP + 0x1818]       ; 0056781b
    FLD float ptr [EDX + EAX*0x4]       ; 00567822
    FMUL float ptr [ESP + 0x1818]       ; 00567825
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0056782c
    FMUL float ptr [ESP + 0x1818]       ; 00567830
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 00567837
    FMUL float ptr [ESP + 0x1818]       ; 0056783b
    MOV EBX,dword ptr [EBP + 0x14]      ; 00567842
    LEA EDI,[ESP + 0x17e8]              ; 00567845
    LEA ESI,[ESP + 0x17c4]              ; 0056784c
    LEA EAX,[ESP + 0x17d0]              ; 00567853
    FXCH ST2                            ; 0056785a
    FSTP float ptr [ESP + 0x17c4]       ; 0056785c
    FSTP float ptr [ESP + 0x17c8]       ; 00567863
    FSTP float ptr [ESP + 0x17cc]       ; 0056786a
    MOVSD ES:EDI,ESI                    ; 00567871
    MOVSD ES:EDI,ESI                    ; 00567872
    MOVSD ES:EDI,ESI                    ; 00567873
    ADD EBX,0x6a4                       ; 00567874
    FLD float ptr [ESP + 0x17e8]        ; 0056787a
    FLD float ptr [ESP + 0x17ec]        ; 00567881
    FLD float ptr [ESP + 0x17f0]        ; 00567888
    LEA EDI,[ESP + 0x17d0]              ; 0056788f
    LEA ESI,[ESP + 0x17f4]              ; 00567896
    FXCH ST2                            ; 0056789d
    FADD float ptr [ESP + 0x17dc]       ; 0056789f
    FXCH                                ; 005678a6
    FADD float ptr [ESP + 0x17e0]       ; 005678a8
    FXCH ST2                            ; 005678af
    FADD float ptr [ESP + 0x17e4]       ; 005678b1
    FXCH                                ; 005678b8
    FSTP float ptr [ESP + 0x17f4]       ; 005678ba
    FXCH                                ; 005678c1
    FSTP float ptr [ESP + 0x17f8]       ; 005678c3
    FSTP float ptr [ESP + 0x17fc]       ; 005678ca
    MOVSD ES:EDI,ESI                    ; 005678d1
    MOVSD ES:EDI,ESI                    ; 005678d2
    MOVSD ES:EDI,ESI                    ; 005678d3
    CMP EBX,EAX                         ; 005678d4
    JZ 0x005678f5                       ; 005678d6
        ;   XREF to: 005678f5 (CONDITIONAL_JUMP)  ; LAB_005678f5
    MOV EAX,dword ptr [ESP + 0x17d0]    ; 005678d8
    MOV dword ptr [EBX],EAX             ; 005678df
    MOV EAX,dword ptr [ESP + 0x17d4]    ; 005678e1
    MOV dword ptr [EBX + 0x4],EAX       ; 005678e8
    MOV EAX,dword ptr [ESP + 0x17d8]    ; 005678eb
    MOV dword ptr [EBX + 0x8],EAX       ; 005678f2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005678f5
        ;   Label: LAB_005678f5
    FLD float ptr [EAX + 0x508]         ; 005678f8
    FMUL float ptr [EAX + 0x6a4]        ; 005678fe
    FLD float ptr [EAX + 0x50c]         ; 00567904
    FMUL float ptr [EAX + 0x6a8]        ; 0056790a
    FLD float ptr [EAX + 0x510]         ; 00567910
    FMUL float ptr [EAX + 0x6ac]        ; 00567916
    FXCH                                ; 0056791c
    FSTP float ptr [EAX + 0x6a8]        ; 0056791e
    FSTP float ptr [EAX + 0x6ac]        ; 00567924
    FSTP float ptr [EAX + 0x6a4]        ; 0056792a
    MOV ESP,EBP                         ; 00567930
    POP EBP                             ; 00567932
    POP EDI                             ; 00567933
    POP ESI                             ; 00567934
    POP EBX                             ; 00567935
    RET                                 ; 00567936
    XOR EAX,EAX                         ; 00567937
        ;   Label: LAB_00567937
    MOV EDX,dword ptr [ESI + 0x1de78]   ; 00567939
    MOV dword ptr [ESP + 0x1878],EAX    ; 0056793f
    TEST EDX,EDX                        ; 00567946
    JLE 0x00567a06                      ; 00567948
        ;   XREF to: 00567a06 (CONDITIONAL_JUMP)  ; LAB_00567a06
    MOV dword ptr [ESP + 0x1830],EAX    ; 0056794e
    MOV dword ptr [ESP + 0x184c],EAX    ; 00567955
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056795c
        ;   Label: LAB_0056795c
    PUSH EAX                            ; 0056795f
    MOV EDX,dword ptr [ESP + 0x187c]    ; 00567960
    PUSH EDX                            ; 00567967
    PUSH EBX                            ; 00567968
    CALL core_skeleton.cpp_FUN_00563630 ; 00567969
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0056796e
    MOV EDX,dword ptr [ESP + 0x184c]    ; 00567971
    MOV dword ptr [ESP + EDX*0x1 + 0x1454],EAX ; 00567978
    TEST EAX,EAX                        ; 0056797f
    JL 0x005679c7                       ; 00567981
        ;   XREF to: 005679c7 (CONDITIONAL_JUMP)  ; LAB_005679c7
    MOV ESI,dword ptr [ESP + 0x1810]    ; 00567983
    PUSH dword ptr [ESP]                ; 0056798a
    PUSH ESI                            ; 0056798d
    MOV EDI,dword ptr [ESP + 0x1814]    ; 0056798e
    PUSH EDI                            ; 00567995
    MOV EAX,dword ptr [ESP + 0x1884]    ; 00567996
    PUSH EAX                            ; 0056799d
    PUSH EBX                            ; 0056799e
    LEA ESI,[ESP + 0x1718]              ; 0056799f
    CALL core_skeleton.cpp_FUN_005635a0 ; 005679a6
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005635a0()
    ADD ESP,0x14                        ; 005679ab
    MOV EDI,dword ptr [ESP + 0x1830]    ; 005679ae
    LEA ESI,[ESP + 0x1704]              ; 005679b5
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 005679bc
    MOVSD ES:EDI,ESI                    ; 005679c3
    MOVSD ES:EDI,ESI                    ; 005679c4
    MOVSD ES:EDI,ESI                    ; 005679c5
    MOVSD ES:EDI,ESI                    ; 005679c6
    MOV EDI,dword ptr [ESP + 0x184c]    ; 005679c7
        ;   Label: LAB_005679c7
    MOV EAX,dword ptr [ESP + 0x1830]    ; 005679ce
    MOV EDX,dword ptr [ESP + 0x1878]    ; 005679d5
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 005679dc
    ADD EDI,0x4                         ; 005679e2
    ADD EAX,0x10                        ; 005679e5
    INC EDX                             ; 005679e8
    MOV dword ptr [ESP + 0x184c],EDI    ; 005679e9
    MOV dword ptr [ESP + 0x1830],EAX    ; 005679f0
    MOV dword ptr [ESP + 0x1878],EDX    ; 005679f7
    CMP EDX,ECX                         ; 005679fe
    JL 0x0056795c                       ; 00567a00
        ;   XREF to: 0056795c (CONDITIONAL_JUMP)  ; LAB_0056795c
    MOV ESI,dword ptr [EBP + 0x20]      ; 00567a06
        ;   Label: LAB_00567a06
    LEA EAX,[ESI*0x8 + 0x0]             ; 00567a09
    ADD EAX,ESI                         ; 00567a10
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1de9c] ; 00567a12
    TEST EDI,EDI                        ; 00567a19
    JL 0x00567a56                       ; 00567a1b
        ;   XREF to: 00567a56 (CONDITIONAL_JUMP)  ; LAB_00567a56
    MOV ESI,dword ptr [ESP + 0x1810]    ; 00567a1d
    PUSH dword ptr [ESP]                ; 00567a24
    PUSH ESI                            ; 00567a27
    MOV EAX,dword ptr [ESP + 0x1814]    ; 00567a28
    PUSH EAX                            ; 00567a2f
    PUSH EDI                            ; 00567a30
    PUSH EBX                            ; 00567a31
    LEA ESI,[ESP + 0x1738]              ; 00567a32
    CALL core_skeleton.cpp_FUN_005635a0 ; 00567a39
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005635a0()
    SHL EDI,0x4                         ; 00567a3e
    ADD ESP,0x14                        ; 00567a41
    LEA ESI,[ESP + 0x1724]              ; 00567a44
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 00567a4b
    MOVSD ES:EDI,ESI                    ; 00567a52
    MOVSD ES:EDI,ESI                    ; 00567a53
    MOVSD ES:EDI,ESI                    ; 00567a54
    MOVSD ES:EDI,ESI                    ; 00567a55
    XOR EDX,EDX                         ; 00567a56
        ;   Label: LAB_00567a56
    MOV ECX,dword ptr [EBX + 0x1de78]   ; 00567a58
    MOV dword ptr [ESP + 0x1868],EDX    ; 00567a5e
    TEST ECX,ECX                        ; 00567a65
    JLE 0x005676ee                      ; 00567a67
        ;   XREF to: 005676ee (CONDITIONAL_JUMP)  ; LAB_005676ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 00567a6d
    ADD EAX,0x6b0                       ; 00567a70
    MOV dword ptr [ESP + 0x1840],EDX    ; 00567a75
    MOV dword ptr [ESP + 0x1820],EAX    ; 00567a7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00567a83
    MOV dword ptr [ESP + 0x1838],EBX    ; 00567a86
    MOV dword ptr [ESP + 0x185c],EAX    ; 00567a8d
    MOV EAX,dword ptr [ESP + 0x1840]    ; 00567a94
        ;   Label: LAB_00567a94
    CMP dword ptr [ESP + EAX*0x1 + 0x1454],0x0 ; 00567a9b
    JL 0x00567ae1                       ; 00567aa3
        ;   XREF to: 00567ae1 (CONDITIONAL_JUMP)  ; LAB_00567ae1
    MOV EDX,dword ptr [ESP + 0x1868]    ; 00567aa5
    MOV EAX,dword ptr [ESP + 0x1838]    ; 00567aac
    SHL EDX,0x4                         ; 00567ab3
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 00567ab6
    MOV dword ptr [ESP + 0x182c],EDX    ; 00567abc
    TEST EAX,EAX                        ; 00567ac3
    JGE 0x00567b36                      ; 00567ac5
        ;   XREF to: 00567b36 (CONDITIONAL_JUMP)  ; LAB_00567b36
    MOV EDI,dword ptr [ESP + 0x185c]    ; 00567ac7
    MOV ESI,EDX                         ; 00567ace
    LEA EDI,[EDI + 0x6b0]               ; 00567ad0
    LEA ESI,[ESP + ESI*0x1 + 0x644]     ; 00567ad6
    MOVSD ES:EDI,ESI                    ; 00567add
        ;   Label: LAB_00567add
    MOVSD ES:EDI,ESI                    ; 00567ade
    MOVSD ES:EDI,ESI                    ; 00567adf
    MOVSD ES:EDI,ESI                    ; 00567ae0
    MOV EDX,dword ptr [ESP + 0x1840]    ; 00567ae1
        ;   Label: LAB_00567ae1
    MOV ECX,dword ptr [ESP + 0x185c]    ; 00567ae8
    MOV ESI,dword ptr [ESP + 0x1838]    ; 00567aef
    MOV EDI,dword ptr [ESP + 0x1868]    ; 00567af6
    ADD EDX,0x4                         ; 00567afd
    ADD ECX,0x10                        ; 00567b00
    ADD ESI,0x24                        ; 00567b03
    INC EDI                             ; 00567b06
    MOV dword ptr [ESP + 0x1840],EDX    ; 00567b07
    MOV dword ptr [ESP + 0x185c],ECX    ; 00567b0e
    MOV dword ptr [ESP + 0x1838],ESI    ; 00567b15
    MOV EDX,dword ptr [EBX + 0x1de78]   ; 00567b1c
    MOV dword ptr [ESP + 0x1868],EDI    ; 00567b22
    CMP EDI,EDX                         ; 00567b29
    JGE 0x005676ee                      ; 00567b2b
        ;   XREF to: 005676ee (CONDITIONAL_JUMP)  ; LAB_005676ee
    JMP 0x00567a94                      ; 00567b31
        ;   XREF to: 00567a94 (UNCONDITIONAL_JUMP)  ; LAB_00567a94
    SHL EAX,0x4                         ; 00567b36
        ;   Label: LAB_00567b36
    MOV dword ptr [ESP + 0x1814],EAX    ; 00567b39
    LEA EAX,[ESP + 0x644]               ; 00567b40
    ADD EAX,dword ptr [ESP + 0x1814]    ; 00567b47
    PUSH EAX                            ; 00567b4e
    LEA ESI,[ESP + 0x1778]              ; 00567b4f
    LEA EDI,[ESP + 0x16d8]              ; 00567b56
    CALL core_xform.cpp_negateFirstComponent_FUN_005b7750 ; 00567b5d
        ;   XREF to: 005b7750 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_005b7750()
    ADD ESP,0x4                         ; 00567b62
    LEA EAX,[ESP + 0x16d4]              ; 00567b65
    MOV EDX,dword ptr [ESP + 0x182c]    ; 00567b6c
    PUSH EAX                            ; 00567b73
    LEA EAX,[ESP + 0x648]               ; 00567b74
    LEA ESI,[ESP + 0x1778]              ; 00567b7b
    ADD EAX,EDX                         ; 00567b82
    MOVSD ES:EDI,ESI                    ; 00567b84
    MOVSD ES:EDI,ESI                    ; 00567b85
    MOVSD ES:EDI,ESI                    ; 00567b86
    MOVSD ES:EDI,ESI                    ; 00567b87
    PUSH EAX                            ; 00567b88
    LEA ESI,[ESP + 0x168c]              ; 00567b89
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00567b90
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 00567b95
    MOV EAX,dword ptr [ESP + 0x1820]    ; 00567b98
    MOV ECX,dword ptr [ESP + 0x1814]    ; 00567b9f
    LEA EDI,[ESP + 0x1744]              ; 00567ba6
    ADD EAX,ECX                         ; 00567bad
    LEA ESI,[ESP + 0x1684]              ; 00567baf
    PUSH EAX                            ; 00567bb6
    LEA EAX,[ESP + 0x1748]              ; 00567bb7
    MOVSD ES:EDI,ESI                    ; 00567bbe
    MOVSD ES:EDI,ESI                    ; 00567bbf
    MOVSD ES:EDI,ESI                    ; 00567bc0
    MOVSD ES:EDI,ESI                    ; 00567bc1
    PUSH EAX                            ; 00567bc2
    LEA ESI,[ESP + 0x16bc]              ; 00567bc3
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00567bca
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 00567bcf
    MOV EDI,dword ptr [ESP + 0x185c]    ; 00567bd2
    LEA ESI,[ESP + 0x16b4]              ; 00567bd9
    LEA EDI,[EDI + 0x6b0]               ; 00567be0
    JMP 0x00567add                      ; 00567be6
        ;   XREF to: 00567add (UNCONDITIONAL_JUMP)  ; LAB_00567add
    PUSH EAX                            ; 00567beb
        ;   Label: LAB_00567beb
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00567bec
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    MOV EDX,EAX                         ; 00567bf1
    LEA EAX,[EDI*0x8 + 0x0]             ; 00567bf3
    ADD ESP,0x4                         ; 00567bfa
    ADD EAX,EDI                         ; 00567bfd
    XOR ECX,ECX                         ; 00567bff
    SHL EAX,0x5                         ; 00567c01
    MOV dword ptr [ESP + 0x187c],ECX    ; 00567c04
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x1c88] ; 00567c0b
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 00567c12
    MOV dword ptr [ESP + 0x1824],EAX    ; 00567c18
    TEST EDI,EDI                        ; 00567c1f
    JLE 0x00567d02                      ; 00567c21
        ;   XREF to: 00567d02 (CONDITIONAL_JUMP)  ; LAB_00567d02
    MOV dword ptr [ESP + 0x1854],ECX    ; 00567c27
    MOV dword ptr [ESP + 0x1858],ECX    ; 00567c2e
    MOV ECX,dword ptr [EBP + 0x20]      ; 00567c35
        ;   Label: LAB_00567c35
    PUSH ECX                            ; 00567c38
    MOV ESI,dword ptr [ESP + 0x1880]    ; 00567c39
    PUSH ESI                            ; 00567c40
    PUSH EBX                            ; 00567c41
    CALL core_skeleton.cpp_FUN_00563630 ; 00567c42
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00567c47
    MOV EDX,dword ptr [ESP + 0x1858]    ; 00567c4a
    MOV dword ptr [ESP + EDX*0x1 + 0x12c4],EAX ; 00567c51
    TEST EAX,EAX                        ; 00567c58
    JL 0x00567cc3                       ; 00567c5a
        ;   XREF to: 00567cc3 (CONDITIONAL_JUMP)  ; LAB_00567cc3
    MOV EAX,dword ptr [ESP + 0x1824]    ; 00567c5c
    PUSH EAX                            ; 00567c63
    PUSH ESI                            ; 00567c64
    PUSH EBX                            ; 00567c65
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580 ; 00567c66
        ;   XREF to: 00563580 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 00567c6b
    MOV EDI,dword ptr [ESP + 0x1854]    ; 00567c6e
    MOV ESI,EAX                         ; 00567c75
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 00567c77
    MOVSD ES:EDI,ESI                    ; 00567c7e
    MOVSD ES:EDI,ESI                    ; 00567c7f
    MOVSD ES:EDI,ESI                    ; 00567c80
    MOVSD ES:EDI,ESI                    ; 00567c81
    MOV ECX,dword ptr [ESP + 0x1810]    ; 00567c82
    PUSH dword ptr [ESP]                ; 00567c89
    PUSH ECX                            ; 00567c8c
    MOV ESI,dword ptr [ESP + 0x1814]    ; 00567c8d
    PUSH ESI                            ; 00567c94
    MOV EDI,dword ptr [ESP + 0x1888]    ; 00567c95
    PUSH EDI                            ; 00567c9c
    PUSH EBX                            ; 00567c9d
    LEA ESI,[ESP + 0x17c8]              ; 00567c9e
    CALL core_skeleton.cpp_FUN_005635a0 ; 00567ca5
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005635a0()
    ADD ESP,0x14                        ; 00567caa
    MOV EDI,dword ptr [ESP + 0x1854]    ; 00567cad
    LEA ESI,[ESP + 0x17b4]              ; 00567cb4
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 00567cbb
    MOVSD ES:EDI,ESI                    ; 00567cbf
    MOVSD ES:EDI,ESI                    ; 00567cc0
    MOVSD ES:EDI,ESI                    ; 00567cc1
    MOVSD ES:EDI,ESI                    ; 00567cc2
    MOV ESI,dword ptr [ESP + 0x1858]    ; 00567cc3
        ;   Label: LAB_00567cc3
    MOV EDI,dword ptr [ESP + 0x1854]    ; 00567cca
    MOV EAX,dword ptr [ESP + 0x187c]    ; 00567cd1
    MOV EDX,dword ptr [EBX + 0x1de78]   ; 00567cd8
    ADD ESI,0x4                         ; 00567cde
    ADD EDI,0x10                        ; 00567ce1
    INC EAX                             ; 00567ce4
    MOV dword ptr [ESP + 0x1858],ESI    ; 00567ce5
    MOV dword ptr [ESP + 0x1854],EDI    ; 00567cec
    MOV dword ptr [ESP + 0x187c],EAX    ; 00567cf3
    CMP EAX,EDX                         ; 00567cfa
    JL 0x00567c35                       ; 00567cfc
        ;   XREF to: 00567c35 (CONDITIONAL_JUMP)  ; LAB_00567c35
    MOV EDX,dword ptr [EBP + 0x20]      ; 00567d02
        ;   Label: LAB_00567d02
    LEA EAX,[EDX*0x8 + 0x0]             ; 00567d05
    ADD EAX,EDX                         ; 00567d0c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x1de9c] ; 00567d0e
    MOV dword ptr [ESP + 0x181c],EAX    ; 00567d15
    TEST EAX,EAX                        ; 00567d1c
    JL 0x00567d90                       ; 00567d1e
        ;   XREF to: 00567d90 (CONDITIONAL_JUMP)  ; LAB_00567d90
    MOV ESI,dword ptr [ESP + 0x1824]    ; 00567d20
    PUSH ESI                            ; 00567d27
    PUSH EAX                            ; 00567d28
    PUSH EBX                            ; 00567d29
    MOV EDI,EAX                         ; 00567d2a
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580 ; 00567d2c
        ;   XREF to: 00563580 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580(CSkeleton * this_ptr, int bone_index, int frame_index)
    MOV EDX,EDI                         ; 00567d31
    SHL EDX,0x4                         ; 00567d33
    MOV EDI,EDX                         ; 00567d36
    ADD ESP,0xc                         ; 00567d38
    MOV ESI,EAX                         ; 00567d3b
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 00567d3d
    MOVSD ES:EDI,ESI                    ; 00567d44
    MOVSD ES:EDI,ESI                    ; 00567d45
    MOVSD ES:EDI,ESI                    ; 00567d46
    MOVSD ES:EDI,ESI                    ; 00567d47
    MOV EAX,dword ptr [ESP + 0x1810]    ; 00567d48
    PUSH dword ptr [ESP]                ; 00567d4f
    PUSH EAX                            ; 00567d52
    MOV dword ptr [ESP + 0x181c],EDX    ; 00567d53
    MOV EDX,dword ptr [ESP + 0x1814]    ; 00567d5a
    PUSH EDX                            ; 00567d61
    MOV ECX,dword ptr [ESP + 0x1828]    ; 00567d62
    PUSH ECX                            ; 00567d69
    PUSH EBX                            ; 00567d6a
    LEA ESI,[ESP + 0x1608]              ; 00567d6b
    CALL core_skeleton.cpp_FUN_005635a0 ; 00567d72
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005635a0()
    ADD ESP,0x14                        ; 00567d77
    MOV EDI,dword ptr [ESP + 0x1814]    ; 00567d7a
    LEA ESI,[ESP + 0x15f4]              ; 00567d81
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 00567d88
    MOVSD ES:EDI,ESI                    ; 00567d8c
    MOVSD ES:EDI,ESI                    ; 00567d8d
    MOVSD ES:EDI,ESI                    ; 00567d8e
    MOVSD ES:EDI,ESI                    ; 00567d8f
    XOR ESI,ESI                         ; 00567d90
        ;   Label: LAB_00567d90
    MOV EDI,dword ptr [EBX + 0x1de78]   ; 00567d92
    MOV dword ptr [ESP + 0x1864],ESI    ; 00567d98
    TEST EDI,EDI                        ; 00567d9f
    JLE 0x005676ee                      ; 00567da1
        ;   XREF to: 005676ee (CONDITIONAL_JUMP)  ; LAB_005676ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 00567da7
    ADD EAX,0x6b0                       ; 00567daa
    MOV dword ptr [ESP + 0x1844],ESI    ; 00567daf
    MOV dword ptr [ESP + 0x1828],EAX    ; 00567db6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00567dbd
    MOV dword ptr [ESP + 0x1834],EBX    ; 00567dc0
    MOV dword ptr [ESP + 0x1874],EAX    ; 00567dc7
    MOV EAX,dword ptr [ESP + 0x1844]    ; 00567dce
        ;   Label: LAB_00567dce
    CMP dword ptr [ESP + EAX*0x1 + 0x12c4],0x0 ; 00567dd5
    JL 0x00567f21                       ; 00567ddd
        ;   XREF to: 00567f21 (CONDITIONAL_JUMP)  ; LAB_00567f21
    MOV EAX,dword ptr [ESP + 0x1834]    ; 00567de3
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 00567dea
    MOV dword ptr [ESP + 0x186c],EAX    ; 00567df0
    MOV EAX,dword ptr [ESP + 0x1864]    ; 00567df7
    SHL EAX,0x4                         ; 00567dfe
    LEA EDI,[ESP + 0x15e4]              ; 00567e01
    LEA ESI,[ESP + EAX*0x1 + 0xc84]     ; 00567e08
    MOVSD ES:EDI,ESI                    ; 00567e0f
    MOVSD ES:EDI,ESI                    ; 00567e10
    MOVSD ES:EDI,ESI                    ; 00567e11
    MOVSD ES:EDI,ESI                    ; 00567e12
    LEA EDI,[ESP + 0x1614]              ; 00567e13
    LEA ESI,[ESP + EAX*0x1 + 0x4]       ; 00567e1a
    MOVSD ES:EDI,ESI                    ; 00567e1e
    MOVSD ES:EDI,ESI                    ; 00567e1f
    MOVSD ES:EDI,ESI                    ; 00567e20
    MOVSD ES:EDI,ESI                    ; 00567e21
    MOV ESI,dword ptr [ESP + 0x1874]    ; 00567e22
    LEA EDI,[ESP + 0x1604]              ; 00567e29
    LEA ESI,[ESI + 0x6b0]               ; 00567e30
    MOV ECX,dword ptr [ESP + 0x186c]    ; 00567e36
    MOVSD ES:EDI,ESI                    ; 00567e3d
    MOVSD ES:EDI,ESI                    ; 00567e3e
    MOVSD ES:EDI,ESI                    ; 00567e3f
    MOVSD ES:EDI,ESI                    ; 00567e40
    TEST ECX,ECX                        ; 00567e41
    JGE 0x00567f76                      ; 00567e43
        ;   XREF to: 00567f76 (CONDITIONAL_JUMP)  ; LAB_00567f76
    LEA EAX,[ESP + 0x15e4]              ; 00567e49
        ;   Label: LAB_00567e49
    PUSH EAX                            ; 00567e50
    LEA ESI,[ESP + 0x1798]              ; 00567e51
    LEA EDI,[ESP + 0x1768]              ; 00567e58
    CALL core_xform.cpp_negateFirstComponent_FUN_005b7750 ; 00567e5f
        ;   XREF to: 005b7750 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_005b7750()
    ADD ESP,0x4                         ; 00567e64
    LEA EAX,[ESP + 0x1764]              ; 00567e67
    LEA ESI,[ESP + 0x1794]              ; 00567e6e
    PUSH EAX                            ; 00567e75
    LEA EAX,[ESP + 0x1618]              ; 00567e76
    MOVSD ES:EDI,ESI                    ; 00567e7d
    MOVSD ES:EDI,ESI                    ; 00567e7e
    MOVSD ES:EDI,ESI                    ; 00567e7f
    MOVSD ES:EDI,ESI                    ; 00567e80
    PUSH EAX                            ; 00567e81
    LEA ESI,[ESP + 0x178c]              ; 00567e82
    LEA EDI,[ESP + 0x173c]              ; 00567e89
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00567e90
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 00567e95
    LEA EAX,[ESP + 0x1734]              ; 00567e98
    LEA ESI,[ESP + 0x1784]              ; 00567e9f
    PUSH EAX                            ; 00567ea6
    LEA EAX,[ESP + 0x1608]              ; 00567ea7
    MOVSD ES:EDI,ESI                    ; 00567eae
    MOVSD ES:EDI,ESI                    ; 00567eaf
    MOVSD ES:EDI,ESI                    ; 00567eb0
    MOVSD ES:EDI,ESI                    ; 00567eb1
    PUSH EAX                            ; 00567eb2
    LEA ESI,[ESP + 0x17ac]              ; 00567eb3
    LEA EDI,[ESP + 0x16fc]              ; 00567eba
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00567ec1
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 00567ec6
    LEA ESI,[ESP + 0x17a4]              ; 00567ec9
    MOV ECX,dword ptr [ESP + 0x186c]    ; 00567ed0
    MOVSD ES:EDI,ESI                    ; 00567ed7
    MOVSD ES:EDI,ESI                    ; 00567ed8
    MOVSD ES:EDI,ESI                    ; 00567ed9
    MOVSD ES:EDI,ESI                    ; 00567eda
    TEST ECX,ECX                        ; 00567edb
    JL 0x005680a9                       ; 00567edd
        ;   XREF to: 005680a9 (CONDITIONAL_JUMP)  ; LAB_005680a9
    MOV EAX,ECX                         ; 00567ee3
    MOV ESI,dword ptr [ESP + 0x1828]    ; 00567ee5
    SHL EAX,0x4                         ; 00567eec
    ADD EAX,ESI                         ; 00567eef
    PUSH EAX                            ; 00567ef1
    LEA EAX,[ESP + 0x16f8]              ; 00567ef2
    PUSH EAX                            ; 00567ef9
    LEA ESI,[ESP + 0x171c]              ; 00567efa
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00567f01
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 00567f06
    MOV EDI,dword ptr [ESP + 0x1874]    ; 00567f09
    LEA ESI,[ESP + 0x1714]              ; 00567f10
    LEA EDI,[EDI + 0x6b0]               ; 00567f17
        ;   Label: LAB_00567f17
    MOVSD ES:EDI,ESI                    ; 00567f1d
    MOVSD ES:EDI,ESI                    ; 00567f1e
    MOVSD ES:EDI,ESI                    ; 00567f1f
    MOVSD ES:EDI,ESI                    ; 00567f20
    MOV EAX,dword ptr [ESP + 0x1844]    ; 00567f21
        ;   Label: LAB_00567f21
    MOV EDX,dword ptr [ESP + 0x1834]    ; 00567f28
    MOV ECX,dword ptr [ESP + 0x1874]    ; 00567f2f
    MOV ESI,dword ptr [ESP + 0x1864]    ; 00567f36
    MOV EDI,dword ptr [EBX + 0x1de78]   ; 00567f3d
    ADD EAX,0x4                         ; 00567f43
    ADD EDX,0x24                        ; 00567f46
    ADD ECX,0x10                        ; 00567f49
    INC ESI                             ; 00567f4c
    MOV dword ptr [ESP + 0x1844],EAX    ; 00567f4d
    MOV dword ptr [ESP + 0x1834],EDX    ; 00567f54
    MOV dword ptr [ESP + 0x1874],ECX    ; 00567f5b
    MOV dword ptr [ESP + 0x1864],ESI    ; 00567f62
    CMP ESI,EDI                         ; 00567f69
    JGE 0x005676ee                      ; 00567f6b
        ;   XREF to: 005676ee (CONDITIONAL_JUMP)  ; LAB_005676ee
    JMP 0x00567dce                      ; 00567f71
        ;   XREF to: 00567dce (UNCONDITIONAL_JUMP)  ; LAB_00567dce
    MOV EAX,ECX                         ; 00567f76
        ;   Label: LAB_00567f76
    SHL EAX,0x4                         ; 00567f78
    MOV dword ptr [ESP + 0x1814],EAX    ; 00567f7b
    LEA EAX,[ESP + 0xc84]               ; 00567f82
    ADD EAX,dword ptr [ESP + 0x1814]    ; 00567f89
    PUSH EAX                            ; 00567f90
    LEA ESI,[ESP + 0x1648]              ; 00567f91
    LEA EDI,[ESP + 0x1658]              ; 00567f98
    CALL core_xform.cpp_negateFirstComponent_FUN_005b7750 ; 00567f9f
        ;   XREF to: 005b7750 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_005b7750()
    ADD ESP,0x4                         ; 00567fa4
    LEA EAX,[ESP + 0x1654]              ; 00567fa7
    LEA ESI,[ESP + 0x1644]              ; 00567fae
    PUSH EAX                            ; 00567fb5
    LEA EAX,[ESP + 0x15e8]              ; 00567fb6
    MOVSD ES:EDI,ESI                    ; 00567fbd
    MOVSD ES:EDI,ESI                    ; 00567fbe
    MOVSD ES:EDI,ESI                    ; 00567fbf
    MOVSD ES:EDI,ESI                    ; 00567fc0
    PUSH EAX                            ; 00567fc1
    LEA ESI,[ESP + 0x16ec]              ; 00567fc2
    LEA EDI,[ESP + 0x15ec]              ; 00567fc9
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00567fd0
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[ESP + 0x16ec]              ; 00567fd5
    ADD ESP,0x8                         ; 00567fdc
    MOVSD ES:EDI,ESI                    ; 00567fdf
    MOVSD ES:EDI,ESI                    ; 00567fe0
    MOVSD ES:EDI,ESI                    ; 00567fe1
    MOVSD ES:EDI,ESI                    ; 00567fe2
    LEA EAX,[ESP + 0x4]                 ; 00567fe3
    ADD EAX,dword ptr [ESP + 0x1814]    ; 00567fe7
    PUSH EAX                            ; 00567fee
    LEA ESI,[ESP + 0x1678]              ; 00567fef
    LEA EDI,[ESP + 0x1668]              ; 00567ff6
    CALL core_xform.cpp_negateFirstComponent_FUN_005b7750 ; 00567ffd
        ;   XREF to: 005b7750 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_005b7750()
    ADD ESP,0x4                         ; 00568002
    LEA EAX,[ESP + 0x1664]              ; 00568005
    LEA ESI,[ESP + 0x1674]              ; 0056800c
    PUSH EAX                            ; 00568013
    LEA EAX,[ESP + 0x1618]              ; 00568014
    MOVSD ES:EDI,ESI                    ; 0056801b
    MOVSD ES:EDI,ESI                    ; 0056801c
    MOVSD ES:EDI,ESI                    ; 0056801d
    MOVSD ES:EDI,ESI                    ; 0056801e
    PUSH EAX                            ; 0056801f
    LEA ESI,[ESP + 0x169c]              ; 00568020
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00568027
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    ADD ESP,0x8                         ; 0056802c
    LEA EDI,[ESP + 0x1614]              ; 0056802f
    MOV EAX,dword ptr [ESP + 0x1828]    ; 00568036
    MOV EDX,dword ptr [ESP + 0x1814]    ; 0056803d
    LEA ESI,[ESP + 0x1694]              ; 00568044
    ADD EAX,EDX                         ; 0056804b
    MOVSD ES:EDI,ESI                    ; 0056804d
    MOVSD ES:EDI,ESI                    ; 0056804e
    MOVSD ES:EDI,ESI                    ; 0056804f
    MOVSD ES:EDI,ESI                    ; 00568050
    PUSH EAX                            ; 00568051
    LEA ESI,[ESP + 0x16a8]              ; 00568052
    LEA EDI,[ESP + 0x1628]              ; 00568059
    CALL core_xform.cpp_negateFirstComponent_FUN_005b7750 ; 00568060
        ;   XREF to: 005b7750 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_005b7750()
    ADD ESP,0x4                         ; 00568065
    LEA EAX,[ESP + 0x1624]              ; 00568068
    LEA ESI,[ESP + 0x16a4]              ; 0056806f
    PUSH EAX                            ; 00568076
    LEA EAX,[ESP + 0x1608]              ; 00568077
    MOVSD ES:EDI,ESI                    ; 0056807e
    MOVSD ES:EDI,ESI                    ; 0056807f
    MOVSD ES:EDI,ESI                    ; 00568080
    MOVSD ES:EDI,ESI                    ; 00568081
    PUSH EAX                            ; 00568082
    LEA ESI,[ESP + 0x16cc]              ; 00568083
    LEA EDI,[ESP + 0x160c]              ; 0056808a
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00568091
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[ESP + 0x16cc]              ; 00568096
    ADD ESP,0x8                         ; 0056809d
    MOVSD ES:EDI,ESI                    ; 005680a0
    MOVSD ES:EDI,ESI                    ; 005680a1
    MOVSD ES:EDI,ESI                    ; 005680a2
    MOVSD ES:EDI,ESI                    ; 005680a3
    JMP 0x00567e49                      ; 005680a4
        ;   XREF to: 00567e49 (UNCONDITIONAL_JUMP)  ; LAB_00567e49
    MOV EDI,dword ptr [ESP + 0x1874]    ; 005680a9
        ;   Label: LAB_005680a9
    LEA ESI,[ESP + 0x17a4]              ; 005680b0
    JMP 0x00567f17                      ; 005680b7
        ;   XREF to: 00567f17 (UNCONDITIONAL_JUMP)  ; LAB_00567f17
    MOV EAX,dword ptr [ESP + 0x1810]    ; 005680bc
        ;   Label: LAB_005680bc
    PUSH dword ptr [ESP]                ; 005680c3
    PUSH EAX                            ; 005680c6
    MOV EDX,dword ptr [ESP + 0x1814]    ; 005680c7
    PUSH EDX                            ; 005680ce
    PUSH EDI                            ; 005680cf
    PUSH EBX                            ; 005680d0
    LEA ESI,[ESP + 0x1648]              ; 005680d1
    CALL core_skeleton.cpp_FUN_005635a0 ; 005680d8
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005635a0()
    ADD ESP,0x14                        ; 005680dd
    MOV EDI,dword ptr [ESP + 0x1848]    ; 005680e0
    LEA ESI,[ESP + 0x1634]              ; 005680e7
    LEA EDI,[EDI + 0x6b0]               ; 005680ee
    MOVSD ES:EDI,ESI                    ; 005680f4
    MOVSD ES:EDI,ESI                    ; 005680f5
    MOVSD ES:EDI,ESI                    ; 005680f6
    MOVSD ES:EDI,ESI                    ; 005680f7
    JMP 0x005676c4                      ; 005680f8
        ;   XREF to: 005676c4 (UNCONDITIONAL_JUMP)  ; LAB_005676c4

