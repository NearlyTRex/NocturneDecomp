; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_fread_FUN_005636d0(char *param_1,uint param_2,int param_3,int *param_4)
;
;
; XREF[31]:
;   FUN_00401010 at 0040115d
;   FUN_004571f0 at 00457205
;   FUN_004676c0 at 004676ea
;   FUN_004a4170 at 004a436d
;   FUN_004a57c0 at 004a58ab
;   FUN_004f7ae0 at 004f7bb0
;   FUN_004f8570 at 004f8608
;   FUN_00522480 at 00522784
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480 at 0042d538
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 at 0042d2a8
;   ... and 21 more
;
; Referenced Globals:
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;
; Called Functions:
;   FUN_00564670
;   FUN_005671e4
;   FUN_00568e80
;   FUN_00568ed0
;   FUN_00568f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005636d0
        ;   Label: crt_stdio.c_fread_FUN_005636d0
    PUSH ESI                            ; 005636d1
    PUSH EDI                            ; 005636d2
    PUSH EBP                            ; 005636d3
    SUB ESP,0x4                         ; 005636d4
    MOV ESI,dword ptr [ESP + 0x20]      ; 005636d7
    MOV EBX,dword ptr [ESP + 0x24]      ; 005636db
    MOV EDX,dword ptr [EBX + 0x10]      ; 005636df
    PUSH EDX                            ; 005636e2
    CALL dword ptr [0x005c1ac0]         ; 005636e3 | PTR_FUN_005c1ac0
    MOV AH,byte ptr [EBX + 0xc]         ; 005636e9
    ADD ESP,0x4                         ; 005636ec
    TEST AH,0x1                         ; 005636ef
    JNZ 0x00563716                      ; 005636f2
        ;   XREF to: 00563716 (CONDITIONAL_JUMP)  ; LAB_00563716
    PUSH 0x4                            ; 005636f4
    CALL FUN_00568e80                   ; 005636f6
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    OR byte ptr [EBX + 0xc],0x20        ; 005636fb
    ADD ESP,0x4                         ; 005636ff
    MOV EDX,dword ptr [EBX + 0x10]      ; 00563702
    PUSH EDX                            ; 00563705
    CALL dword ptr [0x005c1ac4]         ; 00563706 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 0056370c
    XOR EAX,EAX                         ; 0056370f
    JMP 0x005638bf                      ; 00563711
        ;   XREF to: 005638bf (UNCONDITIONAL_JUMP)  ; LAB_005638bf
    IMUL ESI,dword ptr [ESP + 0x1c]     ; 00563716
        ;   Label: LAB_00563716
    TEST ESI,ESI                        ; 0056371b
    JNZ 0x00563736                      ; 0056371d
        ;   XREF to: 00563736 (CONDITIONAL_JUMP)  ; LAB_00563736
    MOV EAX,dword ptr [EBX + 0x10]      ; 0056371f
    PUSH EAX                            ; 00563722
    CALL dword ptr [0x005c1ac4]         ; 00563723 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00563729
    MOV EAX,ESI                         ; 0056372c
    ADD ESP,0x4                         ; 0056372e
    POP EBP                             ; 00563731
    POP EDI                             ; 00563732
    POP ESI                             ; 00563733
    POP EBX                             ; 00563734
    RET                                 ; 00563735
    MOV EAX,dword ptr [EBX + 0x8]       ; 00563736
        ;   Label: LAB_00563736
    CMP dword ptr [EAX + 0x8],0x0       ; 00563739
    JNZ 0x00563748                      ; 0056373d
        ;   XREF to: 00563748 (CONDITIONAL_JUMP)  ; LAB_00563748
    PUSH EBX                            ; 0056373f
    CALL FUN_00568ed0                   ; 00563740
        ;   XREF to: 00568ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00568ed0()
    ADD ESP,0x4                         ; 00563745
    XOR EBP,EBP                         ; 00563748
        ;   Label: LAB_00563748
    MOV DL,byte ptr [EBX + 0xc]         ; 0056374a
    MOV dword ptr [ESP],EBP             ; 0056374d
    TEST DL,0x40                        ; 00563750
    JZ 0x00563838                       ; 00563753
        ;   XREF to: 00563838 (CONDITIONAL_JUMP)  ; LAB_00563838
    MOV EBP,ESI                         ; 00563759
    MOV ECX,dword ptr [EBX + 0x4]       ; 0056375b
        ;   Label: LAB_0056375b
    TEST ECX,ECX                        ; 0056375e
    JZ 0x005637a6                       ; 00563760
        ;   XREF to: 005637a6 (CONDITIONAL_JUMP)  ; LAB_005637a6
    MOV EDX,ECX                         ; 00563762
    CMP ECX,EBP                         ; 00563764
    JBE 0x0056376a                      ; 00563766
        ;   XREF to: 0056376a (CONDITIONAL_JUMP)  ; LAB_0056376a
    MOV EDX,EBP                         ; 00563768
    MOV EDI,dword ptr [ESP + 0x18]      ; 0056376a
        ;   Label: LAB_0056376a
    MOV ECX,EDX                         ; 0056376e
    MOV ESI,dword ptr [EBX]             ; 00563770
    PUSH ES                             ; 00563772
    MOV AX,DS                           ; 00563773
    MOV ES,AX                           ; 00563775
    PUSH EDI                            ; 00563777
    MOV EAX,ECX                         ; 00563778
    SHR ECX,0x2                         ; 0056377a
    MOVSD.REP ES:EDI,ESI                ; 0056377d
    MOV CL,AL                           ; 0056377f
    AND CL,0x3                          ; 00563781
    MOVSB.REP ES:EDI,ESI                ; 00563784
    POP EDI                             ; 00563786
    POP ES                              ; 00563787
    SUB EBP,EDX                         ; 00563788
    MOV ECX,dword ptr [ESP]             ; 0056378a
    MOV ESI,dword ptr [EBX]             ; 0056378d
    ADD EDI,EDX                         ; 0056378f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00563791
    MOV dword ptr [ESP + 0x18],EDI      ; 00563794
    ADD ESI,EDX                         ; 00563798
    SUB EAX,EDX                         ; 0056379a
    ADD ECX,EDX                         ; 0056379c
    MOV dword ptr [EBX],ESI             ; 0056379e
    MOV dword ptr [ESP],ECX             ; 005637a0
    MOV dword ptr [EBX + 0x4],EAX       ; 005637a3
    TEST EBP,EBP                        ; 005637a6
        ;   Label: LAB_005637a6
    JZ 0x005638a9                       ; 005637a8
        ;   XREF to: 005638a9 (CONDITIONAL_JUMP)  ; LAB_005638a9
    CMP EBP,dword ptr [EBX + 0x14]      ; 005637ae
    JNC 0x005637b9                      ; 005637b1
        ;   XREF to: 005637b9 (CONDITIONAL_JUMP)  ; LAB_005637b9
    TEST byte ptr [EBX + 0xd],0x4       ; 005637b3
    JZ 0x00563822                       ; 005637b7
        ;   XREF to: 00563822 (CONDITIONAL_JUMP)  ; LAB_00563822
    MOV EDX,dword ptr [EBX + 0x8]       ; 005637b9
        ;   Label: LAB_005637b9
    MOV EDX,dword ptr [EDX + 0x8]       ; 005637bc
    MOV dword ptr [EBX],EDX             ; 005637bf
    MOV EAX,EBP                         ; 005637c1
    MOV DL,byte ptr [EBX + 0xd]         ; 005637c3
    MOV dword ptr [EBX + 0x4],0x0       ; 005637c6
    TEST DL,0x4                         ; 005637cd
    JNZ 0x005637df                      ; 005637d0
        ;   XREF to: 005637df (CONDITIONAL_JUMP)  ; LAB_005637df
    CMP EBP,0x200                       ; 005637d2
    JBE 0x005637df                      ; 005637d8
        ;   XREF to: 005637df (CONDITIONAL_JUMP)  ; LAB_005637df
    XOR AL,AL                           ; 005637da
    AND AH,0xfe                         ; 005637dc
    PUSH EAX                            ; 005637df
        ;   Label: LAB_005637df
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005637e0
    PUSH EDI                            ; 005637e4
    MOV EAX,dword ptr [EBX + 0x10]      ; 005637e5
    PUSH EAX                            ; 005637e8
    CALL FUN_00568f70                   ; 005637e9
        ;   XREF to: 00568f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00568f70()
    ADD ESP,0xc                         ; 005637ee
    CMP EAX,-0x1                        ; 005637f1
    JNZ 0x005637ff                      ; 005637f4
        ;   XREF to: 005637ff (CONDITIONAL_JUMP)  ; LAB_005637ff
    OR byte ptr [EBX + 0xc],0x20        ; 005637f6
    JMP 0x005638a9                      ; 005637fa
        ;   XREF to: 005638a9 (UNCONDITIONAL_JUMP)  ; LAB_005638a9
    TEST EAX,EAX                        ; 005637ff
        ;   Label: LAB_005637ff
    JNZ 0x0056380c                      ; 00563801
        ;   XREF to: 0056380c (CONDITIONAL_JUMP)  ; LAB_0056380c
    OR byte ptr [EBX + 0xc],0x10        ; 00563803
    JMP 0x005638a9                      ; 00563807
        ;   XREF to: 005638a9 (UNCONDITIONAL_JUMP)  ; LAB_005638a9
    MOV ECX,dword ptr [ESP]             ; 0056380c
        ;   Label: LAB_0056380c
    LEA EDX,[EDI + EAX*0x1]             ; 0056380f
    SUB EBP,EAX                         ; 00563812
    ADD ECX,EAX                         ; 00563814
    MOV dword ptr [ESP + 0x18],EDX      ; 00563816
    MOV dword ptr [ESP],ECX             ; 0056381a
    JMP 0x0056375b                      ; 0056381d
        ;   XREF to: 0056375b (UNCONDITIONAL_JUMP)  ; LAB_0056375b
    PUSH EBX                            ; 00563822
        ;   Label: LAB_00563822
    CALL FUN_00564670                   ; 00563823
        ;   XREF to: 00564670 (UNCONDITIONAL_CALL)  ; undefined FUN_00564670()
    ADD ESP,0x4                         ; 00563828
    TEST EAX,EAX                        ; 0056382b
    JZ 0x005638a9                       ; 0056382d
        ;   XREF to: 005638a9 (CONDITIONAL_JUMP)  ; LAB_005638a9
    JMP 0x0056375b                      ; 00563833
        ;   XREF to: 0056375b (UNCONDITIONAL_JUMP)  ; LAB_0056375b
    MOV EBP,dword ptr [ESP + 0x18]      ; 00563838
        ;   Label: LAB_00563838
    ADD ESI,EBP                         ; 0056383c
    XOR EDI,EDI                         ; 0056383e
    CMP EDI,dword ptr [EBX + 0x4]       ; 00563840
        ;   Label: LAB_00563840
    JNZ 0x00563852                      ; 00563843
        ;   XREF to: 00563852 (CONDITIONAL_JUMP)  ; LAB_00563852
    PUSH EBX                            ; 00563845
    CALL FUN_00564670                   ; 00563846
        ;   XREF to: 00564670 (UNCONDITIONAL_CALL)  ; undefined FUN_00564670()
    ADD ESP,0x4                         ; 0056384b
    TEST EAX,EAX                        ; 0056384e
    JZ 0x005638a9                       ; 00563850
        ;   XREF to: 005638a9 (CONDITIONAL_JUMP)  ; LAB_005638a9
    MOV EDX,dword ptr [EBX + 0x4]       ; 00563852
        ;   Label: LAB_00563852
    DEC EDX                             ; 00563855
    MOV EAX,dword ptr [EBX]             ; 00563856
    MOV dword ptr [EBX + 0x4],EDX       ; 00563858
    LEA EDX,[EAX + 0x1]                 ; 0056385b
    MOV dword ptr [EBX],EDX             ; 0056385e
    MOV AL,byte ptr [EAX]               ; 00563860
    AND EAX,0xff                        ; 00563862
    CMP EAX,0xd                         ; 00563867
    JNZ 0x0056388f                      ; 0056386a
        ;   XREF to: 0056388f (CONDITIONAL_JUMP)  ; LAB_0056388f
    CMP EDI,dword ptr [EBX + 0x4]       ; 0056386c
    JNZ 0x0056387e                      ; 0056386f
        ;   XREF to: 0056387e (CONDITIONAL_JUMP)  ; LAB_0056387e
    PUSH EBX                            ; 00563871
    CALL FUN_00564670                   ; 00563872
        ;   XREF to: 00564670 (UNCONDITIONAL_CALL)  ; undefined FUN_00564670()
    ADD ESP,0x4                         ; 00563877
    TEST EAX,EAX                        ; 0056387a
    JZ 0x005638a9                       ; 0056387c
        ;   XREF to: 005638a9 (CONDITIONAL_JUMP)  ; LAB_005638a9
    DEC dword ptr [EBX + 0x4]           ; 0056387e
        ;   Label: LAB_0056387e
    MOV EAX,dword ptr [EBX]             ; 00563881
    LEA EDX,[EAX + 0x1]                 ; 00563883
    MOV dword ptr [EBX],EDX             ; 00563886
    MOV AL,byte ptr [EAX]               ; 00563888
    AND EAX,0xff                        ; 0056388a
    CMP EAX,0x1a                        ; 0056388f
        ;   Label: LAB_0056388f
    JNZ 0x0056389a                      ; 00563892
        ;   XREF to: 0056389a (CONDITIONAL_JUMP)  ; LAB_0056389a
    OR byte ptr [EBX + 0xc],0x10        ; 00563894
    JMP 0x005638a9                      ; 00563898
        ;   XREF to: 005638a9 (UNCONDITIONAL_JUMP)  ; LAB_005638a9
    MOV EDX,dword ptr [ESP]             ; 0056389a
        ;   Label: LAB_0056389a
    INC EBP                             ; 0056389d
    INC EDX                             ; 0056389e
    MOV byte ptr [EBP + -0x1],AL        ; 0056389f
    MOV dword ptr [ESP],EDX             ; 005638a2
    CMP EBP,ESI                         ; 005638a5
    JNZ 0x00563840                      ; 005638a7
        ;   XREF to: 00563840 (CONDITIONAL_JUMP)  ; LAB_00563840
    MOV ESI,dword ptr [EBX + 0x10]      ; 005638a9
        ;   Label: LAB_005638a9
    PUSH ESI                            ; 005638ac
    CALL dword ptr [0x005c1ac4]         ; 005638ad | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 005638b3
    XOR EDX,EDX                         ; 005638b6
    MOV EAX,dword ptr [ESP]             ; 005638b8
    DIV dword ptr [ESP + 0x1c]          ; 005638bb
    ADD ESP,0x4                         ; 005638bf
        ;   Label: LAB_005638bf
    POP EBP                             ; 005638c2
    POP EDI                             ; 005638c3
    POP ESI                             ; 005638c4
    POP EBX                             ; 005638c5
    RET                                 ; 005638c6

