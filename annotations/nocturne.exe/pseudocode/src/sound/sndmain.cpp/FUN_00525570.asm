; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00525570(int param_1)
;
;
; XREF[9]:
;   FUN_005234b0 at 00523539
;   FUN_00523ea0 at 005240ff
;   FUN_00524830 at 00524b04
;   FUN_00524d10 at 00524e34
;   FUN_005256f0 at 00525755
;   FUN_005265a0 at 00526c2f
;   FUN_00527230 at 00527245
;   FUN_005272b0 at 005272c3
;   FUN_00527410 at 00527467
;
; Referenced Globals:
;   string s_..\\sound\\sndmain.cpp_00592f82
;   string s_SfxSlot::kill_-_must_be_locked!_00592f97
;   string s_[NULLsamplePtr]_00592fb7
;   string s_Killing_sfx_%s_00592fc7
;   string s_..\\sound\\sndmain.cpp_00592fd7
;   string s_SfxSlot::kill_-_ref_count_out_of_00592fec
;   string s_..\\sound\\sndmain.cpp_00593016
;   string s_refCount_for_streaming_Sfx_%s_>_1_0059302b
;   string s_..\\sound\\sndmain.cpp_0059304d
;   string s_streaming_sample_sfx_index_misma_00593062
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc8318
;   ... and 1 more
;
; Called Functions:
;   FUN_0043ac60
;   FUN_004c8440
;   FUN_00521ca0
;   FUN_00523a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525570
        ;   Label: FUN_00525570
    PUSH ESI                            ; 00525571
    PUSH EBP                            ; 00525572
    MOV EBX,dword ptr [ESP + 0x10]      ; 00525573
    CMP dword ptr [0x02dc84bc],0x0      ; 00525577 | DAT_02dc84bc
    JLE 0x0052569e                      ; 0052557e
        ;   XREF to: 0052569e (CONDITIONAL_JUMP)  ; LAB_0052569e
    CMP dword ptr [EBX + 0x114],0x0     ; 00525584
        ;   Label: LAB_00525584
    JZ 0x005255af                       ; 0052558b
        ;   XREF to: 005255af (CONDITIONAL_JUMP)  ; LAB_005255af
    MOV EBP,dword ptr [EBX + 0x74]      ; 0052558d
    MOV EDX,0x592fb7                    ; 00525590 | = "[NULLsamplePtr]"
    TEST EBP,EBP                        ; 00525595
    JZ 0x0052559b                       ; 00525597
        ;   XREF to: 0052559b (CONDITIONAL_JUMP)  ; LAB_0052559b
    MOV EDX,EBP                         ; 00525599
    PUSH EDX                            ; 0052559b | = "[NULLsamplePtr]"
        ;   Label: LAB_0052559b
    PUSH 0x592fc7                       ; 0052559c | = "Killing sfx %s\n"
    MOV EAX,[0x005ad350]                ; 005255a1 | PTR_DAT_005ad350
    PUSH EAX                            ; 005255a6 | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 005255a7
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0xc                         ; 005255ac
    CMP dword ptr [EBX + 0x6c],0x0      ; 005255af
        ;   Label: LAB_005255af
    JZ 0x005255d0                       ; 005255b3
        ;   XREF to: 005255d0 (CONDITIONAL_JUMP)  ; LAB_005255d0
    MOV ECX,dword ptr [0x02dc8318]      ; 005255b5 | DAT_02dc8318
    TEST ECX,ECX                        ; 005255bb
    JZ 0x005255c9                       ; 005255bd
        ;   XREF to: 005255c9 (CONDITIONAL_JUMP)  ; LAB_005255c9
    PUSH EBX                            ; 005255bf
    MOV EAX,dword ptr [ECX]             ; 005255c0
    PUSH ECX                            ; 005255c2
    CALL dword ptr [EAX + 0x4c]         ; 005255c3
    ADD ESP,0x8                         ; 005255c6
    MOV dword ptr [EBX + 0x6c],0x0      ; 005255c9
        ;   Label: LAB_005255c9
    MOV dword ptr [EBX + 0x114],0x0     ; 005255d0
        ;   Label: LAB_005255d0
    MOV ESI,dword ptr [EBX + 0x74]      ; 005255da
    MOV dword ptr [EBX + 0x70],0x0      ; 005255dd
    TEST ESI,ESI                        ; 005255e4
    JZ 0x0052569a                       ; 005255e6
        ;   XREF to: 0052569a (CONDITIONAL_JUMP)  ; LAB_0052569a
    CMP dword ptr [ESI + 0x12c],0x1     ; 005255ec
    JL 0x005256c6                       ; 005255f3
        ;   XREF to: 005256c6 (CONDITIONAL_JUMP)  ; LAB_005256c6
    MOV EDX,dword ptr [EBX + 0x74]      ; 005255f9
        ;   Label: LAB_005255f9
    DEC dword ptr [EDX + 0x12c]         ; 005255fc
    MOV ESI,dword ptr [EBX + 0x74]      ; 00525602
    MOV dword ptr [EBX + 0x74],0x0      ; 00525605
    CMP dword ptr [ESI + 0x134],0x0     ; 0052560c
    JL 0x00525690                       ; 00525613
        ;   XREF to: 00525690 (CONDITIONAL_JUMP)  ; LAB_00525690
    CMP dword ptr [ESI + 0x12c],0x0     ; 00525619
    JZ 0x00525645                       ; 00525620
        ;   XREF to: 00525645 (CONDITIONAL_JUMP)  ; LAB_00525645
    PUSH ESI                            ; 00525622
    MOV EAX,0x593016                    ; 00525623 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0xb42                       ; 00525628
    PUSH 0x59302b                       ; 0052562d | = "refCount for streaming Sfx %s > 1"
    MOV [0x01cc4800],EAX                ; 00525632 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00525637 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052563d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00525642
    MOV EDX,EBX                         ; 00525645
        ;   Label: LAB_00525645
    SUB EDX,0x2dbd374                   ; 00525647
    MOV EBX,0x120                       ; 0052564d
    MOV EAX,EDX                         ; 00525652
    SAR EDX,0x1f                        ; 00525654
    IDIV EBX                            ; 00525657
    CMP EAX,dword ptr [ESI + 0x134]     ; 00525659
    JZ 0x00525687                       ; 0052565f
        ;   XREF to: 00525687 (CONDITIONAL_JUMP)  ; LAB_00525687
    PUSH EDI                            ; 00525661
    PUSH ESI                            ; 00525662
    MOV EBX,0x59304d                    ; 00525663 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xb43                       ; 00525668
    PUSH 0x593062                       ; 0052566d | = "streaming sample sfx index mismatch o..."
    MOV dword ptr [0x01cc4800],EBX      ; 00525672 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00525678 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0052567e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00525683
    POP EDI                             ; 00525686
    PUSH ESI                            ; 00525687
        ;   Label: LAB_00525687
    CALL FUN_00523a60                   ; 00525688
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00523a60()
    ADD ESP,0x4                         ; 0052568d
    PUSH 0x0                            ; 00525690
        ;   Label: LAB_00525690
    CALL FUN_00521ca0                   ; 00525692
        ;   XREF to: 00521ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00521ca0()
    ADD ESP,0x4                         ; 00525697
    POP EBP                             ; 0052569a
        ;   Label: LAB_0052569a
    POP ESI                             ; 0052569b
    POP EBX                             ; 0052569c
    RET                                 ; 0052569d
    MOV ECX,0x592f82                    ; 0052569e | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0052569e
    MOV ESI,0xb14                       ; 005256a3
    PUSH 0x592f97                       ; 005256a8 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 005256ad | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005256b3 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005256b9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005256be
    JMP 0x00525584                      ; 005256c1
        ;   XREF to: 00525584 (UNCONDITIONAL_JUMP)  ; LAB_00525584
    MOV EBP,0x592fd7                    ; 005256c6 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005256c6
    MOV EAX,0xb33                       ; 005256cb
    PUSH 0x592fec                       ; 005256d0 | = "SfxSlot::kill - ref count out of bala..."
    MOV dword ptr [0x01cc4800],EBP      ; 005256d5 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 005256db | DAT_01cc4804
    CALL FUN_004c8440                   ; 005256e0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005256e5
    JMP 0x005255f9                      ; 005256e8
        ;   XREF to: 005255f9 (UNCONDITIONAL_JUMP)  ; LAB_005255f9

