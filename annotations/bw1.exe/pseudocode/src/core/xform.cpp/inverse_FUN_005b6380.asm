; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_inverse_FUN_005b6380(CMatrix3x4f *param_1)
;
; Local Variables:
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
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[8]:
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00430440 at 004307db
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0 at 00432b36
;   core_charactr.cpp_FUN_00432690 at 00432773
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043fbd0 at 0043fc20
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0 at 00518d01
;   core_tentacle.cpp_CTentacle_process_FUN_005952f0 at 0059560f
;   core_thehand.cpp_CTheHand_process_FUN_00599150 at 005993c2
;   core_xform.cpp_FUN_005b62b0 at 005b62c4
;
; Referenced Globals:
;   TerminatedCString s_core_xform_cpp_005fa11c
;   TerminatedCString s_inverse_Singular_matrix_005fa12e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_xform.cpp_determinant_FUN_005b6330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6380
        ;   Label: core_xform.cpp_inverse_FUN_005b6380
    PUSH EDI                            ; 005b6381
    PUSH EBP                            ; 005b6382
    SUB ESP,0x60                        ; 005b6383
    MOV EBX,dword ptr [ESP + 0x70]      ; 005b6386
    MOV EBP,ESI                         ; 005b638a
    PUSH EBX                            ; 005b638c
    CALL core_xform.cpp_determinant_FUN_005b6330 ; 005b638d
        ;   XREF to: 005b6330 (UNCONDITIONAL_CALL)  ; double core_xform.cpp_determinant_FUN_005b6330(CMatrix3x4f * matrix)
    MOV dword ptr [ESP + 0x34],EAX      ; 005b6392
    MOV dword ptr [ESP + 0x38],EDX      ; 005b6396
    FLD double ptr [ESP + 0x34]         ; 005b639a
    ADD ESP,0x4                         ; 005b639e
    FSTP float ptr [ESP + 0x5c]         ; 005b63a1
    TEST dword ptr [ESP + 0x5c],0x7fffffff ; 005b63a5
    JZ 0x005b6582                       ; 005b63ad
        ;   XREF to: 005b6582 (CONDITIONAL_JUMP)  ; LAB_005b6582
    FLD float ptr [EBX + 0x14]          ; 005b63b3
        ;   Label: LAB_005b63b3
    FMUL float ptr [EBX + 0x28]         ; 005b63b6
    FLD float ptr [EBX + 0x10]          ; 005b63b9
    FMUL float ptr [EBX + 0x28]         ; 005b63bc
    FLD float ptr [EBX + 0x10]          ; 005b63bf
    FMUL float ptr [EBX + 0x24]         ; 005b63c2
    FLD float ptr [EBX + 0x4]           ; 005b63c5
    FMUL float ptr [EBX + 0x28]         ; 005b63c8
    FLD float ptr [EBX + 0x8]           ; 005b63cb
    FMUL float ptr [EBX + 0x20]         ; 005b63ce
    FLD float ptr [EBX + 0x18]          ; 005b63d1
    FMUL float ptr [EBX + 0x24]         ; 005b63d4
    FLD float ptr [EBX + 0x18]          ; 005b63d7
    FXCH                                ; 005b63da
    FSUBP ST6,ST0                       ; 005b63dc
    FMUL float ptr [EBX + 0x20]         ; 005b63de
    FXCH ST5                            ; 005b63e1
    FSTP float ptr [ESP + 0x58]         ; 005b63e3
    FLD float ptr [EBX + 0x4]           ; 005b63e7
    FMUL float ptr [EBX + 0x20]         ; 005b63ea
    FXCH ST5                            ; 005b63ed
    FSUBP ST4,ST0                       ; 005b63ef
    FLD1                                ; 005b63f1
    FXCH ST4                            ; 005b63f3
    FCHS                                ; 005b63f5
    FSTP float ptr [ESP + 0x38]         ; 005b63f7
    FLD float ptr [EBX + 0x14]          ; 005b63fb
    FMUL float ptr [EBX + 0x20]         ; 005b63fe
    FXCH ST4                            ; 005b6401
    FDIV float ptr [ESP + 0x5c]         ; 005b6403
    FLD float ptr [EBX + 0x4]           ; 005b6407
    FMUL float ptr [EBX + 0x18]         ; 005b640a
    FXCH ST5                            ; 005b640d
    FSUBP ST4,ST0                       ; 005b640f
    FXCH ST3                            ; 005b6411
    FSTP float ptr [ESP + 0x54]         ; 005b6413
    FLD float ptr [EBX + 0x8]           ; 005b6417
    FMUL float ptr [EBX + 0x24]         ; 005b641a
    FLD float ptr [EBX + 0x8]           ; 005b641d
    FXCH                                ; 005b6420
    FSUBP ST3,ST0                       ; 005b6422
    FMUL float ptr [EBX + 0x10]         ; 005b6424
    FXCH ST2                            ; 005b6427
    FCHS                                ; 005b6429
    FSTP float ptr [ESP + 0x3c]         ; 005b642b
    FLD float ptr [EBX]                 ; 005b642f
    FMUL float ptr [EBX + 0x28]         ; 005b6431
    FLD float ptr [EBX + 0x4]           ; 005b6434
    FMUL float ptr [EBX + 0x10]         ; 005b6437
    FXCH                                ; 005b643a
    FSUBRP ST2,ST0                      ; 005b643c
    FXCH                                ; 005b643e
    FSTP float ptr [ESP + 0x40]         ; 005b6440
    FLD float ptr [EBX]                 ; 005b6444
    FMUL float ptr [EBX + 0x24]         ; 005b6446
    FLD float ptr [EBX + 0x8]           ; 005b6449
    FXCH                                ; 005b644c
    FSUBRP ST6,ST0                      ; 005b644e
    FMUL float ptr [EBX + 0x14]         ; 005b6450
    FXCH ST5                            ; 005b6453
    FCHS                                ; 005b6455
    FSTP float ptr [ESP + 0x44]         ; 005b6457
    FLD float ptr [EBX]                 ; 005b645b
    FMUL float ptr [EBX + 0x18]         ; 005b645d
    FLD float ptr [EBX]                 ; 005b6460
    FMUL float ptr [EBX + 0x14]         ; 005b6462
    FXCH ST6                            ; 005b6465
    FSUBP ST5,ST0                       ; 005b6467
    FLD float ptr [ESP + 0x58]          ; 005b6469
    FXCH ST4                            ; 005b646d
    FSTP float ptr [ESP + 0x5c]         ; 005b646f
    FXCH ST3                            ; 005b6473
    FMUL float ptr [ESP + 0x5c]         ; 005b6475
    FXCH ST3                            ; 005b6479
    FSUBRP ST2,ST0                      ; 005b647b
    FLD float ptr [ESP + 0x3c]          ; 005b647d
    FMUL float ptr [ESP + 0x5c]         ; 005b6481
    FXCH ST2                            ; 005b6485
    FCHS                                ; 005b6487
    FXCH ST4                            ; 005b6489
    FMUL float ptr [ESP + 0x5c]         ; 005b648b
    FLD float ptr [ESP + 0x38]          ; 005b648f
    FMUL float ptr [ESP + 0x5c]         ; 005b6493
    FXCH ST6                            ; 005b6497
    FSUBRP ST2,ST0                      ; 005b6499
    FXCH                                ; 005b649b
    FSTP float ptr [ESP + 0x50]         ; 005b649d
    FLD float ptr [ESP + 0x40]          ; 005b64a1
    FMUL float ptr [ESP + 0x5c]         ; 005b64a5
    FXCH ST4                            ; 005b64a9
    FMUL float ptr [ESP + 0x5c]         ; 005b64ab
    FLD float ptr [ESP + 0x54]          ; 005b64af
    FMUL float ptr [ESP + 0x5c]         ; 005b64b3
    FXCH ST4                            ; 005b64b7
    FSTP float ptr [ESP]                ; 005b64b9
    FLD float ptr [ESP + 0x44]          ; 005b64bc
    FMUL float ptr [ESP + 0x5c]         ; 005b64c0
    FXCH ST3                            ; 005b64c4
    FSTP float ptr [ESP + 0x4]          ; 005b64c6
    FLD float ptr [ESP + 0x50]          ; 005b64ca
    FMUL float ptr [ESP + 0x5c]         ; 005b64ce
    FXCH ST2                            ; 005b64d2
    FSTP float ptr [ESP + 0x8]          ; 005b64d4
    FLD float ptr [EBX + 0x1c]          ; 005b64d8
    FMUL float ptr [ESP + 0x4]          ; 005b64db
    FXCH ST6                            ; 005b64df
    FSTP float ptr [ESP + 0x10]         ; 005b64e1
    FLD float ptr [EBX + 0xc]           ; 005b64e5
    FMUL float ptr [ESP + 0x10]         ; 005b64e8
    FXCH ST5                            ; 005b64ec
    FSTP float ptr [ESP + 0x14]         ; 005b64ee
    FLD float ptr [EBX + 0xc]           ; 005b64f2
    FXCH ST4                            ; 005b64f5
    FSTP float ptr [ESP + 0x20]         ; 005b64f7
    FXCH ST3                            ; 005b64fb
    FMUL float ptr [ESP + 0x20]         ; 005b64fd
    FXCH ST3                            ; 005b6501
    FSTP float ptr [ESP + 0x18]         ; 005b6503
    FLD float ptr [EBX + 0xc]           ; 005b6507
    FMUL float ptr [ESP]                ; 005b650a
    FLD float ptr [EBX + 0x1c]          ; 005b650d
    FMUL float ptr [ESP + 0x14]         ; 005b6510
    FXCH ST3                            ; 005b6514
    FSTP float ptr [ESP + 0x24]         ; 005b6516
    FLD float ptr [EBX + 0x1c]          ; 005b651a
    FMUL float ptr [ESP + 0x24]         ; 005b651d
    FXCH                                ; 005b6521
    FADDP ST6,ST0                       ; 005b6523
    FXCH ST2                            ; 005b6525
    FADDP ST4,ST0                       ; 005b6527
    FLD float ptr [EBX + 0x2c]          ; 005b6529
    FMUL float ptr [ESP + 0x8]          ; 005b652c
    FLD float ptr [EBX + 0x2c]          ; 005b6530
    FMUL float ptr [ESP + 0x18]         ; 005b6533
    FXCH ST3                            ; 005b6537
    FADDP ST4,ST0                       ; 005b6539
    FXCH                                ; 005b653b
    FSTP float ptr [ESP + 0x28]         ; 005b653d
    FLD float ptr [EBX + 0x2c]          ; 005b6541
    FMUL float ptr [ESP + 0x28]         ; 005b6544
    MOV ECX,0xc                         ; 005b6548
    MOV ESI,ESP                         ; 005b654d
    MOV EDI,EBP                         ; 005b654f
    FXCH                                ; 005b6551
    FADDP ST5,ST0                       ; 005b6553
    FXCH                                ; 005b6555
    FADDP ST3,ST0                       ; 005b6557
    FADDP                               ; 005b6559
    FXCH ST2                            ; 005b655b
    FCHS                                ; 005b655d
    FXCH                                ; 005b655f
    FCHS                                ; 005b6561
    FXCH ST2                            ; 005b6563
    FCHS                                ; 005b6565
    FXCH                                ; 005b6567
    FSTP float ptr [ESP + 0xc]          ; 005b6569
    FXCH                                ; 005b656d
    FSTP float ptr [ESP + 0x1c]         ; 005b656f
    FSTP float ptr [ESP + 0x2c]         ; 005b6573
    MOVSD.REP ES:EDI,ESI                ; 005b6577
    MOV EAX,EBP                         ; 005b6579
    ADD ESP,0x60                        ; 005b657b
    POP EBP                             ; 005b657e
    POP EDI                             ; 005b657f
    POP EBX                             ; 005b6580
    RET                                 ; 005b6581
    MOV ECX,0x5fa11c                    ; 005b6582 | = "..\\core\\xform.cpp"
        ;   Label: LAB_005b6582
    MOV ESI,0x23d                       ; 005b6587
    PUSH 0x5fa12e                       ; 005b658c | = "inverse() - Singular matrix"
    MOV dword ptr [0x01d1d400],ECX      ; 005b6591 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005b6597 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005b659d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005b65a2
    JMP 0x005b63b3                      ; 005b65a5
        ;   XREF to: 005b63b3 (UNCONDITIONAL_JUMP)  ; LAB_005b63b3

