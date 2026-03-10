; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_004c8230(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo *laser_info,int recursion_depth)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   origin
; CVector3f *      Stack[0xc]:4   direction
; SLaserInfo *     Stack[0x10]:4   laser_info
; int              Stack[0x14]:4   recursion_depth
; Local Variables:
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
; undefined4       Stack[-0x218]:4  local_218
; undefined4       Stack[-0x214]:4  local_214
; undefined4       Stack[-0x210]:4  local_210
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
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined1       Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined1       Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined1       Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
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
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[3]:
;   core_emitter.cpp_CEmitter_renderOpaque_FUN_004a8860 at 004a89bb
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_0050a8d0 at 0050ab13
;   core_weapon.cpp_CWeapon_fireProjectile_FUN_005ee830 at 005ee9c5
;
; Referenced Globals:
;   float FLOAT_0062a073 = 2
;   double DOUBLE_0062a07b = 0.25
;   double DOUBLE_0062a083 = -1
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032613a0
;   undefined4 DAT_032613a4
;   undefined4 DAT_032613a8
;   undefined4 DAT_032613b0
;   undefined4 DAT_032613bc
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_004c7eb0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
;   crt_math.c_acos_FUN_00600162
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8230
        ;   Label: core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230
    PUSH ESI                            ; 004c8231
    PUSH EDI                            ; 004c8232
    PUSH EBP                            ; 004c8233
    MOV EBP,ESP                         ; 004c8234
    SUB ESP,0x280                       ; 004c8236
    SUB EBP,0x6e                        ; 004c823c
    MOV ESI,dword ptr [EBP + 0x8a]      ; 004c823f
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004c8245
    MOV EDX,dword ptr [EBP + 0x92]      ; 004c824b
    CMP EDX,0x2                         ; 004c8251
    JG 0x004c8b1b                       ; 004c8254
        ;   XREF to: 004c8b1b (CONDITIONAL_JUMP)  ; LAB_004c8b1b
    LEA EAX,[EBX + 0x20]                ; 004c825a
    MOV dword ptr [EBP + 0x5e],EAX      ; 004c825d
    LEA EAX,[EBX + 0x24]                ; 004c8260
    MOV dword ptr [EBP + 0x2e],EAX      ; 004c8263
    LEA EAX,[EBX + 0x28]                ; 004c8266
    MOV dword ptr [EBP + 0x32],EAX      ; 004c8269
    LEA EAX,[EBX + 0x2c]                ; 004c826c
    MOV dword ptr [EBP + 0x62],EAX      ; 004c826f
    LEA EAX,[EBX + 0x38]                ; 004c8272
    MOV dword ptr [EBP + 0x66],EAX      ; 004c8275
    LEA EAX,[EDX + 0x1]                 ; 004c8278
    MOV dword ptr [EBP + 0x2a],EAX      ; 004c827b
    LEA EAX,[ESI + 0x4]                 ; 004c827e
    MOV dword ptr [EBP + 0x1e],EAX      ; 004c8281
    LEA EAX,[ESI + 0x8]                 ; 004c8284
    MOV dword ptr [EBP + 0x22],EAX      ; 004c8287
    MOV EAX,dword ptr [EBP + 0x86]      ; 004c828a
    ADD EAX,0x4                         ; 004c8290
    MOV dword ptr [EBP + -0x2],EAX      ; 004c8293
    MOV EAX,dword ptr [EBP + 0x86]      ; 004c8296
    ADD EAX,0x8                         ; 004c829c
    MOV dword ptr [EBP + 0x26],EAX      ; 004c829f
    MOV ECX,dword ptr [EBX + 0x14]      ; 004c82a2
        ;   Label: LAB_004c82a2
    PUSH ECX                            ; 004c82a5
    MOV EDI,dword ptr [EBX + 0x10]      ; 004c82a6
    PUSH EDI                            ; 004c82a9
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c82aa
    PUSH EAX                            ; 004c82ad
    MOV EDX,dword ptr [EBX + 0x8]       ; 004c82ae
    PUSH EDX                            ; 004c82b1
    MOV ECX,dword ptr [0x006810c8]      ; 004c82b2 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004c82b8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270 ; 004c82b9
        ;   XREF to: 00574270 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270(CDemonSet * this_ptr, float f1, float f2, float f3, ...)
    MOV EAX,dword ptr [EBP + 0x86]      ; 004c82be
    MOV EAX,dword ptr [EAX]             ; 004c82c4
    MOV dword ptr [EBP + -0x62],EAX     ; 004c82c6
    MOV EAX,dword ptr [EBP + -0x2]      ; 004c82c9
    MOV EAX,dword ptr [EAX]             ; 004c82cc
    MOV dword ptr [EBP + -0x5e],EAX     ; 004c82ce
    MOV EAX,dword ptr [EBP + 0x26]      ; 004c82d1
    MOV EDI,dword ptr [0x006810c8]      ; 004c82d4 | g_CDemonSetPtr
    ADD ESP,0x14                        ; 004c82da
    MOV EAX,dword ptr [EAX]             ; 004c82dd
    FLD float ptr [EBP + -0x62]         ; 004c82df
    MOV dword ptr [EBP + -0x5a],EAX     ; 004c82e2
    FLD float ptr [EBP + -0x5e]         ; 004c82e5
    FLD float ptr [EBP + -0x5a]         ; 004c82e8
    FXCH ST2                            ; 004c82eb
    FADD float ptr [ESI]                ; 004c82ed
    LEA EAX,[EBP + 0xffffff4a]          ; 004c82ef
    FSTP float ptr [EBP + 0xffffff4a]   ; 004c82f5
    PUSH EAX                            ; 004c82fb
    FADD float ptr [ESI + 0x4]          ; 004c82fc
    LEA EAX,[EBP + -0x62]               ; 004c82ff
    FSTP float ptr [EBP + 0xffffff4e]   ; 004c8302
    PUSH EAX                            ; 004c8308
    FADD float ptr [ESI + 0x8]          ; 004c8309
    PUSH EDI                            ; 004c830c | g_CDemonSetInstance
    FSTP float ptr [EBP + 0xffffff52]   ; 004c830d
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 004c8313
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    FLDZ                                ; 004c8318
    MOV dword ptr [EBP + 0x6a],EAX      ; 004c831a
    ADD ESP,0xc                         ; 004c831d
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004c8320
    MOV dword ptr [EBP + 0x5a],EAX      ; 004c8323
    FLD float ptr [EBP + 0x5a]          ; 004c8326
    FSTP double ptr [EBP + -0x12]       ; 004c8329
    FCOMP double ptr [EBP + -0x12]      ; 004c832c
    FNSTSW AX                           ; 004c832f
    SAHF                                ; 004c8331
    JA 0x004c8b23                       ; 004c8332
        ;   XREF to: 004c8b23 (CONDITIONAL_JUMP)  ; LAB_004c8b23
    FLD1                                ; 004c8338
    FCOMP double ptr [EBP + -0x12]      ; 004c833a
    FNSTSW AX                           ; 004c833d
    SAHF                                ; 004c833f
    JBE 0x004c8b23                      ; 004c8340
        ;   XREF to: 004c8b23 (CONDITIONAL_JUMP)  ; LAB_004c8b23
    FLD float ptr [EBP + 0x5a]          ; 004c8346
    FLD float ptr [ESI]                 ; 004c8349
    FMUL ST1                            ; 004c834b
    FSTP float ptr [EBP + 0xffffff56]   ; 004c834d
    FLD float ptr [ESI + 0x4]           ; 004c8353
    FMUL ST1                            ; 004c8356
    FSTP float ptr [EBP + 0xffffff5a]   ; 004c8358
    FMUL float ptr [ESI + 0x8]          ; 004c835e
    MOV EAX,dword ptr [EBP + 0x86]      ; 004c8361
    FSTP float ptr [EBP + 0xffffff5e]   ; 004c8367
    FLD float ptr [EAX]                 ; 004c836d
    FADD float ptr [EBP + 0xffffff56]   ; 004c836f
    FSTP float ptr [EBP + 0xffffff3e]   ; 004c8375
    FLD float ptr [EAX + 0x4]           ; 004c837b
    FADD float ptr [EBP + 0xffffff5a]   ; 004c837e
    LEA EDX,[EBP + 0xffffff4a]          ; 004c8384
    FSTP float ptr [EBP + 0xffffff42]   ; 004c838a
    FLD float ptr [EAX + 0x8]           ; 004c8390
    FADD float ptr [EBP + 0xffffff5e]   ; 004c8393
    LEA EAX,[EBP + 0xffffff3e]          ; 004c8399
    FSTP float ptr [EBP + 0xffffff46]   ; 004c839f
    CMP EDX,EAX                         ; 004c83a5
    JZ 0x004c83cd                       ; 004c83a7
        ;   XREF to: 004c83cd (CONDITIONAL_JUMP)  ; LAB_004c83cd
    MOV EAX,dword ptr [EBP + 0xffffff3e] ; 004c83a9
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 004c83af
    MOV EAX,dword ptr [EBP + 0xffffff42] ; 004c83b5
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 004c83bb
    MOV EAX,dword ptr [EBP + 0xffffff46] ; 004c83c1
    MOV dword ptr [EBP + 0xffffff52],EAX ; 004c83c7
    MOV EDI,dword ptr [0x006810c8]      ; 004c83cd | g_CDemonSetPtr
        ;   Label: LAB_004c83cd
    LEA EAX,[EBP + -0x26]               ; 004c83d3
    ADD EDI,0x14d128                    ; 004c83d6
    CMP EAX,EDI                         ; 004c83dc
    JZ 0x004c83f1                       ; 004c83de
        ;   XREF to: 004c83f1 (CONDITIONAL_JUMP)  ; LAB_004c83f1
    MOV EAX,dword ptr [EDI]             ; 004c83e0 | DAT_032613a0
    MOV dword ptr [EBP + -0x26],EAX     ; 004c83e2
    MOV EAX,dword ptr [EDI + 0x4]       ; 004c83e5 | DAT_032613a4
    MOV dword ptr [EBP + -0x22],EAX     ; 004c83e8
    MOV EAX,dword ptr [EDI + 0x8]       ; 004c83eb | DAT_032613a8
    MOV dword ptr [EBP + -0x1e],EAX     ; 004c83ee
        ;   Label: LAB_004c83ee
    MOV EDI,dword ptr [0x006810c8]      ; 004c83f1 | g_CDemonSetPtr
        ;   Label: LAB_004c83f1
    MOV EDI,dword ptr [EDI + 0x14d144]  ; 004c83f7 | DAT_032613bc
    MOV dword ptr [EBX + 0x48],0x0      ; 004c83fd
    MOV dword ptr [EBX + 0x4c],0x0      ; 004c8404
    MOV dword ptr [EBX + 0x50],0x0      ; 004c840b
    TEST EDI,EDI                        ; 004c8412
    JZ 0x004c8594                       ; 004c8414
        ;   XREF to: 004c8594 (CONDITIONAL_JUMP)  ; LAB_004c8594
    MOV EAX,dword ptr [EBP + 0x86]      ; 004c841a
    PUSH EAX                            ; 004c8420
    LEA EAX,[EBP + -0x4a]               ; 004c8421
    PUSH EAX                            ; 004c8424
    PUSH EDI                            ; 004c8425
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004c8426
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDX,dword ptr [EBP + 0x5e]      ; 004c842b
    ADD ESP,0xc                         ; 004c842e
    CMP EAX,EDX                         ; 004c8431
    JZ 0x004c8445                       ; 004c8433
        ;   XREF to: 004c8445 (CONDITIONAL_JUMP)  ; LAB_004c8445
    MOV ECX,dword ptr [EAX]             ; 004c8435
    MOV dword ptr [EDX],ECX             ; 004c8437
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c8439
    MOV dword ptr [EDX + 0x4],ECX       ; 004c843c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c843f
    MOV dword ptr [EDX + 0x8],ECX       ; 004c8442
    MOV EAX,[0x006810c8]                ; 004c8445 | g_CDemonSetPtr
        ;   Label: LAB_004c8445
    ADD EAX,0x14d138                    ; 004c844a
    PUSH EAX                            ; 004c844f | DAT_032613b0
    LEA EAX,[EBP + -0x32]               ; 004c8450
    PUSH EAX                            ; 004c8453
    PUSH EDI                            ; 004c8454
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004c8455
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV ECX,dword ptr [EBP + 0x62]      ; 004c845a
    ADD ESP,0xc                         ; 004c845d
    CMP EAX,ECX                         ; 004c8460
    JZ 0x004c8474                       ; 004c8462
        ;   XREF to: 004c8474 (CONDITIONAL_JUMP)  ; LAB_004c8474
    MOV EDX,dword ptr [EAX]             ; 004c8464
    MOV dword ptr [ECX],EDX             ; 004c8466
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c8468
    MOV dword ptr [ECX + 0x4],EDX       ; 004c846b
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c846e
    MOV dword ptr [ECX + 0x8],EDX       ; 004c8471
    MOV EAX,[0x006810c8]                ; 004c8474 | g_CDemonSetPtr
        ;   Label: LAB_004c8474
    ADD EAX,0x14d128                    ; 004c8479
    PUSH EAX                            ; 004c847e | DAT_032613a0
    LEA EAX,[EBP + 0xffffff62]          ; 004c847f
    PUSH EAX                            ; 004c8485
    PUSH EDI                            ; 004c8486
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 004c8487
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    MOV EDX,dword ptr [EBP + 0x66]      ; 004c848c
    ADD ESP,0xc                         ; 004c848f
    CMP EAX,EDX                         ; 004c8492
    JZ 0x004c84a6                       ; 004c8494
        ;   XREF to: 004c84a6 (CONDITIONAL_JUMP)  ; LAB_004c84a6
    MOV ECX,dword ptr [EAX]             ; 004c8496
    MOV dword ptr [EDX],ECX             ; 004c8498
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c849a
    MOV dword ptr [EDX + 0x4],ECX       ; 004c849d
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c84a0
    MOV dword ptr [EDX + 0x8],ECX       ; 004c84a3
    CMP dword ptr [EBP + 0x92],0x0      ; 004c84a6
        ;   Label: LAB_004c84a6
    JNZ 0x004c84f2                      ; 004c84ad
        ;   XREF to: 004c84f2 (CONDITIONAL_JUMP)  ; LAB_004c84f2
    CMP dword ptr [EBX + 0x18],0x0      ; 004c84af
    JZ 0x004c84f2                       ; 004c84b3
        ;   XREF to: 004c84f2 (CONDITIONAL_JUMP)  ; LAB_004c84f2
    MOV EDX,dword ptr [0x00823c4c]      ; 004c84b5 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 004c84bb
    PUSH EDI                            ; 004c84bc
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004c84bd
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c84c2
    TEST EAX,EAX                        ; 004c84c5
    JZ 0x004c84f2                       ; 004c84c7
        ;   XREF to: 004c84f2 (CONDITIONAL_JUMP)  ; LAB_004c84f2
    PUSH EAX                            ; 004c84c9
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c84ca
    CALL dword ptr [EDX + 0xf4]         ; 004c84d0
    ADD ESP,0x4                         ; 004c84d6
    TEST EAX,EAX                        ; 004c84d9
    JZ 0x004c84f2                       ; 004c84db
        ;   XREF to: 004c84f2 (CONDITIONAL_JUMP)  ; LAB_004c84f2
    MOV dword ptr [EBX + 0x10],0xff     ; 004c84dd
    MOV dword ptr [EBX + 0x14],0x0      ; 004c84e4
    MOV dword ptr [EBX + 0xc],0xff      ; 004c84eb
    MOV EAX,dword ptr [ESI]             ; 004c84f2
        ;   Label: LAB_004c84f2
    MOV dword ptr [EBP + -0x6e],EAX     ; 004c84f4
    MOV EAX,dword ptr [EBP + 0x1e]      ; 004c84f7
    MOV EAX,dword ptr [EAX]             ; 004c84fa
    MOV dword ptr [EBP + -0x6a],EAX     ; 004c84fc
    FLD float ptr [EBP + -0x6a]         ; 004c84ff
    FMUL ST0                            ; 004c8502
    MOV EAX,dword ptr [EBP + 0x22]      ; 004c8504
    FLD float ptr [EBP + -0x6e]         ; 004c8507
    FMUL ST0                            ; 004c850a
    MOV EAX,dword ptr [EAX]             ; 004c850c
    FADDP                               ; 004c850e
    MOV dword ptr [EBP + -0x66],EAX     ; 004c8510
    FLD float ptr [EBP + -0x66]         ; 004c8513
    FMUL ST0                            ; 004c8516
    FADDP                               ; 004c8518
    FSQRT                               ; 004c851a
    FST float ptr [EBP + 0x36]          ; 004c851c
    FLDZ                                ; 004c851f
    FCOMPP                              ; 004c8521
    FNSTSW AX                           ; 004c8523
    SAHF                                ; 004c8525
    JNC 0x004c8bc1                      ; 004c8526
        ;   XREF to: 004c8bc1 (CONDITIONAL_JUMP)  ; LAB_004c8bc1
    FLD1                                ; 004c852c
    FLD float ptr [EBP + -0x6e]         ; 004c852e
    FXCH                                ; 004c8531
    FDIV float ptr [EBP + 0x36]         ; 004c8533
    FXCH                                ; 004c8536
    FMUL ST1                            ; 004c8538
    FLD float ptr [EBP + -0x6a]         ; 004c853a
    FMUL ST2                            ; 004c853d
    FLD float ptr [EBP + -0x66]         ; 004c853f
    FMULP ST3                           ; 004c8542
    FXCH                                ; 004c8544
    FSTP float ptr [EBP + -0x6e]        ; 004c8546
    FSTP float ptr [EBP + -0x6a]        ; 004c8549
    FSTP float ptr [EBP + -0x66]        ; 004c854c
    FLD float ptr [EBP + -0x6a]         ; 004c854f
        ;   Label: LAB_004c854f
    FMUL float ptr [ESI + 0x4]          ; 004c8552
    FLD float ptr [EBP + -0x6e]         ; 004c8555
    FMUL float ptr [ESI]                ; 004c8558
    FADDP                               ; 004c855a
    FLD float ptr [EBP + -0x66]         ; 004c855c
    FMUL float ptr [ESI + 0x8]          ; 004c855f
    FADDP                               ; 004c8562
    FST double ptr [EBP + -0x1a]        ; 004c8564
    FCOMP double ptr [0x0062a083]       ; 004c8567 | DOUBLE_0062a083
    FNSTSW AX                           ; 004c856d
    SAHF                                ; 004c856f
    JA 0x004c8bd1                       ; 004c8570
        ;   XREF to: 004c8bd1 (CONDITIONAL_JUMP)  ; LAB_004c8bd1
    MOV dword ptr [EBP + 0x52],0x40490fdb ; 004c8576
    MOV EAX,dword ptr [EBP + 0x52]      ; 004c857d
        ;   Label: LAB_004c857d
    PUSH EBX                            ; 004c8580
    MOV dword ptr [EBX + 0x44],EAX      ; 004c8581
    PUSH EDI                            ; 004c8584
    MOV EAX,dword ptr [EDI + 0x154]     ; 004c8585
    CALL dword ptr [EAX + 0xac]         ; 004c858b
    ADD ESP,0x8                         ; 004c8591
    XOR EDX,EDX                         ; 004c8594
        ;   Label: LAB_004c8594
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004c8596
    MOV dword ptr [EBP + 0x56],EDX      ; 004c8599
    TEST ECX,ECX                        ; 004c859c
    JZ 0x004c85a5                       ; 004c859e
        ;   XREF to: 004c85a5 (CONDITIONAL_JUMP)  ; LAB_004c85a5
    MOV EAX,dword ptr [EBX]             ; 004c85a0
    MOV dword ptr [EBP + 0x56],EAX      ; 004c85a2
    FLD float ptr [EBX + 0x50]          ; 004c85a5
        ;   Label: LAB_004c85a5
    FLDZ                                ; 004c85a8
    FCOMPP                              ; 004c85aa
    FNSTSW AX                           ; 004c85ac
    SAHF                                ; 004c85ae
    JNC 0x004c8877                      ; 004c85af
        ;   XREF to: 004c8877 (CONDITIONAL_JUMP)  ; LAB_004c8877
    FLD float ptr [EBP + -0x22]         ; 004c85b5
    FMUL float ptr [ESI + 0x4]          ; 004c85b8
    FLD float ptr [EBP + -0x26]         ; 004c85bb
    FMUL float ptr [ESI]                ; 004c85be
    FADDP                               ; 004c85c0
    FLD float ptr [EBP + -0x1e]         ; 004c85c2
    FMUL float ptr [ESI + 0x8]          ; 004c85c5
    FADDP                               ; 004c85c8
    FMUL float ptr [0x0062a073]         ; 004c85ca | FLOAT_0062a073
    FLD float ptr [EBP + -0x26]         ; 004c85d0
    FXCH                                ; 004c85d3
    FSTP float ptr [EBP + 0x4e]         ; 004c85d5
    FMUL float ptr [EBP + 0x4e]         ; 004c85d8
    FLD float ptr [EBP + -0x22]         ; 004c85db
    FMUL float ptr [EBP + 0x4e]         ; 004c85de
    FLD float ptr [EBP + -0x1e]         ; 004c85e1
    FMUL float ptr [EBP + 0x4e]         ; 004c85e4
    LEA EDX,[EBP + -0x7a]               ; 004c85e7
    LEA EAX,[EBP + -0x3e]               ; 004c85ea
    FXCH ST2                            ; 004c85ed
    FSTP float ptr [EBP + -0x56]        ; 004c85ef
    FSTP float ptr [EBP + -0x52]        ; 004c85f2
    FSTP float ptr [EBP + -0x4e]        ; 004c85f5
    FLD float ptr [EBP + -0x52]         ; 004c85f8
    FLD float ptr [EBP + -0x56]         ; 004c85fb
    FSUB float ptr [ESI]                ; 004c85fe
    FLD float ptr [EBP + -0x4e]         ; 004c8600
    FXCH                                ; 004c8603
    FST float ptr [EBP + -0x3e]         ; 004c8605
    FXCH ST2                            ; 004c8608
    FSUB float ptr [ESI + 0x4]          ; 004c860a
    FXCH ST2                            ; 004c860d
    FCHS                                ; 004c860f
    FXCH ST2                            ; 004c8611
    FST float ptr [EBP + -0x3a]         ; 004c8613
    FXCH                                ; 004c8616
    FSUB float ptr [ESI + 0x8]          ; 004c8618
    FXCH                                ; 004c861b
    FCHS                                ; 004c861d
    FXCH                                ; 004c861f
    FSTP float ptr [EBP + -0x36]        ; 004c8621
    FXCH                                ; 004c8624
    FSTP float ptr [EBP + -0x7a]        ; 004c8626
    FSTP float ptr [EBP + -0x76]        ; 004c8629
    FLD float ptr [EBP + -0x36]         ; 004c862c
    FCHS                                ; 004c862f
    FSTP float ptr [EBP + -0x72]        ; 004c8631
    CMP EAX,EDX                         ; 004c8634
    JZ 0x004c864a                       ; 004c8636
        ;   XREF to: 004c864a (CONDITIONAL_JUMP)  ; LAB_004c864a
    MOV EAX,dword ptr [EBP + -0x7a]     ; 004c8638
    MOV dword ptr [EBP + -0x3e],EAX     ; 004c863b
    MOV EAX,dword ptr [EBP + -0x76]     ; 004c863e
    MOV dword ptr [EBP + -0x3a],EAX     ; 004c8641
    MOV EAX,dword ptr [EBP + -0x72]     ; 004c8644
    MOV dword ptr [EBP + -0x36],EAX     ; 004c8647
    MOV EAX,dword ptr [EBX]             ; 004c864a
        ;   Label: LAB_004c864a
    MOV dword ptr [EBP + 0xfffffdee],EAX ; 004c864c
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c8652
    MOV dword ptr [EBP + 0xfffffdf2],EAX ; 004c8655
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c865b
    MOV dword ptr [EBP + 0xfffffdf6],EAX ; 004c865e
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c8664
    MOV dword ptr [EBP + 0xfffffdfa],EAX ; 004c8667
    MOV EAX,dword ptr [EBX + 0x10]      ; 004c866d
    MOV dword ptr [EBP + 0xfffffdfe],EAX ; 004c8670
    MOV EAX,dword ptr [EBX + 0x14]      ; 004c8676
    MOV dword ptr [EBP + 0xfffffe02],EAX ; 004c8679
    MOV EAX,dword ptr [EBX + 0x18]      ; 004c867f
    MOV dword ptr [EBP + 0xfffffe06],EAX ; 004c8682
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004c8688
    MOV dword ptr [EBP + 0xfffffe0a],EAX ; 004c868b
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004c8691
    MOV EAX,dword ptr [EAX]             ; 004c8694
    MOV dword ptr [EBP + 0xfffffe0e],EAX ; 004c8696
    MOV EAX,dword ptr [EBP + 0x2e]      ; 004c869c
    MOV EAX,dword ptr [EAX]             ; 004c869f
    MOV dword ptr [EBP + 0xfffffe12],EAX ; 004c86a1
    MOV EAX,dword ptr [EBP + 0x32]      ; 004c86a7
    MOV EAX,dword ptr [EAX]             ; 004c86aa
    MOV dword ptr [EBP + 0xfffffe16],EAX ; 004c86ac
    MOV EAX,dword ptr [EBP + 0x62]      ; 004c86b2
    MOV EAX,dword ptr [EAX]             ; 004c86b5
    MOV dword ptr [EBP + 0xfffffe1a],EAX ; 004c86b7
    MOV EAX,dword ptr [EBP + 0x62]      ; 004c86bd
    ADD EAX,0x4                         ; 004c86c0
    MOV dword ptr [EBP + 0x4a],EAX      ; 004c86c3
    MOV EAX,dword ptr [EAX]             ; 004c86c6
    MOV dword ptr [EBP + 0xfffffe1e],EAX ; 004c86c8
    MOV EAX,dword ptr [EBP + 0x62]      ; 004c86ce
    ADD EAX,0x8                         ; 004c86d1
    MOV dword ptr [EBP + 0x42],EAX      ; 004c86d4
    MOV EAX,dword ptr [EAX]             ; 004c86d7
    MOV dword ptr [EBP + 0xfffffe22],EAX ; 004c86d9
    MOV EAX,dword ptr [EBP + 0x66]      ; 004c86df
    MOV EAX,dword ptr [EAX]             ; 004c86e2
    MOV dword ptr [EBP + 0xfffffe26],EAX ; 004c86e4
    MOV EAX,dword ptr [EBP + 0x66]      ; 004c86ea
    ADD EAX,0x4                         ; 004c86ed
    MOV dword ptr [EBP + 0x46],EAX      ; 004c86f0
    MOV EAX,dword ptr [EAX]             ; 004c86f3
    MOV dword ptr [EBP + 0xfffffe2a],EAX ; 004c86f5
    MOV EAX,dword ptr [EBP + 0x66]      ; 004c86fb
    ADD EAX,0x8                         ; 004c86fe
    MOV dword ptr [EBP + 0x3a],EAX      ; 004c8701
    MOV EAX,dword ptr [EAX]             ; 004c8704
    MOV dword ptr [EBP + 0xfffffe2e],EAX ; 004c8706
    MOV EAX,dword ptr [EBX + 0x44]      ; 004c870c
    MOV dword ptr [EBP + 0xfffffe32],EAX ; 004c870f
    MOV EAX,dword ptr [EBX + 0x48]      ; 004c8715
    MOV dword ptr [EBP + 0xfffffe36],EAX ; 004c8718
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004c871e
    MOV dword ptr [EBP + 0xfffffe3a],EAX ; 004c8721
    MOV EAX,dword ptr [EBX + 0x50]      ; 004c8727
    FLD float ptr [EBP + 0xfffffdee]    ; 004c872a
    MOV dword ptr [EBP + 0xfffffe3e],EAX ; 004c8730
    MOV EAX,[0x006810c8]                ; 004c8736 | g_CDemonSetInstance | g_CDemonSetPtr
    FMUL float ptr [EBX + 0x50]         ; 004c873b
    PUSH EAX                            ; 004c873e | g_CDemonSetInstance
    FSTP float ptr [EBP + 0xfffffdee]   ; 004c873f
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10 ; 004c8745
        ;   XREF to: 00573e10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c874a
    MOV EDX,dword ptr [0x006810c8]      ; 004c874d | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004c8753 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004c8754
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 004c8759
    MOV dword ptr [EBP + 0xfffffe42],EAX ; 004c875b
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c8761
    MOV dword ptr [EBP + 0xfffffe46],EAX ; 004c8764
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c876a
    MOV dword ptr [EBP + 0xfffffe4a],EAX ; 004c876d
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c8773
    MOV dword ptr [EBP + 0xfffffe4e],EAX ; 004c8776
    MOV EAX,dword ptr [EBX + 0x10]      ; 004c877c
    MOV dword ptr [EBP + 0xfffffe52],EAX ; 004c877f
    MOV EAX,dword ptr [EBX + 0x14]      ; 004c8785
    MOV dword ptr [EBP + 0xfffffe56],EAX ; 004c8788
    MOV EAX,dword ptr [EBX + 0x18]      ; 004c878e
    MOV dword ptr [EBP + 0xfffffe5a],EAX ; 004c8791
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004c8797
    MOV dword ptr [EBP + 0xfffffe5e],EAX ; 004c879a
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004c87a0
    MOV EAX,dword ptr [EAX]             ; 004c87a3
    MOV dword ptr [EBP + 0xfffffe62],EAX ; 004c87a5
    MOV EAX,dword ptr [EBP + 0x2e]      ; 004c87ab
    MOV EAX,dword ptr [EAX]             ; 004c87ae
    MOV dword ptr [EBP + 0xfffffe66],EAX ; 004c87b0
    MOV EAX,dword ptr [EBP + 0x32]      ; 004c87b6
    MOV EAX,dword ptr [EAX]             ; 004c87b9
    MOV dword ptr [EBP + 0xfffffe6a],EAX ; 004c87bb
    MOV EAX,dword ptr [EBP + 0x62]      ; 004c87c1
    MOV EAX,dword ptr [EAX]             ; 004c87c4
    MOV dword ptr [EBP + 0xfffffe6e],EAX ; 004c87c6
    MOV EAX,dword ptr [EBP + 0x4a]      ; 004c87cc
    MOV EAX,dword ptr [EAX]             ; 004c87cf
    MOV dword ptr [EBP + 0xfffffe72],EAX ; 004c87d1
    MOV EAX,dword ptr [EBP + 0x42]      ; 004c87d7
    MOV EAX,dword ptr [EAX]             ; 004c87da
    MOV dword ptr [EBP + 0xfffffe76],EAX ; 004c87dc
    MOV EAX,dword ptr [EBP + 0x66]      ; 004c87e2
    MOV EAX,dword ptr [EAX]             ; 004c87e5
    MOV dword ptr [EBP + 0xfffffe7a],EAX ; 004c87e7
    MOV EAX,dword ptr [EBP + 0x46]      ; 004c87ed
    MOV EAX,dword ptr [EAX]             ; 004c87f0
    MOV dword ptr [EBP + 0xfffffe7e],EAX ; 004c87f2
    MOV EAX,dword ptr [EBP + 0x3a]      ; 004c87f8
    MOV EAX,dword ptr [EAX]             ; 004c87fb
    MOV dword ptr [EBP + 0xfffffe82],EAX ; 004c87fd
    MOV EAX,dword ptr [EBX + 0x44]      ; 004c8803
    MOV dword ptr [EBP + 0xfffffe86],EAX ; 004c8806
    MOV EAX,dword ptr [EBX + 0x48]      ; 004c880c
    MOV dword ptr [EBP + 0xfffffe8a],EAX ; 004c880f
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004c8815
    ADD ESP,0x4                         ; 004c8818
    MOV dword ptr [EBP + 0xfffffe8e],EAX ; 004c881b
    MOV ECX,dword ptr [EBP + 0x2a]      ; 004c8821
    MOV EAX,dword ptr [EBX + 0x50]      ; 004c8824
    PUSH ECX                            ; 004c8827
    MOV dword ptr [EBP + 0xfffffe92],EAX ; 004c8828
    LEA EAX,[EBP + 0xfffffe42]          ; 004c882e
    PUSH EAX                            ; 004c8834
    LEA EAX,[EBP + -0x3e]               ; 004c8835
    PUSH EAX                            ; 004c8838
    LEA EAX,[EBP + 0xffffff4a]          ; 004c8839
    PUSH EAX                            ; 004c883f
    MOV EAX,dword ptr [EBP + 0x82]      ; 004c8840
    PUSH EAX                            ; 004c8846
    CALL core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230 ; 004c8847
        ;   XREF to: 004c8230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230(CFireEffect * this_ptr, CVector3f * origin, CVector3f * direction, SLaserInfo * laser_info, ...)
    ADD ESP,0x14                        ; 004c884c
    MOV EDX,dword ptr [0x006810c8]      ; 004c884f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004c8855 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0 ; 004c8856
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet * this_ptr)
    FLD float ptr [EBX + 0x50]          ; 004c885b
    FLD1                                ; 004c885e
    FSUBRP                              ; 004c8860
    FMUL double ptr [0x0062a07b]        ; 004c8862 | DOUBLE_0062a07b
    FLD float ptr [EBP + 0x56]          ; 004c8868
    FXCH                                ; 004c886b
    FMUL ST1                            ; 004c886d
    ADD ESP,0x4                         ; 004c886f
    FSTP ST1                            ; 004c8872
    FSTP float ptr [EBP + 0x56]         ; 004c8874
    FLD float ptr [EBX + 0x48]          ; 004c8877
        ;   Label: LAB_004c8877
    FLDZ                                ; 004c887a
    FCOMPP                              ; 004c887c
    FNSTSW AX                           ; 004c887e
    SAHF                                ; 004c8880
    JNC 0x004c8ae9                      ; 004c8881
        ;   XREF to: 004c8ae9 (CONDITIONAL_JUMP)  ; LAB_004c8ae9
    CMP dword ptr [EBX + 0x48],0x3f800000 ; 004c8887
    JNZ 0x004c889f                      ; 004c888e
        ;   XREF to: 004c889f (CONDITIONAL_JUMP)  ; LAB_004c889f
    FLD float ptr [EBX + 0x4c]          ; 004c8890
    FCOMP float ptr [EBX + 0x44]        ; 004c8893
    FNSTSW AX                           ; 004c8896
    SAHF                                ; 004c8898
    JZ 0x004c8bf5                       ; 004c8899
        ;   XREF to: 004c8bf5 (CONDITIONAL_JUMP)  ; LAB_004c8bf5
    MOV EAX,dword ptr [ESI]             ; 004c889f
        ;   Label: LAB_004c889f
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 004c88a1
    LEA EAX,[ESI + 0x4]                 ; 004c88a7
    MOV EAX,dword ptr [EAX]             ; 004c88aa
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 004c88ac
    LEA EAX,[ESI + 0x8]                 ; 004c88b2
    MOV EAX,dword ptr [EAX]             ; 004c88b5
    MOV dword ptr [EBP + -0x7e],EAX     ; 004c88b7
    MOV EAX,dword ptr [EBX]             ; 004c88ba
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 004c88bc
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c88c2
    MOV dword ptr [EBP + 0xfffffeee],EAX ; 004c88c5
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c88cb
    MOV dword ptr [EBP + 0xfffffef2],EAX ; 004c88ce
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c88d4
    MOV dword ptr [EBP + 0xfffffef6],EAX ; 004c88d7
    MOV EAX,dword ptr [EBX + 0x10]      ; 004c88dd
    MOV dword ptr [EBP + 0xfffffefa],EAX ; 004c88e0
    MOV EAX,dword ptr [EBX + 0x14]      ; 004c88e6
    MOV dword ptr [EBP + 0xfffffefe],EAX ; 004c88e9
    MOV EAX,dword ptr [EBX + 0x18]      ; 004c88ef
    MOV dword ptr [EBP + 0xffffff02],EAX ; 004c88f2
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004c88f8
    MOV dword ptr [EBP + 0xffffff06],EAX ; 004c88fb
    LEA EAX,[EBX + 0x20]                ; 004c8901
    MOV dword ptr [EBP + 0x2],EAX       ; 004c8904
    MOV EAX,dword ptr [EAX]             ; 004c8907
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 004c8909
    MOV EAX,dword ptr [EBP + 0x2]       ; 004c890f
    ADD EAX,0x4                         ; 004c8912
    MOV dword ptr [EBP + 0x6],EAX       ; 004c8915
    MOV EAX,dword ptr [EAX]             ; 004c8918
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 004c891a
    MOV EAX,dword ptr [EBP + 0x2]       ; 004c8920
    ADD EAX,0x8                         ; 004c8923
    MOV dword ptr [EBP + 0xa],EAX       ; 004c8926
    MOV EAX,dword ptr [EAX]             ; 004c8929
    LEA ESI,[EBX + 0x2c]                ; 004c892b
    MOV dword ptr [EBP + 0xffffff12],EAX ; 004c892e
    MOV EAX,dword ptr [ESI]             ; 004c8934
    MOV dword ptr [EBP + 0xffffff16],EAX ; 004c8936
    LEA EAX,[ESI + 0x4]                 ; 004c893c
    MOV dword ptr [EBP + 0x1a],EAX      ; 004c893f
    MOV EAX,dword ptr [EAX]             ; 004c8942
    MOV dword ptr [EBP + 0xffffff1a],EAX ; 004c8944
    LEA EAX,[ESI + 0x8]                 ; 004c894a
    MOV dword ptr [EBP + 0xe],EAX       ; 004c894d
    MOV EAX,dword ptr [EAX]             ; 004c8950
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 004c8952
    LEA EAX,[EBX + 0x38]                ; 004c8958
    MOV dword ptr [EBP + 0x12],EAX      ; 004c895b
    MOV EAX,dword ptr [EAX]             ; 004c895e
    MOV dword ptr [EBP + 0xffffff22],EAX ; 004c8960
    MOV EAX,dword ptr [EBP + 0x12]      ; 004c8966
    ADD EAX,0x4                         ; 004c8969
    MOV dword ptr [EBP + 0x16],EAX      ; 004c896c
    MOV EAX,dword ptr [EAX]             ; 004c896f
    MOV dword ptr [EBP + 0xffffff26],EAX ; 004c8971
    MOV EAX,dword ptr [EBP + 0x12]      ; 004c8977
    ADD EAX,0x8                         ; 004c897a
    MOV dword ptr [EBP + 0x6a],EAX      ; 004c897d
    MOV EAX,dword ptr [EAX]             ; 004c8980
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 004c8982
    MOV EAX,dword ptr [EBX + 0x44]      ; 004c8988
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 004c898b
    MOV EAX,dword ptr [EBX + 0x48]      ; 004c8991
    MOV dword ptr [EBP + 0xffffff32],EAX ; 004c8994
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004c899a
    MOV dword ptr [EBP + 0xffffff36],EAX ; 004c899d
    MOV EAX,dword ptr [EBX + 0x50]      ; 004c89a3
    FLD float ptr [EBP + 0xfffffeea]    ; 004c89a6
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 004c89ac
    MOV EAX,[0x006810c8]                ; 004c89b2 | g_CDemonSetInstance | g_CDemonSetPtr
    FMUL float ptr [EBX + 0x48]         ; 004c89b7
    PUSH EAX                            ; 004c89ba | g_CDemonSetInstance
    FSTP float ptr [EBP + 0xfffffeea]   ; 004c89bb
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004c89c1
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c89c6
    PUSH EDI                            ; 004c89c9
    MOV EDX,dword ptr [0x006810c8]      ; 004c89ca | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004c89d0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004c89d1
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBP + 0x92]      ; 004c89d6
    ADD ESP,0x8                         ; 004c89dc
    INC EAX                             ; 004c89df
    PUSH EAX                            ; 004c89e0
    MOV EAX,dword ptr [EBX]             ; 004c89e1
    MOV dword ptr [EBP + 0xfffffe96],EAX ; 004c89e3
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c89e9
    MOV dword ptr [EBP + 0xfffffe9a],EAX ; 004c89ec
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c89f2
    MOV dword ptr [EBP + 0xfffffe9e],EAX ; 004c89f5
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c89fb
    MOV dword ptr [EBP + 0xfffffea2],EAX ; 004c89fe
    MOV EAX,dword ptr [EBX + 0x10]      ; 004c8a04
    MOV dword ptr [EBP + 0xfffffea6],EAX ; 004c8a07
    MOV EAX,dword ptr [EBX + 0x14]      ; 004c8a0d
    MOV dword ptr [EBP + 0xfffffeaa],EAX ; 004c8a10
    MOV EAX,dword ptr [EBX + 0x18]      ; 004c8a16
    MOV dword ptr [EBP + 0xfffffeae],EAX ; 004c8a19
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004c8a1f
    MOV dword ptr [EBP + 0xfffffeb2],EAX ; 004c8a22
    MOV EAX,dword ptr [EBP + 0x2]       ; 004c8a28
    MOV EAX,dword ptr [EAX]             ; 004c8a2b
    MOV dword ptr [EBP + 0xfffffeb6],EAX ; 004c8a2d
    MOV EAX,dword ptr [EBP + 0x6]       ; 004c8a33
    MOV EAX,dword ptr [EAX]             ; 004c8a36
    MOV dword ptr [EBP + 0xfffffeba],EAX ; 004c8a38
    MOV EAX,dword ptr [EBP + 0xa]       ; 004c8a3e
    MOV EAX,dword ptr [EAX]             ; 004c8a41
    MOV dword ptr [EBP + 0xfffffebe],EAX ; 004c8a43
    MOV EAX,dword ptr [ESI]             ; 004c8a49
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 004c8a4b
    MOV EAX,dword ptr [EBP + 0x1a]      ; 004c8a51
    MOV EAX,dword ptr [EAX]             ; 004c8a54
    MOV dword ptr [EBP + 0xfffffec6],EAX ; 004c8a56
    MOV EAX,dword ptr [EBP + 0xe]       ; 004c8a5c
    MOV EAX,dword ptr [EAX]             ; 004c8a5f
    MOV dword ptr [EBP + 0xfffffeca],EAX ; 004c8a61
    MOV EAX,dword ptr [EBP + 0x12]      ; 004c8a67
    MOV EAX,dword ptr [EAX]             ; 004c8a6a
    MOV dword ptr [EBP + 0xfffffece],EAX ; 004c8a6c
    MOV EAX,dword ptr [EBP + 0x16]      ; 004c8a72
    MOV EAX,dword ptr [EAX]             ; 004c8a75
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 004c8a77
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004c8a7d
    MOV EAX,dword ptr [EAX]             ; 004c8a80
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 004c8a82
    MOV EAX,dword ptr [EBX + 0x44]      ; 004c8a88
    MOV dword ptr [EBP + 0xfffffeda],EAX ; 004c8a8b
    MOV EAX,dword ptr [EBX + 0x48]      ; 004c8a91
    MOV dword ptr [EBP + 0xfffffede],EAX ; 004c8a94
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004c8a9a
    MOV dword ptr [EBP + 0xfffffee2],EAX ; 004c8a9d
    MOV EAX,dword ptr [EBX + 0x50]      ; 004c8aa3
    MOV dword ptr [EBP + 0xfffffee6],EAX ; 004c8aa6
    LEA EAX,[EBP + 0xfffffe96]          ; 004c8aac
    PUSH EAX                            ; 004c8ab2
    LEA EAX,[EBP + 0xffffff7a]          ; 004c8ab3
    PUSH EAX                            ; 004c8ab9
    LEA EAX,[EBP + 0xffffff4a]          ; 004c8aba
    PUSH EAX                            ; 004c8ac0
    MOV ECX,dword ptr [EBP + 0x82]      ; 004c8ac1
    PUSH ECX                            ; 004c8ac7
    CALL core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230 ; 004c8ac8
        ;   XREF to: 004c8230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230(CFireEffect * this_ptr, CVector3f * origin, CVector3f * direction, SLaserInfo * laser_info, ...)
    FLD float ptr [EBX + 0x48]          ; 004c8acd
    FLD1                                ; 004c8ad0
    FSUBRP                              ; 004c8ad2
    FMUL double ptr [0x0062a07b]        ; 004c8ad4 | DOUBLE_0062a07b
    FLD float ptr [EBP + 0x56]          ; 004c8ada
    FXCH                                ; 004c8add
    FMUL ST1                            ; 004c8adf
    ADD ESP,0x14                        ; 004c8ae1
    FSTP ST1                            ; 004c8ae4
    FSTP float ptr [EBP + 0x56]         ; 004c8ae6
    MOV ESI,dword ptr [EBX + 0x14]      ; 004c8ae9
        ;   Label: LAB_004c8ae9
    PUSH dword ptr [EBX + 0x4]          ; 004c8aec
    PUSH ESI                            ; 004c8aef
    MOV EDI,dword ptr [EBX + 0x10]      ; 004c8af0
    PUSH EDI                            ; 004c8af3
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c8af4
    PUSH EAX                            ; 004c8af7
    LEA EAX,[EBP + -0x26]               ; 004c8af8
    PUSH EAX                            ; 004c8afb
    PUSH dword ptr [EBP + 0x56]         ; 004c8afc
    LEA EAX,[EBP + 0xffffff4a]          ; 004c8aff
    PUSH dword ptr [EBX]                ; 004c8b05
    PUSH EAX                            ; 004c8b07
    LEA EAX,[EBP + -0x62]               ; 004c8b08
    PUSH EAX                            ; 004c8b0b
    MOV EDX,dword ptr [EBP + 0x82]      ; 004c8b0c
    PUSH EDX                            ; 004c8b12
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_004c7eb0 ; 004c8b13
        ;   XREF to: 004c7eb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserSegment_FUN_004c7eb0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
        ;   Label: prt_4c8b13_486ab265
    ADD ESP,0x28                        ; 004c8b18
    LEA ESP,[EBP + 0x6e]                ; 004c8b1b
        ;   Label: LAB_004c8b1b
    POP EBP                             ; 004c8b1e
    POP EDI                             ; 004c8b1f
    POP ESI                             ; 004c8b20
    POP EBX                             ; 004c8b21
    RET                                 ; 004c8b22
    FLD float ptr [ESI]                 ; 004c8b23
        ;   Label: LAB_004c8b23
    LEA EAX,[EBP + 0xffffff6e]          ; 004c8b25
    LEA EDX,[EBP + -0x26]               ; 004c8b2b
    FCHS                                ; 004c8b2e
    FSTP float ptr [EBP + 0xffffff6e]   ; 004c8b30
    FLD float ptr [ESI + 0x4]           ; 004c8b36
    FCHS                                ; 004c8b39
    FSTP float ptr [EBP + 0xffffff72]   ; 004c8b3b
    FLD float ptr [ESI + 0x8]           ; 004c8b41
    FCHS                                ; 004c8b44
    FSTP float ptr [EBP + 0xffffff76]   ; 004c8b46
    CMP EDX,EAX                         ; 004c8b4c
    JZ 0x004c8b6b                       ; 004c8b4e
        ;   XREF to: 004c8b6b (CONDITIONAL_JUMP)  ; LAB_004c8b6b
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 004c8b50
    MOV dword ptr [EBP + -0x26],EAX     ; 004c8b56
    MOV EAX,dword ptr [EBP + 0xffffff72] ; 004c8b59
    MOV dword ptr [EBP + -0x22],EAX     ; 004c8b5f
    MOV EAX,dword ptr [EBP + 0xffffff76] ; 004c8b62
    MOV dword ptr [EBP + -0x1e],EAX     ; 004c8b68
    FLD float ptr [EBP + -0x22]         ; 004c8b6b
        ;   Label: LAB_004c8b6b
    FMUL ST0                            ; 004c8b6e
    FLD float ptr [EBP + -0x26]         ; 004c8b70
    FMUL ST0                            ; 004c8b73
    FADDP                               ; 004c8b75
    FLD float ptr [EBP + -0x1e]         ; 004c8b77
    FMUL ST0                            ; 004c8b7a
    FADDP                               ; 004c8b7c
    FSQRT                               ; 004c8b7e
    FST float ptr [EBP + 0x3e]          ; 004c8b80
    FLDZ                                ; 004c8b83
    FCOMPP                              ; 004c8b85
    FNSTSW AX                           ; 004c8b87
    SAHF                                ; 004c8b89
    JNC 0x004c8bb4                      ; 004c8b8a
        ;   XREF to: 004c8bb4 (CONDITIONAL_JUMP)  ; LAB_004c8bb4
    FLD1                                ; 004c8b8c
    FLD float ptr [EBP + -0x26]         ; 004c8b8e
    FXCH                                ; 004c8b91
    FDIV float ptr [EBP + 0x3e]         ; 004c8b93
    FXCH                                ; 004c8b96
    FMUL ST1                            ; 004c8b98
    FLD float ptr [EBP + -0x22]         ; 004c8b9a
    FMUL ST2                            ; 004c8b9d
    FLD float ptr [EBP + -0x1e]         ; 004c8b9f
    FMULP ST3                           ; 004c8ba2
    FXCH                                ; 004c8ba4
    FSTP float ptr [EBP + -0x26]        ; 004c8ba6
    FSTP float ptr [EBP + -0x22]        ; 004c8ba9
    FSTP float ptr [EBP + -0x1e]        ; 004c8bac
    JMP 0x004c83f1                      ; 004c8baf
        ;   XREF to: 004c83f1 (UNCONDITIONAL_JUMP)  ; LAB_004c83f1
    XOR EAX,EAX                         ; 004c8bb4
        ;   Label: LAB_004c8bb4
    MOV dword ptr [EBP + -0x22],EAX     ; 004c8bb6
    MOV dword ptr [EBP + -0x26],EAX     ; 004c8bb9
    JMP 0x004c83ee                      ; 004c8bbc
        ;   XREF to: 004c83ee (UNCONDITIONAL_JUMP)  ; LAB_004c83ee
    XOR ECX,ECX                         ; 004c8bc1
        ;   Label: LAB_004c8bc1
    MOV dword ptr [EBP + -0x6a],ECX     ; 004c8bc3
    MOV dword ptr [EBP + -0x6e],ECX     ; 004c8bc6
    MOV dword ptr [EBP + -0x66],ECX     ; 004c8bc9
    JMP 0x004c854f                      ; 004c8bcc
        ;   XREF to: 004c854f (UNCONDITIONAL_JUMP)  ; LAB_004c854f
    FLD1                                ; 004c8bd1
        ;   Label: LAB_004c8bd1
    FCOMP double ptr [EBP + -0x1a]      ; 004c8bd3
    FNSTSW AX                           ; 004c8bd6
    SAHF                                ; 004c8bd8
    JA 0x004c8be5                       ; 004c8bd9
        ;   XREF to: 004c8be5 (CONDITIONAL_JUMP)  ; LAB_004c8be5
    XOR ECX,ECX                         ; 004c8bdb
    MOV dword ptr [EBP + 0x52],ECX      ; 004c8bdd
    JMP 0x004c857d                      ; 004c8be0
        ;   XREF to: 004c857d (UNCONDITIONAL_JUMP)  ; LAB_004c857d
    FLD double ptr [EBP + -0x1a]        ; 004c8be5
        ;   Label: LAB_004c8be5
    CALL crt_math.c_acos_FUN_00600162   ; 004c8be8
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [EBP + 0x52]         ; 004c8bed
    JMP 0x004c857d                      ; 004c8bf0
        ;   XREF to: 004c857d (UNCONDITIONAL_JUMP)  ; LAB_004c857d
    PUSH EDI                            ; 004c8bf5
        ;   Label: LAB_004c8bf5
    MOV ECX,dword ptr [0x006810c8]      ; 004c8bf6 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004c8bfc | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004c8bfd
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c8c02
    JMP 0x004c82a2                      ; 004c8c05
        ;   XREF to: 004c82a2 (UNCONDITIONAL_JUMP)  ; LAB_004c82a2

