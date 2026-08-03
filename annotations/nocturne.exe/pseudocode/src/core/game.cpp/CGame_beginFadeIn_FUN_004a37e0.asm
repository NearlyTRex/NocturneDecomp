; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dd37
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500b56
;
; Referenced Globals:
;   float FLOAT_00583afa = 0.5
;   undefined4 DAT_0059de84
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005be220
;   undefined4 DAT_01c78b04
;   undefined4 DAT_01c78b08
;   undefined4 DAT_01c78b0c
;   undefined4 DAT_01c78b10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
;   core_game.cpp_calculateIrisFadeCenter_FUN_004a3860
;
; *****************************************************************************

section .text

    MOV EAX,EDX                         ; 004a3695
        ;   Label: LAB_004a3695
    MOV EBX,dword ptr [EDX + 0x14c]     ; 004a3697
    MOV EDX,ESP                         ; 004a369d
    PUSH EDX                            ; 004a369f
    PUSH EAX                            ; 004a36a0
    CALL dword ptr [EBX + 0x14]         ; 004a36a1
    LEA EDX,[EAX + 0xc]                 ; 004a36a4
    FLD float ptr [EAX]                 ; 004a36a7
    FADD float ptr [EDX]                ; 004a36a9
    ADD ESP,0x8                         ; 004a36ab
    FST float ptr [ESP + 0x54]          ; 004a36ae
    FLD float ptr [EAX + 0x4]           ; 004a36b2
    FADD float ptr [EDX + 0x4]          ; 004a36b5
    FXCH                                ; 004a36b8
    FLD float ptr [0x00583afa]          ; 004a36ba | FLOAT_00583afa
    FXCH                                ; 004a36c0
    FMUL ST1                            ; 004a36c2
    FXCH ST2                            ; 004a36c4
    FST float ptr [ESP + 0x58]          ; 004a36c6
    FLD float ptr [EAX + 0x8]           ; 004a36ca
    FADD float ptr [EDX + 0x8]          ; 004a36cd
    FXCH                                ; 004a36d0
    FMUL ST2                            ; 004a36d2
    FXCH                                ; 004a36d4
    FST float ptr [ESP + 0x5c]          ; 004a36d6
    FMULP ST2                           ; 004a36da
    LEA EAX,[ESP + 0x30]                ; 004a36dc
    FXCH ST2                            ; 004a36e0
    FSTP float ptr [ESP + 0x30]         ; 004a36e2
    PUSH EAX                            ; 004a36e6
    LEA EAX,[ESP + 0x28]                ; 004a36e7
    FXCH                                ; 004a36eb
    FSTP float ptr [ESP + 0x38]         ; 004a36ed
    PUSH EAX                            ; 004a36f1
    MOV EAX,[0x005be220]                ; 004a36f2 | DAT_005be220
    FSTP float ptr [ESP + 0x40]         ; 004a36f7
    MOV ECX,dword ptr [EAX + 0xc]       ; 004a36fb
    PUSH ECX                            ; 004a36fe
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004a36ff
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004a3704
    LEA EBX,[ESP + 0x18]                ; 004a3707
    LEA EAX,[ESP + 0x24]                ; 004a370b
    FLD float ptr [EAX]                 ; 004a370f
    FMUL float ptr [0x0059de84]         ; 004a3711 | DAT_0059de84
    FISTP dword ptr [EBX]               ; 004a3717
    FLD float ptr [EAX + 0x4]           ; 004a3719
    FMUL float ptr [0x0059de84]         ; 004a371c | DAT_0059de84
    FISTP dword ptr [EBX + 0x4]         ; 004a3722
    FLD float ptr [EAX + 0x8]           ; 004a3725
    FMUL float ptr [0x0059de84]         ; 004a3728 | DAT_0059de84
    FISTP dword ptr [EBX + 0x8]         ; 004a372e
    LEA EAX,[ESP + 0x18]                ; 004a3731
    PUSH EAX                            ; 004a3735
    PUSH 0x1fb8508                      ; 004a3736
    LEA ESI,[ESP + 0x50]                ; 004a373b
    LEA EDI,[ESP + 0x44]                ; 004a373f
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610 ; 004a3743
        ;   XREF to: 00441610 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x50]                ; 004a3748
    ADD ESP,0x8                         ; 004a374c
    MOVSD ES:EDI,ESI                    ; 004a374f
    MOVSD ES:EDI,ESI                    ; 004a3750
    MOVSD ES:EDI,ESI                    ; 004a3751
    CMP dword ptr [ESP + 0x44],0x0      ; 004a3752
    JZ 0x004a3876                       ; 004a3757
        ;   XREF to: 004a3876 (CONDITIONAL_JUMP)  ; LAB_004a3876
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a375d
    MOV EDX,EAX                         ; 004a3761
    SAR EDX,0x1f                        ; 004a3763
    SHL EDX,0x10                        ; 004a3766
    SBB EAX,EDX                         ; 004a3769
    SAR EAX,0x10                        ; 004a376b
    MOV [0x01c78b0c],EAX                ; 004a376e | DAT_01c78b0c
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a3773
    MOV EDX,EAX                         ; 004a3777
    SAR EDX,0x1f                        ; 004a3779
    SHL EDX,0x10                        ; 004a377c
    SBB EAX,EDX                         ; 004a377f
    SAR EAX,0x10                        ; 004a3781
    MOV ESI,dword ptr [0x005b7620]      ; 004a3784 | DAT_005b7620
    MOV [0x01c78b10],EAX                ; 004a378a | DAT_01c78b10
    CMP ESI,0x1e0                       ; 004a378f
    JLE 0x004a3876                      ; 004a3795
        ;   XREF to: 004a3876 (CONDITIONAL_JUMP)  ; LAB_004a3876
    MOV EDI,dword ptr [0x005b761c]      ; 004a379b | DAT_005b761c
    MOV EDX,dword ptr [0x01c78b0c]      ; 004a37a1 | DAT_01c78b0c
    IMUL EDX,EDI                        ; 004a37a7
    MOV EBX,0x280                       ; 004a37aa
    MOV EAX,EDX                         ; 004a37af
    SAR EDX,0x1f                        ; 004a37b1
    IDIV EBX                            ; 004a37b4
    MOV EDX,dword ptr [0x01c78b10]      ; 004a37b6 | DAT_01c78b10
    IMUL EDX,ESI                        ; 004a37bc
    MOV EBX,0x1e0                       ; 004a37bf
    MOV [0x01c78b0c],EAX                ; 004a37c4 | DAT_01c78b0c
    MOV EAX,EDX                         ; 004a37c9
    SAR EDX,0x1f                        ; 004a37cb
    IDIV EBX                            ; 004a37ce
    MOV [0x01c78b10],EAX                ; 004a37d0 | DAT_01c78b10
    ADD ESP,0x60                        ; 004a37d5
    POP EDI                             ; 004a37d8
    POP ESI                             ; 004a37d9
    POP EBX                             ; 004a37da
    RET                                 ; 004a37db
    MOV dword ptr [0x01c78b04],0x1      ; 004a37e0 | DAT_01c78b04
        ;   Label: core_game.cpp_CGame_beginFadeIn_FUN_004a37e0
    MOV EDX,dword ptr [0x005b761c]      ; 004a37ea | DAT_005b761c
    MOV EAX,EDX                         ; 004a37f0
    SAR EDX,0x1f                        ; 004a37f2
    SUB EAX,EDX                         ; 004a37f5
    SAR EAX,0x1                         ; 004a37f7
    MOV EDX,dword ptr [0x005b7620]      ; 004a37f9 | DAT_005b7620
    MOV [0x01c78b0c],EAX                ; 004a37ff | DAT_01c78b0c
    MOV EAX,EDX                         ; 004a3804
    SAR EDX,0x1f                        ; 004a3806
    SUB EAX,EDX                         ; 004a3809
    SAR EAX,0x1                         ; 004a380b
    XOR ECX,ECX                         ; 004a380d
    MOV dword ptr [0x01c78b08],ECX      ; 004a380f | DAT_01c78b08
    MOV [0x01c78b10],EAX                ; 004a3815 | DAT_01c78b10
    JMP 0x004a3860                      ; 004a381a
        ;   XREF to: 004a3860 (UNCONDITIONAL_CALL)

