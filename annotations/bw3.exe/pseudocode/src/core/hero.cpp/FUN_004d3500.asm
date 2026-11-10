; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004d3500(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_hero.cpp_FUN_004d4900 at 004d4a25
;
; Referenced Globals:
;   undefined4 DAT_005c4d99
;   undefined4 DAT_005c4d9d
;   undefined4 DAT_005c4da5
;   undefined4 DAT_005c4dad
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3500
        ;   Label: core_hero.cpp_FUN_004d3500
    PUSH ESI                            ; 004d3501
    PUSH EDI                            ; 004d3502
    PUSH EBP                            ; 004d3503
    MOV EBP,ESP                         ; 004d3504
    SUB ESP,0xec                        ; 004d3506
    AND ESP,0xfffffff8                  ; 004d350c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d350f
    PUSH EDX                            ; 004d3512
    CALL core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060 ; 004d3513
        ;   XREF to: 00432060 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d3518
    TEST EAX,EAX                        ; 004d351b
    JNZ 0x004d35ab                      ; 004d351d
        ;   XREF to: 004d35ab (CONDITIONAL_JUMP)  ; LAB_004d35ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3523
    MOV ECX,dword ptr [EAX + 0x20b9c]   ; 004d3526
    TEST ECX,ECX                        ; 004d352c
    JNZ 0x004d359d                      ; 004d352e
        ;   XREF to: 004d359d (CONDITIONAL_JUMP)  ; LAB_004d359d
    MOV dword ptr [ESP + 0xe0],ECX      ; 004d3530
    MOV dword ptr [ESP + 0xe4],ECX      ; 004d3537
    MOV EBX,dword ptr [0x00603b28]      ; 004d353e | g_CDemonSetPtr
        ;   Label: LAB_004d353e
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004d3544
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004d354b | g_CDemonSetInstance.actor_count
    JL 0x004d35db                       ; 004d3551
        ;   XREF to: 004d35db (CONDITIONAL_JUMP)  ; LAB_004d35db
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3557
        ;   Label: LAB_004d3557
    MOV ECX,dword ptr [EAX + 0x20b9c]   ; 004d355a
    TEST ECX,ECX                        ; 004d3560
    JZ 0x004d35ab                       ; 004d3562
        ;   XREF to: 004d35ab (CONDITIONAL_JUMP)  ; LAB_004d35ab
    MOV EBX,dword ptr [0x007e17b4]      ; 004d3564 | g_CBoxActorClassInfo.name_hash
    PUSH EBX                            ; 004d356a
    PUSH ECX                            ; 004d356b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d356c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 004d3571
    ADD ESP,0x8                         ; 004d3573
    TEST EAX,EAX                        ; 004d3576
    JZ 0x004d359d                       ; 004d3578
        ;   XREF to: 004d359d (CONDITIONAL_JUMP)  ; LAB_004d359d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d357a
    MOV dword ptr [EBX + 0x320],EAX     ; 004d357d
    LEA EAX,[EBX + 0x32c]               ; 004d3583
    PUSH EAX                            ; 004d3589
    MOV ESI,dword ptr [EBX + 0x154]     ; 004d358a
    PUSH EBX                            ; 004d3590
    CALL dword ptr [ESI + 0x30]         ; 004d3591
    ADD ESP,0x8                         ; 004d3594
    MOV dword ptr [EBX + 0x328],EAX     ; 004d3597
    MOV ESI,0x1                         ; 004d359d
        ;   Label: LAB_004d359d
    MOV EAX,ESI                         ; 004d35a2
    MOV ESP,EBP                         ; 004d35a4
    POP EBP                             ; 004d35a6
    POP EDI                             ; 004d35a7
    POP ESI                             ; 004d35a8
    POP EBX                             ; 004d35a9
    RET                                 ; 004d35aa
    XOR ESI,ESI                         ; 004d35ab
        ;   Label: LAB_004d35ab
    MOV EAX,ESI                         ; 004d35ad
    MOV ESP,EBP                         ; 004d35af
    POP EBP                             ; 004d35b1
    POP EDI                             ; 004d35b2
    POP ESI                             ; 004d35b3
    POP EBX                             ; 004d35b4
    RET                                 ; 004d35b5
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004d35b6
        ;   Label: LAB_004d35b6
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004d35bd
    INC EAX                             ; 004d35c4
    ADD EDI,0x4                         ; 004d35c5
    MOV dword ptr [ESP + 0xe0],EAX      ; 004d35c8
    MOV dword ptr [ESP + 0xe4],EDI      ; 004d35cf
    JMP 0x004d353e                      ; 004d35d6
        ;   XREF to: 004d353e (UNCONDITIONAL_JUMP)  ; LAB_004d353e
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004d35db
        ;   Label: LAB_004d35db
    MOV EAX,[0x007e17b4]                ; 004d35e2 | g_CBoxActorClassInfo.name_hash
    ADD EBX,EDX                         ; 004d35e7
    PUSH EAX                            ; 004d35e9
    MOV ECX,dword ptr [EBX + 0x14d168]  ; 004d35ea | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 004d35f0
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d35f1
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 004d35f6
    ADD ESP,0x8                         ; 004d35f8
    TEST EAX,EAX                        ; 004d35fb
    JZ 0x004d35b6                       ; 004d35fd
        ;   XREF to: 004d35b6 (CONDITIONAL_JUMP)  ; LAB_004d35b6
    CMP dword ptr [EAX + 0x31c],0x0     ; 004d35ff
    JZ 0x004d35b6                       ; 004d3606
        ;   XREF to: 004d35b6 (CONDITIONAL_JUMP)  ; LAB_004d35b6
    CMP dword ptr [EAX + 0x320],0x0     ; 004d3608
    JNZ 0x004d35b6                      ; 004d360f
        ;   XREF to: 004d35b6 (CONDITIONAL_JUMP)  ; LAB_004d35b6
    PUSH EBX                            ; 004d3611
    MOV EAX,dword ptr [EAX + 0x154]     ; 004d3612
    LEA ESI,[ESP + 0x24]                ; 004d3618
    LEA EDI,[ESP + 0xc]                 ; 004d361c
    CALL dword ptr [EAX + 0x1c]         ; 004d3620
    MOV ECX,0x6                         ; 004d3623
    LEA ESI,[ESP + 0x24]                ; 004d3628
    ADD ESP,0x4                         ; 004d362c
    MOVSD.REP ES:EDI,ESI                ; 004d362f
    FLD float ptr [ESP + 0x8]           ; 004d3631
    FLD float ptr [ESP + 0xc]           ; 004d3635
    FLD float ptr [ESP + 0x10]          ; 004d3639
    LEA EDI,[ESP + 0xb0]                ; 004d363d
    LEA ESI,[ESP + 0x38]                ; 004d3644
    FXCH ST2                            ; 004d3648
    FADD float ptr [ESP + 0x14]         ; 004d364a
    FXCH                                ; 004d364e
    FADD float ptr [ESP + 0x18]         ; 004d3650
    FXCH ST2                            ; 004d3654
    FADD float ptr [ESP + 0x1c]         ; 004d3656
    FXCH                                ; 004d365a
    FSTP float ptr [ESP + 0x38]         ; 004d365c
    FXCH                                ; 004d3660
    FSTP float ptr [ESP + 0x3c]         ; 004d3662
    FSTP float ptr [ESP + 0x40]         ; 004d3666
    MOVSD ES:EDI,ESI                    ; 004d366a
    MOVSD ES:EDI,ESI                    ; 004d366b
    MOVSD ES:EDI,ESI                    ; 004d366c
    FLD float ptr [ESP + 0xb0]          ; 004d366d
    FMUL float ptr [0x005c4d99]         ; 004d3674 | DAT_005c4d99
    FLD float ptr [ESP + 0xb4]          ; 004d367a
    FMUL float ptr [0x005c4d99]         ; 004d3681 | DAT_005c4d99
    FLD float ptr [ESP + 0xb8]          ; 004d3687
    FMUL float ptr [0x005c4d99]         ; 004d368e | DAT_005c4d99
    LEA EDI,[ESP + 0xd4]                ; 004d3694
    LEA ESI,[ESP + 0xbc]                ; 004d369b
    FXCH ST2                            ; 004d36a2
    FSTP float ptr [ESP + 0xbc]         ; 004d36a4
    FSTP float ptr [ESP + 0xc0]         ; 004d36ab
    FSTP float ptr [ESP + 0xc4]         ; 004d36b2
    MOVSD ES:EDI,ESI                    ; 004d36b9
    MOVSD ES:EDI,ESI                    ; 004d36ba
    MOVSD ES:EDI,ESI                    ; 004d36bb
    LEA ESI,[ESP + 0xd4]                ; 004d36bc
    PUSH ESI                            ; 004d36c3
    PUSH EBX                            ; 004d36c4
    LEA ESI,[ESP + 0x70]                ; 004d36c5
    LEA EDI,[ESP + 0x58]                ; 004d36c9
    CALL core_actor.cpp_FUN_00408b80    ; 004d36cd
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004d36d2
    LEA EAX,[ESP + 0x50]                ; 004d36d5
    LEA ESI,[ESP + 0x68]                ; 004d36d9
    PUSH EAX                            ; 004d36dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d36de
    MOVSD ES:EDI,ESI                    ; 004d36e1
    MOVSD ES:EDI,ESI                    ; 004d36e2
    MOVSD ES:EDI,ESI                    ; 004d36e3
    PUSH EAX                            ; 004d36e4
    LEA ESI,[ESP + 0xd0]                ; 004d36e5
    LEA EDI,[ESP + 0x64]                ; 004d36ec
    CALL core_actor.cpp_FUN_00408bf0    ; 004d36f0
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 004d36f5
    LEA ESI,[ESP + 0xc8]                ; 004d36f8
    FLD float ptr [ESP + 0x14]          ; 004d36ff
    FLD float ptr [ESP + 0x18]          ; 004d3703
    MOVSD ES:EDI,ESI                    ; 004d3707
    MOVSD ES:EDI,ESI                    ; 004d3708
    MOVSD ES:EDI,ESI                    ; 004d3709
    FLD float ptr [ESP + 0x1c]          ; 004d370a
    LEA EDI,[ESP + 0x44]                ; 004d370e
    LEA ESI,[ESP + 0xa4]                ; 004d3712
    FXCH ST2                            ; 004d3719
    FSUB float ptr [ESP + 0x8]          ; 004d371b
    FXCH                                ; 004d371f
    FSUB float ptr [ESP + 0xc]          ; 004d3721
    FXCH ST2                            ; 004d3725
    FSUB float ptr [ESP + 0x10]         ; 004d3727
    FXCH                                ; 004d372b
    FSTP float ptr [ESP + 0xa4]         ; 004d372d
    FXCH                                ; 004d3734
    FSTP float ptr [ESP + 0xa8]         ; 004d3736
    FSTP float ptr [ESP + 0xac]         ; 004d373d
    MOVSD ES:EDI,ESI                    ; 004d3744
    MOVSD ES:EDI,ESI                    ; 004d3745
    MOVSD ES:EDI,ESI                    ; 004d3746
    FLD float ptr [ESP + 0x44]          ; 004d3747
    FMUL float ptr [0x005c4d99]         ; 004d374b | DAT_005c4d99
    FLD float ptr [ESP + 0x48]          ; 004d3751
    FMUL float ptr [0x005c4d99]         ; 004d3755 | DAT_005c4d99
    FLD float ptr [ESP + 0x4c]          ; 004d375b
    FMUL float ptr [0x005c4d99]         ; 004d375f | DAT_005c4d99
    LEA EDI,[ESP + 0x98]                ; 004d3765
    LEA ESI,[ESP + 0x8c]                ; 004d376c
    FXCH ST2                            ; 004d3773
    FSTP float ptr [ESP + 0x8c]         ; 004d3775
    FSTP float ptr [ESP + 0x90]         ; 004d377c
    FSTP float ptr [ESP + 0x94]         ; 004d3783
    MOVSD ES:EDI,ESI                    ; 004d378a
    MOVSD ES:EDI,ESI                    ; 004d378b
    MOVSD ES:EDI,ESI                    ; 004d378c
    FLD float ptr [ESP + 0x98]          ; 004d378d
    FMUL ST0                            ; 004d3794
    FLD float ptr [ESP + 0xa0]          ; 004d3796
    FMUL ST0                            ; 004d379d
    FADDP                               ; 004d379f
    FSQRT                               ; 004d37a1
    XOR EDX,EDX                         ; 004d37a3
    FSUBR float ptr [ESP + 0x64]        ; 004d37a5
    MOV dword ptr [ESP + 0x9c],EDX      ; 004d37a9
    FCOMP double ptr [0x005c4d9d]       ; 004d37b0 | DAT_005c4d9d
    FNSTSW AX                           ; 004d37b6
    SAHF                                ; 004d37b8
    JA 0x004d35b6                       ; 004d37b9
        ;   XREF to: 004d35b6 (CONDITIONAL_JUMP)  ; LAB_004d35b6
    FLD float ptr [ESP + 0x60]          ; 004d37bf
    FLD1                                ; 004d37c3
    FXCH                                ; 004d37c5
    FSTP double ptr [ESP]               ; 004d37c7
    FCOMP double ptr [ESP]              ; 004d37ca
    FNSTSW AX                           ; 004d37cd
    SAHF                                ; 004d37cf
    JA 0x004d35b6                       ; 004d37d0
        ;   XREF to: 004d35b6 (CONDITIONAL_JUMP)  ; LAB_004d35b6
    FLD double ptr [ESP]                ; 004d37d6
    FCOMP double ptr [0x005c4da5]       ; 004d37d9 | DAT_005c4da5
    FNSTSW AX                           ; 004d37df
    SAHF                                ; 004d37e1
    JA 0x004d35b6                       ; 004d37e2
        ;   XREF to: 004d35b6 (CONDITIONAL_JUMP)  ; LAB_004d35b6
    LEA ESI,[ESP + 0x5c]                ; 004d37e8
    PUSH ESI                            ; 004d37ec
    LEA ESI,[ESP + 0x78]                ; 004d37ed
    LEA EDI,[ESP + 0x84]                ; 004d37f1
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004d37f8
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x78]                ; 004d37fd
    ADD ESP,0x4                         ; 004d3801
    MOVSD ES:EDI,ESI                    ; 004d3804
    MOVSD ES:EDI,ESI                    ; 004d3805
    MOVSD ES:EDI,ESI                    ; 004d3806
    PUSH dword ptr [ESP + 0x84]         ; 004d3807
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004d380e
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0xec],EAX      ; 004d3813
    FLD float ptr [ESP + 0xec]          ; 004d381a
    FABS                                ; 004d3821
    ADD ESP,0x4                         ; 004d3823
    FCOMP double ptr [0x005c4dad]       ; 004d3826 | DAT_005c4dad
    FNSTSW AX                           ; 004d382c
    SAHF                                ; 004d382e
    JA 0x004d35b6                       ; 004d382f
        ;   XREF to: 004d35b6 (CONDITIONAL_JUMP)  ; LAB_004d35b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d3835
    MOV dword ptr [EAX + 0x20b9c],EBX   ; 004d3838
    JMP 0x004d3557                      ; 004d383e
        ;   XREF to: 004d3557 (UNCONDITIONAL_JUMP)  ; LAB_004d3557

