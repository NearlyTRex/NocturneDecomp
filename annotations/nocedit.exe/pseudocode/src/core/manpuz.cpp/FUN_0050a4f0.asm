; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_0050a4f0()
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_manpuz.cpp_FUN_0050a610 at 0050a6a3
;
; Referenced Globals:
;   double DOUBLE_0063576d = 0.00392156862745098
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
;   sound_sndmain.cpp_setSfxPosition_FUN_005a9820
;   sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a4f0
        ;   Label: core_manpuz.cpp_FUN_0050a4f0
    PUSH ESI                            ; 0050a4f1
    PUSH EDI                            ; 0050a4f2
    PUSH EBP                            ; 0050a4f3
    MOV EBP,ESP                         ; 0050a4f4
    SUB ESP,0x8                         ; 0050a4f6
    AND ESP,0xfffffff8                  ; 0050a4f9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050a4fc
    MOV ESI,dword ptr [EBP + 0x20]      ; 0050a4ff
    MOV EBX,dword ptr [EBP + 0x28]      ; 0050a502
    FLD float ptr [EBP + 0x18]          ; 0050a505
    FLD float ptr [EBP + 0x1c]          ; 0050a508
    FCHS                                ; 0050a50b
    FXCH                                ; 0050a50d
    FSUB float ptr [EDX]                ; 0050a50f
    XOR EDI,EDI                         ; 0050a511
    FSTP float ptr [ESP + 0x4]          ; 0050a513
    FCOMP float ptr [ESP + 0x4]         ; 0050a517
    FNSTSW AX                           ; 0050a51b
    SAHF                                ; 0050a51d
    JA 0x0050a59a                       ; 0050a51e | LAB_0050a59a
        ;   XREF to: 0050a59a (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 0050a524
    FCOMP float ptr [EBP + 0x1c]        ; 0050a528
    FNSTSW AX                           ; 0050a52b
    SAHF                                ; 0050a52d
    JBE 0x0050a5a1                      ; 0050a52e | LAB_0050a5a1
        ;   XREF to: 0050a5a1 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 0050a530
    FADD float ptr [EBP + 0x1c]         ; 0050a532
    FSTP float ptr [EDX]                ; 0050a535
        ;   Label: LAB_0050a535
    FLD float ptr [EDX]                 ; 0050a537
        ;   Label: LAB_0050a537
    FMUL double ptr [0x0063576d]        ; 0050a539 | double DOUBLE_0063576d
    FST float ptr [ESP]                 ; 0050a53f
    FLDZ                                ; 0050a542
    FCOMPP                              ; 0050a544
    FNSTSW AX                           ; 0050a546
    SAHF                                ; 0050a548
    JNC 0x0050a5fb                      ; 0050a549 | LAB_0050a5fb
        ;   XREF to: 0050a5fb (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESI]             ; 0050a54f
    PUSH ECX                            ; 0050a551
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0050a552 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050a557
    TEST EAX,EAX                        ; 0050a55a
    JZ 0x0050a5ad                       ; 0050a55c | LAB_0050a5ad
        ;   XREF to: 0050a5ad (CONDITIONAL_JUMP)
    SUB ESP,0x8                         ; 0050a55e
    FLD float ptr [EBX + 0x8]           ; 0050a561
    FSTP double ptr [ESP]               ; 0050a564
    SUB ESP,0x8                         ; 0050a567
    FLD float ptr [EBX + 0x4]           ; 0050a56a
    FSTP double ptr [ESP]               ; 0050a56d
    SUB ESP,0x8                         ; 0050a570
    FLD float ptr [EBX]                 ; 0050a573
    FSTP double ptr [ESP]               ; 0050a575
    MOV EAX,dword ptr [ESI]             ; 0050a578
    PUSH EAX                            ; 0050a57a
    CALL sound_sndmain.cpp_setSfxPosition_FUN_005a9820 ; 0050a57b | int sound_sndmain.cpp_setSfxPosition_FUN_005a9820(uint sfx_handle, double pos_x, double pos_y, double pos_z)
        ;   XREF to: 005a9820 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 0050a580
    MOV EDX,dword ptr [ESI]             ; 0050a583
    PUSH dword ptr [ESP]                ; 0050a585
    PUSH EDX                            ; 0050a588
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 ; 0050a589 | int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)
        ;   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050a58e
    MOV EAX,EDI                         ; 0050a591
    MOV ESP,EBP                         ; 0050a593
    POP EBP                             ; 0050a595
    POP EDI                             ; 0050a596
    POP ESI                             ; 0050a597
    POP EBX                             ; 0050a598
    RET                                 ; 0050a599
    FLD float ptr [EDX]                 ; 0050a59a
        ;   Label: LAB_0050a59a
    FSUB float ptr [EBP + 0x1c]         ; 0050a59c
    JMP 0x0050a535                      ; 0050a59f | LAB_0050a535
        ;   XREF to: 0050a535 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050a5a1
        ;   Label: LAB_0050a5a1
    MOV EDI,0x1                         ; 0050a5a4
    MOV dword ptr [EDX],EAX             ; 0050a5a9
    JMP 0x0050a537                      ; 0050a5ab | LAB_0050a537
        ;   XREF to: 0050a537 (UNCONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 0050a5ad | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_0050a5ad
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH dword ptr [ESP]                ; 0050a5b2
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 0050a5b5 | void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050a5ba
    SUB ESP,0x8                         ; 0050a5bd
    FLD float ptr [EBX + 0x8]           ; 0050a5c0
    FSTP double ptr [ESP]               ; 0050a5c3
    SUB ESP,0x8                         ; 0050a5c6
    FLD float ptr [EBX + 0x4]           ; 0050a5c9
    FSTP double ptr [ESP]               ; 0050a5cc
    SUB ESP,0x8                         ; 0050a5cf
    FLD float ptr [EBX]                 ; 0050a5d2
    FSTP double ptr [ESP]               ; 0050a5d4
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0 ; 0050a5d7 | void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x, double pos_y, double pos_z)
        ;   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0050a5dc
    MOV EBX,dword ptr [EBP + 0x24]      ; 0050a5df
    PUSH EBX                            ; 0050a5e2
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 0050a5e3 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050a5e8
    MOV dword ptr [ESI],EAX             ; 0050a5eb
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 0050a5ed | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    MOV EAX,EDI                         ; 0050a5f2
    MOV ESP,EBP                         ; 0050a5f4
    POP EBP                             ; 0050a5f6
    POP EDI                             ; 0050a5f7
    POP ESI                             ; 0050a5f8
    POP EBX                             ; 0050a5f9
    RET                                 ; 0050a5fa
    MOV EDX,dword ptr [ESI]             ; 0050a5fb
        ;   Label: LAB_0050a5fb
    PUSH EDX                            ; 0050a5fd
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0050a5fe | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050a603
    MOV EAX,EDI                         ; 0050a606
    MOV ESP,EBP                         ; 0050a608
    POP EBP                             ; 0050a60a
    POP EDI                             ; 0050a60b
    POP ESI                             ; 0050a60c
    POP EBX                             ; 0050a60d
    RET                                 ; 0050a60e

