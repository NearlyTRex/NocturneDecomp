; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00524630(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 at 005249c3
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00592d82
;   TerminatedCString s_SfxSlot_kill_must_be_loc_00592d97
;   double DOUBLE_00592dbe = 0.0500000000000000
;   undefined4 DAT_005bea68
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524630
        ;   Label: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00524630
    PUSH ESI                            ; 00524631
    PUSH EDI                            ; 00524632
    PUSH EBP                            ; 00524633
    MOV EBP,ESP                         ; 00524634
    SUB ESP,0x20                        ; 00524636
    AND ESP,0xfffffff8                  ; 00524639
    MOV ESI,dword ptr [0x005bea68]      ; 0052463c | DAT_005bea68
    MOV EBX,dword ptr [EBP + 0x14]      ; 00524642
    CMP dword ptr [0x02dc84bc],0x0      ; 00524645 | DAT_02dc84bc
    JLE 0x005246cd                      ; 0052464c
        ;   XREF to: 005246cd (CONDITIONAL_JUMP)  ; LAB_005246cd
    MOV ECX,dword ptr [EBX + 0x74]      ; 00524652
        ;   Label: LAB_00524652
    MOV ECX,dword ptr [ECX + 0x104]     ; 00524655
    MOV EDX,0x1                         ; 0052465b
    DEC ECX                             ; 00524660
    SHL EDX,CL                          ; 00524661
    MOV EAX,dword ptr [EBX]             ; 00524663
    MOV dword ptr [ESP + 0x1c],EDX      ; 00524665
    PUSH EAX                            ; 00524669
    FILD dword ptr [ESP + 0x20]         ; 0052466a
    FSTP float ptr [ESP + 0xc]          ; 0052466e
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 00524672
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00527380(int channel_index)
    MOV dword ptr [ESP + 0x20],EAX      ; 00524677
    FLD float ptr [ESP + 0x20]          ; 0052467b
    FMUL float ptr [EBX + 0x44]         ; 0052467f
    ADD ESP,0x4                         ; 00524682
    FDIV float ptr [ESP + 0x8]          ; 00524685
    MOV AH,byte ptr [EBX + 0x5c]        ; 00524689
    FSTP float ptr [ESP + 0xc]          ; 0052468c
    TEST AH,0x1                         ; 00524690
    JZ 0x005246f5                       ; 00524693
        ;   XREF to: 005246f5 (CONDITIONAL_JUMP)  ; LAB_005246f5
    MOV ESI,dword ptr [0x005bea68]      ; 00524695 | DAT_005bea68
    XOR EDX,EDX                         ; 0052469b
    TEST ESI,ESI                        ; 0052469d
    JLE 0x005246c0                      ; 0052469f
        ;   XREF to: 005246c0 (CONDITIONAL_JUMP)  ; LAB_005246c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005246a1
    ADD EBX,0x4                         ; 005246a5
        ;   Label: LAB_005246a5
    INC EDX                             ; 005246a8
    MOV dword ptr [EBX + 0x98],EAX      ; 005246a9
    CMP EDX,ESI                         ; 005246af
    JL 0x005246a5                       ; 005246b1
        ;   XREF to: 005246a5 (CONDITIONAL_JUMP)  ; LAB_005246a5
    LEA EAX,[EAX]                       ; 005246b3
    LEA EDX,[EDX]                       ; 005246b9
    NOP                                 ; 005246bf
    MOV dword ptr [0x005bea68],ESI      ; 005246c0 | DAT_005bea68
        ;   Label: LAB_005246c0
    MOV ESP,EBP                         ; 005246c6
    POP EBP                             ; 005246c8
    POP EDI                             ; 005246c9
    POP ESI                             ; 005246ca
    POP EBX                             ; 005246cb
    RET                                 ; 005246cc
    MOV ECX,0x592d82                    ; 005246cd | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005246cd
    MOV EDI,0x917                       ; 005246d2
    PUSH 0x592d97                       ; 005246d7 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 005246dc | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 005246e2 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005246e8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005246ed
    JMP 0x00524652                      ; 005246f0
        ;   XREF to: 00524652 (UNCONDITIONAL_JUMP)  ; LAB_00524652
    MOV ESI,dword ptr [0x005bea68]      ; 005246f5 | DAT_005bea68
        ;   Label: LAB_005246f5
    XOR ECX,ECX                         ; 005246fb
    TEST ESI,ESI                        ; 005246fd
    JLE 0x005246c0                      ; 005246ff
        ;   XREF to: 005246c0 (CONDITIONAL_JUMP)  ; LAB_005246c0
    MOV EDI,0x41a00000                  ; 00524701
    MOV EDX,EBX                         ; 00524706
    MOV EAX,dword ptr [EDX + 0x7c]      ; 00524708
        ;   Label: LAB_00524708
    MOV dword ptr [ESP],EAX             ; 0052470b
    MOV EAX,dword ptr [EBX + 0xfc]      ; 0052470e
    MOV dword ptr [ESP + 0x4],EAX       ; 00524714
    MOV EAX,dword ptr [EBX + 0x100]     ; 00524718
    MOV dword ptr [ESP + 0x18],EAX      ; 0052471e
    MOV EAX,dword ptr [EBX + 0x104]     ; 00524722
    FLD float ptr [ESP]                 ; 00524728
    MOV dword ptr [ESP + 0x14],EAX      ; 0052472b
    FCOMP float ptr [ESP + 0x18]        ; 0052472f
    FNSTSW AX                           ; 00524733
    SAHF                                ; 00524735
    JC 0x0052477f                       ; 00524736
        ;   XREF to: 0052477f (CONDITIONAL_JUMP)  ; LAB_0052477f
    FLD float ptr [ESP]                 ; 00524738
        ;   Label: LAB_00524738
    FCOMP float ptr [ESP + 0x14]        ; 0052473b
    FNSTSW AX                           ; 0052473f
    SAHF                                ; 00524741
    JBE 0x0052474b                      ; 00524742
        ;   XREF to: 0052474b (CONDITIONAL_JUMP)  ; LAB_0052474b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00524744
    MOV dword ptr [ESP],EAX             ; 00524748
    FLD float ptr [ESP + 0x4]           ; 0052474b
        ;   Label: LAB_0052474b
    FMUL double ptr [0x00592dbe]        ; 0052474f | DOUBLE_00592dbe
    FLD float ptr [ESP]                 ; 00524755
    FCOMPP                              ; 00524758
    FNSTSW AX                           ; 0052475a
    SAHF                                ; 0052475c
    JA 0x00524788                       ; 0052475d
        ;   XREF to: 00524788 (CONDITIONAL_JUMP)  ; LAB_00524788
    MOV dword ptr [ESP + 0x10],EDI      ; 0052475f
    FLD float ptr [ESP + 0xc]           ; 00524763
        ;   Label: LAB_00524763
    FMUL float ptr [ESP + 0x10]         ; 00524767
    ADD EDX,0x4                         ; 0052476b
    INC ECX                             ; 0052476e
    FSTP float ptr [EDX + 0x98]         ; 0052476f
    CMP ECX,ESI                         ; 00524775
    JGE 0x005246c0                      ; 00524777
        ;   XREF to: 005246c0 (CONDITIONAL_JUMP)  ; LAB_005246c0
    JMP 0x00524708                      ; 0052477d
        ;   XREF to: 00524708 (UNCONDITIONAL_JUMP)  ; LAB_00524708
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052477f
        ;   Label: LAB_0052477f
    MOV dword ptr [ESP],EAX             ; 00524783
    JMP 0x00524738                      ; 00524786
        ;   XREF to: 00524738 (UNCONDITIONAL_JUMP)  ; LAB_00524738
    FLD float ptr [ESP + 0x4]           ; 00524788
        ;   Label: LAB_00524788
    FDIV float ptr [ESP]                ; 0052478c
    FSTP float ptr [ESP + 0x10]         ; 0052478f
    JMP 0x00524763                      ; 00524793
        ;   XREF to: 00524763 (UNCONDITIONAL_JUMP)  ; LAB_00524763

