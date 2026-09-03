; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
; float            Stack[0xc]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x114]:4  local_114
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
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004c9cf0 at 004c9d43
;
; Referenced Globals:
;   float FLOAT_0058802a = 2
;   float FLOAT_0058802e = 4
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0048b6f0
;   core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb2d0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0
    PUSH ESI                            ; 004cb2d1
    PUSH EDI                            ; 004cb2d2
    PUSH EBP                            ; 004cb2d3
    MOV EBP,ESP                         ; 004cb2d4
    SUB ESP,0x104                       ; 004cb2d6
    SUB EBP,0x76                        ; 004cb2dc
    MOV EBX,dword ptr [EBP + 0x8a]      ; 004cb2df
    MOV ESI,dword ptr [EBP + 0x8e]      ; 004cb2e5
    LEA EAX,[ESI*0x4 + 0x0]             ; 004cb2eb
    SUB EAX,ESI                         ; 004cb2f2
    SHL EAX,0x3                         ; 004cb2f4
    ADD EAX,ESI                         ; 004cb2f7
    LEA EDX,[EBX + 0x5e8]               ; 004cb2f9
    SHL EAX,0x2                         ; 004cb2ff
    MOV dword ptr [EBP + 0x6e],EDX      ; 004cb302
    LEA EDI,[EDX + EAX*0x1]             ; 004cb305
    XOR EDX,EDX                         ; 004cb308
    MOV ECX,dword ptr [EDI]             ; 004cb30a
    MOV dword ptr [EBP + 0x72],EDX      ; 004cb30c
    TEST ECX,ECX                        ; 004cb30f
    JZ 0x004cb532                       ; 004cb311
        ;   XREF to: 004cb532 (CONDITIONAL_JUMP)  ; LAB_004cb532
    CMP dword ptr [EBP + 0x72],0x0      ; 004cb317
        ;   Label: LAB_004cb317
    JZ 0x004cb572                       ; 004cb31b
        ;   XREF to: 004cb572 (CONDITIONAL_JUMP)  ; LAB_004cb572
    FLD float ptr [EBX + ESI*0x4 + 0x1488] ; 004cb321
    FADD float ptr [EBP + 0x92]         ; 004cb328
    FSTP float ptr [EBX + ESI*0x4 + 0x1488] ; 004cb32e
        ;   Label: LAB_004cb32e
    LEA EDX,[ESI*0x4 + 0x0]             ; 004cb335
    ADD EDX,EBX                         ; 004cb33c
    FLDZ                                ; 004cb33e
    FLD float ptr [EDX + 0x1488]        ; 004cb340
    FSTP double ptr [EBP + 0x62]        ; 004cb346
    FCOMP double ptr [EBP + 0x62]       ; 004cb349
    FNSTSW AX                           ; 004cb34c
    SAHF                                ; 004cb34e
    JNC 0x004cb584                      ; 004cb34f
        ;   XREF to: 004cb584 (CONDITIONAL_JUMP)  ; LAB_004cb584
    FLD1                                ; 004cb355
    FCOMP double ptr [EBP + 0x62]       ; 004cb357
    FNSTSW AX                           ; 004cb35a
    SAHF                                ; 004cb35c
    JNC 0x004cb369                      ; 004cb35d
        ;   XREF to: 004cb369 (CONDITIONAL_JUMP)  ; LAB_004cb369
    MOV dword ptr [EDX + 0x1488],0x3f800000 ; 004cb35f
    LEA EAX,[EBX + 0x5dc]               ; 004cb369
        ;   Label: LAB_004cb369
    PUSH EAX                            ; 004cb36f
    LEA EAX,[EBP + 0x1a]                ; 004cb370
    PUSH EAX                            ; 004cb373
    LEA EAX,[EDI + 0x24]                ; 004cb374
    PUSH EAX                            ; 004cb377
    MOV dword ptr [EBP + 0x6a],EAX      ; 004cb378
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004cb37b
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EDI + 0xc]                 ; 004cb380
    FLD float ptr [EDX]                 ; 004cb383
    FADD float ptr [EAX]                ; 004cb385
    FSTP float ptr [EBP + 0x3e]         ; 004cb387
    FLD float ptr [EDX + 0x4]           ; 004cb38a
    FADD float ptr [EAX + 0x4]          ; 004cb38d
    ADD ESP,0xc                         ; 004cb390
    FSTP float ptr [EBP + 0x42]         ; 004cb393
    FLD float ptr [EDX + 0x8]           ; 004cb396
    FADD float ptr [EAX + 0x8]          ; 004cb399
    LEA EAX,[EBP + 0x3e]                ; 004cb39c
    PUSH EAX                            ; 004cb39f
    LEA EAX,[EBP + 0x4a]                ; 004cb3a0
    PUSH EAX                            ; 004cb3a3
    PUSH EBX                            ; 004cb3a4
    FSTP float ptr [EBP + 0x46]         ; 004cb3a5
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004cb3a8
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    XOR ECX,ECX                         ; 004cb3ad
    MOV dword ptr [EBP + 0x26],ECX      ; 004cb3af
    FLD float ptr [EBX + 0x5c8]         ; 004cb3b2
    FSUB float ptr [EBX + 0x5e0]        ; 004cb3b8
    FSTP float ptr [EBP + 0x2a]         ; 004cb3be
    FLD float ptr [EBX + 0x1504]        ; 004cb3c1
    FMUL float ptr [0x0058802a]         ; 004cb3c7 | FLOAT_0058802a
    LEA EAX,[EBP + 0x26]                ; 004cb3cd
    ADD ESP,0xc                         ; 004cb3d0
    FLD float ptr [0x0058802e]          ; 004cb3d3 | FLOAT_0058802e
    FLD float ptr [EBP + 0x2a]          ; 004cb3d9
    FMUL ST1                            ; 004cb3dc
    PUSH EAX                            ; 004cb3de
    LEA EAX,[EBP + 0x56]                ; 004cb3df
    FXCH ST2                            ; 004cb3e2
    FADD float ptr [EBX + 0x5e4]        ; 004cb3e4
    PUSH EAX                            ; 004cb3ea
    FADD float ptr [EBX + 0x5cc]        ; 004cb3eb
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004cb3f1
    FCHS                                ; 004cb3f4
    FMULP                               ; 004cb3f6
    PUSH EAX                            ; 004cb3f8
    FXCH                                ; 004cb3f9
    FSTP float ptr [EBP + 0x2a]         ; 004cb3fb
    FSTP float ptr [EBP + 0x2e]         ; 004cb3fe
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004cb401
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004cb406
    LEA EAX,[EBP + 0x56]                ; 004cb409
    PUSH EAX                            ; 004cb40c
    LEA EAX,[EBP + 0x32]                ; 004cb40d
    PUSH EAX                            ; 004cb410
    PUSH EBX                            ; 004cb411
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004cb412
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004cb417
    MOV EDX,dword ptr [0x005be368]      ; 004cb41a | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 004cb420 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004cb421
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004cb426
    LEA EAX,[EBP + 0xffffff72]          ; 004cb429
    PUSH EAX                            ; 004cb42f
    MOV EDI,0x3da3d70a                  ; 004cb430
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0 ; 004cb435
        ;   XREF to: 0048b6b0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0(SLaserInfo * this_ptr)
    MOV ECX,0x2                         ; 004cb43a
    MOV dword ptr [EBP + 0xffffff76],EDI ; 004cb43f
    MOV dword ptr [EBP + 0xffffff7a],ECX ; 004cb445
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x13f8] ; 004cb44b
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 004cb452
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1428] ; 004cb458
    MOV dword ptr [EBP + -0x7e],EAX     ; 004cb45f
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1458] ; 004cb462
    MOV dword ptr [EBP + -0x7a],EAX     ; 004cb469
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1488] ; 004cb46c
    MOV dword ptr [EBP + 0xffffff72],EAX ; 004cb473
    XOR EAX,EAX                         ; 004cb479
    ADD ESP,0x4                         ; 004cb47b
    MOV dword ptr [EBP + -0x76],EAX     ; 004cb47e
    MOV dword ptr [EBP + -0x72],EAX     ; 004cb481
    PUSH EAX                            ; 004cb484
    MOV EAX,dword ptr [EBP + 0xffffff72] ; 004cb485
    XOR EDX,EDX                         ; 004cb48b
    MOV dword ptr [EBP + -0x3a],EAX     ; 004cb48d
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 004cb490
    MOV dword ptr [EBP + -0x36],EDI     ; 004cb496
    MOV dword ptr [EBP + -0x2e],EAX     ; 004cb499
    MOV EAX,dword ptr [EBP + -0x7e]     ; 004cb49c
    MOV dword ptr [EBP + -0x32],ECX     ; 004cb49f
    MOV dword ptr [EBP + -0x2a],EAX     ; 004cb4a2
    MOV EAX,dword ptr [EBP + -0x7a]     ; 004cb4a5
    MOV dword ptr [EBP + -0x1e],EDX     ; 004cb4a8
    MOV dword ptr [EBP + -0x26],EAX     ; 004cb4ab
    MOV EAX,dword ptr [EBP + -0x6e]     ; 004cb4ae
    XOR ESI,ESI                         ; 004cb4b1
    MOV dword ptr [EBP + -0x1a],EAX     ; 004cb4b3
    MOV EAX,dword ptr [EBP + -0x6a]     ; 004cb4b6
    MOV dword ptr [EBP + -0x22],ESI     ; 004cb4b9
    MOV dword ptr [EBP + -0x16],EAX     ; 004cb4bc
    MOV EAX,dword ptr [EBP + -0x66]     ; 004cb4bf
    MOV dword ptr [EBP + -0x12],EAX     ; 004cb4c2
    MOV EAX,dword ptr [EBP + -0x62]     ; 004cb4c5
    MOV dword ptr [EBP + -0xe],EAX      ; 004cb4c8
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004cb4cb
    MOV dword ptr [EBP + -0xa],EAX      ; 004cb4ce
    MOV EAX,dword ptr [EBP + -0x5a]     ; 004cb4d1
    MOV dword ptr [EBP + -0x6],EAX      ; 004cb4d4
    MOV EAX,dword ptr [EBP + -0x56]     ; 004cb4d7
    MOV dword ptr [EBP + -0x2],EAX      ; 004cb4da
    MOV EAX,dword ptr [EBP + -0x52]     ; 004cb4dd
    MOV dword ptr [EBP + 0x2],EAX       ; 004cb4e0
    MOV EAX,dword ptr [EBP + -0x4e]     ; 004cb4e3
    MOV dword ptr [EBP + 0x6],EAX       ; 004cb4e6
    MOV EAX,dword ptr [EBP + -0x4a]     ; 004cb4e9
    MOV dword ptr [EBP + 0xa],EAX       ; 004cb4ec
    MOV EAX,dword ptr [EBP + -0x46]     ; 004cb4ef
    MOV dword ptr [EBP + 0xe],EAX       ; 004cb4f2
    MOV EAX,dword ptr [EBP + -0x42]     ; 004cb4f5
    MOV dword ptr [EBP + 0x12],EAX      ; 004cb4f8
    MOV EAX,dword ptr [EBP + -0x3e]     ; 004cb4fb
    MOV dword ptr [EBP + 0x16],EAX      ; 004cb4fe
    LEA EAX,[EBP + -0x3a]               ; 004cb501
    PUSH EAX                            ; 004cb504
    LEA EAX,[EBP + 0x32]                ; 004cb505
    PUSH EAX                            ; 004cb508
    LEA EAX,[EBP + 0x4a]                ; 004cb509
    PUSH EAX                            ; 004cb50c
    MOV EAX,[0x005b80f0]                ; 004cb50d | g_CFireEffect_PTR_005b80f0
    PUSH EAX                            ; 004cb512
    CALL core_fire.cpp_CFireEffect_traceLaser_FUN_0048b6f0 ; 004cb513
        ;   XREF to: 0048b6f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_traceLaser_FUN_0048b6f0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * direction, SLaserInfo * laser_info, ...)
    ADD ESP,0x14                        ; 004cb518
    MOV EDX,dword ptr [0x005be368]      ; 004cb51b | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 004cb521 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004cb522
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004cb527
    LEA ESP,[EBP + 0x76]                ; 004cb52a
    POP EBP                             ; 004cb52d
    POP EDI                             ; 004cb52e
    POP ESI                             ; 004cb52f
    POP EBX                             ; 004cb530
    RET                                 ; 004cb531
    PUSH ESI                            ; 004cb532
        ;   Label: LAB_004cb532
    MOV EAX,0x1                         ; 004cb533
    PUSH EBX                            ; 004cb538
    MOV dword ptr [EBP + 0x72],EAX      ; 004cb539
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0 ; 004cb53c
        ;   XREF to: 004cb8f0 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(CMansionPuzzleCircle * this_ptr, int panel_index)
    MOV EDX,EAX                         ; 004cb541
    SHL EAX,0x2                         ; 004cb543
    SUB EAX,EDX                         ; 004cb546
    SHL EAX,0x3                         ; 004cb548
    ADD EAX,EDX                         ; 004cb54b
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004cb54d
    SHL EAX,0x2                         ; 004cb550
    ADD EAX,EDX                         ; 004cb553
    MOV ECX,dword ptr [EAX]             ; 004cb555
    ADD ESP,0x8                         ; 004cb557
    TEST ECX,ECX                        ; 004cb55a
    JZ 0x004cb317                       ; 004cb55c
        ;   XREF to: 004cb317 (CONDITIONAL_JUMP)  ; LAB_004cb317
    FLD float ptr [EAX + 0x8]           ; 004cb562
    FLDZ                                ; 004cb565
    FCOMPP                              ; 004cb567
    FNSTSW AX                           ; 004cb569
    SAHF                                ; 004cb56b
    JNC 0x004cb317                      ; 004cb56c
        ;   XREF to: 004cb317 (CONDITIONAL_JUMP)  ; LAB_004cb317
    FLD float ptr [EBX + ESI*0x4 + 0x1488] ; 004cb572
        ;   Label: LAB_004cb572
    FSUB float ptr [EBP + 0x92]         ; 004cb579
    JMP 0x004cb32e                      ; 004cb57f
        ;   XREF to: 004cb32e (UNCONDITIONAL_JUMP)  ; LAB_004cb32e
    MOV dword ptr [EDX + 0x1488],0x0    ; 004cb584
        ;   Label: LAB_004cb584
    LEA ESP,[EBP + 0x76]                ; 004cb58e
    POP EBP                             ; 004cb591
    POP EDI                             ; 004cb592
    POP ESI                             ; 004cb593
    POP EBX                             ; 004cb594
    RET                                 ; 004cb595

