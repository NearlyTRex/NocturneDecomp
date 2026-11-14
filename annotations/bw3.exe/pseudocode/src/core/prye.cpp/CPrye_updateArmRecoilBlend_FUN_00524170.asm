; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_updateArmRecoilBlend_FUN_00524170(CPrye *this_ptr,float delta_time,int is_weapon_active)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
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
; undefined4       Stack[-0xf8]:4  local_f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
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
;   core_prye.cpp_FUN_00518cd0 at 00519c8e
;
; Referenced Globals:
;   undefined4 DAT_005cd75f
;   undefined4 DAT_005cd767
;   undefined4 DAT_005cd76f
;   undefined4 DAT_005cd777
;   undefined4 DAT_005e34fc
;   undefined4 DAT_005e3500
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01ed36e0
;   undefined4 DAT_01ed36e4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_FUN_0053ccc0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524170
        ;   Label: core_prye.cpp_CPrye_updateArmRecoilBlend_FUN_00524170
    PUSH ESI                            ; 00524171
    PUSH EDI                            ; 00524172
    PUSH EBP                            ; 00524173
    MOV EBP,ESP                         ; 00524174
    SUB ESP,0x164                       ; 00524176
    AND ESP,0xfffffff8                  ; 0052417c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0052417f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00524182
    MOV EDX,dword ptr [EAX + 0x20c24]   ; 00524185
    TEST EDX,EDX                        ; 0052418b
    JNZ 0x00524231                      ; 0052418d
        ;   XREF to: 00524231 (CONDITIONAL_JUMP)  ; LAB_00524231
    XOR EBX,EBX                         ; 00524193
    XOR EDI,EDI                         ; 00524195
        ;   Label: LAB_00524195
    MOV dword ptr [ESP + 0x20],EDI      ; 00524197
    TEST EBX,EBX                        ; 0052419b
    JZ 0x005246e3                       ; 0052419d
        ;   XREF to: 005246e3 (CONDITIONAL_JUMP)  ; LAB_005246e3
    MOV dword ptr [ESP + 0x158],EDI     ; 005241a3
    MOV dword ptr [ESP + 0x15c],EDI     ; 005241aa
    MOV EAX,[0x00603b28]                ; 005241b1 | g_CDemonSetPtr
        ;   Label: LAB_005241b1
    MOV EBX,dword ptr [ESP + 0x158]     ; 005241b6
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 005241bd | g_CDemonSetInstance.character_count
    JGE 0x0052430e                      ; 005241c3
        ;   XREF to: 0052430e (CONDITIONAL_JUMP)  ; LAB_0052430e
    ADD EAX,dword ptr [ESP + 0x15c]     ; 005241c9
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 005241d0
    LEA EAX,[EBX + 0x20]                ; 005241d6
    PUSH EAX                            ; 005241d9
    MOV ECX,dword ptr [EBP + 0x14]      ; 005241da
    PUSH ECX                            ; 005241dd
    LEA ESI,[ESP + 0x110]               ; 005241de
    LEA EDI,[ESP + 0x80]                ; 005241e5
    CALL core_actor.cpp_FUN_00408bf0    ; 005241ec
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x110]               ; 005241f1
    ADD ESP,0x8                         ; 005241f8
    MOVSD ES:EDI,ESI                    ; 005241fb
    MOVSD ES:EDI,ESI                    ; 005241fc
    MOVSD ES:EDI,ESI                    ; 005241fd
    FLD float ptr [ESP + 0x78]          ; 005241fe
    FABS                                ; 00524202
    FCOMP double ptr [0x005cd767]       ; 00524204 | DAT_005cd767
    FNSTSW AX                           ; 0052420a
    SAHF                                ; 0052420c
    JBE 0x00524251                      ; 0052420d
        ;   XREF to: 00524251 (CONDITIONAL_JUMP)  ; LAB_00524251
    MOV ECX,dword ptr [ESP + 0x158]     ; 0052420f
        ;   Label: LAB_0052420f
    MOV EDX,dword ptr [ESP + 0x15c]     ; 00524216
    INC ECX                             ; 0052421d
    ADD EDX,0x4                         ; 0052421e
    MOV dword ptr [ESP + 0x158],ECX     ; 00524221
    MOV dword ptr [ESP + 0x15c],EDX     ; 00524228
    JMP 0x005241b1                      ; 0052422f
        ;   XREF to: 005241b1 (UNCONDITIONAL_JUMP)  ; LAB_005241b1
    MOV ECX,dword ptr [EDX + 0x2e0]     ; 00524231
        ;   Label: LAB_00524231
    MOV EAX,EDX                         ; 00524237
    TEST ECX,ECX                        ; 00524239
    JNZ 0x00524247                      ; 0052423b
        ;   XREF to: 00524247 (CONDITIONAL_JUMP)  ; LAB_00524247
    MOV EBX,0x1                         ; 0052423d
        ;   Label: LAB_0052423d
    JMP 0x00524195                      ; 00524242
        ;   XREF to: 00524195 (UNCONDITIONAL_JUMP)  ; LAB_00524195
    CMP ECX,0x5                         ; 00524247
        ;   Label: LAB_00524247
    JZ 0x0052423d                       ; 0052424a
        ;   XREF to: 0052423d (CONDITIONAL_JUMP)  ; LAB_0052423d
    JMP 0x00524195                      ; 0052424c
        ;   XREF to: 00524195 (UNCONDITIONAL_JUMP)  ; LAB_00524195
    FLD float ptr [ESP + 0x7c]          ; 00524251
        ;   Label: LAB_00524251
    FABS                                ; 00524255
    FCOMP double ptr [0x005cd76f]       ; 00524257 | DAT_005cd76f
    FNSTSW AX                           ; 0052425d
    SAHF                                ; 0052425f
    JA 0x0052420f                       ; 00524260
        ;   XREF to: 0052420f (CONDITIONAL_JUMP)  ; LAB_0052420f
    FLDZ                                ; 00524262
    FCOMP float ptr [ESP + 0x80]        ; 00524264
    FNSTSW AX                           ; 0052426b
    SAHF                                ; 0052426d
    JA 0x0052420f                       ; 0052426e
        ;   XREF to: 0052420f (CONDITIONAL_JUMP)  ; LAB_0052420f
    CMP dword ptr [ESP + 0x80],0x40c00000 ; 00524270
    JG 0x0052420f                       ; 0052427b
        ;   XREF to: 0052420f (CONDITIONAL_JUMP)  ; LAB_0052420f
    CMP EBX,dword ptr [EBP + 0x14]      ; 0052427d
    JZ 0x0052420f                       ; 00524280
        ;   XREF to: 0052420f (CONDITIONAL_JUMP)  ; LAB_0052420f
    PUSH EBX                            ; 00524282
    MOV EAX,dword ptr [EBX + 0x154]     ; 00524283
    CALL dword ptr [EAX + 0x10c]        ; 00524289
    ADD ESP,0x4                         ; 0052428f
    TEST EAX,EAX                        ; 00524292
    JNZ 0x0052420f                      ; 00524294
        ;   XREF to: 0052420f (CONDITIONAL_JUMP)  ; LAB_0052420f
    LEA EAX,[ESP + 0x2c]                ; 0052429a
    PUSH EAX                            ; 0052429e
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80 ; 0052429f
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005242a4
    LEA ESI,[ESP + 0x2c]                ; 005242a7
    PUSH ESI                            ; 005242ab
    MOV EAX,dword ptr [EBX + 0x154]     ; 005242ac
    PUSH EBX                            ; 005242b2
    CALL dword ptr [EAX + 0x3c]         ; 005242b3
    ADD ESP,0x8                         ; 005242b6
    CMP EAX,0x2                         ; 005242b9
    JNZ 0x0052420f                      ; 005242bc
        ;   XREF to: 0052420f (CONDITIONAL_JUMP)  ; LAB_0052420f
    FLD float ptr [ESP + 0x80]          ; 005242c2
    FSUB float ptr [ESP + 0x48]         ; 005242c9
    FADD double ptr [0x005cd777]        ; 005242cd | DAT_005cd777
    FMUL double ptr [0x005cd75f]        ; 005242d3 | DAT_005cd75f
    FLD1                                ; 005242d9
    FSUBRP                              ; 005242db
    FST float ptr [ESP + 0x28]          ; 005242dd
    FCOMP float ptr [ESP + 0x20]        ; 005242e1
    FNSTSW AX                           ; 005242e5
    SAHF                                ; 005242e7
    JC 0x0052420f                       ; 005242e8
        ;   XREF to: 0052420f (CONDITIONAL_JUMP)  ; LAB_0052420f
    FLD float ptr [ESP + 0x28]          ; 005242ee
    FLDZ                                ; 005242f2
    FCOMPP                              ; 005242f4
    FNSTSW AX                           ; 005242f6
    SAHF                                ; 005242f8
    JBE 0x00524301                      ; 005242f9
        ;   XREF to: 00524301 (CONDITIONAL_JUMP)  ; LAB_00524301
    XOR EAX,EAX                         ; 005242fb
    MOV dword ptr [ESP + 0x28],EAX      ; 005242fd
    MOV EAX,dword ptr [ESP + 0x28]      ; 00524301
        ;   Label: LAB_00524301
    MOV dword ptr [ESP + 0x20],EAX      ; 00524305
    JMP 0x0052420f                      ; 00524309
        ;   XREF to: 0052420f (UNCONDITIONAL_JUMP)  ; LAB_0052420f
    PUSH EAX                            ; 0052430e | g_CDemonSetInstance
        ;   Label: LAB_0052430e
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0052430f
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00524314
    MOV EBX,dword ptr [EBP + 0x14]      ; 00524317
    PUSH EBX                            ; 0052431a
    MOV ESI,dword ptr [0x00603b28]      ; 0052431b | g_CDemonSetPtr
    PUSH ESI                            ; 00524321 | g_CDemonSetInstance
    MOV EDI,0x40600000                  ; 00524322
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00524327
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,0x3fc00000                  ; 0052432c
    LEA ESI,[ESP + 0xd4]                ; 00524331
    ADD ESP,0x8                         ; 00524338
    XOR EDX,EDX                         ; 0052433b
    MOV dword ptr [ESP + 0x150],EAX     ; 0052433d
    LEA EAX,[ESP + 0xc0]                ; 00524344
    MOV dword ptr [ESP + 0x154],EDI     ; 0052434b
    PUSH EAX                            ; 00524352
    MOV dword ptr [ESP + 0xc4],EDX      ; 00524353
    MOV dword ptr [ESP + 0xc8],EDX      ; 0052435a
    PUSH EBX                            ; 00524361
    MOV dword ptr [ESP + 0xd0],EDI      ; 00524362
    LEA EDI,[ESP + 0x134]               ; 00524369
    CALL core_actor.cpp_FUN_00408b00    ; 00524370
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xd4]                ; 00524375
    LEA EBX,[ESP + 0x134]               ; 0052437c
    ADD ESP,0x8                         ; 00524383
    LEA EAX,[ESP + 0xfc]                ; 00524386
    MOVSD ES:EDI,ESI                    ; 0052438d
    MOVSD ES:EDI,ESI                    ; 0052438e
    MOVSD ES:EDI,ESI                    ; 0052438f
    CMP EAX,EBX                         ; 00524390
    JZ 0x005243be                       ; 00524392
        ;   XREF to: 005243be (CONDITIONAL_JUMP)  ; LAB_005243be
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00524394
    MOV dword ptr [ESP + 0xfc],EAX      ; 0052439b
    MOV EAX,dword ptr [ESP + 0x130]     ; 005243a2
    MOV dword ptr [ESP + 0x100],EAX     ; 005243a9
    MOV EAX,dword ptr [ESP + 0x134]     ; 005243b0
    MOV dword ptr [ESP + 0x104],EAX     ; 005243b7
    MOV EDI,dword ptr [0x01ed36e0]      ; 005243be | DAT_01ed36e0
        ;   Label: LAB_005243be
    MOV EAX,dword ptr [EBP + 0x14]      ; 005243c4
    PUSH EDI                            ; 005243c7
    ADD EAX,0x158                       ; 005243c8
    LEA ESI,[ESP + 0xac]                ; 005243cd
    PUSH EAX                            ; 005243d4
    LEA EBX,[ESP + 0x5c]                ; 005243d5
    LEA EDI,[ESP + 0x8c]                ; 005243d9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 005243e0
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 005243e5
    LEA EAX,[ESP + 0x84]                ; 005243e8
    LEA ESI,[ESP + 0xa8]                ; 005243ef
    PUSH EAX                            ; 005243f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005243f7
    MOVSD ES:EDI,ESI                    ; 005243fa
    MOVSD ES:EDI,ESI                    ; 005243fb
    MOVSD ES:EDI,ESI                    ; 005243fc
    PUSH EAX                            ; 005243fd
    LEA ESI,[ESP + 0x140]               ; 005243fe
    LEA EDI,[ESP + 0x68]                ; 00524405
    CALL core_actor.cpp_FUN_00408b80    ; 00524409
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x140]               ; 0052440e
    ADD ESP,0x8                         ; 00524415
    LEA EAX,[ESP + 0x60]                ; 00524418
    MOVSD ES:EDI,ESI                    ; 0052441c
    MOVSD ES:EDI,ESI                    ; 0052441d
    MOVSD ES:EDI,ESI                    ; 0052441e
    CMP EBX,EAX                         ; 0052441f
    JZ 0x0052443b                       ; 00524421
        ;   XREF to: 0052443b (CONDITIONAL_JUMP)  ; LAB_0052443b
    MOV EAX,dword ptr [ESP + 0x60]      ; 00524423
    MOV dword ptr [ESP + 0x54],EAX      ; 00524427
    MOV EAX,dword ptr [ESP + 0x64]      ; 0052442b
    MOV dword ptr [ESP + 0x58],EAX      ; 0052442f
    MOV EAX,dword ptr [ESP + 0x68]      ; 00524433
    MOV dword ptr [ESP + 0x5c],EAX      ; 00524437
    FLD float ptr [ESP + 0x54]          ; 0052443b
        ;   Label: LAB_0052443b
    FLD float ptr [ESP + 0x58]          ; 0052443f
    FLD float ptr [ESP + 0x5c]          ; 00524443
    LEA EDI,[ESP + 0x114]               ; 00524447
    LEA ESI,[ESP + 0x9c]                ; 0052444e
    LEA EAX,[ESP + 0x114]               ; 00524455
    LEA EBX,[ESP + 0xe4]                ; 0052445c
    FXCH ST2                            ; 00524463
    FADD float ptr [ESP + 0xfc]         ; 00524465
    FXCH                                ; 0052446c
    FADD float ptr [ESP + 0x100]        ; 0052446e
    FXCH ST2                            ; 00524475
    FADD float ptr [ESP + 0x104]        ; 00524477
    FXCH ST2                            ; 0052447e
    FSTP float ptr [ESP + 0xa0]         ; 00524480
    FXCH                                ; 00524487
    FSTP float ptr [ESP + 0xa4]         ; 00524489
    FSTP float ptr [ESP + 0x9c]         ; 00524490
    MOVSD ES:EDI,ESI                    ; 00524497
    MOVSD ES:EDI,ESI                    ; 00524498
    MOVSD ES:EDI,ESI                    ; 00524499
    CMP EBX,EAX                         ; 0052449a
    JZ 0x005244c8                       ; 0052449c
        ;   XREF to: 005244c8 (CONDITIONAL_JUMP)  ; LAB_005244c8
    MOV EAX,dword ptr [ESP + 0x114]     ; 0052449e
    MOV dword ptr [ESP + 0xe4],EAX      ; 005244a5
    MOV EAX,dword ptr [ESP + 0x118]     ; 005244ac
    MOV dword ptr [ESP + 0xe8],EAX      ; 005244b3
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005244ba
    MOV dword ptr [ESP + 0xec],EAX      ; 005244c1
    LEA EAX,[ESP + 0xe4]                ; 005244c8
        ;   Label: LAB_005244c8
    PUSH EAX                            ; 005244cf
    LEA EAX,[ESP + 0x58]                ; 005244d0
    PUSH EAX                            ; 005244d4
    MOV EDX,dword ptr [0x00603b28]      ; 005244d5 | g_CDemonSetPtr
    PUSH EDX                            ; 005244db | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 005244dc
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 005244e1
    FLD float ptr [ESP + 0x16c]         ; 005244e8
    ADD ESP,0xc                         ; 005244ef
    FLDZ                                ; 005244f2
    FXCH                                ; 005244f4
    FST float ptr [ESP + 0x24]          ; 005244f6
    FSTP double ptr [ESP + 0x8]         ; 005244fa
    FCOMP double ptr [ESP + 0x8]        ; 005244fe
    FNSTSW AX                           ; 00524502
    SAHF                                ; 00524504
    JA 0x00524549                       ; 00524505
        ;   XREF to: 00524549 (CONDITIONAL_JUMP)  ; LAB_00524549
    FLD1                                ; 00524507
    FCOMP double ptr [ESP + 0x8]        ; 00524509
    FNSTSW AX                           ; 0052450d
    SAHF                                ; 0052450f
    JBE 0x00524549                      ; 00524510
        ;   XREF to: 00524549 (CONDITIONAL_JUMP)  ; LAB_00524549
    FLD float ptr [ESP + 0x154]         ; 00524512
    FLD float ptr [ESP + 0x24]          ; 00524519
    FMUL ST1                            ; 0052451d
    FLD float ptr [ESP + 0x150]         ; 0052451f
    FXCH                                ; 00524526
    FSUB ST0,ST1                        ; 00524528
    FXCH ST2                            ; 0052452a
    FSUBRP                              ; 0052452c
    FDIVP                               ; 0052452e
    FLD1                                ; 00524530
    FSUBRP                              ; 00524532
    FST float ptr [ESP + 0x24]          ; 00524534
    FCOMP float ptr [ESP + 0x20]        ; 00524538
    FNSTSW AX                           ; 0052453c
    SAHF                                ; 0052453e
    JBE 0x00524549                      ; 0052453f
        ;   XREF to: 00524549 (CONDITIONAL_JUMP)  ; LAB_00524549
    MOV EAX,dword ptr [ESP + 0x24]      ; 00524541
    MOV dword ptr [ESP + 0x20],EAX      ; 00524545
    MOV ECX,dword ptr [0x01ed36e4]      ; 00524549 | DAT_01ed36e4
        ;   Label: LAB_00524549
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052454f
    PUSH ECX                            ; 00524552
    ADD EAX,0x158                       ; 00524553
    PUSH EAX                            ; 00524558
    LEA ESI,[ESP + 0x128]               ; 00524559
    LEA EDI,[ESP + 0xf8]                ; 00524560
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 00524567
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x128]               ; 0052456c
    ADD ESP,0x8                         ; 00524573
    LEA EAX,[ESP + 0xf0]                ; 00524576
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052457d
    PUSH EAX                            ; 00524580
    MOVSD ES:EDI,ESI                    ; 00524581
    MOVSD ES:EDI,ESI                    ; 00524582
    MOVSD ES:EDI,ESI                    ; 00524583
    PUSH EBX                            ; 00524584
    LEA ESI,[ESP + 0xbc]                ; 00524585
    LEA EDI,[ESP + 0xe0]                ; 0052458c
    CALL core_actor.cpp_FUN_00408b80    ; 00524593
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xbc]                ; 00524598
    LEA EBX,[ESP + 0xe0]                ; 0052459f
    ADD ESP,0x8                         ; 005245a6
    LEA EAX,[ESP + 0x54]                ; 005245a9
    MOVSD ES:EDI,ESI                    ; 005245ad
    MOVSD ES:EDI,ESI                    ; 005245ae
    MOVSD ES:EDI,ESI                    ; 005245af
    CMP EAX,EBX                         ; 005245b0
    JZ 0x005245d5                       ; 005245b2
        ;   XREF to: 005245d5 (CONDITIONAL_JUMP)  ; LAB_005245d5
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005245b4
    MOV dword ptr [ESP + 0x54],EAX      ; 005245bb
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005245bf
    MOV dword ptr [ESP + 0x58],EAX      ; 005245c6
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005245ca
    MOV dword ptr [ESP + 0x5c],EAX      ; 005245d1
    FLD float ptr [ESP + 0x54]          ; 005245d5
        ;   Label: LAB_005245d5
    FLD float ptr [ESP + 0x58]          ; 005245d9
    FLD float ptr [ESP + 0x5c]          ; 005245dd
    LEA EDI,[ESP + 0x90]                ; 005245e1
    LEA ESI,[ESP + 0x6c]                ; 005245e8
    LEA EAX,[ESP + 0x90]                ; 005245ec
    LEA EBX,[ESP + 0xe4]                ; 005245f3
    FXCH ST2                            ; 005245fa
    FADD float ptr [ESP + 0xfc]         ; 005245fc
    FXCH                                ; 00524603
    FADD float ptr [ESP + 0x100]        ; 00524605
    FXCH ST2                            ; 0052460c
    FADD float ptr [ESP + 0x104]        ; 0052460e
    FXCH ST2                            ; 00524615
    FSTP float ptr [ESP + 0x70]         ; 00524617
    FXCH                                ; 0052461b
    FSTP float ptr [ESP + 0x74]         ; 0052461d
    FSTP float ptr [ESP + 0x6c]         ; 00524621
    MOVSD ES:EDI,ESI                    ; 00524625
    MOVSD ES:EDI,ESI                    ; 00524626
    MOVSD ES:EDI,ESI                    ; 00524627
    CMP EBX,EAX                         ; 00524628
    JZ 0x00524656                       ; 0052462a
        ;   XREF to: 00524656 (CONDITIONAL_JUMP)  ; LAB_00524656
    MOV EAX,dword ptr [ESP + 0x90]      ; 0052462c
    MOV dword ptr [ESP + 0xe4],EAX      ; 00524633
    MOV EAX,dword ptr [ESP + 0x94]      ; 0052463a
    MOV dword ptr [ESP + 0xe8],EAX      ; 00524641
    MOV EAX,dword ptr [ESP + 0x98]      ; 00524648
    MOV dword ptr [ESP + 0xec],EAX      ; 0052464f
    LEA EAX,[ESP + 0xe4]                ; 00524656
        ;   Label: LAB_00524656
    PUSH EAX                            ; 0052465d
    LEA EAX,[ESP + 0x58]                ; 0052465e
    PUSH EAX                            ; 00524662
    MOV ESI,dword ptr [0x00603b28]      ; 00524663 | g_CDemonSetPtr
    PUSH ESI                            ; 00524669 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 0052466a
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0052466f
    FLD float ptr [ESP + 0x16c]         ; 00524676
    ADD ESP,0xc                         ; 0052467d
    FLDZ                                ; 00524680
    FXCH                                ; 00524682
    FST float ptr [ESP + 0x18]          ; 00524684
    FSTP double ptr [ESP]               ; 00524688
    FCOMP double ptr [ESP]              ; 0052468b
    FNSTSW AX                           ; 0052468e
    SAHF                                ; 00524690
    JA 0x005246d4                       ; 00524691
        ;   XREF to: 005246d4 (CONDITIONAL_JUMP)  ; LAB_005246d4
    FLD1                                ; 00524693
    FCOMP double ptr [ESP]              ; 00524695
    FNSTSW AX                           ; 00524698
    SAHF                                ; 0052469a
    JBE 0x005246d4                      ; 0052469b
        ;   XREF to: 005246d4 (CONDITIONAL_JUMP)  ; LAB_005246d4
    FLD float ptr [ESP + 0x154]         ; 0052469d
    FLD float ptr [ESP + 0x18]          ; 005246a4
    FMUL ST1                            ; 005246a8
    FLD float ptr [ESP + 0x150]         ; 005246aa
    FXCH                                ; 005246b1
    FSUB ST0,ST1                        ; 005246b3
    FXCH ST2                            ; 005246b5
    FSUBRP                              ; 005246b7
    FDIVP                               ; 005246b9
    FLD1                                ; 005246bb
    FSUBRP                              ; 005246bd
    FST float ptr [ESP + 0x18]          ; 005246bf
    FCOMP float ptr [ESP + 0x20]        ; 005246c3
    FNSTSW AX                           ; 005246c7
    SAHF                                ; 005246c9
    JBE 0x005246d4                      ; 005246ca
        ;   XREF to: 005246d4 (CONDITIONAL_JUMP)  ; LAB_005246d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005246cc
    MOV dword ptr [ESP + 0x20],EAX      ; 005246d0
    MOV EDI,dword ptr [0x00603b28]      ; 005246d4 | g_CDemonSetPtr
        ;   Label: LAB_005246d4
    PUSH EDI                            ; 005246da | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 005246db
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005246e0
    FLD float ptr [ESP + 0x20]          ; 005246e3
        ;   Label: LAB_005246e3
    FLD1                                ; 005246e7
    FCOMPP                              ; 005246e9
    FNSTSW AX                           ; 005246eb
    SAHF                                ; 005246ed
    JNC 0x005246f8                      ; 005246ee
        ;   XREF to: 005246f8 (CONDITIONAL_JUMP)  ; LAB_005246f8
    MOV dword ptr [ESP + 0x20],0x3f800000 ; 005246f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005246f8
        ;   Label: LAB_005246f8
    FLD float ptr [ESP + 0x20]          ; 005246fb
    FSUB float ptr [EAX + 0x20c80]      ; 005246ff
    FLDZ                                ; 00524705
    FXCH                                ; 00524707
    FST float ptr [ESP + 0x1c]          ; 00524709
    FSTP double ptr [ESP + 0x10]        ; 0052470d
    FCOMP double ptr [ESP + 0x10]       ; 00524711
    FNSTSW AX                           ; 00524715
    SAHF                                ; 00524717
    JBE 0x00524777                      ; 00524718
        ;   XREF to: 00524777 (CONDITIONAL_JUMP)  ; LAB_00524777
    FLD1                                ; 0052471a
    FDIV float ptr [0x005e3500]         ; 0052471c | DAT_005e3500
    FLD float ptr [EBP + 0x18]          ; 00524722
    FCHS                                ; 00524725
    FXCH                                ; 00524727
    FSTP float ptr [ESP + 0x144]        ; 00524729
    FMUL float ptr [ESP + 0x144]        ; 00524730
    FLD float ptr [ESP + 0x1c]          ; 00524737
    FXCH                                ; 0052473b
    FSTP float ptr [ESP + 0x14c]        ; 0052473d
    FCOMP float ptr [ESP + 0x14c]       ; 00524744
    FNSTSW AX                           ; 0052474b
    SAHF                                ; 0052474d
    JC 0x0052476a                       ; 0052474e
        ;   XREF to: 0052476a (CONDITIONAL_JUMP)  ; LAB_0052476a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00524750
        ;   Label: LAB_00524750
    FLD float ptr [EAX + 0x20c80]       ; 00524753
    FADD float ptr [ESP + 0x1c]         ; 00524759
    FSTP float ptr [EAX + 0x20c80]      ; 0052475d
    MOV ESP,EBP                         ; 00524763
    POP EBP                             ; 00524765
    POP EDI                             ; 00524766
    POP ESI                             ; 00524767
    POP EBX                             ; 00524768
    RET                                 ; 00524769
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0052476a
        ;   Label: LAB_0052476a
    MOV dword ptr [ESP + 0x1c],EAX      ; 00524771
    JMP 0x00524750                      ; 00524775
        ;   XREF to: 00524750 (UNCONDITIONAL_JUMP)  ; LAB_00524750
    JNC 0x00524750                      ; 00524777
        ;   XREF to: 00524750 (CONDITIONAL_JUMP)  ; LAB_00524750
        ;   Label: LAB_00524777
    FLD float ptr [EBP + 0x18]          ; 00524779
    FDIV float ptr [0x005e34fc]         ; 0052477c | DAT_005e34fc
    FLD float ptr [ESP + 0x1c]          ; 00524782
    FXCH                                ; 00524786
    FSTP float ptr [ESP + 0x148]        ; 00524788
    FCOMP float ptr [ESP + 0x148]       ; 0052478f
    FNSTSW AX                           ; 00524796
    SAHF                                ; 00524798
    JBE 0x00524750                      ; 00524799
        ;   XREF to: 00524750 (CONDITIONAL_JUMP)  ; LAB_00524750
    MOV EAX,dword ptr [ESP + 0x148]     ; 0052479b
    MOV dword ptr [ESP + 0x1c],EAX      ; 005247a2
    JMP 0x00524750                      ; 005247a6
        ;   XREF to: 00524750 (UNCONDITIONAL_JUMP)  ; LAB_00524750

