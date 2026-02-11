; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack2_esi void __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120 (CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined1       Stack[-0x160]:1  local_160
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x134]:4  local_134
; undefined1       Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_core_gabriela_cpp_0062b10d
;   TerminatedCString s_Don_t_know_how_to_carry__0062b122
;   float FLOAT_0062b145 = 0.5
;   double DOUBLE_0062b14d = 0.700000000000000
;   double DOUBLE_0062b155 = 0.300000000000000
;   undefined4 g_CLightActorClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_buildRotationY_FUN_005f6cc0
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7120
        ;   Label: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120
    PUSH EDI                            ; 004d7121
    PUSH EBP                            ; 004d7122
    MOV EBP,ESP                         ; 004d7123
    SUB ESP,0x184                       ; 004d7125
    AND ESP,0xfffffff8                  ; 004d712b
    MOV EBX,ESI                         ; 004d712e
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d7130
    MOV EAX,EDX                         ; 004d7133
    SHL EAX,0x4                         ; 004d7135
    ADD EAX,EDX                         ; 004d7138
    MOV EDX,dword ptr [EBP + 0x10]      ; 004d713a
    SHL EAX,0x2                         ; 004d713d
    ADD EAX,EDX                         ; 004d7140
    MOV EDI,dword ptr [EAX + 0x24b4]    ; 004d7142
    MOV EAX,dword ptr [EAX + 0x24ac]    ; 004d7148
    XOR ECX,ECX                         ; 004d714e
    MOV dword ptr [ESP + 0x180],EAX     ; 004d7150
    MOV dword ptr [ESP + 0x140],ECX     ; 004d7157
    MOV EAX,[0x00822c84]                ; 004d715e | g_CLightActorClassInfo.name_hash
    MOV dword ptr [ESP + 0x13c],ECX     ; 004d7163
    PUSH EAX                            ; 004d716a
    MOV dword ptr [ESP + 0x13c],ECX     ; 004d716b
    MOV dword ptr [ESP + 0x180],ECX     ; 004d7172
    PUSH EDI                            ; 004d7179
    MOV dword ptr [ESP + 0x180],ECX     ; 004d717a
    MOV dword ptr [ESP + 0x17c],ECX     ; 004d7181
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d7188
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d718d
    MOV ESI,EAX                         ; 004d7190
    TEST EAX,EAX                        ; 004d7192
    JNZ 0x004d72da                      ; 004d7194
        ;   XREF to: 004d72da (CONDITIONAL_JUMP)  ; LAB_004d72da
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d719a
        ;   Label: LAB_004d719a
    TEST EDI,EDI                        ; 004d719d
    JNZ 0x004d751b                      ; 004d719f
        ;   XREF to: 004d751b (CONDITIONAL_JUMP)  ; LAB_004d751b
    MOV EAX,0xbecccccd                  ; 004d71a5
    LEA EDX,[ESP + 0x15c]               ; 004d71aa
    MOV dword ptr [ESP + 0x130],EDI     ; 004d71b1
    MOV dword ptr [ESP + 0x12c],EAX     ; 004d71b8
    LEA EAX,[ESP + 0x12c]               ; 004d71bf
    MOV dword ptr [ESP + 0x134],EDI     ; 004d71c6
    CMP EDX,EAX                         ; 004d71cd
    JZ 0x004d71eb                       ; 004d71cf
        ;   XREF to: 004d71eb (CONDITIONAL_JUMP)  ; LAB_004d71eb
    MOV ESI,0xbecccccd                  ; 004d71d1
    MOV dword ptr [ESP + 0x160],EDI     ; 004d71d6
    MOV dword ptr [ESP + 0x164],EDI     ; 004d71dd
    MOV dword ptr [ESP + 0x15c],ESI     ; 004d71e4
    MOV EDX,dword ptr [ESP + 0x180]     ; 004d71eb
        ;   Label: LAB_004d71eb
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d71f2
    SUB EAX,EDX                         ; 004d71f9
    MOV EDX,dword ptr [EBP + 0x10]      ; 004d71fb
    SHL EAX,0x4                         ; 004d71fe
    ADD EDX,0xfd8                       ; 004d7201
    ADD EAX,EDX                         ; 004d7207
    PUSH EAX                            ; 004d7209
    LEA EAX,[ESP + 0x160]               ; 004d720a
    PUSH EAX                            ; 004d7211
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20 ; 004d7212
        ;   XREF to: 005f4e20 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f * input_output_vector, CMatrix3x4f * matrix)
    ADD ESP,0x8                         ; 004d7217
    LEA EAX,[ESP + 0x138]               ; 004d721a
    PUSH EAX                            ; 004d7221
    LEA EAX,[ESP + 0x160]               ; 004d7222
    PUSH EAX                            ; 004d7229
    LEA EAX,[ESP + 0x38]                ; 004d722a
    PUSH EAX                            ; 004d722e
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004d722f
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004d7234
    LEA EAX,[ESP + 0x30]                ; 004d7237
    PUSH EAX                            ; 004d723b
    LEA EAX,[ESP + 0x178]               ; 004d723c
    PUSH EAX                            ; 004d7243
    LEA EAX,[ESP + 0x128]               ; 004d7244
    PUSH EAX                            ; 004d724b
    LEA ESI,[ESP + 0x3c]                ; 004d724c
    MOV EDI,EBX                         ; 004d7250
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004d7252
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004d7257
    MOV ECX,0xc                         ; 004d725a
    FLD float ptr [ESP + 0x15c]         ; 004d725f
    FLD float ptr [ESP + 0x160]         ; 004d7266
    FLD float ptr [ESP + 0x164]         ; 004d726d
    FLD float ptr [ESP + 0x3c]          ; 004d7274
    FLD float ptr [ESP + 0x4c]          ; 004d7278
    FXCH ST4                            ; 004d727c
    FSUB float ptr [EAX]                ; 004d727e
    FLD float ptr [ESP + 0x5c]          ; 004d7280
    FXCH                                ; 004d7284
    FSTP float ptr [ESP + 0x150]        ; 004d7286
    FXCH ST3                            ; 004d728d
    FSUB float ptr [EAX + 0x4]          ; 004d728f
    FXCH                                ; 004d7292
    FADD float ptr [ESP + 0x150]        ; 004d7294
    FXCH                                ; 004d729b
    FSTP float ptr [ESP + 0x154]        ; 004d729d
    FXCH                                ; 004d72a4
    FSUB float ptr [EAX + 0x8]          ; 004d72a6
    FXCH ST3                            ; 004d72a9
    FADD float ptr [ESP + 0x154]        ; 004d72ab
    FXCH ST3                            ; 004d72b2
    FSTP float ptr [ESP + 0x158]        ; 004d72b4
    FSTP float ptr [ESP + 0x3c]         ; 004d72bb
    FADD float ptr [ESP + 0x158]        ; 004d72bf
    FXCH                                ; 004d72c6
    FSTP float ptr [ESP + 0x4c]         ; 004d72c8
    FSTP float ptr [ESP + 0x5c]         ; 004d72cc
    MOVSD.REP ES:EDI,ESI                ; 004d72d0
    MOV EAX,EBX                         ; 004d72d2
    MOV ESP,EBP                         ; 004d72d4
    POP EBP                             ; 004d72d6
    POP EDI                             ; 004d72d7
    POP EBX                             ; 004d72d8
    RET                                 ; 004d72d9
    LEA EAX,[ESP + 0xf0]                ; 004d72da
        ;   Label: LAB_004d72da
    PUSH EAX                            ; 004d72e1
    MOV EDX,dword ptr [EDI + 0x154]     ; 004d72e2
    PUSH EDI                            ; 004d72e8
    CALL dword ptr [EDX + 0x14]         ; 004d72e9
    ADD ESP,0x8                         ; 004d72ec
    FLD float ptr [ESP + 0xf0]          ; 004d72ef
    FADD float ptr [ESP + 0xfc]         ; 004d72f6
    FST float ptr [ESP + 0x168]         ; 004d72fd
    FLD float ptr [0x0062b145]          ; 004d7304 | FLOAT_0062b145
    FXCH                                ; 004d730a
    FMUL ST1                            ; 004d730c
    FLD float ptr [ESP + 0xf8]          ; 004d730e
    FLD float ptr [ESP + 0xf4]          ; 004d7315
    FADD float ptr [ESP + 0x100]        ; 004d731c
    FXCH                                ; 004d7323
    FADD float ptr [ESP + 0x104]        ; 004d7325
    FXCH                                ; 004d732c
    FST float ptr [ESP + 0x16c]         ; 004d732e
    FMUL ST3                            ; 004d7335
    FXCH                                ; 004d7337
    FST float ptr [ESP + 0x170]         ; 004d7339
    FMULP ST3                           ; 004d7340
    LEA EAX,[ESP + 0x108]               ; 004d7342
    LEA EDX,[ESP + 0x174]               ; 004d7349
    FXCH                                ; 004d7350
    FSTP float ptr [ESP + 0x108]        ; 004d7352
    FSTP float ptr [ESP + 0x10c]        ; 004d7359
    FSTP float ptr [ESP + 0x110]        ; 004d7360
    CMP EDX,EAX                         ; 004d7367
    JZ 0x004d7395                       ; 004d7369
        ;   XREF to: 004d7395 (CONDITIONAL_JUMP)  ; LAB_004d7395
    MOV EAX,dword ptr [ESP + 0x108]     ; 004d736b
    MOV dword ptr [ESP + 0x174],EAX     ; 004d7372
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004d7379
    MOV dword ptr [ESP + 0x178],EAX     ; 004d7380
    MOV EAX,dword ptr [ESP + 0x110]     ; 004d7387
    MOV dword ptr [ESP + 0x17c],EAX     ; 004d738e
    MOV EDX,dword ptr [ESI + 0x66c]     ; 004d7395
        ;   Label: LAB_004d7395
    CMP EDX,0x2                         ; 004d739b
    JNZ 0x004d73b3                      ; 004d739e
        ;   XREF to: 004d73b3 (CONDITIONAL_JUMP)  ; LAB_004d73b3
    MOV EAX,dword ptr [ESP + 0x100]     ; 004d73a0
    MOV dword ptr [ESP + 0x178],EAX     ; 004d73a7
    JMP 0x004d719a                      ; 004d73ae
        ;   XREF to: 004d719a (UNCONDITIONAL_JUMP)  ; LAB_004d719a
    CMP EDX,0x1                         ; 004d73b3
        ;   Label: LAB_004d73b3
    JNZ 0x004d74db                      ; 004d73b6
        ;   XREF to: 004d74db (CONDITIONAL_JUMP)  ; LAB_004d74db
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d73bc
    TEST ECX,ECX                        ; 004d73bf
    JNZ 0x004d7499                      ; 004d73c1
        ;   XREF to: 004d7499 (CONDITIONAL_JUMP)  ; LAB_004d7499
    PUSH 0xbfc90fdb                     ; 004d73c7
    LEA ESI,[ESP + 0x4]                 ; 004d73cc
    LEA EDI,[ESP + 0xc4]                ; 004d73d0
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 004d73d7
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d73dc
    LEA ESI,[ESP + 0x4]                 ; 004d73e1
    ADD ESP,0x4                         ; 004d73e5
        ;   Label: LAB_004d73e5
    MOVSD.REP ES:EDI,ESI                ; 004d73e8
    MOV EDX,dword ptr [ESP + 0x180]     ; 004d73ea
        ;   Label: LAB_004d73ea
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d73f1
    SUB EAX,EDX                         ; 004d73f8
    MOV EDX,dword ptr [EBP + 0x10]      ; 004d73fa
    SHL EAX,0x4                         ; 004d73fd
    ADD EDX,0xfd8                       ; 004d7400
    ADD EAX,EDX                         ; 004d7406
    PUSH EAX                            ; 004d7408
    LEA EAX,[ESP + 0xc4]                ; 004d7409
    PUSH EAX                            ; 004d7410
    LEA ESI,[ESP + 0x68]                ; 004d7411
    LEA EDI,[ESP + 0xc8]                ; 004d7415
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004d741c
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 004d7421
    LEA EAX,[ESP + 0x144]               ; 004d7424
    MOV ECX,0xc                         ; 004d742b
    PUSH EAX                            ; 004d7430
    LEA EAX,[ESP + 0xc4]                ; 004d7431
    LEA ESI,[ESP + 0x64]                ; 004d7438
    PUSH EAX                            ; 004d743c
    MOVSD.REP ES:EDI,ESI                ; 004d743d
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 004d743f
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    MOV EDX,EAX                         ; 004d7444
    LEA EAX,[ESP + 0x140]               ; 004d7446
    ADD ESP,0x8                         ; 004d744d
    CMP EAX,EDX                         ; 004d7450
    JZ 0x004d7471                       ; 004d7452
        ;   XREF to: 004d7471 (CONDITIONAL_JUMP)  ; LAB_004d7471
    MOV EAX,dword ptr [EDX]             ; 004d7454
    MOV dword ptr [ESP + 0x138],EAX     ; 004d7456
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d745d
    MOV dword ptr [ESP + 0x13c],EAX     ; 004d7460
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d7467
    MOV dword ptr [ESP + 0x140],EAX     ; 004d746a
    FLD float ptr [ESP + 0xf8]          ; 004d7471
        ;   Label: LAB_004d7471
    FMUL double ptr [0x0062b14d]        ; 004d7478 | DOUBLE_0062b14d
    FLD float ptr [ESP + 0x104]         ; 004d747e
    FMUL double ptr [0x0062b155]        ; 004d7485 | DOUBLE_0062b155
    FADDP                               ; 004d748b
    FSTP float ptr [ESP + 0x17c]        ; 004d748d
    JMP 0x004d719a                      ; 004d7494
        ;   XREF to: 004d719a (UNCONDITIONAL_JUMP)  ; LAB_004d719a
    CMP ECX,EDX                         ; 004d7499
        ;   Label: LAB_004d7499
    JNZ 0x004d74c6                      ; 004d749b
        ;   XREF to: 004d74c6 (CONDITIONAL_JUMP)  ; LAB_004d74c6
    PUSH 0x3fc90fdb                     ; 004d749d
    LEA ESI,[ESP + 0x94]                ; 004d74a2
    LEA EDI,[ESP + 0xc4]                ; 004d74a9
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 004d74b0
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d74b5
    LEA ESI,[ESP + 0x94]                ; 004d74ba
    JMP 0x004d73e5                      ; 004d74c1
        ;   XREF to: 004d73e5 (UNCONDITIONAL_JUMP)  ; LAB_004d73e5
    LEA EAX,[ESP + 0xc0]                ; 004d74c6
        ;   Label: LAB_004d74c6
    PUSH EAX                            ; 004d74cd
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100 ; 004d74ce
        ;   XREF to: 005f5100 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f * matrix)
    ADD ESP,0x4                         ; 004d74d3
    JMP 0x004d73ea                      ; 004d74d6
        ;   XREF to: 004d73ea (UNCONDITIONAL_JUMP)  ; LAB_004d73ea
    CMP EDX,0x3                         ; 004d74db
        ;   Label: LAB_004d74db
    JNZ 0x004d74f3                      ; 004d74de
        ;   XREF to: 004d74f3 (CONDITIONAL_JUMP)  ; LAB_004d74f3
    MOV EAX,dword ptr [ESP + 0x100]     ; 004d74e0
    MOV dword ptr [ESP + 0x178],EAX     ; 004d74e7
    JMP 0x004d719a                      ; 004d74ee
        ;   XREF to: 004d719a (UNCONDITIONAL_JUMP)  ; LAB_004d719a
    PUSH ESI                            ; 004d74f3
        ;   Label: LAB_004d74f3
    MOV EAX,0x62b10d                    ; 004d74f4 | = "..\\core\\gabriela.cpp"
    MOV EDX,0x945                       ; 004d74f9
    PUSH 0x62b122                       ; 004d74fe | = "Don't know how to carry light %s"
    MOV [0x02f0ca48],EAX                ; 004d7503 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004d7508 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004d750e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004d7513
    JMP 0x004d719a                      ; 004d7516
        ;   XREF to: 004d719a (UNCONDITIONAL_JUMP)  ; LAB_004d719a
    CMP EDI,0x1                         ; 004d751b
        ;   Label: LAB_004d751b
    JNZ 0x004d756e                      ; 004d751e
        ;   XREF to: 004d756e (CONDITIONAL_JUMP)  ; LAB_004d756e
    MOV EDI,0x3ecccccd                  ; 004d7520
    XOR EAX,EAX                         ; 004d7525
    LEA EDX,[ESP + 0x15c]               ; 004d7527
    MOV dword ptr [ESP + 0x118],EAX     ; 004d752e
    MOV dword ptr [ESP + 0x11c],EAX     ; 004d7535
    LEA EAX,[ESP + 0x114]               ; 004d753c
    MOV dword ptr [ESP + 0x114],EDI     ; 004d7543
    CMP EDX,EAX                         ; 004d754a
    JZ 0x004d71eb                       ; 004d754c
        ;   XREF to: 004d71eb (CONDITIONAL_JUMP)  ; LAB_004d71eb
    XOR ESI,ESI                         ; 004d7552
    MOV dword ptr [ESP + 0x15c],EDI     ; 004d7554
    MOV dword ptr [ESP + 0x160],ESI     ; 004d755b
    MOV dword ptr [ESP + 0x164],ESI     ; 004d7562
    JMP 0x004d71eb                      ; 004d7569
        ;   XREF to: 004d71eb (UNCONDITIONAL_JUMP)  ; LAB_004d71eb
    XOR EDX,EDX                         ; 004d756e
        ;   Label: LAB_004d756e
    MOV dword ptr [ESP + 0x160],EDX     ; 004d7570
    MOV dword ptr [ESP + 0x15c],EDX     ; 004d7577
    MOV dword ptr [ESP + 0x164],EDX     ; 004d757e
    JMP 0x004d71eb                      ; 004d7585
        ;   XREF to: 004d71eb (UNCONDITIONAL_JUMP)  ; LAB_004d71eb

