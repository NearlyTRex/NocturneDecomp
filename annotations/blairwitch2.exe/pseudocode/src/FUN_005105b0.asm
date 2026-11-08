; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005105b0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d4810 at 004d481a
;
; Referenced Globals:
;   TerminatedCString s_STAND_005e14ea
;   TerminatedCString s_s_confused_while_walking_005e14f0
;   undefined4 DAT_005e151a
;   undefined4 DAT_005e151e
;   TerminatedCString s_STAND_005e1523
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_006167e0
;   undefined4 DAT_007c158c
;
; Called Functions:
;   FUN_00408d70
;   FUN_00423a10
;   FUN_00423a60
;   FUN_00424470
;   FUN_004244b0
;   FUN_004287f0
;   FUN_00429420
;   FUN_00429e90
;   FUN_0042a7a0
;   FUN_0042aa00
;   FUN_0042b2a0
;   FUN_00436710
;   FUN_004c9ad0
;   FUN_00502fa0
;   FUN_005030c0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005105b0
        ;   Label: FUN_005105b0
    PUSH ESI                            ; 005105b1
    PUSH EDI                            ; 005105b2
    PUSH EBP                            ; 005105b3
    MOV EBP,ESP                         ; 005105b4
    SUB ESP,0x80                        ; 005105b6
    AND ESP,0xfffffff8                  ; 005105bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005105bf
    PUSH dword ptr [EBP + 0x18]         ; 005105c2
    PUSH EBX                            ; 005105c5
    CALL FUN_004244b0                   ; 005105c6
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 005105cb
    TEST EAX,EAX                        ; 005105ce
    JNZ 0x005105d9                      ; 005105d0
        ;   XREF to: 005105d9 (CONDITIONAL_JUMP)  ; LAB_005105d9
    MOV ESP,EBP                         ; 005105d2
    POP EBP                             ; 005105d4
    POP EDI                             ; 005105d5
    POP ESI                             ; 005105d6
    POP EBX                             ; 005105d7
    RET                                 ; 005105d8
    PUSH dword ptr [EBP + 0x18]         ; 005105d9
        ;   Label: LAB_005105d9
    PUSH EBX                            ; 005105dc
    CALL FUN_0042a7a0                   ; 005105dd
        ;   XREF to: 0042a7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a7a0()
    LEA EAX,[EBX + 0x2508]              ; 005105e2
    XOR EDX,EDX                         ; 005105e8
    ADD ESP,0x8                         ; 005105ea
    MOV dword ptr [EAX + 0x8],EDX       ; 005105ed
    FLD float ptr [EBP + 0x18]          ; 005105f0
    MOV ECX,dword ptr [EAX + 0x8]       ; 005105f3
    MOV dword ptr [EAX + 0x4],ECX       ; 005105f6
    MOV ECX,dword ptr [EAX + 0x4]       ; 005105f9
    MOV dword ptr [EAX],ECX             ; 005105fc
    FMUL float ptr [EBX + 0x24344]      ; 005105fe
    MOV dword ptr [ESP + 0x7c],EDX      ; 00510604
    LEA ESI,[EBX + 0x2b4]               ; 00510608
    FSTP float ptr [ESP]                ; 0051060e
    FLD float ptr [ESP]                 ; 00510611
        ;   Label: LAB_00510611
    FLDZ                                ; 00510614
    FCOMPP                              ; 00510616
    FNSTSW AX                           ; 00510618
    SAHF                                ; 0051061a
    JNC 0x00510635                      ; 0051061b
        ;   XREF to: 00510635 (CONDITIONAL_JUMP)  ; LAB_00510635
    MOV EAX,ESP                         ; 0051061d
    PUSH EAX                            ; 0051061f
    PUSH ESI                            ; 00510620
    CALL FUN_005030c0                   ; 00510621
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 00510626
    PUSH EAX                            ; 00510629
    PUSH EBX                            ; 0051062a
    CALL FUN_0042aa00                   ; 0051062b
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 00510630
    JMP 0x00510611                      ; 00510633
        ;   XREF to: 00510611 (UNCONDITIONAL_JUMP)  ; LAB_00510611
    PUSH EBX                            ; 00510635
        ;   Label: LAB_00510635
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00510636
    CALL dword ptr [EAX + 0x114]        ; 0051063c
    ADD ESP,0x4                         ; 00510642
    CMP EAX,0x1                         ; 00510645
    JLE 0x005106c6                      ; 00510648
        ;   XREF to: 005106c6 (CONDITIONAL_JUMP)  ; LAB_005106c6
    CMP dword ptr [EBX + 0x70],0x1      ; 0051064e
    JNZ 0x005106c6                      ; 00510652
        ;   XREF to: 005106c6 (CONDITIONAL_JUMP)  ; LAB_005106c6
    MOV EDI,dword ptr [EBX + 0x24340]   ; 00510654
    TEST EDI,EDI                        ; 0051065a
    JNZ 0x005106c6                      ; 0051065c
        ;   XREF to: 005106c6 (CONDITIONAL_JUMP)  ; LAB_005106c6
    CMP dword ptr [EBX + 0xdc],0x0      ; 0051065e
    JNZ 0x005106c6                      ; 00510665
        ;   XREF to: 005106c6 (CONDITIONAL_JUMP)  ; LAB_005106c6
    PUSH EDI                            ; 00510667
    PUSH ESI                            ; 00510668
    LEA ESI,[ESP + 0x54]                ; 00510669
    LEA EDI,[ESP + 0x78]                ; 0051066d
    CALL FUN_005469a0                   ; 00510671
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 00510676
    LEA EAX,[ESP + 0x70]                ; 00510679
    LEA ESI,[ESP + 0x4c]                ; 0051067d
    PUSH EAX                            ; 00510681
    MOVSD ES:EDI,ESI                    ; 00510682
    MOVSD ES:EDI,ESI                    ; 00510683
    MOVSD ES:EDI,ESI                    ; 00510684
    PUSH EBX                            ; 00510685
    LEA ESI,[ESP + 0x30]                ; 00510686
    CALL FUN_00408d70                   ; 0051068a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 0051068f
    PUSH 0x0                            ; 00510692
    LEA EAX,[ESP + 0x38]                ; 00510694
    LEA EDI,[ESP + 0x38]                ; 00510698
    PUSH EAX                            ; 0051069c
    MOV EDX,dword ptr [0x006167e0]      ; 0051069d | DAT_006167e0
    LEA ESI,[ESP + 0x30]                ; 005106a3
    PUSH EDX                            ; 005106a7
    MOVSD ES:EDI,ESI                    ; 005106a8
    MOVSD ES:EDI,ESI                    ; 005106a9
    MOVSD ES:EDI,ESI                    ; 005106aa
    CALL FUN_004c9ad0                   ; 005106ab
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9ad0()
    MOV ECX,0x1                         ; 005106b0
    ADD ESP,0xc                         ; 005106b5
    MOV dword ptr [EBX + 0x24340],0x1   ; 005106b8
    MOV dword ptr [ESP + 0x7c],ECX      ; 005106c2
    FLD float ptr [EBP + 0x18]          ; 005106c6
        ;   Label: LAB_005106c6
    FMUL float ptr [EBX + 0x24344]      ; 005106c9
    FLD float ptr [EBX + 0x2510]        ; 005106cf
    SUB ESP,0x4                         ; 005106d5
    FSTP float ptr [EBX + 0x2594]       ; 005106d8
    FSTP float ptr [ESP]                ; 005106de
    PUSH EBX                            ; 005106e1
    CALL FUN_0042b2a0                   ; 005106e2
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b2a0()
    ADD ESP,0x8                         ; 005106e7
    PUSH dword ptr [EBP + 0x18]         ; 005106ea
    PUSH EBX                            ; 005106ed
    CALL FUN_004287f0                   ; 005106ee
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004287f0()
    ADD ESP,0x8                         ; 005106f3
    TEST EAX,EAX                        ; 005106f6
    JZ 0x00510740                       ; 005106f8
        ;   XREF to: 00510740 (CONDITIONAL_JUMP)  ; LAB_00510740
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 005106fa
    CMP EAX,0x2                         ; 00510700
    JNC 0x005108b3                      ; 00510703
        ;   XREF to: 005108b3 (CONDITIONAL_JUMP)  ; LAB_005108b3
    CMP EAX,0x1                         ; 00510709
    JNZ 0x005108c0                      ; 0051070c
        ;   XREF to: 005108c0 (CONDITIONAL_JUMP)  ; LAB_005108c0
    PUSH 0x1                            ; 00510712
        ;   Label: LAB_00510712
    PUSH 0x5e151e                       ; 00510714 | DAT_005e151e
    LEA EAX,[EBX + 0x2b4]               ; 00510719
        ;   Label: LAB_00510719
    PUSH EAX                            ; 0051071f
    CALL FUN_005036b0                   ; 00510720
        ;   XREF to: 005036b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005036b0()
    ADD ESP,0xc                         ; 00510725
        ;   Label: LAB_00510725
    LEA EAX,[EBX + 0x2508]              ; 00510728
    MOV dword ptr [EAX + 0x8],0x0       ; 0051072e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00510735
    MOV dword ptr [EAX + 0x4],EDX       ; 00510738
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051073b
    MOV dword ptr [EAX],EDX             ; 0051073e
    PUSH dword ptr [EBP + 0x18]         ; 00510740
        ;   Label: LAB_00510740
    PUSH EBX                            ; 00510743
    LEA ESI,[EBX + 0x2588]              ; 00510744
    CALL FUN_00423a10                   ; 0051074a
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a10()
    ADD ESP,0x8                         ; 0051074f
    FLD float ptr [ESI]                 ; 00510752
    FMUL float ptr [EBP + 0x18]         ; 00510754
    FLD float ptr [ESI + 0x4]           ; 00510757
    FMUL float ptr [EBP + 0x18]         ; 0051075a
    FLD float ptr [ESI + 0x8]           ; 0051075d
    FMUL float ptr [EBP + 0x18]         ; 00510760
    LEA EDI,[ESP + 0x10]                ; 00510763
    LEA ESI,[ESP + 0x58]                ; 00510767
    FXCH ST2                            ; 0051076b
    FSTP float ptr [ESP + 0x58]         ; 0051076d
    FSTP float ptr [ESP + 0x5c]         ; 00510771
    FSTP float ptr [ESP + 0x60]         ; 00510775
    MOVSD ES:EDI,ESI                    ; 00510779
    MOVSD ES:EDI,ESI                    ; 0051077a
    MOVSD ES:EDI,ESI                    ; 0051077b
    LEA EAX,[EBX + 0x257c]              ; 0051077c
    FLD float ptr [ESP + 0x10]          ; 00510782
    FLD float ptr [ESP + 0x14]          ; 00510786
    FLD float ptr [ESP + 0x18]          ; 0051078a
    LEA EDI,[ESP + 0x4]                 ; 0051078e
    LEA ESI,[ESP + 0x40]                ; 00510792
    FXCH ST2                            ; 00510796
    FADD float ptr [EAX]                ; 00510798
    FXCH                                ; 0051079a
    FADD float ptr [EAX + 0x4]          ; 0051079c
    FXCH ST2                            ; 0051079f
    FADD float ptr [EAX + 0x8]          ; 005107a1
    FXCH                                ; 005107a4
    FSTP float ptr [ESP + 0x40]         ; 005107a6
    FXCH                                ; 005107aa
    FSTP float ptr [ESP + 0x44]         ; 005107ac
    FSTP float ptr [ESP + 0x48]         ; 005107b0
    MOVSD ES:EDI,ESI                    ; 005107b4
    MOVSD ES:EDI,ESI                    ; 005107b5
    MOVSD ES:EDI,ESI                    ; 005107b6
    LEA EDX,[EBX + 0x2508]              ; 005107b7
    FLD float ptr [ESP + 0x4]           ; 005107bd
    FLD float ptr [ESP + 0x8]           ; 005107c1
    FLD float ptr [ESP + 0xc]           ; 005107c5
    LEA EDI,[ESP + 0x1c]                ; 005107c9
    LEA ESI,[ESP + 0x64]                ; 005107cd
    FXCH ST2                            ; 005107d1
    FADD float ptr [EDX]                ; 005107d3
    FXCH                                ; 005107d5
    FADD float ptr [EDX + 0x4]          ; 005107d7
    FXCH ST2                            ; 005107da
    FADD float ptr [EDX + 0x8]          ; 005107dc
    FXCH                                ; 005107df
    FSTP float ptr [ESP + 0x64]         ; 005107e1
    FXCH                                ; 005107e5
    FSTP float ptr [ESP + 0x68]         ; 005107e7
    FSTP float ptr [ESP + 0x6c]         ; 005107eb
    MOVSD ES:EDI,ESI                    ; 005107ef
    MOVSD ES:EDI,ESI                    ; 005107f0
    MOVSD ES:EDI,ESI                    ; 005107f1
    MOV dword ptr [EAX + 0x8],0x0       ; 005107f2
    MOV ECX,dword ptr [EAX + 0x8]       ; 005107f9
    MOV dword ptr [EAX + 0x4],ECX       ; 005107fc
    MOV ECX,dword ptr [EAX + 0x4]       ; 005107ff
    MOV dword ptr [EAX],ECX             ; 00510802
    MOV dword ptr [EDX + 0x8],0x0       ; 00510804
    LEA EAX,[ESP + 0x1c]                ; 0051080b
    FLD float ptr [EDX + 0x8]           ; 0051080f
    PUSH EAX                            ; 00510812
    FST float ptr [EDX + 0x4]           ; 00510813
    PUSH EBX                            ; 00510816
    FSTP float ptr [EDX]                ; 00510817
    CALL FUN_00423a60                   ; 00510819
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a60()
    ADD ESP,0x8                         ; 0051081e
    PUSH EBX                            ; 00510821
    CALL FUN_00424470                   ; 00510822
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 00510827
    LEA EAX,[EBX + 0x2b4]               ; 0051082a
    PUSH EAX                            ; 00510830
    CALL FUN_00544f00                   ; 00510831
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 00510836
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00510839
    PUSH EDI                            ; 0051083d
    PUSH dword ptr [EBP + 0x18]         ; 0051083e
    PUSH EBX                            ; 00510841
    CALL FUN_00429420                   ; 00510842
        ;   XREF to: 00429420 (UNCONDITIONAL_CALL)  ; undefined FUN_00429420()
    ADD ESP,0xc                         ; 00510847
    PUSH dword ptr [EBP + 0x18]         ; 0051084a
    PUSH EBX                            ; 0051084d
    CALL FUN_00429e90                   ; 0051084e
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 00510853
    MOV ESP,EBP                         ; 00510856
    POP EBP                             ; 00510858
    POP EDI                             ; 00510859
    POP ESI                             ; 0051085a
    POP EBX                             ; 0051085b
    RET                                 ; 0051085c
    PUSH 0x1                            ; 0051085d
        ;   Label: LAB_0051085d
    PUSH 0x5e14ea                       ; 0051085f | = "STAND"
    PUSH ESI                            ; 00510864
    CALL FUN_005036b0                   ; 00510865
        ;   XREF to: 005036b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005036b0()
    ADD ESP,0xc                         ; 0051086a
    PUSH EBX                            ; 0051086d
    PUSH 0x5e14f0                       ; 0051086e | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 00510873 | PTR_DAT_00609ed0
    PUSH ESI                            ; 00510879 | DAT_007c158c
    CALL FUN_00436710                   ; 0051087a
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    JMP 0x00510725                      ; 0051087f
        ;   XREF to: 00510725 (UNCONDITIONAL_JUMP)  ; LAB_00510725
    PUSH 0x0                            ; 00510884
        ;   Label: LAB_00510884
    PUSH 0x5e151a                       ; 00510886 | DAT_005e151a
    PUSH ESI                            ; 0051088b
    CALL FUN_00503860                   ; 0051088c
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    ADD ESP,0x4                         ; 00510891
    PUSH EAX                            ; 00510894
    CALL FUN_00502fa0                   ; 00510895
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00502fa0()
    ADD ESP,0xc                         ; 0051089a
    TEST EAX,EAX                        ; 0051089d
    JL 0x00510712                       ; 0051089f
        ;   XREF to: 00510712 (CONDITIONAL_JUMP)  ; LAB_00510712
    PUSH 0x1                            ; 005108a5
    PUSH EAX                            ; 005108a7
    PUSH ESI                            ; 005108a8
    CALL FUN_00503620                   ; 005108a9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    JMP 0x00510725                      ; 005108ae
        ;   XREF to: 00510725 (UNCONDITIONAL_JUMP)  ; LAB_00510725
    LEA ESI,[EBX + 0x2b4]               ; 005108b3
        ;   Label: LAB_005108b3
    JBE 0x00510884                      ; 005108b9
        ;   XREF to: 00510884 (CONDITIONAL_JUMP)  ; LAB_00510884
    CMP EAX,0x3                         ; 005108bb
    JZ 0x0051085d                       ; 005108be
        ;   XREF to: 0051085d (CONDITIONAL_JUMP)  ; LAB_0051085d
    PUSH 0x1                            ; 005108c0
        ;   Label: LAB_005108c0
    PUSH 0x5e1523                       ; 005108c2 | = "STAND"
    JMP 0x00510719                      ; 005108c7
        ;   XREF to: 00510719 (UNCONDITIONAL_JUMP)  ; LAB_00510719

