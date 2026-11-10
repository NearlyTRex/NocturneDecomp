; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_00544380(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x258]:4  local_258
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
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00542850 at 0054306b
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e7221
;   TerminatedCString s_CDeformableModel_compute_005e7236
;   undefined4 DAT_005fb9a0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00541540
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544380
        ;   Label: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380
    PUSH ESI                            ; 00544381
    PUSH EDI                            ; 00544382
    PUSH EBP                            ; 00544383
    MOV EBP,ESP                         ; 00544384
    SUB ESP,0x244                       ; 00544386
    AND ESP,0xfffffff8                  ; 0054438c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054438f
    CMP dword ptr [EAX + 0xc00],0x2     ; 00544392
    JGE 0x005443c7                      ; 00544399
        ;   XREF to: 005443c7 (CONDITIONAL_JUMP)  ; LAB_005443c7
    LEA EDX,[EAX + 0x190]               ; 0054439b
    MOV dword ptr [EAX + 0xc60],0x0     ; 005443a1
    ADD EAX,0x4                         ; 005443ab
        ;   Label: LAB_005443ab
    MOV dword ptr [EAX + 0x26f8],0x0    ; 005443ae
    CMP EAX,EDX                         ; 005443b8
    JNZ 0x005443ab                      ; 005443ba
        ;   XREF to: 005443ab (CONDITIONAL_JUMP)  ; LAB_005443ab
    LEA EAX,[EAX]                       ; 005443bc
    MOV ESP,EBP                         ; 005443c0
        ;   Label: LAB_005443c0
    POP EBP                             ; 005443c2
    POP EDI                             ; 005443c3
    POP ESI                             ; 005443c4
    POP EBX                             ; 005443c5
    RET                                 ; 005443c6
    PUSH EAX                            ; 005443c7
        ;   Label: LAB_005443c7
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00541540 ; 005443c8
        ;   XREF to: 00541540 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00541540(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005443cd
    MOV EBX,dword ptr [EBP + 0x14]      ; 005443d0
    PUSH EBX                            ; 005443d3
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0 ; 005443d4
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005443d9
    MOV EAX,dword ptr [EAX + 0x1d1f8]   ; 005443dc
    PUSH 0x22b4                         ; 005443e2
    MOV dword ptr [ESP + 0x234],EAX     ; 005443e7
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 005443ee
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 005443f3
    TEST EAX,EAX                        ; 005443f6
    JZ 0x00544403                       ; 005443f8
        ;   XREF to: 00544403 (CONDITIONAL_JUMP)  ; LAB_00544403
    PUSH EAX                            ; 005443fa
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0 ; 005443fb
        ;   XREF to: 00544cd0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00544400
    MOV dword ptr [ESP + 0x234],EAX     ; 00544403
        ;   Label: LAB_00544403
    TEST EAX,EAX                        ; 0054440a
    JNZ 0x00544431                      ; 0054440c
        ;   XREF to: 00544431 (CONDITIONAL_JUMP)  ; LAB_00544431
    MOV ESI,0x5e7221                    ; 0054440e | = "..\\core\\skeleton.cpp"
    MOV EDI,0x7e2                       ; 00544413
    PUSH 0x5e7236                       ; 00544418 | = "CDeformableModel::computePartDominant..."
    MOV dword ptr [0x01d046a0],ESI      ; 0054441d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00544423 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00544429
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054442e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00544431
        ;   Label: LAB_00544431
    PUSH EAX                            ; 00544434
    MOV EDX,dword ptr [ESP + 0x238]     ; 00544435
    PUSH EDX                            ; 0054443c
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0 ; 0054443d
        ;   XREF to: 005474b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 00544442
    MOV ECX,dword ptr [ESP + 0x234]     ; 00544445
    PUSH ECX                            ; 0054444c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60 ; 0054444d
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00544452
    MOV EBX,dword ptr [ESP + 0x234]     ; 00544455
    PUSH EBX                            ; 0054445c
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 0054445d
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00544462
    PUSH 0x0                            ; 00544465
    PUSH EBX                            ; 00544467
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 00544468
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054446d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00544470
    XOR EBX,EBX                         ; 00544473
    MOV EDX,dword ptr [EAX + 0xc00]     ; 00544475
    MOV dword ptr [ESP + 0x220],EBX     ; 0054447b
    TEST EDX,EDX                        ; 00544482
    JLE 0x00544832                      ; 00544484
        ;   XREF to: 00544832 (CONDITIONAL_JUMP)  ; LAB_00544832
    MOV dword ptr [ESP + 0x228],EAX     ; 0054448a
    MOV EAX,dword ptr [ESP + 0x228]     ; 00544491
        ;   Label: LAB_00544491
    MOV EAX,dword ptr [EAX + 0xc24]     ; 00544498
    ADD EAX,EBX                         ; 0054449e
    MOV ESI,dword ptr [ESP + 0x230]     ; 005444a0
    MOV dword ptr [ESP + 0x224],EAX     ; 005444a7
    TEST ESI,ESI                        ; 005444ae
    JLE 0x005444c8                      ; 005444b0
        ;   XREF to: 005444c8 (CONDITIONAL_JUMP)  ; LAB_005444c8
    LEA EDX,[ESI*0x4 + 0x0]             ; 005444b2
    XOR EAX,EAX                         ; 005444b9
    ADD EAX,0x4                         ; 005444bb
        ;   Label: LAB_005444bb
    XOR ECX,ECX                         ; 005444be
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 005444c0
    CMP EAX,EDX                         ; 005444c4
    JL 0x005444bb                       ; 005444c6
        ;   XREF to: 005444bb (CONDITIONAL_JUMP)  ; LAB_005444bb
    MOV ESI,dword ptr [ESP + 0x224]     ; 005444c8
        ;   Label: LAB_005444c8
    CMP EBX,ESI                         ; 005444cf
    JGE 0x005448ac                      ; 005444d1
        ;   XREF to: 005448ac (CONDITIONAL_JUMP)  ; LAB_005448ac
    IMUL EBX,EBX,0x12                   ; 005444d7
    IMUL EAX,ESI,0x12                   ; 005444da
    MOV dword ptr [ESP + 0x238],EBX     ; 005444dd
    MOV dword ptr [ESP + 0x22c],EAX     ; 005444e4
    MOV EDX,dword ptr [EBP + 0x14]      ; 005444eb
        ;   Label: LAB_005444eb
    MOV ESI,dword ptr [ESP + 0x238]     ; 005444ee
    MOV EDX,dword ptr [EDX + 0x7c]      ; 005444f5
    ADD EDX,ESI                         ; 005444f8
    XOR EAX,EAX                         ; 005444fa
    MOV AX,word ptr [EDX]               ; 005444fc
    IMUL ECX,EAX,0xc                    ; 005444ff
    MOV EAX,dword ptr [ESP + 0x234]     ; 00544502
    MOV EAX,dword ptr [EAX + 0x2234]    ; 00544509
    LEA EBX,[ESP + 0x1cc]               ; 0054450f
    ADD EAX,ECX                         ; 00544516
    FILD dword ptr [EAX]                ; 00544518
    FMUL float ptr [0x005fb9a0]         ; 0054451a | DAT_005fb9a0
    FSTP float ptr [EBX]                ; 00544520
    FILD dword ptr [EAX + 0x4]          ; 00544522
    FMUL float ptr [0x005fb9a0]         ; 00544525 | DAT_005fb9a0
    FSTP float ptr [EBX + 0x4]          ; 0054452b
    FILD dword ptr [EAX + 0x8]          ; 0054452e
    FMUL float ptr [0x005fb9a0]         ; 00544531 | DAT_005fb9a0
    FSTP float ptr [EBX + 0x8]          ; 00544537
    XOR EAX,EAX                         ; 0054453a
    MOV AX,word ptr [EDX + 0x2]         ; 0054453c
    IMUL EAX,EAX,0xc                    ; 00544540
    MOV ECX,dword ptr [ESP + 0x234]     ; 00544543
    MOV ECX,dword ptr [ECX + 0x2234]    ; 0054454a
    LEA EBX,[ESP + 0x1c0]               ; 00544550
    ADD EAX,ECX                         ; 00544557
    FILD dword ptr [EAX]                ; 00544559
    FMUL float ptr [0x005fb9a0]         ; 0054455b | DAT_005fb9a0
    FSTP float ptr [EBX]                ; 00544561
    FILD dword ptr [EAX + 0x4]          ; 00544563
    FMUL float ptr [0x005fb9a0]         ; 00544566 | DAT_005fb9a0
    FSTP float ptr [EBX + 0x4]          ; 0054456c
    FILD dword ptr [EAX + 0x8]          ; 0054456f
    FMUL float ptr [0x005fb9a0]         ; 00544572 | DAT_005fb9a0
    FSTP float ptr [EBX + 0x8]          ; 00544578
    XOR EAX,EAX                         ; 0054457b
    MOV AX,word ptr [EDX + 0x4]         ; 0054457d
    IMUL ECX,EAX,0xc                    ; 00544581
    MOV EAX,dword ptr [ESP + 0x234]     ; 00544584
    LEA EDI,[ESP + 0x1d8]               ; 0054458b
    MOV EAX,dword ptr [EAX + 0x2234]    ; 00544592
    LEA EBX,[ESP + 0x1f0]               ; 00544598
    ADD EAX,ECX                         ; 0054459f
    LEA ESI,[ESP + 0x190]               ; 005445a1
    FILD dword ptr [EAX]                ; 005445a8
    FMUL float ptr [0x005fb9a0]         ; 005445aa | DAT_005fb9a0
    FSTP float ptr [EBX]                ; 005445b0
    FILD dword ptr [EAX + 0x4]          ; 005445b2
    FMUL float ptr [0x005fb9a0]         ; 005445b5 | DAT_005fb9a0
    FSTP float ptr [EBX + 0x4]          ; 005445bb
    FILD dword ptr [EAX + 0x8]          ; 005445be
    FMUL float ptr [0x005fb9a0]         ; 005445c1 | DAT_005fb9a0
    FSTP float ptr [EBX + 0x8]          ; 005445c7
    FLD float ptr [ESP + 0x1f0]         ; 005445ca
    FLD float ptr [ESP + 0x1f4]         ; 005445d1
    FLD float ptr [ESP + 0x1f8]         ; 005445d8
    LEA EAX,[ESP + 0x1d8]               ; 005445df
    LEA ECX,[ESP + 0x208]               ; 005445e6
    FXCH ST2                            ; 005445ed
    FSUB float ptr [ESP + 0x1c0]        ; 005445ef
    FXCH                                ; 005445f6
    FSUB float ptr [ESP + 0x1c4]        ; 005445f8
    FXCH ST2                            ; 005445ff
    FSUB float ptr [ESP + 0x1c8]        ; 00544601
    FXCH                                ; 00544608
    FSTP float ptr [ESP + 0x190]        ; 0054460a
    FXCH                                ; 00544611
    FSTP float ptr [ESP + 0x194]        ; 00544613
    FSTP float ptr [ESP + 0x198]        ; 0054461a
    MOVSD ES:EDI,ESI                    ; 00544621
    MOVSD ES:EDI,ESI                    ; 00544622
    MOVSD ES:EDI,ESI                    ; 00544623
    CMP ECX,EAX                         ; 00544624
    JZ 0x00544652                       ; 00544626
        ;   XREF to: 00544652 (CONDITIONAL_JUMP)  ; LAB_00544652
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 00544628
    MOV dword ptr [ESP + 0x208],EAX     ; 0054462f
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00544636
    MOV dword ptr [ESP + 0x20c],EAX     ; 0054463d
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 00544644
    MOV dword ptr [ESP + 0x210],EAX     ; 0054464b
    FLD float ptr [ESP + 0x1c0]         ; 00544652
        ;   Label: LAB_00544652
    FLD float ptr [ESP + 0x1c4]         ; 00544659
    FLD float ptr [ESP + 0x1c8]         ; 00544660
    LEA EDI,[ESP + 0x1b4]               ; 00544667
    LEA ESI,[ESP + 0x214]               ; 0054466e
    LEA EAX,[ESP + 0x1b4]               ; 00544675
    LEA ECX,[ESP + 0x1e4]               ; 0054467c
    FXCH ST2                            ; 00544683
    FSUB float ptr [ESP + 0x1cc]        ; 00544685
    FXCH                                ; 0054468c
    FSUB float ptr [ESP + 0x1d0]        ; 0054468e
    FXCH ST2                            ; 00544695
    FSUB float ptr [ESP + 0x1d4]        ; 00544697
    FXCH ST2                            ; 0054469e
    FSTP float ptr [ESP + 0x218]        ; 005446a0
    FXCH                                ; 005446a7
    FSTP float ptr [ESP + 0x21c]        ; 005446a9
    FSTP float ptr [ESP + 0x214]        ; 005446b0
    MOVSD ES:EDI,ESI                    ; 005446b7
    MOVSD ES:EDI,ESI                    ; 005446b8
    MOVSD ES:EDI,ESI                    ; 005446b9
    CMP ECX,EAX                         ; 005446ba
    JZ 0x005446e8                       ; 005446bc
        ;   XREF to: 005446e8 (CONDITIONAL_JUMP)  ; LAB_005446e8
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005446be
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005446c5
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005446cc
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005446d3
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 005446da
    MOV dword ptr [ESP + 0x1ec],EAX     ; 005446e1
    FLD float ptr [ESP + 0x20c]         ; 005446e8
        ;   Label: LAB_005446e8
    FMUL float ptr [ESP + 0x1ec]        ; 005446ef
    FLD float ptr [ESP + 0x210]         ; 005446f6
    FMUL float ptr [ESP + 0x1e4]        ; 005446fd
    FLD float ptr [ESP + 0x208]         ; 00544704
    FMUL float ptr [ESP + 0x1e8]        ; 0054470b
    FLD float ptr [ESP + 0x210]         ; 00544712
    FMUL float ptr [ESP + 0x1e8]        ; 00544719
    FLD float ptr [ESP + 0x208]         ; 00544720
    FMUL float ptr [ESP + 0x1ec]        ; 00544727
    FLD float ptr [ESP + 0x20c]         ; 0054472e
    FMUL float ptr [ESP + 0x1e4]        ; 00544735
    LEA EDI,[ESP + 0x19c]               ; 0054473c
    LEA ESI,[ESP + 0x1fc]               ; 00544743
    LEA ECX,[ESP + 0x19c]               ; 0054474a
    LEA EAX,[ESP + 0x1a8]               ; 00544751
    FXCH ST2                            ; 00544758
    FSUBP ST5,ST0                       ; 0054475a
    FSUBP ST3,ST0                       ; 0054475c
    FSUBP                               ; 0054475e
    FXCH                                ; 00544760
    FSTP float ptr [ESP + 0x200]        ; 00544762
    FSTP float ptr [ESP + 0x204]        ; 00544769
    FSTP float ptr [ESP + 0x1fc]        ; 00544770
    MOVSD ES:EDI,ESI                    ; 00544777
    MOVSD ES:EDI,ESI                    ; 00544778
    MOVSD ES:EDI,ESI                    ; 00544779
    CMP EAX,ECX                         ; 0054477a
    JNZ 0x005448e9                      ; 0054477c
        ;   XREF to: 005448e9 (CONDITIONAL_JUMP)  ; LAB_005448e9
    FLD float ptr [ESP + 0x1ac]         ; 00544782
        ;   Label: LAB_00544782
    FMUL ST0                            ; 00544789
    FLD float ptr [ESP + 0x1a8]         ; 0054478b
    FMUL ST0                            ; 00544792
    FADDP                               ; 00544794
    FLD float ptr [ESP + 0x1b0]         ; 00544796
    FMUL ST0                            ; 0054479d
    FADDP                               ; 0054479f
    FSQRT                               ; 005447a1
    MOV EDI,EDX                         ; 005447a3
    ADD EDX,0x6                         ; 005447a5
    MOV dword ptr [ESP + 0x23c],EDX     ; 005447a8
    FSTP float ptr [ESP + 0x240]        ; 005447af
    XOR ESI,ESI                         ; 005447b6
        ;   Label: LAB_005447b6
    MOV SI,word ptr [EDI]               ; 005447b8
    IMUL ESI,ESI,0x34                   ; 005447bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005447be
    MOV EAX,dword ptr [EAX + 0x40]      ; 005447c1
    ADD ESI,EAX                         ; 005447c4
    MOV EDX,ESI                         ; 005447c6
    MOV ECX,ESI                         ; 005447c8
    XOR EAX,EAX                         ; 005447ca
    XOR EBX,EBX                         ; 005447cc
        ;   Label: LAB_005447cc
    MOV BL,byte ptr [ESI]               ; 005447ce
    CMP EAX,EBX                         ; 005447d0
    JGE 0x00544918                      ; 005447d2
        ;   XREF to: 00544918 (CONDITIONAL_JUMP)  ; LAB_00544918
    FLD float ptr [EDX + 0x4]           ; 005447d8
    XOR EBX,EBX                         ; 005447db
    FMUL float ptr [ESP + 0x240]        ; 005447dd
    MOV BL,byte ptr [ECX + 0x1]         ; 005447e4
    ADD EDX,0x4                         ; 005447e7
    INC ECX                             ; 005447ea
    FADD float ptr [ESP + EBX*0x4]      ; 005447eb
    INC EAX                             ; 005447ee
    FSTP float ptr [ESP + EBX*0x4]      ; 005447ef
    JMP 0x005447cc                      ; 005447f2
        ;   XREF to: 005447cc (UNCONDITIONAL_JUMP)  ; LAB_005447cc
    MOV EAX,dword ptr [ESP + 0x228]     ; 005447f4
        ;   Label: LAB_005447f4
    MOV ESI,dword ptr [ESP + 0x220]     ; 005447fb
    MOV EDX,dword ptr [EBP + 0x14]      ; 00544802
    LEA ECX,[EAX + 0x60]                ; 00544805
    INC ESI                             ; 00544808
    MOV dword ptr [EAX + 0xc60],EBX     ; 00544809
    MOV EBX,dword ptr [ESP + 0x224]     ; 0054480f
    MOV dword ptr [ESP + 0x228],ECX     ; 00544816
    MOV EDI,dword ptr [EDX + 0xc00]     ; 0054481d
    MOV dword ptr [ESP + 0x220],ESI     ; 00544823
    CMP ESI,EDI                         ; 0054482a
    JL 0x00544491                       ; 0054482c
        ;   XREF to: 00544491 (CONDITIONAL_JUMP)  ; LAB_00544491
    MOV EAX,dword ptr [ESP + 0x234]     ; 00544832
        ;   Label: LAB_00544832
    TEST EAX,EAX                        ; 00544839
    JZ 0x0054484f                       ; 0054483b
        ;   XREF to: 0054484f (CONDITIONAL_JUMP)  ; LAB_0054484f
    PUSH 0x2                            ; 0054483d
    MOV EDX,dword ptr [ESP + 0x238]     ; 0054483f
    MOV EAX,dword ptr [EAX + 0x50]      ; 00544846
    PUSH EDX                            ; 00544849
    CALL dword ptr [EAX]                ; 0054484a
    ADD ESP,0x8                         ; 0054484c
    MOV ECX,dword ptr [ESP + 0x230]     ; 0054484f
        ;   Label: LAB_0054484f
    XOR EBX,EBX                         ; 00544856
    TEST ECX,ECX                        ; 00544858
    JLE 0x005443c0                      ; 0054485a
        ;   XREF to: 005443c0 (CONDITIONAL_JUMP)  ; LAB_005443c0
    MOV ESI,dword ptr [EBP + 0x14]      ; 00544860
    MOV EDI,dword ptr [EBP + 0x14]      ; 00544863
    PUSH EBX                            ; 00544866
        ;   Label: LAB_00544866
    PUSH EDI                            ; 00544867
    CALL core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0 ; 00544868
        ;   XREF to: 005431b0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0(CDeformableModel * this_ptr, int bone_index)
    INC EBX                             ; 0054486d
    ADD ESP,0x8                         ; 0054486e
    MOV dword ptr [ESI + 0x26fc],EAX    ; 00544871
    MOV EAX,dword ptr [ESP + 0x230]     ; 00544877
    ADD ESI,0x4                         ; 0054487e
    CMP EBX,EAX                         ; 00544881
    JL 0x00544866                       ; 00544883
        ;   XREF to: 00544866 (CONDITIONAL_JUMP)  ; LAB_00544866
    MOV ESP,EBP                         ; 00544885
    POP EBP                             ; 00544887
    POP EDI                             ; 00544888
    POP ESI                             ; 00544889
    POP EBX                             ; 0054488a
    RET                                 ; 0054488b
    MOV EDI,dword ptr [ESP + 0x238]     ; 0054488c
        ;   Label: LAB_0054488c
    ADD EDI,0x12                        ; 00544893
    MOV EDX,dword ptr [ESP + 0x22c]     ; 00544896
    MOV dword ptr [ESP + 0x238],EDI     ; 0054489d
    CMP EDI,EDX                         ; 005448a4
    JL 0x005444eb                       ; 005448a6
        ;   XREF to: 005444eb (CONDITIONAL_JUMP)  ; LAB_005444eb
    MOV EDI,0x1                         ; 005448ac
        ;   Label: LAB_005448ac
    MOV ECX,dword ptr [ESP + 0x230]     ; 005448b1
    XOR EBX,EBX                         ; 005448b8
    CMP ECX,EDI                         ; 005448ba
    JLE 0x005447f4                      ; 005448bc
        ;   XREF to: 005447f4 (CONDITIONAL_JUMP)  ; LAB_005447f4
    MOV EDX,0x4                         ; 005448c2
    FLD float ptr [ESP + EDX*0x1]       ; 005448c7
        ;   Label: LAB_005448c7
    FCOMP float ptr [ESP + EBX*0x4]     ; 005448ca
    FNSTSW AX                           ; 005448cd
    SAHF                                ; 005448cf
    JBE 0x005448d4                      ; 005448d0
        ;   XREF to: 005448d4 (CONDITIONAL_JUMP)  ; LAB_005448d4
    MOV EBX,EDI                         ; 005448d2
    MOV EAX,dword ptr [ESP + 0x230]     ; 005448d4
        ;   Label: LAB_005448d4
    INC EDI                             ; 005448db
    ADD EDX,0x4                         ; 005448dc
    CMP EDI,EAX                         ; 005448df
    JGE 0x005447f4                      ; 005448e1
        ;   XREF to: 005447f4 (CONDITIONAL_JUMP)  ; LAB_005447f4
    JMP 0x005448c7                      ; 005448e7
        ;   XREF to: 005448c7 (UNCONDITIONAL_JUMP)  ; LAB_005448c7
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005448e9
        ;   Label: LAB_005448e9
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005448f0
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 005448f7
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005448fe
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 00544905
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0054490c
    JMP 0x00544782                      ; 00544913
        ;   XREF to: 00544782 (UNCONDITIONAL_JUMP)  ; LAB_00544782
    MOV EDX,dword ptr [ESP + 0x23c]     ; 00544918
        ;   Label: LAB_00544918
    ADD EDI,0x2                         ; 0054491f
    CMP EDI,EDX                         ; 00544922
    JZ 0x0054488c                       ; 00544924
        ;   XREF to: 0054488c (CONDITIONAL_JUMP)  ; LAB_0054488c
    JMP 0x005447b6                      ; 0054492a
        ;   XREF to: 005447b6 (UNCONDITIONAL_JUMP)  ; LAB_005447b6

