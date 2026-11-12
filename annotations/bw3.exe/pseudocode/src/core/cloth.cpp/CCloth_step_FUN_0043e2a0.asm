; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_step_FUN_0043e2a0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)
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
;   core_cloth.cpp_CCloth_process_FUN_0043e270 at 0043e28e
;
; Referenced Globals:
;   undefined4 DAT_005b9128
;   undefined4 DAT_005b9130
;   undefined4 DAT_005b9138
;   undefined4 DAT_005b9140
;   undefined4 DAT_005dd3b0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_cloth.cpp_CCloth_applyConstraints_FUN_0043d9b0
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043d830
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dirmat.cpp_FUN_0045b870
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e2a0
        ;   Label: core_cloth.cpp_CCloth_step_FUN_0043e2a0
    PUSH ESI                            ; 0043e2a1
    PUSH EDI                            ; 0043e2a2
    PUSH EBP                            ; 0043e2a3
    MOV EBP,ESP                         ; 0043e2a4
    SUB ESP,0x2cc                       ; 0043e2a6
    AND ESP,0xfffffff8                  ; 0043e2ac
    XOR EDX,EDX                         ; 0043e2af
    FLD float ptr [EBP + 0x24]          ; 0043e2b1
    MOV dword ptr [ESP + 0x23c],EDX     ; 0043e2b4
    FCOMP double ptr [0x005b9128]       ; 0043e2bb | DAT_005b9128
    FNSTSW AX                           ; 0043e2c1
    SAHF                                ; 0043e2c3
    JNC 0x0043edb7                      ; 0043e2c4
        ;   XREF to: 0043edb7 (CONDITIONAL_JUMP)  ; LAB_0043edb7
    FLD float ptr [EBP + 0x20]          ; 0043e2ca
        ;   Label: LAB_0043e2ca
    FCOMP double ptr [0x005b9130]       ; 0043e2cd | DAT_005b9130
    FNSTSW AX                           ; 0043e2d3
    SAHF                                ; 0043e2d5
    JNC 0x0043e2df                      ; 0043e2d6
        ;   XREF to: 0043e2df (CONDITIONAL_JUMP)  ; LAB_0043e2df
    MOV dword ptr [EBP + 0x20],0x3c23d70a ; 0043e2d8
    FLD float ptr [EBP + 0x20]          ; 0043e2df
        ;   Label: LAB_0043e2df
    FLD1                                ; 0043e2e2
    FDIVRP                              ; 0043e2e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e2e6
    FSTP float ptr [EAX + 0x3ab00]      ; 0043e2e9
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043e2ef
    FLD float ptr [EAX + 0x4]           ; 0043e2f2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e2f5
    FSUBR float ptr [EBP + 0x24]        ; 0043e2f8
    MOV ESI,dword ptr [EBP + 0x28]      ; 0043e2fb
    FSTP float ptr [EAX + 0x3ab04]      ; 0043e2fe
    TEST ESI,ESI                        ; 0043e304
    JZ 0x0043e52e                       ; 0043e306
        ;   XREF to: 0043e52e (CONDITIONAL_JUMP)  ; LAB_0043e52e
    XOR EDI,EDI                         ; 0043e30c
    MOV EDX,dword ptr [EAX + 0x39ce8]   ; 0043e30e
    MOV dword ptr [ESP + 0x24c],EDI     ; 0043e314
    TEST EDX,EDX                        ; 0043e31b
    JLE 0x0043e4d6                      ; 0043e31d
        ;   XREF to: 0043e4d6 (CONDITIONAL_JUMP)  ; LAB_0043e4d6
    LEA EAX,[ESI + 0xe80]               ; 0043e323
    MOV dword ptr [ESP + 0x240],EAX     ; 0043e329
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e330
    ADD EAX,0x398                       ; 0043e333
    MOV dword ptr [ESP + 0x2c0],EAX     ; 0043e338
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e33f
    MOV dword ptr [ESP + 0x29c],EAX     ; 0043e342
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0043e349
        ;   Label: LAB_0043e349
    IMUL EBX,dword ptr [EAX + 0x39cec],0x11c ; 0043e350
    ADD EBX,dword ptr [ESP + 0x2c0]     ; 0043e35a
    XOR ESI,ESI                         ; 0043e361
    MOV dword ptr [EBX + 0x8],0x0       ; 0043e363
    MOV dword ptr [ESP + 0x264],ESI     ; 0043e36a
    MOV EDI,dword ptr [EBX + 0xdc]      ; 0043e371
    MOV EAX,dword ptr [EBX + 0x8]       ; 0043e377
    MOV dword ptr [EBX + 0x4],EAX       ; 0043e37a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043e37d
    MOV dword ptr [EBX],EAX             ; 0043e380
    TEST EDI,EDI                        ; 0043e382
    JLE 0x0043e4a5                      ; 0043e384
        ;   XREF to: 0043e4a5 (CONDITIONAL_JUMP)  ; LAB_0043e4a5
    LEA EAX,[EBX + 0x110]               ; 0043e38a
    LEA EDX,[EBX + 0xec]                ; 0043e390
    MOV dword ptr [ESP + 0x298],EAX     ; 0043e396
    MOV dword ptr [ESP + 0x290],EDX     ; 0043e39d
    MOV dword ptr [ESP + 0x294],EBX     ; 0043e3a4
    MOV EAX,dword ptr [ESP + 0x294]     ; 0043e3ab
        ;   Label: LAB_0043e3ab
    IMUL EAX,dword ptr [EAX + 0xe0],0x30 ; 0043e3b2
    ADD EAX,dword ptr [ESP + 0x240]     ; 0043e3b9
    PUSH EAX                            ; 0043e3c0
    MOV ECX,dword ptr [ESP + 0x294]     ; 0043e3c1
    PUSH ECX                            ; 0043e3c8
    LEA ESI,[ESP + 0x154]               ; 0043e3c9
    LEA EDI,[ESP + 0xa0]                ; 0043e3d0
    CALL core_xform.cpp_FUN_00583260    ; 0043e3d7
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x154]               ; 0043e3dc
    ADD ESP,0x8                         ; 0043e3e3
    MOVSD ES:EDI,ESI                    ; 0043e3e6
    MOVSD ES:EDI,ESI                    ; 0043e3e7
    MOVSD ES:EDI,ESI                    ; 0043e3e8
    MOV EAX,dword ptr [ESP + 0x298]     ; 0043e3e9
    FLD float ptr [ESP + 0x98]          ; 0043e3f0
    FMUL float ptr [EAX]                ; 0043e3f7
    FLD float ptr [ESP + 0x9c]          ; 0043e3f9
    FXCH                                ; 0043e400
    FSTP float ptr [ESP + 0x1f4]        ; 0043e402
    FMUL float ptr [EAX]                ; 0043e409
    FLD float ptr [ESP + 0xa0]          ; 0043e40b
    FXCH                                ; 0043e412
    FSTP float ptr [ESP + 0x1f8]        ; 0043e414
    FMUL float ptr [EAX]                ; 0043e41b
    MOV EDX,dword ptr [ESP + 0x264]     ; 0043e41d
    LEA EDI,[ESP + 0x224]               ; 0043e424
    LEA ESI,[ESP + 0x1f4]               ; 0043e42b
    ADD EAX,0x4                         ; 0043e432
    INC EDX                             ; 0043e435
    MOV dword ptr [ESP + 0x298],EAX     ; 0043e436
    FSTP float ptr [ESP + 0x1fc]        ; 0043e43d
    MOVSD ES:EDI,ESI                    ; 0043e444
    MOVSD ES:EDI,ESI                    ; 0043e445
    MOVSD ES:EDI,ESI                    ; 0043e446
    MOV dword ptr [ESP + 0x264],EDX     ; 0043e447
    FLD float ptr [EBX]                 ; 0043e44e
    FLD float ptr [EBX + 0x4]           ; 0043e450
    FLD float ptr [EBX + 0x8]           ; 0043e453
    MOV ESI,dword ptr [ESP + 0x290]     ; 0043e456
    MOV EDI,dword ptr [ESP + 0x294]     ; 0043e45d
    MOV ECX,dword ptr [EBX + 0xdc]      ; 0043e464
    FXCH ST2                            ; 0043e46a
    FADD float ptr [ESP + 0x224]        ; 0043e46c
    ADD ESI,0xc                         ; 0043e473
    ADD EDI,0x4                         ; 0043e476
    FSTP float ptr [EBX]                ; 0043e479
    FADD float ptr [ESP + 0x228]        ; 0043e47b
    MOV dword ptr [ESP + 0x290],ESI     ; 0043e482
    FSTP float ptr [EBX + 0x4]          ; 0043e489
    FADD float ptr [ESP + 0x22c]        ; 0043e48c
    MOV dword ptr [ESP + 0x294],EDI     ; 0043e493
    FSTP float ptr [EBX + 0x8]          ; 0043e49a
    CMP EDX,ECX                         ; 0043e49d
    JL 0x0043e3ab                       ; 0043e49f
        ;   XREF to: 0043e3ab (CONDITIONAL_JUMP)  ; LAB_0043e3ab
    MOV ECX,dword ptr [ESP + 0x29c]     ; 0043e4a5
        ;   Label: LAB_0043e4a5
    MOV EBX,dword ptr [ESP + 0x24c]     ; 0043e4ac
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043e4b3
    ADD ECX,0x4                         ; 0043e4b6
    INC EBX                             ; 0043e4b9
    MOV ESI,dword ptr [EDX + 0x39ce8]   ; 0043e4ba
    MOV dword ptr [ESP + 0x29c],ECX     ; 0043e4c0
    MOV dword ptr [ESP + 0x24c],EBX     ; 0043e4c7
    CMP EBX,ESI                         ; 0043e4ce
    JL 0x0043e349                       ; 0043e4d0
        ;   XREF to: 0043e349 (CONDITIONAL_JUMP)  ; LAB_0043e349
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e4d6
        ;   Label: LAB_0043e4d6
    MOV EDI,dword ptr [EAX + 0x37b4c]   ; 0043e4d9
    XOR EBX,EBX                         ; 0043e4df
    TEST EDI,EDI                        ; 0043e4e1
    JLE 0x0043e510                      ; 0043e4e3
        ;   XREF to: 0043e510 (CONDITIONAL_JUMP)  ; LAB_0043e510
    MOV EAX,dword ptr [EBP + 0x28]      ; 0043e4e5
        ;   Label: LAB_0043e4e5
    PUSH EAX                            ; 0043e4e8
    PUSH EBX                            ; 0043e4e9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043e4ea
    PUSH EDX                            ; 0043e4ed
    CALL core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043d830 ; 0043e4ee
        ;   XREF to: 0043d830 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043d830(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0043e4f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e4f6
    INC EBX                             ; 0043e4f9
    CMP EBX,dword ptr [EAX + 0x37b4c]   ; 0043e4fa
    JL 0x0043e4e5                       ; 0043e500
        ;   XREF to: 0043e4e5 (CONDITIONAL_JUMP)  ; LAB_0043e4e5
    LEA EAX,[EAX]                       ; 0043e502
    LEA EDX,[EDX]                       ; 0043e508
    MOV EAX,EAX                         ; 0043e50e
    MOV EBX,dword ptr [EBP + 0x28]      ; 0043e510
        ;   Label: LAB_0043e510
    PUSH EBX                            ; 0043e513
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0043e514
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043e519
    ADD ESP,0x4                         ; 0043e51c
    TEST EAX,EAX                        ; 0043e51f
    JNZ 0x0043e52e                      ; 0043e521
        ;   XREF to: 0043e52e (CONDITIONAL_JUMP)  ; LAB_0043e52e
    MOV dword ptr [ESP + 0x23c],0x1     ; 0043e523
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e52e
        ;   Label: LAB_0043e52e
    MOV ESI,dword ptr [EAX + 0x104]     ; 0043e531
    XOR EBX,EBX                         ; 0043e537
    TEST ESI,ESI                        ; 0043e539
    JLE 0x0043e67c                      ; 0043e53b
        ;   XREF to: 0043e67c (CONDITIONAL_JUMP)  ; LAB_0043e67c
    ADD EAX,0x37b50                     ; 0043e541
    MOV dword ptr [ESP + 0x260],EAX     ; 0043e546
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e54d
    ADD EAX,0x398                       ; 0043e550
    MOV dword ptr [ESP + 0x250],EAX     ; 0043e555
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e55c
    MOV dword ptr [ESP + 0x2a0],EAX     ; 0043e55f
    IMUL EAX,EBX,0x11c                  ; 0043e566
        ;   Label: LAB_0043e566
    MOV dword ptr [ESP + 0x244],EAX     ; 0043e56c
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 0043e573
    MOV EAX,dword ptr [EAX + 0x470]     ; 0043e57a
    CMP EAX,-0x1                        ; 0043e580
    JZ 0x0043e656                       ; 0043e583
        ;   XREF to: 0043e656 (CONDITIONAL_JUMP)  ; LAB_0043e656
    IMUL EAX,EAX,0xac                   ; 0043e589
    MOV EDX,dword ptr [ESP + 0x260]     ; 0043e58f
    ADD EDX,EAX                         ; 0043e596
    XOR ESI,ESI                         ; 0043e598
    MOV EAX,dword ptr [EDX + 0x44]      ; 0043e59a
    MOV dword ptr [ESP + 0x248],EDX     ; 0043e59d
    MOV dword ptr [ESP + 0x190],EAX     ; 0043e5a4
    LEA EAX,[ESP + 0x188]               ; 0043e5ab
    MOV dword ptr [ESP + 0x188],ESI     ; 0043e5b2
    PUSH EAX                            ; 0043e5b9
    LEA EAX,[EDX + 0x78]                ; 0043e5ba
    MOV dword ptr [ESP + 0x190],ESI     ; 0043e5bd
    PUSH EAX                            ; 0043e5c4
    LEA ESI,[ESP + 0xd0]                ; 0043e5c5
    LEA EDI,[ESP + 0x40]                ; 0043e5cc
    CALL core_dirmat.cpp_FUN_0045b800   ; 0043e5d0
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 0043e5d5
    LEA ESI,[ESP + 0xc8]                ; 0043e5d8
    MOV EAX,dword ptr [ESP + 0x248]     ; 0043e5df
    MOVSD ES:EDI,ESI                    ; 0043e5e6
    MOVSD ES:EDI,ESI                    ; 0043e5e7
    MOVSD ES:EDI,ESI                    ; 0043e5e8
    MOV EDX,dword ptr [ESP + 0x250]     ; 0043e5e9
    FLD float ptr [EAX + 0xa0]          ; 0043e5f0
    FADD float ptr [ESP + 0x38]         ; 0043e5f6
    LEA EDI,[ESP + 0x74]                ; 0043e5fa
    FSTP float ptr [ESP + 0xf8]         ; 0043e5fe
    FLD float ptr [EAX + 0xa4]          ; 0043e605
    FADD float ptr [ESP + 0x3c]         ; 0043e60b
    LEA ESI,[ESP + 0xf8]                ; 0043e60f
    FSTP float ptr [ESP + 0xfc]         ; 0043e616
    FLD float ptr [EAX + 0xa8]          ; 0043e61d
    FADD float ptr [ESP + 0x40]         ; 0043e623
    MOV EAX,dword ptr [ESP + 0x244]     ; 0043e627
    FSTP float ptr [ESP + 0x100]        ; 0043e62e
    ADD EDX,EAX                         ; 0043e635
    LEA EAX,[ESP + 0x74]                ; 0043e637
    MOVSD ES:EDI,ESI                    ; 0043e63b
    MOVSD ES:EDI,ESI                    ; 0043e63c
    MOVSD ES:EDI,ESI                    ; 0043e63d
    CMP EDX,EAX                         ; 0043e63e
    JZ 0x0043e656                       ; 0043e640
        ;   XREF to: 0043e656 (CONDITIONAL_JUMP)  ; LAB_0043e656
    MOV EAX,dword ptr [ESP + 0x74]      ; 0043e642
    MOV dword ptr [EDX],EAX             ; 0043e646
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043e648
    MOV dword ptr [EDX + 0x4],EAX       ; 0043e64c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0043e64f
    MOV dword ptr [EDX + 0x8],EAX       ; 0043e653
    MOV EDI,dword ptr [ESP + 0x2a0]     ; 0043e656
        ;   Label: LAB_0043e656
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e65d
    INC EBX                             ; 0043e660
    ADD EDI,0x11c                       ; 0043e661
    MOV EDX,dword ptr [EAX + 0x104]     ; 0043e667
    MOV dword ptr [ESP + 0x2a0],EDI     ; 0043e66d
    CMP EBX,EDX                         ; 0043e674
    JL 0x0043e566                       ; 0043e676
        ;   XREF to: 0043e566 (CONDITIONAL_JUMP)  ; LAB_0043e566
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0043e67c
        ;   Label: LAB_0043e67c
    PUSH ECX                            ; 0043e67f
    LEA EAX,[ESP + 0x8]                 ; 0043e680
    PUSH EAX                            ; 0043e684
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 0043e685
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x00603b28]      ; 0043e68a | g_CDemonSetPtr
    LEA EDI,[ESP + 0x208]               ; 0043e690
    LEA ESI,[ESI + 0x15ac70]            ; 0043e697
    ADD ESP,0x8                         ; 0043e69d
    MOVSD ES:EDI,ESI                    ; 0043e6a0 | g_CDemonSetInstance.active_fog.scroll.x
    MOVSD ES:EDI,ESI                    ; 0043e6a1 | g_CDemonSetInstance.active_fog.scroll.y
    MOVSD ES:EDI,ESI                    ; 0043e6a2 | g_CDemonSetInstance.active_fog.scroll.z
    FLD float ptr [ESP + 0x204]         ; 0043e6a3
    FMUL ST0                            ; 0043e6aa
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043e6ac
    FLD float ptr [ESP + 0x200]         ; 0043e6b0
    FMUL ST0                            ; 0043e6b7
    MOV dword ptr [ESP + 0x218],EAX     ; 0043e6b9
    FADDP                               ; 0043e6c0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043e6c2
    FLD float ptr [ESP + 0x208]         ; 0043e6c6
    FMUL ST0                            ; 0043e6cd
    MOV dword ptr [ESP + 0x21c],EAX     ; 0043e6cf
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043e6d6
    FADDP                               ; 0043e6da
    MOV dword ptr [ESP + 0x220],EAX     ; 0043e6dc
    FSQRT                               ; 0043e6e3
    FLDZ                                ; 0043e6e5
    FXCH                                ; 0043e6e7
    FSTP float ptr [ESP + 0x254]        ; 0043e6e9
    FCOMP float ptr [ESP + 0x254]       ; 0043e6f0
    FNSTSW AX                           ; 0043e6f7
    SAHF                                ; 0043e6f9
    JNC 0x0043edc3                      ; 0043e6fa
        ;   XREF to: 0043edc3 (CONDITIONAL_JUMP)  ; LAB_0043edc3
    FLD1                                ; 0043e700
    FLD float ptr [ESP + 0x200]         ; 0043e702
    FXCH                                ; 0043e709
    FDIV float ptr [ESP + 0x254]        ; 0043e70b
    FXCH                                ; 0043e712
    FMUL ST1                            ; 0043e714
    FLD float ptr [ESP + 0x204]         ; 0043e716
    FMUL ST2                            ; 0043e71d
    FLD float ptr [ESP + 0x208]         ; 0043e71f
    FMULP ST3                           ; 0043e726
    FXCH                                ; 0043e728
    FSTP float ptr [ESP + 0x200]        ; 0043e72a
    FSTP float ptr [ESP + 0x204]        ; 0043e731
    FSTP float ptr [ESP + 0x208]        ; 0043e738
    FLD float ptr [ESP + 0x204]         ; 0043e73f
        ;   Label: LAB_0043e73f
    FMUL float ptr [ESP + 0x21c]        ; 0043e746
    FLD float ptr [ESP + 0x200]         ; 0043e74d
    FMUL float ptr [ESP + 0x218]        ; 0043e754
    FADDP                               ; 0043e75b
    FLD float ptr [ESP + 0x208]         ; 0043e75d
    FMUL float ptr [ESP + 0x220]        ; 0043e764
    FADDP                               ; 0043e76b
    FST float ptr [ESP + 0x25c]         ; 0043e76d
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0043e774
    FLDZ                                ; 0043e77b
    MOV dword ptr [ESP],EAX             ; 0043e77d
    FCOMPP                              ; 0043e780
    FNSTSW AX                           ; 0043e782
    SAHF                                ; 0043e784
    JNC 0x0043e78c                      ; 0043e785
        ;   XREF to: 0043e78c (CONDITIONAL_JUMP)  ; LAB_0043e78c
    XOR EAX,EAX                         ; 0043e787
    MOV dword ptr [ESP],EAX             ; 0043e789
    FLD float ptr [ESP]                 ; 0043e78c
        ;   Label: LAB_0043e78c
    MOV EAX,[0x00603b28]                ; 0043e78f | g_CDemonSetPtr
    FMUL double ptr [0x005b9138]        ; 0043e794 | DAT_005b9138
    FLD float ptr [EAX + 0x15ac70]      ; 0043e79a | g_CDemonSetInstance.active_fog.scroll.x
    FXCH                                ; 0043e7a0
    FSTP float ptr [ESP]                ; 0043e7a2
    FMUL float ptr [ESP]                ; 0043e7a5
    FSTP float ptr [ESP + 0xa4]         ; 0043e7a8
    FLD float ptr [EAX + 0x15ac74]      ; 0043e7af | g_CDemonSetInstance.active_fog.scroll.y
    FMUL float ptr [ESP]                ; 0043e7b5
    FSTP float ptr [ESP + 0xa8]         ; 0043e7b8
    FLD float ptr [EAX + 0x15ac78]      ; 0043e7bf | g_CDemonSetInstance.active_fog.scroll.z
    FMUL float ptr [ESP]                ; 0043e7c5
    LEA EDI,[ESP + 0x230]               ; 0043e7c8
    LEA ESI,[ESP + 0xa4]                ; 0043e7cf
    LEA EAX,[ESP + 0x230]               ; 0043e7d6
    FSTP float ptr [ESP + 0xac]         ; 0043e7dd
    PUSH EAX                            ; 0043e7e4
    LEA EAX,[ESP + 0x8]                 ; 0043e7e5
    MOVSD ES:EDI,ESI                    ; 0043e7e9
    MOVSD ES:EDI,ESI                    ; 0043e7ea
    MOVSD ES:EDI,ESI                    ; 0043e7eb
    PUSH EAX                            ; 0043e7ec
    LEA ESI,[ESP + 0x184]               ; 0043e7ed
    LEA EDI,[ESP + 0x64]                ; 0043e7f4
    CALL core_dirmat.cpp_FUN_0045b870   ; 0043e7f8
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x184]               ; 0043e7fd
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043e804
    ADD ESP,0x8                         ; 0043e807
    MOVSD ES:EDI,ESI                    ; 0043e80a
    MOVSD ES:EDI,ESI                    ; 0043e80b
    MOVSD ES:EDI,ESI                    ; 0043e80c
    FLD float ptr [ESP + 0x60]          ; 0043e80d
    FLD float ptr [ESP + 0x5c]          ; 0043e811
    FADD float ptr [EBX + 0x3ab24]      ; 0043e815
    FLD float ptr [ESP + 0x64]          ; 0043e81b
    FXCH                                ; 0043e81f
    FSTP float ptr [ESP + 0x1d0]        ; 0043e821
    FXCH                                ; 0043e828
    FADD float ptr [EBX + 0x3ab28]      ; 0043e82a
    LEA EDI,[ESP + 0x158]               ; 0043e830
    FSTP float ptr [ESP + 0x1d4]        ; 0043e837
    FADD float ptr [EBX + 0x3ab2c]      ; 0043e83e
    LEA ESI,[ESP + 0x1d0]               ; 0043e844
    FSTP float ptr [ESP + 0x1d8]        ; 0043e84b
    MOVSD ES:EDI,ESI                    ; 0043e852
    MOVSD ES:EDI,ESI                    ; 0043e853
    MOVSD ES:EDI,ESI                    ; 0043e854
    LEA EAX,[EBX + 0x3ab08]             ; 0043e855
    MOV dword ptr [EBX + 0x3ab2c],0x0   ; 0043e85b
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043e865
    MOV ECX,dword ptr [EBX + 0x3ab2c]   ; 0043e868
    MOV dword ptr [EBX + 0x3ab28],ECX   ; 0043e86e
    MOV ECX,dword ptr [EBX + 0x3ab28]   ; 0043e874
    MOV dword ptr [EBX + 0x3ab24],ECX   ; 0043e87a
    FLD float ptr [EDX]                 ; 0043e880
    FSUB float ptr [EAX]                ; 0043e882
    FSTP float ptr [ESP + 0x104]        ; 0043e884
    FLD float ptr [EDX + 0x4]           ; 0043e88b
    FSUB float ptr [EAX + 0x4]          ; 0043e88e
    LEA EDI,[ESP + 0x44]                ; 0043e891
    FSTP float ptr [ESP + 0x108]        ; 0043e895
    FLD float ptr [EDX + 0x8]           ; 0043e89c
    FSUB float ptr [EAX + 0x8]          ; 0043e89f
    LEA ESI,[ESP + 0x104]               ; 0043e8a2
    FSTP float ptr [ESP + 0x10c]        ; 0043e8a9
    MOVSD ES:EDI,ESI                    ; 0043e8b0
    MOVSD ES:EDI,ESI                    ; 0043e8b1
    MOVSD ES:EDI,ESI                    ; 0043e8b2
    CMP EAX,EDX                         ; 0043e8b3
    JZ 0x0043e8c7                       ; 0043e8b5
        ;   XREF to: 0043e8c7 (CONDITIONAL_JUMP)  ; LAB_0043e8c7
    MOV ECX,dword ptr [EDX]             ; 0043e8b7
    MOV dword ptr [EAX],ECX             ; 0043e8b9
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043e8bb
    MOV dword ptr [EAX + 0x4],ECX       ; 0043e8be
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043e8c1
    MOV dword ptr [EAX + 0x8],ECX       ; 0043e8c4
    LEA EAX,[ESP + 0x44]                ; 0043e8c7
        ;   Label: LAB_0043e8c7
    PUSH EAX                            ; 0043e8cb
    LEA EAX,[ESP + 0x8]                 ; 0043e8cc
    PUSH EAX                            ; 0043e8d0
    LEA ESI,[ESP + 0x1f0]               ; 0043e8d1
    LEA EDI,[ESP + 0x70]                ; 0043e8d8
    CALL core_dirmat.cpp_FUN_0045b870   ; 0043e8dc
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x1f0]               ; 0043e8e1
    ADD ESP,0x8                         ; 0043e8e8
    MOVSD ES:EDI,ESI                    ; 0043e8eb
    MOVSD ES:EDI,ESI                    ; 0043e8ec
    MOVSD ES:EDI,ESI                    ; 0043e8ed
    FLD1                                ; 0043e8ee
    FLD float ptr [ESP + 0x68]          ; 0043e8f0
    FXCH                                ; 0043e8f4
    FDIV float ptr [EBP + 0x20]         ; 0043e8f6
    FXCH                                ; 0043e8f9
    FMUL ST1                            ; 0043e8fb
    FLD float ptr [ESP + 0x6c]          ; 0043e8fd
    FMUL ST2                            ; 0043e901
    FLD float ptr [ESP + 0x70]          ; 0043e903
    FMUL ST3                            ; 0043e907
    LEA EDI,[ESP + 0xd4]                ; 0043e909
    LEA ESI,[ESP + 0x140]               ; 0043e910
    FXCH ST2                            ; 0043e917
    FSTP float ptr [ESP + 0x140]        ; 0043e919
    FSTP float ptr [ESP + 0x144]        ; 0043e920
    FSTP float ptr [ESP + 0x148]        ; 0043e927
    MOVSD ES:EDI,ESI                    ; 0043e92e
    MOVSD ES:EDI,ESI                    ; 0043e92f
    MOVSD ES:EDI,ESI                    ; 0043e930
    FLD float ptr [ESP + 0xd4]          ; 0043e931
    FLD float ptr [ESP + 0xd8]          ; 0043e938
    FLD float ptr [ESP + 0xdc]          ; 0043e93f
    LEA EDI,[ESP + 0xb0]                ; 0043e946
    LEA ESI,[ESP + 0x50]                ; 0043e94d
    FXCH ST2                            ; 0043e951
    FSUB float ptr [ESP + 0x158]        ; 0043e953
    FXCH                                ; 0043e95a
    FSUB float ptr [ESP + 0x15c]        ; 0043e95c
    FXCH ST2                            ; 0043e963
    FSUB float ptr [ESP + 0x160]        ; 0043e965
    FXCH                                ; 0043e96c
    FSTP float ptr [ESP + 0x50]         ; 0043e96e
    FXCH                                ; 0043e972
    FSTP float ptr [ESP + 0x54]         ; 0043e974
    FSTP float ptr [ESP + 0x58]         ; 0043e978
    MOVSD ES:EDI,ESI                    ; 0043e97c
    MOVSD ES:EDI,ESI                    ; 0043e97d
    MOVSD ES:EDI,ESI                    ; 0043e97e
    FLD float ptr [ESP + 0xb0]          ; 0043e97f
    FMUL ST1                            ; 0043e986
    FLD float ptr [ESP + 0xb4]          ; 0043e988
    FMUL ST2                            ; 0043e98f
    FLD float ptr [ESP + 0xb8]          ; 0043e991
    FMULP ST3                           ; 0043e998
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0043e99a
    LEA EDI,[ESP + 0x1b8]               ; 0043e99d
    LEA ESI,[ESP + 0x1c4]               ; 0043e9a4
    FXCH                                ; 0043e9ab
    FSTP float ptr [ESP + 0x1c4]        ; 0043e9ad
    FSTP float ptr [ESP + 0x1c8]        ; 0043e9b4
    FSTP float ptr [ESP + 0x1cc]        ; 0043e9bb
    MOVSD ES:EDI,ESI                    ; 0043e9c2
    MOVSD ES:EDI,ESI                    ; 0043e9c3
    MOVSD ES:EDI,ESI                    ; 0043e9c4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e9c5
    FLD float ptr [EDX]                 ; 0043e9c8
    FSUB float ptr [EAX + 0x3ab14]      ; 0043e9ca
    ADD EAX,0x3ab14                     ; 0043e9d0
    FSTP float ptr [ESP + 0x164]        ; 0043e9d5
    FLD float ptr [EDX + 0x4]           ; 0043e9dc
    FSUB float ptr [EAX + 0x4]          ; 0043e9df
    LEA EDI,[ESP + 0x1a0]               ; 0043e9e2
    FSTP float ptr [ESP + 0x168]        ; 0043e9e9
    FLD float ptr [EDX + 0x8]           ; 0043e9f0
    FSUB float ptr [EAX + 0x8]          ; 0043e9f3
    LEA ESI,[ESP + 0x164]               ; 0043e9f6
    FSTP float ptr [ESP + 0x16c]        ; 0043e9fd
    MOVSD ES:EDI,ESI                    ; 0043ea04
    MOVSD ES:EDI,ESI                    ; 0043ea05
    MOVSD ES:EDI,ESI                    ; 0043ea06
    CMP EAX,EDX                         ; 0043ea07
    JZ 0x0043ea1b                       ; 0043ea09
        ;   XREF to: 0043ea1b (CONDITIONAL_JUMP)  ; LAB_0043ea1b
    MOV ECX,dword ptr [EDX]             ; 0043ea0b
    MOV dword ptr [EAX],ECX             ; 0043ea0d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043ea0f
    MOV dword ptr [EAX + 0x4],ECX       ; 0043ea12
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043ea15
    MOV dword ptr [EAX + 0x8],ECX       ; 0043ea18
    PUSH dword ptr [ESP + 0x1a4]        ; 0043ea1b
        ;   Label: LAB_0043ea1b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0043ea22
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x2cc],EAX     ; 0043ea27
    FLD float ptr [ESP + 0x2cc]         ; 0043ea2e
    ADD ESP,0x4                         ; 0043ea35
    FLD1                                ; 0043ea38
    FDIV float ptr [EBP + 0x20]         ; 0043ea3a
    FXCH                                ; 0043ea3d
    FMUL ST1                            ; 0043ea3f
    FMULP                               ; 0043ea41
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ea43
    XOR EDI,EDI                         ; 0043ea46
    MOV EBX,dword ptr [EAX + 0x104]     ; 0043ea48
    FSTP float ptr [ESP + 0x2b0]        ; 0043ea4e
    TEST EBX,EBX                        ; 0043ea55
    JLE 0x0043eaeb                      ; 0043ea57
        ;   XREF to: 0043eaeb (CONDITIONAL_JUMP)  ; LAB_0043eaeb
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043ea5d
    ADD EAX,0x398                       ; 0043ea60
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043ea65
    MOV dword ptr [ESP + 0x2ac],EAX     ; 0043ea68
    ADD EBX,0x464                       ; 0043ea6f
    LEA ESI,[EDX + 0x3a4]               ; 0043ea75
    IMUL EAX,EDI,0x11c                  ; 0043ea7b
        ;   Label: LAB_0043ea7b
    MOV dword ptr [ESI + 0x8],0x0       ; 0043ea81
    MOV ECX,dword ptr [ESP + 0x2ac]     ; 0043ea88
    FLD float ptr [ESI + 0x8]           ; 0043ea8f
    FST float ptr [ESI + 0x4]           ; 0043ea92
    FSTP float ptr [ESI]                ; 0043ea95
    MOV dword ptr [EDX + 0x450],0x0     ; 0043ea97
    ADD EAX,ECX                         ; 0043eaa1
    MOV dword ptr [EDX + 0x454],0x0     ; 0043eaa3
    CMP EBX,EAX                         ; 0043eaad
    JZ 0x0043eacb                       ; 0043eaaf
        ;   XREF to: 0043eacb (CONDITIONAL_JUMP)  ; LAB_0043eacb
    MOV ECX,dword ptr [EAX]             ; 0043eab1
    MOV dword ptr [ESI + 0xc0],ECX      ; 0043eab3
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043eab9
    MOV dword ptr [ESI + 0xc4],ECX      ; 0043eabc
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043eac2
    MOV dword ptr [ESI + 0xc8],ECX      ; 0043eac5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043eacb
        ;   Label: LAB_0043eacb
    ADD EBX,0x11c                       ; 0043eace
    ADD EDX,0x11c                       ; 0043ead4
    INC EDI                             ; 0043eada
    MOV ECX,dword ptr [EAX + 0x104]     ; 0043eadb
    ADD ESI,0x11c                       ; 0043eae1
    CMP EDI,ECX                         ; 0043eae7
    JL 0x0043ea7b                       ; 0043eae9
        ;   XREF to: 0043ea7b (CONDITIONAL_JUMP)  ; LAB_0043ea7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043eaeb
        ;   Label: LAB_0043eaeb
    FLD float ptr [EAX + 0x37b1c]       ; 0043eaee
    FCHS                                ; 0043eaf4
    FSTP float ptr [ESP + 0x2c8]        ; 0043eaf6
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 0043eafd
    LEA ESI,[ESP + 0x170]               ; 0043eb04
    MOV dword ptr [ESP + 0xe4],EAX      ; 0043eb0b
    LEA EAX,[ESP + 0xe0]                ; 0043eb12
    LEA EDI,[ESP + 0x8c]                ; 0043eb19
    PUSH EAX                            ; 0043eb20
    LEA EAX,[ESP + 0x8]                 ; 0043eb21
    XOR EBX,EBX                         ; 0043eb25
    PUSH EAX                            ; 0043eb27
    MOV dword ptr [ESP + 0xe8],EBX      ; 0043eb28
    MOV dword ptr [ESP + 0xf0],EBX      ; 0043eb2f
    CALL core_dirmat.cpp_FUN_0045b870   ; 0043eb36
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    ADD ESP,0x8                         ; 0043eb3b
    LEA ESI,[ESP + 0x170]               ; 0043eb3e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043eb45
    MOVSD ES:EDI,ESI                    ; 0043eb48
    MOVSD ES:EDI,ESI                    ; 0043eb49
    MOVSD ES:EDI,ESI                    ; 0043eb4a
    FLD float ptr [EAX + 0x37b1c]       ; 0043eb4b
    FDIV float ptr [EAX + 0x37b20]      ; 0043eb51
    MOV dword ptr [ESP + 0x2a8],EBX     ; 0043eb57
    MOV EDX,dword ptr [EAX + 0x104]     ; 0043eb5e
    FSTP float ptr [ESP + 0x2b8]        ; 0043eb64
    TEST EDX,EDX                        ; 0043eb6b
    JLE 0x0043ec43                      ; 0043eb6d
        ;   XREF to: 0043ec43 (CONDITIONAL_JUMP)  ; LAB_0043ec43
    FLD float ptr [ESP + 0x2b8]         ; 0043eb73
    FLD float ptr [ESP + 0x1b8]         ; 0043eb7a
    FMUL ST1                            ; 0043eb81
    FLD float ptr [ESP + 0x1bc]         ; 0043eb83
    FMUL ST2                            ; 0043eb8a
    FLD float ptr [ESP + 0x1c0]         ; 0043eb8c
    FMUL ST3                            ; 0043eb93
    FLD float ptr [ESP + 0x2b0]         ; 0043eb95
    FMULP ST4                           ; 0043eb9c
    ADD EAX,0x37b24                     ; 0043eb9e
    MOV dword ptr [ESP + 0x2a4],EBX     ; 0043eba3
    MOV dword ptr [ESP + 0x270],EAX     ; 0043ebaa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ebb1
    FXCH ST2                            ; 0043ebb4
    FSTP float ptr [ESP + 0x284]        ; 0043ebb6
    ADD EAX,0x37b34                     ; 0043ebbd
    FSTP float ptr [ESP + 0x288]        ; 0043ebc2
    MOV dword ptr [ESP + 0x2b4],EAX     ; 0043ebc9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ebd0
    FSTP float ptr [ESP + 0x28c]        ; 0043ebd3
    ADD EAX,0x398                       ; 0043ebda
    FSTP float ptr [ESP + 0x274]        ; 0043ebdf
    MOV dword ptr [ESP + 0x26c],EAX     ; 0043ebe6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ebed
        ;   Label: LAB_0043ebed
    MOV ECX,dword ptr [ESP + 0x2a4]     ; 0043ebf0
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043ebf7
    ADD EAX,ECX                         ; 0043ebfd
    IMUL EBX,dword ptr [EAX],0x11c      ; 0043ebff
    ADD EBX,dword ptr [ESP + 0x26c]     ; 0043ec05
    CMP dword ptr [EBX + 0x74],0x0      ; 0043ec0c
    JZ 0x0043eddf                       ; 0043ec10
        ;   XREF to: 0043eddf (CONDITIONAL_JUMP)  ; LAB_0043eddf
    MOV EBX,dword ptr [ESP + 0x2a4]     ; 0043ec16
        ;   Label: LAB_0043ec16
    MOV ESI,dword ptr [ESP + 0x2a8]     ; 0043ec1d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043ec24
    ADD EBX,0x4                         ; 0043ec27
    INC ESI                             ; 0043ec2a
    MOV EDI,dword ptr [EDX + 0x104]     ; 0043ec2b
    MOV dword ptr [ESP + 0x2a4],EBX     ; 0043ec31
    MOV dword ptr [ESP + 0x2a8],ESI     ; 0043ec38
    CMP ESI,EDI                         ; 0043ec3f
    JL 0x0043ebed                       ; 0043ec41
        ;   XREF to: 0043ebed (CONDITIONAL_JUMP)  ; LAB_0043ebed
    XOR EAX,EAX                         ; 0043ec43
        ;   Label: LAB_0043ec43
    MOV dword ptr [ESP + 0x2bc],EAX     ; 0043ec45
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ec4c
    ADD EAX,0x398                       ; 0043ec4f
    MOV dword ptr [ESP + 0x27c],EAX     ; 0043ec54
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ec5b
        ;   Label: LAB_0043ec5b
    MOV ESI,dword ptr [EAX + 0x104]     ; 0043ec5e
    XOR EDI,EDI                         ; 0043ec64
    TEST ESI,ESI                        ; 0043ec66
    JLE 0x0043ec9e                      ; 0043ec68
        ;   XREF to: 0043ec9e (CONDITIONAL_JUMP)  ; LAB_0043ec9e
    XOR ESI,ESI                         ; 0043ec6a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ec6c
        ;   Label: LAB_0043ec6c
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043ec6f
    IMUL EBX,dword ptr [ESI + EAX*0x1],0x11c ; 0043ec75
    ADD EBX,dword ptr [ESP + 0x27c]     ; 0043ec7c
    CMP dword ptr [EBX + 0x74],0x0      ; 0043ec83
    JZ 0x0043f0c4                       ; 0043ec87
        ;   XREF to: 0043f0c4 (CONDITIONAL_JUMP)  ; LAB_0043f0c4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ec8d
        ;   Label: LAB_0043ec8d
    INC EDI                             ; 0043ec90
    MOV EDX,dword ptr [EAX + 0x104]     ; 0043ec91
    ADD ESI,0x4                         ; 0043ec97
    CMP EDI,EDX                         ; 0043ec9a
    JL 0x0043ec6c                       ; 0043ec9c
        ;   XREF to: 0043ec6c (CONDITIONAL_JUMP)  ; LAB_0043ec6c
    MOV ECX,dword ptr [ESP + 0x2bc]     ; 0043ec9e
        ;   Label: LAB_0043ec9e
    INC ECX                             ; 0043eca5
    MOV dword ptr [ESP + 0x2bc],ECX     ; 0043eca6
    CMP ECX,0x5                         ; 0043ecad
    JL 0x0043ec5b                       ; 0043ecb0
        ;   XREF to: 0043ec5b (CONDITIONAL_JUMP)  ; LAB_0043ec5b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ecb2
    MOV ESI,dword ptr [EAX + 0x104]     ; 0043ecb5
    XOR EBX,EBX                         ; 0043ecbb
    TEST ESI,ESI                        ; 0043ecbd
    JLE 0x0043ed4d                      ; 0043ecbf
        ;   XREF to: 0043ed4d (CONDITIONAL_JUMP)  ; LAB_0043ed4d
    LEA ECX,[EAX + 0x37b30]             ; 0043ecc5
    LEA EDI,[EAX + 0x37b2c]             ; 0043eccb
    ADD EAX,0x398                       ; 0043ecd1
    XOR ESI,ESI                         ; 0043ecd6
    MOV dword ptr [ESP + 0x280],EAX     ; 0043ecd8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ecdf
        ;   Label: LAB_0043ecdf
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043ece2
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x11c ; 0043ece8
    MOV EDX,dword ptr [ESP + 0x280]     ; 0043ecef
    ADD EDX,EAX                         ; 0043ecf6
    CMP dword ptr [EDX + 0xb8],0x0      ; 0043ecf8
    JZ 0x0043ed1a                       ; 0043ecff
        ;   XREF to: 0043ed1a (CONDITIONAL_JUMP)  ; LAB_0043ed1a
    LEA EAX,[EDX + 0x24]                ; 0043ed01
    FLD float ptr [EDI]                 ; 0043ed04
    FMUL float ptr [EAX]                ; 0043ed06
    FSTP float ptr [EAX]                ; 0043ed08
    FLD float ptr [EDI]                 ; 0043ed0a
    FMUL float ptr [EAX + 0x4]          ; 0043ed0c
    FSTP float ptr [EAX + 0x4]          ; 0043ed0f
    FLD float ptr [EDI]                 ; 0043ed12
    FMUL float ptr [EAX + 0x8]          ; 0043ed14
    FSTP float ptr [EAX + 0x8]          ; 0043ed17
    CMP dword ptr [EDX + 0xbc],0x0      ; 0043ed1a
        ;   Label: LAB_0043ed1a
    JZ 0x0043ed3c                       ; 0043ed21
        ;   XREF to: 0043ed3c (CONDITIONAL_JUMP)  ; LAB_0043ed3c
    LEA EAX,[EDX + 0x24]                ; 0043ed23
    FLD float ptr [ECX]                 ; 0043ed26
    FMUL float ptr [EAX]                ; 0043ed28
    FSTP float ptr [EAX]                ; 0043ed2a
    FLD float ptr [ECX]                 ; 0043ed2c
    FMUL float ptr [EAX + 0x4]          ; 0043ed2e
    FSTP float ptr [EAX + 0x4]          ; 0043ed31
    FLD float ptr [ECX]                 ; 0043ed34
    FMUL float ptr [EAX + 0x8]          ; 0043ed36
    FSTP float ptr [EAX + 0x8]          ; 0043ed39
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ed3c
        ;   Label: LAB_0043ed3c
    INC EBX                             ; 0043ed3f
    MOV EDX,dword ptr [EAX + 0x104]     ; 0043ed40
    ADD ESI,0x4                         ; 0043ed46
    CMP EBX,EDX                         ; 0043ed49
    JL 0x0043ecdf                       ; 0043ed4b
        ;   XREF to: 0043ecdf (CONDITIONAL_JUMP)  ; LAB_0043ecdf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ed4d
        ;   Label: LAB_0043ed4d
    MOV ECX,dword ptr [EAX + 0x104]     ; 0043ed50
    XOR ESI,ESI                         ; 0043ed56
    TEST ECX,ECX                        ; 0043ed58
    JLE 0x0043edb0                      ; 0043ed5a
        ;   XREF to: 0043edb0 (CONDITIONAL_JUMP)  ; LAB_0043edb0
    LEA EDX,[EAX + 0x398]               ; 0043ed5c
    XOR ECX,ECX                         ; 0043ed62
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043ed64
        ;   Label: LAB_0043ed64
    MOV EBX,dword ptr [EBX + 0x10c]     ; 0043ed67
    MOV EAX,EDX                         ; 0043ed6d
    ADD EBX,ECX                         ; 0043ed6f
    FLD float ptr [EAX]                 ; 0043ed71
    FMUL float ptr [0x005dd3b0]         ; 0043ed73 | DAT_005dd3b0
    FISTP dword ptr [EBX]               ; 0043ed79
    FLD float ptr [EAX + 0x4]           ; 0043ed7b
    FMUL float ptr [0x005dd3b0]         ; 0043ed7e | DAT_005dd3b0
    FISTP dword ptr [EBX + 0x4]         ; 0043ed84
    FLD float ptr [EAX + 0x8]           ; 0043ed87
    FMUL float ptr [0x005dd3b0]         ; 0043ed8a | DAT_005dd3b0
    FISTP dword ptr [EBX + 0x8]         ; 0043ed90
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ed93
    INC ESI                             ; 0043ed96
    ADD EDX,0x11c                       ; 0043ed97
    MOV EBX,dword ptr [EAX + 0x104]     ; 0043ed9d
    ADD ECX,0xc                         ; 0043eda3
    CMP ESI,EBX                         ; 0043eda6
    JL 0x0043ed64                       ; 0043eda8
        ;   XREF to: 0043ed64 (CONDITIONAL_JUMP)  ; LAB_0043ed64
    LEA EAX,[EAX]                       ; 0043edaa
    MOV ESP,EBP                         ; 0043edb0
        ;   Label: LAB_0043edb0
    POP EBP                             ; 0043edb2
    POP EDI                             ; 0043edb3
    POP ESI                             ; 0043edb4
    POP EBX                             ; 0043edb5
    RET                                 ; 0043edb6
    MOV dword ptr [EBP + 0x24],0xc61c3c00 ; 0043edb7
        ;   Label: LAB_0043edb7
    JMP 0x0043e2ca                      ; 0043edbe
        ;   XREF to: 0043e2ca (UNCONDITIONAL_JUMP)  ; LAB_0043e2ca
    XOR EBX,EBX                         ; 0043edc3
        ;   Label: LAB_0043edc3
    MOV dword ptr [ESP + 0x204],EBX     ; 0043edc5
    MOV dword ptr [ESP + 0x200],EBX     ; 0043edcc
    MOV dword ptr [ESP + 0x208],EBX     ; 0043edd3
    JMP 0x0043e73f                      ; 0043edda
        ;   XREF to: 0043e73f (UNCONDITIONAL_JUMP)  ; LAB_0043e73f
    MOV EAX,dword ptr [ESP + 0x270]     ; 0043eddf
        ;   Label: LAB_0043eddf
    LEA EDX,[EBX + 0x24]                ; 0043ede6
    FLD float ptr [EAX]                 ; 0043ede9
    FMUL float ptr [EDX]                ; 0043edeb
    FSTP float ptr [EDX]                ; 0043eded
    FLD float ptr [EAX]                 ; 0043edef
    FMUL float ptr [EDX + 0x4]          ; 0043edf1
    FSTP float ptr [EDX + 0x4]          ; 0043edf4
    FLD float ptr [EAX]                 ; 0043edf7
    FMUL float ptr [EDX + 0x8]          ; 0043edf9
    MOV EAX,dword ptr [ESP + 0x284]     ; 0043edfc
    FSTP float ptr [EDX + 0x8]          ; 0043ee03
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0043ee06
    MOV EAX,dword ptr [ESP + 0x288]     ; 0043ee0d
    LEA EDI,[ESP + 0x134]               ; 0043ee14
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0043ee1b
    MOV EAX,dword ptr [ESP + 0x28c]     ; 0043ee22
    LEA ESI,[ESP + 0x1ac]               ; 0043ee29
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0043ee30
    MOVSD ES:EDI,ESI                    ; 0043ee37
    MOVSD ES:EDI,ESI                    ; 0043ee38
    MOVSD ES:EDI,ESI                    ; 0043ee39
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 0043ee3a
    FLD float ptr [ESP + 0x134]         ; 0043ee41
    FMUL float ptr [EAX]                ; 0043ee48
    FLD float ptr [ESP + 0x138]         ; 0043ee4a
    FXCH                                ; 0043ee51
    FSTP float ptr [ESP + 0x1dc]        ; 0043ee53
    FMUL float ptr [EAX]                ; 0043ee5a
    FLD float ptr [ESP + 0x13c]         ; 0043ee5c
    FXCH                                ; 0043ee63
    FSTP float ptr [ESP + 0x1e0]        ; 0043ee65
    FMUL float ptr [EAX]                ; 0043ee6c
    LEA EDI,[ESP + 0x20c]               ; 0043ee6e
    LEA ESI,[ESP + 0x1dc]               ; 0043ee75
    FSTP float ptr [ESP + 0x1e4]        ; 0043ee7c
    LEA EAX,[EBX + 0xc]                 ; 0043ee83
    MOVSD ES:EDI,ESI                    ; 0043ee86
    MOVSD ES:EDI,ESI                    ; 0043ee87
    MOVSD ES:EDI,ESI                    ; 0043ee88
    FLD float ptr [ESP + 0x274]         ; 0043ee89
    FLD float ptr [EAX]                 ; 0043ee90
    FSUB float ptr [ESP + 0x20c]        ; 0043ee92
    FLD float ptr [EAX + 0x4]           ; 0043ee99
    FXCH                                ; 0043ee9c
    FSTP float ptr [EAX]                ; 0043ee9e
    FSUB float ptr [ESP + 0x210]        ; 0043eea0
    FLD float ptr [EAX + 0x8]           ; 0043eea7
    FXCH                                ; 0043eeaa
    FSTP float ptr [EAX + 0x4]          ; 0043eeac
    FSUB float ptr [ESP + 0x214]        ; 0043eeaf
    FLD float ptr [EAX]                 ; 0043eeb6
    FXCH                                ; 0043eeb8
    FSTP float ptr [EAX + 0x8]          ; 0043eeba
    FADD float ptr [ESP + 0x8c]         ; 0043eebd
    FLD float ptr [EAX + 0x4]           ; 0043eec4
    FXCH                                ; 0043eec7
    FSTP float ptr [EAX]                ; 0043eec9
    FADD float ptr [ESP + 0x90]         ; 0043eecb
    FLD float ptr [EAX + 0x8]           ; 0043eed2
    FXCH                                ; 0043eed5
    FSTP float ptr [EAX + 0x4]          ; 0043eed7
    FADD float ptr [ESP + 0x94]         ; 0043eeda
    MOV ECX,dword ptr [EBP + 0x14]      ; 0043eee1
    FSTP float ptr [EAX + 0x8]          ; 0043eee4
    FMUL float ptr [ECX + 0x37b38]      ; 0043eee7
    FLD float ptr [EBX + 0x8]           ; 0043eeed
    FMUL ST1                            ; 0043eef0
    FLDZ                                ; 0043eef2
    FMUL float ptr [EBX + 0x4]          ; 0043eef4
    FXCH                                ; 0043eef7
    FSUBR ST0,ST1                       ; 0043eef9
    FLDZ                                ; 0043eefb
    FXCH                                ; 0043eefd
    FSTP float ptr [ESP + 0x194]        ; 0043eeff
    FMUL float ptr [EBX + 0x8]          ; 0043ef06
    FLDZ                                ; 0043ef09
    FMUL float ptr [EBX]                ; 0043ef0b
    FSUBP                               ; 0043ef0d
    FSTP float ptr [ESP + 0x198]        ; 0043ef0f
    FLD float ptr [EBX]                 ; 0043ef16
    FMULP ST2                           ; 0043ef18
    LEA EDI,[ESP + 0x80]                ; 0043ef1a
    FSUBP                               ; 0043ef21
    LEA ESI,[ESP + 0x194]               ; 0043ef23
    FSTP float ptr [ESP + 0x19c]        ; 0043ef2a
    MOVSD ES:EDI,ESI                    ; 0043ef31
    MOVSD ES:EDI,ESI                    ; 0043ef32
    MOVSD ES:EDI,ESI                    ; 0043ef33
    FLD float ptr [EAX]                 ; 0043ef34
    FADD float ptr [ESP + 0x80]         ; 0043ef36
    FLD float ptr [EAX + 0x4]           ; 0043ef3d
    FXCH                                ; 0043ef40
    FSTP float ptr [EAX]                ; 0043ef42
    FADD float ptr [ESP + 0x84]         ; 0043ef44
    FLD float ptr [EAX + 0x8]           ; 0043ef4b
    FXCH                                ; 0043ef4e
    FSTP float ptr [EAX + 0x4]          ; 0043ef50
    FADD float ptr [ESP + 0x88]         ; 0043ef53
    MOV ECX,dword ptr [ESP + 0x23c]     ; 0043ef5a
    FSTP float ptr [EAX + 0x8]          ; 0043ef61
    TEST ECX,ECX                        ; 0043ef64
    JZ 0x0043ef8b                       ; 0043ef66
        ;   XREF to: 0043ef8b (CONDITIONAL_JUMP)  ; LAB_0043ef8b
    FLD float ptr [EDX + 0x4]           ; 0043ef68
    FMUL ST0                            ; 0043ef6b
    FLD float ptr [EDX]                 ; 0043ef6d
    FMUL ST0                            ; 0043ef6f
    FADDP                               ; 0043ef71
    FLD float ptr [EDX + 0x8]           ; 0043ef73
    FMUL ST0                            ; 0043ef76
    FADDP                               ; 0043ef78
    FSQRT                               ; 0043ef7a
    FCOMP float ptr [0x005b9140]        ; 0043ef7c | DAT_005b9140
    FNSTSW AX                           ; 0043ef82
    SAHF                                ; 0043ef84
    JC 0x0043f0b2                       ; 0043ef85
        ;   XREF to: 0043f0b2 (CONDITIONAL_JUMP)  ; LAB_0043f0b2
    LEA EAX,[EBX + 0xc]                 ; 0043ef8b
        ;   Label: LAB_0043ef8b
    FLD1                                ; 0043ef8e
    FLD float ptr [EAX]                 ; 0043ef90
    FXCH                                ; 0043ef92
    FDIV float ptr [ESP + 0x2b8]        ; 0043ef94
    FXCH                                ; 0043ef9b
    FMUL ST1                            ; 0043ef9d
    FSTP float ptr [ESP + 0xbc]         ; 0043ef9f
    FLD float ptr [EAX + 0x4]           ; 0043efa6
    FMUL ST1                            ; 0043efa9
    FSTP float ptr [ESP + 0xc0]         ; 0043efab
    FMUL float ptr [EAX + 0x8]          ; 0043efb2
    LEA EDI,[ESP + 0x2c]                ; 0043efb5
    LEA ESI,[ESP + 0xbc]                ; 0043efb9
    LEA EDX,[EBX + 0x18]                ; 0043efc0
    LEA EAX,[ESP + 0x2c]                ; 0043efc3
    FSTP float ptr [ESP + 0xc4]         ; 0043efc7
    MOVSD ES:EDI,ESI                    ; 0043efce
    MOVSD ES:EDI,ESI                    ; 0043efcf
    MOVSD ES:EDI,ESI                    ; 0043efd0
    CMP EDX,EAX                         ; 0043efd1
    JZ 0x0043efe9                       ; 0043efd3
        ;   XREF to: 0043efe9 (CONDITIONAL_JUMP)  ; LAB_0043efe9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043efd5
    MOV dword ptr [EDX],EAX             ; 0043efd9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043efdb
    MOV dword ptr [EDX + 0x4],EAX       ; 0043efdf
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043efe2
    MOV dword ptr [EDX + 0x8],EAX       ; 0043efe6
    LEA EAX,[EBX + 0x18]                ; 0043efe9
        ;   Label: LAB_0043efe9
    FLD float ptr [EBP + 0x20]          ; 0043efec
    FLD float ptr [EAX]                 ; 0043efef
    FMUL ST1                            ; 0043eff1
    FSTP float ptr [ESP + 0xec]         ; 0043eff3
    FLD float ptr [EAX + 0x4]           ; 0043effa
    FMUL ST1                            ; 0043effd
    FSTP float ptr [ESP + 0xf0]         ; 0043efff
    FLD float ptr [EAX + 0x8]           ; 0043f006
    FMUL ST1                            ; 0043f009
    LEA EDI,[ESP + 0x110]               ; 0043f00b
    LEA ESI,[ESP + 0xec]                ; 0043f012
    LEA EAX,[EBX + 0x24]                ; 0043f019
    FSTP float ptr [ESP + 0xf4]         ; 0043f01c
    MOVSD ES:EDI,ESI                    ; 0043f023
    MOVSD ES:EDI,ESI                    ; 0043f024
    MOVSD ES:EDI,ESI                    ; 0043f025
    FLD float ptr [EAX + 0x4]           ; 0043f026
    FLD float ptr [EAX]                 ; 0043f029
    FADD float ptr [ESP + 0x110]        ; 0043f02b
    FLD float ptr [EAX + 0x8]           ; 0043f032
    FXCH                                ; 0043f035
    FSTP float ptr [EAX]                ; 0043f037
    FXCH                                ; 0043f039
    FADD float ptr [ESP + 0x114]        ; 0043f03b
    FLD float ptr [EAX]                 ; 0043f042
    FXCH                                ; 0043f044
    FSTP float ptr [EAX + 0x4]          ; 0043f046
    FXCH                                ; 0043f049
    FADD float ptr [ESP + 0x118]        ; 0043f04b
    FXCH                                ; 0043f052
    FMUL ST2                            ; 0043f054
    FXCH                                ; 0043f056
    FSTP float ptr [EAX + 0x8]          ; 0043f058
    FSTP float ptr [ESP + 0x128]        ; 0043f05b
    FLD float ptr [EAX + 0x4]           ; 0043f062
    FMUL ST1                            ; 0043f065
    FSTP float ptr [ESP + 0x12c]        ; 0043f067
    FMUL float ptr [EAX + 0x8]          ; 0043f06e
    LEA EDI,[ESP + 0x11c]               ; 0043f071
    LEA ESI,[ESP + 0x128]               ; 0043f078
    FSTP float ptr [ESP + 0x130]        ; 0043f07f
    MOVSD ES:EDI,ESI                    ; 0043f086
    MOVSD ES:EDI,ESI                    ; 0043f087
    MOVSD ES:EDI,ESI                    ; 0043f088
    FLD float ptr [EBX]                 ; 0043f089
    FADD float ptr [ESP + 0x11c]        ; 0043f08b
    FLD float ptr [EBX + 0x4]           ; 0043f092
    FXCH                                ; 0043f095
    FSTP float ptr [EBX]                ; 0043f097
    FADD float ptr [ESP + 0x120]        ; 0043f099
    FLD float ptr [EBX + 0x8]           ; 0043f0a0
    FXCH                                ; 0043f0a3
    FSTP float ptr [EBX + 0x4]          ; 0043f0a5
    FADD float ptr [ESP + 0x124]        ; 0043f0a8
    FSTP float ptr [EBX + 0x8]          ; 0043f0af
    PUSH EBX                            ; 0043f0b2
        ;   Label: LAB_0043f0b2
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043f0b3
    PUSH EBX                            ; 0043f0b6
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_0043d9b0 ; 0043f0b7
        ;   XREF to: 0043d9b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_0043d9b0(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 0043f0bc
    JMP 0x0043ec16                      ; 0043f0bf
        ;   XREF to: 0043ec16 (UNCONDITIONAL_JUMP)  ; LAB_0043ec16
    CMP dword ptr [ESP + 0x23c],0x0     ; 0043f0c4
        ;   Label: LAB_0043f0c4
    JZ 0x0043f0f4                       ; 0043f0cc
        ;   XREF to: 0043f0f4 (CONDITIONAL_JUMP)  ; LAB_0043f0f4
    LEA EAX,[EBX + 0x24]                ; 0043f0ce
    FLD float ptr [EAX + 0x4]           ; 0043f0d1
    FMUL ST0                            ; 0043f0d4
    FLD float ptr [EAX]                 ; 0043f0d6
    FMUL ST0                            ; 0043f0d8
    FADDP                               ; 0043f0da
    FLD float ptr [EAX + 0x8]           ; 0043f0dc
    FMUL ST0                            ; 0043f0df
    FADDP                               ; 0043f0e1
    FSQRT                               ; 0043f0e3
    FCOMP float ptr [0x005b9140]        ; 0043f0e5 | DAT_005b9140
    FNSTSW AX                           ; 0043f0eb
    SAHF                                ; 0043f0ed
    JC 0x0043ec8d                       ; 0043f0ee
        ;   XREF to: 0043ec8d (CONDITIONAL_JUMP)  ; LAB_0043ec8d
    PUSH EBX                            ; 0043f0f4
        ;   Label: LAB_0043f0f4
    MOV ECX,dword ptr [EBP + 0x14]      ; 0043f0f5
    PUSH ECX                            ; 0043f0f8
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_0043d9b0 ; 0043f0f9
        ;   XREF to: 0043d9b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_0043d9b0(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 0043f0fe
    JMP 0x0043ec8d                      ; 0043f101
        ;   XREF to: 0043ec8d (UNCONDITIONAL_JUMP)  ; LAB_0043ec8d

