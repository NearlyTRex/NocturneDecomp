; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_pollAndMixSfx_FUN_005294f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_snddx.cpp_fillStreamBuffer_FUN_00529c10 at 00529cf7
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130 at 0052c1e4
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0059282b
;   TerminatedCString s_SfxSlot_kill_must_be_loc_00592840
;   TerminatedCString s_sound_sndmain_cpp_00592860
;   TerminatedCString s_nextMixingBuffer_shouldn_00592875
;   TerminatedCString s_sound_sndmain_cpp_00593af6
;   TerminatedCString s_pollSfx_must_be_locked_00593b0b
;   undefined4 DAT_005bea64
;   undefined4 DAT_005bea68
;   undefined4 DAT_005bea6c
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index
;   undefined4 DAT_02dc1b74
;   undefined4 DAT_02dc8328
;   undefined4 DAT_02dc832c
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   crt_string.c_memmove_FUN_00566170
;   sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10
;   sound_sndmain.cpp_convertMixBufToOutput_FUN_00523330
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005294f0
        ;   Label: sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0
    PUSH ESI                            ; 005294f1
    PUSH EDI                            ; 005294f2
    PUSH EBP                            ; 005294f3
    SUB ESP,0x5c                        ; 005294f4
    CMP dword ptr [0x02dc84bc],0x0      ; 005294f7 | DAT_02dc84bc
    JLE 0x005297ab                      ; 005294fe
        ;   XREF to: 005297ab (CONDITIONAL_JUMP)  ; LAB_005297ab
    MOV ESI,dword ptr [ESP + 0x78]      ; 00529504
        ;   Label: LAB_00529504
    TEST ESI,ESI                        ; 00529508
    JLE 0x00529529                      ; 0052950a
        ;   XREF to: 00529529 (CONDITIONAL_JUMP)  ; LAB_00529529
    LEA EDX,[ESI*0x4 + 0x0]             ; 0052950c
    XOR EAX,EAX                         ; 00529513
    CMP dword ptr [EAX + 0x2dc8360],0x0 ; 00529515
        ;   Label: LAB_00529515
    JZ 0x005297fb                       ; 0052951c
        ;   XREF to: 005297fb (CONDITIONAL_JUMP)  ; LAB_005297fb
    ADD EAX,0x4                         ; 00529522
    CMP EAX,EDX                         ; 00529525
    JL 0x00529515                       ; 00529527
        ;   XREF to: 00529515 (CONDITIONAL_JUMP)  ; LAB_00529515
    MOV EAX,dword ptr [ESP + 0x74]      ; 00529529
        ;   Label: LAB_00529529
    CMP EAX,dword ptr [0x005bea64]      ; 0052952d | DAT_005bea64
    JNZ 0x005297fb                      ; 00529533
        ;   XREF to: 005297fb (CONDITIONAL_JUMP)  ; LAB_005297fb
    MOV EAX,dword ptr [ESP + 0x78]      ; 00529539
    CMP EAX,dword ptr [0x005bea68]      ; 0052953d | DAT_005bea68
    JNZ 0x005297fb                      ; 00529543
        ;   XREF to: 005297fb (CONDITIONAL_JUMP)  ; LAB_005297fb
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00529549
    CMP EAX,dword ptr [0x005bea6c]      ; 0052954d | DAT_005bea6c
    JNZ 0x005297fb                      ; 00529553
        ;   XREF to: 005297fb (CONDITIONAL_JUMP)  ; LAB_005297fb
    CALL sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10 ; 00529559
        ;   XREF to: 00522d10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10()
    MOV ECX,dword ptr [ESP + 0x78]      ; 0052955e
    XOR EAX,EAX                         ; 00529562
    TEST ECX,ECX                        ; 00529564
    JLE 0x00529580                      ; 00529566
        ;   XREF to: 00529580 (CONDITIONAL_JUMP)  ; LAB_00529580
    MOV EDX,dword ptr [ESP + 0x70]      ; 00529568
    INC EAX                             ; 0052956c
        ;   Label: LAB_0052956c
    MOV ESI,dword ptr [EDX]             ; 0052956d
    MOV dword ptr [ESP + EAX*0x4 + 0x28],ESI ; 0052956f
    MOV ESI,dword ptr [ESP + 0x78]      ; 00529573
    ADD EDX,0x4                         ; 00529577
    CMP EAX,ESI                         ; 0052957a
    JL 0x0052956c                       ; 0052957c
        ;   XREF to: 0052956c (CONDITIONAL_JUMP)  ; LAB_0052956c
    MOV EAX,EAX                         ; 0052957e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00529580
        ;   Label: LAB_00529580
    SHL EAX,0x2                         ; 00529584
    MOV dword ptr [ESP + 0x4c],EAX      ; 00529587
    MOV EAX,0x2dbd374                   ; 0052958b
    ADD EAX,0x4800                      ; 00529590
    MOV dword ptr [ESP + 0x54],EAX      ; 00529595 | DAT_02dc1b74
    MOV dword ptr [ESP + 0x50],EAX      ; 00529599 | DAT_02dc1b74
    CMP dword ptr [ESP + 0x80],0x0      ; 0052959d
        ;   Label: LAB_0052959d
    JLE 0x005297fb                      ; 005295a5
        ;   XREF to: 005297fb (CONDITIONAL_JUMP)  ; LAB_005297fb
    CMP dword ptr [0x02dc8328],0x1      ; 005295ab | DAT_02dc8328
    JGE 0x00529713                      ; 005295b2
        ;   XREF to: 00529713 (CONDITIONAL_JUMP)  ; LAB_00529713
    CMP dword ptr [0x02dc84bc],0x0      ; 005295b8 | DAT_02dc84bc
    JLE 0x005297d3                      ; 005295bf
        ;   XREF to: 005297d3 (CONDITIONAL_JUMP)  ; LAB_005297d3
    CMP dword ptr [0x02dc8328],0x0      ; 005295c5 | DAT_02dc8328
        ;   Label: LAB_005295c5
    JLE 0x005295f1                      ; 005295cc
        ;   XREF to: 005295f1 (CONDITIONAL_JUMP)  ; LAB_005295f1
    MOV ESI,0x592860                    ; 005295ce | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x4e4                       ; 005295d3
    PUSH 0x592875                       ; 005295d8 | = "nextMixingBuffer - shouldn't have any..."
    MOV dword ptr [0x01cc4800],ESI      ; 005295dd | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 005295e3 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005295e9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005295ee
    MOV ESI,dword ptr [0x02dc8330]      ; 005295f1 | DAT_02dc8330
        ;   Label: LAB_005295f1
    MOV EBP,dword ptr [0x005bea68]      ; 005295f7 | DAT_005bea68
    XOR EDI,EDI                         ; 005295fd
    SHL ESI,0x2                         ; 005295ff
    TEST EBP,EBP                        ; 00529602
    JLE 0x00529661                      ; 00529604
        ;   XREF to: 00529661 (CONDITIONAL_JUMP)  ; LAB_00529661
    XOR EBX,EBX                         ; 00529606
    MOV EAX,[0x02dc8334]                ; 00529608 | DAT_02dc8334
        ;   Label: LAB_00529608
    DEC EAX                             ; 0052960d
    IMUL EAX,ESI                        ; 0052960e
    MOV EDX,dword ptr [0x02dc8330]      ; 00529611 | DAT_02dc8330
    SHL EDX,0x2                         ; 00529617
    PUSH EAX                            ; 0052961a
    MOV EAX,dword ptr [EBX + 0x2dc8360] ; 0052961b
    ADD EDX,EAX                         ; 00529621
    PUSH EDX                            ; 00529623
    PUSH EAX                            ; 00529624
    CALL crt_string.c_memmove_FUN_00566170 ; 00529625
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    MOV EAX,[0x02dc8334]                ; 0052962a | DAT_02dc8334
    MOV EDX,dword ptr [0x02dc8330]      ; 0052962f | DAT_02dc8330
    DEC EAX                             ; 00529635
    IMUL EAX,EDX                        ; 00529636
    ADD ESP,0xc                         ; 00529639
    PUSH ESI                            ; 0052963c
    SHL EAX,0x2                         ; 0052963d
    MOV EDX,dword ptr [EBX + 0x2dc8360] ; 00529640
    PUSH 0x0                            ; 00529646
    ADD EAX,EDX                         ; 00529648
    PUSH EAX                            ; 0052964a
    ADD EBX,0x4                         ; 0052964b
    INC EDI                             ; 0052964e
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052964f
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x005bea68]      ; 00529654 | DAT_005bea68
    ADD ESP,0xc                         ; 0052965a
    CMP EDI,ECX                         ; 0052965d
    JL 0x00529608                       ; 0052965f
        ;   XREF to: 00529608 (CONDITIONAL_JUMP)  ; LAB_00529608
    MOV EAX,[0x02dc8330]                ; 00529661 | DAT_02dc8330
        ;   Label: LAB_00529661
    MOV dword ptr [ESP + 0x20],EAX      ; 00529666
    MOV EAX,[0x005bea68]                ; 0052966a | DAT_005bea68
    MOV dword ptr [ESP + 0x24],EAX      ; 0052966f
    MOV EAX,[0x005bea6c]                ; 00529673 | DAT_005bea6c
    MOV EBX,dword ptr [ESP + 0x24]      ; 00529678
    MOV dword ptr [ESP + 0x28],EAX      ; 0052967c
    TEST EBX,EBX                        ; 00529680
    JLE 0x0052969a                      ; 00529682
        ;   XREF to: 0052969a (CONDITIONAL_JUMP)  ; LAB_0052969a
    SHL EBX,0x2                         ; 00529684
    XOR EAX,EAX                         ; 00529687
    ADD EAX,0x4                         ; 00529689
        ;   Label: LAB_00529689
    MOV EDX,dword ptr [EAX + 0x2dc835c] ; 0052968c
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00529692
    CMP EAX,EBX                         ; 00529696
    JL 0x00529689                       ; 00529698
        ;   XREF to: 00529689 (CONDITIONAL_JUMP)  ; LAB_00529689
    FILD dword ptr [0x02dc8330]         ; 0052969a | DAT_02dc8330
        ;   Label: LAB_0052969a
    FILD dword ptr [0x005bea6c]         ; 005296a0 | DAT_005bea6c
    FDIVP                               ; 005296a6
    MOV EBX,0x2dbd374                   ; 005296a8
    MOV ESI,dword ptr [ESP + 0x50]      ; 005296ad
    FSTP float ptr [ESP + 0x58]         ; 005296b1
    PUSH dword ptr [ESP + 0x58]         ; 005296b5
        ;   Label: LAB_005296b5
    PUSH EBX                            ; 005296b9 | g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 005296ba
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    ADD EBX,0x120                       ; 005296bf
    ADD ESP,0x8                         ; 005296c5
    CMP EBX,ESI                         ; 005296c8
    JNZ 0x005296b5                      ; 005296ca
        ;   XREF to: 005296b5 (CONDITIONAL_JUMP)  ; LAB_005296b5
    MOV EBX,0x2dbd374                   ; 005296cc
    SUB ESP,0x2c                        ; 005296d1
        ;   Label: LAB_005296d1
    MOV EDI,ESP                         ; 005296d4
    MOV ECX,0xb                         ; 005296d6
    LEA ESI,[ESP + 0x2c]                ; 005296db
    PUSH EBX                            ; 005296df | g_CSfxSlot_ARRAY_02dbd374[1].options.channel_index
    MOVSD.REP ES:EDI,ESI                ; 005296e0
    CALL sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10 ; 005296e2
        ;   XREF to: 00524d10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10()
    ADD ESP,0x30                        ; 005296e7
    ADD EBX,0x120                       ; 005296ea
    CMP EBX,dword ptr [ESP + 0x54]      ; 005296f0
    JNZ 0x005296d1                      ; 005296f4
        ;   XREF to: 005296d1 (CONDITIONAL_JUMP)  ; LAB_005296d1
    MOV EAX,[0x02dc8330]                ; 005296f6 | DAT_02dc8330
    MOV [0x02dc8328],EAX                ; 005296fb | DAT_02dc8328
    MOV EAX,[0x02dc83d0]                ; 00529700 | DAT_02dc83d0
    XOR EBP,EBP                         ; 00529705
    INC EAX                             ; 00529707
    MOV dword ptr [0x02dc832c],EBP      ; 00529708 | DAT_02dc832c
    MOV [0x02dc83d0],EAX                ; 0052970e | DAT_02dc83d0
    MOV EDX,dword ptr [ESP + 0x80]      ; 00529713
        ;   Label: LAB_00529713
    MOV ESI,dword ptr [0x02dc8328]      ; 0052971a | DAT_02dc8328
    CMP ESI,EDX                         ; 00529720
    JLE 0x00529726                      ; 00529722
        ;   XREF to: 00529726 (CONDITIONAL_JUMP)  ; LAB_00529726
    MOV ESI,EDX                         ; 00529724
    CMP dword ptr [ESP + 0x78],0x0      ; 00529726
        ;   Label: LAB_00529726
    JLE 0x0052977a                      ; 0052972b
        ;   XREF to: 0052977a (CONDITIONAL_JUMP)  ; LAB_0052977a
    MOV EDI,dword ptr [ESP + 0x84]      ; 0052972d
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00529734
    XOR EBX,EBX                         ; 00529738
    IMUL EDI,ESI                        ; 0052973a
    MOV EAX,dword ptr [ESP + 0x84]      ; 0052973d
        ;   Label: LAB_0052973d
    PUSH EAX                            ; 00529744
    MOV EDX,dword ptr [ESP + 0x78]      ; 00529745
    PUSH ESI                            ; 00529749
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x34] ; 0052974a
    MOV EAX,[0x02dc832c]                ; 0052974e | DAT_02dc832c
    PUSH EDX                            ; 00529753
    SHL EAX,0x2                         ; 00529754
    MOV EDX,dword ptr [EBX + 0x2dc8360] ; 00529757
    PUSH ECX                            ; 0052975d
    ADD EAX,EDX                         ; 0052975e
    PUSH EAX                            ; 00529760
    CALL sound_sndmain.cpp_convertMixBufToOutput_FUN_00523330 ; 00529761
        ;   XREF to: 00523330 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_convertMixBufToOutput_FUN_00523330(float * input_samples, ushort * output_buffer, int bits_per_sample, int num_samples, ...)
    ADD ESP,0x14                        ; 00529766
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x2c] ; 00529769
    ADD EBX,0x4                         ; 0052976d
    ADD EAX,EDI                         ; 00529770
    MOV dword ptr [ESP + EBX*0x1 + 0x28],EAX ; 00529772
    CMP EBX,EBP                         ; 00529776
    JL 0x0052973d                       ; 00529778
        ;   XREF to: 0052973d (CONDITIONAL_JUMP)  ; LAB_0052973d
    MOV EBX,dword ptr [ESP + 0x80]      ; 0052977a
        ;   Label: LAB_0052977a
    MOV EDI,dword ptr [0x02dc8328]      ; 00529781 | DAT_02dc8328
    MOV EBP,dword ptr [0x02dc832c]      ; 00529787 | DAT_02dc832c
    SUB EDI,ESI                         ; 0052978d
    ADD EBP,ESI                         ; 0052978f
    SUB EBX,ESI                         ; 00529791
    MOV dword ptr [0x02dc8328],EDI      ; 00529793 | DAT_02dc8328
    MOV dword ptr [0x02dc832c],EBP      ; 00529799 | DAT_02dc832c
    MOV dword ptr [ESP + 0x80],EBX      ; 0052979f
    JMP 0x0052959d                      ; 005297a6
        ;   XREF to: 0052959d (UNCONDITIONAL_JUMP)  ; LAB_0052959d
    MOV ECX,0x593af6                    ; 005297ab | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005297ab
    MOV EBX,0x1442                      ; 005297b0
    PUSH 0x593b0b                       ; 005297b5 | = "pollSfx - must be locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 005297ba | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 005297c0 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005297c6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005297cb
    JMP 0x00529504                      ; 005297ce
        ;   XREF to: 00529504 (UNCONDITIONAL_JUMP)  ; LAB_00529504
    MOV EDX,0x59282b                    ; 005297d3 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005297d3
    MOV ECX,0x4e0                       ; 005297d8
    PUSH 0x592840                       ; 005297dd | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01cc4800],EDX      ; 005297e2 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005297e8 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005297ee
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005297f3
    JMP 0x005295c5                      ; 005297f6
        ;   XREF to: 005295c5 (UNCONDITIONAL_JUMP)  ; LAB_005295c5
    ADD ESP,0x5c                        ; 005297fb
        ;   Label: LAB_005297fb
    POP EBP                             ; 005297fe
    POP EDI                             ; 005297ff
    POP ESI                             ; 00529800
    POP EBX                             ; 00529801
    RET                                 ; 00529802

