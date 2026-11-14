; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,CMatrix3x4f *matrix_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_a
; CMatrix3x4f *    Stack[0x8]:4   matrix_b
; Local Variables:
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[48]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a200 at 0041a478
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041c720 at 0041c8df
;   core_boxactor.cpp_CLightActor_process_FUN_00422f90 at 00423164
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004263d0 at 004264fa
;   core_carved.cpp_CCarved_getCarryObjToBodyXForm_FUN_0042a4f0 at 0042a726
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00430440 at 00430757
;   core_charactr.cpp_CCharacter_computePickup_FUN_00432690 at 00432714
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 at 0043137f
;   core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00432be0 at 00432c24
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042f3c0 at 0042f445
;   ... and 38 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5200
        ;   Label: core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
    PUSH EDI                            ; 005b5201
    SUB ESP,0x30                        ; 005b5202
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005b5205
    MOV EAX,dword ptr [ESP + 0x40]      ; 005b5209
    MOV EBX,ESI                         ; 005b520d
    FLD float ptr [EAX + 0x4]           ; 005b520f
    FMUL float ptr [EDX + 0x10]         ; 005b5212
    FLD float ptr [EAX + 0x4]           ; 005b5215
    FMUL float ptr [EDX + 0x14]         ; 005b5218
    FLD float ptr [EAX + 0x4]           ; 005b521b
    FMUL float ptr [EDX + 0x18]         ; 005b521e
    FLD float ptr [EAX + 0x14]          ; 005b5221
    FMUL float ptr [EDX + 0x10]         ; 005b5224
    FLD float ptr [EAX]                 ; 005b5227
    FMUL float ptr [EDX]                ; 005b5229
    FLD float ptr [EAX + 0x10]          ; 005b522b
    FXCH                                ; 005b522e
    FADDP ST5,ST0                       ; 005b5230
    FMUL float ptr [EDX + 0x4]          ; 005b5232
    FLD float ptr [EAX + 0x8]           ; 005b5235
    FMUL float ptr [EDX + 0x20]         ; 005b5238
    FLD float ptr [EAX]                 ; 005b523b
    FXCH                                ; 005b523d
    FADDP ST6,ST0                       ; 005b523f
    FMUL float ptr [EDX + 0x4]          ; 005b5241
    FXCH ST5                            ; 005b5244
    FSTP float ptr [ESP]                ; 005b5246
    FLD float ptr [EAX + 0x10]          ; 005b5249
    FXCH ST5                            ; 005b524c
    FADDP ST4,ST0                       ; 005b524e
    FXCH ST4                            ; 005b5250
    FMUL float ptr [EDX + 0x8]          ; 005b5252
    FLD float ptr [EAX + 0x8]           ; 005b5255
    FMUL float ptr [EDX + 0x24]         ; 005b5258
    FLD float ptr [EAX]                 ; 005b525b
    FXCH                                ; 005b525d
    FADDP ST5,ST0                       ; 005b525f
    FMUL float ptr [EDX + 0x8]          ; 005b5261
    FXCH ST4                            ; 005b5264
    FSTP float ptr [ESP + 0x4]          ; 005b5266
    FLD float ptr [EAX + 0x24]          ; 005b526a
    FXCH ST4                            ; 005b526d
    FADDP ST3,ST0                       ; 005b526f
    FXCH ST3                            ; 005b5271
    FMUL float ptr [EDX + 0x10]         ; 005b5273
    FLD float ptr [EAX + 0x8]           ; 005b5276
    FMUL float ptr [EDX + 0x28]         ; 005b5279
    FLD float ptr [EAX + 0x10]          ; 005b527c
    FXCH                                ; 005b527f
    FADDP ST4,ST0                       ; 005b5281
    FMUL float ptr [EDX]                ; 005b5283
    FXCH ST3                            ; 005b5285
    FSTP float ptr [ESP + 0x8]          ; 005b5287
    FLD float ptr [EAX + 0x20]          ; 005b528b
    FXCH ST3                            ; 005b528e
    FADDP ST2,ST0                       ; 005b5290
    FXCH ST2                            ; 005b5292
    FMUL float ptr [EDX + 0x4]          ; 005b5294
    FLD float ptr [EAX + 0x18]          ; 005b5297
    FMUL float ptr [EDX + 0x20]         ; 005b529a
    FLD float ptr [EAX + 0x14]          ; 005b529d
    FXCH                                ; 005b52a0
    FADDP ST3,ST0                       ; 005b52a2
    FMUL float ptr [EDX + 0x14]         ; 005b52a4
    FXCH ST2                            ; 005b52a7
    FSTP float ptr [ESP + 0x10]         ; 005b52a9
    FLD float ptr [EAX + 0x20]          ; 005b52ad
    FXCH ST2                            ; 005b52b0
    FADDP ST5,ST0                       ; 005b52b2
    FXCH                                ; 005b52b4
    FMUL float ptr [EDX + 0x8]          ; 005b52b6
    FLD float ptr [EAX + 0x18]          ; 005b52b9
    FMUL float ptr [EDX + 0x24]         ; 005b52bc
    FLD float ptr [EAX + 0x14]          ; 005b52bf
    FXCH                                ; 005b52c2
    FADDP ST6,ST0                       ; 005b52c4
    FMUL float ptr [EDX + 0x18]         ; 005b52c6
    FXCH ST5                            ; 005b52c9
    FSTP float ptr [ESP + 0x14]         ; 005b52cb
    FLD float ptr [EAX + 0x4]           ; 005b52cf
    FXCH ST5                            ; 005b52d2
    FADDP ST4,ST0                       ; 005b52d4
    FXCH ST4                            ; 005b52d6
    FMUL float ptr [EDX + 0x1c]         ; 005b52d8
    FLD float ptr [EAX + 0x18]          ; 005b52db
    FMUL float ptr [EDX + 0x28]         ; 005b52de
    FLD float ptr [EAX + 0x20]          ; 005b52e1
    FXCH                                ; 005b52e4
    FADDP ST5,ST0                       ; 005b52e6
    FMUL float ptr [EDX]                ; 005b52e8
    FXCH ST4                            ; 005b52ea
    FSTP float ptr [ESP + 0x18]         ; 005b52ec
    FLD float ptr [EAX + 0x10]          ; 005b52f0
    FXCH ST4                            ; 005b52f3
    FADDP ST3,ST0                       ; 005b52f5
    FXCH ST3                            ; 005b52f7
    FMUL float ptr [EDX + 0xc]          ; 005b52f9
    FLD float ptr [EAX + 0x28]          ; 005b52fc
    FMUL float ptr [EDX + 0x20]         ; 005b52ff
    FLD float ptr [EAX + 0x20]          ; 005b5302
    FXCH                                ; 005b5305
    FADDP ST4,ST0                       ; 005b5307
    FMUL float ptr [EDX + 0xc]          ; 005b5309
    FXCH ST3                            ; 005b530c
    FSTP float ptr [ESP + 0x20]         ; 005b530e
    FLD float ptr [EAX + 0x24]          ; 005b5312
    FMUL float ptr [EDX + 0x14]         ; 005b5315
    FLD float ptr [EAX + 0x24]          ; 005b5318
    FMUL float ptr [EDX + 0x18]         ; 005b531b
    FXCH                                ; 005b531e
    FADDP ST3,ST0                       ; 005b5320
    FADDP ST5,ST0                       ; 005b5322
    FLD float ptr [EAX + 0x28]          ; 005b5324
    FMUL float ptr [EDX + 0x24]         ; 005b5327
    FLD float ptr [EAX + 0x28]          ; 005b532a
    FMUL float ptr [EDX + 0x28]         ; 005b532d
    FXCH                                ; 005b5330
    FADDP ST3,ST0                       ; 005b5332
    FLD float ptr [EAX]                 ; 005b5334
    FMUL float ptr [EDX + 0xc]          ; 005b5336
    FXCH                                ; 005b5339
    FADDP ST6,ST0                       ; 005b533b
    FLD float ptr [EAX + 0x14]          ; 005b533d
    FXCH                                ; 005b5340
    FADDP ST5,ST0                       ; 005b5342
    FMUL float ptr [EDX + 0x1c]         ; 005b5344
    FLD float ptr [EAX + 0x8]           ; 005b5347
    FMUL float ptr [EDX + 0x2c]         ; 005b534a
    FXCH                                ; 005b534d
    FADDP ST2,ST0                       ; 005b534f
    FLD float ptr [EAX + 0x24]          ; 005b5351
    FMUL float ptr [EDX + 0x1c]         ; 005b5354
    FADDP ST4,ST0                       ; 005b5357
    FADDP ST4,ST0                       ; 005b5359
    FLD float ptr [EAX + 0x18]          ; 005b535b
    FMUL float ptr [EDX + 0x2c]         ; 005b535e
    FLD float ptr [EAX + 0x28]          ; 005b5361
    FMUL float ptr [EDX + 0x2c]         ; 005b5364
    MOV ECX,0xc                         ; 005b5367
    MOV EDI,ESI                         ; 005b536c
    MOV ESI,ESP                         ; 005b536e
    FXCH                                ; 005b5370
    FADDP ST2,ST0                       ; 005b5372
    FADDP ST3,ST0                       ; 005b5374
    FXCH                                ; 005b5376
    FSTP float ptr [ESP + 0x24]         ; 005b5378
    FXCH ST3                            ; 005b537c
    FSTP float ptr [ESP + 0x28]         ; 005b537e
    FXCH                                ; 005b5382
    FADD float ptr [EAX + 0xc]          ; 005b5384
    FXCH ST2                            ; 005b5387
    FADD float ptr [EAX + 0x1c]         ; 005b5389
    FXCH                                ; 005b538c
    FADD float ptr [EAX + 0x2c]         ; 005b538e
    FXCH ST2                            ; 005b5391
    FSTP float ptr [ESP + 0xc]          ; 005b5393
    FSTP float ptr [ESP + 0x1c]         ; 005b5397
    FSTP float ptr [ESP + 0x2c]         ; 005b539b
    MOVSD.REP ES:EDI,ESI                ; 005b539f
    MOV EAX,EBX                         ; 005b53a1
    ADD ESP,0x30                        ; 005b53a3
    POP EDI                             ; 005b53a6
    POP EBX                             ; 005b53a7
    RET                                 ; 005b53a8

