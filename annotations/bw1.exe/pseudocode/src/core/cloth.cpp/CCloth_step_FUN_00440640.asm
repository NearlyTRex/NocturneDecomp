; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_step_FUN_00440640(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   floor_y
; CDeformableModelInstance * Stack[0x18]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined        Stack[-0x2dc]:1  local_2dc
; undefined4       Stack[-0x2d4]:4  local_2d4
; undefined4       Stack[-0x2c8]:4  local_2c8
; undefined4       Stack[-0x2bc]:4  local_2bc
; undefined4       Stack[-0x2b4]:4  local_2b4
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined4       Stack[-0x2a8]:4  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined        Stack[-0x29c]:1  local_29c
; undefined4       Stack[-0x290]:4  local_290
; undefined4       Stack[-0x28c]:4  local_28c
; undefined4       Stack[-0x288]:4  local_288
; undefined4       Stack[-0x284]:4  local_284
; undefined4       Stack[-0x280]:4  local_280
; undefined4       Stack[-0x27c]:4  local_27c
; undefined4       Stack[-0x278]:4  local_278
; undefined4       Stack[-0x274]:4  local_274
; undefined4       Stack[-0x270]:4  local_270
; undefined4       Stack[-0x26c]:4  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  local_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined4       Stack[-0x244]:4  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined4       Stack[-0x230]:4  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x228]:4  local_228
; undefined4       Stack[-0x224]:4  local_224
; undefined4       Stack[-0x220]:4  local_220
; undefined4       Stack[-0x21c]:4  local_21c
; undefined        Stack[-0x218]:1  local_218
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1ec]:4  local_1ec
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined        Stack[-0x194]:1  local_194
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined        Stack[-0xf8]:1  local_f8
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
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
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
;   core_cloth.cpp_CCloth_process_FUN_00440610 at 0044062e
;
; Referenced Globals:
;   undefined4 DAT_005d68b8
;   undefined4 DAT_005d68c0
;   undefined4 DAT_005d68c8
;   undefined4 DAT_005d68d0
;   undefined4 DAT_005fd8d0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_cloth.cpp_CCloth_applyConstraints_FUN_0043fd50
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043fbd0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dirmat.cpp_FUN_0045f700
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440640
        ;   Label: core_cloth.cpp_CCloth_step_FUN_00440640
    PUSH ESI                            ; 00440641
    PUSH EDI                            ; 00440642
    PUSH EBP                            ; 00440643
    MOV EBP,ESP                         ; 00440644
    SUB ESP,0x2cc                       ; 00440646
    AND ESP,0xfffffff8                  ; 0044064c
    XOR EDX,EDX                         ; 0044064f
    FLD float ptr [EBP + 0x24]          ; 00440651
    MOV dword ptr [ESP + 0x23c],EDX     ; 00440654
    FCOMP double ptr [0x005d68b8]       ; 0044065b | DAT_005d68b8
    FNSTSW AX                           ; 00440661
    SAHF                                ; 00440663
    JNC 0x00441157                      ; 00440664
        ;   XREF to: 00441157 (CONDITIONAL_JUMP)  ; LAB_00441157
    FLD float ptr [EBP + 0x20]          ; 0044066a
        ;   Label: LAB_0044066a
    FCOMP double ptr [0x005d68c0]       ; 0044066d | DAT_005d68c0
    FNSTSW AX                           ; 00440673
    SAHF                                ; 00440675
    JNC 0x0044067f                      ; 00440676
        ;   XREF to: 0044067f (CONDITIONAL_JUMP)  ; LAB_0044067f
    MOV dword ptr [EBP + 0x20],0x3c23d70a ; 00440678
    FLD float ptr [EBP + 0x20]          ; 0044067f
        ;   Label: LAB_0044067f
    FLD1                                ; 00440682
    FDIVRP                              ; 00440684
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440686
    FSTP float ptr [EAX + 0x3ab00]      ; 00440689
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044068f
    FLD float ptr [EAX + 0x4]           ; 00440692
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440695
    FSUBR float ptr [EBP + 0x24]        ; 00440698
    MOV ESI,dword ptr [EBP + 0x28]      ; 0044069b
    FSTP float ptr [EAX + 0x3ab04]      ; 0044069e
    TEST ESI,ESI                        ; 004406a4
    JZ 0x004408ce                       ; 004406a6
        ;   XREF to: 004408ce (CONDITIONAL_JUMP)  ; LAB_004408ce
    XOR EDI,EDI                         ; 004406ac
    MOV EDX,dword ptr [EAX + 0x39ce8]   ; 004406ae
    MOV dword ptr [ESP + 0x24c],EDI     ; 004406b4
    TEST EDX,EDX                        ; 004406bb
    JLE 0x00440876                      ; 004406bd
        ;   XREF to: 00440876 (CONDITIONAL_JUMP)  ; LAB_00440876
    LEA EAX,[ESI + 0xe80]               ; 004406c3
    MOV dword ptr [ESP + 0x240],EAX     ; 004406c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004406d0
    ADD EAX,0x398                       ; 004406d3
    MOV dword ptr [ESP + 0x2c0],EAX     ; 004406d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004406df
    MOV dword ptr [ESP + 0x29c],EAX     ; 004406e2
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004406e9
        ;   Label: LAB_004406e9
    IMUL EBX,dword ptr [EAX + 0x39cec],0x11c ; 004406f0
    ADD EBX,dword ptr [ESP + 0x2c0]     ; 004406fa
    XOR ESI,ESI                         ; 00440701
    MOV dword ptr [EBX + 0x8],0x0       ; 00440703
    MOV dword ptr [ESP + 0x264],ESI     ; 0044070a
    MOV EDI,dword ptr [EBX + 0xdc]      ; 00440711
    MOV EAX,dword ptr [EBX + 0x8]       ; 00440717
    MOV dword ptr [EBX + 0x4],EAX       ; 0044071a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044071d
    MOV dword ptr [EBX],EAX             ; 00440720
    TEST EDI,EDI                        ; 00440722
    JLE 0x00440845                      ; 00440724
        ;   XREF to: 00440845 (CONDITIONAL_JUMP)  ; LAB_00440845
    LEA EAX,[EBX + 0x110]               ; 0044072a
    LEA EDX,[EBX + 0xec]                ; 00440730
    MOV dword ptr [ESP + 0x298],EAX     ; 00440736
    MOV dword ptr [ESP + 0x290],EDX     ; 0044073d
    MOV dword ptr [ESP + 0x294],EBX     ; 00440744
    MOV EAX,dword ptr [ESP + 0x294]     ; 0044074b
        ;   Label: LAB_0044074b
    IMUL EAX,dword ptr [EAX + 0xe0],0x30 ; 00440752
    ADD EAX,dword ptr [ESP + 0x240]     ; 00440759
    PUSH EAX                            ; 00440760
    MOV ECX,dword ptr [ESP + 0x294]     ; 00440761
    PUSH ECX                            ; 00440768
    LEA ESI,[ESP + 0x154]               ; 00440769
    LEA EDI,[ESP + 0xa0]                ; 00440770
    CALL core_xform.cpp_FUN_005b5080    ; 00440777
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x154]               ; 0044077c
    ADD ESP,0x8                         ; 00440783
    MOVSD ES:EDI,ESI                    ; 00440786
    MOVSD ES:EDI,ESI                    ; 00440787
    MOVSD ES:EDI,ESI                    ; 00440788
    MOV EAX,dword ptr [ESP + 0x298]     ; 00440789
    FLD float ptr [ESP + 0x98]          ; 00440790
    FMUL float ptr [EAX]                ; 00440797
    FLD float ptr [ESP + 0x9c]          ; 00440799
    FXCH                                ; 004407a0
    FSTP float ptr [ESP + 0x1f4]        ; 004407a2
    FMUL float ptr [EAX]                ; 004407a9
    FLD float ptr [ESP + 0xa0]          ; 004407ab
    FXCH                                ; 004407b2
    FSTP float ptr [ESP + 0x1f8]        ; 004407b4
    FMUL float ptr [EAX]                ; 004407bb
    MOV EDX,dword ptr [ESP + 0x264]     ; 004407bd
    LEA EDI,[ESP + 0x224]               ; 004407c4
    LEA ESI,[ESP + 0x1f4]               ; 004407cb
    ADD EAX,0x4                         ; 004407d2
    INC EDX                             ; 004407d5
    MOV dword ptr [ESP + 0x298],EAX     ; 004407d6
    FSTP float ptr [ESP + 0x1fc]        ; 004407dd
    MOVSD ES:EDI,ESI                    ; 004407e4
    MOVSD ES:EDI,ESI                    ; 004407e5
    MOVSD ES:EDI,ESI                    ; 004407e6
    MOV dword ptr [ESP + 0x264],EDX     ; 004407e7
    FLD float ptr [EBX]                 ; 004407ee
    FLD float ptr [EBX + 0x4]           ; 004407f0
    FLD float ptr [EBX + 0x8]           ; 004407f3
    MOV ESI,dword ptr [ESP + 0x290]     ; 004407f6
    MOV EDI,dword ptr [ESP + 0x294]     ; 004407fd
    MOV ECX,dword ptr [EBX + 0xdc]      ; 00440804
    FXCH ST2                            ; 0044080a
    FADD float ptr [ESP + 0x224]        ; 0044080c
    ADD ESI,0xc                         ; 00440813
    ADD EDI,0x4                         ; 00440816
    FSTP float ptr [EBX]                ; 00440819
    FADD float ptr [ESP + 0x228]        ; 0044081b
    MOV dword ptr [ESP + 0x290],ESI     ; 00440822
    FSTP float ptr [EBX + 0x4]          ; 00440829
    FADD float ptr [ESP + 0x22c]        ; 0044082c
    MOV dword ptr [ESP + 0x294],EDI     ; 00440833
    FSTP float ptr [EBX + 0x8]          ; 0044083a
    CMP EDX,ECX                         ; 0044083d
    JL 0x0044074b                       ; 0044083f
        ;   XREF to: 0044074b (CONDITIONAL_JUMP)  ; LAB_0044074b
    MOV ECX,dword ptr [ESP + 0x29c]     ; 00440845
        ;   Label: LAB_00440845
    MOV EBX,dword ptr [ESP + 0x24c]     ; 0044084c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440853
    ADD ECX,0x4                         ; 00440856
    INC EBX                             ; 00440859
    MOV ESI,dword ptr [EDX + 0x39ce8]   ; 0044085a
    MOV dword ptr [ESP + 0x29c],ECX     ; 00440860
    MOV dword ptr [ESP + 0x24c],EBX     ; 00440867
    CMP EBX,ESI                         ; 0044086e
    JL 0x004406e9                       ; 00440870
        ;   XREF to: 004406e9 (CONDITIONAL_JUMP)  ; LAB_004406e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440876
        ;   Label: LAB_00440876
    MOV EDI,dword ptr [EAX + 0x37b4c]   ; 00440879
    XOR EBX,EBX                         ; 0044087f
    TEST EDI,EDI                        ; 00440881
    JLE 0x004408b0                      ; 00440883
        ;   XREF to: 004408b0 (CONDITIONAL_JUMP)  ; LAB_004408b0
    MOV EAX,dword ptr [EBP + 0x28]      ; 00440885
        ;   Label: LAB_00440885
    PUSH EAX                            ; 00440888
    PUSH EBX                            ; 00440889
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044088a
    PUSH EDX                            ; 0044088d
    CALL core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043fbd0 ; 0044088e
        ;   XREF to: 0043fbd0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043fbd0(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 00440893
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440896
    INC EBX                             ; 00440899
    CMP EBX,dword ptr [EAX + 0x37b4c]   ; 0044089a
    JL 0x00440885                       ; 004408a0
        ;   XREF to: 00440885 (CONDITIONAL_JUMP)  ; LAB_00440885
    LEA EAX,[EAX]                       ; 004408a2
    LEA EDX,[EDX]                       ; 004408a8
    MOV EAX,EAX                         ; 004408ae
    MOV EBX,dword ptr [EBP + 0x28]      ; 004408b0
        ;   Label: LAB_004408b0
    PUSH EBX                            ; 004408b3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004408b4
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004408b9
    ADD ESP,0x4                         ; 004408bc
    TEST EAX,EAX                        ; 004408bf
    JNZ 0x004408ce                      ; 004408c1
        ;   XREF to: 004408ce (CONDITIONAL_JUMP)  ; LAB_004408ce
    MOV dword ptr [ESP + 0x23c],0x1     ; 004408c3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004408ce
        ;   Label: LAB_004408ce
    MOV ESI,dword ptr [EAX + 0x104]     ; 004408d1
    XOR EBX,EBX                         ; 004408d7
    TEST ESI,ESI                        ; 004408d9
    JLE 0x00440a1c                      ; 004408db
        ;   XREF to: 00440a1c (CONDITIONAL_JUMP)  ; LAB_00440a1c
    ADD EAX,0x37b50                     ; 004408e1
    MOV dword ptr [ESP + 0x260],EAX     ; 004408e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004408ed
    ADD EAX,0x398                       ; 004408f0
    MOV dword ptr [ESP + 0x250],EAX     ; 004408f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004408fc
    MOV dword ptr [ESP + 0x2a0],EAX     ; 004408ff
    IMUL EAX,EBX,0x11c                  ; 00440906
        ;   Label: LAB_00440906
    MOV dword ptr [ESP + 0x244],EAX     ; 0044090c
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 00440913
    MOV EAX,dword ptr [EAX + 0x470]     ; 0044091a
    CMP EAX,-0x1                        ; 00440920
    JZ 0x004409f6                       ; 00440923
        ;   XREF to: 004409f6 (CONDITIONAL_JUMP)  ; LAB_004409f6
    IMUL EAX,EAX,0xac                   ; 00440929
    MOV EDX,dword ptr [ESP + 0x260]     ; 0044092f
    ADD EDX,EAX                         ; 00440936
    XOR ESI,ESI                         ; 00440938
    MOV EAX,dword ptr [EDX + 0x44]      ; 0044093a
    MOV dword ptr [ESP + 0x248],EDX     ; 0044093d
    MOV dword ptr [ESP + 0x190],EAX     ; 00440944
    LEA EAX,[ESP + 0x188]               ; 0044094b
    MOV dword ptr [ESP + 0x188],ESI     ; 00440952
    PUSH EAX                            ; 00440959
    LEA EAX,[EDX + 0x78]                ; 0044095a
    MOV dword ptr [ESP + 0x190],ESI     ; 0044095d
    PUSH EAX                            ; 00440964
    LEA ESI,[ESP + 0xd0]                ; 00440965
    LEA EDI,[ESP + 0x40]                ; 0044096c
    CALL core_dirmat.cpp_FUN_0045f690   ; 00440970
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 00440975
    LEA ESI,[ESP + 0xc8]                ; 00440978
    MOV EAX,dword ptr [ESP + 0x248]     ; 0044097f
    MOVSD ES:EDI,ESI                    ; 00440986
    MOVSD ES:EDI,ESI                    ; 00440987
    MOVSD ES:EDI,ESI                    ; 00440988
    MOV EDX,dword ptr [ESP + 0x250]     ; 00440989
    FLD float ptr [EAX + 0xa0]          ; 00440990
    FADD float ptr [ESP + 0x38]         ; 00440996
    LEA EDI,[ESP + 0x74]                ; 0044099a
    FSTP float ptr [ESP + 0xf8]         ; 0044099e
    FLD float ptr [EAX + 0xa4]          ; 004409a5
    FADD float ptr [ESP + 0x3c]         ; 004409ab
    LEA ESI,[ESP + 0xf8]                ; 004409af
    FSTP float ptr [ESP + 0xfc]         ; 004409b6
    FLD float ptr [EAX + 0xa8]          ; 004409bd
    FADD float ptr [ESP + 0x40]         ; 004409c3
    MOV EAX,dword ptr [ESP + 0x244]     ; 004409c7
    FSTP float ptr [ESP + 0x100]        ; 004409ce
    ADD EDX,EAX                         ; 004409d5
    LEA EAX,[ESP + 0x74]                ; 004409d7
    MOVSD ES:EDI,ESI                    ; 004409db
    MOVSD ES:EDI,ESI                    ; 004409dc
    MOVSD ES:EDI,ESI                    ; 004409dd
    CMP EDX,EAX                         ; 004409de
    JZ 0x004409f6                       ; 004409e0
        ;   XREF to: 004409f6 (CONDITIONAL_JUMP)  ; LAB_004409f6
    MOV EAX,dword ptr [ESP + 0x74]      ; 004409e2
    MOV dword ptr [EDX],EAX             ; 004409e6
    MOV EAX,dword ptr [ESP + 0x78]      ; 004409e8
    MOV dword ptr [EDX + 0x4],EAX       ; 004409ec
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004409ef
    MOV dword ptr [EDX + 0x8],EAX       ; 004409f3
    MOV EDI,dword ptr [ESP + 0x2a0]     ; 004409f6
        ;   Label: LAB_004409f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004409fd
    INC EBX                             ; 00440a00
    ADD EDI,0x11c                       ; 00440a01
    MOV EDX,dword ptr [EAX + 0x104]     ; 00440a07
    MOV dword ptr [ESP + 0x2a0],EDI     ; 00440a0d
    CMP EBX,EDX                         ; 00440a14
    JL 0x00440906                       ; 00440a16
        ;   XREF to: 00440906 (CONDITIONAL_JUMP)  ; LAB_00440906
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00440a1c
        ;   Label: LAB_00440a1c
    PUSH ECX                            ; 00440a1f
    LEA EAX,[ESP + 0x8]                 ; 00440a20
    PUSH EAX                            ; 00440a24
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 00440a25
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x00622c18]      ; 00440a2a | g_CDemonSetPtr
    LEA EDI,[ESP + 0x208]               ; 00440a30
    LEA ESI,[ESI + 0x15ac70]            ; 00440a37
    ADD ESP,0x8                         ; 00440a3d
    MOVSD ES:EDI,ESI                    ; 00440a40 | g_CDemonSetInstance.active_fog.scroll.x
    MOVSD ES:EDI,ESI                    ; 00440a41 | g_CDemonSetInstance.active_fog.scroll.y
    MOVSD ES:EDI,ESI                    ; 00440a42 | g_CDemonSetInstance.active_fog.scroll.z
    FLD float ptr [ESP + 0x204]         ; 00440a43
    FMUL ST0                            ; 00440a4a
    MOV EAX,dword ptr [ESP + 0xc]       ; 00440a4c
    FLD float ptr [ESP + 0x200]         ; 00440a50
    FMUL ST0                            ; 00440a57
    MOV dword ptr [ESP + 0x218],EAX     ; 00440a59
    FADDP                               ; 00440a60
    MOV EAX,dword ptr [ESP + 0x18]      ; 00440a62
    FLD float ptr [ESP + 0x208]         ; 00440a66
    FMUL ST0                            ; 00440a6d
    MOV dword ptr [ESP + 0x21c],EAX     ; 00440a6f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00440a76
    FADDP                               ; 00440a7a
    MOV dword ptr [ESP + 0x220],EAX     ; 00440a7c
    FSQRT                               ; 00440a83
    FLDZ                                ; 00440a85
    FXCH                                ; 00440a87
    FSTP float ptr [ESP + 0x254]        ; 00440a89
    FCOMP float ptr [ESP + 0x254]       ; 00440a90
    FNSTSW AX                           ; 00440a97
    SAHF                                ; 00440a99
    JNC 0x00441163                      ; 00440a9a
        ;   XREF to: 00441163 (CONDITIONAL_JUMP)  ; LAB_00441163
    FLD1                                ; 00440aa0
    FLD float ptr [ESP + 0x200]         ; 00440aa2
    FXCH                                ; 00440aa9
    FDIV float ptr [ESP + 0x254]        ; 00440aab
    FXCH                                ; 00440ab2
    FMUL ST1                            ; 00440ab4
    FLD float ptr [ESP + 0x204]         ; 00440ab6
    FMUL ST2                            ; 00440abd
    FLD float ptr [ESP + 0x208]         ; 00440abf
    FMULP ST3                           ; 00440ac6
    FXCH                                ; 00440ac8
    FSTP float ptr [ESP + 0x200]        ; 00440aca
    FSTP float ptr [ESP + 0x204]        ; 00440ad1
    FSTP float ptr [ESP + 0x208]        ; 00440ad8
    FLD float ptr [ESP + 0x204]         ; 00440adf
        ;   Label: LAB_00440adf
    FMUL float ptr [ESP + 0x21c]        ; 00440ae6
    FLD float ptr [ESP + 0x200]         ; 00440aed
    FMUL float ptr [ESP + 0x218]        ; 00440af4
    FADDP                               ; 00440afb
    FLD float ptr [ESP + 0x208]         ; 00440afd
    FMUL float ptr [ESP + 0x220]        ; 00440b04
    FADDP                               ; 00440b0b
    FST float ptr [ESP + 0x25c]         ; 00440b0d
    MOV EAX,dword ptr [ESP + 0x25c]     ; 00440b14
    FLDZ                                ; 00440b1b
    MOV dword ptr [ESP],EAX             ; 00440b1d
    FCOMPP                              ; 00440b20
    FNSTSW AX                           ; 00440b22
    SAHF                                ; 00440b24
    JNC 0x00440b2c                      ; 00440b25
        ;   XREF to: 00440b2c (CONDITIONAL_JUMP)  ; LAB_00440b2c
    XOR EAX,EAX                         ; 00440b27
    MOV dword ptr [ESP],EAX             ; 00440b29
    FLD float ptr [ESP]                 ; 00440b2c
        ;   Label: LAB_00440b2c
    MOV EAX,[0x00622c18]                ; 00440b2f | g_CDemonSetPtr
    FMUL double ptr [0x005d68c8]        ; 00440b34 | DAT_005d68c8
    FLD float ptr [EAX + 0x15ac70]      ; 00440b3a | g_CDemonSetInstance.active_fog.scroll.x
    FXCH                                ; 00440b40
    FSTP float ptr [ESP]                ; 00440b42
    FMUL float ptr [ESP]                ; 00440b45
    FSTP float ptr [ESP + 0xa4]         ; 00440b48
    FLD float ptr [EAX + 0x15ac74]      ; 00440b4f | g_CDemonSetInstance.active_fog.scroll.y
    FMUL float ptr [ESP]                ; 00440b55
    FSTP float ptr [ESP + 0xa8]         ; 00440b58
    FLD float ptr [EAX + 0x15ac78]      ; 00440b5f | g_CDemonSetInstance.active_fog.scroll.z
    FMUL float ptr [ESP]                ; 00440b65
    LEA EDI,[ESP + 0x230]               ; 00440b68
    LEA ESI,[ESP + 0xa4]                ; 00440b6f
    LEA EAX,[ESP + 0x230]               ; 00440b76
    FSTP float ptr [ESP + 0xac]         ; 00440b7d
    PUSH EAX                            ; 00440b84
    LEA EAX,[ESP + 0x8]                 ; 00440b85
    MOVSD ES:EDI,ESI                    ; 00440b89
    MOVSD ES:EDI,ESI                    ; 00440b8a
    MOVSD ES:EDI,ESI                    ; 00440b8b
    PUSH EAX                            ; 00440b8c
    LEA ESI,[ESP + 0x184]               ; 00440b8d
    LEA EDI,[ESP + 0x64]                ; 00440b94
    CALL core_dirmat.cpp_FUN_0045f700   ; 00440b98
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x184]               ; 00440b9d
    MOV EBX,dword ptr [EBP + 0x14]      ; 00440ba4
    ADD ESP,0x8                         ; 00440ba7
    MOVSD ES:EDI,ESI                    ; 00440baa
    MOVSD ES:EDI,ESI                    ; 00440bab
    MOVSD ES:EDI,ESI                    ; 00440bac
    FLD float ptr [ESP + 0x60]          ; 00440bad
    FLD float ptr [ESP + 0x5c]          ; 00440bb1
    FADD float ptr [EBX + 0x3ab24]      ; 00440bb5
    FLD float ptr [ESP + 0x64]          ; 00440bbb
    FXCH                                ; 00440bbf
    FSTP float ptr [ESP + 0x1d0]        ; 00440bc1
    FXCH                                ; 00440bc8
    FADD float ptr [EBX + 0x3ab28]      ; 00440bca
    LEA EDI,[ESP + 0x158]               ; 00440bd0
    FSTP float ptr [ESP + 0x1d4]        ; 00440bd7
    FADD float ptr [EBX + 0x3ab2c]      ; 00440bde
    LEA ESI,[ESP + 0x1d0]               ; 00440be4
    FSTP float ptr [ESP + 0x1d8]        ; 00440beb
    MOVSD ES:EDI,ESI                    ; 00440bf2
    MOVSD ES:EDI,ESI                    ; 00440bf3
    MOVSD ES:EDI,ESI                    ; 00440bf4
    LEA EAX,[EBX + 0x3ab08]             ; 00440bf5
    MOV dword ptr [EBX + 0x3ab2c],0x0   ; 00440bfb
    MOV EDX,dword ptr [EBP + 0x18]      ; 00440c05
    MOV ECX,dword ptr [EBX + 0x3ab2c]   ; 00440c08
    MOV dword ptr [EBX + 0x3ab28],ECX   ; 00440c0e
    MOV ECX,dword ptr [EBX + 0x3ab28]   ; 00440c14
    MOV dword ptr [EBX + 0x3ab24],ECX   ; 00440c1a
    FLD float ptr [EDX]                 ; 00440c20
    FSUB float ptr [EAX]                ; 00440c22
    FSTP float ptr [ESP + 0x104]        ; 00440c24
    FLD float ptr [EDX + 0x4]           ; 00440c2b
    FSUB float ptr [EAX + 0x4]          ; 00440c2e
    LEA EDI,[ESP + 0x44]                ; 00440c31
    FSTP float ptr [ESP + 0x108]        ; 00440c35
    FLD float ptr [EDX + 0x8]           ; 00440c3c
    FSUB float ptr [EAX + 0x8]          ; 00440c3f
    LEA ESI,[ESP + 0x104]               ; 00440c42
    FSTP float ptr [ESP + 0x10c]        ; 00440c49
    MOVSD ES:EDI,ESI                    ; 00440c50
    MOVSD ES:EDI,ESI                    ; 00440c51
    MOVSD ES:EDI,ESI                    ; 00440c52
    CMP EAX,EDX                         ; 00440c53
    JZ 0x00440c67                       ; 00440c55
        ;   XREF to: 00440c67 (CONDITIONAL_JUMP)  ; LAB_00440c67
    MOV ECX,dword ptr [EDX]             ; 00440c57
    MOV dword ptr [EAX],ECX             ; 00440c59
    MOV ECX,dword ptr [EDX + 0x4]       ; 00440c5b
    MOV dword ptr [EAX + 0x4],ECX       ; 00440c5e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00440c61
    MOV dword ptr [EAX + 0x8],ECX       ; 00440c64
    LEA EAX,[ESP + 0x44]                ; 00440c67
        ;   Label: LAB_00440c67
    PUSH EAX                            ; 00440c6b
    LEA EAX,[ESP + 0x8]                 ; 00440c6c
    PUSH EAX                            ; 00440c70
    LEA ESI,[ESP + 0x1f0]               ; 00440c71
    LEA EDI,[ESP + 0x70]                ; 00440c78
    CALL core_dirmat.cpp_FUN_0045f700   ; 00440c7c
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x1f0]               ; 00440c81
    ADD ESP,0x8                         ; 00440c88
    MOVSD ES:EDI,ESI                    ; 00440c8b
    MOVSD ES:EDI,ESI                    ; 00440c8c
    MOVSD ES:EDI,ESI                    ; 00440c8d
    FLD1                                ; 00440c8e
    FLD float ptr [ESP + 0x68]          ; 00440c90
    FXCH                                ; 00440c94
    FDIV float ptr [EBP + 0x20]         ; 00440c96
    FXCH                                ; 00440c99
    FMUL ST1                            ; 00440c9b
    FLD float ptr [ESP + 0x6c]          ; 00440c9d
    FMUL ST2                            ; 00440ca1
    FLD float ptr [ESP + 0x70]          ; 00440ca3
    FMUL ST3                            ; 00440ca7
    LEA EDI,[ESP + 0xd4]                ; 00440ca9
    LEA ESI,[ESP + 0x140]               ; 00440cb0
    FXCH ST2                            ; 00440cb7
    FSTP float ptr [ESP + 0x140]        ; 00440cb9
    FSTP float ptr [ESP + 0x144]        ; 00440cc0
    FSTP float ptr [ESP + 0x148]        ; 00440cc7
    MOVSD ES:EDI,ESI                    ; 00440cce
    MOVSD ES:EDI,ESI                    ; 00440ccf
    MOVSD ES:EDI,ESI                    ; 00440cd0
    FLD float ptr [ESP + 0xd4]          ; 00440cd1
    FLD float ptr [ESP + 0xd8]          ; 00440cd8
    FLD float ptr [ESP + 0xdc]          ; 00440cdf
    LEA EDI,[ESP + 0xb0]                ; 00440ce6
    LEA ESI,[ESP + 0x50]                ; 00440ced
    FXCH ST2                            ; 00440cf1
    FSUB float ptr [ESP + 0x158]        ; 00440cf3
    FXCH                                ; 00440cfa
    FSUB float ptr [ESP + 0x15c]        ; 00440cfc
    FXCH ST2                            ; 00440d03
    FSUB float ptr [ESP + 0x160]        ; 00440d05
    FXCH                                ; 00440d0c
    FSTP float ptr [ESP + 0x50]         ; 00440d0e
    FXCH                                ; 00440d12
    FSTP float ptr [ESP + 0x54]         ; 00440d14
    FSTP float ptr [ESP + 0x58]         ; 00440d18
    MOVSD ES:EDI,ESI                    ; 00440d1c
    MOVSD ES:EDI,ESI                    ; 00440d1d
    MOVSD ES:EDI,ESI                    ; 00440d1e
    FLD float ptr [ESP + 0xb0]          ; 00440d1f
    FMUL ST1                            ; 00440d26
    FLD float ptr [ESP + 0xb4]          ; 00440d28
    FMUL ST2                            ; 00440d2f
    FLD float ptr [ESP + 0xb8]          ; 00440d31
    FMULP ST3                           ; 00440d38
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00440d3a
    LEA EDI,[ESP + 0x1b8]               ; 00440d3d
    LEA ESI,[ESP + 0x1c4]               ; 00440d44
    FXCH                                ; 00440d4b
    FSTP float ptr [ESP + 0x1c4]        ; 00440d4d
    FSTP float ptr [ESP + 0x1c8]        ; 00440d54
    FSTP float ptr [ESP + 0x1cc]        ; 00440d5b
    MOVSD ES:EDI,ESI                    ; 00440d62
    MOVSD ES:EDI,ESI                    ; 00440d63
    MOVSD ES:EDI,ESI                    ; 00440d64
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440d65
    FLD float ptr [EDX]                 ; 00440d68
    FSUB float ptr [EAX + 0x3ab14]      ; 00440d6a
    ADD EAX,0x3ab14                     ; 00440d70
    FSTP float ptr [ESP + 0x164]        ; 00440d75
    FLD float ptr [EDX + 0x4]           ; 00440d7c
    FSUB float ptr [EAX + 0x4]          ; 00440d7f
    LEA EDI,[ESP + 0x1a0]               ; 00440d82
    FSTP float ptr [ESP + 0x168]        ; 00440d89
    FLD float ptr [EDX + 0x8]           ; 00440d90
    FSUB float ptr [EAX + 0x8]          ; 00440d93
    LEA ESI,[ESP + 0x164]               ; 00440d96
    FSTP float ptr [ESP + 0x16c]        ; 00440d9d
    MOVSD ES:EDI,ESI                    ; 00440da4
    MOVSD ES:EDI,ESI                    ; 00440da5
    MOVSD ES:EDI,ESI                    ; 00440da6
    CMP EAX,EDX                         ; 00440da7
    JZ 0x00440dbb                       ; 00440da9
        ;   XREF to: 00440dbb (CONDITIONAL_JUMP)  ; LAB_00440dbb
    MOV ECX,dword ptr [EDX]             ; 00440dab
    MOV dword ptr [EAX],ECX             ; 00440dad
    MOV ECX,dword ptr [EDX + 0x4]       ; 00440daf
    MOV dword ptr [EAX + 0x4],ECX       ; 00440db2
    MOV ECX,dword ptr [EDX + 0x8]       ; 00440db5
    MOV dword ptr [EAX + 0x8],ECX       ; 00440db8
    PUSH dword ptr [ESP + 0x1a4]        ; 00440dbb
        ;   Label: LAB_00440dbb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00440dc2
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x2cc],EAX     ; 00440dc7
    FLD float ptr [ESP + 0x2cc]         ; 00440dce
    ADD ESP,0x4                         ; 00440dd5
    FLD1                                ; 00440dd8
    FDIV float ptr [EBP + 0x20]         ; 00440dda
    FXCH                                ; 00440ddd
    FMUL ST1                            ; 00440ddf
    FMULP                               ; 00440de1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440de3
    XOR EDI,EDI                         ; 00440de6
    MOV EBX,dword ptr [EAX + 0x104]     ; 00440de8
    FSTP float ptr [ESP + 0x2b0]        ; 00440dee
    TEST EBX,EBX                        ; 00440df5
    JLE 0x00440e8b                      ; 00440df7
        ;   XREF to: 00440e8b (CONDITIONAL_JUMP)  ; LAB_00440e8b
    MOV EBX,dword ptr [EBP + 0x14]      ; 00440dfd
    ADD EAX,0x398                       ; 00440e00
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440e05
    MOV dword ptr [ESP + 0x2ac],EAX     ; 00440e08
    ADD EBX,0x464                       ; 00440e0f
    LEA ESI,[EDX + 0x3a4]               ; 00440e15
    IMUL EAX,EDI,0x11c                  ; 00440e1b
        ;   Label: LAB_00440e1b
    MOV dword ptr [ESI + 0x8],0x0       ; 00440e21
    MOV ECX,dword ptr [ESP + 0x2ac]     ; 00440e28
    FLD float ptr [ESI + 0x8]           ; 00440e2f
    FST float ptr [ESI + 0x4]           ; 00440e32
    FSTP float ptr [ESI]                ; 00440e35
    MOV dword ptr [EDX + 0x450],0x0     ; 00440e37
    ADD EAX,ECX                         ; 00440e41
    MOV dword ptr [EDX + 0x454],0x0     ; 00440e43
    CMP EBX,EAX                         ; 00440e4d
    JZ 0x00440e6b                       ; 00440e4f
        ;   XREF to: 00440e6b (CONDITIONAL_JUMP)  ; LAB_00440e6b
    MOV ECX,dword ptr [EAX]             ; 00440e51
    MOV dword ptr [ESI + 0xc0],ECX      ; 00440e53
    MOV ECX,dword ptr [EAX + 0x4]       ; 00440e59
    MOV dword ptr [ESI + 0xc4],ECX      ; 00440e5c
    MOV ECX,dword ptr [EAX + 0x8]       ; 00440e62
    MOV dword ptr [ESI + 0xc8],ECX      ; 00440e65
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440e6b
        ;   Label: LAB_00440e6b
    ADD EBX,0x11c                       ; 00440e6e
    ADD EDX,0x11c                       ; 00440e74
    INC EDI                             ; 00440e7a
    MOV ECX,dword ptr [EAX + 0x104]     ; 00440e7b
    ADD ESI,0x11c                       ; 00440e81
    CMP EDI,ECX                         ; 00440e87
    JL 0x00440e1b                       ; 00440e89
        ;   XREF to: 00440e1b (CONDITIONAL_JUMP)  ; LAB_00440e1b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440e8b
        ;   Label: LAB_00440e8b
    FLD float ptr [EAX + 0x37b18]       ; 00440e8e
    FCHS                                ; 00440e94
    FSTP float ptr [ESP + 0x2c8]        ; 00440e96
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 00440e9d
    LEA ESI,[ESP + 0x170]               ; 00440ea4
    MOV dword ptr [ESP + 0xe4],EAX      ; 00440eab
    LEA EAX,[ESP + 0xe0]                ; 00440eb2
    LEA EDI,[ESP + 0x8c]                ; 00440eb9
    PUSH EAX                            ; 00440ec0
    LEA EAX,[ESP + 0x8]                 ; 00440ec1
    XOR EBX,EBX                         ; 00440ec5
    PUSH EAX                            ; 00440ec7
    MOV dword ptr [ESP + 0xe8],EBX      ; 00440ec8
    MOV dword ptr [ESP + 0xf0],EBX      ; 00440ecf
    CALL core_dirmat.cpp_FUN_0045f700   ; 00440ed6
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    ADD ESP,0x8                         ; 00440edb
    LEA ESI,[ESP + 0x170]               ; 00440ede
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440ee5
    MOVSD ES:EDI,ESI                    ; 00440ee8
    MOVSD ES:EDI,ESI                    ; 00440ee9
    MOVSD ES:EDI,ESI                    ; 00440eea
    FLD float ptr [EAX + 0x37b18]       ; 00440eeb
    FDIV float ptr [EAX + 0x37b1c]      ; 00440ef1
    MOV dword ptr [ESP + 0x2a8],EBX     ; 00440ef7
    MOV EDX,dword ptr [EAX + 0x104]     ; 00440efe
    FSTP float ptr [ESP + 0x2b8]        ; 00440f04
    TEST EDX,EDX                        ; 00440f0b
    JLE 0x00440fe3                      ; 00440f0d
        ;   XREF to: 00440fe3 (CONDITIONAL_JUMP)  ; LAB_00440fe3
    FLD float ptr [ESP + 0x2b8]         ; 00440f13
    FLD float ptr [ESP + 0x1b8]         ; 00440f1a
    FMUL ST1                            ; 00440f21
    FLD float ptr [ESP + 0x1bc]         ; 00440f23
    FMUL ST2                            ; 00440f2a
    FLD float ptr [ESP + 0x1c0]         ; 00440f2c
    FMUL ST3                            ; 00440f33
    FLD float ptr [ESP + 0x2b0]         ; 00440f35
    FMULP ST4                           ; 00440f3c
    ADD EAX,0x37b20                     ; 00440f3e
    MOV dword ptr [ESP + 0x2a4],EBX     ; 00440f43
    MOV dword ptr [ESP + 0x270],EAX     ; 00440f4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440f51
    FXCH ST2                            ; 00440f54
    FSTP float ptr [ESP + 0x284]        ; 00440f56
    ADD EAX,0x37b30                     ; 00440f5d
    FSTP float ptr [ESP + 0x288]        ; 00440f62
    MOV dword ptr [ESP + 0x2b4],EAX     ; 00440f69
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440f70
    FSTP float ptr [ESP + 0x28c]        ; 00440f73
    ADD EAX,0x398                       ; 00440f7a
    FSTP float ptr [ESP + 0x274]        ; 00440f7f
    MOV dword ptr [ESP + 0x26c],EAX     ; 00440f86
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440f8d
        ;   Label: LAB_00440f8d
    MOV ECX,dword ptr [ESP + 0x2a4]     ; 00440f90
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 00440f97
    ADD EAX,ECX                         ; 00440f9d
    IMUL EBX,dword ptr [EAX],0x11c      ; 00440f9f
    ADD EBX,dword ptr [ESP + 0x26c]     ; 00440fa5
    CMP dword ptr [EBX + 0x74],0x0      ; 00440fac
    JZ 0x0044117f                       ; 00440fb0
        ;   XREF to: 0044117f (CONDITIONAL_JUMP)  ; LAB_0044117f
    MOV EBX,dword ptr [ESP + 0x2a4]     ; 00440fb6
        ;   Label: LAB_00440fb6
    MOV ESI,dword ptr [ESP + 0x2a8]     ; 00440fbd
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440fc4
    ADD EBX,0x4                         ; 00440fc7
    INC ESI                             ; 00440fca
    MOV EDI,dword ptr [EDX + 0x104]     ; 00440fcb
    MOV dword ptr [ESP + 0x2a4],EBX     ; 00440fd1
    MOV dword ptr [ESP + 0x2a8],ESI     ; 00440fd8
    CMP ESI,EDI                         ; 00440fdf
    JL 0x00440f8d                       ; 00440fe1
        ;   XREF to: 00440f8d (CONDITIONAL_JUMP)  ; LAB_00440f8d
    XOR EAX,EAX                         ; 00440fe3
        ;   Label: LAB_00440fe3
    MOV dword ptr [ESP + 0x2bc],EAX     ; 00440fe5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440fec
    ADD EAX,0x398                       ; 00440fef
    MOV dword ptr [ESP + 0x27c],EAX     ; 00440ff4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440ffb
        ;   Label: LAB_00440ffb
    MOV ESI,dword ptr [EAX + 0x104]     ; 00440ffe
    XOR EDI,EDI                         ; 00441004
    TEST ESI,ESI                        ; 00441006
    JLE 0x0044103e                      ; 00441008
        ;   XREF to: 0044103e (CONDITIONAL_JUMP)  ; LAB_0044103e
    XOR ESI,ESI                         ; 0044100a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044100c
        ;   Label: LAB_0044100c
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0044100f
    IMUL EBX,dword ptr [ESI + EAX*0x1],0x11c ; 00441015
    ADD EBX,dword ptr [ESP + 0x27c]     ; 0044101c
    CMP dword ptr [EBX + 0x74],0x0      ; 00441023
    JZ 0x00441464                       ; 00441027
        ;   XREF to: 00441464 (CONDITIONAL_JUMP)  ; LAB_00441464
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044102d
        ;   Label: LAB_0044102d
    INC EDI                             ; 00441030
    MOV EDX,dword ptr [EAX + 0x104]     ; 00441031
    ADD ESI,0x4                         ; 00441037
    CMP EDI,EDX                         ; 0044103a
    JL 0x0044100c                       ; 0044103c
        ;   XREF to: 0044100c (CONDITIONAL_JUMP)  ; LAB_0044100c
    MOV ECX,dword ptr [ESP + 0x2bc]     ; 0044103e
        ;   Label: LAB_0044103e
    INC ECX                             ; 00441045
    MOV dword ptr [ESP + 0x2bc],ECX     ; 00441046
    CMP ECX,0x5                         ; 0044104d
    JL 0x00440ffb                       ; 00441050
        ;   XREF to: 00440ffb (CONDITIONAL_JUMP)  ; LAB_00440ffb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441052
    MOV ESI,dword ptr [EAX + 0x104]     ; 00441055
    XOR EBX,EBX                         ; 0044105b
    TEST ESI,ESI                        ; 0044105d
    JLE 0x004410ed                      ; 0044105f
        ;   XREF to: 004410ed (CONDITIONAL_JUMP)  ; LAB_004410ed
    LEA ECX,[EAX + 0x37b2c]             ; 00441065
    LEA EDI,[EAX + 0x37b28]             ; 0044106b
    ADD EAX,0x398                       ; 00441071
    XOR ESI,ESI                         ; 00441076
    MOV dword ptr [ESP + 0x280],EAX     ; 00441078
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044107f
        ;   Label: LAB_0044107f
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 00441082
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x11c ; 00441088
    MOV EDX,dword ptr [ESP + 0x280]     ; 0044108f
    ADD EDX,EAX                         ; 00441096
    CMP dword ptr [EDX + 0xb8],0x0      ; 00441098
    JZ 0x004410ba                       ; 0044109f
        ;   XREF to: 004410ba (CONDITIONAL_JUMP)  ; LAB_004410ba
    LEA EAX,[EDX + 0x24]                ; 004410a1
    FLD float ptr [EDI]                 ; 004410a4
    FMUL float ptr [EAX]                ; 004410a6
    FSTP float ptr [EAX]                ; 004410a8
    FLD float ptr [EDI]                 ; 004410aa
    FMUL float ptr [EAX + 0x4]          ; 004410ac
    FSTP float ptr [EAX + 0x4]          ; 004410af
    FLD float ptr [EDI]                 ; 004410b2
    FMUL float ptr [EAX + 0x8]          ; 004410b4
    FSTP float ptr [EAX + 0x8]          ; 004410b7
    CMP dword ptr [EDX + 0xbc],0x0      ; 004410ba
        ;   Label: LAB_004410ba
    JZ 0x004410dc                       ; 004410c1
        ;   XREF to: 004410dc (CONDITIONAL_JUMP)  ; LAB_004410dc
    LEA EAX,[EDX + 0x24]                ; 004410c3
    FLD float ptr [ECX]                 ; 004410c6
    FMUL float ptr [EAX]                ; 004410c8
    FSTP float ptr [EAX]                ; 004410ca
    FLD float ptr [ECX]                 ; 004410cc
    FMUL float ptr [EAX + 0x4]          ; 004410ce
    FSTP float ptr [EAX + 0x4]          ; 004410d1
    FLD float ptr [ECX]                 ; 004410d4
    FMUL float ptr [EAX + 0x8]          ; 004410d6
    FSTP float ptr [EAX + 0x8]          ; 004410d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004410dc
        ;   Label: LAB_004410dc
    INC EBX                             ; 004410df
    MOV EDX,dword ptr [EAX + 0x104]     ; 004410e0
    ADD ESI,0x4                         ; 004410e6
    CMP EBX,EDX                         ; 004410e9
    JL 0x0044107f                       ; 004410eb
        ;   XREF to: 0044107f (CONDITIONAL_JUMP)  ; LAB_0044107f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004410ed
        ;   Label: LAB_004410ed
    MOV ECX,dword ptr [EAX + 0x104]     ; 004410f0
    XOR ESI,ESI                         ; 004410f6
    TEST ECX,ECX                        ; 004410f8
    JLE 0x00441150                      ; 004410fa
        ;   XREF to: 00441150 (CONDITIONAL_JUMP)  ; LAB_00441150
    LEA EDX,[EAX + 0x398]               ; 004410fc
    XOR ECX,ECX                         ; 00441102
    MOV EBX,dword ptr [EBP + 0x14]      ; 00441104
        ;   Label: LAB_00441104
    MOV EBX,dword ptr [EBX + 0x10c]     ; 00441107
    MOV EAX,EDX                         ; 0044110d
    ADD EBX,ECX                         ; 0044110f
    FLD float ptr [EAX]                 ; 00441111
    FMUL float ptr [0x005fd8d0]         ; 00441113 | DAT_005fd8d0
    FISTP dword ptr [EBX]               ; 00441119
    FLD float ptr [EAX + 0x4]           ; 0044111b
    FMUL float ptr [0x005fd8d0]         ; 0044111e | DAT_005fd8d0
    FISTP dword ptr [EBX + 0x4]         ; 00441124
    FLD float ptr [EAX + 0x8]           ; 00441127
    FMUL float ptr [0x005fd8d0]         ; 0044112a | DAT_005fd8d0
    FISTP dword ptr [EBX + 0x8]         ; 00441130
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441133
    INC ESI                             ; 00441136
    ADD EDX,0x11c                       ; 00441137
    MOV EBX,dword ptr [EAX + 0x104]     ; 0044113d
    ADD ECX,0xc                         ; 00441143
    CMP ESI,EBX                         ; 00441146
    JL 0x00441104                       ; 00441148
        ;   XREF to: 00441104 (CONDITIONAL_JUMP)  ; LAB_00441104
    LEA EAX,[EAX]                       ; 0044114a
    MOV ESP,EBP                         ; 00441150
        ;   Label: LAB_00441150
    POP EBP                             ; 00441152
    POP EDI                             ; 00441153
    POP ESI                             ; 00441154
    POP EBX                             ; 00441155
    RET                                 ; 00441156
    MOV dword ptr [EBP + 0x24],0xc61c3c00 ; 00441157
        ;   Label: LAB_00441157
    JMP 0x0044066a                      ; 0044115e
        ;   XREF to: 0044066a (UNCONDITIONAL_JUMP)  ; LAB_0044066a
    XOR EBX,EBX                         ; 00441163
        ;   Label: LAB_00441163
    MOV dword ptr [ESP + 0x204],EBX     ; 00441165
    MOV dword ptr [ESP + 0x200],EBX     ; 0044116c
    MOV dword ptr [ESP + 0x208],EBX     ; 00441173
    JMP 0x00440adf                      ; 0044117a
        ;   XREF to: 00440adf (UNCONDITIONAL_JUMP)  ; LAB_00440adf
    MOV EAX,dword ptr [ESP + 0x270]     ; 0044117f
        ;   Label: LAB_0044117f
    LEA EDX,[EBX + 0x24]                ; 00441186
    FLD float ptr [EAX]                 ; 00441189
    FMUL float ptr [EDX]                ; 0044118b
    FSTP float ptr [EDX]                ; 0044118d
    FLD float ptr [EAX]                 ; 0044118f
    FMUL float ptr [EDX + 0x4]          ; 00441191
    FSTP float ptr [EDX + 0x4]          ; 00441194
    FLD float ptr [EAX]                 ; 00441197
    FMUL float ptr [EDX + 0x8]          ; 00441199
    MOV EAX,dword ptr [ESP + 0x284]     ; 0044119c
    FSTP float ptr [EDX + 0x8]          ; 004411a3
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004411a6
    MOV EAX,dword ptr [ESP + 0x288]     ; 004411ad
    LEA EDI,[ESP + 0x134]               ; 004411b4
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004411bb
    MOV EAX,dword ptr [ESP + 0x28c]     ; 004411c2
    LEA ESI,[ESP + 0x1ac]               ; 004411c9
    MOV dword ptr [ESP + 0x1b4],EAX     ; 004411d0
    MOVSD ES:EDI,ESI                    ; 004411d7
    MOVSD ES:EDI,ESI                    ; 004411d8
    MOVSD ES:EDI,ESI                    ; 004411d9
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 004411da
    FLD float ptr [ESP + 0x134]         ; 004411e1
    FMUL float ptr [EAX]                ; 004411e8
    FLD float ptr [ESP + 0x138]         ; 004411ea
    FXCH                                ; 004411f1
    FSTP float ptr [ESP + 0x1dc]        ; 004411f3
    FMUL float ptr [EAX]                ; 004411fa
    FLD float ptr [ESP + 0x13c]         ; 004411fc
    FXCH                                ; 00441203
    FSTP float ptr [ESP + 0x1e0]        ; 00441205
    FMUL float ptr [EAX]                ; 0044120c
    LEA EDI,[ESP + 0x20c]               ; 0044120e
    LEA ESI,[ESP + 0x1dc]               ; 00441215
    FSTP float ptr [ESP + 0x1e4]        ; 0044121c
    LEA EAX,[EBX + 0xc]                 ; 00441223
    MOVSD ES:EDI,ESI                    ; 00441226
    MOVSD ES:EDI,ESI                    ; 00441227
    MOVSD ES:EDI,ESI                    ; 00441228
    FLD float ptr [ESP + 0x274]         ; 00441229
    FLD float ptr [EAX]                 ; 00441230
    FSUB float ptr [ESP + 0x20c]        ; 00441232
    FLD float ptr [EAX + 0x4]           ; 00441239
    FXCH                                ; 0044123c
    FSTP float ptr [EAX]                ; 0044123e
    FSUB float ptr [ESP + 0x210]        ; 00441240
    FLD float ptr [EAX + 0x8]           ; 00441247
    FXCH                                ; 0044124a
    FSTP float ptr [EAX + 0x4]          ; 0044124c
    FSUB float ptr [ESP + 0x214]        ; 0044124f
    FLD float ptr [EAX]                 ; 00441256
    FXCH                                ; 00441258
    FSTP float ptr [EAX + 0x8]          ; 0044125a
    FADD float ptr [ESP + 0x8c]         ; 0044125d
    FLD float ptr [EAX + 0x4]           ; 00441264
    FXCH                                ; 00441267
    FSTP float ptr [EAX]                ; 00441269
    FADD float ptr [ESP + 0x90]         ; 0044126b
    FLD float ptr [EAX + 0x8]           ; 00441272
    FXCH                                ; 00441275
    FSTP float ptr [EAX + 0x4]          ; 00441277
    FADD float ptr [ESP + 0x94]         ; 0044127a
    MOV ECX,dword ptr [EBP + 0x14]      ; 00441281
    FSTP float ptr [EAX + 0x8]          ; 00441284
    FMUL float ptr [ECX + 0x37b34]      ; 00441287
    FLD float ptr [EBX + 0x8]           ; 0044128d
    FMUL ST1                            ; 00441290
    FLDZ                                ; 00441292
    FMUL float ptr [EBX + 0x4]          ; 00441294
    FXCH                                ; 00441297
    FSUBR ST0,ST1                       ; 00441299
    FLDZ                                ; 0044129b
    FXCH                                ; 0044129d
    FSTP float ptr [ESP + 0x194]        ; 0044129f
    FMUL float ptr [EBX + 0x8]          ; 004412a6
    FLDZ                                ; 004412a9
    FMUL float ptr [EBX]                ; 004412ab
    FSUBP                               ; 004412ad
    FSTP float ptr [ESP + 0x198]        ; 004412af
    FLD float ptr [EBX]                 ; 004412b6
    FMULP ST2                           ; 004412b8
    LEA EDI,[ESP + 0x80]                ; 004412ba
    FSUBP                               ; 004412c1
    LEA ESI,[ESP + 0x194]               ; 004412c3
    FSTP float ptr [ESP + 0x19c]        ; 004412ca
    MOVSD ES:EDI,ESI                    ; 004412d1
    MOVSD ES:EDI,ESI                    ; 004412d2
    MOVSD ES:EDI,ESI                    ; 004412d3
    FLD float ptr [EAX]                 ; 004412d4
    FADD float ptr [ESP + 0x80]         ; 004412d6
    FLD float ptr [EAX + 0x4]           ; 004412dd
    FXCH                                ; 004412e0
    FSTP float ptr [EAX]                ; 004412e2
    FADD float ptr [ESP + 0x84]         ; 004412e4
    FLD float ptr [EAX + 0x8]           ; 004412eb
    FXCH                                ; 004412ee
    FSTP float ptr [EAX + 0x4]          ; 004412f0
    FADD float ptr [ESP + 0x88]         ; 004412f3
    MOV ECX,dword ptr [ESP + 0x23c]     ; 004412fa
    FSTP float ptr [EAX + 0x8]          ; 00441301
    TEST ECX,ECX                        ; 00441304
    JZ 0x0044132b                       ; 00441306
        ;   XREF to: 0044132b (CONDITIONAL_JUMP)  ; LAB_0044132b
    FLD float ptr [EDX + 0x4]           ; 00441308
    FMUL ST0                            ; 0044130b
    FLD float ptr [EDX]                 ; 0044130d
    FMUL ST0                            ; 0044130f
    FADDP                               ; 00441311
    FLD float ptr [EDX + 0x8]           ; 00441313
    FMUL ST0                            ; 00441316
    FADDP                               ; 00441318
    FSQRT                               ; 0044131a
    FCOMP float ptr [0x005d68d0]        ; 0044131c | DAT_005d68d0
    FNSTSW AX                           ; 00441322
    SAHF                                ; 00441324
    JC 0x00441452                       ; 00441325
        ;   XREF to: 00441452 (CONDITIONAL_JUMP)  ; LAB_00441452
    LEA EAX,[EBX + 0xc]                 ; 0044132b
        ;   Label: LAB_0044132b
    FLD1                                ; 0044132e
    FLD float ptr [EAX]                 ; 00441330
    FXCH                                ; 00441332
    FDIV float ptr [ESP + 0x2b8]        ; 00441334
    FXCH                                ; 0044133b
    FMUL ST1                            ; 0044133d
    FSTP float ptr [ESP + 0xbc]         ; 0044133f
    FLD float ptr [EAX + 0x4]           ; 00441346
    FMUL ST1                            ; 00441349
    FSTP float ptr [ESP + 0xc0]         ; 0044134b
    FMUL float ptr [EAX + 0x8]          ; 00441352
    LEA EDI,[ESP + 0x2c]                ; 00441355
    LEA ESI,[ESP + 0xbc]                ; 00441359
    LEA EDX,[EBX + 0x18]                ; 00441360
    LEA EAX,[ESP + 0x2c]                ; 00441363
    FSTP float ptr [ESP + 0xc4]         ; 00441367
    MOVSD ES:EDI,ESI                    ; 0044136e
    MOVSD ES:EDI,ESI                    ; 0044136f
    MOVSD ES:EDI,ESI                    ; 00441370
    CMP EDX,EAX                         ; 00441371
    JZ 0x00441389                       ; 00441373
        ;   XREF to: 00441389 (CONDITIONAL_JUMP)  ; LAB_00441389
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00441375
    MOV dword ptr [EDX],EAX             ; 00441379
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044137b
    MOV dword ptr [EDX + 0x4],EAX       ; 0044137f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00441382
    MOV dword ptr [EDX + 0x8],EAX       ; 00441386
    LEA EAX,[EBX + 0x18]                ; 00441389
        ;   Label: LAB_00441389
    FLD float ptr [EBP + 0x20]          ; 0044138c
    FLD float ptr [EAX]                 ; 0044138f
    FMUL ST1                            ; 00441391
    FSTP float ptr [ESP + 0xec]         ; 00441393
    FLD float ptr [EAX + 0x4]           ; 0044139a
    FMUL ST1                            ; 0044139d
    FSTP float ptr [ESP + 0xf0]         ; 0044139f
    FLD float ptr [EAX + 0x8]           ; 004413a6
    FMUL ST1                            ; 004413a9
    LEA EDI,[ESP + 0x110]               ; 004413ab
    LEA ESI,[ESP + 0xec]                ; 004413b2
    LEA EAX,[EBX + 0x24]                ; 004413b9
    FSTP float ptr [ESP + 0xf4]         ; 004413bc
    MOVSD ES:EDI,ESI                    ; 004413c3
    MOVSD ES:EDI,ESI                    ; 004413c4
    MOVSD ES:EDI,ESI                    ; 004413c5
    FLD float ptr [EAX + 0x4]           ; 004413c6
    FLD float ptr [EAX]                 ; 004413c9
    FADD float ptr [ESP + 0x110]        ; 004413cb
    FLD float ptr [EAX + 0x8]           ; 004413d2
    FXCH                                ; 004413d5
    FSTP float ptr [EAX]                ; 004413d7
    FXCH                                ; 004413d9
    FADD float ptr [ESP + 0x114]        ; 004413db
    FLD float ptr [EAX]                 ; 004413e2
    FXCH                                ; 004413e4
    FSTP float ptr [EAX + 0x4]          ; 004413e6
    FXCH                                ; 004413e9
    FADD float ptr [ESP + 0x118]        ; 004413eb
    FXCH                                ; 004413f2
    FMUL ST2                            ; 004413f4
    FXCH                                ; 004413f6
    FSTP float ptr [EAX + 0x8]          ; 004413f8
    FSTP float ptr [ESP + 0x128]        ; 004413fb
    FLD float ptr [EAX + 0x4]           ; 00441402
    FMUL ST1                            ; 00441405
    FSTP float ptr [ESP + 0x12c]        ; 00441407
    FMUL float ptr [EAX + 0x8]          ; 0044140e
    LEA EDI,[ESP + 0x11c]               ; 00441411
    LEA ESI,[ESP + 0x128]               ; 00441418
    FSTP float ptr [ESP + 0x130]        ; 0044141f
    MOVSD ES:EDI,ESI                    ; 00441426
    MOVSD ES:EDI,ESI                    ; 00441427
    MOVSD ES:EDI,ESI                    ; 00441428
    FLD float ptr [EBX]                 ; 00441429
    FADD float ptr [ESP + 0x11c]        ; 0044142b
    FLD float ptr [EBX + 0x4]           ; 00441432
    FXCH                                ; 00441435
    FSTP float ptr [EBX]                ; 00441437
    FADD float ptr [ESP + 0x120]        ; 00441439
    FLD float ptr [EBX + 0x8]           ; 00441440
    FXCH                                ; 00441443
    FSTP float ptr [EBX + 0x4]          ; 00441445
    FADD float ptr [ESP + 0x124]        ; 00441448
    FSTP float ptr [EBX + 0x8]          ; 0044144f
    PUSH EBX                            ; 00441452
        ;   Label: LAB_00441452
    MOV EBX,dword ptr [EBP + 0x14]      ; 00441453
    PUSH EBX                            ; 00441456
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_0043fd50 ; 00441457
        ;   XREF to: 0043fd50 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_0043fd50(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 0044145c
    JMP 0x00440fb6                      ; 0044145f
        ;   XREF to: 00440fb6 (UNCONDITIONAL_JUMP)  ; LAB_00440fb6
    CMP dword ptr [ESP + 0x23c],0x0     ; 00441464
        ;   Label: LAB_00441464
    JZ 0x00441494                       ; 0044146c
        ;   XREF to: 00441494 (CONDITIONAL_JUMP)  ; LAB_00441494
    LEA EAX,[EBX + 0x24]                ; 0044146e
    FLD float ptr [EAX + 0x4]           ; 00441471
    FMUL ST0                            ; 00441474
    FLD float ptr [EAX]                 ; 00441476
    FMUL ST0                            ; 00441478
    FADDP                               ; 0044147a
    FLD float ptr [EAX + 0x8]           ; 0044147c
    FMUL ST0                            ; 0044147f
    FADDP                               ; 00441481
    FSQRT                               ; 00441483
    FCOMP float ptr [0x005d68d0]        ; 00441485 | DAT_005d68d0
    FNSTSW AX                           ; 0044148b
    SAHF                                ; 0044148d
    JC 0x0044102d                       ; 0044148e
        ;   XREF to: 0044102d (CONDITIONAL_JUMP)  ; LAB_0044102d
    PUSH EBX                            ; 00441494
        ;   Label: LAB_00441494
    MOV ECX,dword ptr [EBP + 0x14]      ; 00441495
    PUSH ECX                            ; 00441498
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_0043fd50 ; 00441499
        ;   XREF to: 0043fd50 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_0043fd50(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 0044149e
    JMP 0x0044102d                      ; 004414a1
        ;   XREF to: 0044102d (UNCONDITIONAL_JUMP)  ; LAB_0044102d

