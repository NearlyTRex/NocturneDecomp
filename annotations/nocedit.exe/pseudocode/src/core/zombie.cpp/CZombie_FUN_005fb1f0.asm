; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_zombie.cpp_CZombie_FUN_005fb1f0()
;
; Local Variables:
; undefined1       Stack[-0x16c]:1  local_16c
; undefined1       Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined1       Stack[-0xc4]:1  local_c4
; undefined1       Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined1       Stack[-0x88]:1  local_88
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
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
;
; Referenced Globals:
;   TerminatedCString s_new_0065881d
;   float FLOAT_00658821 = 0.5
;   double DOUBLE_00658825 = 0.400000000000000
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CVector_ctor_FUN_00410340
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   crt_string.c_strnicmp_FUN_005ff070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fb1f0
        ;   Label: core_zombie.cpp_CZombie_FUN_005fb1f0
    PUSH EDI                            ; 005fb1f1
    PUSH EBP                            ; 005fb1f2
    MOV EBP,ESP                         ; 005fb1f3
    SUB ESP,0x160                       ; 005fb1f5
    SUB EBP,0x7a                        ; 005fb1fb
    MOV EBX,ESI                         ; 005fb1fe
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005fb200
    MOV EAX,EDX                         ; 005fb206
    SHL EAX,0x4                         ; 005fb208
    ADD EAX,EDX                         ; 005fb20b
    MOV EDX,dword ptr [EBP + 0x8a]      ; 005fb20d
    SHL EAX,0x2                         ; 005fb213
    ADD EAX,EDX                         ; 005fb216
    MOV ESI,dword ptr [EAX + 0x24b4]    ; 005fb218
    MOV EAX,dword ptr [EAX + 0x24ac]    ; 005fb21e
    MOV dword ptr [EBP + 0x76],EAX      ; 005fb224
    MOV EAX,dword ptr [EDX + 0xbed0]    ; 005fb227
    CMP EAX,0x1                         ; 005fb22d
    JC 0x005fb468                       ; 005fb230
        ;   XREF to: 005fb468 (CONDITIONAL_JUMP)  ; LAB_005fb468
    JA 0x005fb45f                       ; 005fb236
        ;   XREF to: 005fb45f (CONDITIONAL_JUMP)  ; LAB_005fb45f
    PUSH 0x3                            ; 005fb23c
        ;   Label: LAB_005fb23c
    MOV EAX,dword ptr [EBP + 0x8a]      ; 005fb23e
    PUSH 0x65881d                       ; 005fb244 | = "new"
    ADD EAX,0x23b8                      ; 005fb249
    PUSH EAX                            ; 005fb24e
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005fb24f
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005fb254
    TEST EAX,EAX                        ; 005fb257
    JNZ 0x005fb445                      ; 005fb259
        ;   XREF to: 005fb445 (CONDITIONAL_JUMP)  ; LAB_005fb445
    MOV ECX,0xbf7c6a90                  ; 005fb25f
    MOV EDI,0x3f7343c8                  ; 005fb264
    MOV EDX,0xbf93b0b4                  ; 005fb269
    MOV dword ptr [EBP + -0x6],ECX      ; 005fb26e
    MOV dword ptr [EBP + -0xa],EDI      ; 005fb271
    MOV dword ptr [EBP + -0xe],EDX      ; 005fb274
    LEA EAX,[EBP + -0xe]                ; 005fb277
        ;   Label: LAB_005fb277
    PUSH EAX                            ; 005fb27a
    PUSH 0x3f87558                      ; 005fb27b | g_ZeroVector
    LEA EAX,[EBP + 0xffffff1a]          ; 005fb280
    PUSH EAX                            ; 005fb286
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005fb287
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005fb28c
    LEA EAX,[EBP + -0x56]               ; 005fb28f
    PUSH EAX                            ; 005fb292
    MOV EDX,dword ptr [ESI + 0x154]     ; 005fb293
    PUSH ESI                            ; 005fb299
    CALL dword ptr [EDX + 0x14]         ; 005fb29a
    ADD ESP,0x8                         ; 005fb29d
    LEA EAX,[EBP + 0x6a]                ; 005fb2a0
    PUSH EAX                            ; 005fb2a3
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 005fb2a4
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [EBP + -0x56]         ; 005fb2a9
    FLD float ptr [EBP + -0x52]         ; 005fb2ac
    FLD float ptr [EBP + -0x4e]         ; 005fb2af
    LEA EAX,[EBP + 0xa]                 ; 005fb2b2
    ADD ESP,0x4                         ; 005fb2b5
    FXCH ST2                            ; 005fb2b8
    FADD float ptr [EBP + -0x4a]        ; 005fb2ba
    FXCH                                ; 005fb2bd
    FADD float ptr [EBP + -0x46]        ; 005fb2bf
    FXCH ST2                            ; 005fb2c2
    FADD float ptr [EBP + -0x42]        ; 005fb2c4
    PUSH EAX                            ; 005fb2c7
    FXCH                                ; 005fb2c8
    FSTP float ptr [EBP + 0x6a]         ; 005fb2ca
    FXCH                                ; 005fb2cd
    FSTP float ptr [EBP + 0x6e]         ; 005fb2cf
    FSTP float ptr [EBP + 0x72]         ; 005fb2d2
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 005fb2d5
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [0x00658821]          ; 005fb2da | FLOAT_00658821
    FLD float ptr [EBP + 0x6a]          ; 005fb2e0
    FMUL ST1                            ; 005fb2e3
    FLD float ptr [EBP + 0x6e]          ; 005fb2e5
    FMULP ST2                           ; 005fb2e8
    FLD float ptr [EBP + -0x4e]         ; 005fb2ea
    LEA EAX,[EBP + 0xa]                 ; 005fb2ed
    LEA EDX,[EBP + 0x22]                ; 005fb2f0
    ADD ESP,0x4                         ; 005fb2f3
    FADD double ptr [0x00658825]        ; 005fb2f6 | DOUBLE_00658825
    FXCH                                ; 005fb2fc
    FSTP float ptr [EBP + 0xa]          ; 005fb2fe
    FXCH                                ; 005fb301
    FSTP float ptr [EBP + 0xe]          ; 005fb303
    FSTP float ptr [EBP + 0x12]         ; 005fb306
    CMP EDX,EAX                         ; 005fb309
    JZ 0x005fb31f                       ; 005fb30b
        ;   XREF to: 005fb31f (CONDITIONAL_JUMP)  ; LAB_005fb31f
    MOV EAX,dword ptr [EBP + 0xa]       ; 005fb30d
    MOV dword ptr [EBP + 0x22],EAX      ; 005fb310
    MOV EAX,dword ptr [EBP + 0xe]       ; 005fb313
    MOV dword ptr [EBP + 0x26],EAX      ; 005fb316
    MOV EAX,dword ptr [EBP + 0x12]      ; 005fb319
    MOV dword ptr [EBP + 0x2a],EAX      ; 005fb31c
    MOV EDX,dword ptr [EBP + 0x76]      ; 005fb31f
        ;   Label: LAB_005fb31f
    LEA EAX,[EDX*0x4 + 0x0]             ; 005fb322
    MOV ESI,dword ptr [EBP + 0x8a]      ; 005fb329
    SUB EAX,EDX                         ; 005fb32f
    ADD ESI,0xfd8                       ; 005fb331
    SHL EAX,0x4                         ; 005fb337
    ADD EAX,ESI                         ; 005fb33a
    MOV ESI,dword ptr [EBP + 0x8a]      ; 005fb33c
    CMP EDX,dword ptr [ESI + 0xbf50]    ; 005fb342
    JNZ 0x005fb504                      ; 005fb348
        ;   XREF to: 005fb504 (CONDITIONAL_JUMP)  ; LAB_005fb504
    MOV EDX,0xbecccccd                  ; 005fb34e
    PUSH EAX                            ; 005fb353
    LEA EAX,[EBP + 0x16]                ; 005fb354
    XOR ECX,ECX                         ; 005fb357
    PUSH EAX                            ; 005fb359
    LEA EAX,[EBP + -0x2]                ; 005fb35a
    MOV dword ptr [EBP + 0x16],EDX      ; 005fb35d
    PUSH EAX                            ; 005fb360
    MOV dword ptr [EBP + 0x1a],ECX      ; 005fb361
    MOV dword ptr [EBP + 0x1e],ECX      ; 005fb364
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005fb367
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   Label: LAB_005fb367
    MOV EDX,EAX                         ; 005fb36c
    LEA EAX,[EBP + 0x46]                ; 005fb36e
    ADD ESP,0xc                         ; 005fb371
    CMP EAX,EDX                         ; 005fb374
    JZ 0x005fb389                       ; 005fb376
        ;   XREF to: 005fb389 (CONDITIONAL_JUMP)  ; LAB_005fb389
    MOV EAX,dword ptr [EDX]             ; 005fb378
    MOV dword ptr [EBP + 0x46],EAX      ; 005fb37a
    MOV EAX,dword ptr [EDX + 0x4]       ; 005fb37d
    MOV dword ptr [EBP + 0x4a],EAX      ; 005fb380
    MOV EAX,dword ptr [EDX + 0x8]       ; 005fb383
    MOV dword ptr [EBP + 0x4e],EAX      ; 005fb386
    MOV EDX,dword ptr [EBP + 0x76]      ; 005fb389
        ;   Label: LAB_005fb389
    LEA EAX,[EDX*0x4 + 0x0]             ; 005fb38c
    SUB EAX,EDX                         ; 005fb393
    MOV EDX,dword ptr [EBP + 0x8a]      ; 005fb395
    SHL EAX,0x4                         ; 005fb39b
    ADD EDX,0xfd8                       ; 005fb39e
    ADD EAX,EDX                         ; 005fb3a4
    PUSH EAX                            ; 005fb3a6
    LEA EAX,[EBP + 0xffffff1a]          ; 005fb3a7
    PUSH EAX                            ; 005fb3ad
    LEA ESI,[EBP + 0xffffff4a]          ; 005fb3ae
    LEA EDI,[EBP + 0xffffff7a]          ; 005fb3b4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005fb3ba
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 005fb3bf
    LEA EAX,[EBP + 0xffffff7a]          ; 005fb3c2
    MOV ECX,0xc                         ; 005fb3c8
    PUSH EAX                            ; 005fb3cd
    LEA EAX,[EBP + 0x22]                ; 005fb3ce
    LEA ESI,[EBP + 0xffffff4a]          ; 005fb3d1
    PUSH EAX                            ; 005fb3d7
    LEA EAX,[EBP + -0x26]               ; 005fb3d8
    MOVSD.REP ES:EDI,ESI                ; 005fb3db
    PUSH EAX                            ; 005fb3dd
    LEA ESI,[EBP + 0xffffff7a]          ; 005fb3de
    MOV EDI,EBX                         ; 005fb3e4
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005fb3e6
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EBP + 0x46]          ; 005fb3eb
    FLD float ptr [EBP + 0x4a]          ; 005fb3ee
    FLD float ptr [EBP + 0x4e]          ; 005fb3f1
    FLD float ptr [EBP + -0x7a]         ; 005fb3f4
    FLD float ptr [EBP + -0x6a]         ; 005fb3f7
    FLD float ptr [EBP + -0x5a]         ; 005fb3fa
    MOV ECX,0xc                         ; 005fb3fd
    FXCH ST5                            ; 005fb402
    FSUB float ptr [EAX]                ; 005fb404
    ADD ESP,0xc                         ; 005fb406
    FSTP float ptr [EBP + -0x1a]        ; 005fb409
    FXCH ST3                            ; 005fb40c
    FSUB float ptr [EAX + 0x4]          ; 005fb40e
    FXCH                                ; 005fb411
    FADD float ptr [EBP + -0x1a]        ; 005fb413
    FXCH                                ; 005fb416
    FSTP float ptr [EBP + -0x16]        ; 005fb418
    FXCH                                ; 005fb41b
    FSUB float ptr [EAX + 0x8]          ; 005fb41d
    FXCH ST2                            ; 005fb420
    FADD float ptr [EBP + -0x16]        ; 005fb422
    FXCH ST2                            ; 005fb425
    FSTP float ptr [EBP + -0x12]        ; 005fb427
    FSTP float ptr [EBP + -0x7a]        ; 005fb42a
    FXCH                                ; 005fb42d
    FADD float ptr [EBP + -0x12]        ; 005fb42f
    FXCH                                ; 005fb432
    FSTP float ptr [EBP + -0x6a]        ; 005fb434
    FSTP float ptr [EBP + -0x5a]        ; 005fb437
    MOVSD.REP ES:EDI,ESI                ; 005fb43a
    MOV EAX,EBX                         ; 005fb43c
    LEA ESP,[EBP + 0x7a]                ; 005fb43e
    POP EBP                             ; 005fb441
    POP EDI                             ; 005fb442
    POP EBX                             ; 005fb443
    RET                                 ; 005fb444
    MOV EAX,0x3f676c8b                  ; 005fb445
        ;   Label: LAB_005fb445
    XOR EDI,EDI                         ; 005fb44a
    MOV ECX,0x3e1eb852                  ; 005fb44c
    MOV dword ptr [EBP + -0x6],EDI      ; 005fb451
    MOV dword ptr [EBP + -0xa],EAX      ; 005fb454
    MOV dword ptr [EBP + -0xe],ECX      ; 005fb457
    JMP 0x005fb277                      ; 005fb45a
        ;   XREF to: 005fb277 (UNCONDITIONAL_JUMP)  ; LAB_005fb277
    CMP EAX,0x3                         ; 005fb45f
        ;   Label: LAB_005fb45f
    JZ 0x005fb23c                       ; 005fb462
        ;   XREF to: 005fb23c (CONDITIONAL_JUMP)  ; LAB_005fb23c
    LEA EAX,[EBP + -0x3e]               ; 005fb468
        ;   Label: LAB_005fb468
    PUSH EAX                            ; 005fb46b
    MOV EDX,dword ptr [ESI + 0x154]     ; 005fb46c
    PUSH ESI                            ; 005fb472
    CALL dword ptr [EDX + 0x14]         ; 005fb473
    LEA EDX,[EAX + 0xc]                 ; 005fb476
    FLD float ptr [EAX]                 ; 005fb479
    FADD float ptr [EDX]                ; 005fb47b
    FST float ptr [EBP + 0x52]          ; 005fb47d
    FLD float ptr [EAX + 0x4]           ; 005fb480
    FADD float ptr [EDX + 0x4]          ; 005fb483
    FXCH                                ; 005fb486
    FLD float ptr [0x00658821]          ; 005fb488 | FLOAT_00658821
    FXCH                                ; 005fb48e
    FMUL ST1                            ; 005fb490
    FXCH ST2                            ; 005fb492
    FST float ptr [EBP + 0x56]          ; 005fb494
    FLD float ptr [EAX + 0x8]           ; 005fb497
    FADD float ptr [EDX + 0x8]          ; 005fb49a
    FXCH                                ; 005fb49d
    FMUL ST2                            ; 005fb49f
    FXCH                                ; 005fb4a1
    FST float ptr [EBP + 0x5a]          ; 005fb4a3
    FMULP ST2                           ; 005fb4a6
    ADD ESP,0x8                         ; 005fb4a8
    LEA EAX,[EBP + 0x3a]                ; 005fb4ab
    FXCH ST2                            ; 005fb4ae
    FSTP float ptr [EBP + 0x3a]         ; 005fb4b0
    FXCH                                ; 005fb4b3
    FSTP float ptr [EBP + 0x3e]         ; 005fb4b5
    LEA EDX,[EBP + 0x22]                ; 005fb4b8
    FSTP float ptr [EBP + 0x42]         ; 005fb4bb
    CMP EDX,EAX                         ; 005fb4be
    JZ 0x005fb4d4                       ; 005fb4c0
        ;   XREF to: 005fb4d4 (CONDITIONAL_JUMP)  ; LAB_005fb4d4
    MOV EAX,dword ptr [EBP + 0x3a]      ; 005fb4c2
    MOV dword ptr [EBP + 0x22],EAX      ; 005fb4c5
    MOV EAX,dword ptr [EBP + 0x3e]      ; 005fb4c8
    MOV dword ptr [EBP + 0x26],EAX      ; 005fb4cb
    MOV EAX,dword ptr [EBP + 0x42]      ; 005fb4ce
    MOV dword ptr [EBP + 0x2a],EAX      ; 005fb4d1
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005fb4d4
        ;   Label: LAB_005fb4d4
    MOV EAX,EDX                         ; 005fb4da
    SHL EAX,0x4                         ; 005fb4dc
    ADD EAX,EDX                         ; 005fb4df
    MOV EDX,dword ptr [EBP + 0x8a]      ; 005fb4e1
    SHL EAX,0x2                         ; 005fb4e7
    ADD EAX,EDX                         ; 005fb4ea
    MOV ECX,0xc                         ; 005fb4ec
    LEA EDI,[EBP + 0xffffff1a]          ; 005fb4f1
    LEA ESI,[EAX + 0x24b8]              ; 005fb4f7
    MOVSD.REP ES:EDI,ESI                ; 005fb4fd
    JMP 0x005fb31f                      ; 005fb4ff
        ;   XREF to: 005fb31f (UNCONDITIONAL_JUMP)  ; LAB_005fb31f
    MOV ESI,0x3ecccccd                  ; 005fb504
        ;   Label: LAB_005fb504
    PUSH EAX                            ; 005fb509
    LEA EAX,[EBP + 0x2e]                ; 005fb50a
    XOR EDI,EDI                         ; 005fb50d
    PUSH EAX                            ; 005fb50f
    LEA EAX,[EBP + 0x5e]                ; 005fb510
    MOV dword ptr [EBP + 0x2e],ESI      ; 005fb513
    PUSH EAX                            ; 005fb516
    MOV dword ptr [EBP + 0x32],EDI      ; 005fb517
    MOV dword ptr [EBP + 0x36],EDI      ; 005fb51a
    JMP 0x005fb367                      ; 005fb51d
        ;   XREF to: 005fb367 (UNCONDITIONAL_JUMP)  ; LAB_005fb367

