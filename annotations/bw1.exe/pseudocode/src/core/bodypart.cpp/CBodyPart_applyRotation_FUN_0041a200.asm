; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a200(CBodyPart *this_ptr,CVector3f *euler_angles)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler_angles
; Local Variables:
; undefined        Stack[-0x200]:1  local_200
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x140]:1  local_140
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
;   core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041a700 at 0041aa79
;
; Referenced Globals:
;   undefined4 DAT_005d44e1
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408b40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f700
;   core_xform.cpp_FUN_005b5620
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005b5dd0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a200
        ;   Label: core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a200
    PUSH ESI                            ; 0041a201
    PUSH EDI                            ; 0041a202
    PUSH EBP                            ; 0041a203
    SUB ESP,0x1f0                       ; 0041a204
    MOV EDX,dword ptr [ESP + 0x208]     ; 0041a20a
    PUSH EDX                            ; 0041a211
    LEA EAX,[ESP + 0x124]               ; 0041a212
    PUSH EAX                            ; 0041a219
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0041a21a
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041a21f
    FLD float ptr [ESP + 0x120]         ; 0041a222
    FMUL float ptr [0x005d44e1]         ; 0041a229 | DAT_005d44e1
    FLD float ptr [ESP + 0x124]         ; 0041a22f
    FMUL float ptr [0x005d44e1]         ; 0041a236 | DAT_005d44e1
    FLD float ptr [ESP + 0x128]         ; 0041a23c
    FMUL float ptr [0x005d44e1]         ; 0041a243 | DAT_005d44e1
    FLD float ptr [ESP + 0x12c]         ; 0041a249
    FMUL float ptr [0x005d44e1]         ; 0041a250 | DAT_005d44e1
    FLD float ptr [ESP + 0x130]         ; 0041a256
    FMUL float ptr [0x005d44e1]         ; 0041a25d | DAT_005d44e1
    FLD float ptr [ESP + 0x134]         ; 0041a263
    FMUL float ptr [0x005d44e1]         ; 0041a26a | DAT_005d44e1
    FLD float ptr [ESP + 0x138]         ; 0041a270
    FMUL float ptr [0x005d44e1]         ; 0041a277 | DAT_005d44e1
    FXCH ST6                            ; 0041a27d
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a27f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1d0]       ; 0041a284
    FLD float ptr [ESP + 0x13c]         ; 0041a28b
    FMUL float ptr [0x005d44e1]         ; 0041a292 | DAT_005d44e1
    FXCH ST5                            ; 0041a298
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a29a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1c4]       ; 0041a29f
    FLD float ptr [ESP + 0x140]         ; 0041a2a6
    FMUL float ptr [0x005d44e1]         ; 0041a2ad | DAT_005d44e1
    MOV EAX,dword ptr [ESP + 0x204]     ; 0041a2b3
    XOR EDI,EDI                         ; 0041a2ba
    MOV ECX,dword ptr [EAX + 0x174]     ; 0041a2bc
    FXCH ST4                            ; 0041a2c2
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a2c4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0041a2c9
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a2cb
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 0041a2d0
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a2d2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0041a2d7
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a2d9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST6                            ; 0041a2de
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a2e0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST5                            ; 0041a2e5
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a2e7
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST4                            ; 0041a2ec
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a2ee
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0041a2f3
    FISTP dword ptr [ESP + 0x1c8]       ; 0041a2f5
    FXCH                                ; 0041a2fc
    FISTP dword ptr [ESP + 0x1cc]       ; 0041a2fe
    FISTP dword ptr [ESP + 0x1dc]       ; 0041a305
    FXCH ST3                            ; 0041a30c
    FISTP dword ptr [ESP + 0x1e0]       ; 0041a30e
    FXCH                                ; 0041a315
    FISTP dword ptr [ESP + 0x1d4]       ; 0041a317
    FISTP dword ptr [ESP + 0x1d8]       ; 0041a31e
    FISTP dword ptr [ESP + 0x1e4]       ; 0041a325
    TEST ECX,ECX                        ; 0041a32c
    JLE 0x0041a420                      ; 0041a32e
        ;   XREF to: 0041a420 (CONDITIONAL_JUMP)  ; LAB_0041a420
    XOR ESI,ESI                         ; 0041a334
    MOV ECX,dword ptr [ESP + 0x204]     ; 0041a336
        ;   Label: LAB_0041a336
    MOV ECX,dword ptr [ECX + 0x178]     ; 0041a33d
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0041a343
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 0041a34a
    IMUL EDX                            ; 0041a34d
    SHRD EAX,EDX,0x10                   ; 0041a34f
    MOV EBX,EAX                         ; 0041a353
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 0041a355
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0041a359
    IMUL EDX                            ; 0041a360
    SHRD EAX,EDX,0x10                   ; 0041a362
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 0041a366
    ADD EBX,EAX                         ; 0041a36a
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0041a36c
    IMUL EDX                            ; 0041a373
    SHRD EAX,EDX,0x10                   ; 0041a375
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 0041a379
    LEA EBP,[EBX + EAX*0x1]             ; 0041a37c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0041a37f
    IMUL EDX                            ; 0041a386
    SHRD EAX,EDX,0x10                   ; 0041a388
    MOV EBX,EAX                         ; 0041a38c
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 0041a38e
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 0041a392
    IMUL EDX                            ; 0041a399
    SHRD EAX,EDX,0x10                   ; 0041a39b
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 0041a39f
    ADD EBX,EAX                         ; 0041a3a3
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0041a3a5
    IMUL EDX                            ; 0041a3ac
    SHRD EAX,EDX,0x10                   ; 0041a3ae
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 0041a3b2
    ADD EBX,EAX                         ; 0041a3b5
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0041a3b7
    MOV dword ptr [ESP + 0x1c0],EBX     ; 0041a3be
    IMUL EDX                            ; 0041a3c5
    SHRD EAX,EDX,0x10                   ; 0041a3c7
    MOV EBX,EAX                         ; 0041a3cb
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 0041a3cd
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0041a3d1
    IMUL EDX                            ; 0041a3d8
    SHRD EAX,EDX,0x10                   ; 0041a3da
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 0041a3de
    ADD EBX,EAX                         ; 0041a3e2
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 0041a3e4
    IMUL EDX                            ; 0041a3eb
    SHRD EAX,EDX,0x10                   ; 0041a3ed
    ADD EAX,EBX                         ; 0041a3f1
    MOV dword ptr [ECX + ESI*0x1],EBP   ; 0041a3f3
    MOV EDX,dword ptr [ESP + 0x1c0]     ; 0041a3f6
    MOV dword ptr [ECX + ESI*0x1 + 0x8],EAX ; 0041a3fd
    MOV EAX,dword ptr [ESP + 0x204]     ; 0041a401
    MOV dword ptr [ECX + ESI*0x1 + 0x4],EDX ; 0041a408
    INC EDI                             ; 0041a40c
    MOV EBX,dword ptr [EAX + 0x174]     ; 0041a40d
    ADD ESI,0xc                         ; 0041a413
    CMP EDI,EBX                         ; 0041a416
    JL 0x0041a336                       ; 0041a418
        ;   XREF to: 0041a336 (CONDITIONAL_JUMP)  ; LAB_0041a336
    MOV EAX,EAX                         ; 0041a41e
    MOV EBX,dword ptr [ESP + 0x204]     ; 0041a420
        ;   Label: LAB_0041a420
    ADD EBX,0x30                        ; 0041a427
    PUSH EBX                            ; 0041a42a
    PUSH 0x2c8af28                      ; 0041a42b | DAT_02c8af28
    LEA EAX,[ESP + 0xc8]                ; 0041a430
    PUSH EAX                            ; 0041a437
    CALL core_xform.cpp_FUN_005b5620    ; 0041a438
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041a43d
    MOV ESI,dword ptr [ESP + 0x208]     ; 0041a440
    PUSH ESI                            ; 0041a447
    PUSH 0x2c8af28                      ; 0041a448 | DAT_02c8af28
    LEA EAX,[ESP + 0x98]                ; 0041a44d
    PUSH EAX                            ; 0041a454
    CALL core_xform.cpp_FUN_005b5620    ; 0041a455
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041a45a
    LEA EAX,[ESP + 0x90]                ; 0041a45d
    PUSH EAX                            ; 0041a464
    LEA EAX,[ESP + 0xc4]                ; 0041a465
    PUSH EAX                            ; 0041a46c
    LEA ESI,[ESP + 0xf8]                ; 0041a46d
    LEA EDI,[ESP + 0x38]                ; 0041a474
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0041a478
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0041a47d
    LEA ESI,[ESP + 0xf8]                ; 0041a482
    ADD ESP,0x8                         ; 0041a489
    LEA EAX,[ESP + 0x30]                ; 0041a48c
    MOVSD.REP ES:EDI,ESI                ; 0041a490
    PUSH EAX                            ; 0041a492
    LEA ESI,[ESP + 0x170]               ; 0041a493
    LEA EDI,[ESP + 0x194]               ; 0041a49a
    CALL core_xform.cpp_matrixToEulerAnglesZYX_FUN_005b5dd0 ; 0041a4a1
        ;   XREF to: 005b5dd0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAnglesZYX_FUN_005b5dd0()
    LEA ESI,[ESP + 0x170]               ; 0041a4a6
    ADD ESP,0x4                         ; 0041a4ad
    LEA EAX,[ESP + 0x190]               ; 0041a4b0
    MOVSD ES:EDI,ESI                    ; 0041a4b7
    MOVSD ES:EDI,ESI                    ; 0041a4b8
    MOVSD ES:EDI,ESI                    ; 0041a4b9
    CMP EBX,EAX                         ; 0041a4ba
    JZ 0x0041a4db                       ; 0041a4bc
        ;   XREF to: 0041a4db (CONDITIONAL_JUMP)  ; LAB_0041a4db
    MOV EAX,dword ptr [ESP + 0x190]     ; 0041a4be
    MOV dword ptr [EBX],EAX             ; 0041a4c5
    MOV EAX,dword ptr [ESP + 0x194]     ; 0041a4c7
    MOV dword ptr [EBX + 0x4],EAX       ; 0041a4ce
    MOV EAX,dword ptr [ESP + 0x198]     ; 0041a4d1
    MOV dword ptr [EBX + 0x8],EAX       ; 0041a4d8
    MOV EDI,dword ptr [ESP + 0x204]     ; 0041a4db
        ;   Label: LAB_0041a4db
    PUSH EDI                            ; 0041a4e2
    XOR EBP,EBP                         ; 0041a4e3
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 0041a4e5
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EDI + 0x74c]     ; 0041a4ea
    ADD ESP,0x4                         ; 0041a4f0
    TEST EDX,EDX                        ; 0041a4f3
    JLE 0x0041a5ca                      ; 0041a4f5
        ;   XREF to: 0041a5ca (CONDITIONAL_JUMP)  ; LAB_0041a5ca
    LEA EBX,[EDI + 0x750]               ; 0041a4fb
    PUSH EBX                            ; 0041a501
        ;   Label: LAB_0041a501
    LEA EAX,[ESP + 0x124]               ; 0041a502
    LEA ESI,[ESP + 0x1ac]               ; 0041a509
    PUSH EAX                            ; 0041a510
    LEA EDI,[ESP + 0x168]               ; 0041a511
    MOV dword ptr [ESP + 0x1f0],EBX     ; 0041a518
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041a51f
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x1b0]               ; 0041a524
    ADD ESP,0x8                         ; 0041a52b
    LEA EAX,[ESP + 0x160]               ; 0041a52e
    MOVSD ES:EDI,ESI                    ; 0041a535
    MOVSD ES:EDI,ESI                    ; 0041a536
    MOVSD ES:EDI,ESI                    ; 0041a537
    CMP EBX,EAX                         ; 0041a538
    JZ 0x0041a559                       ; 0041a53a
        ;   XREF to: 0041a559 (CONDITIONAL_JUMP)  ; LAB_0041a559
    MOV EAX,dword ptr [ESP + 0x160]     ; 0041a53c
    MOV dword ptr [EBX],EAX             ; 0041a543
    MOV EAX,dword ptr [ESP + 0x164]     ; 0041a545
    MOV dword ptr [EBX + 0x4],EAX       ; 0041a54c
    MOV EAX,dword ptr [ESP + 0x168]     ; 0041a54f
    MOV dword ptr [EBX + 0x8],EAX       ; 0041a556
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 0041a559
        ;   Label: LAB_0041a559
    PUSH ECX                            ; 0041a560
    MOV ESI,dword ptr [ESP + 0x208]     ; 0041a561
    PUSH ESI                            ; 0041a568
    LEA ESI,[ESP + 0x1a4]               ; 0041a569
    LEA EDI,[ESP + 0x18c]               ; 0041a570
    CALL core_actor.cpp_FUN_00408b40    ; 0041a577
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x1a4]               ; 0041a57c
    ADD ESP,0x8                         ; 0041a583
    MOVSD ES:EDI,ESI                    ; 0041a586
    MOVSD ES:EDI,ESI                    ; 0041a587
    MOVSD ES:EDI,ESI                    ; 0041a588
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 0041a589
    MOV EAX,dword ptr [ESP + 0x184]     ; 0041a590
    MOV dword ptr [ECX + 0x2c],EAX      ; 0041a597
    MOV EAX,dword ptr [ESP + 0x188]     ; 0041a59a
    MOV dword ptr [ECX + 0x30],EAX      ; 0041a5a1
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0041a5a4
    MOV dword ptr [ECX + 0x34],EAX      ; 0041a5ab
    MOV EAX,dword ptr [ESP + 0x204]     ; 0041a5ae
    INC EBP                             ; 0041a5b5
    MOV EDI,dword ptr [EAX + 0x74c]     ; 0041a5b6
    ADD EBX,0x2b0                       ; 0041a5bc
    CMP EBP,EDI                         ; 0041a5c2
    JL 0x0041a501                       ; 0041a5c4
        ;   XREF to: 0041a501 (CONDITIONAL_JUMP)  ; LAB_0041a501
    MOV EAX,dword ptr [ESP + 0x204]     ; 0041a5ca
        ;   Label: LAB_0041a5ca
    XOR EBP,EBP                         ; 0041a5d1
    MOV EDX,dword ptr [EAX + 0x28c]     ; 0041a5d3
    MOV dword ptr [ESP + 0x1ec],EBP     ; 0041a5d9
    TEST EDX,EDX                        ; 0041a5e0
    JLE 0x0041a6eb                      ; 0041a5e2
        ;   XREF to: 0041a6eb (CONDITIONAL_JUMP)  ; LAB_0041a6eb
    LEA EBX,[EAX + 0x290]               ; 0041a5e8
    PUSH EBX                            ; 0041a5ee
        ;   Label: LAB_0041a5ee
    LEA EAX,[ESP + 0x124]               ; 0041a5ef
    LEA ESI,[ESP + 0x1b8]               ; 0041a5f6
    PUSH EAX                            ; 0041a5fd
    LEA EDI,[ESP + 0x180]               ; 0041a5fe
    MOV EBP,EBX                         ; 0041a605
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041a607
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x1bc]               ; 0041a60c
    ADD ESP,0x8                         ; 0041a613
    LEA EAX,[ESP + 0x178]               ; 0041a616
    MOVSD ES:EDI,ESI                    ; 0041a61d
    MOVSD ES:EDI,ESI                    ; 0041a61e
    MOVSD ES:EDI,ESI                    ; 0041a61f
    CMP EBX,EAX                         ; 0041a620
    JZ 0x0041a641                       ; 0041a622
        ;   XREF to: 0041a641 (CONDITIONAL_JUMP)  ; LAB_0041a641
    MOV EAX,dword ptr [ESP + 0x178]     ; 0041a624
    MOV dword ptr [EBX],EAX             ; 0041a62b
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0041a62d
    MOV dword ptr [EBX + 0x4],EAX       ; 0041a634
    MOV EAX,dword ptr [ESP + 0x180]     ; 0041a637
    MOV dword ptr [EBX + 0x8],EAX       ; 0041a63e
    ADD EBP,0xc                         ; 0041a641
        ;   Label: LAB_0041a641
    PUSH EBP                            ; 0041a644
    PUSH 0x2c8af28                      ; 0041a645 | DAT_02c8af28
    LEA EAX,[ESP + 0x68]                ; 0041a64a
    PUSH EAX                            ; 0041a64e
    CALL core_xform.cpp_FUN_005b5760    ; 0041a64f
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041a654
    LEA EAX,[ESP + 0x90]                ; 0041a657
    PUSH EAX                            ; 0041a65e
    LEA EAX,[ESP + 0x64]                ; 0041a65f
    PUSH EAX                            ; 0041a663
    LEA ESI,[ESP + 0x8]                 ; 0041a664
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0041a668
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    ADD ESP,0x8                         ; 0041a66d
    LEA EAX,[ESP + 0x90]                ; 0041a670
    PUSH EAX                            ; 0041a677
    LEA ESI,[ESP + 0x14c]               ; 0041a678
    LEA EDI,[ESP + 0x158]               ; 0041a67f
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 0041a686
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[ESP + 0x14c]               ; 0041a68b
    ADD ESP,0x4                         ; 0041a692
    LEA EAX,[ESP + 0x154]               ; 0041a695
    MOVSD ES:EDI,ESI                    ; 0041a69c
    MOVSD ES:EDI,ESI                    ; 0041a69d
    MOVSD ES:EDI,ESI                    ; 0041a69e
    CMP EBP,EAX                         ; 0041a69f
    JZ 0x0041a6c1                       ; 0041a6a1
        ;   XREF to: 0041a6c1 (CONDITIONAL_JUMP)  ; LAB_0041a6c1
    MOV EAX,dword ptr [ESP + 0x154]     ; 0041a6a3
    MOV dword ptr [EBP],EAX             ; 0041a6aa
    MOV EAX,dword ptr [ESP + 0x158]     ; 0041a6ad
    MOV dword ptr [EBP + 0x4],EAX       ; 0041a6b4
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0041a6b7
    MOV dword ptr [EBP + 0x8],EAX       ; 0041a6be
    MOV ECX,dword ptr [ESP + 0x1ec]     ; 0041a6c1
        ;   Label: LAB_0041a6c1
    MOV EDX,dword ptr [ESP + 0x204]     ; 0041a6c8
    ADD EBX,0x194                       ; 0041a6cf
    INC ECX                             ; 0041a6d5
    MOV ESI,dword ptr [EDX + 0x28c]     ; 0041a6d6
    MOV dword ptr [ESP + 0x1ec],ECX     ; 0041a6dc
    CMP ECX,ESI                         ; 0041a6e3
    JL 0x0041a5ee                       ; 0041a6e5
        ;   XREF to: 0041a5ee (CONDITIONAL_JUMP)  ; LAB_0041a5ee
    ADD ESP,0x1f0                       ; 0041a6eb
        ;   Label: LAB_0041a6eb
    POP EBP                             ; 0041a6f1
    POP EDI                             ; 0041a6f2
    POP ESI                             ; 0041a6f3
    POP EBX                             ; 0041a6f4
    RET                                 ; 0041a6f5

