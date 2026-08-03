; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0052a450(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   channels
; int              Stack[0x10]:4   sample_rate
; int *            Stack[0x14]:4   out_samples_per_block
; Local Variables:
; undefined2       Stack[-0x48]:2  local_48
; undefined2       Stack[-0x46]:2  local_46
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined2       Stack[-0x3c]:2  local_3c
; undefined2       Stack[-0x3a]:2  local_3a
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_Create_temp_secondary_bu_005941a5
;   TerminatedCString s_Set_Primary_buffer_forma_005941dc
;   TerminatedCString s_Get_Primary_buffer_forma_005941f6
;   TerminatedCString s_Create_the_secondary_buf_00594210
;   undefined4 DAT_005bed10
;   undefined4 DAT_005bed20
;   undefined4 DAT_005c3918
;   undefined4 DAT_02dc9214
;   undefined4 DAT_02dc9218
;   undefined4 DAT_02dc921c
;   undefined4 DAT_02dc9220
;   undefined4 DAT_02dc9224
;   undefined4 DAT_02dc9228
;   undefined4 DAT_02dc922c
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00528970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a450
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0052a450
    PUSH ESI                            ; 0052a451
    PUSH EDI                            ; 0052a452
    PUSH EBP                            ; 0052a453
    SUB ESP,0x6a0                       ; 0052a454
    MOV EBX,dword ptr [ESP + 0x6b8]     ; 0052a45a
    MOV EDX,dword ptr [0x02dc9224]      ; 0052a461 | DAT_02dc9224
    TEST EDX,EDX                        ; 0052a467
    JNZ 0x0052a49b                      ; 0052a469
        ;   XREF to: 0052a49b (CONDITIONAL_JUMP)  ; LAB_0052a49b
    CMP dword ptr [0x02dc9218],0x0      ; 0052a46b | DAT_02dc9218
        ;   Label: LAB_0052a46b
    JNZ 0x0052a4ad                      ; 0052a472
        ;   XREF to: 0052a4ad (CONDITIONAL_JUMP)  ; LAB_0052a4ad
    MOV EDX,dword ptr [0x02dc921c]      ; 0052a474 | DAT_02dc921c
        ;   Label: LAB_0052a474
    TEST EDX,EDX                        ; 0052a47a
    JZ 0x0052a48e                       ; 0052a47c
        ;   XREF to: 0052a48e (CONDITIONAL_JUMP)  ; LAB_0052a48e
    MOV EAX,EDX                         ; 0052a47e
    PUSH EAX                            ; 0052a480
    MOV EDX,dword ptr [EDX]             ; 0052a481
    CALL dword ptr [EDX + 0x8]          ; 0052a483
    XOR ECX,ECX                         ; 0052a486
    MOV dword ptr [0x02dc921c],ECX      ; 0052a488 | DAT_02dc921c
    XOR EAX,EAX                         ; 0052a48e
        ;   Label: LAB_0052a48e
    ADD ESP,0x6a0                       ; 0052a490
    POP EBP                             ; 0052a496
    POP EDI                             ; 0052a497
    POP ESI                             ; 0052a498
    POP EBX                             ; 0052a499
    RET                                 ; 0052a49a
    MOV EAX,EDX                         ; 0052a49b
        ;   Label: LAB_0052a49b
    PUSH EAX                            ; 0052a49d
    MOV EDX,dword ptr [EDX]             ; 0052a49e
    CALL dword ptr [EDX + 0x8]          ; 0052a4a0
    XOR ECX,ECX                         ; 0052a4a3
    MOV dword ptr [0x02dc9224],ECX      ; 0052a4a5 | DAT_02dc9224
    JMP 0x0052a46b                      ; 0052a4ab
        ;   XREF to: 0052a46b (UNCONDITIONAL_JUMP)  ; LAB_0052a46b
    PUSH 0x12                           ; 0052a4ad
        ;   Label: LAB_0052a4ad
    PUSH 0x0                            ; 0052a4af
    LEA EAX,[ESP + 0x670]               ; 0052a4b1
    PUSH EAX                            ; 0052a4b8
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052a4b9
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0052a4be
    MOV EDX,0x1                         ; 0052a4c1
    MOV EAX,dword ptr [ESP + 0x6bc]     ; 0052a4c6
    MOV word ptr [ESP + 0x668],DX       ; 0052a4cd
    MOV word ptr [ESP + 0x66a],AX       ; 0052a4d5
    MOV EDX,EBX                         ; 0052a4dd
    MOV EAX,dword ptr [ESP + 0x6c0]     ; 0052a4df
    SAR EDX,0x1f                        ; 0052a4e6
    MOV dword ptr [ESP + 0x66c],EAX     ; 0052a4e9
    MOV EAX,EBX                         ; 0052a4f0
    SHL EDX,0x3                         ; 0052a4f2
    SBB EAX,EDX                         ; 0052a4f5
    SAR EAX,0x3                         ; 0052a4f7
    XOR ECX,ECX                         ; 0052a4fa
    MOV CX,word ptr [ESP + 0x6bc]       ; 0052a4fc
    IMUL EAX,ECX                        ; 0052a504
    MOV word ptr [ESP + 0x674],AX       ; 0052a507
    XOR EAX,EAX                         ; 0052a50f
    MOV EDX,dword ptr [ESP + 0x6c0]     ; 0052a511
    MOV AX,word ptr [ESP + 0x674]       ; 0052a518
    IMUL EDX,EAX                        ; 0052a520
    MOV EAX,[0x02dc9218]                ; 0052a523 | DAT_02dc9218
    MOV dword ptr [ESP + 0x670],EDX     ; 0052a528
    LEA EDX,[ESP + 0x668]               ; 0052a52f
    MOV word ptr [ESP + 0x676],BX       ; 0052a536
    PUSH EDX                            ; 0052a53e
    MOV ECX,dword ptr [EAX]             ; 0052a53f
    PUSH EAX                            ; 0052a541
    CALL dword ptr [ECX + 0x38]         ; 0052a542
    TEST EAX,EAX                        ; 0052a545
    JNZ 0x0052a81c                      ; 0052a547
        ;   XREF to: 0052a81c (CONDITIONAL_JUMP)  ; LAB_0052a81c
    PUSH 0x0                            ; 0052a54d
    PUSH 0x12                           ; 0052a54f
    LEA EDX,[ESP + 0x670]               ; 0052a551
    MOV EAX,[0x02dc9218]                ; 0052a558 | DAT_02dc9218
    PUSH EDX                            ; 0052a55d
    MOV EBX,dword ptr [EAX]             ; 0052a55e
    PUSH EAX                            ; 0052a560
    CALL dword ptr [EBX + 0x14]         ; 0052a561
    TEST EAX,EAX                        ; 0052a564
    JNZ 0x0052a855                      ; 0052a566
        ;   XREF to: 0052a855 (CONDITIONAL_JUMP)  ; LAB_0052a855
    MOV AX,word ptr [ESP + 0x676]       ; 0052a56c
    MOV [0x02dc9228],EAX                ; 0052a574 | DAT_02dc9228
    MOV EAX,dword ptr [ESP + 0x66c]     ; 0052a579
    MOV [0x02dc922c],EAX                ; 0052a580 | DAT_02dc922c
    XOR EAX,EAX                         ; 0052a585
    MOV AX,word ptr [ESP + 0x66a]       ; 0052a587
    MOV EDI,dword ptr [0x02dc9224]      ; 0052a58f | DAT_02dc9224
    MOV [0x02dc9230],EAX                ; 0052a595 | DAT_02dc9230
    TEST EDI,EDI                        ; 0052a59a
    JZ 0x0052a5ac                       ; 0052a59c
        ;   XREF to: 0052a5ac (CONDITIONAL_JUMP)  ; LAB_0052a5ac
    PUSH EDI                            ; 0052a59e
    MOV EDX,dword ptr [EDI]             ; 0052a59f
    XOR EBP,EBP                         ; 0052a5a1
    CALL dword ptr [EDX + 0x8]          ; 0052a5a3
    MOV dword ptr [0x02dc9224],EBP      ; 0052a5a6 | DAT_02dc9224
    PUSH 0x12                           ; 0052a5ac
        ;   Label: LAB_0052a5ac
    XOR EAX,EAX                         ; 0052a5ae
    MOV EBX,0x1                         ; 0052a5b0
    MOV dword ptr [ESP + 0x694],EAX     ; 0052a5b5
    MOV dword ptr [ESP + 0x698],EAX     ; 0052a5bc
    PUSH EAX                            ; 0052a5c3
    LEA EAX,[ESP + 0x684]               ; 0052a5c4
    MOV ESI,0x10                        ; 0052a5cb
    PUSH EAX                            ; 0052a5d0
    MOV EDI,0x2                         ; 0052a5d1
    MOV EBP,0x400                       ; 0052a5d6
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052a5db
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0052a5e0
    MOV ECX,0x5622                      ; 0052a5e3
    LEA EAX,[ESP + 0x654]               ; 0052a5e8
    PUSH 0x14                           ; 0052a5ef
    MOV word ptr [ESP + 0x680],BX       ; 0052a5f1
    MOV word ptr [ESP + 0x682],BX       ; 0052a5f9
    MOV dword ptr [ESP + 0x684],ECX     ; 0052a601
    MOV word ptr [ESP + 0x68e],SI       ; 0052a608
    MOV word ptr [ESP + 0x68c],DI       ; 0052a610
    PUSH 0x0                            ; 0052a618
    MOV EBX,0xac44                      ; 0052a61a
    MOV ESI,0x14                        ; 0052a61f
    PUSH EAX                            ; 0052a624
    MOV EDI,0x12                        ; 0052a625
    MOV dword ptr [ESP + 0x690],EBX     ; 0052a62a
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052a631
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0052a636
    LEA EAX,[ESP + 0x67c]               ; 0052a639
    LEA EDX,[ESP + 0x690]               ; 0052a640
    PUSH 0x0                            ; 0052a647
    MOV dword ptr [ESP + 0x658],ESI     ; 0052a649
    MOV dword ptr [ESP + 0x65c],EDI     ; 0052a650
    MOV dword ptr [ESP + 0x668],EAX     ; 0052a657
    MOV EAX,[0x02dc9214]                ; 0052a65e | DAT_02dc9214
    PUSH EDX                            ; 0052a663
    LEA EDX,[ESP + 0x65c]               ; 0052a664
    MOV dword ptr [ESP + 0x664],EBP     ; 0052a66b
    PUSH EDX                            ; 0052a672
    MOV EBX,dword ptr [EAX]             ; 0052a673
    PUSH EAX                            ; 0052a675
    CALL dword ptr [EBX + 0xc]          ; 0052a676
    TEST EAX,EAX                        ; 0052a679
    JNZ 0x0052a88e                      ; 0052a67b
        ;   XREF to: 0052a88e (CONDITIONAL_JUMP)  ; LAB_0052a88e
    MOV EAX,dword ptr [ESP + 0x690]     ; 0052a681
    MOV EDX,dword ptr [EAX]             ; 0052a688
    LEA EAX,[ESP + 0x694]               ; 0052a68a
    PUSH EAX                            ; 0052a691
    PUSH 0x5c3918                       ; 0052a692 | DAT_005c3918
    MOV EAX,dword ptr [ESP + 0x698]     ; 0052a697
    PUSH EAX                            ; 0052a69e
    CALL dword ptr [EDX]                ; 0052a69f
    MOV EDX,dword ptr [ESP + 0x694]     ; 0052a6a1
    TEST EDX,EDX                        ; 0052a6a8
    JNZ 0x0052a8c7                      ; 0052a6aa
        ;   XREF to: 0052a8c7 (CONDITIONAL_JUMP)  ; LAB_0052a8c7
    MOV EBX,dword ptr [ESP + 0x690]     ; 0052a6b0
    TEST EBX,EBX                        ; 0052a6b7
    JZ 0x0052a6ca                       ; 0052a6b9
        ;   XREF to: 0052a6ca (CONDITIONAL_JUMP)  ; LAB_0052a6ca
    PUSH EBX                            ; 0052a6bb
    MOV EAX,dword ptr [EBX]             ; 0052a6bc
    XOR EDI,EDI                         ; 0052a6be
    CALL dword ptr [EAX + 0x8]          ; 0052a6c0
    MOV dword ptr [ESP + 0x690],EDI     ; 0052a6c3
    MOV EBP,dword ptr [0x02dc9224]      ; 0052a6ca | DAT_02dc9224
        ;   Label: LAB_0052a6ca
    TEST EBP,EBP                        ; 0052a6d0
    JZ 0x0052a6fc                       ; 0052a6d2
        ;   XREF to: 0052a6fc (CONDITIONAL_JUMP)  ; LAB_0052a6fc
    PUSH 0x4                            ; 0052a6d4
    LEA EBX,[ESP + 0x69c]               ; 0052a6d6
    PUSH EBX                            ; 0052a6dd
    PUSH 0x0                            ; 0052a6de
    PUSH 0x0                            ; 0052a6e0
    MOV EAX,0x1                         ; 0052a6e2
    PUSH 0x0                            ; 0052a6e7
    MOV dword ptr [ESP + 0x6ac],EAX     ; 0052a6e9
    PUSH 0x5bed20                       ; 0052a6f0 | DAT_005bed20
    MOV EDX,dword ptr [EBP]             ; 0052a6f5
    PUSH EBP                            ; 0052a6f8
    CALL dword ptr [EDX + 0x10]         ; 0052a6f9
    CMP dword ptr [0x02dc9220],0x0      ; 0052a6fc | DAT_02dc9220
        ;   Label: LAB_0052a6fc
    JNZ 0x0052a914                      ; 0052a703
        ;   XREF to: 0052a914 (CONDITIONAL_JUMP)  ; LAB_0052a914
    MOV dword ptr [0x02dc923c],0x8      ; 0052a709 | DAT_02dc923c
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00528970 ; 0052a713
        ;   XREF to: 00528970 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getMaxSwLatency_FUN_00528970()
    MOV dword ptr [ESP + 0x69c],EAX     ; 0052a718
    FLD float ptr [ESP + 0x69c]         ; 0052a71f
    FILD dword ptr [0x02dc922c]         ; 0052a726 | DAT_02dc922c
    FMULP                               ; 0052a72c
    FILD dword ptr [0x02dc923c]         ; 0052a72e | DAT_02dc923c
    FDIVP                               ; 0052a734
    CALL crt_math.c_round_FUN_00563a30  ; 0052a736
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [0x02dc9234]        ; 0052a73b | DAT_02dc9234
    MOV EAX,[0x02dc9234]                ; 0052a741 | DAT_02dc9234
    ADD EAX,0xf                         ; 0052a746
    AND AL,0xf0                         ; 0052a749
    MOV [0x02dc9234],EAX                ; 0052a74b | DAT_02dc9234
    MOV EAX,[0x02dc9228]                ; 0052a750 | DAT_02dc9228
    MOV EDX,EAX                         ; 0052a755
    SAR EDX,0x1f                        ; 0052a757
    SHL EDX,0x3                         ; 0052a75a
    SBB EAX,EDX                         ; 0052a75d
    SAR EAX,0x3                         ; 0052a75f
    MOV EDX,dword ptr [0x02dc9234]      ; 0052a762 | DAT_02dc9234
    IMUL EDX,EAX                        ; 0052a768
    MOV EAX,[0x02dc9230]                ; 0052a76b | DAT_02dc9230
    IMUL EDX,EAX                        ; 0052a770
    PUSH 0x14                           ; 0052a773
    PUSH 0x0                            ; 0052a775
    LEA EAX,[ESP + 0x648]               ; 0052a777
    PUSH EAX                            ; 0052a77e
    MOV dword ptr [0x02dc9238],EDX      ; 0052a77f | DAT_02dc9238
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052a785
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    LEA EAX,[ESP + 0x674]               ; 0052a78a
    ADD ESP,0xc                         ; 0052a791
    MOV EDI,dword ptr [0x02dc923c]      ; 0052a794 | DAT_02dc923c
    MOV dword ptr [ESP + 0x650],EAX     ; 0052a79a
    MOV EAX,[0x02dc9238]                ; 0052a7a1 | DAT_02dc9238
    IMUL EAX,EDI                        ; 0052a7a6
    MOV EBX,0x14                        ; 0052a7a9
    XOR ESI,ESI                         ; 0052a7ae
    MOV EBP,dword ptr [0x02dc921c]      ; 0052a7b0 | DAT_02dc921c
    MOV dword ptr [ESP + 0x640],EBX     ; 0052a7b6
    MOV dword ptr [ESP + 0x644],ESI     ; 0052a7bd
    MOV dword ptr [ESP + 0x648],EAX     ; 0052a7c4
    TEST EBP,EBP                        ; 0052a7cb
    JZ 0x0052a7dc                       ; 0052a7cd
        ;   XREF to: 0052a7dc (CONDITIONAL_JUMP)  ; LAB_0052a7dc
    PUSH EBP                            ; 0052a7cf
    MOV EDX,dword ptr [EBP]             ; 0052a7d0
    CALL dword ptr [EDX + 0x8]          ; 0052a7d3
    MOV dword ptr [0x02dc921c],ESI      ; 0052a7d6 | DAT_02dc921c
    PUSH 0x0                            ; 0052a7dc
        ;   Label: LAB_0052a7dc
    PUSH 0x2dc921c                      ; 0052a7de | DAT_02dc921c
    LEA EBX,[ESP + 0x648]               ; 0052a7e3
    MOV EAX,[0x02dc9214]                ; 0052a7ea | DAT_02dc9214
    PUSH EBX                            ; 0052a7ef
    MOV EDX,dword ptr [EAX]             ; 0052a7f0
    PUSH EAX                            ; 0052a7f2
    CALL dword ptr [EDX + 0xc]          ; 0052a7f3
    TEST EAX,EAX                        ; 0052a7f6
    JNZ 0x0052a931                      ; 0052a7f8
        ;   XREF to: 0052a931 (CONDITIONAL_JUMP)  ; LAB_0052a931
    MOV EDX,dword ptr [ESP + 0x6c4]     ; 0052a7fe
    MOV EAX,[0x02dc9234]                ; 0052a805 | DAT_02dc9234
    MOV dword ptr [EDX],EAX             ; 0052a80a
    MOV EAX,0x1                         ; 0052a80c
    ADD ESP,0x6a0                       ; 0052a811
    POP EBP                             ; 0052a817
    POP EDI                             ; 0052a818
    POP ESI                             ; 0052a819
    POP EBX                             ; 0052a81a
    RET                                 ; 0052a81b
    PUSH EAX                            ; 0052a81c
        ;   Label: LAB_0052a81c
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a81d
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a822
    PUSH EAX                            ; 0052a825
    PUSH 0x5941dc                       ; 0052a826 | = "Set Primary buffer format"
    PUSH 0x5940b7                       ; 0052a82b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0052a830
    PUSH EAX                            ; 0052a837
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a838
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052a83d
    LEA EAX,[ESP + 0x190]               ; 0052a840
    PUSH EAX                            ; 0052a847
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052a848
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052a84d
    JMP 0x0052a474                      ; 0052a850
        ;   XREF to: 0052a474 (UNCONDITIONAL_JUMP)  ; LAB_0052a474
    PUSH EAX                            ; 0052a855
        ;   Label: LAB_0052a855
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a856
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a85b
    PUSH EAX                            ; 0052a85e
    PUSH 0x5941f6                       ; 0052a85f | = "Get Primary buffer format"
    PUSH 0x5940b7                       ; 0052a864 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 0052a869
    PUSH EAX                            ; 0052a870
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a871
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052a876
    LEA EAX,[ESP + 0x4b0]               ; 0052a879
    PUSH EAX                            ; 0052a880
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052a881
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052a886
    JMP 0x0052a474                      ; 0052a889
        ;   XREF to: 0052a474 (UNCONDITIONAL_JUMP)  ; LAB_0052a474
    PUSH EAX                            ; 0052a88e
        ;   Label: LAB_0052a88e
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a88f
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a894
    PUSH EAX                            ; 0052a897
    PUSH 0x5941a5                       ; 0052a898 | = "Create temp secondary buffer for prop..."
    PUSH 0x5940b7                       ; 0052a89d | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0052a8a2
    PUSH EAX                            ; 0052a8a9
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a8aa
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052a8af
    LEA EAX,[ESP + 0x320]               ; 0052a8b2
    PUSH EAX                            ; 0052a8b9
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052a8ba
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052a8bf
    JMP 0x0052a6ca                      ; 0052a8c2
        ;   XREF to: 0052a6ca (UNCONDITIONAL_JUMP)  ; LAB_0052a6ca
    PUSH 0x2dc9224                      ; 0052a8c7 | DAT_02dc9224
        ;   Label: LAB_0052a8c7
    PUSH 0x5bed10                       ; 0052a8cc | DAT_005bed10
    MOV EAX,dword ptr [EDX]             ; 0052a8d1
    PUSH EDX                            ; 0052a8d3
    CALL dword ptr [EAX]                ; 0052a8d4
    MOV EBX,dword ptr [ESP + 0x690]     ; 0052a8d6
    TEST EBX,EBX                        ; 0052a8dd
    JZ 0x0052a8f0                       ; 0052a8df
        ;   XREF to: 0052a8f0 (CONDITIONAL_JUMP)  ; LAB_0052a8f0
    PUSH EBX                            ; 0052a8e1
    MOV EAX,dword ptr [EBX]             ; 0052a8e2
    XOR EDI,EDI                         ; 0052a8e4
    CALL dword ptr [EAX + 0x8]          ; 0052a8e6
    MOV dword ptr [ESP + 0x690],EDI     ; 0052a8e9
    MOV EBP,dword ptr [ESP + 0x694]     ; 0052a8f0
        ;   Label: LAB_0052a8f0
    TEST EBP,EBP                        ; 0052a8f7
    JZ 0x0052a6ca                       ; 0052a8f9
        ;   XREF to: 0052a6ca (CONDITIONAL_JUMP)  ; LAB_0052a6ca
    PUSH EBP                            ; 0052a8ff
    MOV EAX,dword ptr [EBP]             ; 0052a900
    CALL dword ptr [EAX + 0x8]          ; 0052a903
    XOR ECX,ECX                         ; 0052a906
    MOV dword ptr [ESP + 0x694],ECX     ; 0052a908
    JMP 0x0052a6ca                      ; 0052a90f
        ;   XREF to: 0052a6ca (UNCONDITIONAL_JUMP)  ; LAB_0052a6ca
    MOV EAX,dword ptr [ESP + 0x6c4]     ; 0052a914
        ;   Label: LAB_0052a914
    MOV dword ptr [EAX],0x0             ; 0052a91b
    MOV EAX,0x1                         ; 0052a921
    ADD ESP,0x6a0                       ; 0052a926
    POP EBP                             ; 0052a92c
    POP EDI                             ; 0052a92d
    POP ESI                             ; 0052a92e
    POP EBX                             ; 0052a92f
    RET                                 ; 0052a930
    PUSH EAX                            ; 0052a931
        ;   Label: LAB_0052a931
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a932
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a937
    PUSH EAX                            ; 0052a93a
    PUSH 0x594210                       ; 0052a93b | = "Create the secondary buffer"
    PUSH 0x5940b7                       ; 0052a940 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052a945
    PUSH EAX                            ; 0052a949
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a94a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052a94f
    MOV EAX,ESP                         ; 0052a952
    PUSH EAX                            ; 0052a954
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052a955
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052a95a
    JMP 0x0052a474                      ; 0052a95d
        ;   XREF to: 0052a474 (UNCONDITIONAL_JUMP)  ; LAB_0052a474

