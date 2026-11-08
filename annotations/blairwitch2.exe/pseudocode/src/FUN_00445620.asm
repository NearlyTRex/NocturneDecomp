; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00445620(int *param_1,float *param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00446df0 at 00446e1f
;
; Referenced Globals:
;   undefined4 DAT_005ce7f6
;   undefined4 DAT_005ce7fe
;   undefined4 DAT_0151082c
;   undefined4 DAT_01510830
;   undefined4 DAT_01510834
;   undefined4 DAT_01510838
;
; Called Functions:
;   FUN_00444a40
;   FUN_004454b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445620
        ;   Label: FUN_00445620
    PUSH ESI                            ; 00445621
    PUSH EDI                            ; 00445622
    PUSH EBP                            ; 00445623
    MOV EBP,ESP                         ; 00445624
    SUB ESP,0x78                        ; 00445626
    AND ESP,0xfffffff8                  ; 00445629
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044562c
    FLD float ptr [EBX + 0x10]          ; 0044562f
    FCOMP double ptr [0x005ce7f6]       ; 00445632 | DAT_005ce7f6
    FNSTSW AX                           ; 00445638
    SAHF                                ; 0044563a
    JA 0x00445895                       ; 0044563b
        ;   XREF to: 00445895 (CONDITIONAL_JUMP)  ; LAB_00445895
    MOV EAX,dword ptr [EBX]             ; 00445641
    FLD float ptr [EAX]                 ; 00445643
    MOV EAX,dword ptr [EBP + 0x18]      ; 00445645
    FSUB float ptr [EAX]                ; 00445648
    FSTP float ptr [ESP + 0x48]         ; 0044564a
    MOV EAX,dword ptr [EBX]             ; 0044564e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00445650
    MOV dword ptr [ESP + 0x4c],EAX      ; 00445653
    MOV EAX,dword ptr [EBX]             ; 00445657
    FLD float ptr [EAX + 0x8]           ; 00445659
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044565c
    FSUB float ptr [EAX + 0x8]          ; 0044565f
    FSTP float ptr [ESP + 0x50]         ; 00445662
    MOV EAX,dword ptr [EBX + 0x4]       ; 00445666
    FLD float ptr [EAX]                 ; 00445669
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044566b
    FSUB float ptr [EAX]                ; 0044566e
    FSTP float ptr [ESP + 0x30]         ; 00445670
    MOV EAX,dword ptr [EBX + 0x4]       ; 00445674
    MOV EAX,dword ptr [EAX + 0x4]       ; 00445677
    MOV dword ptr [ESP + 0x34],EAX      ; 0044567a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044567e
    FLD float ptr [EAX + 0x8]           ; 00445681
    MOV EAX,dword ptr [EBP + 0x18]      ; 00445684
    FSUB float ptr [EAX + 0x8]          ; 00445687
    FSTP float ptr [ESP + 0x38]         ; 0044568a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0044568e
    FLD float ptr [EAX]                 ; 00445691
    MOV EAX,dword ptr [EBP + 0x18]      ; 00445693
    FSUB float ptr [EAX]                ; 00445696
    FSTP float ptr [ESP + 0x24]         ; 00445698
    MOV EAX,dword ptr [EBX + 0x8]       ; 0044569c
    MOV EAX,dword ptr [EAX + 0x4]       ; 0044569f
    MOV dword ptr [ESP + 0x28],EAX      ; 004456a2
    MOV EAX,dword ptr [EBX + 0x8]       ; 004456a6
    FLD float ptr [EAX + 0x8]           ; 004456a9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004456ac
    FSUB float ptr [EAX + 0x8]          ; 004456af
    FLD float ptr [ESP + 0x4c]          ; 004456b2
    FXCH                                ; 004456b6
    FSTP float ptr [ESP + 0x2c]         ; 004456b8
    FCOMP float ptr [ESP + 0x34]        ; 004456bc
    FNSTSW AX                           ; 004456c0
    SAHF                                ; 004456c2
    JC 0x0044589e                       ; 004456c3
        ;   XREF to: 0044589e (CONDITIONAL_JUMP)  ; LAB_0044589e
    FLD float ptr [ESP + 0x34]          ; 004456c9
        ;   Label: LAB_004456c9
    FCOMP float ptr [ESP + 0x28]        ; 004456cd
    FNSTSW AX                           ; 004456d1
    SAHF                                ; 004456d3
    JNC 0x00445729                      ; 004456d4
        ;   XREF to: 00445729 (CONDITIONAL_JUMP)  ; LAB_00445729
    LEA EDI,[ESP + 0x3c]                ; 004456d6
    LEA ESI,[ESP + 0x30]                ; 004456da
    MOVSD ES:EDI,ESI                    ; 004456de
    MOVSD ES:EDI,ESI                    ; 004456df
    MOVSD ES:EDI,ESI                    ; 004456e0
    LEA EAX,[ESP + 0x24]                ; 004456e1
    LEA ESI,[ESP + 0x30]                ; 004456e5
    CMP ESI,EAX                         ; 004456e9
    JZ 0x00445705                       ; 004456eb
        ;   XREF to: 00445705 (CONDITIONAL_JUMP)  ; LAB_00445705
    MOV EAX,dword ptr [ESP + 0x24]      ; 004456ed
    MOV dword ptr [ESP + 0x30],EAX      ; 004456f1
    MOV EAX,dword ptr [ESP + 0x28]      ; 004456f5
    MOV dword ptr [ESP + 0x34],EAX      ; 004456f9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004456fd
    MOV dword ptr [ESP + 0x38],EAX      ; 00445701
    LEA EAX,[ESP + 0x24]                ; 00445705
        ;   Label: LAB_00445705
    LEA ESI,[ESP + 0x3c]                ; 00445709
    CMP EAX,ESI                         ; 0044570d
    JZ 0x00445729                       ; 0044570f
        ;   XREF to: 00445729 (CONDITIONAL_JUMP)  ; LAB_00445729
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00445711
    MOV dword ptr [ESP + 0x24],EAX      ; 00445715
    MOV EAX,dword ptr [ESP + 0x40]      ; 00445719
    MOV dword ptr [ESP + 0x28],EAX      ; 0044571d
    MOV EAX,dword ptr [ESP + 0x44]      ; 00445721
    MOV dword ptr [ESP + 0x2c],EAX      ; 00445725
    MOV EAX,dword ptr [EBP + 0x18]      ; 00445729
        ;   Label: LAB_00445729
    FLD float ptr [ESP + 0x28]          ; 0044572c
    FCOMP float ptr [EAX + 0x4]         ; 00445730
    FNSTSW AX                           ; 00445733
    SAHF                                ; 00445735
    JA 0x00445895                       ; 00445736
        ;   XREF to: 00445895 (CONDITIONAL_JUMP)  ; LAB_00445895
    FLD float ptr [ESP + 0x4c]          ; 0044573c
    FCOMP float ptr [ESP + 0x34]        ; 00445740
    FNSTSW AX                           ; 00445744
    SAHF                                ; 00445746
    JNC 0x0044579c                      ; 00445747
        ;   XREF to: 0044579c (CONDITIONAL_JUMP)  ; LAB_0044579c
    LEA EDI,[ESP + 0xc]                 ; 00445749
    LEA ESI,[ESP + 0x48]                ; 0044574d
    MOVSD ES:EDI,ESI                    ; 00445751
    MOVSD ES:EDI,ESI                    ; 00445752
    MOVSD ES:EDI,ESI                    ; 00445753
    LEA EAX,[ESP + 0x30]                ; 00445754
    LEA ESI,[ESP + 0x48]                ; 00445758
    CMP ESI,EAX                         ; 0044575c
    JZ 0x00445778                       ; 0044575e
        ;   XREF to: 00445778 (CONDITIONAL_JUMP)  ; LAB_00445778
    MOV EAX,dword ptr [ESP + 0x30]      ; 00445760
    MOV dword ptr [ESP + 0x48],EAX      ; 00445764
    MOV EAX,dword ptr [ESP + 0x34]      ; 00445768
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044576c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00445770
    MOV dword ptr [ESP + 0x50],EAX      ; 00445774
    LEA ESI,[ESP + 0x30]                ; 00445778
        ;   Label: LAB_00445778
    LEA EAX,[ESP + 0xc]                 ; 0044577c
    CMP ESI,EAX                         ; 00445780
    JZ 0x0044579c                       ; 00445782
        ;   XREF to: 0044579c (CONDITIONAL_JUMP)  ; LAB_0044579c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00445784
    MOV dword ptr [ESP + 0x30],EAX      ; 00445788
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044578c
    MOV dword ptr [ESP + 0x34],EAX      ; 00445790
    MOV EAX,dword ptr [ESP + 0x14]      ; 00445794
    MOV dword ptr [ESP + 0x38],EAX      ; 00445798
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044579c
        ;   Label: LAB_0044579c
    FLD float ptr [ESP + 0x4c]          ; 0044579f
    FCOMP float ptr [EAX]               ; 004457a3
    FNSTSW AX                           ; 004457a5
    SAHF                                ; 004457a7
    JC 0x00445895                       ; 004457a8
        ;   XREF to: 00445895 (CONDITIONAL_JUMP)  ; LAB_00445895
    FLD float ptr [ESP + 0x50]          ; 004457ae
    FMUL ST0                            ; 004457b2
    FLD float ptr [ESP + 0x48]          ; 004457b4
    FMUL ST0                            ; 004457b8
    FLD float ptr [EBP + 0x1c]          ; 004457ba
    FMUL ST0                            ; 004457bd
    FXCH                                ; 004457bf
    FADDP ST2,ST0                       ; 004457c1
    FCOMPP                              ; 004457c3
    FNSTSW AX                           ; 004457c5
    SAHF                                ; 004457c7
    JA 0x004458fa                       ; 004457c8
        ;   XREF to: 004458fa (CONDITIONAL_JUMP)  ; LAB_004458fa
    MOV EDX,dword ptr [EBP + 0x20]      ; 004457ce
    PUSH EDX                            ; 004457d1
    LEA EAX,[ESP + 0x34]                ; 004457d2
    PUSH dword ptr [EBP + 0x1c]         ; 004457d6
    PUSH EAX                            ; 004457d9
    LEA EAX,[ESP + 0x54]                ; 004457da
    PUSH EAX                            ; 004457de
    CALL FUN_004454b0                   ; 004457df
        ;   XREF to: 004454b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004454b0()
    ADD ESP,0x10                        ; 004457e4
    MOV ECX,dword ptr [EBP + 0x20]      ; 004457e7
    PUSH ECX                            ; 004457ea
    MOV ESI,EAX                         ; 004457eb
    LEA EAX,[ESP + 0x28]                ; 004457ed
    PUSH dword ptr [EBP + 0x1c]         ; 004457f1
    PUSH EAX                            ; 004457f4
    LEA EAX,[ESP + 0x3c]                ; 004457f5
    PUSH EAX                            ; 004457f9
    CALL FUN_004454b0                   ; 004457fa
        ;   XREF to: 004454b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004454b0()
    ADD ESP,0x10                        ; 004457ff
    MOV EDI,dword ptr [EBP + 0x20]      ; 00445802
    PUSH EDI                            ; 00445805
    OR ESI,EAX                          ; 00445806
    LEA EAX,[ESP + 0x4c]                ; 00445808
    PUSH dword ptr [EBP + 0x1c]         ; 0044580c
    PUSH EAX                            ; 0044580f
    LEA EAX,[ESP + 0x30]                ; 00445810
    PUSH EAX                            ; 00445814
    CALL FUN_004454b0                   ; 00445815
        ;   XREF to: 004454b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004454b0()
    FLD float ptr [EBX + 0xc]           ; 0044581a
    FMUL ST0                            ; 0044581d
    FLD float ptr [EBX + 0x14]          ; 0044581f
    FMUL ST0                            ; 00445822
    FADDP                               ; 00445824
    OR ESI,EAX                          ; 00445826
    FSQRT                               ; 00445828
    ADD ESP,0x10                        ; 0044582a
    MOV AH,byte ptr [0x01510838]        ; 0044582d | DAT_01510838
    FSTP double ptr [ESP]               ; 00445833
    TEST AH,0x1                         ; 00445836
    JZ 0x0044590f                       ; 00445839
        ;   XREF to: 0044590f (CONDITIONAL_JUMP)  ; LAB_0044590f
    FLD double ptr [ESP]                ; 0044583f
        ;   Label: LAB_0044583f
    FCOMP double ptr [0x005ce7fe]       ; 00445842 | DAT_005ce7fe
    FNSTSW AX                           ; 00445848
    SAHF                                ; 0044584a
    JNC 0x00445936                      ; 0044584b
        ;   XREF to: 00445936 (CONDITIONAL_JUMP)  ; LAB_00445936
    TEST ESI,ESI                        ; 00445851
    JNZ 0x0044588c                      ; 00445853
        ;   XREF to: 0044588c (CONDITIONAL_JUMP)  ; LAB_0044588c
    PUSH 0x151082c                      ; 00445855 | DAT_0151082c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0044585a
    PUSH EDI                            ; 0044585d
    PUSH EBX                            ; 0044585e
    CALL FUN_00444a40                   ; 0044585f
        ;   XREF to: 00444a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00444a40()
    MOV dword ptr [ESP + 0x80],EAX      ; 00445864
    FLD float ptr [ESP + 0x80]          ; 0044586b
    FLDZ                                ; 00445872
    ADD ESP,0xc                         ; 00445874
    FCOMPP                              ; 00445877
    FNSTSW AX                           ; 00445879
    SAHF                                ; 0044587b
    JA 0x0044588c                       ; 0044587c
        ;   XREF to: 0044588c (CONDITIONAL_JUMP)  ; LAB_0044588c
    MOV EBX,dword ptr [EBP + 0x20]      ; 0044587e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00445881
    MOV ESI,0x1                         ; 00445885
    MOV dword ptr [EBX],EAX             ; 0044588a
    MOV EAX,ESI                         ; 0044588c
        ;   Label: LAB_0044588c
    MOV ESP,EBP                         ; 0044588e
    POP EBP                             ; 00445890
    POP EDI                             ; 00445891
    POP ESI                             ; 00445892
    POP EBX                             ; 00445893
    RET                                 ; 00445894
    XOR EAX,EAX                         ; 00445895
        ;   Label: LAB_00445895
    MOV ESP,EBP                         ; 00445897
    POP EBP                             ; 00445899
    POP EDI                             ; 0044589a
    POP ESI                             ; 0044589b
    POP EBX                             ; 0044589c
    RET                                 ; 0044589d
    LEA EDI,[ESP + 0x54]                ; 0044589e
        ;   Label: LAB_0044589e
    LEA ESI,[ESP + 0x48]                ; 004458a2
    MOVSD ES:EDI,ESI                    ; 004458a6
    MOVSD ES:EDI,ESI                    ; 004458a7
    MOVSD ES:EDI,ESI                    ; 004458a8
    LEA EAX,[ESP + 0x30]                ; 004458a9
    LEA ESI,[ESP + 0x48]                ; 004458ad
    CMP ESI,EAX                         ; 004458b1
    JZ 0x004458cd                       ; 004458b3
        ;   XREF to: 004458cd (CONDITIONAL_JUMP)  ; LAB_004458cd
    MOV EAX,dword ptr [ESP + 0x30]      ; 004458b5
    MOV dword ptr [ESP + 0x48],EAX      ; 004458b9
    MOV EAX,dword ptr [ESP + 0x34]      ; 004458bd
    MOV dword ptr [ESP + 0x4c],EAX      ; 004458c1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004458c5
    MOV dword ptr [ESP + 0x50],EAX      ; 004458c9
    LEA ESI,[ESP + 0x30]                ; 004458cd
        ;   Label: LAB_004458cd
    LEA EAX,[ESP + 0x54]                ; 004458d1
    CMP ESI,EAX                         ; 004458d5
    JZ 0x004456c9                       ; 004458d7
        ;   XREF to: 004456c9 (CONDITIONAL_JUMP)  ; LAB_004456c9
    MOV EAX,dword ptr [ESP + 0x54]      ; 004458dd
    MOV dword ptr [ESP + 0x30],EAX      ; 004458e1
    MOV EAX,dword ptr [ESP + 0x58]      ; 004458e5
    MOV dword ptr [ESP + 0x34],EAX      ; 004458e9
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004458ed
    MOV dword ptr [ESP + 0x38],EAX      ; 004458f1
    JMP 0x004456c9                      ; 004458f5
        ;   XREF to: 004456c9 (UNCONDITIONAL_JUMP)  ; LAB_004456c9
    MOV EBX,dword ptr [EBP + 0x20]      ; 004458fa
        ;   Label: LAB_004458fa
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004458fd
    MOV dword ptr [EBX],EAX             ; 00445901
    MOV EAX,0x1                         ; 00445903
    MOV ESP,EBP                         ; 00445908
    POP EBP                             ; 0044590a
    POP EDI                             ; 0044590b
    POP ESI                             ; 0044590c
    POP EBX                             ; 0044590d
    RET                                 ; 0044590e
    MOV DL,AH                           ; 0044590f
        ;   Label: LAB_0044590f
    OR DL,0x1                           ; 00445911
    XOR EAX,EAX                         ; 00445914
    MOV byte ptr [0x01510838],DL        ; 00445916 | DAT_01510838
    MOV [0x0151082c],EAX                ; 0044591c | DAT_0151082c
    MOV EDX,0xc2c80000                  ; 00445921
    MOV [0x01510834],EAX                ; 00445926 | DAT_01510834
    MOV dword ptr [0x01510830],EDX      ; 0044592b | DAT_01510830
    JMP 0x0044583f                      ; 00445931
        ;   XREF to: 0044583f (UNCONDITIONAL_JUMP)  ; LAB_0044583f
    FLD float ptr [EBX + 0xc]           ; 00445936
        ;   Label: LAB_00445936
    FLD float ptr [EBP + 0x1c]          ; 00445939
    FDIV double ptr [ESP]               ; 0044593c
    FXCH                                ; 0044593f
    FMUL ST1                            ; 00445941
    MOV EAX,dword ptr [EBP + 0x18]      ; 00445943
    FADD float ptr [EAX]                ; 00445946
    FSTP float ptr [ESP + 0x18]         ; 00445948
    FMUL float ptr [EBX + 0x14]         ; 0044594c
    FADD float ptr [EAX + 0x8]          ; 0044594f
    FSTP float ptr [ESP + 0x20]         ; 00445952
    MOV EAX,dword ptr [EAX + 0x4]       ; 00445956
    PUSH 0x151082c                      ; 00445959 | DAT_0151082c
    MOV dword ptr [ESP + 0x20],EAX      ; 0044595e
    LEA EAX,[ESP + 0x1c]                ; 00445962
    PUSH EAX                            ; 00445966
    PUSH EBX                            ; 00445967
    CALL FUN_00444a40                   ; 00445968
        ;   XREF to: 00444a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00444a40()
    MOV dword ptr [ESP + 0x80],EAX      ; 0044596d
    FLD float ptr [ESP + 0x80]          ; 00445974
    ADD ESP,0xc                         ; 0044597b
    FST float ptr [ESP + 0x8]           ; 0044597e
    FLDZ                                ; 00445982
    FCOMPP                              ; 00445984
    FNSTSW AX                           ; 00445986
    SAHF                                ; 00445988
    JA 0x0044588c                       ; 00445989
        ;   XREF to: 0044588c (CONDITIONAL_JUMP)  ; LAB_0044588c
    FLD float ptr [ESP + 0x8]           ; 0044598f
    FMUL float ptr [0x01510830]         ; 00445993 | DAT_01510830
    FADD float ptr [ESP + 0x1c]         ; 00445999
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044599d
    FST float ptr [ESP + 0x70]          ; 004459a0
    FCOMP float ptr [EAX]               ; 004459a4
    FNSTSW AX                           ; 004459a6
    SAHF                                ; 004459a8
    JBE 0x0044588c                      ; 004459a9
        ;   XREF to: 0044588c (CONDITIONAL_JUMP)  ; LAB_0044588c
    MOV EBX,dword ptr [EBP + 0x20]      ; 004459af
    MOV EAX,dword ptr [ESP + 0x70]      ; 004459b2
    MOV ESI,0x1                         ; 004459b6
    MOV dword ptr [EBX],EAX             ; 004459bb
    MOV EAX,ESI                         ; 004459bd
    MOV ESP,EBP                         ; 004459bf
    POP EBP                             ; 004459c1
    POP EDI                             ; 004459c2
    POP ESI                             ; 004459c3
    POP EBX                             ; 004459c4
    RET                                 ; 004459c5

