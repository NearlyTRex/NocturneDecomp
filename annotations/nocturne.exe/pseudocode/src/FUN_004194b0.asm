; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004194b0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x120]:1  local_120
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xc4]:4  local_c4
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
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
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; Referenced Globals:
;   undefined4 DAT_0057936e
;   undefined4 DAT_00579376
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CVector_ctor_FUN_0040e160
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004194b0
        ;   Label: FUN_004194b0
    PUSH EDI                            ; 004194b1
    PUSH EBP                            ; 004194b2
    MOV EBP,ESP                         ; 004194b3
    SUB ESP,0x114                       ; 004194b5
    SUB EBP,0x7a                        ; 004194bb
    MOV EBX,ESI                         ; 004194be
    MOV EDX,dword ptr [EBP + 0x8e]      ; 004194c0
    MOV EAX,EDX                         ; 004194c6
    SHL EAX,0x4                         ; 004194c8
    ADD EAX,EDX                         ; 004194cb
    MOV EDX,dword ptr [EBP + 0x8a]      ; 004194cd
    SHL EAX,0x2                         ; 004194d3
    ADD EAX,EDX                         ; 004194d6
    MOV ESI,dword ptr [EAX + 0x24ac]    ; 004194d8
    MOV EDI,dword ptr [EAX + 0x24a4]    ; 004194de
    MOV dword ptr [EBP + 0x2e],0x40224dd3 ; 004194e4
    LEA EAX,[EBP + 0x26]                ; 004194eb
    PUSH EAX                            ; 004194ee
    MOV ECX,0xbf456042                  ; 004194ef
    PUSH 0x2dd1184                      ; 004194f4 | DAT_02dd1184
    LEA EAX,[EBP + 0xffffff66]          ; 004194f9
    MOV EDX,0xc0224dd3                  ; 004194ff
    PUSH EAX                            ; 00419504
    MOV dword ptr [EBP + 0x26],ECX      ; 00419505
    MOV dword ptr [EBP + 0x2a],EDX      ; 00419508
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0041950b
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 00419510
    LEA EAX,[EBP + -0xa]                ; 00419513
    PUSH EAX                            ; 00419516
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00419517
    PUSH ESI                            ; 0041951d
    CALL dword ptr [EDX + 0x14]         ; 0041951e
    ADD ESP,0x8                         ; 00419521
    LEA EAX,[EBP + 0x32]                ; 00419524
    PUSH EAX                            ; 00419527
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 00419528
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CVector_ctor_FUN_0040e160()
    FLD float ptr [EBP + -0xa]          ; 0041952d
    FLD float ptr [EBP + -0x6]          ; 00419530
    FLD float ptr [EBP + -0x2]          ; 00419533
    LEA EAX,[EBP + 0x56]                ; 00419536
    ADD ESP,0x4                         ; 00419539
    FXCH ST2                            ; 0041953c
    FADD float ptr [EBP + 0x2]          ; 0041953e
    FXCH                                ; 00419541
    FADD float ptr [EBP + 0x6]          ; 00419543
    FXCH ST2                            ; 00419546
    FADD float ptr [EBP + 0xa]          ; 00419548
    PUSH EAX                            ; 0041954b
    FXCH                                ; 0041954c
    FSTP float ptr [EBP + 0x32]         ; 0041954e
    FXCH                                ; 00419551
    FSTP float ptr [EBP + 0x36]         ; 00419553
    FSTP float ptr [EBP + 0x3a]         ; 00419556
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 00419559
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CVector_ctor_FUN_0040e160()
    FLD float ptr [0x0057936e]          ; 0041955e | DAT_0057936e
    FLD float ptr [EBP + 0x32]          ; 00419564
    FMUL ST1                            ; 00419567
    FLD float ptr [EBP + 0x36]          ; 00419569
    FMULP ST2                           ; 0041956c
    FLD float ptr [EBP + -0x2]          ; 0041956e
    LEA EAX,[EBP + 0x56]                ; 00419571
    LEA EDX,[EBP + 0x3e]                ; 00419574
    ADD ESP,0x4                         ; 00419577
    FADD double ptr [0x00579376]        ; 0041957a | DAT_00579376
    FXCH                                ; 00419580
    FSTP float ptr [EBP + 0x56]         ; 00419582
    FXCH                                ; 00419585
    FSTP float ptr [EBP + 0x5a]         ; 00419587
    FSTP float ptr [EBP + 0x5e]         ; 0041958a
    CMP EDX,EAX                         ; 0041958d
    JZ 0x004195a3                       ; 0041958f
        ;   XREF to: 004195a3 (CONDITIONAL_JUMP)  ; LAB_004195a3
    MOV EAX,dword ptr [EBP + 0x56]      ; 00419591
    MOV dword ptr [EBP + 0x3e],EAX      ; 00419594
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00419597
    MOV dword ptr [EBP + 0x42],EAX      ; 0041959a
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0041959d
    MOV dword ptr [EBP + 0x46],EAX      ; 004195a0
    LEA EDX,[EDI*0x4 + 0x0]             ; 004195a3
        ;   Label: LAB_004195a3
    MOV EAX,dword ptr [EBP + 0x8a]      ; 004195aa
    SUB EDX,EDI                         ; 004195b0
    ADD EAX,0xfd0                       ; 004195b2
    SHL EDX,0x4                         ; 004195b7
    ADD EAX,EDX                         ; 004195ba
    PUSH EAX                            ; 004195bc
    MOV dword ptr [EBP + 0x22],0xbda7ef9e ; 004195bd
    LEA EAX,[EBP + 0x1a]                ; 004195c4
    MOV ECX,0x3d03126f                  ; 004195c7
    PUSH EAX                            ; 004195cc
    LEA EAX,[EBP + 0xe]                 ; 004195cd
    MOV ESI,0x3e560419                  ; 004195d0
    PUSH EAX                            ; 004195d5
    MOV dword ptr [EBP + 0x1a],ECX      ; 004195d6
    MOV dword ptr [EBP + 0x1e],ESI      ; 004195d9
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004195dc
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,EAX                         ; 004195e1
    LEA EAX,[EBP + 0x6e]                ; 004195e3
    ADD ESP,0xc                         ; 004195e6
    CMP EAX,EDX                         ; 004195e9
    JZ 0x004195fe                       ; 004195eb
        ;   XREF to: 004195fe (CONDITIONAL_JUMP)  ; LAB_004195fe
    MOV EAX,dword ptr [EDX]             ; 004195ed
    MOV dword ptr [EBP + 0x6e],EAX      ; 004195ef
    MOV EAX,dword ptr [EDX + 0x4]       ; 004195f2
    MOV dword ptr [EBP + 0x72],EAX      ; 004195f5
    MOV EAX,dword ptr [EDX + 0x8]       ; 004195f8
    MOV dword ptr [EBP + 0x76],EAX      ; 004195fb
    LEA EDX,[EDI*0x4 + 0x0]             ; 004195fe
        ;   Label: LAB_004195fe
    MOV EAX,dword ptr [EBP + 0x8a]      ; 00419605
    SUB EDX,EDI                         ; 0041960b
    ADD EAX,0xfd0                       ; 0041960d
    SHL EDX,0x4                         ; 00419612
    ADD EAX,EDX                         ; 00419615
    PUSH EAX                            ; 00419617
    LEA EAX,[EBP + 0xffffff66]          ; 00419618
    PUSH EAX                            ; 0041961e
    LEA ESI,[EBP + -0x3a]               ; 0041961f
    LEA EDI,[EBP + -0x6a]               ; 00419622
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 00419625
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 0041962a
    LEA EAX,[EBP + -0x6a]               ; 0041962d
    MOV ECX,0xc                         ; 00419630
    PUSH EAX                            ; 00419635
    LEA EAX,[EBP + 0x3e]                ; 00419636
    LEA ESI,[EBP + -0x3a]               ; 00419639
    PUSH EAX                            ; 0041963c
    LEA EAX,[EBP + 0x62]                ; 0041963d
    MOVSD.REP ES:EDI,ESI                ; 00419640
    PUSH EAX                            ; 00419642
    LEA ESI,[EBP + -0x6a]               ; 00419643
    MOV EDI,EBX                         ; 00419646
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00419648
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    FLD float ptr [EBP + 0x6e]          ; 0041964d
    FLD float ptr [EBP + 0x72]          ; 00419650
    FLD float ptr [EBP + 0x76]          ; 00419653
    FLD float ptr [EBP + -0x5e]         ; 00419656
    FLD float ptr [EBP + -0x4e]         ; 00419659
    FLD float ptr [EBP + -0x3e]         ; 0041965c
    MOV ECX,0xc                         ; 0041965f
    FXCH ST5                            ; 00419664
    FSUB float ptr [EAX]                ; 00419666
    ADD ESP,0xc                         ; 00419668
    FSTP float ptr [EBP + 0x4a]         ; 0041966b
    FXCH ST3                            ; 0041966e
    FSUB float ptr [EAX + 0x4]          ; 00419670
    FXCH                                ; 00419673
    FADD float ptr [EBP + 0x4a]         ; 00419675
    FXCH                                ; 00419678
    FSTP float ptr [EBP + 0x4e]         ; 0041967a
    FXCH                                ; 0041967d
    FSUB float ptr [EAX + 0x8]          ; 0041967f
    FXCH ST2                            ; 00419682
    FADD float ptr [EBP + 0x4e]         ; 00419684
    FXCH ST2                            ; 00419687
    FSTP float ptr [EBP + 0x52]         ; 00419689
    FSTP float ptr [EBP + -0x5e]        ; 0041968c
    FXCH                                ; 0041968f
    FADD float ptr [EBP + 0x52]         ; 00419691
    FXCH                                ; 00419694
    FSTP float ptr [EBP + -0x4e]        ; 00419696
    FSTP float ptr [EBP + -0x3e]        ; 00419699
    MOVSD.REP ES:EDI,ESI                ; 0041969c
    MOV EAX,EBX                         ; 0041969e
    LEA ESP,[EBP + 0x7a]                ; 004196a0
    POP EBP                             ; 004196a3
    POP EDI                             ; 004196a4
    POP EBX                             ; 004196a5
    RET                                 ; 004196a6

