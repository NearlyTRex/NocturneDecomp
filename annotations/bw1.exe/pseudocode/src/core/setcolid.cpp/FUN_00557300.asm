; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setcolid_cpp_FUN_00557300(int param_1,float *param_2,float *param_3)
;
; Local Variables:
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
; XREF[21]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040a581
;   core_crossbow.cpp_CCrossbow_fire_FUN_00449a50 at 00449c57
;   core_doc.cpp_CDoc_aimLeftPistol_FUN_00473160 at 004732f0
;   core_doc.cpp_CDoc_updateArmRecoilBlend_FUN_00473c10 at 00473f7c
;   core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0 at 0049e49e
;   core_fire.cpp_CFireEffect_traceLaser_FUN_004b6420 at 004b64c6
;   core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0 at 004ca3d9
;   core_gabriela.cpp_FUN_004c7aa0 at 004c812b
;   core_game.cpp_FUN_004d9260 at 004d9a5e
;   core_gun.cpp_CGun_fire_FUN_004e8630 at 004e8850
;   ... and 11 more
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048b150
;   core_setcolid.cpp_FUN_005578b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557300
        ;   Label: core_setcolid.cpp_FUN_00557300
    PUSH ESI                            ; 00557301
    PUSH EDI                            ; 00557302
    PUSH EBP                            ; 00557303
    SUB ESP,0x4c                        ; 00557304
    MOV EBX,dword ptr [ESP + 0x60]      ; 00557307
    MOV EBP,dword ptr [ESP + 0x64]      ; 0055730b
    MOV ESI,dword ptr [ESP + 0x68]      ; 0055730f
    LEA EAX,[EBX + 0x14d110]            ; 00557313
    CMP EAX,EBP                         ; 00557319
    JNZ 0x00557489                      ; 0055731b
        ;   XREF to: 00557489 (CONDITIONAL_JUMP)  ; LAB_00557489
    LEA EAX,[EBX + 0x14d11c]            ; 00557321
        ;   Label: LAB_00557321
    CMP EAX,ESI                         ; 00557327
    JZ 0x0055733b                       ; 00557329
        ;   XREF to: 0055733b (CONDITIONAL_JUMP)  ; LAB_0055733b
    MOV EDX,dword ptr [ESI]             ; 0055732b
    MOV dword ptr [EAX],EDX             ; 0055732d
    MOV EDX,dword ptr [ESI + 0x4]       ; 0055732f
    MOV dword ptr [EAX + 0x4],EDX       ; 00557332
    MOV EDX,dword ptr [ESI + 0x8]       ; 00557335
    MOV dword ptr [EAX + 0x8],EDX       ; 00557338
    LEA EAX,[EBX + 0x15f6f0]            ; 0055733b
        ;   Label: LAB_0055733b
    PUSH EAX                            ; 00557341
    LEA EDI,[EBX + 0x15f6e4]            ; 00557342
    PUSH EDI                            ; 00557348
    PUSH ESI                            ; 00557349
    PUSH EBP                            ; 0055734a
    PUSH 0x1fe5c1c                      ; 0055734b | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_0048b150   ; 00557350
        ;   XREF to: 0048b150 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048b150()
    MOV dword ptr [ESP + 0x5c],EAX      ; 00557355
    FLD float ptr [ESP + 0x5c]          ; 00557359
    LEA EAX,[EBX + 0x14d128]            ; 0055735d
    FSTP float ptr [EBX + 0x15f6e0]     ; 00557363
    ADD ESP,0x14                        ; 00557369
    CMP EAX,EDI                         ; 0055736c
    JZ 0x00557380                       ; 0055736e
        ;   XREF to: 00557380 (CONDITIONAL_JUMP)  ; LAB_00557380
    MOV EDX,dword ptr [EDI]             ; 00557370
    MOV dword ptr [EAX],EDX             ; 00557372
    MOV EDX,dword ptr [EDI + 0x4]       ; 00557374
    MOV dword ptr [EAX + 0x4],EDX       ; 00557377
    MOV EDX,dword ptr [EDI + 0x8]       ; 0055737a
    MOV dword ptr [EAX + 0x8],EDX       ; 0055737d
    FLD float ptr [EBX + 0x15f6e0]      ; 00557380
        ;   Label: LAB_00557380
    MOV EAX,dword ptr [EBX + 0x15f6f0]  ; 00557386
    FLDZ                                ; 0055738c
    MOV dword ptr [EBX + 0x14d134],EAX  ; 0055738e
    FCOMPP                              ; 00557394
    FNSTSW AX                           ; 00557396
    SAHF                                ; 00557398
    JBE 0x005573a5                      ; 00557399
        ;   XREF to: 005573a5 (CONDITIONAL_JUMP)  ; LAB_005573a5
    MOV dword ptr [EBX + 0x15f6e0],0x3f8147ae ; 0055739b
    PUSH dword ptr [EBX + 0x15f6e0]     ; 005573a5
        ;   Label: LAB_005573a5
    PUSH ESI                            ; 005573ab
    PUSH EBP                            ; 005573ac
    PUSH 0xbf800000                     ; 005573ad
    PUSH EBX                            ; 005573b2
    CALL core_setcolid.cpp_FUN_005578b0 ; 005573b3
        ;   XREF to: 005578b0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005578b0()
    MOV dword ptr [ESP + 0x5c],EAX      ; 005573b8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005573bc
    MOV dword ptr [EBX + 0x15f6dc],EAX  ; 005573c0
    ADD ESP,0x14                        ; 005573c6
    FLD float ptr [EBX + 0x15f6dc]      ; 005573c9
    FLD1                                ; 005573cf
    FCOMPP                              ; 005573d1
    FNSTSW AX                           ; 005573d3
    SAHF                                ; 005573d5
    JC 0x0055747b                       ; 005573d6
        ;   XREF to: 0055747b (CONDITIONAL_JUMP)  ; LAB_0055747b
    FLD float ptr [ESI + 0x4]           ; 005573dc
    FLD float ptr [ESI + 0x8]           ; 005573df
    FLD float ptr [ESI]                 ; 005573e2
    LEA EDI,[ESP + 0x24]                ; 005573e4
    LEA ESI,[ESP + 0x30]                ; 005573e8
    FSUB float ptr [EBP]                ; 005573ec
    FXCH ST2                            ; 005573ef
    FSUB float ptr [EBP + 0x4]          ; 005573f1
    FXCH                                ; 005573f4
    FSUB float ptr [EBP + 0x8]          ; 005573f6
    FXCH ST2                            ; 005573f9
    FSTP float ptr [ESP + 0x30]         ; 005573fb
    FSTP float ptr [ESP + 0x34]         ; 005573ff
    FSTP float ptr [ESP + 0x38]         ; 00557403
    MOVSD ES:EDI,ESI                    ; 00557407
    MOVSD ES:EDI,ESI                    ; 00557408
    MOVSD ES:EDI,ESI                    ; 00557409
    LEA EAX,[EBX + 0x15f6dc]            ; 0055740a
    FLD float ptr [ESP + 0x24]          ; 00557410
    FMUL float ptr [EAX]                ; 00557414
    FLD float ptr [ESP + 0x28]          ; 00557416
    FMUL float ptr [EAX]                ; 0055741a
    FLD float ptr [ESP + 0x2c]          ; 0055741c
    FMUL float ptr [EAX]                ; 00557420
    LEA EDI,[ESP + 0xc]                 ; 00557422
    LEA ESI,[ESP + 0x3c]                ; 00557426
    FXCH ST2                            ; 0055742a
    FSTP float ptr [ESP + 0x3c]         ; 0055742c
    FSTP float ptr [ESP + 0x40]         ; 00557430
    FSTP float ptr [ESP + 0x44]         ; 00557434
    MOVSD ES:EDI,ESI                    ; 00557438
    MOVSD ES:EDI,ESI                    ; 00557439
    MOVSD ES:EDI,ESI                    ; 0055743a
    FLD float ptr [EBP]                 ; 0055743b
    FLD float ptr [EBP + 0x4]           ; 0055743e
    FLD float ptr [EBP + 0x8]           ; 00557441
    MOV EDI,ESP                         ; 00557444
    LEA ESI,[ESP + 0x18]                ; 00557446
    FXCH ST2                            ; 0055744a
    FADD float ptr [ESP + 0xc]          ; 0055744c
    FXCH                                ; 00557450
    FADD float ptr [ESP + 0x10]         ; 00557452
    FXCH ST2                            ; 00557456
    FADD float ptr [ESP + 0x14]         ; 00557458
    FXCH                                ; 0055745c
    FSTP float ptr [ESP + 0x18]         ; 0055745e
    FXCH                                ; 00557462
    FSTP float ptr [ESP + 0x1c]         ; 00557464
    FSTP float ptr [ESP + 0x20]         ; 00557468
    MOVSD ES:EDI,ESI                    ; 0055746c
    MOVSD ES:EDI,ESI                    ; 0055746d
    MOVSD ES:EDI,ESI                    ; 0055746e
    MOV EAX,ESP                         ; 0055746f
    LEA ESI,[EBX + 0x14d138]            ; 00557471
    CMP ESI,EAX                         ; 00557477
    JNZ 0x0055749f                      ; 00557479
        ;   XREF to: 0055749f (CONDITIONAL_JUMP)  ; LAB_0055749f
    MOV EAX,dword ptr [EBX + 0x15f6dc]  ; 0055747b
        ;   Label: LAB_0055747b
    ADD ESP,0x4c                        ; 00557481
    POP EBP                             ; 00557484
    POP EDI                             ; 00557485
    POP ESI                             ; 00557486
    POP EBX                             ; 00557487
    RET                                 ; 00557488
    MOV EDX,dword ptr [EBP]             ; 00557489
        ;   Label: LAB_00557489
    MOV dword ptr [EAX],EDX             ; 0055748c
    MOV EDX,dword ptr [EBP + 0x4]       ; 0055748e
    MOV dword ptr [EAX + 0x4],EDX       ; 00557491
    MOV EDX,dword ptr [EBP + 0x8]       ; 00557494
    MOV dword ptr [EAX + 0x8],EDX       ; 00557497
    JMP 0x00557321                      ; 0055749a
        ;   XREF to: 00557321 (UNCONDITIONAL_JUMP)  ; LAB_00557321
    MOV EAX,dword ptr [ESP]             ; 0055749f
        ;   Label: LAB_0055749f
    MOV dword ptr [ESI],EAX             ; 005574a2
    MOV EAX,dword ptr [ESP + 0x4]       ; 005574a4
    MOV dword ptr [ESI + 0x4],EAX       ; 005574a8
    MOV EAX,dword ptr [ESP + 0x8]       ; 005574ab
    MOV dword ptr [ESI + 0x8],EAX       ; 005574af
    MOV EAX,dword ptr [EBX + 0x15f6dc]  ; 005574b2
    ADD ESP,0x4c                        ; 005574b8
    POP EBP                             ; 005574bb
    POP EDI                             ; 005574bc
    POP ESI                             ; 005574bd
    POP EBX                             ; 005574be
    RET                                 ; 005574bf

