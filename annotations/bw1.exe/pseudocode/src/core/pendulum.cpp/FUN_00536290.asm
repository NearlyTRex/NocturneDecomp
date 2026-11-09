; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_FUN_00536290(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CDemonActor *    Stack[0xc]:4   left_hand_actor
; CDemonActor *    Stack[0x10]:4   right_hand_actor
;
; XREF[1]:
;   core_pendulum.cpp_FUN_00537020 at 00537143
;
; Referenced Globals:
;   undefined4 DAT_005ecc81
;   undefined4 DAT_006047d8
;   CGore* g_CGorePtr = 01cd0e3c
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f690
;   core_dirmat.cpp_FUN_0045f700
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_gore.cpp_FUN_004e6060
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536290
        ;   Label: core_pendulum.cpp_FUN_00536290
    PUSH ESI                            ; 00536291
    PUSH EDI                            ; 00536292
    PUSH EBP                            ; 00536293
    MOV EBP,ESP                         ; 00536294
    SUB ESP,0x1b8                       ; 00536296
    AND ESP,0xfffffff8                  ; 0053629c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053629f
    MOV EAX,ESP                         ; 005362a2
    PUSH EAX                            ; 005362a4
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 005362a5
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005362aa
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005362ad
    TEST EDX,EDX                        ; 005362b0
    JNZ 0x005362d6                      ; 005362b2
        ;   XREF to: 005362d6 (CONDITIONAL_JUMP)  ; LAB_005362d6
    MOV ESI,dword ptr [EBP + 0x20]      ; 005362b4
        ;   Label: LAB_005362b4
    TEST ESI,ESI                        ; 005362b7
    JZ 0x005362ec                       ; 005362b9
        ;   XREF to: 005362ec (CONDITIONAL_JUMP)  ; LAB_005362ec
    PUSH ESI                            ; 005362bb
    MOV EAX,dword ptr [ESI + 0x154]     ; 005362bc
    CALL dword ptr [EAX + 0x10c]        ; 005362c2
    ADD ESP,0x4                         ; 005362c8
    TEST EAX,EAX                        ; 005362cb
    JZ 0x005362ec                       ; 005362cd
        ;   XREF to: 005362ec (CONDITIONAL_JUMP)  ; LAB_005362ec
    MOV ESP,EBP                         ; 005362cf
        ;   Label: LAB_005362cf
    POP EBP                             ; 005362d1
    POP EDI                             ; 005362d2
    POP ESI                             ; 005362d3
    POP EBX                             ; 005362d4
    RET                                 ; 005362d5
    PUSH EDX                            ; 005362d6
        ;   Label: LAB_005362d6
    MOV EAX,dword ptr [EDX + 0x154]     ; 005362d7
    CALL dword ptr [EAX + 0x10c]        ; 005362dd
    ADD ESP,0x4                         ; 005362e3
    TEST EAX,EAX                        ; 005362e6
    JNZ 0x005362cf                      ; 005362e8
        ;   XREF to: 005362cf (CONDITIONAL_JUMP)  ; LAB_005362cf
    JMP 0x005362b4                      ; 005362ea
        ;   XREF to: 005362b4 (UNCONDITIONAL_JUMP)  ; LAB_005362b4
    MOV EAX,ESP                         ; 005362ec
        ;   Label: LAB_005362ec
    MOV ESI,dword ptr [EBP + 0x18]      ; 005362ee
    PUSH EAX                            ; 005362f1
    MOV EAX,dword ptr [EBP + 0x18]      ; 005362f2
    MOV ESI,dword ptr [ESI + 0x154]     ; 005362f5
    PUSH EAX                            ; 005362fb
    CALL dword ptr [ESI + 0x3c]         ; 005362fc
    ADD ESP,0x8                         ; 005362ff
    CMP EAX,0x2                         ; 00536302
    JNZ 0x005362cf                      ; 00536305
        ;   XREF to: 005362cf (CONDITIONAL_JUMP)  ; LAB_005362cf
    MOV EDX,dword ptr [EBP + 0x18]      ; 00536307
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053630a
    PUSH EDX                            ; 0053630d
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053630e
    LEA ESI,[ESP + 0xa4]                ; 00536314
    LEA EDI,[ESP + 0x2c]                ; 0053631b
    CALL dword ptr [EAX + 0x1c]         ; 0053631f
    MOV ECX,0x6                         ; 00536322
    LEA ESI,[ESP + 0xa4]                ; 00536327
    ADD ESP,0x4                         ; 0053632e
    MOVSD.REP ES:EDI,ESI                ; 00536331
    LEA EAX,[ESP + 0x28]                ; 00536333
    FLD float ptr [ESP + 0x28]          ; 00536337
    FLD float ptr [ESP + 0x2c]          ; 0053633b
    FLD float ptr [ESP + 0x30]          ; 0053633f
    LEA EDI,[ESP + 0x16c]               ; 00536343
    LEA ESI,[ESP + 0x100]               ; 0053634a
    FXCH ST2                            ; 00536351
    FADD float ptr [EAX + 0xc]          ; 00536353
    FXCH                                ; 00536356
    FADD float ptr [EAX + 0x10]         ; 00536358
    FXCH ST2                            ; 0053635b
    FADD float ptr [EAX + 0x14]         ; 0053635d
    FXCH                                ; 00536360
    FSTP float ptr [ESP + 0x100]        ; 00536362
    FXCH                                ; 00536369
    FSTP float ptr [ESP + 0x104]        ; 0053636b
    FSTP float ptr [ESP + 0x108]        ; 00536372
    MOVSD ES:EDI,ESI                    ; 00536379
    MOVSD ES:EDI,ESI                    ; 0053637a
    MOVSD ES:EDI,ESI                    ; 0053637b
    FLD float ptr [0x005ecc81]          ; 0053637c | DAT_005ecc81
    FLD float ptr [ESP + 0x16c]         ; 00536382
    FMUL ST1                            ; 00536389
    FLD float ptr [ESP + 0x170]         ; 0053638b
    FMUL ST2                            ; 00536392
    FLD float ptr [ESP + 0x174]         ; 00536394
    FMULP ST3                           ; 0053639b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053639d
    LEA EDI,[ESP + 0xd0]                ; 005363a0
    LEA ESI,[ESP + 0x190]               ; 005363a7
    FXCH                                ; 005363ae
    FSTP float ptr [ESP + 0x190]        ; 005363b0
    FSTP float ptr [ESP + 0x194]        ; 005363b7
    FSTP float ptr [ESP + 0x198]        ; 005363be
    MOVSD ES:EDI,ESI                    ; 005363c5
    MOVSD ES:EDI,ESI                    ; 005363c6
    MOVSD ES:EDI,ESI                    ; 005363c7
    FLD float ptr [EAX + 0x20]          ; 005363c8
    FLD float ptr [EAX + 0x24]          ; 005363cb
    FLD float ptr [EAX + 0x28]          ; 005363ce
    LEA EDI,[ESP + 0xdc]                ; 005363d1
    LEA ESI,[ESP + 0x160]               ; 005363d8
    FXCH ST2                            ; 005363df
    FADD float ptr [ESP + 0xd0]         ; 005363e1
    FXCH                                ; 005363e8
    FADD float ptr [ESP + 0xd4]         ; 005363ea
    FXCH ST2                            ; 005363f1
    FADD float ptr [ESP + 0xd8]         ; 005363f3
    FXCH                                ; 005363fa
    FSTP float ptr [ESP + 0x160]        ; 005363fc
    FXCH                                ; 00536403
    FSTP float ptr [ESP + 0x164]        ; 00536405
    FSTP float ptr [ESP + 0x168]        ; 0053640c
    MOVSD ES:EDI,ESI                    ; 00536413
    MOVSD ES:EDI,ESI                    ; 00536414
    MOVSD ES:EDI,ESI                    ; 00536415
    LEA EAX,[EBX + 0x20]                ; 00536416
    FLD float ptr [ESP + 0xdc]          ; 00536419
    FLD float ptr [ESP + 0xe0]          ; 00536420
    FLD float ptr [ESP + 0xe4]          ; 00536427
    LEA EDI,[ESP + 0x178]               ; 0053642e
    LEA ESI,[ESP + 0x10c]               ; 00536435
    FXCH ST2                            ; 0053643c
    FSUB float ptr [EAX]                ; 0053643e
    FXCH                                ; 00536440
    FSUB float ptr [EAX + 0x4]          ; 00536442
    FXCH ST2                            ; 00536445
    FSUB float ptr [EAX + 0x8]          ; 00536447
    FXCH                                ; 0053644a
    FSTP float ptr [ESP + 0x10c]        ; 0053644c
    FXCH                                ; 00536453
    FSTP float ptr [ESP + 0x110]        ; 00536455
    LEA EAX,[ESP + 0x178]               ; 0053645c
    FSTP float ptr [ESP + 0x114]        ; 00536463
    PUSH EAX                            ; 0053646a
    LEA EAX,[EBX + 0x3c]                ; 0053646b
    MOVSD ES:EDI,ESI                    ; 0053646e
    MOVSD ES:EDI,ESI                    ; 0053646f
    MOVSD ES:EDI,ESI                    ; 00536470
    PUSH EAX                            ; 00536471
    LEA ESI,[ESP + 0x15c]               ; 00536472
    LEA EDI,[ESP + 0xf0]                ; 00536479
    CALL core_dirmat.cpp_FUN_0045f700   ; 00536480
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x15c]               ; 00536485
    ADD ESP,0x8                         ; 0053648c
    MOVSD ES:EDI,ESI                    ; 0053648f
    MOVSD ES:EDI,ESI                    ; 00536490
    MOVSD ES:EDI,ESI                    ; 00536491
    LEA EAX,[ESP + 0xe8]                ; 00536492
    LEA ESI,[ESP + 0xdc]                ; 00536499
    CMP ESI,EAX                         ; 005364a0
    JZ 0x005364ce                       ; 005364a2
        ;   XREF to: 005364ce (CONDITIONAL_JUMP)  ; LAB_005364ce
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005364a4
    MOV dword ptr [ESP + 0xdc],EAX      ; 005364ab
    MOV EAX,dword ptr [ESP + 0xec]      ; 005364b2
    MOV dword ptr [ESP + 0xe0],EAX      ; 005364b9
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005364c0
    MOV dword ptr [ESP + 0xe4],EAX      ; 005364c7
    PUSH EBX                            ; 005364ce
        ;   Label: LAB_005364ce
    MOV EAX,dword ptr [EBX + 0x154]     ; 005364cf
    LEA ESI,[ESP + 0x74]                ; 005364d5
    LEA EDI,[ESP + 0x5c]                ; 005364d9
    CALL dword ptr [EAX + 0x1c]         ; 005364dd
    MOV ECX,0x6                         ; 005364e0
    LEA ESI,[ESP + 0x74]                ; 005364e5
    ADD ESP,0x4                         ; 005364e9
    MOVSD.REP ES:EDI,ESI                ; 005364ec
    FLD float ptr [ESP + 0x58]          ; 005364ee
    FCOMP float ptr [ESP + 0xdc]        ; 005364f2
    FNSTSW AX                           ; 005364f9
    SAHF                                ; 005364fb
    JA 0x005362cf                       ; 005364fc
        ;   XREF to: 005362cf (CONDITIONAL_JUMP)  ; LAB_005362cf
    FLD float ptr [ESP + 0x5c]          ; 00536502
    FCOMP float ptr [ESP + 0xe0]        ; 00536506
    FNSTSW AX                           ; 0053650d
    SAHF                                ; 0053650f
    JA 0x005362cf                       ; 00536510
        ;   XREF to: 005362cf (CONDITIONAL_JUMP)  ; LAB_005362cf
    FLD float ptr [ESP + 0x60]          ; 00536516
    FCOMP float ptr [ESP + 0xe4]        ; 0053651a
    FNSTSW AX                           ; 00536521
    SAHF                                ; 00536523
    JA 0x005362cf                       ; 00536524
        ;   XREF to: 005362cf (CONDITIONAL_JUMP)  ; LAB_005362cf
    FLD float ptr [ESP + 0x64]          ; 0053652a
    FCOMP float ptr [ESP + 0xdc]        ; 0053652e
    FNSTSW AX                           ; 00536535
    SAHF                                ; 00536537
    JC 0x005362cf                       ; 00536538
        ;   XREF to: 005362cf (CONDITIONAL_JUMP)  ; LAB_005362cf
    FLD float ptr [ESP + 0x68]          ; 0053653e
    FCOMP float ptr [ESP + 0xe0]        ; 00536542
    FNSTSW AX                           ; 00536549
    SAHF                                ; 0053654b
    JC 0x005362cf                       ; 0053654c
        ;   XREF to: 005362cf (CONDITIONAL_JUMP)  ; LAB_005362cf
    FLD float ptr [ESP + 0x6c]          ; 00536552
    FCOMP float ptr [ESP + 0xe4]        ; 00536556
    FNSTSW AX                           ; 0053655d
    SAHF                                ; 0053655f
    JC 0x005362cf                       ; 00536560
        ;   XREF to: 005362cf (CONDITIONAL_JUMP)  ; LAB_005362cf
    LEA EAX,[EBX + 0x158]               ; 00536566
    PUSH EAX                            ; 0053656c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0053656d
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00536572
    FLD float ptr [ESP + 0x1c]          ; 00536575
    FMUL ST0                            ; 00536579
    MOV ESI,dword ptr [EAX + 0x104]     ; 0053657b
    XOR ECX,ECX                         ; 00536581
    MOV dword ptr [ESP + 0x1a0],ESI     ; 00536583
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0053658a
    MOV dword ptr [ESP + 0x1b4],ECX     ; 00536590
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00536597
    FSTP float ptr [ESP + 0x1a4]        ; 0053659e
    TEST ESI,ESI                        ; 005365a5
    JLE 0x005362cf                      ; 005365a7
        ;   XREF to: 005362cf (CONDITIONAL_JUMP)  ; LAB_005362cf
    LEA EAX,[EBX + 0x20]                ; 005365ad
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005365b0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005365b7
    ADD EBX,0x3c                        ; 005365ba
    ADD EAX,0x20                        ; 005365bd
    MOV dword ptr [ESP + 0x19c],EBX     ; 005365c0
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005365c7
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 005365ce
        ;   Label: LAB_005365ce
    LEA EBX,[ESP + 0x184]               ; 005365d5
    FILD dword ptr [EAX]                ; 005365dc
    FMUL float ptr [0x006047d8]         ; 005365de | DAT_006047d8
    FSTP float ptr [EBX]                ; 005365e4
    FILD dword ptr [EAX + 0x4]          ; 005365e6
    FMUL float ptr [0x006047d8]         ; 005365e9 | DAT_006047d8
    FSTP float ptr [EBX + 0x4]          ; 005365ef
    FILD dword ptr [EAX + 0x8]          ; 005365f2
    FMUL float ptr [0x006047d8]         ; 005365f5 | DAT_006047d8
    FSTP float ptr [EBX + 0x8]          ; 005365fb
    LEA EAX,[ESP + 0x184]               ; 005365fe
    PUSH EAX                            ; 00536605
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 00536606
    LEA ESI,[ESP + 0x11c]               ; 0053660d
    PUSH EAX                            ; 00536614
    LEA EDI,[ESP + 0xfc]                ; 00536615
    LEA EBX,[ESP + 0xfc]                ; 0053661c
    CALL core_dirmat.cpp_FUN_0045f690   ; 00536623
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x120]               ; 00536628
    ADD ESP,0x8                         ; 0053662f
    LEA EAX,[ESP + 0x184]               ; 00536632
    MOVSD ES:EDI,ESI                    ; 00536639
    MOVSD ES:EDI,ESI                    ; 0053663a
    MOVSD ES:EDI,ESI                    ; 0053663b
    CMP EAX,EBX                         ; 0053663c
    JNZ 0x0053670c                      ; 0053663e
        ;   XREF to: 0053670c (CONDITIONAL_JUMP)  ; LAB_0053670c
    FLD float ptr [ESP + 0x184]         ; 00536644
        ;   Label: LAB_00536644
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0053664b
    FLD float ptr [ESP + 0x188]         ; 00536652
    FXCH                                ; 00536659
    FADD float ptr [EAX]                ; 0053665b
    FLD float ptr [ESP + 0x18c]         ; 0053665d
    FXCH                                ; 00536664
    FSTP float ptr [ESP + 0x184]        ; 00536666
    FXCH                                ; 0053666d
    FADD float ptr [EAX + 0x4]          ; 0053666f
    FLD float ptr [ESP + 0x184]         ; 00536672
    FXCH                                ; 00536679
    FSTP float ptr [ESP + 0x188]        ; 0053667b
    FXCH                                ; 00536682
    FADD float ptr [EAX + 0x8]          ; 00536684
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 00536687
    FSTP float ptr [ESP + 0x18c]        ; 0053668e
    FSUB float ptr [EAX]                ; 00536695
    FLD float ptr [ESP + 0x188]         ; 00536697
    FXCH                                ; 0053669e
    FSTP float ptr [ESP + 0x184]        ; 005366a0
    FSUB float ptr [EAX + 0x4]          ; 005366a7
    FLD float ptr [ESP + 0x18c]         ; 005366aa
    FXCH                                ; 005366b1
    FSTP float ptr [ESP + 0x188]        ; 005366b3
    FSUB float ptr [EAX + 0x8]          ; 005366ba
    FLD float ptr [ESP + 0x188]         ; 005366bd
    FXCH                                ; 005366c4
    FSTP float ptr [ESP + 0x18c]        ; 005366c6
    FCOMP float ptr [ESP + 0x14]        ; 005366cd
    FNSTSW AX                           ; 005366d1
    SAHF                                ; 005366d3
    JNC 0x0053673b                      ; 005366d4
        ;   XREF to: 0053673b (CONDITIONAL_JUMP)  ; LAB_0053673b
    MOV EBX,dword ptr [ESP + 0x1b4]     ; 005366d6
        ;   Label: LAB_005366d6
    MOV ESI,dword ptr [ESP + 0x1b0]     ; 005366dd
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 005366e4
    INC EBX                             ; 005366eb
    ADD ESI,0xc                         ; 005366ec
    MOV dword ptr [ESP + 0x1b4],EBX     ; 005366ef
    MOV dword ptr [ESP + 0x1b0],ESI     ; 005366f6
    CMP EBX,EDI                         ; 005366fd
    JL 0x005365ce                       ; 005366ff
        ;   XREF to: 005365ce (CONDITIONAL_JUMP)  ; LAB_005365ce
    MOV ESP,EBP                         ; 00536705
    POP EBP                             ; 00536707
    POP EDI                             ; 00536708
    POP ESI                             ; 00536709
    POP EBX                             ; 0053670a
    RET                                 ; 0053670b
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0053670c
        ;   Label: LAB_0053670c
    MOV dword ptr [ESP + 0x184],EAX     ; 00536713
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0053671a
    MOV dword ptr [ESP + 0x188],EAX     ; 00536721
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00536728
    MOV dword ptr [ESP + 0x18c],EAX     ; 0053672f
    JMP 0x00536644                      ; 00536736
        ;   XREF to: 00536644 (UNCONDITIONAL_JUMP)  ; LAB_00536644
    FLD float ptr [ESP + 0x18]          ; 0053673b
        ;   Label: LAB_0053673b
    FLD1                                ; 0053673f
    FADDP                               ; 00536741
    FLD float ptr [ESP + 0x188]         ; 00536743
    FCOMPP                              ; 0053674a
    FNSTSW AX                           ; 0053674c
    SAHF                                ; 0053674e
    JA 0x005366d6                       ; 0053674f
        ;   XREF to: 005366d6 (CONDITIONAL_JUMP)  ; LAB_005366d6
    FLD float ptr [ESP + 0x18c]         ; 00536751
    FMUL ST0                            ; 00536758
    FLD float ptr [ESP + 0x184]         ; 0053675a
    FMUL ST0                            ; 00536761
    FADDP                               ; 00536763
    FCOMP float ptr [ESP + 0x1a4]       ; 00536765
    FNSTSW AX                           ; 0053676c
    SAHF                                ; 0053676e
    JA 0x005366d6                       ; 0053676f
        ;   XREF to: 005366d6 (CONDITIONAL_JUMP)  ; LAB_005366d6
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00536775
    TEST EDX,EDX                        ; 00536778
    JZ 0x00536795                       ; 0053677a
        ;   XREF to: 00536795 (CONDITIONAL_JUMP)  ; LAB_00536795
    PUSH 0xbf800000                     ; 0053677c
    PUSH 0x0                            ; 00536781
    PUSH 0x7                            ; 00536783
    MOV EAX,dword ptr [EDX + 0x154]     ; 00536785
    PUSH EDX                            ; 0053678b
    CALL dword ptr [EAX + 0xdc]         ; 0053678c
    ADD ESP,0x10                        ; 00536792
    MOV EBX,dword ptr [EBP + 0x20]      ; 00536795
        ;   Label: LAB_00536795
    TEST EBX,EBX                        ; 00536798
    JZ 0x005367b5                       ; 0053679a
        ;   XREF to: 005367b5 (CONDITIONAL_JUMP)  ; LAB_005367b5
    PUSH 0xbf800000                     ; 0053679c
    PUSH 0x0                            ; 005367a1
    PUSH 0x7                            ; 005367a3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005367a5
    PUSH EBX                            ; 005367ab
    CALL dword ptr [EAX + 0xdc]         ; 005367ac
    ADD ESP,0x10                        ; 005367b2
    MOV EDI,dword ptr [EBP + 0x18]      ; 005367b5
        ;   Label: LAB_005367b5
    MOV EAX,dword ptr [EBP + 0x18]      ; 005367b8
    PUSH EDI                            ; 005367bb
    MOV EAX,dword ptr [EAX + 0x154]     ; 005367bc
    LEA ESI,[ESP + 0x44]                ; 005367c2
    CALL dword ptr [EAX + 0x1c]         ; 005367c6
    MOV ECX,0x6                         ; 005367c9
    LEA EDI,[ESP + 0x8c]                ; 005367ce
    LEA ESI,[ESP + 0x44]                ; 005367d5
    ADD ESP,0x4                         ; 005367d9
    MOVSD.REP ES:EDI,ESI                ; 005367dc
    LEA EAX,[ESP + 0x88]                ; 005367de
    FLD float ptr [ESP + 0x88]          ; 005367e5
    FLD float ptr [ESP + 0x8c]          ; 005367ec
    FLD float ptr [ESP + 0x90]          ; 005367f3
    LEA EDI,[ESP + 0x148]               ; 005367fa
    LEA ESI,[ESP + 0x130]               ; 00536801
    FXCH ST2                            ; 00536808
    FADD float ptr [EAX + 0xc]          ; 0053680a
    FXCH                                ; 0053680d
    FADD float ptr [EAX + 0x10]         ; 0053680f
    FXCH ST2                            ; 00536812
    FADD float ptr [EAX + 0x14]         ; 00536814
    FXCH                                ; 00536817
    FSTP float ptr [ESP + 0x130]        ; 00536819
    FXCH                                ; 00536820
    FSTP float ptr [ESP + 0x134]        ; 00536822
    FSTP float ptr [ESP + 0x138]        ; 00536829
    MOVSD ES:EDI,ESI                    ; 00536830
    MOVSD ES:EDI,ESI                    ; 00536831
    MOVSD ES:EDI,ESI                    ; 00536832
    FLD float ptr [0x005ecc81]          ; 00536833 | DAT_005ecc81
    FLD float ptr [ESP + 0x148]         ; 00536839
    FMUL ST1                            ; 00536840
    FLD float ptr [ESP + 0x14c]         ; 00536842
    FMUL ST2                            ; 00536849
    FLD float ptr [ESP + 0x150]         ; 0053684b
    FMULP ST3                           ; 00536852
    MOV EAX,dword ptr [EBP + 0x18]      ; 00536854
    LEA EDI,[ESP + 0xc4]                ; 00536857
    LEA ESI,[ESP + 0x124]               ; 0053685e
    FXCH                                ; 00536865
    FSTP float ptr [ESP + 0x124]        ; 00536867
    FSTP float ptr [ESP + 0x128]        ; 0053686e
    FSTP float ptr [ESP + 0x12c]        ; 00536875
    MOVSD ES:EDI,ESI                    ; 0053687c
    MOVSD ES:EDI,ESI                    ; 0053687d
    MOVSD ES:EDI,ESI                    ; 0053687e
    LEA EBX,[ESP + 0x184]               ; 0053687f
    FLD float ptr [EAX + 0x24]          ; 00536886
    FLD float ptr [EAX + 0x28]          ; 00536889
    FLD float ptr [EAX + 0x20]          ; 0053688c
    LEA EDI,[ESP + 0x13c]               ; 0053688f
    LEA ESI,[ESP + 0xb8]                ; 00536896
    LEA EAX,[ESP + 0x13c]               ; 0053689d
    FADD float ptr [ESP + 0xc4]         ; 005368a4
    FXCH ST2                            ; 005368ab
    FADD float ptr [ESP + 0xc8]         ; 005368ad
    FXCH                                ; 005368b4
    FADD float ptr [ESP + 0xcc]         ; 005368b6
    FXCH ST2                            ; 005368bd
    FSTP float ptr [ESP + 0xb8]         ; 005368bf
    FSTP float ptr [ESP + 0xbc]         ; 005368c6
    FSTP float ptr [ESP + 0xc0]         ; 005368cd
    MOVSD ES:EDI,ESI                    ; 005368d4
    MOVSD ES:EDI,ESI                    ; 005368d5
    MOVSD ES:EDI,ESI                    ; 005368d6
    CMP EBX,EAX                         ; 005368d7
    JZ 0x00536905                       ; 005368d9
        ;   XREF to: 00536905 (CONDITIONAL_JUMP)  ; LAB_00536905
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005368db
    MOV dword ptr [ESP + 0x184],EAX     ; 005368e2
    MOV EAX,dword ptr [ESP + 0x140]     ; 005368e9
    MOV dword ptr [ESP + 0x188],EAX     ; 005368f0
    MOV EAX,dword ptr [ESP + 0x144]     ; 005368f7
    MOV dword ptr [ESP + 0x18c],EAX     ; 005368fe
    PUSH 0x0                            ; 00536905
        ;   Label: LAB_00536905
    PUSH 0xc8                           ; 00536907
    PUSH 0x0                            ; 0053690c
    LEA EAX,[ESP + 0x190]               ; 0053690e
    PUSH EAX                            ; 00536915
    MOV EAX,[0x0061dca4]                ; 00536916 | g_CGorePtr
    PUSH EAX                            ; 0053691b
    CALL core_gore.cpp_FUN_004e6060     ; 0053691c
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00536921
    MOV ESP,EBP                         ; 00536924
    POP EBP                             ; 00536926
    POP EDI                             ; 00536927
    POP ESI                             ; 00536928
    POP EBX                             ; 00536929
    RET                                 ; 0053692a

