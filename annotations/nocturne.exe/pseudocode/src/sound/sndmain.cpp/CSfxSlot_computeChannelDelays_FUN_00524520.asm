; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00524520(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 at 00524992
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00592d4d
;   TerminatedCString s_SfxSlot_kill_must_be_loc_00592d62
;   undefined4 DAT_005a2150
;   undefined4 DAT_005bea68
;   undefined4 DAT_005bea6c
;   undefined4 DAT_005bea80
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524520
        ;   Label: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00524520
    PUSH ESI                            ; 00524521
    PUSH EDI                            ; 00524522
    PUSH EBP                            ; 00524523
    MOV EBP,ESP                         ; 00524524
    SUB ESP,0xc                         ; 00524526
    AND ESP,0xfffffff8                  ; 00524529
    MOV ESI,dword ptr [0x005bea68]      ; 0052452c | DAT_005bea68
    MOV EDI,dword ptr [EBP + 0x14]      ; 00524532
    CMP dword ptr [0x02dc84bc],0x0      ; 00524535 | DAT_02dc84bc
    JLE 0x0052457d                      ; 0052453c
        ;   XREF to: 0052457d (CONDITIONAL_JUMP)  ; LAB_0052457d
    MOV ESI,dword ptr [0x005bea68]      ; 0052453e | DAT_005bea68
        ;   Label: LAB_0052453e
    CMP ESI,0x2                         ; 00524544
    JL 0x005245a2                       ; 00524547
        ;   XREF to: 005245a2 (CONDITIONAL_JUMP)  ; LAB_005245a2
    TEST byte ptr [EDI + 0x5c],0x1      ; 00524549
    JZ 0x005245ae                       ; 0052454d
        ;   XREF to: 005245ae (CONDITIONAL_JUMP)  ; LAB_005245ae
    XOR EDX,EDX                         ; 0052454f
    TEST ESI,ESI                        ; 00524551
    JLE 0x00524570                      ; 00524553
        ;   XREF to: 00524570 (CONDITIONAL_JUMP)  ; LAB_00524570
    MOV EAX,EDI                         ; 00524555
    ADD EAX,0x4                         ; 00524557
        ;   Label: LAB_00524557
    INC EDX                             ; 0052455a
    MOV dword ptr [EAX + 0xb8],0x0      ; 0052455b
    CMP EDX,ESI                         ; 00524565
    JL 0x00524557                       ; 00524567
        ;   XREF to: 00524557 (CONDITIONAL_JUMP)  ; LAB_00524557
    LEA EAX,[EAX]                       ; 00524569
    NOP                                 ; 0052456f
    MOV dword ptr [0x005bea68],ESI      ; 00524570 | DAT_005bea68
        ;   Label: LAB_00524570
    MOV ESP,EBP                         ; 00524576
    POP EBP                             ; 00524578
    POP EDI                             ; 00524579
    POP ESI                             ; 0052457a
    POP EBX                             ; 0052457b
    RET                                 ; 0052457c
    MOV ECX,0x592d4d                    ; 0052457d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0052457d
    MOV EBX,0x8e8                       ; 00524582
    PUSH 0x592d62                       ; 00524587 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 0052458c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00524592 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00524598
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0052459d
    JMP 0x0052453e                      ; 005245a0
        ;   XREF to: 0052453e (UNCONDITIONAL_JUMP)  ; LAB_0052453e
    MOV dword ptr [EDI + 0xbc],0x0      ; 005245a2
        ;   Label: LAB_005245a2
    JMP 0x00524570                      ; 005245ac
        ;   XREF to: 00524570 (UNCONDITIONAL_JUMP)  ; LAB_00524570
    FLD double ptr [0x005bea80]         ; 005245ae | DAT_005bea80
        ;   Label: LAB_005245ae
    FDIV double ptr [0x005a2150]        ; 005245b4 | DAT_005a2150
    FILD dword ptr [0x005bea6c]         ; 005245ba | DAT_005bea6c
    FMULP                               ; 005245c0
    MOV EBX,0x1869f                     ; 005245c2
    XOR ECX,ECX                         ; 005245c7
    FSTP double ptr [ESP]               ; 005245c9
    TEST ESI,ESI                        ; 005245cc
    JLE 0x005245f9                      ; 005245ce
        ;   XREF to: 005245f9 (CONDITIONAL_JUMP)  ; LAB_005245f9
    MOV EDX,EDI                         ; 005245d0
    FLD float ptr [EDX + 0x7c]          ; 005245d2
        ;   Label: LAB_005245d2
    FMUL double ptr [ESP]               ; 005245d5
    CALL crt_math.c_round_FUN_00563a30  ; 005245d8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 005245dd
    MOV EAX,dword ptr [ESP + 0x8]       ; 005245e1
    MOV dword ptr [EDX + 0xbc],EAX      ; 005245e5
    CMP EBX,EAX                         ; 005245eb
    JLE 0x005245f1                      ; 005245ed
        ;   XREF to: 005245f1 (CONDITIONAL_JUMP)  ; LAB_005245f1
    MOV EBX,EAX                         ; 005245ef
    INC ECX                             ; 005245f1
        ;   Label: LAB_005245f1
    ADD EDX,0x4                         ; 005245f2
    CMP ECX,ESI                         ; 005245f5
    JL 0x005245d2                       ; 005245f7
        ;   XREF to: 005245d2 (CONDITIONAL_JUMP)  ; LAB_005245d2
    XOR EDX,EDX                         ; 005245f9
        ;   Label: LAB_005245f9
    TEST ESI,ESI                        ; 005245fb
    JLE 0x00524570                      ; 005245fd
        ;   XREF to: 00524570 (CONDITIONAL_JUMP)  ; LAB_00524570
    MOV EAX,EDI                         ; 00524603
    MOV ECX,dword ptr [EAX + 0xbc]      ; 00524605
        ;   Label: LAB_00524605
    ADD EAX,0x4                         ; 0052460b
    SUB ECX,EBX                         ; 0052460e
    INC EDX                             ; 00524610
    MOV dword ptr [EAX + 0xb8],ECX      ; 00524611
    CMP EDX,ESI                         ; 00524617
    JL 0x00524605                       ; 00524619
        ;   XREF to: 00524605 (CONDITIONAL_JUMP)  ; LAB_00524605
    MOV dword ptr [0x005bea68],ESI      ; 0052461b | DAT_005bea68
    MOV ESP,EBP                         ; 00524621
    POP EBP                             ; 00524623
    POP EDI                             ; 00524624
    POP ESI                             ; 00524625
    POP EBX                             ; 00524626
    RET                                 ; 00524627

