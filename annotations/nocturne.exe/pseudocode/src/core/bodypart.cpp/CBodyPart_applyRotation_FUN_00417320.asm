; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00417320(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x1c4]:1  local_1c4
; undefined        Stack[-0x194]:1  local_194
; undefined        Stack[-0x164]:1  local_164
; undefined        Stack[-0x134]:1  local_134
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
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
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730 at 00417aa4
;
; Referenced Globals:
;   double DOUBLE_005790c2 = 5.92666793179754E-315
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417320
        ;   Label: core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320
    PUSH ESI                            ; 00417321
    PUSH EDI                            ; 00417322
    PUSH EBP                            ; 00417323
    SUB ESP,0x1b4                       ; 00417324
    MOV EBP,dword ptr [ESP + 0x1c8]     ; 0041732a
    MOV EDX,dword ptr [ESP + 0x1cc]     ; 00417331
    PUSH EDX                            ; 00417338
    LEA EAX,[ESP + 0x124]               ; 00417339
    PUSH EAX                            ; 00417340
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00417341
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 00417346
    FLD float ptr [ESP + 0x120]         ; 00417349
    FMUL float ptr [0x005790c2]         ; 00417350 | DOUBLE_005790c2
    FLD float ptr [ESP + 0x124]         ; 00417356
    FMUL float ptr [0x005790c2]         ; 0041735d | DOUBLE_005790c2
    FLD float ptr [ESP + 0x128]         ; 00417363
    FMUL float ptr [0x005790c2]         ; 0041736a | DOUBLE_005790c2
    FLD float ptr [ESP + 0x12c]         ; 00417370
    FMUL float ptr [0x005790c2]         ; 00417377 | DOUBLE_005790c2
    FLD float ptr [ESP + 0x130]         ; 0041737d
    FMUL float ptr [0x005790c2]         ; 00417384 | DOUBLE_005790c2
    FLD float ptr [ESP + 0x134]         ; 0041738a
    FMUL float ptr [0x005790c2]         ; 00417391 | DOUBLE_005790c2
    FLD float ptr [ESP + 0x138]         ; 00417397
    FMUL float ptr [0x005790c2]         ; 0041739e | DOUBLE_005790c2
    FXCH ST6                            ; 004173a4
    CALL crt_math.c_round_FUN_00563a30  ; 004173a6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x198]       ; 004173ab
    FLD float ptr [ESP + 0x13c]         ; 004173b2
    FMUL float ptr [0x005790c2]         ; 004173b9 | DOUBLE_005790c2
    FXCH ST5                            ; 004173bf
    CALL crt_math.c_round_FUN_00563a30  ; 004173c1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x19c]       ; 004173c6
    FLD float ptr [ESP + 0x140]         ; 004173cd
    FMUL float ptr [0x005790c2]         ; 004173d4 | DOUBLE_005790c2
    XOR EDI,EDI                         ; 004173da
    MOV ECX,dword ptr [EBP + 0x16c]     ; 004173dc
    FXCH ST4                            ; 004173e2
    CALL crt_math.c_round_FUN_00563a30  ; 004173e4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 004173e9
    CALL crt_math.c_round_FUN_00563a30  ; 004173eb
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 004173f0
    CALL crt_math.c_round_FUN_00563a30  ; 004173f2
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004173f7
    CALL crt_math.c_round_FUN_00563a30  ; 004173f9
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST6                            ; 004173fe
    CALL crt_math.c_round_FUN_00563a30  ; 00417400
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST5                            ; 00417405
    CALL crt_math.c_round_FUN_00563a30  ; 00417407
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST4                            ; 0041740c
    CALL crt_math.c_round_FUN_00563a30  ; 0041740e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 00417413
    FISTP dword ptr [ESP + 0x1a0]       ; 00417415
    FXCH                                ; 0041741c
    FISTP dword ptr [ESP + 0x18c]       ; 0041741e
    FISTP dword ptr [ESP + 0x190]       ; 00417425
    FXCH ST3                            ; 0041742c
    FISTP dword ptr [ESP + 0x1ac]       ; 0041742e
    FXCH                                ; 00417435
    FISTP dword ptr [ESP + 0x194]       ; 00417437
    FISTP dword ptr [ESP + 0x1a4]       ; 0041743e
    FISTP dword ptr [ESP + 0x1b0]       ; 00417445
    TEST ECX,ECX                        ; 0041744c
    JLE 0x00417540                      ; 0041744e
        ;   XREF to: 00417540 (CONDITIONAL_JUMP)  ; LAB_00417540
    XOR ESI,ESI                         ; 00417454
    MOV ECX,dword ptr [EBP + 0x170]     ; 00417456
        ;   Label: LAB_00417456
    MOV EAX,dword ptr [ESP + 0x198]     ; 0041745c
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 00417463
    IMUL EDX                            ; 00417466
    SHRD EAX,EDX,0x10                   ; 00417468
    MOV EBX,EAX                         ; 0041746c
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 0041746e
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00417472
    IMUL EDX                            ; 00417479
    SHRD EAX,EDX,0x10                   ; 0041747b
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 0041747f
    ADD EBX,EAX                         ; 00417483
    MOV EAX,dword ptr [ESP + 0x194]     ; 00417485
    IMUL EDX                            ; 0041748c
    SHRD EAX,EDX,0x10                   ; 0041748e
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 00417492
    ADD EBX,EAX                         ; 00417495
    MOV EAX,dword ptr [ESP + 0x19c]     ; 00417497
    MOV dword ptr [ESP + 0x184],EBX     ; 0041749e
    IMUL EDX                            ; 004174a5
    SHRD EAX,EDX,0x10                   ; 004174a7
    MOV EBX,EAX                         ; 004174ab
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 004174ad
    MOV EAX,dword ptr [ESP + 0x190]     ; 004174b1
    IMUL EDX                            ; 004174b8
    SHRD EAX,EDX,0x10                   ; 004174ba
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 004174be
    ADD EBX,EAX                         ; 004174c2
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 004174c4
    IMUL EDX                            ; 004174cb
    SHRD EAX,EDX,0x10                   ; 004174cd
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 004174d1
    ADD EBX,EAX                         ; 004174d4
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 004174d6
    MOV dword ptr [ESP + 0x188],EBX     ; 004174dd
    IMUL EDX                            ; 004174e4
    SHRD EAX,EDX,0x10                   ; 004174e6
    MOV EBX,EAX                         ; 004174ea
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 004174ec
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 004174f0
    IMUL EDX                            ; 004174f7
    SHRD EAX,EDX,0x10                   ; 004174f9
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 004174fd
    ADD EBX,EAX                         ; 00417501
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 00417503
    IMUL EDX                            ; 0041750a
    SHRD EAX,EDX,0x10                   ; 0041750c
    MOV EDX,dword ptr [ESP + 0x184]     ; 00417510
    ADD EAX,EBX                         ; 00417517
    MOV dword ptr [ECX + ESI*0x1],EDX   ; 00417519
    MOV dword ptr [ECX + ESI*0x1 + 0x8],EAX ; 0041751c
    MOV EDX,dword ptr [ESP + 0x188]     ; 00417520
    MOV dword ptr [ECX + ESI*0x1 + 0x4],EDX ; 00417527
    INC EDI                             ; 0041752b
    MOV EBX,dword ptr [EBP + 0x16c]     ; 0041752c
    ADD ESI,0xc                         ; 00417532
    CMP EDI,EBX                         ; 00417535
    JL 0x00417456                       ; 00417537
        ;   XREF to: 00417456 (CONDITIONAL_JUMP)  ; LAB_00417456
    LEA EAX,[EAX]                       ; 0041753d
    LEA EBX,[EBP + 0x30]                ; 00417540
        ;   Label: LAB_00417540
    PUSH EBX                            ; 00417543
    PUSH 0x2dd1184                      ; 00417544 | DAT_02dd1184
    LEA EAX,[ESP + 0x68]                ; 00417549
    PUSH EAX                            ; 0041754d
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 0041754e
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80()
    ADD ESP,0xc                         ; 00417553
    MOV ESI,dword ptr [ESP + 0x1cc]     ; 00417556
    PUSH ESI                            ; 0041755d
    PUSH 0x2dd1184                      ; 0041755e | DAT_02dd1184
    LEA EAX,[ESP + 0x98]                ; 00417563
    PUSH EAX                            ; 0041756a
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 0041756b
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80()
    ADD ESP,0xc                         ; 00417570
    LEA EAX,[ESP + 0x90]                ; 00417573
    PUSH EAX                            ; 0041757a
    LEA EAX,[ESP + 0x64]                ; 0041757b
    PUSH EAX                            ; 0041757f
    LEA ESI,[ESP + 0xf8]                ; 00417580
    LEA EDI,[ESP + 0xc8]                ; 00417587
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0041758e
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 00417593
    LEA EAX,[ESP + 0x178]               ; 00417596
    MOV ECX,0xc                         ; 0041759d
    PUSH EAX                            ; 004175a2
    LEA EAX,[ESP + 0xc4]                ; 004175a3
    LEA ESI,[ESP + 0xf4]                ; 004175aa
    PUSH EAX                            ; 004175b1
    MOVSD.REP ES:EDI,ESI                ; 004175b2
    CALL core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0 ; 004175b4
        ;   XREF to: 0055b6c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0()
    ADD ESP,0x8                         ; 004175b9
    CMP EBX,EAX                         ; 004175bc
    JZ 0x004175d0                       ; 004175be
        ;   XREF to: 004175d0 (CONDITIONAL_JUMP)  ; LAB_004175d0
    MOV EDX,dword ptr [EAX]             ; 004175c0
    MOV dword ptr [EBX],EDX             ; 004175c2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004175c4
    MOV dword ptr [EBX + 0x4],EDX       ; 004175c7
    MOV EDX,dword ptr [EAX + 0x8]       ; 004175ca
    MOV dword ptr [EBX + 0x8],EDX       ; 004175cd
    PUSH EBP                            ; 004175d0
        ;   Label: LAB_004175d0
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004175d1
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    XOR EDI,EDI                         ; 004175d6
    MOV EAX,dword ptr [EBP + 0x744]     ; 004175d8
    ADD ESP,0x4                         ; 004175de
    TEST EAX,EAX                        ; 004175e1
    JLE 0x00417650                      ; 004175e3
        ;   XREF to: 00417650 (CONDITIONAL_JUMP)  ; LAB_00417650
    LEA EBX,[EBP + 0x748]               ; 004175e5
    PUSH EBX                            ; 004175eb
        ;   Label: LAB_004175eb
    LEA EAX,[ESP + 0x164]               ; 004175ec
    PUSH EAX                            ; 004175f3
    LEA EAX,[ESP + 0x128]               ; 004175f4
    PUSH EAX                            ; 004175fb
    MOV ESI,EBX                         ; 004175fc
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 004175fe
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 00417603
    CMP EBX,EAX                         ; 00417606
    JZ 0x0041761a                       ; 00417608
        ;   XREF to: 0041761a (CONDITIONAL_JUMP)  ; LAB_0041761a
    MOV EDX,dword ptr [EAX]             ; 0041760a
    MOV dword ptr [EBX],EDX             ; 0041760c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041760e
    MOV dword ptr [EBX + 0x4],EDX       ; 00417611
    MOV EDX,dword ptr [EAX + 0x8]       ; 00417614
    MOV dword ptr [EBX + 0x8],EDX       ; 00417617
    PUSH ESI                            ; 0041761a
        ;   Label: LAB_0041761a
    LEA EAX,[ESP + 0x158]               ; 0041761b
    PUSH EAX                            ; 00417622
    PUSH EBP                            ; 00417623
    ADD EBX,0x2a8                       ; 00417624
    INC EDI                             ; 0041762a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0041762b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    LEA ECX,[ESI + 0x2c]                ; 00417630
    MOV EDX,dword ptr [EAX]             ; 00417633
    MOV dword ptr [ECX],EDX             ; 00417635
    MOV EDX,dword ptr [EAX + 0x4]       ; 00417637
    MOV dword ptr [ECX + 0x4],EDX       ; 0041763a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041763d
    MOV dword ptr [ECX + 0x8],EDX       ; 00417640
    MOV EDX,dword ptr [EBP + 0x744]     ; 00417643
    ADD ESP,0xc                         ; 00417649
    CMP EDI,EDX                         ; 0041764c
    JL 0x004175eb                       ; 0041764e
        ;   XREF to: 004175eb (CONDITIONAL_JUMP)  ; LAB_004175eb
    XOR ECX,ECX                         ; 00417650
        ;   Label: LAB_00417650
    MOV EBX,dword ptr [EBP + 0x284]     ; 00417652
    MOV dword ptr [ESP + 0x1a8],ECX     ; 00417658
    TEST EBX,EBX                        ; 0041765f
    JLE 0x0041771a                      ; 00417661
        ;   XREF to: 0041771a (CONDITIONAL_JUMP)  ; LAB_0041771a
    LEA EBX,[EBP + 0x288]               ; 00417667
    PUSH EBX                            ; 0041766d
        ;   Label: LAB_0041766d
    LEA EAX,[ESP + 0x170]               ; 0041766e
    PUSH EAX                            ; 00417675
    LEA EAX,[ESP + 0x128]               ; 00417676
    PUSH EAX                            ; 0041767d
    MOV EDI,EBX                         ; 0041767e
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00417680
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 00417685
    CMP EBX,EAX                         ; 00417688
    JZ 0x0041769c                       ; 0041768a
        ;   XREF to: 0041769c (CONDITIONAL_JUMP)  ; LAB_0041769c
    MOV EDX,dword ptr [EAX]             ; 0041768c
    MOV dword ptr [EBX],EDX             ; 0041768e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00417690
    MOV dword ptr [EBX + 0x4],EDX       ; 00417693
    MOV EDX,dword ptr [EAX + 0x8]       ; 00417696
    MOV dword ptr [EBX + 0x8],EDX       ; 00417699
    ADD EDI,0xc                         ; 0041769c
        ;   Label: LAB_0041769c
    PUSH EDI                            ; 0041769f
    PUSH 0x2dd1184                      ; 004176a0 | DAT_02dd1184
    LEA EAX,[ESP + 0x38]                ; 004176a5
    PUSH EAX                            ; 004176a9
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004176aa
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 004176af
    LEA EAX,[ESP + 0x90]                ; 004176b2
    PUSH EAX                            ; 004176b9
    LEA EAX,[ESP + 0x34]                ; 004176ba
    PUSH EAX                            ; 004176be
    LEA ESI,[ESP + 0x8]                 ; 004176bf
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004176c3
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 004176c8
    LEA EAX,[ESP + 0x148]               ; 004176cb
    PUSH EAX                            ; 004176d2
    LEA EAX,[ESP + 0x94]                ; 004176d3
    PUSH EAX                            ; 004176da
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 004176db
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_0055b180()
    ADD ESP,0x8                         ; 004176e0
    CMP EDI,EAX                         ; 004176e3
    JZ 0x004176f7                       ; 004176e5
        ;   XREF to: 004176f7 (CONDITIONAL_JUMP)  ; LAB_004176f7
    MOV EDX,dword ptr [EAX]             ; 004176e7
    MOV dword ptr [EDI],EDX             ; 004176e9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004176eb
    MOV dword ptr [EDI + 0x4],EDX       ; 004176ee
    MOV EDX,dword ptr [EAX + 0x8]       ; 004176f1
    MOV dword ptr [EDI + 0x8],EDX       ; 004176f4
    MOV ESI,dword ptr [ESP + 0x1a8]     ; 004176f7
        ;   Label: LAB_004176f7
    ADD EBX,0x194                       ; 004176fe
    INC ESI                             ; 00417704
    MOV EDI,dword ptr [EBP + 0x284]     ; 00417705
    MOV dword ptr [ESP + 0x1a8],ESI     ; 0041770b
    CMP ESI,EDI                         ; 00417712
    JL 0x0041766d                       ; 00417714
        ;   XREF to: 0041766d (CONDITIONAL_JUMP)  ; LAB_0041766d
    ADD ESP,0x1b4                       ; 0041771a
        ;   Label: LAB_0041771a
    POP EBP                             ; 00417720
    POP EDI                             ; 00417721
    POP ESI                             ; 00417722
    POP EBX                             ; 00417723
    RET                                 ; 00417724

