; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00555530(CSfxSlot *this_ptr,double hardware_playback_pos)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   hardware_playback_pos
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_00554920 at 00554d38
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0 at 00555515
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d33cf
;   TerminatedCString s_SfxSlot_updatePlaybackPo_005d33e4
;   TerminatedCString s_sound_sndmain_cpp_005d340e
;   TerminatedCString s_SfxSlot_updatePlaybackPo_005d3423
;   TerminatedCString s_sound_sndmain_cpp_005d3458
;   TerminatedCString s_SfxSlot_updatePlaybackPo_005d346d
;   undefined4 DAT_005d34ba
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_floor_FUN_005a3600
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00555b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555530
        ;   Label: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00555530
    PUSH ESI                            ; 00555531
    PUSH EDI                            ; 00555532
    PUSH EBP                            ; 00555533
    MOV EBP,ESP                         ; 00555534
    SUB ESP,0x18                        ; 00555536
    AND ESP,0xfffffff8                  ; 00555539
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055553c
    CMP dword ptr [EBX + 0x68],0x0      ; 0055553f
    JZ 0x00555666                       ; 00555543
        ;   XREF to: 00555666 (CONDITIONAL_JUMP)  ; LAB_00555666
    FLDZ                                ; 00555549
        ;   Label: LAB_00555549
    FCOMP double ptr [EBP + 0x18]       ; 0055554b
    FNSTSW AX                           ; 0055554e
    SAHF                                ; 00555550
    JBE 0x0055568e                      ; 00555551
        ;   XREF to: 0055568e (CONDITIONAL_JUMP)  ; LAB_0055568e
    MOV EDI,0x5d340e                    ; 00555557 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00555557
    MOV EAX,0xd3c                       ; 0055555c
    PUSH 0x5d3423                       ; 00555561 | = "SfxSlot::updatePlaybackPos - invalid ..."
    MOV dword ptr [0x01d71de0],EDI      ; 00555566 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0055556c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00555571
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00555576
    FLD double ptr [EBP + 0x18]         ; 00555579
        ;   Label: LAB_00555579
    FSUB double ptr [EBX + 0x10c]       ; 0055557c
    FLDZ                                ; 00555582
    FXCH                                ; 00555584
    FSTP double ptr [ESP]               ; 00555586
    FCOMP double ptr [ESP]              ; 00555589
    FNSTSW AX                           ; 0055558c
    SAHF                                ; 0055558e
    JBE 0x005555a0                      ; 0055558f
        ;   XREF to: 005555a0 (CONDITIONAL_JUMP)  ; LAB_005555a0
    MOV EAX,dword ptr [EBX + 0x68]      ; 00555591
    FILD dword ptr [EAX + 0x164]        ; 00555594
    FADD double ptr [ESP]               ; 0055559a
    FSTP double ptr [ESP]               ; 0055559d
    FLDZ                                ; 005555a0
        ;   Label: LAB_005555a0
    FCOMP double ptr [ESP]              ; 005555a2
    FNSTSW AX                           ; 005555a5
    SAHF                                ; 005555a7
    JBE 0x005556a8                      ; 005555a8
        ;   XREF to: 005556a8 (CONDITIONAL_JUMP)  ; LAB_005556a8
    MOV ESI,dword ptr [EBX + 0x68]      ; 005555ae
        ;   Label: LAB_005555ae
    PUSH ESI                            ; 005555b1
    MOV EDI,dword ptr [ESI + 0x164]     ; 005555b2
    MOV EDX,0x5d3458                    ; 005555b8 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 005555bd
    MOV EAX,dword ptr [ESP + 0xc]       ; 005555be
    MOV dword ptr [0x01d71de0],EDX      ; 005555c2 | DAT_01d71de0
    PUSH EAX                            ; 005555c8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005555c9
    MOV ECX,0xd4a                       ; 005555cd
    PUSH EDX                            ; 005555d2
    MOV dword ptr [0x01d71de4],ECX      ; 005555d3 | DAT_01d71de4
    MOV ECX,dword ptr [EBX + 0x110]     ; 005555d9
    PUSH ECX                            ; 005555df
    MOV ESI,dword ptr [EBX + 0x10c]     ; 005555e0
    PUSH ESI                            ; 005555e6
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005555e7
    PUSH EDI                            ; 005555ea
    MOV EAX,dword ptr [EBP + 0x18]      ; 005555eb
    PUSH EAX                            ; 005555ee
    PUSH 0x5d346d                       ; 005555ef | = "SfxSlot::updatePlaybackPos - stepped ..."
    CALL core_main.c_FUN_004e4330       ; 005555f4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x24                        ; 005555f9
    FLD double ptr [EBX + 0x50]         ; 005555fc
        ;   Label: LAB_005555fc
    FCOMP double ptr [EBX + 0x10c]      ; 005555ff
    FNSTSW AX                           ; 00555605
    SAHF                                ; 00555607
    JZ 0x005556c8                       ; 00555608
        ;   XREF to: 005556c8 (CONDITIONAL_JUMP)  ; LAB_005556c8
    FLD double ptr [EBX + 0x50]         ; 0055560e
        ;   Label: LAB_0055560e
    FADD double ptr [ESP]               ; 00555611
    FSTP double ptr [EBX + 0x50]        ; 00555614
    FLDZ                                ; 00555617
        ;   Label: LAB_00555617
    FCOMP double ptr [EBX + 0x50]       ; 00555619
    FNSTSW AX                           ; 0055561c
    SAHF                                ; 0055561e
    JBE 0x0055562f                      ; 0055561f
        ;   XREF to: 0055562f (CONDITIONAL_JUMP)  ; LAB_0055562f
    MOV dword ptr [EBX + 0x50],0x0      ; 00555621
    MOV dword ptr [EBX + 0x54],0x0      ; 00555628
    MOV EDX,dword ptr [EBX + 0x68]      ; 0055562f
        ;   Label: LAB_0055562f
    CMP dword ptr [EDX + 0x110],0x0     ; 00555632
    JL 0x0055564d                       ; 00555639
        ;   XREF to: 0055564d (CONDITIONAL_JUMP)  ; LAB_0055564d
    FILD dword ptr [EDX + 0x110]        ; 0055563b
    FCOMP double ptr [EBX + 0x50]       ; 00555641
    FNSTSW AX                           ; 00555644
    SAHF                                ; 00555646
    JBE 0x005556e8                      ; 00555647
        ;   XREF to: 005556e8 (CONDITIONAL_JUMP)  ; LAB_005556e8
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055564d
        ;   Label: LAB_0055564d
    MOV dword ptr [EBX + 0x10c],EAX     ; 00555650
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00555656
    MOV dword ptr [EBX + 0x110],EAX     ; 00555659
    MOV ESP,EBP                         ; 0055565f
    POP EBP                             ; 00555661
    POP EDI                             ; 00555662
    POP ESI                             ; 00555663
    POP EBX                             ; 00555664
    RET                                 ; 00555665
    MOV ECX,0x5d33cf                    ; 00555666 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00555666
    MOV ESI,0xd36                       ; 0055566b
    PUSH 0x5d33e4                       ; 00555670 | = "SfxSlot::updatePlaybackPos - no sampl..."
    MOV dword ptr [0x01d71de0],ECX      ; 00555675 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0055567b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00555681
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00555686
    JMP 0x00555549                      ; 00555689
        ;   XREF to: 00555549 (UNCONDITIONAL_JUMP)  ; LAB_00555549
    MOV EAX,dword ptr [EBX + 0x68]      ; 0055568e
        ;   Label: LAB_0055568e
    FILD dword ptr [EAX + 0x164]        ; 00555691
    FCOMP double ptr [EBP + 0x18]       ; 00555697
    FNSTSW AX                           ; 0055569a
    SAHF                                ; 0055569c
    JC 0x00555557                       ; 0055569d
        ;   XREF to: 00555557 (CONDITIONAL_JUMP)  ; LAB_00555557
    JMP 0x00555579                      ; 005556a3
        ;   XREF to: 00555579 (UNCONDITIONAL_JUMP)  ; LAB_00555579
    MOV EAX,dword ptr [EBX + 0x68]      ; 005556a8
        ;   Label: LAB_005556a8
    FILD dword ptr [EAX + 0x164]        ; 005556ab
    FADD double ptr [0x005d34ba]        ; 005556b1 | DAT_005d34ba
    FCOMP double ptr [ESP]              ; 005556b7
    FNSTSW AX                           ; 005556ba
    SAHF                                ; 005556bc
    JC 0x005555ae                       ; 005556bd
        ;   XREF to: 005555ae (CONDITIONAL_JUMP)  ; LAB_005555ae
    JMP 0x005555fc                      ; 005556c3
        ;   XREF to: 005555fc (UNCONDITIONAL_JUMP)  ; LAB_005555fc
    FLD double ptr [EBP + 0x18]         ; 005556c8
        ;   Label: LAB_005556c8
    FCOMP double ptr [EBX + 0x50]       ; 005556cb
    FNSTSW AX                           ; 005556ce
    SAHF                                ; 005556d0
    JC 0x0055560e                       ; 005556d1
        ;   XREF to: 0055560e (CONDITIONAL_JUMP)  ; LAB_0055560e
    MOV EAX,dword ptr [EBP + 0x18]      ; 005556d7
    MOV dword ptr [EBX + 0x50],EAX      ; 005556da
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005556dd
    MOV dword ptr [EBX + 0x54],EAX      ; 005556e0
    JMP 0x00555617                      ; 005556e3
        ;   XREF to: 00555617 (UNCONDITIONAL_JUMP)  ; LAB_00555617
    PUSH EDX                            ; 005556e8
        ;   Label: LAB_005556e8
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00555b80 ; 005556e9
        ;   XREF to: 00555b80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00555b80(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005556ee
    TEST EAX,EAX                        ; 005556f1
    JNZ 0x00555706                      ; 005556f3
        ;   XREF to: 00555706 (CONDITIONAL_JUMP)  ; LAB_00555706
    MOV EAX,dword ptr [EBX + 0x68]      ; 005556f5
    FILD dword ptr [EAX + 0x110]        ; 005556f8
    FSTP double ptr [EBX + 0x50]        ; 005556fe
    JMP 0x0055564d                      ; 00555701
        ;   XREF to: 0055564d (UNCONDITIONAL_JUMP)  ; LAB_0055564d
    MOV EAX,dword ptr [EBX + 0x68]      ; 00555706
        ;   Label: LAB_00555706
    FLD double ptr [EBX + 0x50]         ; 00555709
    FILD dword ptr [EAX + 0x110]        ; 0055570c
    FSTP double ptr [ESP + 0x10]        ; 00555712
    FDIV double ptr [ESP + 0x10]        ; 00555716
    SUB ESP,0x8                         ; 0055571a
    FSTP double ptr [ESP]               ; 0055571d
    CALL crt_math.c_floor_FUN_005a3600  ; 00555720
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 00555725
    MOV dword ptr [ESP + 0x14],EDX      ; 00555729
    FLD double ptr [ESP + 0x10]         ; 0055572d
    ADD ESP,0x8                         ; 00555731
    FMUL double ptr [ESP + 0x10]        ; 00555734
    FSUBR double ptr [EBX + 0x50]       ; 00555738
    FSTP double ptr [EBX + 0x50]        ; 0055573b
    JMP 0x0055564d                      ; 0055573e
        ;   XREF to: 0055564d (UNCONDITIONAL_JUMP)  ; LAB_0055564d

