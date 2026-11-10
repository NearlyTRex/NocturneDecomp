; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00544f80(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4)
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
;   core_doc.cpp_FUN_00455170 at 004551ae
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20 at 004afea3
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 at 00544f0f
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50 at 00544f61
;   core_stranger.cpp_FUN_00567430 at 0056746e
;
; Called Functions:
;   core_motion.cpp_FUN_00504080
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
;   core_skeleton.cpp_FUN_00540f30
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_negateFirstComponent_FUN_00593c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544f80
        ;   Label: core_skeleton.cpp_FUN_00544f80
    PUSH ESI                            ; 00544f81
    PUSH EDI                            ; 00544f82
    PUSH EBP                            ; 00544f83
    MOV EBP,ESP                         ; 00544f84
    SUB ESP,0x1880                      ; 00544f86
    AND ESP,0xfffffff8                  ; 00544f8c
    MOV EDI,dword ptr [EBP + 0x18]      ; 00544f8f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00544f92
    PUSH EDX                            ; 00544f95
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00544f96
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 00544f9b
    ADD ESP,0x4                         ; 00544f9d
    MOV EBX,EAX                         ; 00544fa0
    MOV EAX,ESP                         ; 00544fa2
    PUSH EAX                            ; 00544fa4
    LEA EAX,[ESP + 0x1814]              ; 00544fa5
    PUSH EAX                            ; 00544fac
    LEA EAX,[ESP + 0x1814]              ; 00544fad
    PUSH EAX                            ; 00544fb4
    PUSH dword ptr [EBP + 0x1c]         ; 00544fb5
    PUSH EDI                            ; 00544fb8
    MOV ECX,dword ptr [EBP + 0x14]      ; 00544fb9
    PUSH ECX                            ; 00544fbc
    CALL core_motion.cpp_FUN_00504080   ; 00544fbd
        ;   XREF to: 00504080 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_00504080(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 00544fc2
    CMP dword ptr [EBP + 0x20],0x0      ; 00544fc5
    JL 0x00545055                       ; 00544fc9
        ;   XREF to: 00545055 (CONDITIONAL_JUMP)  ; LAB_00545055
    MOV EAX,dword ptr [EBP + 0x14]      ; 00544fcf
    MOV EDX,dword ptr [EAX + 0x2250]    ; 00544fd2
    CMP EDX,0x1                         ; 00544fd8
    JZ 0x00545297                       ; 00544fdb
        ;   XREF to: 00545297 (CONDITIONAL_JUMP)  ; LAB_00545297
    CMP EDX,0x2                         ; 00544fe1
    JZ 0x0054554b                       ; 00544fe4
        ;   XREF to: 0054554b (CONDITIONAL_JUMP)  ; LAB_0054554b
    XOR EDI,EDI                         ; 00544fea
    MOV EAX,dword ptr [ESI + 0x1d1f8]   ; 00544fec
    MOV dword ptr [ESP + 0x1870],EDI    ; 00544ff2
    TEST EAX,EAX                        ; 00544ff9
    JLE 0x0054504e                      ; 00544ffb
        ;   XREF to: 0054504e (CONDITIONAL_JUMP)  ; LAB_0054504e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00544ffd
    MOV dword ptr [ESP + 0x1848],EAX    ; 00545000
    MOV ESI,dword ptr [EBP + 0x20]      ; 00545007
        ;   Label: LAB_00545007
    PUSH ESI                            ; 0054500a
    MOV EDI,dword ptr [ESP + 0x1874]    ; 0054500b
    PUSH EDI                            ; 00545012
    PUSH EBX                            ; 00545013
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0 ; 00545014
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00545019
    TEST EAX,EAX                        ; 0054501c
    JGE 0x00545a1e                      ; 0054501e
        ;   XREF to: 00545a1e (CONDITIONAL_JUMP)  ; LAB_00545a1e
    MOV EAX,dword ptr [ESP + 0x1848]    ; 00545024
        ;   Label: LAB_00545024
    MOV EDX,dword ptr [ESP + 0x1870]    ; 0054502b
    MOV ECX,dword ptr [EBX + 0x1d1f8]   ; 00545032
    ADD EAX,0x10                        ; 00545038
    INC EDX                             ; 0054503b
    MOV dword ptr [ESP + 0x1848],EAX    ; 0054503c
    MOV dword ptr [ESP + 0x1870],EDX    ; 00545043
    CMP EDX,ECX                         ; 0054504a
    JL 0x00545007                       ; 0054504c
        ;   XREF to: 00545007 (CONDITIONAL_JUMP)  ; LAB_00545007
    MOV ESP,EBP                         ; 0054504e
        ;   Label: LAB_0054504e
    POP EBP                             ; 00545050
    POP EDI                             ; 00545051
    POP ESI                             ; 00545052
    POP EBX                             ; 00545053
    RET                                 ; 00545054
    XOR ECX,ECX                         ; 00545055
        ;   Label: LAB_00545055
    MOV EDI,dword ptr [ESI + 0x1d1f8]   ; 00545057
    MOV dword ptr [ESP + 0x1860],ECX    ; 0054505d
    TEST EDI,EDI                        ; 00545064
    JLE 0x00545110                      ; 00545066
        ;   XREF to: 00545110 (CONDITIONAL_JUMP)  ; LAB_00545110
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054506c
    MOV dword ptr [ESP + 0x183c],EAX    ; 0054506f
    MOV dword ptr [ESP + 0x1850],EAX    ; 00545076
    MOV ESI,dword ptr [ESP + 0x1810]    ; 0054507d
        ;   Label: LAB_0054507d
    PUSH dword ptr [ESP]                ; 00545084
    PUSH ESI                            ; 00545087
    MOV EDI,dword ptr [ESP + 0x1814]    ; 00545088
    PUSH EDI                            ; 0054508f
    MOV EAX,dword ptr [ESP + 0x186c]    ; 00545090
    PUSH EAX                            ; 00545097
    PUSH EBX                            ; 00545098
    LEA ESI,[ESP + 0x1768]              ; 00545099
    CALL core_skeleton.cpp_FUN_00540f30 ; 005450a0
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00540f30()
    ADD ESP,0x14                        ; 005450a5
    LEA ESI,[ESP + 0x1754]              ; 005450a8
    MOV EDI,dword ptr [ESP + 0x183c]    ; 005450af
    MOV EAX,dword ptr [ESP + 0x1850]    ; 005450b6
    MOV ECX,dword ptr [ESP + 0x183c]    ; 005450bd
    LEA EDX,[EAX + 0x4]                 ; 005450c4
    LEA EDI,[EDI + 0x6b0]               ; 005450c7
    ADD ECX,0x10                        ; 005450cd
    MOV dword ptr [ESP + 0x1850],EDX    ; 005450d0
    MOVSD ES:EDI,ESI                    ; 005450d7
    MOVSD ES:EDI,ESI                    ; 005450d8
    MOVSD ES:EDI,ESI                    ; 005450d9
    MOVSD ES:EDI,ESI                    ; 005450da
    MOV dword ptr [ESP + 0x183c],ECX    ; 005450db
    FLD float ptr [EAX + 0x514]         ; 005450e2
    MOV ESI,dword ptr [ESP + 0x1860]    ; 005450e8
    FSTP float ptr [EAX + 0xcf0]        ; 005450ef
    INC ESI                             ; 005450f5
    MOV EDI,dword ptr [EBX + 0x1d1f8]   ; 005450f6
    MOV dword ptr [ESP + 0x1860],ESI    ; 005450fc
    CMP ESI,EDI                         ; 00545103
    JL 0x0054507d                       ; 00545105
        ;   XREF to: 0054507d (CONDITIONAL_JUMP)  ; LAB_0054507d
    LEA EAX,[EAX]                       ; 0054510b
    MOV ECX,ECX                         ; 0054510e
    MOV EDX,dword ptr [ESP + 0x1810]    ; 00545110
        ;   Label: LAB_00545110
    LEA EAX,[EDX*0x4 + 0x0]             ; 00545117
    SUB EAX,EDX                         ; 0054511e
    MOV EDX,dword ptr [EBX + 0x1e014]   ; 00545120
    FLD float ptr [EDX + EAX*0x4]       ; 00545126
    FMUL float ptr [ESP]                ; 00545129
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0054512c
    FMUL float ptr [ESP]                ; 00545130
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 00545133
    FMUL float ptr [ESP]                ; 00545137
    FLD float ptr [ESP]                 ; 0054513a
    LEA EDI,[ESP + 0x17dc]              ; 0054513d
    LEA ESI,[ESP + 0x1800]              ; 00545144
    FLD1                                ; 0054514b
    MOV EBX,dword ptr [ESP + 0x180c]    ; 0054514d
    FSUBRP                              ; 00545154
    LEA EAX,[EBX*0x4 + 0x0]             ; 00545156
    FXCH ST3                            ; 0054515d
    FSTP float ptr [ESP + 0x1800]       ; 0054515f
    FXCH                                ; 00545166
    FSTP float ptr [ESP + 0x1804]       ; 00545168
    FSTP float ptr [ESP + 0x1808]       ; 0054516f
    SUB EAX,EBX                         ; 00545176
    MOVSD ES:EDI,ESI                    ; 00545178
    MOVSD ES:EDI,ESI                    ; 00545179
    MOVSD ES:EDI,ESI                    ; 0054517a
    FSTP float ptr [ESP + 0x1818]       ; 0054517b
    FLD float ptr [EDX + EAX*0x4]       ; 00545182
    FMUL float ptr [ESP + 0x1818]       ; 00545185
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0054518c
    FMUL float ptr [ESP + 0x1818]       ; 00545190
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 00545197
    FMUL float ptr [ESP + 0x1818]       ; 0054519b
    MOV EBX,dword ptr [EBP + 0x14]      ; 005451a2
    LEA EDI,[ESP + 0x17e8]              ; 005451a5
    LEA ESI,[ESP + 0x17c4]              ; 005451ac
    LEA EAX,[ESP + 0x17d0]              ; 005451b3
    FXCH ST2                            ; 005451ba
    FSTP float ptr [ESP + 0x17c4]       ; 005451bc
    FSTP float ptr [ESP + 0x17c8]       ; 005451c3
    FSTP float ptr [ESP + 0x17cc]       ; 005451ca
    MOVSD ES:EDI,ESI                    ; 005451d1
    MOVSD ES:EDI,ESI                    ; 005451d2
    MOVSD ES:EDI,ESI                    ; 005451d3
    ADD EBX,0x6a4                       ; 005451d4
    FLD float ptr [ESP + 0x17e8]        ; 005451da
    FLD float ptr [ESP + 0x17ec]        ; 005451e1
    FLD float ptr [ESP + 0x17f0]        ; 005451e8
    LEA EDI,[ESP + 0x17d0]              ; 005451ef
    LEA ESI,[ESP + 0x17f4]              ; 005451f6
    FXCH ST2                            ; 005451fd
    FADD float ptr [ESP + 0x17dc]       ; 005451ff
    FXCH                                ; 00545206
    FADD float ptr [ESP + 0x17e0]       ; 00545208
    FXCH ST2                            ; 0054520f
    FADD float ptr [ESP + 0x17e4]       ; 00545211
    FXCH                                ; 00545218
    FSTP float ptr [ESP + 0x17f4]       ; 0054521a
    FXCH                                ; 00545221
    FSTP float ptr [ESP + 0x17f8]       ; 00545223
    FSTP float ptr [ESP + 0x17fc]       ; 0054522a
    MOVSD ES:EDI,ESI                    ; 00545231
    MOVSD ES:EDI,ESI                    ; 00545232
    MOVSD ES:EDI,ESI                    ; 00545233
    CMP EBX,EAX                         ; 00545234
    JZ 0x00545255                       ; 00545236
        ;   XREF to: 00545255 (CONDITIONAL_JUMP)  ; LAB_00545255
    MOV EAX,dword ptr [ESP + 0x17d0]    ; 00545238
    MOV dword ptr [EBX],EAX             ; 0054523f
    MOV EAX,dword ptr [ESP + 0x17d4]    ; 00545241
    MOV dword ptr [EBX + 0x4],EAX       ; 00545248
    MOV EAX,dword ptr [ESP + 0x17d8]    ; 0054524b
    MOV dword ptr [EBX + 0x8],EAX       ; 00545252
    MOV EAX,dword ptr [EBP + 0x14]      ; 00545255
        ;   Label: LAB_00545255
    FLD float ptr [EAX + 0x508]         ; 00545258
    FMUL float ptr [EAX + 0x6a4]        ; 0054525e
    FLD float ptr [EAX + 0x50c]         ; 00545264
    FMUL float ptr [EAX + 0x6a8]        ; 0054526a
    FLD float ptr [EAX + 0x510]         ; 00545270
    FMUL float ptr [EAX + 0x6ac]        ; 00545276
    FXCH                                ; 0054527c
    FSTP float ptr [EAX + 0x6a8]        ; 0054527e
    FSTP float ptr [EAX + 0x6ac]        ; 00545284
    FSTP float ptr [EAX + 0x6a4]        ; 0054528a
    MOV ESP,EBP                         ; 00545290
    POP EBP                             ; 00545292
    POP EDI                             ; 00545293
    POP ESI                             ; 00545294
    POP EBX                             ; 00545295
    RET                                 ; 00545296
    XOR EAX,EAX                         ; 00545297
        ;   Label: LAB_00545297
    MOV EDX,dword ptr [ESI + 0x1d1f8]   ; 00545299
    MOV dword ptr [ESP + 0x1878],EAX    ; 0054529f
    TEST EDX,EDX                        ; 005452a6
    JLE 0x00545366                      ; 005452a8
        ;   XREF to: 00545366 (CONDITIONAL_JUMP)  ; LAB_00545366
    MOV dword ptr [ESP + 0x1830],EAX    ; 005452ae
    MOV dword ptr [ESP + 0x184c],EAX    ; 005452b5
    MOV EAX,dword ptr [EBP + 0x20]      ; 005452bc
        ;   Label: LAB_005452bc
    PUSH EAX                            ; 005452bf
    MOV EDX,dword ptr [ESP + 0x187c]    ; 005452c0
    PUSH EDX                            ; 005452c7
    PUSH EBX                            ; 005452c8
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0 ; 005452c9
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 005452ce
    MOV EDX,dword ptr [ESP + 0x184c]    ; 005452d1
    MOV dword ptr [ESP + EDX*0x1 + 0x1454],EAX ; 005452d8
    TEST EAX,EAX                        ; 005452df
    JL 0x00545327                       ; 005452e1
        ;   XREF to: 00545327 (CONDITIONAL_JUMP)  ; LAB_00545327
    MOV ESI,dword ptr [ESP + 0x1810]    ; 005452e3
    PUSH dword ptr [ESP]                ; 005452ea
    PUSH ESI                            ; 005452ed
    MOV EDI,dword ptr [ESP + 0x1814]    ; 005452ee
    PUSH EDI                            ; 005452f5
    MOV EAX,dword ptr [ESP + 0x1884]    ; 005452f6
    PUSH EAX                            ; 005452fd
    PUSH EBX                            ; 005452fe
    LEA ESI,[ESP + 0x1718]              ; 005452ff
    CALL core_skeleton.cpp_FUN_00540f30 ; 00545306
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00540f30()
    ADD ESP,0x14                        ; 0054530b
    MOV EDI,dword ptr [ESP + 0x1830]    ; 0054530e
    LEA ESI,[ESP + 0x1704]              ; 00545315
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 0054531c
    MOVSD ES:EDI,ESI                    ; 00545323
    MOVSD ES:EDI,ESI                    ; 00545324
    MOVSD ES:EDI,ESI                    ; 00545325
    MOVSD ES:EDI,ESI                    ; 00545326
    MOV EDI,dword ptr [ESP + 0x184c]    ; 00545327
        ;   Label: LAB_00545327
    MOV EAX,dword ptr [ESP + 0x1830]    ; 0054532e
    MOV EDX,dword ptr [ESP + 0x1878]    ; 00545335
    MOV ECX,dword ptr [EBX + 0x1d1f8]   ; 0054533c
    ADD EDI,0x4                         ; 00545342
    ADD EAX,0x10                        ; 00545345
    INC EDX                             ; 00545348
    MOV dword ptr [ESP + 0x184c],EDI    ; 00545349
    MOV dword ptr [ESP + 0x1830],EAX    ; 00545350
    MOV dword ptr [ESP + 0x1878],EDX    ; 00545357
    CMP EDX,ECX                         ; 0054535e
    JL 0x005452bc                       ; 00545360
        ;   XREF to: 005452bc (CONDITIONAL_JUMP)  ; LAB_005452bc
    MOV ESI,dword ptr [EBP + 0x20]      ; 00545366
        ;   Label: LAB_00545366
    LEA EAX,[ESI*0x8 + 0x0]             ; 00545369
    ADD EAX,ESI                         ; 00545370
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1d21c] ; 00545372
    TEST EDI,EDI                        ; 00545379
    JL 0x005453b6                       ; 0054537b
        ;   XREF to: 005453b6 (CONDITIONAL_JUMP)  ; LAB_005453b6
    MOV ESI,dword ptr [ESP + 0x1810]    ; 0054537d
    PUSH dword ptr [ESP]                ; 00545384
    PUSH ESI                            ; 00545387
    MOV EAX,dword ptr [ESP + 0x1814]    ; 00545388
    PUSH EAX                            ; 0054538f
    PUSH EDI                            ; 00545390
    PUSH EBX                            ; 00545391
    LEA ESI,[ESP + 0x1738]              ; 00545392
    CALL core_skeleton.cpp_FUN_00540f30 ; 00545399
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00540f30()
    SHL EDI,0x4                         ; 0054539e
    ADD ESP,0x14                        ; 005453a1
    LEA ESI,[ESP + 0x1724]              ; 005453a4
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 005453ab
    MOVSD ES:EDI,ESI                    ; 005453b2
    MOVSD ES:EDI,ESI                    ; 005453b3
    MOVSD ES:EDI,ESI                    ; 005453b4
    MOVSD ES:EDI,ESI                    ; 005453b5
    XOR EDX,EDX                         ; 005453b6
        ;   Label: LAB_005453b6
    MOV ECX,dword ptr [EBX + 0x1d1f8]   ; 005453b8
    MOV dword ptr [ESP + 0x1868],EDX    ; 005453be
    TEST ECX,ECX                        ; 005453c5
    JLE 0x0054504e                      ; 005453c7
        ;   XREF to: 0054504e (CONDITIONAL_JUMP)  ; LAB_0054504e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005453cd
    ADD EAX,0x6b0                       ; 005453d0
    MOV dword ptr [ESP + 0x1840],EDX    ; 005453d5
    MOV dword ptr [ESP + 0x1820],EAX    ; 005453dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005453e3
    MOV dword ptr [ESP + 0x1838],EBX    ; 005453e6
    MOV dword ptr [ESP + 0x185c],EAX    ; 005453ed
    MOV EAX,dword ptr [ESP + 0x1840]    ; 005453f4
        ;   Label: LAB_005453f4
    CMP dword ptr [ESP + EAX*0x1 + 0x1454],0x0 ; 005453fb
    JL 0x00545441                       ; 00545403
        ;   XREF to: 00545441 (CONDITIONAL_JUMP)  ; LAB_00545441
    MOV EDX,dword ptr [ESP + 0x1868]    ; 00545405
    MOV EAX,dword ptr [ESP + 0x1838]    ; 0054540c
    SHL EDX,0x4                         ; 00545413
    MOV EAX,dword ptr [EAX + 0x1d21c]   ; 00545416
    MOV dword ptr [ESP + 0x182c],EDX    ; 0054541c
    TEST EAX,EAX                        ; 00545423
    JGE 0x00545496                      ; 00545425
        ;   XREF to: 00545496 (CONDITIONAL_JUMP)  ; LAB_00545496
    MOV EDI,dword ptr [ESP + 0x185c]    ; 00545427
    MOV ESI,EDX                         ; 0054542e
    LEA EDI,[EDI + 0x6b0]               ; 00545430
    LEA ESI,[ESP + ESI*0x1 + 0x644]     ; 00545436
    MOVSD ES:EDI,ESI                    ; 0054543d
        ;   Label: LAB_0054543d
    MOVSD ES:EDI,ESI                    ; 0054543e
    MOVSD ES:EDI,ESI                    ; 0054543f
    MOVSD ES:EDI,ESI                    ; 00545440
    MOV EDX,dword ptr [ESP + 0x1840]    ; 00545441
        ;   Label: LAB_00545441
    MOV ECX,dword ptr [ESP + 0x185c]    ; 00545448
    MOV ESI,dword ptr [ESP + 0x1838]    ; 0054544f
    MOV EDI,dword ptr [ESP + 0x1868]    ; 00545456
    ADD EDX,0x4                         ; 0054545d
    ADD ECX,0x10                        ; 00545460
    ADD ESI,0x24                        ; 00545463
    INC EDI                             ; 00545466
    MOV dword ptr [ESP + 0x1840],EDX    ; 00545467
    MOV dword ptr [ESP + 0x185c],ECX    ; 0054546e
    MOV dword ptr [ESP + 0x1838],ESI    ; 00545475
    MOV EDX,dword ptr [EBX + 0x1d1f8]   ; 0054547c
    MOV dword ptr [ESP + 0x1868],EDI    ; 00545482
    CMP EDI,EDX                         ; 00545489
    JGE 0x0054504e                      ; 0054548b
        ;   XREF to: 0054504e (CONDITIONAL_JUMP)  ; LAB_0054504e
    JMP 0x005453f4                      ; 00545491
        ;   XREF to: 005453f4 (UNCONDITIONAL_JUMP)  ; LAB_005453f4
    SHL EAX,0x4                         ; 00545496
        ;   Label: LAB_00545496
    MOV dword ptr [ESP + 0x1814],EAX    ; 00545499
    LEA EAX,[ESP + 0x644]               ; 005454a0
    ADD EAX,dword ptr [ESP + 0x1814]    ; 005454a7
    PUSH EAX                            ; 005454ae
    LEA ESI,[ESP + 0x1778]              ; 005454af
    LEA EDI,[ESP + 0x16d8]              ; 005454b6
    CALL core_xform.cpp_negateFirstComponent_FUN_00593c00 ; 005454bd
        ;   XREF to: 00593c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00593c00()
    ADD ESP,0x4                         ; 005454c2
    LEA EAX,[ESP + 0x16d4]              ; 005454c5
    MOV EDX,dword ptr [ESP + 0x182c]    ; 005454cc
    PUSH EAX                            ; 005454d3
    LEA EAX,[ESP + 0x648]               ; 005454d4
    LEA ESI,[ESP + 0x1778]              ; 005454db
    ADD EAX,EDX                         ; 005454e2
    MOVSD ES:EDI,ESI                    ; 005454e4
    MOVSD ES:EDI,ESI                    ; 005454e5
    MOVSD ES:EDI,ESI                    ; 005454e6
    MOVSD ES:EDI,ESI                    ; 005454e7
    PUSH EAX                            ; 005454e8
    LEA ESI,[ESP + 0x168c]              ; 005454e9
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005454f0
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 005454f5
    MOV EAX,dword ptr [ESP + 0x1820]    ; 005454f8
    MOV ECX,dword ptr [ESP + 0x1814]    ; 005454ff
    LEA EDI,[ESP + 0x1744]              ; 00545506
    ADD EAX,ECX                         ; 0054550d
    LEA ESI,[ESP + 0x1684]              ; 0054550f
    PUSH EAX                            ; 00545516
    LEA EAX,[ESP + 0x1748]              ; 00545517
    MOVSD ES:EDI,ESI                    ; 0054551e
    MOVSD ES:EDI,ESI                    ; 0054551f
    MOVSD ES:EDI,ESI                    ; 00545520
    MOVSD ES:EDI,ESI                    ; 00545521
    PUSH EAX                            ; 00545522
    LEA ESI,[ESP + 0x16bc]              ; 00545523
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 0054552a
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 0054552f
    MOV EDI,dword ptr [ESP + 0x185c]    ; 00545532
    LEA ESI,[ESP + 0x16b4]              ; 00545539
    LEA EDI,[EDI + 0x6b0]               ; 00545540
    JMP 0x0054543d                      ; 00545546
        ;   XREF to: 0054543d (UNCONDITIONAL_JUMP)  ; LAB_0054543d
    PUSH EAX                            ; 0054554b
        ;   Label: LAB_0054554b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0054554c
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    MOV EDX,EAX                         ; 00545551
    LEA EAX,[EDI*0x8 + 0x0]             ; 00545553
    ADD EAX,EDI                         ; 0054555a
    ADD ESP,0x4                         ; 0054555c
    SHL EAX,0x2                         ; 0054555f
    XOR ECX,ECX                         ; 00545562
    SUB EAX,EDI                         ; 00545564
    MOV dword ptr [ESP + 0x187c],ECX    ; 00545566
    MOV EAX,dword ptr [EDX + EAX*0x8 + 0x1c88] ; 0054556d
    MOV EDI,dword ptr [ESI + 0x1d1f8]   ; 00545574
    MOV dword ptr [ESP + 0x1824],EAX    ; 0054557a
    TEST EDI,EDI                        ; 00545581
    JLE 0x00545664                      ; 00545583
        ;   XREF to: 00545664 (CONDITIONAL_JUMP)  ; LAB_00545664
    MOV dword ptr [ESP + 0x1854],ECX    ; 00545589
    MOV dword ptr [ESP + 0x1858],ECX    ; 00545590
    MOV ECX,dword ptr [EBP + 0x20]      ; 00545597
        ;   Label: LAB_00545597
    PUSH ECX                            ; 0054559a
    MOV ESI,dword ptr [ESP + 0x1880]    ; 0054559b
    PUSH ESI                            ; 005455a2
    PUSH EBX                            ; 005455a3
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0 ; 005455a4
        ;   XREF to: 00540fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 005455a9
    MOV EDX,dword ptr [ESP + 0x1858]    ; 005455ac
    MOV dword ptr [ESP + EDX*0x1 + 0x12c4],EAX ; 005455b3
    TEST EAX,EAX                        ; 005455ba
    JL 0x00545625                       ; 005455bc
        ;   XREF to: 00545625 (CONDITIONAL_JUMP)  ; LAB_00545625
    MOV EAX,dword ptr [ESP + 0x1824]    ; 005455be
    PUSH EAX                            ; 005455c5
    PUSH ESI                            ; 005455c6
    PUSH EBX                            ; 005455c7
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10 ; 005455c8
        ;   XREF to: 00540f10 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 005455cd
    MOV EDI,dword ptr [ESP + 0x1854]    ; 005455d0
    MOV ESI,EAX                         ; 005455d7
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 005455d9
    MOVSD ES:EDI,ESI                    ; 005455e0
    MOVSD ES:EDI,ESI                    ; 005455e1
    MOVSD ES:EDI,ESI                    ; 005455e2
    MOVSD ES:EDI,ESI                    ; 005455e3
    MOV ECX,dword ptr [ESP + 0x1810]    ; 005455e4
    PUSH dword ptr [ESP]                ; 005455eb
    PUSH ECX                            ; 005455ee
    MOV ESI,dword ptr [ESP + 0x1814]    ; 005455ef
    PUSH ESI                            ; 005455f6
    MOV EDI,dword ptr [ESP + 0x1888]    ; 005455f7
    PUSH EDI                            ; 005455fe
    PUSH EBX                            ; 005455ff
    LEA ESI,[ESP + 0x17c8]              ; 00545600
    CALL core_skeleton.cpp_FUN_00540f30 ; 00545607
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00540f30()
    ADD ESP,0x14                        ; 0054560c
    MOV EDI,dword ptr [ESP + 0x1854]    ; 0054560f
    LEA ESI,[ESP + 0x17b4]              ; 00545616
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0054561d
    MOVSD ES:EDI,ESI                    ; 00545621
    MOVSD ES:EDI,ESI                    ; 00545622
    MOVSD ES:EDI,ESI                    ; 00545623
    MOVSD ES:EDI,ESI                    ; 00545624
    MOV ESI,dword ptr [ESP + 0x1858]    ; 00545625
        ;   Label: LAB_00545625
    MOV EDI,dword ptr [ESP + 0x1854]    ; 0054562c
    MOV EAX,dword ptr [ESP + 0x187c]    ; 00545633
    MOV EDX,dword ptr [EBX + 0x1d1f8]   ; 0054563a
    ADD ESI,0x4                         ; 00545640
    ADD EDI,0x10                        ; 00545643
    INC EAX                             ; 00545646
    MOV dword ptr [ESP + 0x1858],ESI    ; 00545647
    MOV dword ptr [ESP + 0x1854],EDI    ; 0054564e
    MOV dword ptr [ESP + 0x187c],EAX    ; 00545655
    CMP EAX,EDX                         ; 0054565c
    JL 0x00545597                       ; 0054565e
        ;   XREF to: 00545597 (CONDITIONAL_JUMP)  ; LAB_00545597
    MOV EDX,dword ptr [EBP + 0x20]      ; 00545664
        ;   Label: LAB_00545664
    LEA EAX,[EDX*0x8 + 0x0]             ; 00545667
    ADD EAX,EDX                         ; 0054566e
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x1d21c] ; 00545670
    MOV dword ptr [ESP + 0x181c],EAX    ; 00545677
    TEST EAX,EAX                        ; 0054567e
    JL 0x005456f2                       ; 00545680
        ;   XREF to: 005456f2 (CONDITIONAL_JUMP)  ; LAB_005456f2
    MOV ESI,dword ptr [ESP + 0x1824]    ; 00545682
    PUSH ESI                            ; 00545689
    PUSH EAX                            ; 0054568a
    PUSH EBX                            ; 0054568b
    MOV EDI,EAX                         ; 0054568c
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10 ; 0054568e
        ;   XREF to: 00540f10 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(CSkeleton * this_ptr, int bone_index, int frame_index)
    MOV EDX,EDI                         ; 00545693
    SHL EDX,0x4                         ; 00545695
    MOV EDI,EDX                         ; 00545698
    ADD ESP,0xc                         ; 0054569a
    MOV ESI,EAX                         ; 0054569d
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 0054569f
    MOVSD ES:EDI,ESI                    ; 005456a6
    MOVSD ES:EDI,ESI                    ; 005456a7
    MOVSD ES:EDI,ESI                    ; 005456a8
    MOVSD ES:EDI,ESI                    ; 005456a9
    MOV EAX,dword ptr [ESP + 0x1810]    ; 005456aa
    PUSH dword ptr [ESP]                ; 005456b1
    PUSH EAX                            ; 005456b4
    MOV dword ptr [ESP + 0x181c],EDX    ; 005456b5
    MOV EDX,dword ptr [ESP + 0x1814]    ; 005456bc
    PUSH EDX                            ; 005456c3
    MOV ECX,dword ptr [ESP + 0x1828]    ; 005456c4
    PUSH ECX                            ; 005456cb
    PUSH EBX                            ; 005456cc
    LEA ESI,[ESP + 0x1608]              ; 005456cd
    CALL core_skeleton.cpp_FUN_00540f30 ; 005456d4
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00540f30()
    ADD ESP,0x14                        ; 005456d9
    MOV EDI,dword ptr [ESP + 0x1814]    ; 005456dc
    LEA ESI,[ESP + 0x15f4]              ; 005456e3
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 005456ea
    MOVSD ES:EDI,ESI                    ; 005456ee
    MOVSD ES:EDI,ESI                    ; 005456ef
    MOVSD ES:EDI,ESI                    ; 005456f0
    MOVSD ES:EDI,ESI                    ; 005456f1
    XOR ESI,ESI                         ; 005456f2
        ;   Label: LAB_005456f2
    MOV EDI,dword ptr [EBX + 0x1d1f8]   ; 005456f4
    MOV dword ptr [ESP + 0x1864],ESI    ; 005456fa
    TEST EDI,EDI                        ; 00545701
    JLE 0x0054504e                      ; 00545703
        ;   XREF to: 0054504e (CONDITIONAL_JUMP)  ; LAB_0054504e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00545709
    ADD EAX,0x6b0                       ; 0054570c
    MOV dword ptr [ESP + 0x1844],ESI    ; 00545711
    MOV dword ptr [ESP + 0x1828],EAX    ; 00545718
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054571f
    MOV dword ptr [ESP + 0x1834],EBX    ; 00545722
    MOV dword ptr [ESP + 0x1874],EAX    ; 00545729
    MOV EAX,dword ptr [ESP + 0x1844]    ; 00545730
        ;   Label: LAB_00545730
    CMP dword ptr [ESP + EAX*0x1 + 0x12c4],0x0 ; 00545737
    JL 0x00545883                       ; 0054573f
        ;   XREF to: 00545883 (CONDITIONAL_JUMP)  ; LAB_00545883
    MOV EAX,dword ptr [ESP + 0x1834]    ; 00545745
    MOV EAX,dword ptr [EAX + 0x1d21c]   ; 0054574c
    MOV dword ptr [ESP + 0x186c],EAX    ; 00545752
    MOV EAX,dword ptr [ESP + 0x1864]    ; 00545759
    SHL EAX,0x4                         ; 00545760
    LEA EDI,[ESP + 0x15e4]              ; 00545763
    LEA ESI,[ESP + EAX*0x1 + 0xc84]     ; 0054576a
    MOVSD ES:EDI,ESI                    ; 00545771
    MOVSD ES:EDI,ESI                    ; 00545772
    MOVSD ES:EDI,ESI                    ; 00545773
    MOVSD ES:EDI,ESI                    ; 00545774
    LEA EDI,[ESP + 0x1614]              ; 00545775
    LEA ESI,[ESP + EAX*0x1 + 0x4]       ; 0054577c
    MOVSD ES:EDI,ESI                    ; 00545780
    MOVSD ES:EDI,ESI                    ; 00545781
    MOVSD ES:EDI,ESI                    ; 00545782
    MOVSD ES:EDI,ESI                    ; 00545783
    MOV ESI,dword ptr [ESP + 0x1874]    ; 00545784
    LEA EDI,[ESP + 0x1604]              ; 0054578b
    LEA ESI,[ESI + 0x6b0]               ; 00545792
    MOV ECX,dword ptr [ESP + 0x186c]    ; 00545798
    MOVSD ES:EDI,ESI                    ; 0054579f
    MOVSD ES:EDI,ESI                    ; 005457a0
    MOVSD ES:EDI,ESI                    ; 005457a1
    MOVSD ES:EDI,ESI                    ; 005457a2
    TEST ECX,ECX                        ; 005457a3
    JGE 0x005458d8                      ; 005457a5
        ;   XREF to: 005458d8 (CONDITIONAL_JUMP)  ; LAB_005458d8
    LEA EAX,[ESP + 0x15e4]              ; 005457ab
        ;   Label: LAB_005457ab
    PUSH EAX                            ; 005457b2
    LEA ESI,[ESP + 0x1798]              ; 005457b3
    LEA EDI,[ESP + 0x1768]              ; 005457ba
    CALL core_xform.cpp_negateFirstComponent_FUN_00593c00 ; 005457c1
        ;   XREF to: 00593c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00593c00()
    ADD ESP,0x4                         ; 005457c6
    LEA EAX,[ESP + 0x1764]              ; 005457c9
    LEA ESI,[ESP + 0x1794]              ; 005457d0
    PUSH EAX                            ; 005457d7
    LEA EAX,[ESP + 0x1618]              ; 005457d8
    MOVSD ES:EDI,ESI                    ; 005457df
    MOVSD ES:EDI,ESI                    ; 005457e0
    MOVSD ES:EDI,ESI                    ; 005457e1
    MOVSD ES:EDI,ESI                    ; 005457e2
    PUSH EAX                            ; 005457e3
    LEA ESI,[ESP + 0x178c]              ; 005457e4
    LEA EDI,[ESP + 0x173c]              ; 005457eb
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005457f2
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 005457f7
    LEA EAX,[ESP + 0x1734]              ; 005457fa
    LEA ESI,[ESP + 0x1784]              ; 00545801
    PUSH EAX                            ; 00545808
    LEA EAX,[ESP + 0x1608]              ; 00545809
    MOVSD ES:EDI,ESI                    ; 00545810
    MOVSD ES:EDI,ESI                    ; 00545811
    MOVSD ES:EDI,ESI                    ; 00545812
    MOVSD ES:EDI,ESI                    ; 00545813
    PUSH EAX                            ; 00545814
    LEA ESI,[ESP + 0x17ac]              ; 00545815
    LEA EDI,[ESP + 0x16fc]              ; 0054581c
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00545823
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 00545828
    LEA ESI,[ESP + 0x17a4]              ; 0054582b
    MOV ECX,dword ptr [ESP + 0x186c]    ; 00545832
    MOVSD ES:EDI,ESI                    ; 00545839
    MOVSD ES:EDI,ESI                    ; 0054583a
    MOVSD ES:EDI,ESI                    ; 0054583b
    MOVSD ES:EDI,ESI                    ; 0054583c
    TEST ECX,ECX                        ; 0054583d
    JL 0x00545a0b                       ; 0054583f
        ;   XREF to: 00545a0b (CONDITIONAL_JUMP)  ; LAB_00545a0b
    MOV EAX,ECX                         ; 00545845
    MOV ESI,dword ptr [ESP + 0x1828]    ; 00545847
    SHL EAX,0x4                         ; 0054584e
    ADD EAX,ESI                         ; 00545851
    PUSH EAX                            ; 00545853
    LEA EAX,[ESP + 0x16f8]              ; 00545854
    PUSH EAX                            ; 0054585b
    LEA ESI,[ESP + 0x171c]              ; 0054585c
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00545863
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 00545868
    MOV EDI,dword ptr [ESP + 0x1874]    ; 0054586b
    LEA ESI,[ESP + 0x1714]              ; 00545872
    LEA EDI,[EDI + 0x6b0]               ; 00545879
        ;   Label: LAB_00545879
    MOVSD ES:EDI,ESI                    ; 0054587f
    MOVSD ES:EDI,ESI                    ; 00545880
    MOVSD ES:EDI,ESI                    ; 00545881
    MOVSD ES:EDI,ESI                    ; 00545882
    MOV EAX,dword ptr [ESP + 0x1844]    ; 00545883
        ;   Label: LAB_00545883
    MOV EDX,dword ptr [ESP + 0x1834]    ; 0054588a
    MOV ECX,dword ptr [ESP + 0x1874]    ; 00545891
    MOV ESI,dword ptr [ESP + 0x1864]    ; 00545898
    MOV EDI,dword ptr [EBX + 0x1d1f8]   ; 0054589f
    ADD EAX,0x4                         ; 005458a5
    ADD EDX,0x24                        ; 005458a8
    ADD ECX,0x10                        ; 005458ab
    INC ESI                             ; 005458ae
    MOV dword ptr [ESP + 0x1844],EAX    ; 005458af
    MOV dword ptr [ESP + 0x1834],EDX    ; 005458b6
    MOV dword ptr [ESP + 0x1874],ECX    ; 005458bd
    MOV dword ptr [ESP + 0x1864],ESI    ; 005458c4
    CMP ESI,EDI                         ; 005458cb
    JGE 0x0054504e                      ; 005458cd
        ;   XREF to: 0054504e (CONDITIONAL_JUMP)  ; LAB_0054504e
    JMP 0x00545730                      ; 005458d3
        ;   XREF to: 00545730 (UNCONDITIONAL_JUMP)  ; LAB_00545730
    MOV EAX,ECX                         ; 005458d8
        ;   Label: LAB_005458d8
    SHL EAX,0x4                         ; 005458da
    MOV dword ptr [ESP + 0x1814],EAX    ; 005458dd
    LEA EAX,[ESP + 0xc84]               ; 005458e4
    ADD EAX,dword ptr [ESP + 0x1814]    ; 005458eb
    PUSH EAX                            ; 005458f2
    LEA ESI,[ESP + 0x1648]              ; 005458f3
    LEA EDI,[ESP + 0x1658]              ; 005458fa
    CALL core_xform.cpp_negateFirstComponent_FUN_00593c00 ; 00545901
        ;   XREF to: 00593c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00593c00()
    ADD ESP,0x4                         ; 00545906
    LEA EAX,[ESP + 0x1654]              ; 00545909
    LEA ESI,[ESP + 0x1644]              ; 00545910
    PUSH EAX                            ; 00545917
    LEA EAX,[ESP + 0x15e8]              ; 00545918
    MOVSD ES:EDI,ESI                    ; 0054591f
    MOVSD ES:EDI,ESI                    ; 00545920
    MOVSD ES:EDI,ESI                    ; 00545921
    MOVSD ES:EDI,ESI                    ; 00545922
    PUSH EAX                            ; 00545923
    LEA ESI,[ESP + 0x16ec]              ; 00545924
    LEA EDI,[ESP + 0x15ec]              ; 0054592b
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00545932
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x16ec]              ; 00545937
    ADD ESP,0x8                         ; 0054593e
    MOVSD ES:EDI,ESI                    ; 00545941
    MOVSD ES:EDI,ESI                    ; 00545942
    MOVSD ES:EDI,ESI                    ; 00545943
    MOVSD ES:EDI,ESI                    ; 00545944
    LEA EAX,[ESP + 0x4]                 ; 00545945
    ADD EAX,dword ptr [ESP + 0x1814]    ; 00545949
    PUSH EAX                            ; 00545950
    LEA ESI,[ESP + 0x1678]              ; 00545951
    LEA EDI,[ESP + 0x1668]              ; 00545958
    CALL core_xform.cpp_negateFirstComponent_FUN_00593c00 ; 0054595f
        ;   XREF to: 00593c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00593c00()
    ADD ESP,0x4                         ; 00545964
    LEA EAX,[ESP + 0x1664]              ; 00545967
    LEA ESI,[ESP + 0x1674]              ; 0054596e
    PUSH EAX                            ; 00545975
    LEA EAX,[ESP + 0x1618]              ; 00545976
    MOVSD ES:EDI,ESI                    ; 0054597d
    MOVSD ES:EDI,ESI                    ; 0054597e
    MOVSD ES:EDI,ESI                    ; 0054597f
    MOVSD ES:EDI,ESI                    ; 00545980
    PUSH EAX                            ; 00545981
    LEA ESI,[ESP + 0x169c]              ; 00545982
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00545989
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 0054598e
    LEA EDI,[ESP + 0x1614]              ; 00545991
    MOV EAX,dword ptr [ESP + 0x1828]    ; 00545998
    MOV EDX,dword ptr [ESP + 0x1814]    ; 0054599f
    LEA ESI,[ESP + 0x1694]              ; 005459a6
    ADD EAX,EDX                         ; 005459ad
    MOVSD ES:EDI,ESI                    ; 005459af
    MOVSD ES:EDI,ESI                    ; 005459b0
    MOVSD ES:EDI,ESI                    ; 005459b1
    MOVSD ES:EDI,ESI                    ; 005459b2
    PUSH EAX                            ; 005459b3
    LEA ESI,[ESP + 0x16a8]              ; 005459b4
    LEA EDI,[ESP + 0x1628]              ; 005459bb
    CALL core_xform.cpp_negateFirstComponent_FUN_00593c00 ; 005459c2
        ;   XREF to: 00593c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_negateFirstComponent_FUN_00593c00()
    ADD ESP,0x4                         ; 005459c7
    LEA EAX,[ESP + 0x1624]              ; 005459ca
    LEA ESI,[ESP + 0x16a4]              ; 005459d1
    PUSH EAX                            ; 005459d8
    LEA EAX,[ESP + 0x1608]              ; 005459d9
    MOVSD ES:EDI,ESI                    ; 005459e0
    MOVSD ES:EDI,ESI                    ; 005459e1
    MOVSD ES:EDI,ESI                    ; 005459e2
    MOVSD ES:EDI,ESI                    ; 005459e3
    PUSH EAX                            ; 005459e4
    LEA ESI,[ESP + 0x16cc]              ; 005459e5
    LEA EDI,[ESP + 0x160c]              ; 005459ec
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005459f3
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x16cc]              ; 005459f8
    ADD ESP,0x8                         ; 005459ff
    MOVSD ES:EDI,ESI                    ; 00545a02
    MOVSD ES:EDI,ESI                    ; 00545a03
    MOVSD ES:EDI,ESI                    ; 00545a04
    MOVSD ES:EDI,ESI                    ; 00545a05
    JMP 0x005457ab                      ; 00545a06
        ;   XREF to: 005457ab (UNCONDITIONAL_JUMP)  ; LAB_005457ab
    MOV EDI,dword ptr [ESP + 0x1874]    ; 00545a0b
        ;   Label: LAB_00545a0b
    LEA ESI,[ESP + 0x17a4]              ; 00545a12
    JMP 0x00545879                      ; 00545a19
        ;   XREF to: 00545879 (UNCONDITIONAL_JUMP)  ; LAB_00545879
    MOV EAX,dword ptr [ESP + 0x1810]    ; 00545a1e
        ;   Label: LAB_00545a1e
    PUSH dword ptr [ESP]                ; 00545a25
    PUSH EAX                            ; 00545a28
    MOV EDX,dword ptr [ESP + 0x1814]    ; 00545a29
    PUSH EDX                            ; 00545a30
    PUSH EDI                            ; 00545a31
    PUSH EBX                            ; 00545a32
    LEA ESI,[ESP + 0x1648]              ; 00545a33
    CALL core_skeleton.cpp_FUN_00540f30 ; 00545a3a
        ;   XREF to: 00540f30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00540f30()
    ADD ESP,0x14                        ; 00545a3f
    MOV EDI,dword ptr [ESP + 0x1848]    ; 00545a42
    LEA ESI,[ESP + 0x1634]              ; 00545a49
    LEA EDI,[EDI + 0x6b0]               ; 00545a50
    MOVSD ES:EDI,ESI                    ; 00545a56
    MOVSD ES:EDI,ESI                    ; 00545a57
    MOVSD ES:EDI,ESI                    ; 00545a58
    MOVSD ES:EDI,ESI                    ; 00545a59
    JMP 0x00545024                      ; 00545a5a
        ;   XREF to: 00545024 (UNCONDITIONAL_JUMP)  ; LAB_00545024

