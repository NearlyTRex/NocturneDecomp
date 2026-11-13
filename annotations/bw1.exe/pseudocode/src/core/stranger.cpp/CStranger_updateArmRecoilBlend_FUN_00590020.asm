; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_00590020(CStranger *this_ptr,float delta_time,int is_weapon_active)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   is_weapon_active
; Local Variables:
; undefined8       Stack[-0x178]:8  local_178
; undefined8       Stack[-0x170]:8  local_170
; undefined8       Stack[-0x168]:8  local_168
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
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
; undefined        Stack[-0x58]:1  local_58
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
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 0058669c
;
; Referenced Globals:
;   undefined4 DAT_005f6fb9
;   undefined4 DAT_005f6fc1
;   undefined4 DAT_005f6fc9
;   undefined4 DAT_005f6fd1
;   undefined4 DAT_0060607c
;   undefined4 DAT_00606080
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 DAT_02c83604
;   undefined4 DAT_02c83608
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_FUN_00557300
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00590020
        ;   Label: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_00590020
    PUSH ESI                            ; 00590021
    PUSH EDI                            ; 00590022
    PUSH EBP                            ; 00590023
    MOV EBP,ESP                         ; 00590024
    SUB ESP,0x164                       ; 00590026
    AND ESP,0xfffffff8                  ; 0059002c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0059002f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00590032
    MOV EDX,dword ptr [EBX + 0x20004]   ; 00590035
    TEST EDX,EDX                        ; 0059003b
    JNZ 0x005900e7                      ; 0059003d
        ;   XREF to: 005900e7 (CONDITIONAL_JUMP)  ; LAB_005900e7
    XOR EAX,EAX                         ; 00590043
        ;   Label: LAB_00590043
    XOR EBX,EBX                         ; 00590045
        ;   Label: LAB_00590045
    MOV dword ptr [ESP + 0x24],EBX      ; 00590047
    TEST EAX,EAX                        ; 0059004b
    JZ 0x005905bf                       ; 0059004d
        ;   XREF to: 005905bf (CONDITIONAL_JUMP)  ; LAB_005905bf
    MOV dword ptr [ESP + 0x158],EBX     ; 00590053
    MOV dword ptr [ESP + 0x15c],EBX     ; 0059005a
    MOV EAX,[0x00622c18]                ; 00590061 | g_CDemonSetPtr
        ;   Label: LAB_00590061
    MOV EBX,dword ptr [ESP + 0x158]     ; 00590066
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 0059006d | g_CDemonSetInstance.character_count
    JGE 0x005901b5                      ; 00590073
        ;   XREF to: 005901b5 (CONDITIONAL_JUMP)  ; LAB_005901b5
    ADD EAX,dword ptr [ESP + 0x15c]     ; 00590079
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00590080
    LEA EAX,[EBX + 0x20]                ; 00590086
    PUSH EAX                            ; 00590089
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059008a
    PUSH EAX                            ; 0059008d
    LEA ESI,[ESP + 0x80]                ; 0059008e
    LEA EDI,[ESP + 0x104]               ; 00590095
    CALL core_actor.cpp_FUN_00408bb0    ; 0059009c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x80]                ; 005900a1
    ADD ESP,0x8                         ; 005900a8
    MOVSD ES:EDI,ESI                    ; 005900ab
    MOVSD ES:EDI,ESI                    ; 005900ac
    MOVSD ES:EDI,ESI                    ; 005900ad
    FLD float ptr [ESP + 0xfc]          ; 005900ae
    FABS                                ; 005900b5
    FCOMP double ptr [0x005f6fc1]       ; 005900b7 | DAT_005f6fc1
    FNSTSW AX                           ; 005900bd
    SAHF                                ; 005900bf
    JBE 0x005900f9                      ; 005900c0
        ;   XREF to: 005900f9 (CONDITIONAL_JUMP)  ; LAB_005900f9
    MOV EDI,dword ptr [ESP + 0x158]     ; 005900c2
        ;   Label: LAB_005900c2
    MOV ESI,dword ptr [ESP + 0x15c]     ; 005900c9
    INC EDI                             ; 005900d0
    ADD ESI,0x4                         ; 005900d1
    MOV dword ptr [ESP + 0x158],EDI     ; 005900d4
    MOV dword ptr [ESP + 0x15c],ESI     ; 005900db
    JMP 0x00590061                      ; 005900e2
        ;   XREF to: 00590061 (UNCONDITIONAL_JUMP)  ; LAB_00590061
    CMP dword ptr [EDX + 0x2e0],0x0     ; 005900e7
        ;   Label: LAB_005900e7
    JZ 0x00590045                       ; 005900ee
        ;   XREF to: 00590045 (CONDITIONAL_JUMP)  ; LAB_00590045
    JMP 0x00590043                      ; 005900f4
        ;   XREF to: 00590043 (UNCONDITIONAL_JUMP)  ; LAB_00590043
    FLD float ptr [ESP + 0x100]         ; 005900f9
        ;   Label: LAB_005900f9
    FABS                                ; 00590100
    FCOMP double ptr [0x005f6fc9]       ; 00590102 | DAT_005f6fc9
    FNSTSW AX                           ; 00590108
    SAHF                                ; 0059010a
    JA 0x005900c2                       ; 0059010b
        ;   XREF to: 005900c2 (CONDITIONAL_JUMP)  ; LAB_005900c2
    FLDZ                                ; 0059010d
    FCOMP float ptr [ESP + 0x104]       ; 0059010f
    FNSTSW AX                           ; 00590116
    SAHF                                ; 00590118
    JA 0x005900c2                       ; 00590119
        ;   XREF to: 005900c2 (CONDITIONAL_JUMP)  ; LAB_005900c2
    CMP dword ptr [ESP + 0x104],0x40c00000 ; 0059011b
    JG 0x005900c2                       ; 00590126
        ;   XREF to: 005900c2 (CONDITIONAL_JUMP)  ; LAB_005900c2
    CMP EBX,dword ptr [EBP + 0x14]      ; 00590128
    JZ 0x005900c2                       ; 0059012b
        ;   XREF to: 005900c2 (CONDITIONAL_JUMP)  ; LAB_005900c2
    PUSH EBX                            ; 0059012d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059012e
    CALL dword ptr [EAX + 0x10c]        ; 00590134
    ADD ESP,0x4                         ; 0059013a
    TEST EAX,EAX                        ; 0059013d
    JNZ 0x005900c2                      ; 0059013f
        ;   XREF to: 005900c2 (CONDITIONAL_JUMP)  ; LAB_005900c2
    LEA EAX,[ESP + 0x2c]                ; 00590141
    PUSH EAX                            ; 00590145
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 00590146
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0059014b
    LEA ESI,[ESP + 0x2c]                ; 0059014e
    PUSH ESI                            ; 00590152
    MOV EAX,dword ptr [EBX + 0x154]     ; 00590153
    PUSH EBX                            ; 00590159
    CALL dword ptr [EAX + 0x3c]         ; 0059015a
    ADD ESP,0x8                         ; 0059015d
    CMP EAX,0x2                         ; 00590160
    JNZ 0x005900c2                      ; 00590163
        ;   XREF to: 005900c2 (CONDITIONAL_JUMP)  ; LAB_005900c2
    FLD float ptr [ESP + 0x104]         ; 00590169
    FSUB float ptr [ESP + 0x48]         ; 00590170
    FADD double ptr [0x005f6fd1]        ; 00590174 | DAT_005f6fd1
    FMUL double ptr [0x005f6fb9]        ; 0059017a | DAT_005f6fb9
    FLD1                                ; 00590180
    FSUBRP                              ; 00590182
    FST float ptr [ESP + 0x28]          ; 00590184
    FCOMP float ptr [ESP + 0x24]        ; 00590188
    FNSTSW AX                           ; 0059018c
    SAHF                                ; 0059018e
    JC 0x005900c2                       ; 0059018f
        ;   XREF to: 005900c2 (CONDITIONAL_JUMP)  ; LAB_005900c2
    FLD float ptr [ESP + 0x28]          ; 00590195
    FLDZ                                ; 00590199
    FCOMPP                              ; 0059019b
    FNSTSW AX                           ; 0059019d
    SAHF                                ; 0059019f
    JBE 0x005901a8                      ; 005901a0
        ;   XREF to: 005901a8 (CONDITIONAL_JUMP)  ; LAB_005901a8
    XOR EBX,EBX                         ; 005901a2
    MOV dword ptr [ESP + 0x28],EBX      ; 005901a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 005901a8
        ;   Label: LAB_005901a8
    MOV dword ptr [ESP + 0x24],EAX      ; 005901ac
    JMP 0x005900c2                      ; 005901b0
        ;   XREF to: 005900c2 (UNCONDITIONAL_JUMP)  ; LAB_005900c2
    PUSH EAX                            ; 005901b5 | g_CDemonSetInstance
        ;   Label: LAB_005901b5
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005901b6
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005901bb
    MOV ECX,dword ptr [EBP + 0x14]      ; 005901be
    PUSH ECX                            ; 005901c1
    MOV EBX,dword ptr [0x00622c18]      ; 005901c2 | g_CDemonSetPtr
    PUSH EBX                            ; 005901c8 | g_CDemonSetInstance
    MOV ESI,0x40600000                  ; 005901c9
    MOV EDI,0x3fc00000                  ; 005901ce
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005901d3
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005901d8
    XOR EAX,EAX                         ; 005901db
    MOV EBX,dword ptr [EBP + 0x14]      ; 005901dd
    MOV dword ptr [ESP + 0x6c],EAX      ; 005901e0
    MOV dword ptr [ESP + 0x70],EAX      ; 005901e4
    LEA EAX,[ESP + 0x6c]                ; 005901e8
    MOV dword ptr [ESP + 0x154],ESI     ; 005901ec
    PUSH EAX                            ; 005901f3
    MOV dword ptr [ESP + 0x154],EDI     ; 005901f4
    MOV dword ptr [ESP + 0x78],ESI      ; 005901fb
    PUSH EBX                            ; 005901ff
    LEA ESI,[ESP + 0x128]               ; 00590200
    LEA EDI,[ESP + 0x140]               ; 00590207
    CALL core_actor.cpp_FUN_00408ac0    ; 0059020e
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x128]               ; 00590213
    LEA EBX,[ESP + 0x140]               ; 0059021a
    ADD ESP,0x8                         ; 00590221
    LEA EAX,[ESP + 0xc0]                ; 00590224
    MOVSD ES:EDI,ESI                    ; 0059022b
    MOVSD ES:EDI,ESI                    ; 0059022c
    MOVSD ES:EDI,ESI                    ; 0059022d
    CMP EAX,EBX                         ; 0059022e
    JZ 0x0059025c                       ; 00590230
        ;   XREF to: 0059025c (CONDITIONAL_JUMP)  ; LAB_0059025c
    MOV EAX,dword ptr [ESP + 0x138]     ; 00590232
    MOV dword ptr [ESP + 0xc0],EAX      ; 00590239
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00590240
    MOV dword ptr [ESP + 0xc4],EAX      ; 00590247
    MOV EAX,dword ptr [ESP + 0x140]     ; 0059024e
    MOV dword ptr [ESP + 0xc8],EAX      ; 00590255
    MOV ESI,dword ptr [0x02c83604]      ; 0059025c | DAT_02c83604
        ;   Label: LAB_0059025c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590262
    PUSH ESI                            ; 00590265
    ADD EAX,0x158                       ; 00590266
    PUSH EAX                            ; 0059026b
    LEA ESI,[ESP + 0xbc]                ; 0059026c
    LEA EDI,[ESP + 0xe0]                ; 00590273
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 0059027a
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0xbc]                ; 0059027f
    ADD ESP,0x8                         ; 00590286
    LEA EAX,[ESP + 0xd8]                ; 00590289
    MOVSD ES:EDI,ESI                    ; 00590290
    MOVSD ES:EDI,ESI                    ; 00590291
    MOVSD ES:EDI,ESI                    ; 00590292
    PUSH EAX                            ; 00590293
    MOV EDI,dword ptr [EBP + 0x14]      ; 00590294
    PUSH EDI                            ; 00590297
    LEA ESI,[ESP + 0x68]                ; 00590298
    LEA EBX,[ESP + 0x110]               ; 0059029c
    CALL core_actor.cpp_FUN_00408b40    ; 005902a3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x98]                ; 005902a8
    LEA ESI,[ESP + 0x68]                ; 005902af
    ADD ESP,0x8                         ; 005902b3
    LEA EAX,[ESP + 0x90]                ; 005902b6
    MOVSD ES:EDI,ESI                    ; 005902bd
    MOVSD ES:EDI,ESI                    ; 005902be
    MOVSD ES:EDI,ESI                    ; 005902bf
    CMP EBX,EAX                         ; 005902c0
    JZ 0x005902ee                       ; 005902c2
        ;   XREF to: 005902ee (CONDITIONAL_JUMP)  ; LAB_005902ee
    MOV EAX,dword ptr [ESP + 0x90]      ; 005902c4
    MOV dword ptr [ESP + 0x108],EAX     ; 005902cb
    MOV EAX,dword ptr [ESP + 0x94]      ; 005902d2
    MOV dword ptr [ESP + 0x10c],EAX     ; 005902d9
    MOV EAX,dword ptr [ESP + 0x98]      ; 005902e0
    MOV dword ptr [ESP + 0x110],EAX     ; 005902e7
    FLD float ptr [ESP + 0x108]         ; 005902ee
        ;   Label: LAB_005902ee
    FLD float ptr [ESP + 0x10c]         ; 005902f5
    FLD float ptr [ESP + 0x110]         ; 005902fc
    LEA EDI,[ESP + 0xcc]                ; 00590303
    LEA ESI,[ESP + 0xe4]                ; 0059030a
    LEA EAX,[ESP + 0xcc]                ; 00590311
    LEA EBX,[ESP + 0x114]               ; 00590318
    FXCH ST2                            ; 0059031f
    FADD float ptr [ESP + 0xc0]         ; 00590321
    FXCH                                ; 00590328
    FADD float ptr [ESP + 0xc4]         ; 0059032a
    FXCH ST2                            ; 00590331
    FADD float ptr [ESP + 0xc8]         ; 00590333
    FXCH ST2                            ; 0059033a
    FSTP float ptr [ESP + 0xe8]         ; 0059033c
    FXCH                                ; 00590343
    FSTP float ptr [ESP + 0xec]         ; 00590345
    FSTP float ptr [ESP + 0xe4]         ; 0059034c
    MOVSD ES:EDI,ESI                    ; 00590353
    MOVSD ES:EDI,ESI                    ; 00590354
    MOVSD ES:EDI,ESI                    ; 00590355
    CMP EBX,EAX                         ; 00590356
    JZ 0x00590384                       ; 00590358
        ;   XREF to: 00590384 (CONDITIONAL_JUMP)  ; LAB_00590384
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0059035a
    MOV dword ptr [ESP + 0x114],EAX     ; 00590361
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00590368
    MOV dword ptr [ESP + 0x118],EAX     ; 0059036f
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00590376
    MOV dword ptr [ESP + 0x11c],EAX     ; 0059037d
    LEA EAX,[ESP + 0x114]               ; 00590384
        ;   Label: LAB_00590384
    PUSH EAX                            ; 0059038b
    LEA EAX,[ESP + 0x10c]               ; 0059038c
    PUSH EAX                            ; 00590393
    MOV EAX,[0x00622c18]                ; 00590394 | g_CDemonSetPtr
    PUSH EAX                            ; 00590399 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 0059039a
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0059039f
    FLD float ptr [ESP + 0x16c]         ; 005903a6
    ADD ESP,0xc                         ; 005903ad
    FLDZ                                ; 005903b0
    FXCH                                ; 005903b2
    FST float ptr [ESP + 0x20]          ; 005903b4
    FSTP double ptr [ESP + 0x8]         ; 005903b8
    FCOMP double ptr [ESP + 0x8]        ; 005903bc
    FNSTSW AX                           ; 005903c0
    SAHF                                ; 005903c2
    JA 0x00590407                       ; 005903c3
        ;   XREF to: 00590407 (CONDITIONAL_JUMP)  ; LAB_00590407
    FLD1                                ; 005903c5
    FCOMP double ptr [ESP + 0x8]        ; 005903c7
    FNSTSW AX                           ; 005903cb
    SAHF                                ; 005903cd
    JBE 0x00590407                      ; 005903ce
        ;   XREF to: 00590407 (CONDITIONAL_JUMP)  ; LAB_00590407
    FLD float ptr [ESP + 0x154]         ; 005903d0
    FLD float ptr [ESP + 0x20]          ; 005903d7
    FMUL ST1                            ; 005903db
    FLD float ptr [ESP + 0x150]         ; 005903dd
    FXCH                                ; 005903e4
    FSUB ST0,ST1                        ; 005903e6
    FXCH ST2                            ; 005903e8
    FSUBRP                              ; 005903ea
    FDIVP                               ; 005903ec
    FLD1                                ; 005903ee
    FSUBRP                              ; 005903f0
    FST float ptr [ESP + 0x20]          ; 005903f2
    FCOMP float ptr [ESP + 0x24]        ; 005903f6
    FNSTSW AX                           ; 005903fa
    SAHF                                ; 005903fc
    JBE 0x00590407                      ; 005903fd
        ;   XREF to: 00590407 (CONDITIONAL_JUMP)  ; LAB_00590407
    MOV EAX,dword ptr [ESP + 0x20]      ; 005903ff
    MOV dword ptr [ESP + 0x24],EAX      ; 00590403
    MOV EDX,dword ptr [0x02c83608]      ; 00590407 | DAT_02c83608
        ;   Label: LAB_00590407
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059040d
    PUSH EDX                            ; 00590410
    ADD EAX,0x158                       ; 00590411
    LEA ESI,[ESP + 0xac]                ; 00590416
    PUSH EAX                            ; 0059041d
    LEA EDI,[ESP + 0xa4]                ; 0059041e
    LEA EBX,[ESP + 0x134]               ; 00590425
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 0059042c
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0xb0]                ; 00590431
    ADD ESP,0x8                         ; 00590438
    LEA EAX,[ESP + 0x9c]                ; 0059043b
    MOV ECX,dword ptr [EBP + 0x14]      ; 00590442
    PUSH EAX                            ; 00590445
    MOVSD ES:EDI,ESI                    ; 00590446
    MOVSD ES:EDI,ESI                    ; 00590447
    MOVSD ES:EDI,ESI                    ; 00590448
    PUSH ECX                            ; 00590449
    LEA ESI,[ESP + 0x5c]                ; 0059044a
    LEA EDI,[ESP + 0x134]               ; 0059044e
    CALL core_actor.cpp_FUN_00408b40    ; 00590455
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x5c]                ; 0059045a
    ADD ESP,0x8                         ; 0059045e
    LEA EAX,[ESP + 0x108]               ; 00590461
    MOVSD ES:EDI,ESI                    ; 00590468
    MOVSD ES:EDI,ESI                    ; 00590469
    MOVSD ES:EDI,ESI                    ; 0059046a
    CMP EAX,EBX                         ; 0059046b
    JZ 0x00590499                       ; 0059046d
        ;   XREF to: 00590499 (CONDITIONAL_JUMP)  ; LAB_00590499
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0059046f
    MOV dword ptr [ESP + 0x108],EAX     ; 00590476
    MOV EAX,dword ptr [ESP + 0x130]     ; 0059047d
    MOV dword ptr [ESP + 0x10c],EAX     ; 00590484
    MOV EAX,dword ptr [ESP + 0x134]     ; 0059048b
    MOV dword ptr [ESP + 0x110],EAX     ; 00590492
    FLD float ptr [ESP + 0x108]         ; 00590499
        ;   Label: LAB_00590499
    FLD float ptr [ESP + 0x10c]         ; 005904a0
    FLD float ptr [ESP + 0x110]         ; 005904a7
    LEA EDI,[ESP + 0xf0]                ; 005904ae
    LEA ESI,[ESP + 0x84]                ; 005904b5
    LEA EBX,[ESP + 0xf0]                ; 005904bc
    LEA EAX,[ESP + 0x114]               ; 005904c3
    FXCH ST2                            ; 005904ca
    FADD float ptr [ESP + 0xc0]         ; 005904cc
    FXCH                                ; 005904d3
    FADD float ptr [ESP + 0xc4]         ; 005904d5
    FXCH ST2                            ; 005904dc
    FADD float ptr [ESP + 0xc8]         ; 005904de
    FXCH ST2                            ; 005904e5
    FSTP float ptr [ESP + 0x88]         ; 005904e7
    FXCH                                ; 005904ee
    FSTP float ptr [ESP + 0x8c]         ; 005904f0
    FSTP float ptr [ESP + 0x84]         ; 005904f7
    MOVSD ES:EDI,ESI                    ; 005904fe
    MOVSD ES:EDI,ESI                    ; 005904ff
    MOVSD ES:EDI,ESI                    ; 00590500
    CMP EAX,EBX                         ; 00590501
    JZ 0x0059052f                       ; 00590503
        ;   XREF to: 0059052f (CONDITIONAL_JUMP)  ; LAB_0059052f
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00590505
    MOV dword ptr [ESP + 0x114],EAX     ; 0059050c
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00590513
    MOV dword ptr [ESP + 0x118],EAX     ; 0059051a
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00590521
    MOV dword ptr [ESP + 0x11c],EAX     ; 00590528
    LEA EAX,[ESP + 0x114]               ; 0059052f
        ;   Label: LAB_0059052f
    PUSH EAX                            ; 00590536
    LEA EAX,[ESP + 0x10c]               ; 00590537
    PUSH EAX                            ; 0059053e
    MOV EBX,dword ptr [0x00622c18]      ; 0059053f | g_CDemonSetPtr
    PUSH EBX                            ; 00590545 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 00590546
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0059054b
    FLD float ptr [ESP + 0x16c]         ; 00590552
    ADD ESP,0xc                         ; 00590559
    FLDZ                                ; 0059055c
    FXCH                                ; 0059055e
    FST float ptr [ESP + 0x18]          ; 00590560
    FSTP double ptr [ESP]               ; 00590564
    FCOMP double ptr [ESP]              ; 00590567
    FNSTSW AX                           ; 0059056a
    SAHF                                ; 0059056c
    JA 0x005905b0                       ; 0059056d
        ;   XREF to: 005905b0 (CONDITIONAL_JUMP)  ; LAB_005905b0
    FLD1                                ; 0059056f
    FCOMP double ptr [ESP]              ; 00590571
    FNSTSW AX                           ; 00590574
    SAHF                                ; 00590576
    JBE 0x005905b0                      ; 00590577
        ;   XREF to: 005905b0 (CONDITIONAL_JUMP)  ; LAB_005905b0
    FLD float ptr [ESP + 0x154]         ; 00590579
    FLD float ptr [ESP + 0x18]          ; 00590580
    FMUL ST1                            ; 00590584
    FLD float ptr [ESP + 0x150]         ; 00590586
    FXCH                                ; 0059058d
    FSUB ST0,ST1                        ; 0059058f
    FXCH ST2                            ; 00590591
    FSUBRP                              ; 00590593
    FDIVP                               ; 00590595
    FLD1                                ; 00590597
    FSUBRP                              ; 00590599
    FST float ptr [ESP + 0x18]          ; 0059059b
    FCOMP float ptr [ESP + 0x24]        ; 0059059f
    FNSTSW AX                           ; 005905a3
    SAHF                                ; 005905a5
    JBE 0x005905b0                      ; 005905a6
        ;   XREF to: 005905b0 (CONDITIONAL_JUMP)  ; LAB_005905b0
    MOV EAX,dword ptr [ESP + 0x18]      ; 005905a8
    MOV dword ptr [ESP + 0x24],EAX      ; 005905ac
    MOV ESI,dword ptr [0x00622c18]      ; 005905b0 | g_CDemonSetPtr
        ;   Label: LAB_005905b0
    PUSH ESI                            ; 005905b6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005905b7
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005905bc
    FLD float ptr [ESP + 0x24]          ; 005905bf
        ;   Label: LAB_005905bf
    FLD1                                ; 005905c3
    FCOMPP                              ; 005905c5
    FNSTSW AX                           ; 005905c7
    SAHF                                ; 005905c9
    JNC 0x005905d4                      ; 005905ca
        ;   XREF to: 005905d4 (CONDITIONAL_JUMP)  ; LAB_005905d4
    MOV dword ptr [ESP + 0x24],0x3f800000 ; 005905cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005905d4
        ;   Label: LAB_005905d4
    FLD float ptr [ESP + 0x24]          ; 005905d7
    FSUB float ptr [EAX + 0x20060]      ; 005905db
    FLDZ                                ; 005905e1
    FXCH                                ; 005905e3
    FST float ptr [ESP + 0x1c]          ; 005905e5
    FSTP double ptr [ESP + 0x10]        ; 005905e9
    FCOMP double ptr [ESP + 0x10]       ; 005905ed
    FNSTSW AX                           ; 005905f1
    SAHF                                ; 005905f3
    JBE 0x00590653                      ; 005905f4
        ;   XREF to: 00590653 (CONDITIONAL_JUMP)  ; LAB_00590653
    FLD1                                ; 005905f6
    FDIV float ptr [0x00606080]         ; 005905f8 | DAT_00606080
    FLD float ptr [EBP + 0x18]          ; 005905fe
    FCHS                                ; 00590601
    FXCH                                ; 00590603
    FSTP float ptr [ESP + 0x144]        ; 00590605
    FMUL float ptr [ESP + 0x144]        ; 0059060c
    FLD float ptr [ESP + 0x1c]          ; 00590613
    FXCH                                ; 00590617
    FSTP float ptr [ESP + 0x14c]        ; 00590619
    FCOMP float ptr [ESP + 0x14c]       ; 00590620
    FNSTSW AX                           ; 00590627
    SAHF                                ; 00590629
    JC 0x00590646                       ; 0059062a
        ;   XREF to: 00590646 (CONDITIONAL_JUMP)  ; LAB_00590646
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059062c
        ;   Label: LAB_0059062c
    FLD float ptr [EAX + 0x20060]       ; 0059062f
    FADD float ptr [ESP + 0x1c]         ; 00590635
    FSTP float ptr [EAX + 0x20060]      ; 00590639
    MOV ESP,EBP                         ; 0059063f
    POP EBP                             ; 00590641
    POP EDI                             ; 00590642
    POP ESI                             ; 00590643
    POP EBX                             ; 00590644
    RET                                 ; 00590645
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00590646
        ;   Label: LAB_00590646
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059064d
    JMP 0x0059062c                      ; 00590651
        ;   XREF to: 0059062c (UNCONDITIONAL_JUMP)  ; LAB_0059062c
    JNC 0x0059062c                      ; 00590653
        ;   XREF to: 0059062c (CONDITIONAL_JUMP)  ; LAB_0059062c
        ;   Label: LAB_00590653
    FLD float ptr [EBP + 0x18]          ; 00590655
    FDIV float ptr [0x0060607c]         ; 00590658 | DAT_0060607c
    FLD float ptr [ESP + 0x1c]          ; 0059065e
    FXCH                                ; 00590662
    FSTP float ptr [ESP + 0x148]        ; 00590664
    FCOMP float ptr [ESP + 0x148]       ; 0059066b
    FNSTSW AX                           ; 00590672
    SAHF                                ; 00590674
    JBE 0x0059062c                      ; 00590675
        ;   XREF to: 0059062c (CONDITIONAL_JUMP)  ; LAB_0059062c
    MOV EAX,dword ptr [ESP + 0x148]     ; 00590677
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059067e
    JMP 0x0059062c                      ; 00590682
        ;   XREF to: 0059062c (UNCONDITIONAL_JUMP)  ; LAB_0059062c

