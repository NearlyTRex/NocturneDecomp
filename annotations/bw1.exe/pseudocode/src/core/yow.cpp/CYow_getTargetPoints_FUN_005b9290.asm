; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_yow_cpp_CYow_getTargetPoints_FUN_005b9290(CYow *this_ptr,float *param_2)
;
; Parameters:
; CYow *           Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined1* switchdataD_005b9280 = 005b933b
;   undefined4 DAT_005fa3ac
;   undefined4 DAT_005fa3b4
;   undefined4 DAT_005fa3bc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9290
        ;   Label: core_yow.cpp_CYow_getTargetPoints_FUN_005b9290
    PUSH ESI                            ; 005b9291
    PUSH EDI                            ; 005b9292
    PUSH EBP                            ; 005b9293
    MOV EBP,ESP                         ; 005b9294
    SUB ESP,0x90                        ; 005b9296
    AND ESP,0xfffffff8                  ; 005b929c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005b929f
    PUSH EBX                            ; 005b92a2
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b92a3
    CALL dword ptr [EAX + 0x10c]        ; 005b92a9
    ADD ESP,0x4                         ; 005b92af
    TEST EAX,EAX                        ; 005b92b2
    JZ 0x005b92bf                       ; 005b92b4
        ;   XREF to: 005b92bf (CONDITIONAL_JUMP)  ; LAB_005b92bf
    XOR EAX,EAX                         ; 005b92b6
    MOV ESP,EBP                         ; 005b92b8
    POP EBP                             ; 005b92ba
    POP EDI                             ; 005b92bb
    POP ESI                             ; 005b92bc
    POP EBX                             ; 005b92bd
    RET                                 ; 005b92be
    MOV EDX,dword ptr [EBX + 0xc280]    ; 005b92bf
        ;   Label: LAB_005b92bf
    PUSH EDX                            ; 005b92c5
    LEA EAX,[EBX + 0x158]               ; 005b92c6
    PUSH EAX                            ; 005b92cc
    LEA ESI,[ESP + 0x74]                ; 005b92cd
    LEA EDI,[ESP + 0x50]                ; 005b92d1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 005b92d5
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x74]                ; 005b92da
    ADD ESP,0x8                         ; 005b92de
    LEA EAX,[ESP + 0x48]                ; 005b92e1
    MOV ECX,dword ptr [EBP + 0x18]      ; 005b92e5
    MOVSD ES:EDI,ESI                    ; 005b92e8
    MOVSD ES:EDI,ESI                    ; 005b92e9
    MOVSD ES:EDI,ESI                    ; 005b92ea
    CMP EAX,ECX                         ; 005b92eb
    JNZ 0x005b941f                      ; 005b92ed
        ;   XREF to: 005b941f (CONDITIONAL_JUMP)  ; LAB_005b941f
    MOV ESI,0x1                         ; 005b92f3
        ;   Label: LAB_005b92f3
    XOR EDI,EDI                         ; 005b92f8
    LEA EAX,[EBX + 0x158]               ; 005b92fa
    MOV dword ptr [ESP + 0x84],EDI      ; 005b9300
    MOV dword ptr [ESP + 0x88],EAX      ; 005b9307
    MOV dword ptr [ESP + 0x8c],ESI      ; 005b930e
    MOV EDX,dword ptr [ESP + 0x84]      ; 005b9315
        ;   Label: LAB_005b9315
    ADD EDX,dword ptr [EBX + 0x6c]      ; 005b931c
    MOV ESI,0x4                         ; 005b931f
    MOV EAX,EDX                         ; 005b9324
    SAR EDX,0x1f                        ; 005b9326
    IDIV ESI                            ; 005b9329
    CMP EDX,0x3                         ; 005b932b
    JA 0x005b93f9                       ; 005b932e
        ;   XREF to: 005b93f9 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5b9280]  ; 005b9334 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc270]    ; 005b933b
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005b9341
    JZ 0x005b93f9                       ; 005b9349
        ;   XREF to: 005b93f9 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 005b934f
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005b9350
    PUSH ESI                            ; 005b9357
    LEA ESI,[ESP + 0x8]                 ; 005b9358
    LEA EDI,[ESP + 0x68]                ; 005b935c
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 005b9360
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x8]                 ; 005b9365
    LEA EDX,[ESP + 0x68]                ; 005b9369
    ADD ESP,0x8                         ; 005b936d
    LEA EAX,[ESP + 0x24]                ; 005b9370
    MOVSD ES:EDI,ESI                    ; 005b9374
    MOVSD ES:EDI,ESI                    ; 005b9375
    MOVSD ES:EDI,ESI                    ; 005b9376
    CMP EAX,EDX                         ; 005b9377
    JZ 0x005b9393                       ; 005b9379
        ;   XREF to: 005b9393 (CONDITIONAL_JUMP)  ; LAB_005b9393
    MOV EAX,dword ptr [ESP + 0x60]      ; 005b937b
    MOV dword ptr [ESP + 0x24],EAX      ; 005b937f
    MOV EAX,dword ptr [ESP + 0x64]      ; 005b9383
    MOV dword ptr [ESP + 0x28],EAX      ; 005b9387
    MOV EAX,dword ptr [ESP + 0x68]      ; 005b938b
    MOV dword ptr [ESP + 0x2c],EAX      ; 005b938f
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005b9393
        ;   Label: LAB_005b9393
    FLD double ptr [0x005fa3ac]         ; 005b939b | DAT_005fa3ac
    FLD float ptr [ESP + 0x24]          ; 005b93a1
    FMUL ST1                            ; 005b93a5
    FLD float ptr [ESP + 0x28]          ; 005b93a7
    FMUL double ptr [0x005fa3b4]        ; 005b93ab | DAT_005fa3b4
    FLD float ptr [ESP + 0x48]          ; 005b93b1
    FMULP ST3                           ; 005b93b5
    FLD float ptr [ESP + 0x4c]          ; 005b93b7
    FMUL double ptr [0x005fa3bc]        ; 005b93bb | DAT_005fa3bc
    MOV EAX,dword ptr [EBP + 0x18]      ; 005b93c1
    FADDP                               ; 005b93c4
    FXCH ST2                            ; 005b93c6
    FADDP                               ; 005b93c8
    FXCH                                ; 005b93ca
    FSTP float ptr [ESP + 0x28]         ; 005b93cc
    ADD EDX,EAX                         ; 005b93d0
    LEA EAX,[ESP + 0x24]                ; 005b93d2
    FSTP float ptr [ESP + 0x24]         ; 005b93d6
        ;   Label: LAB_005b93d6
    CMP EDX,EAX                         ; 005b93da
    JZ 0x005b93f2                       ; 005b93dc
        ;   XREF to: 005b93f2 (CONDITIONAL_JUMP)  ; LAB_005b93f2
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b93de
    MOV dword ptr [EDX],EAX             ; 005b93e2
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b93e4
    MOV dword ptr [EDX + 0x4],EAX       ; 005b93e8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005b93eb
    MOV dword ptr [EDX + 0x8],EAX       ; 005b93ef
        ;   Label: LAB_005b93ef
    INC dword ptr [ESP + 0x8c]          ; 005b93f2
        ;   Label: LAB_005b93f2
    MOV ECX,dword ptr [ESP + 0x84]      ; 005b93f9
        ;   Label: default
    INC ECX                             ; 005b9400
    MOV dword ptr [ESP + 0x84],ECX      ; 005b9401
    CMP ECX,0x4                         ; 005b9408
    JL 0x005b9315                       ; 005b940b
        ;   XREF to: 005b9315 (CONDITIONAL_JUMP)  ; LAB_005b9315
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005b9411
    MOV ESP,EBP                         ; 005b9418
    POP EBP                             ; 005b941a
    POP EDI                             ; 005b941b
    POP ESI                             ; 005b941c
    POP EBX                             ; 005b941d
    RET                                 ; 005b941e
    MOV EAX,dword ptr [ESP + 0x48]      ; 005b941f
        ;   Label: LAB_005b941f
    MOV dword ptr [ECX],EAX             ; 005b9423
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005b9425
    MOV dword ptr [ECX + 0x4],EAX       ; 005b9429
    MOV EAX,dword ptr [ESP + 0x50]      ; 005b942c
    MOV dword ptr [ECX + 0x8],EAX       ; 005b9430
    JMP 0x005b92f3                      ; 005b9433
        ;   XREF to: 005b92f3 (UNCONDITIONAL_JUMP)  ; LAB_005b92f3
    MOV EAX,dword ptr [EBX + 0xc274]    ; 005b9438
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005b943e
    JZ 0x005b93f9                       ; 005b9446
        ;   XREF to: 005b93f9 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 005b9448
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005b9449
    PUSH EDX                            ; 005b9450
    LEA ESI,[ESP + 0x80]                ; 005b9451
    LEA EDI,[ESP + 0x20]                ; 005b9458
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 005b945c
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x80]                ; 005b9461
    LEA EAX,[ESP + 0x20]                ; 005b9468
    ADD ESP,0x8                         ; 005b946c
    LEA EDX,[ESP + 0x24]                ; 005b946f
    MOVSD ES:EDI,ESI                    ; 005b9473
    MOVSD ES:EDI,ESI                    ; 005b9474
    MOVSD ES:EDI,ESI                    ; 005b9475
    CMP EDX,EAX                         ; 005b9476
    JZ 0x005b9492                       ; 005b9478
        ;   XREF to: 005b9492 (CONDITIONAL_JUMP)  ; LAB_005b9492
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b947a
    MOV dword ptr [ESP + 0x24],EAX      ; 005b947e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b9482
    MOV dword ptr [ESP + 0x28],EAX      ; 005b9486
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b948a
    MOV dword ptr [ESP + 0x2c],EAX      ; 005b948e
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005b9492
        ;   Label: LAB_005b9492
    FLD double ptr [0x005fa3ac]         ; 005b949a | DAT_005fa3ac
    FLD float ptr [ESP + 0x24]          ; 005b94a0
    FMUL ST1                            ; 005b94a4
    FLD float ptr [ESP + 0x28]          ; 005b94a6
    FMUL double ptr [0x005fa3b4]        ; 005b94aa | DAT_005fa3b4
    FLD float ptr [ESP + 0x48]          ; 005b94b0
    FMULP ST3                           ; 005b94b4
    FLD float ptr [ESP + 0x4c]          ; 005b94b6
    FMUL double ptr [0x005fa3bc]        ; 005b94ba | DAT_005fa3bc
    MOV ESI,dword ptr [EBP + 0x18]      ; 005b94c0
    LEA EAX,[ESP + 0x24]                ; 005b94c3
    FADDP                               ; 005b94c7
    FXCH ST2                            ; 005b94c9
    FADDP                               ; 005b94cb
    FXCH                                ; 005b94cd
    FSTP float ptr [ESP + 0x28]         ; 005b94cf
    ADD EDX,ESI                         ; 005b94d3
    JMP 0x005b93d6                      ; 005b94d5
        ;   XREF to: 005b93d6 (UNCONDITIONAL_JUMP)  ; LAB_005b93d6
    MOV EAX,dword ptr [EBX + 0xc278]    ; 005b94da
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005b94e0
    JZ 0x005b93f9                       ; 005b94e8
        ;   XREF to: 005b93f9 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 005b94ee
    MOV EDI,dword ptr [ESP + 0x8c]      ; 005b94ef
    PUSH EDI                            ; 005b94f6
    LEA ESI,[ESP + 0x44]                ; 005b94f7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 005b94fb
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 005b9500
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005b9503
    LEA EDI,[ESP + 0x54]                ; 005b950b
    LEA ESI,[ESP + 0x3c]                ; 005b950f
    MOV ECX,dword ptr [EBP + 0x18]      ; 005b9513
    LEA EAX,[ESP + 0x54]                ; 005b9516
    ADD EDX,ECX                         ; 005b951a
    MOVSD ES:EDI,ESI                    ; 005b951c
    MOVSD ES:EDI,ESI                    ; 005b951d
    MOVSD ES:EDI,ESI                    ; 005b951e
    CMP EDX,EAX                         ; 005b951f
    JZ 0x005b93f2                       ; 005b9521
        ;   XREF to: 005b93f2 (CONDITIONAL_JUMP)  ; LAB_005b93f2
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b9527
    MOV dword ptr [EDX],EAX             ; 005b952b
    MOV EAX,dword ptr [ESP + 0x58]      ; 005b952d
    MOV dword ptr [EDX + 0x4],EAX       ; 005b9531
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005b9534
    JMP 0x005b93ef                      ; 005b9538
        ;   XREF to: 005b93ef (UNCONDITIONAL_JUMP)  ; LAB_005b93ef
    MOV EAX,dword ptr [EBX + 0xc27c]    ; 005b953d
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005b9543
    JZ 0x005b93f9                       ; 005b954b
        ;   XREF to: 005b93f9 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 005b9551
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005b9552
    PUSH ESI                            ; 005b9559
    LEA ESI,[ESP + 0x14]                ; 005b955a
    LEA EDI,[ESP + 0x38]                ; 005b955e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 005b9562
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x14]                ; 005b9567
    ADD ESP,0x8                         ; 005b956b
    MOVSD ES:EDI,ESI                    ; 005b956e
    MOVSD ES:EDI,ESI                    ; 005b956f
    MOVSD ES:EDI,ESI                    ; 005b9570
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005b9571
    ADD EDX,dword ptr [EBP + 0x18]      ; 005b9579
    LEA EAX,[ESP + 0x30]                ; 005b957c
    CMP EDX,EAX                         ; 005b9580
    JZ 0x005b93f2                       ; 005b9582
        ;   XREF to: 005b93f2 (CONDITIONAL_JUMP)  ; LAB_005b93f2
    MOV EAX,dword ptr [ESP + 0x30]      ; 005b9588
    MOV dword ptr [EDX],EAX             ; 005b958c
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b958e
    MOV dword ptr [EDX + 0x4],EAX       ; 005b9592
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b9595
    JMP 0x005b93ef                      ; 005b9599
        ;   XREF to: 005b93ef (UNCONDITIONAL_JUMP)  ; LAB_005b93ef

