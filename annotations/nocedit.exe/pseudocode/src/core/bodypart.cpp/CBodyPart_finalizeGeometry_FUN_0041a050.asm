; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3i        Stack[-0x60]:12  local_60
; CVector3i        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; SBodyPartFire *  Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[16]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00415dd0 at 00415ff7
;   core_batman.cpp_CBatman_processDismemberment_FUN_00417660 at 00417804
;   core_bodypart.cpp_CBodyPart_archive_FUN_00419880 at 00419bb1
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b4b6
;   core_bride.cpp_CBride_processDismemberment_FUN_00424600 at 00424732
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 at 0042bd1d
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_004448c0 at 00444a4c
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_00485b20 at 00485b7c
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004e5530 at 004e56b6
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004e8520 at 004e86bf
;   ... and 6 more
;
; Referenced Globals:
;   double DOUBLE_00615e34 = 0.00390625
;   double DOUBLE_00615e3c = 65535
;   UVector3 g_ZeroVector
;   undefined4 g_ZeroVector+4
;   undefined4 g_ZeroVector+8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
;   core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_0041b070
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a050
        ;   Label: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050
    PUSH ESI                            ; 0041a051
    PUSH EDI                            ; 0041a052
    PUSH EBP                            ; 0041a053
    MOV EBP,ESP                         ; 0041a054
    SUB ESP,0x8c                        ; 0041a056
    AND ESP,0xfffffff8                  ; 0041a05c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0041a05f
    CMP dword ptr [EDI + 0x174],0x3     ; 0041a062
    JL 0x0041a074                       ; 0041a069
        ;   XREF to: 0041a074 (CONDITIONAL_JUMP)  ; LAB_0041a074
    CMP dword ptr [EDI + 0x180],0x1     ; 0041a06b
    JGE 0x0041a0d4                      ; 0041a072
        ;   XREF to: 0041a0d4 (CONDITIONAL_JUMP)  ; LAB_0041a0d4
    PUSH 0x0                            ; 0041a074
        ;   Label: LAB_0041a074
    PUSH 0x0                            ; 0041a076
    PUSH EDI                            ; 0041a078
    MOV dword ptr [EDI + 0x70],0x2      ; 0041a079
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0 ; 0041a080
        ;   XREF to: 004191d0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart * this_ptr, int vertex_count, int tri_count)
    LEA EAX,[EDI + 0x168]               ; 0041a085
    ADD ESP,0xc                         ; 0041a08b
    MOV EDX,EAX                         ; 0041a08e
    CMP EAX,0x3f87558                   ; 0041a090 | g_ZeroVector
    JZ 0x0041a0b1                       ; 0041a095
        ;   XREF to: 0041a0b1 (CONDITIONAL_JUMP)  ; LAB_0041a0b1
    MOV ECX,dword ptr [0x03f87558]      ; 0041a097 | g_ZeroVector
    MOV dword ptr [EAX],ECX             ; 0041a09d
    MOV ECX,dword ptr [0x03f8755c]      ; 0041a09f | g_ZeroVector+4
    MOV dword ptr [EAX + 0x4],ECX       ; 0041a0a5
    MOV ECX,dword ptr [0x03f87560]      ; 0041a0a8 | g_ZeroVector+8
    MOV dword ptr [EAX + 0x8],ECX       ; 0041a0ae
    ADD EDI,0x15c                       ; 0041a0b1
        ;   Label: LAB_0041a0b1
    CMP EDI,EDX                         ; 0041a0b7
    JNZ 0x0041a0c2                      ; 0041a0b9
        ;   XREF to: 0041a0c2 (CONDITIONAL_JUMP)  ; LAB_0041a0c2
    MOV ESP,EBP                         ; 0041a0bb
        ;   Label: LAB_0041a0bb
    POP EBP                             ; 0041a0bd
    POP EDI                             ; 0041a0be
    POP ESI                             ; 0041a0bf
    POP EBX                             ; 0041a0c0
    RET                                 ; 0041a0c1
    MOV EAX,dword ptr [EDX]             ; 0041a0c2
        ;   Label: LAB_0041a0c2
    MOV dword ptr [EDI],EAX             ; 0041a0c4
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041a0c6
    MOV dword ptr [EDI + 0x4],EAX       ; 0041a0c9
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041a0cc
    MOV dword ptr [EDI + 0x8],EAX       ; 0041a0cf
    JMP 0x0041a0bb                      ; 0041a0d2
        ;   XREF to: 0041a0bb (UNCONDITIONAL_JUMP)  ; LAB_0041a0bb
    LEA EAX,[ESP + 0x40]                ; 0041a0d4
        ;   Label: LAB_0041a0d4
    PUSH EAX                            ; 0041a0d8
    LEA EAX,[ESP + 0x50]                ; 0041a0d9
    PUSH EAX                            ; 0041a0dd
    PUSH EDI                            ; 0041a0de
    CALL core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40 ; 0041a0df
        ;   XREF to: 0041aa40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40(CBodyPart * this_ptr, CVector3i * out_bbox_min, CVector3i * out_bbox_max)
    ADD ESP,0xc                         ; 0041a0e4
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0041a0e7
    MOV EBX,dword ptr [ESP + 0x40]      ; 0041a0eb
    ADD EDX,EBX                         ; 0041a0ef
    MOV EAX,EDX                         ; 0041a0f1
    SAR EDX,0x1f                        ; 0041a0f3
    SUB EAX,EDX                         ; 0041a0f6
    SAR EAX,0x1                         ; 0041a0f8
    MOV EDX,dword ptr [ESP + 0x50]      ; 0041a0fa
    MOV dword ptr [ESP + 0x24],EAX      ; 0041a0fe
    MOV ESI,EAX                         ; 0041a102
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041a104
    ADD EDX,EAX                         ; 0041a108
    MOV EAX,EDX                         ; 0041a10a
    SAR EDX,0x1f                        ; 0041a10c
    SUB EAX,EDX                         ; 0041a10f
    SAR EAX,0x1                         ; 0041a111
    MOV ECX,dword ptr [ESP + 0x48]      ; 0041a113
    MOV EDX,dword ptr [ESP + 0x54]      ; 0041a117
    ADD EDX,ECX                         ; 0041a11b
    MOV EBX,EAX                         ; 0041a11d
    MOV EAX,EDX                         ; 0041a11f
    SAR EDX,0x1f                        ; 0041a121
    SUB EAX,EDX                         ; 0041a124
    SAR EAX,0x1                         ; 0041a126
    NEG ESI                             ; 0041a128
    MOV dword ptr [ESP + 0x24],ESI      ; 0041a12a
    NEG EBX                             ; 0041a12e
    XOR ECX,ECX                         ; 0041a130
    MOV ESI,EAX                         ; 0041a132
    MOV dword ptr [ESP + 0x20],EAX      ; 0041a134
    NEG ESI                             ; 0041a138
    MOV EAX,dword ptr [EDI + 0x174]     ; 0041a13a
    MOV dword ptr [ESP + 0x20],ESI      ; 0041a140
    TEST EAX,EAX                        ; 0041a144
    JLE 0x0041a180                      ; 0041a146
        ;   XREF to: 0041a180 (CONDITIONAL_JUMP)  ; LAB_0041a180
    XOR EDX,EDX                         ; 0041a148
    MOV EAX,dword ptr [EDI + 0x178]     ; 0041a14a
        ;   Label: LAB_0041a14a
    MOV ESI,dword ptr [ESP + 0x24]      ; 0041a150
    ADD dword ptr [EDX + EAX*0x1],ESI   ; 0041a154
    ADD dword ptr [EDX + EAX*0x1 + 0x4],EBX ; 0041a157
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041a15b
    ADD dword ptr [EDX + EAX*0x1 + 0x8],ESI ; 0041a15f
    INC ECX                             ; 0041a163
    MOV EAX,dword ptr [EDI + 0x174]     ; 0041a164
    ADD EDX,0xc                         ; 0041a16a
    CMP ECX,EAX                         ; 0041a16d
    JL 0x0041a14a                       ; 0041a16f
        ;   XREF to: 0041a14a (CONDITIONAL_JUMP)  ; LAB_0041a14a
    LEA EAX,[EAX]                       ; 0041a171
    LEA EDX,[EDX]                       ; 0041a177
    LEA EAX,[EAX]                       ; 0041a17d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041a180
        ;   Label: LAB_0041a180
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0041a184
    MOV ECX,dword ptr [ESP + 0x50]      ; 0041a188
    MOV ESI,dword ptr [ESP + 0x54]      ; 0041a18c
    ADD EDX,EAX                         ; 0041a190
    ADD ECX,EBX                         ; 0041a192
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041a194
    MOV dword ptr [ESP + 0x4c],EDX      ; 0041a198
    MOV EDX,dword ptr [ESP + 0x40]      ; 0041a19c
    ADD ESI,EAX                         ; 0041a1a0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041a1a2
    MOV dword ptr [ESP + 0x54],ESI      ; 0041a1a6
    MOV ESI,dword ptr [ESP + 0x48]      ; 0041a1aa
    ADD EDX,EAX                         ; 0041a1ae
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041a1b0
    MOV dword ptr [ESP + 0x50],ECX      ; 0041a1b4
    ADD ESI,EAX                         ; 0041a1b8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a1ba
    MOV ECX,dword ptr [ESP + 0x44]      ; 0041a1be
    MOV dword ptr [ESP + 0x84],EAX      ; 0041a1c2
    ADD ECX,EBX                         ; 0041a1c9
    FLD double ptr [0x00615e34]         ; 0041a1cb | DOUBLE_00615e34
    FILD dword ptr [ESP + 0x84]         ; 0041a1d1
    FMUL ST1                            ; 0041a1d8
    MOV dword ptr [ESP + 0x44],ECX      ; 0041a1da
    MOV dword ptr [ESP + 0x40],EDX      ; 0041a1de
    MOV dword ptr [ESP + 0x48],ESI      ; 0041a1e2
    FSTP float ptr [EDI + 0x15c]        ; 0041a1e6
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041a1ec
    MOV dword ptr [ESP + 0x84],EAX      ; 0041a1f0
    FILD dword ptr [ESP + 0x84]         ; 0041a1f7
    FMUL ST1                            ; 0041a1fe
    FSTP float ptr [EDI + 0x160]        ; 0041a200
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041a206
    MOV dword ptr [ESP + 0x84],EAX      ; 0041a20a
    FILD dword ptr [ESP + 0x84]         ; 0041a211
    FMUL ST1                            ; 0041a218
    FSTP float ptr [EDI + 0x164]        ; 0041a21a
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041a220
    MOV dword ptr [ESP + 0x84],EAX      ; 0041a224
    FILD dword ptr [ESP + 0x84]         ; 0041a22b
    FMUL ST1                            ; 0041a232
    FSTP float ptr [EDI + 0x168]        ; 0041a234
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041a23a
    MOV dword ptr [ESP + 0x84],EAX      ; 0041a23e
    MOV dword ptr [ESP + 0x88],EBX      ; 0041a245
    FILD dword ptr [ESP + 0x84]         ; 0041a24c
    FMUL ST1                            ; 0041a253
    FILD dword ptr [ESP + 0x88]         ; 0041a255
    FMUL ST2                            ; 0041a25c
    FXCH                                ; 0041a25e
    FSTP float ptr [EDI + 0x16c]        ; 0041a260
    MOV EAX,dword ptr [ESP + 0x48]      ; 0041a266
    MOV dword ptr [ESP + 0x88],EAX      ; 0041a26a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041a271
    FILD dword ptr [ESP + 0x88]         ; 0041a275
    MOV dword ptr [ESP + 0x88],EAX      ; 0041a27c
    FMUL ST2                            ; 0041a283
    FILD dword ptr [ESP + 0x88]         ; 0041a285
    FMUL ST3                            ; 0041a28c
    FXCH ST2                            ; 0041a28e
    FSTP float ptr [ESP + 0x84]         ; 0041a290
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041a297
    FSTP float ptr [EDI + 0x170]        ; 0041a29b
    MOV dword ptr [ESP + 0x88],EAX      ; 0041a2a1
    MOV EAX,dword ptr [ESP + 0x84]      ; 0041a2a8
    FSTP float ptr [ESP + 0x84]         ; 0041a2af
    MOV dword ptr [ESP + 0x38],EAX      ; 0041a2b6
    MOV EAX,dword ptr [ESP + 0x84]      ; 0041a2ba
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041a2c1
    LEA EAX,[ESP + 0x34]                ; 0041a2c5
    PUSH EAX                            ; 0041a2c9
    LEA EAX,[ESP + 0x5c]                ; 0041a2ca
    FILD dword ptr [ESP + 0x8c]         ; 0041a2ce
    PUSH EAX                            ; 0041a2d5
    FMULP                               ; 0041a2d6
    PUSH EDI                            ; 0041a2d8
    FSTP float ptr [ESP + 0x40]         ; 0041a2d9
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0041a2dd
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0041a2e2
    LEA EAX,[EDI + 0x20]                ; 0041a2e4
    FLD float ptr [EDX]                 ; 0041a2e7
    FSUBR float ptr [EAX]               ; 0041a2e9
    FSTP float ptr [EAX]                ; 0041a2eb
    FLD float ptr [EDX + 0x4]           ; 0041a2ed
    FSUBR float ptr [EAX + 0x4]         ; 0041a2f0
    FSTP float ptr [EAX + 0x4]          ; 0041a2f3
    FLD float ptr [EDX + 0x8]           ; 0041a2f6
    FSUBR float ptr [EAX + 0x8]         ; 0041a2f9
    ADD ESP,0xc                         ; 0041a2fc
    FSTP float ptr [EAX + 0x8]          ; 0041a2ff
    MOV EAX,dword ptr [EDI + 0x28c]     ; 0041a302
    XOR EDX,EDX                         ; 0041a308
    TEST EAX,EAX                        ; 0041a30a
    JLE 0x0041a350                      ; 0041a30c
        ;   XREF to: 0041a350 (CONDITIONAL_JUMP)  ; LAB_0041a350
    LEA EAX,[EDI + 0x290]               ; 0041a30e
    FLD float ptr [EAX]                 ; 0041a314
        ;   Label: LAB_0041a314
    FADD float ptr [ESP + 0x34]         ; 0041a316
    FLD float ptr [EAX + 0x4]           ; 0041a31a
    FXCH                                ; 0041a31d
    FSTP float ptr [EAX]                ; 0041a31f
    FADD float ptr [ESP + 0x38]         ; 0041a321
    FLD float ptr [EAX + 0x8]           ; 0041a325
    FXCH                                ; 0041a328
    FSTP float ptr [EAX + 0x4]          ; 0041a32a
    FADD float ptr [ESP + 0x3c]         ; 0041a32d
    INC EDX                             ; 0041a331
    FSTP float ptr [EAX + 0x8]          ; 0041a332
    MOV ECX,dword ptr [EDI + 0x28c]     ; 0041a335
    ADD EAX,0x194                       ; 0041a33b
    CMP EDX,ECX                         ; 0041a340
    JL 0x0041a314                       ; 0041a342
        ;   XREF to: 0041a314 (CONDITIONAL_JUMP)  ; LAB_0041a314
    LEA EAX,[EAX]                       ; 0041a344
    LEA EDX,[EDX]                       ; 0041a34a
    MOV EBX,dword ptr [EDI + 0x74c]     ; 0041a350
        ;   Label: LAB_0041a350
    XOR ESI,ESI                         ; 0041a356
    TEST EBX,EBX                        ; 0041a358
    JLE 0x0041a3e0                      ; 0041a35a
        ;   XREF to: 0041a3e0 (CONDITIONAL_JUMP)  ; LAB_0041a3e0
    LEA EAX,[EDI + 0x750]               ; 0041a360
    LEA EBX,[EDI + 0x77c]               ; 0041a366
    MOV dword ptr [ESP + 0x78],EAX      ; 0041a36c
    IMUL EAX,ESI,0x2b0                  ; 0041a370
        ;   Label: LAB_0041a370
    ADD EAX,dword ptr [ESP + 0x78]      ; 0041a376
    FLD float ptr [EAX]                 ; 0041a37a
    FADD float ptr [ESP + 0x34]         ; 0041a37c
    FLD float ptr [EAX + 0x4]           ; 0041a380
    FXCH                                ; 0041a383
    FSTP float ptr [EAX]                ; 0041a385
    FADD float ptr [ESP + 0x38]         ; 0041a387
    FLD float ptr [EAX + 0x8]           ; 0041a38b
    FXCH                                ; 0041a38e
    FSTP float ptr [EAX + 0x4]          ; 0041a390
    FADD float ptr [ESP + 0x3c]         ; 0041a393
    PUSH EAX                            ; 0041a397
    FSTP float ptr [EAX + 0x8]          ; 0041a398
    LEA EAX,[ESP + 0x68]                ; 0041a39b
    PUSH EAX                            ; 0041a39f
    PUSH EDI                            ; 0041a3a0
    ADD EBX,0x2b0                       ; 0041a3a1
    INC ESI                             ; 0041a3a7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041a3a8
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,dword ptr [EAX]             ; 0041a3ad
    MOV dword ptr [EBX + 0xfffffd50],EDX ; 0041a3af
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a3b5
    MOV dword ptr [EBX + 0xfffffd54],EDX ; 0041a3b8
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a3be
    MOV dword ptr [EBX + 0xfffffd58],EDX ; 0041a3c1
    MOV ECX,dword ptr [EDI + 0x74c]     ; 0041a3c7
    ADD ESP,0xc                         ; 0041a3cd
    CMP ESI,ECX                         ; 0041a3d0
    JL 0x0041a370                       ; 0041a3d2
        ;   XREF to: 0041a370 (CONDITIONAL_JUMP)  ; LAB_0041a370
    LEA EAX,[EAX]                       ; 0041a3d4
    LEA EDX,[EDX]                       ; 0041a3da
    MOV EDX,dword ptr [EDI + 0x174]     ; 0041a3e0
        ;   Label: LAB_0041a3e0
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041a3e6
    SUB EAX,EDX                         ; 0041a3ed
    SHL EAX,0x2                         ; 0041a3ef
    PUSH EAX                            ; 0041a3f2
    PUSH 0x0                            ; 0041a3f3
    MOV EBX,dword ptr [EDI + 0x17c]     ; 0041a3f5
    PUSH EBX                            ; 0041a3fb
    XOR ESI,ESI                         ; 0041a3fc
    CALL crt_memory.c_memset_FUN_005fde40 ; 0041a3fe
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0041a403
    MOV EAX,dword ptr [EDI + 0x180]     ; 0041a406
    MOV dword ptr [ESP + 0x80],ESI      ; 0041a40c
    TEST EAX,EAX                        ; 0041a413
    JLE 0x0041a499                      ; 0041a415
        ;   XREF to: 0041a499 (CONDITIONAL_JUMP)  ; LAB_0041a499
    MOV dword ptr [ESP + 0x7c],ESI      ; 0041a41b
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0041a41f
        ;   Label: LAB_0041a41f
    MOV EBX,dword ptr [EDI + 0x184]     ; 0041a423
    ADD EBX,EDX                         ; 0041a429
    MOV dword ptr [EBX + 0x4],0x3       ; 0041a42b
    PUSH EBX                            ; 0041a432
    MOV ECX,dword ptr [EDI + 0x178]     ; 0041a433
    PUSH ECX                            ; 0041a439
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0 ; 0041a43a
        ;   XREF to: 00501bc0 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0(CVector3i * vertex_data, SMRGLPrimitiveTriangle * texture)
    ADD ESP,0x8                         ; 0041a43f
    MOV ESI,dword ptr [EBX + 0x4]       ; 0041a442
    XOR EDX,EDX                         ; 0041a445
    TEST ESI,ESI                        ; 0041a447
    JLE 0x0041a475                      ; 0041a449
        ;   XREF to: 0041a475 (CONDITIONAL_JUMP)  ; LAB_0041a475
    MOV ECX,EBX                         ; 0041a44b
    IMUL ESI,dword ptr [ECX + 0x18],0xc ; 0041a44d
        ;   Label: LAB_0041a44d
    MOV EAX,dword ptr [EDI + 0x17c]     ; 0041a451
    ADD EAX,ESI                         ; 0041a457
    MOV ESI,dword ptr [EBX + 0x8]       ; 0041a459
    ADD dword ptr [EAX],ESI             ; 0041a45c
    MOV ESI,dword ptr [EBX + 0xc]       ; 0041a45e
    ADD dword ptr [EAX + 0x4],ESI       ; 0041a461
    MOV ESI,dword ptr [EBX + 0x10]      ; 0041a464
    ADD dword ptr [EAX + 0x8],ESI       ; 0041a467
    INC EDX                             ; 0041a46a
    MOV ESI,dword ptr [EBX + 0x4]       ; 0041a46b
    ADD ECX,0xc                         ; 0041a46e
    CMP EDX,ESI                         ; 0041a471
    JL 0x0041a44d                       ; 0041a473
        ;   XREF to: 0041a44d (CONDITIONAL_JUMP)  ; LAB_0041a44d
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0041a475
        ;   Label: LAB_0041a475
    MOV ECX,dword ptr [ESP + 0x80]      ; 0041a479
    MOV EBX,dword ptr [EDI + 0x180]     ; 0041a480
    ADD EDX,0x3c                        ; 0041a486
    INC ECX                             ; 0041a489
    MOV dword ptr [ESP + 0x7c],EDX      ; 0041a48a
    MOV dword ptr [ESP + 0x80],ECX      ; 0041a48e
    CMP ECX,EBX                         ; 0041a495
    JL 0x0041a41f                       ; 0041a497
        ;   XREF to: 0041a41f (CONDITIONAL_JUMP)  ; LAB_0041a41f
    MOV ESI,dword ptr [EDI + 0x174]     ; 0041a499
        ;   Label: LAB_0041a499
    XOR EBX,EBX                         ; 0041a49f
    TEST ESI,ESI                        ; 0041a4a1
    JLE 0x0041a53e                      ; 0041a4a3
        ;   XREF to: 0041a53e (CONDITIONAL_JUMP)  ; LAB_0041a53e
    XOR ECX,ECX                         ; 0041a4a9
    MOV EDX,dword ptr [EDI + 0x17c]     ; 0041a4ab
        ;   Label: LAB_0041a4ab
    ADD EDX,ECX                         ; 0041a4b1
    FILD dword ptr [EDX]                ; 0041a4b3
    FST double ptr [ESP + 0x18]         ; 0041a4b5
    FMUL double ptr [ESP + 0x18]        ; 0041a4b9
    FILD dword ptr [EDX + 0x4]          ; 0041a4bd
    FST double ptr [ESP + 0x10]         ; 0041a4c0
    FMUL double ptr [ESP + 0x10]        ; 0041a4c4
    FILD dword ptr [EDX + 0x8]          ; 0041a4c8
    FXCH                                ; 0041a4cb
    FADDP ST2,ST0                       ; 0041a4cd
    FST double ptr [ESP + 0x8]          ; 0041a4cf
    FMUL double ptr [ESP + 0x8]         ; 0041a4d3
    FADDP                               ; 0041a4d7
    FSQRT                               ; 0041a4d9
    FLDZ                                ; 0041a4db
    FXCH                                ; 0041a4dd
    FSTP double ptr [ESP]               ; 0041a4df
    FCOMP double ptr [ESP]              ; 0041a4e2
    FNSTSW AX                           ; 0041a4e5
    SAHF                                ; 0041a4e7
    JNC 0x0041a615                      ; 0041a4e8
        ;   XREF to: 0041a615 (CONDITIONAL_JUMP)  ; LAB_0041a615
    FLD double ptr [ESP + 0x18]         ; 0041a4ee
    FLD double ptr [0x00615e3c]         ; 0041a4f2 | DOUBLE_00615e3c
    FDIV double ptr [ESP]               ; 0041a4f8
    FXCH                                ; 0041a4fb
    FMUL ST1                            ; 0041a4fd
    FLD double ptr [ESP + 0x10]         ; 0041a4ff
    FMUL ST2                            ; 0041a503
    FLD double ptr [ESP + 0x8]          ; 0041a505
    FMULP ST3                           ; 0041a509
    FXCH                                ; 0041a50b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a50d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0041a512
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a514
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0041a519
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a51b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0041a520
    FISTP dword ptr [EDX]               ; 0041a522
    FXCH                                ; 0041a524
    FISTP dword ptr [EDX + 0x4]         ; 0041a526
    FISTP dword ptr [EDX + 0x8]         ; 0041a529
    INC EBX                             ; 0041a52c
        ;   Label: LAB_0041a52c
    MOV EAX,dword ptr [EDI + 0x174]     ; 0041a52d
    ADD ECX,0xc                         ; 0041a533
    CMP EBX,EAX                         ; 0041a536
    JL 0x0041a4ab                       ; 0041a538
        ;   XREF to: 0041a4ab (CONDITIONAL_JUMP)  ; LAB_0041a4ab
    PUSH EDI                            ; 0041a53e
        ;   Label: LAB_0041a53e
    CALL core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_0041b070 ; 0041a53f
        ;   XREF to: 0041b070 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_0041b070(CBodyPart * this_ptr)
    LEA EAX,[EDI + 0xd0c]               ; 0041a544
    LEA EDX,[EDI + 0x280]               ; 0041a54a
    ADD ESP,0x4                         ; 0041a550
    CMP EAX,EDX                         ; 0041a553
    JZ 0x0041a567                       ; 0041a555
        ;   XREF to: 0041a567 (CONDITIONAL_JUMP)  ; LAB_0041a567
    MOV ECX,dword ptr [EDX]             ; 0041a557
    MOV dword ptr [EAX],ECX             ; 0041a559
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041a55b
    MOV dword ptr [EAX + 0x4],ECX       ; 0041a55e
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041a561
    MOV dword ptr [EAX + 0x8],ECX       ; 0041a564
    LEA EAX,[EDI + 0x280]               ; 0041a567
        ;   Label: LAB_0041a567
    PUSH EAX                            ; 0041a56d
    LEA EAX,[ESP + 0x2c]                ; 0041a56e
    PUSH EAX                            ; 0041a572
    LEA EAX,[EDI + 0xce4]               ; 0041a573
    PUSH EAX                            ; 0041a579
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041a57a
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EDI + 0xd18]               ; 0041a57f
    ADD ESP,0xc                         ; 0041a585
    CMP EDX,EAX                         ; 0041a588
    JZ 0x0041a59c                       ; 0041a58a
        ;   XREF to: 0041a59c (CONDITIONAL_JUMP)  ; LAB_0041a59c
    MOV ECX,dword ptr [EAX]             ; 0041a58c
    MOV dword ptr [EDX],ECX             ; 0041a58e
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041a590
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a593
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041a596
    MOV dword ptr [EDX + 0x8],ECX       ; 0041a599
    PUSH 0x40490fdb                     ; 0041a59c
        ;   Label: LAB_0041a59c
    PUSH 0xc0490fdb                     ; 0041a5a1
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0041a5a6
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EDX + 0x8],0x0       ; 0041a615
        ;   Label: LAB_0041a615
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041a61c
    MOV dword ptr [EDX + 0x4],EAX       ; 0041a61f
    MOV dword ptr [EDX],EAX             ; 0041a622
    JMP 0x0041a52c                      ; 0041a624
        ;   XREF to: 0041a52c (UNCONDITIONAL_JUMP)  ; LAB_0041a52c

