; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_005a3650(CTurret *this_ptr,float delta_time)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x68]:1  local_68
;
; XREF[1]:
;   core_turret.cpp_FUN_005a2d00 at 005a333f
;
; Referenced Globals:
;   undefined4 DAT_005f8b78
;   undefined4 DAT_005f8b80
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_turret.cpp_CTurret_aimAtTarget_FUN_005a3350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3650
        ;   Label: core_turret.cpp_CTurret_updatePatrol_FUN_005a3650
    PUSH ESI                            ; 005a3651
    PUSH EDI                            ; 005a3652
    PUSH EBP                            ; 005a3653
    SUB ESP,0x70                        ; 005a3654
    MOV EBP,dword ptr [ESP + 0x84]      ; 005a3657
    FLD float ptr [EBP + 0x86c]         ; 005a365e
    FLDZ                                ; 005a3664
    FCOMPP                              ; 005a3666
    FNSTSW AX                           ; 005a3668
    SAHF                                ; 005a366a
    JNC 0x005a3696                      ; 005a366b
        ;   XREF to: 005a3696 (CONDITIONAL_JUMP)  ; LAB_005a3696
    FLD float ptr [EBP + 0x300]         ; 005a366d
    FLDZ                                ; 005a3673
    FCOMPP                              ; 005a3675
    FNSTSW AX                           ; 005a3677
    SAHF                                ; 005a3679
    JNC 0x005a3684                      ; 005a367a
        ;   XREF to: 005a3684 (CONDITIONAL_JUMP)  ; LAB_005a3684
    ADD ESP,0x70                        ; 005a367c
        ;   Label: LAB_005a367c
    POP EBP                             ; 005a367f
    POP EDI                             ; 005a3680
    POP ESI                             ; 005a3681
    POP EBX                             ; 005a3682
    RET                                 ; 005a3683
    PUSH EBP                            ; 005a3684
        ;   Label: LAB_005a3684
    MOV EAX,dword ptr [EBP + 0x154]     ; 005a3685
    CALL dword ptr [EAX + 0xe4]         ; 005a368b
    ADD ESP,0x4                         ; 005a3691
    JMP 0x005a367c                      ; 005a3694
        ;   XREF to: 005a367c (UNCONDITIONAL_JUMP)  ; LAB_005a367c
    CMP dword ptr [EBP + 0x780],0x0     ; 005a3696
        ;   Label: LAB_005a3696
    JZ 0x005a367c                       ; 005a369d
        ;   XREF to: 005a367c (CONDITIONAL_JUMP)  ; LAB_005a367c
    FLD float ptr [ESP + 0x88]          ; 005a369f
    FMUL double ptr [0x005f8b78]        ; 005a36a6 | DAT_005f8b78
    SUB ESP,0x4                         ; 005a36ac
    LEA EBX,[EBP + 0x84c]               ; 005a36af
    FSTP float ptr [ESP]                ; 005a36b5
    PUSH EBX                            ; 005a36b8
    PUSH EBP                            ; 005a36b9
    CALL core_turret.cpp_CTurret_aimAtTarget_FUN_005a3350 ; 005a36ba
        ;   XREF to: 005a3350 (UNCONDITIONAL_CALL)  ; int core_turret.cpp_CTurret_aimAtTarget_FUN_005a3350(CTurret * this_ptr, CVector3f * target_pos, float delta_time)
    ADD ESP,0xc                         ; 005a36bf
    TEST EAX,EAX                        ; 005a36c2
    JZ 0x005a367c                       ; 005a36c4
        ;   XREF to: 005a367c (CONDITIONAL_JUMP)  ; LAB_005a367c
    MOV EAX,dword ptr [EBP + 0x780]     ; 005a36c6
    PUSH EAX                            ; 005a36cc
    MOV EDX,dword ptr [EAX + 0x154]     ; 005a36cd
    LEA ESI,[ESP + 0x1c]                ; 005a36d3
    LEA EDI,[ESP + 0x4]                 ; 005a36d7
    CALL dword ptr [EDX + 0x1c]         ; 005a36db
    MOV ECX,0x6                         ; 005a36de
    LEA ESI,[ESP + 0x1c]                ; 005a36e3
    ADD ESP,0x4                         ; 005a36e7
    MOVSD.REP ES:EDI,ESI                ; 005a36ea
    LEA EDI,[ESP + 0x48]                ; 005a36ec
    LEA ESI,[EBP + 0x84c]               ; 005a36f0
    XOR ECX,ECX                         ; 005a36f6
    MOV dword ptr [ESP + 0x64],EBX      ; 005a36f8
    MOV dword ptr [ESP + 0x68],ECX      ; 005a36fc
    MOVSD ES:EDI,ESI                    ; 005a3700
    MOVSD ES:EDI,ESI                    ; 005a3701
    MOVSD ES:EDI,ESI                    ; 005a3702
    PUSH 0x3f666666                     ; 005a3703
        ;   Label: LAB_005a3703
    PUSH 0x3dcccccd                     ; 005a3708
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005a370d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 005a3712
    FLD float ptr [ESP + 0x74]          ; 005a3716
    ADD ESP,0x8                         ; 005a371a
    FLD1                                ; 005a371d
    FXCH                                ; 005a371f
    FSTP float ptr [ESP + 0x54]         ; 005a3721
    FSUB float ptr [ESP + 0x54]         ; 005a3725
    FMUL float ptr [ESP + 0xc]          ; 005a3729
    FLD float ptr [ESP]                 ; 005a372d
    FMUL float ptr [ESP + 0x54]         ; 005a3730
    PUSH 0x3f666666                     ; 005a3734
    FADDP                               ; 005a3739
    PUSH 0x3dcccccd                     ; 005a373b
    FSTP float ptr [EBP + 0x84c]        ; 005a3740
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005a3746
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 005a374b
    FLD float ptr [ESP + 0x74]          ; 005a374f
    ADD ESP,0x8                         ; 005a3753
    FLD1                                ; 005a3756
    FXCH                                ; 005a3758
    FSTP float ptr [ESP + 0x54]         ; 005a375a
    FSUB float ptr [ESP + 0x54]         ; 005a375e
    FMUL float ptr [ESP + 0x14]         ; 005a3762
    FLD float ptr [ESP + 0x8]           ; 005a3766
    FMUL float ptr [ESP + 0x54]         ; 005a376a
    LEA EDI,[ESP + 0x30]                ; 005a376e
    PUSH EBX                            ; 005a3772
    MOV ESI,dword ptr [EBP + 0x780]     ; 005a3773
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3779
    PUSH ESI                            ; 005a377d
    MOV dword ptr [EBP + 0x850],EAX     ; 005a377e
    FADDP                               ; 005a3784
    LEA ESI,[ESP + 0x44]                ; 005a3786
    FSTP float ptr [EBP + 0x854]        ; 005a378a
    CALL core_actor.cpp_FUN_00408b40    ; 005a3790
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x44]                ; 005a3795
    ADD ESP,0x8                         ; 005a3799
    LEA EAX,[ESP + 0x30]                ; 005a379c
    MOVSD ES:EDI,ESI                    ; 005a37a0
    MOVSD ES:EDI,ESI                    ; 005a37a1
    MOVSD ES:EDI,ESI                    ; 005a37a2
    CMP EBX,EAX                         ; 005a37a3
    JNZ 0x005a37f4                      ; 005a37a5
        ;   XREF to: 005a37f4 (CONDITIONAL_JUMP)  ; LAB_005a37f4
    MOV EAX,dword ptr [ESP + 0x64]      ; 005a37a7
        ;   Label: LAB_005a37a7
    FLD float ptr [EAX]                 ; 005a37ab
    FSUB float ptr [ESP + 0x48]         ; 005a37ad
    FMUL ST0                            ; 005a37b1
    FLD float ptr [EAX + 0x4]           ; 005a37b3
    FSUB float ptr [ESP + 0x4c]         ; 005a37b6
    FMUL ST0                            ; 005a37ba
    FLD float ptr [EAX + 0x8]           ; 005a37bc
    FXCH                                ; 005a37bf
    FADDP ST2,ST0                       ; 005a37c1
    FSUB float ptr [ESP + 0x50]         ; 005a37c3
    FMUL ST0                            ; 005a37c7
    FADDP                               ; 005a37c9
    FCOMP float ptr [0x005f8b80]        ; 005a37cb | DAT_005f8b80
    FNSTSW AX                           ; 005a37d1
    SAHF                                ; 005a37d3
    JA 0x005a367c                       ; 005a37d4
        ;   XREF to: 005a367c (CONDITIONAL_JUMP)  ; LAB_005a367c
    MOV EDI,dword ptr [ESP + 0x68]      ; 005a37da
    INC EDI                             ; 005a37de
    MOV dword ptr [ESP + 0x68],EDI      ; 005a37df
    CMP EDI,0x5                         ; 005a37e3
    JL 0x005a3703                       ; 005a37e6
        ;   XREF to: 005a3703 (CONDITIONAL_JUMP)  ; LAB_005a3703
    ADD ESP,0x70                        ; 005a37ec
    POP EBP                             ; 005a37ef
    POP EDI                             ; 005a37f0
    POP ESI                             ; 005a37f1
    POP EBX                             ; 005a37f2
    RET                                 ; 005a37f3
    MOV EAX,dword ptr [ESP + 0x30]      ; 005a37f4
        ;   Label: LAB_005a37f4
    MOV dword ptr [EBX],EAX             ; 005a37f8
    MOV EAX,dword ptr [ESP + 0x34]      ; 005a37fa
    MOV dword ptr [EBX + 0x4],EAX       ; 005a37fe
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a3801
    MOV dword ptr [EBX + 0x8],EAX       ; 005a3805
    JMP 0x005a37a7                      ; 005a3808
        ;   XREF to: 005a37a7 (UNCONDITIONAL_JUMP)  ; LAB_005a37a7

