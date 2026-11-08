; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00419520(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004186c0 at 0041914d
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005cc201+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005cc234
;   TerminatedCString s_s_beginning_to_pickup_s_005cc258
;   TerminatedCString s_CBodyPart_005cc273
;   TerminatedCString s_s_is_going_to_try_to_pic_005cc27d
;   undefined4 DAT_005cc2a2
;   undefined4 DAT_005cc2aa
;   undefined4 DAT_005cc2b2
;   undefined4 DAT_005cc2ba
;   undefined4 DAT_005cc2c2
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_007c158c
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_00408d70
;   FUN_0040c840
;   FUN_0040cf60
;   FUN_0040cfc0
;   FUN_00417b20
;   FUN_00417ba0
;   FUN_00423000
;   FUN_00436710
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419520
        ;   Label: FUN_00419520
    PUSH ESI                            ; 00419521
    PUSH EDI                            ; 00419522
    PUSH EBP                            ; 00419523
    MOV EBP,ESP                         ; 00419524
    SUB ESP,0x150                       ; 00419526
    AND ESP,0xfffffff8                  ; 0041952c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041952f
    FLD float ptr [EAX + 0x10afc]       ; 00419532
    FSUB float ptr [EBP + 0x18]         ; 00419538
    FST float ptr [EAX + 0x10afc]       ; 0041953b
    FLDZ                                ; 00419541
    FCOMPP                              ; 00419543
    FNSTSW AX                           ; 00419545
    SAHF                                ; 00419547
    JC 0x00419593                       ; 00419548
        ;   XREF to: 00419593 (CONDITIONAL_JUMP)  ; LAB_00419593
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041954a
        ;   Label: LAB_0041954a
    MOV ECX,dword ptr [EAX + 0x2698]    ; 0041954d
    TEST ECX,ECX                        ; 00419553
    JNZ 0x0041958a                      ; 00419555
        ;   XREF to: 0041958a (CONDITIONAL_JUMP)  ; LAB_0041958a
    FLD float ptr [EAX + 0x10b00]       ; 00419557
    FLDZ                                ; 0041955d
    FCOMPP                              ; 0041955f
    FNSTSW AX                           ; 00419561
    SAHF                                ; 00419563
    JNC 0x004195d1                      ; 00419564
        ;   XREF to: 004195d1 (CONDITIONAL_JUMP)  ; LAB_004195d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419566
    FLD float ptr [EAX + 0x10b00]       ; 00419569
    FSUB float ptr [EBP + 0x18]         ; 0041956f
    FST float ptr [EAX + 0x10b00]       ; 00419572
    FLDZ                                ; 00419578
    FCOMPP                              ; 0041957a
    FNSTSW AX                           ; 0041957c
    SAHF                                ; 0041957e
    JBE 0x0041958a                      ; 0041957f
        ;   XREF to: 0041958a (CONDITIONAL_JUMP)  ; LAB_0041958a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419581
    MOV dword ptr [EAX + 0x10b00],ECX   ; 00419584
    XOR EAX,EAX                         ; 0041958a
        ;   Label: LAB_0041958a
    MOV ESP,EBP                         ; 0041958c
    POP EBP                             ; 0041958e
    POP EDI                             ; 0041958f
    POP ESI                             ; 00419590
    POP EBX                             ; 00419591
    RET                                 ; 00419592
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419593
        ;   Label: LAB_00419593
    MOV EDX,dword ptr [EAX + 0x10af8]   ; 00419596
    PUSH 0x41200000                     ; 0041959c
    INC EDX                             ; 004195a1
    PUSH 0x40a00000                     ; 004195a2
    MOV dword ptr [EAX + 0x10af8],EDX   ; 004195a7
    CALL FUN_0040cf60                   ; 004195ad
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x154],EAX     ; 004195b2
    FLD float ptr [ESP + 0x154]         ; 004195b9
    ADD ESP,0x8                         ; 004195c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004195c3
    FSTP float ptr [EAX + 0x10afc]      ; 004195c6
    JMP 0x0041954a                      ; 004195cc
        ;   XREF to: 0041954a (UNCONDITIONAL_JUMP)  ; LAB_0041954a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004195d1
        ;   Label: LAB_004195d1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004195d4
    MOV ESI,dword ptr [EAX + 0x10b04]   ; 004195d7
    ADD EBX,0x20                        ; 004195dd
    TEST ESI,ESI                        ; 004195e0
    JNZ 0x00419678                      ; 004195e2
        ;   XREF to: 00419678 (CONDITIONAL_JUMP)  ; LAB_00419678
    LEA EAX,[ESP + 0x34]                ; 004195e8
    MOV dword ptr [ESP + 0x148],ECX     ; 004195ec
    MOV dword ptr [ESP + 0x13c],ECX     ; 004195f3
    MOV dword ptr [ESP + 0x130],EBX     ; 004195fa
    MOV dword ptr [ESP + 0x134],ECX     ; 00419601
    ADD EAX,0xc                         ; 00419608
    MOV dword ptr [ESP + 0x144],ECX     ; 0041960b
    MOV dword ptr [ESP + 0x138],EAX     ; 00419612
    MOV EAX,[0x0061b5a8]                ; 00419619 | DAT_0061b5a8
        ;   Label: LAB_00419619
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0041961e
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00419625 | DAT_01fb331c
    JGE 0x00419ad9                      ; 0041962b
        ;   XREF to: 00419ad9 (CONDITIONAL_JUMP)  ; LAB_00419ad9
    ADD EAX,dword ptr [ESP + 0x134]     ; 00419631
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 00419638 | DAT_01fb3320
    PUSH EBX                            ; 0041963e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041963f
    CALL dword ptr [EAX + 0x9c]         ; 00419645
    ADD ESP,0x4                         ; 0041964b
    TEST EAX,EAX                        ; 0041964e
    JZ 0x00419913                       ; 00419650
        ;   XREF to: 00419913 (CONDITIONAL_JUMP)  ; LAB_00419913
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00419656
        ;   Label: LAB_00419656
    MOV EDI,dword ptr [ESP + 0x134]     ; 0041965d
    INC EAX                             ; 00419664
    ADD EDI,0x4                         ; 00419665
    MOV dword ptr [ESP + 0x13c],EAX     ; 00419668
    MOV dword ptr [ESP + 0x134],EDI     ; 0041966f
    JMP 0x00419619                      ; 00419676
        ;   XREF to: 00419619 (UNCONDITIONAL_JUMP)  ; LAB_00419619
    MOV EAX,ESI                         ; 00419678
        ;   Label: LAB_00419678
    PUSH EAX                            ; 0041967a
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 0041967b
    CALL dword ptr [ESI + 0x9c]         ; 00419681
    ADD ESP,0x4                         ; 00419687
    TEST EAX,EAX                        ; 0041968a
    JNZ 0x0041983d                      ; 0041968c
        ;   XREF to: 0041983d (CONDITIONAL_JUMP)  ; LAB_0041983d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419692
    MOV EAX,dword ptr [EAX + 0x10b04]   ; 00419695
    FLD float ptr [EBX]                 ; 0041969b
    FSUB float ptr [EAX + 0x20]         ; 0041969d
    FMUL ST0                            ; 004196a0
    FLD float ptr [EBX + 0x8]           ; 004196a2
    FSUB float ptr [EAX + 0x28]         ; 004196a5
    FMUL ST0                            ; 004196a8
    FADDP                               ; 004196aa
    FSQRT                               ; 004196ac
    FMUL double ptr [0x005cc2a2]        ; 004196ae | DAT_005cc2a2
    FSUBR double ptr [0x005cc2aa]       ; 004196b4 | DAT_005cc2aa
    FLD1                                ; 004196ba
    FCOMPP                              ; 004196bc
    FNSTSW AX                           ; 004196be
    SAHF                                ; 004196c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004196c1
    MOV ESI,0xffffffff                  ; 004196c4
    FLD float ptr [EAX + 0x10b00]       ; 004196c9
    FLDZ                                ; 004196cf
    FCOMPP                              ; 004196d1
    FNSTSW AX                           ; 004196d3
    SAHF                                ; 004196d5
    JBE 0x0041981e                      ; 004196d6
        ;   XREF to: 0041981e (CONDITIONAL_JUMP)  ; LAB_0041981e
    MOV EDI,dword ptr [EBP + 0x14]      ; 004196dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004196df
    PUSH EDI                            ; 004196e2
    MOV EAX,dword ptr [EAX + 0x10b04]   ; 004196e3
    PUSH EAX                            ; 004196e9
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 004196ea
    CALL dword ptr [EBX + 0x8c]         ; 004196f0
    ADD ESP,0x8                         ; 004196f6
    CMP EAX,0x3                         ; 004196f9
    JNZ 0x0041981e                      ; 004196fc
        ;   XREF to: 0041981e (CONDITIONAL_JUMP)  ; LAB_0041981e
    MOV EBX,dword ptr [EDI + 0x10b04]   ; 00419702
    PUSH EBX                            ; 00419708
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00419709
    LEA ESI,[ESP + 0x80]                ; 0041970f
    CALL dword ptr [EAX + 0x24]         ; 00419716
    MOV EAX,0x3f000000                  ; 00419719
    ADD ESP,0x4                         ; 0041971e
    LEA EDI,[ESP + 0x64]                ; 00419721
    MOV dword ptr [ESP + 0x12c],EAX     ; 00419725
    LEA EAX,[ESP + 0x12c]               ; 0041972c
    MOV ECX,0x6                         ; 00419733
    PUSH EAX                            ; 00419738
    LEA EAX,[ESP + 0x74]                ; 00419739
    LEA ESI,[ESP + 0x80]                ; 0041973d
    PUSH EAX                            ; 00419744
    LEA EAX,[ESP + 0x6c]                ; 00419745
    MOVSD.REP ES:EDI,ESI                ; 00419749
    PUSH EAX                            ; 0041974b
    LEA ESI,[ESP + 0xc4]                ; 0041974c
    LEA EDI,[ESP + 0x124]               ; 00419753
    CALL FUN_00417ba0                   ; 0041975a
        ;   XREF to: 00417ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00417ba0()
    LEA ESI,[ESP + 0xc4]                ; 0041975f
    ADD ESP,0x8                         ; 00419766
    LEA EAX,[ESP + 0x11c]               ; 00419769
    MOVSD ES:EDI,ESI                    ; 00419770
    MOVSD ES:EDI,ESI                    ; 00419771
    MOVSD ES:EDI,ESI                    ; 00419772
    PUSH EAX                            ; 00419773
    LEA ESI,[ESP + 0x108]               ; 00419774
    LEA EDI,[ESP + 0xd8]                ; 0041977b
    CALL FUN_00417b20                   ; 00419782
        ;   XREF to: 00417b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00417b20()
    LEA ESI,[ESP + 0x108]               ; 00419787
    ADD ESP,0x8                         ; 0041978e
    LEA EAX,[ESP + 0xdc]                ; 00419791
    FLD float ptr [ESP + 0x6c]          ; 00419798
    MOVSD ES:EDI,ESI                    ; 0041979c
    MOVSD ES:EDI,ESI                    ; 0041979d
    MOVSD ES:EDI,ESI                    ; 0041979e
    PUSH EAX                            ; 0041979f
    LEA EDI,[ESP + 0xe0]                ; 004197a0
    FADD double ptr [0x005cc2b2]        ; 004197a7 | DAT_005cc2b2
    LEA ESI,[ESP + 0xd4]                ; 004197ad
    FSTP float ptr [ESP + 0xdc]         ; 004197b4
    MOVSD ES:EDI,ESI                    ; 004197bb
    MOVSD ES:EDI,ESI                    ; 004197bc
    MOVSD ES:EDI,ESI                    ; 004197bd
    PUSH EBX                            ; 004197be
    LEA ESI,[ESP + 0x114]               ; 004197bf
    CALL FUN_00408d70                   ; 004197c6
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 004197cb
    LEA EDI,[ESP + 0xc4]                ; 004197ce
    LEA ESI,[ESP + 0x10c]               ; 004197d5
    PUSH 0x0                            ; 004197dc
    LEA EAX,[ESP + 0xec]                ; 004197de
    PUSH 0x0                            ; 004197e5
    MOV EDX,0x3fc00000                  ; 004197e7
    PUSH EAX                            ; 004197ec
    XOR ECX,ECX                         ; 004197ed
    LEA EAX,[ESP + 0xd0]                ; 004197ef
    PUSH ECX                            ; 004197f6
    MOVSD ES:EDI,ESI                    ; 004197f7
    MOVSD ES:EDI,ESI                    ; 004197f8
    MOVSD ES:EDI,ESI                    ; 004197f9
    PUSH EAX                            ; 004197fa
    MOV ESI,dword ptr [EBP + 0x14]      ; 004197fb
    MOV dword ptr [ESP + 0xfc],EDX      ; 004197fe
    PUSH ESI                            ; 00419805
    MOV dword ptr [ESP + 0x104],ECX     ; 00419806
    MOV dword ptr [ESP + 0x108],ECX     ; 0041980d
    CALL FUN_00423000                   ; 00419814
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; undefined FUN_00423000()
    ADD ESP,0x18                        ; 00419819
    MOV ESI,EAX                         ; 0041981c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041981e
        ;   Label: LAB_0041981e
    ADD EBX,0x2b4                       ; 00419821
    TEST ESI,ESI                        ; 00419827
    JL 0x0041988e                       ; 00419829
        ;   XREF to: 0041988e (CONDITIONAL_JUMP)  ; LAB_0041988e
    JG 0x004198db                       ; 0041982b
        ;   XREF to: 004198db (CONDITIONAL_JUMP)  ; LAB_004198db
    MOV EAX,0x1                         ; 00419831
    MOV ESP,EBP                         ; 00419836
    POP EBP                             ; 00419838
    POP EDI                             ; 00419839
    POP ESI                             ; 0041983a
    POP EBX                             ; 0041983b
    RET                                 ; 0041983c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041983d
        ;   Label: LAB_0041983d
    MOV EDX,dword ptr [EAX + 0x10b04]   ; 00419840
    PUSH EDX                            ; 00419846
    PUSH EAX                            ; 00419847
    PUSH 0x5cc202                       ; 00419848 | s_s_can_t_pick_up_s_sombod_005cc201+1
    MOV EBX,dword ptr [0x00609ed0]      ; 0041984d | PTR_DAT_00609ed0
    PUSH EBX                            ; 00419853 | DAT_007c158c
    CALL FUN_00436710                   ; 00419854
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x10                        ; 00419859
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041985c
    PUSH 0x1                            ; 0041985f
    ADD EAX,0x2b4                       ; 00419861
    PUSH 0x1                            ; 00419866
    MOV dword ptr [EAX + 0x10850],0x0   ; 00419868
    PUSH EAX                            ; 00419872
    MOV dword ptr [EAX + 0x1084c],0x0   ; 00419873
    CALL FUN_00503620                   ; 0041987d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00419882
    XOR EAX,EAX                         ; 00419885
    MOV ESP,EBP                         ; 00419887
    POP EBP                             ; 00419889
    POP EDI                             ; 0041988a
    POP ESI                             ; 0041988b
    POP EBX                             ; 0041988c
    RET                                 ; 0041988d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041988e
        ;   Label: LAB_0041988e
    MOV ECX,dword ptr [EAX + 0x10b04]   ; 00419891
    PUSH ECX                            ; 00419897
    PUSH EAX                            ; 00419898
    PUSH 0x5cc234                       ; 00419899 | = "%s can't pick up %s, giving up!!!!\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0041989e | PTR_DAT_00609ed0
    PUSH EDI                            ; 004198a4 | DAT_007c158c
    MOV ESI,EAX                         ; 004198a5
    CALL FUN_00436710                   ; 004198a7
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x10                        ; 004198ac
    PUSH 0x1                            ; 004198af
    MOV EAX,ESI                         ; 004198b1
    PUSH 0x1                            ; 004198b3
    MOV dword ptr [EAX + 0x10b04],0x0   ; 004198b5
    PUSH EBX                            ; 004198bf
    MOV dword ptr [EAX + 0x10b00],0x41a00000 ; 004198c0
    CALL FUN_00503620                   ; 004198ca
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004198cf
    XOR EAX,EAX                         ; 004198d2
    MOV ESP,EBP                         ; 004198d4
    POP EBP                             ; 004198d6
    POP EDI                             ; 004198d7
    POP ESI                             ; 004198d8
    POP EBX                             ; 004198d9
    RET                                 ; 004198da
    MOV EAX,dword ptr [EBP + 0x14]      ; 004198db
        ;   Label: LAB_004198db
    MOV EDI,dword ptr [EAX + 0x10b04]   ; 004198de
    PUSH EDI                            ; 004198e4
    PUSH EAX                            ; 004198e5
    PUSH 0x5cc258                       ; 004198e6 | = "%s beginning to pickup %s\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 004198eb | PTR_DAT_00609ed0
    PUSH EDX                            ; 004198f1 | DAT_007c158c
    CALL FUN_00436710                   ; 004198f2
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x10                        ; 004198f7
    PUSH 0x1                            ; 004198fa
    PUSH 0x7                            ; 004198fc
    PUSH EBX                            ; 004198fe
    CALL FUN_00503620                   ; 004198ff
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    MOV EAX,0x1                         ; 00419904
    ADD ESP,0xc                         ; 00419909
    MOV ESP,EBP                         ; 0041990c
    POP EBP                             ; 0041990e
    POP EDI                             ; 0041990f
    POP ESI                             ; 00419910
    POP EBX                             ; 00419911
    RET                                 ; 00419912
    MOV EDX,dword ptr [EBP + 0x14]      ; 00419913
        ;   Label: LAB_00419913
    PUSH EDX                            ; 00419916
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00419917
    PUSH EBX                            ; 0041991d
    CALL dword ptr [EAX + 0x8c]         ; 0041991e
    ADD ESP,0x8                         ; 00419924
    CMP EAX,0x3                         ; 00419927
    JNZ 0x00419656                      ; 0041992a
        ;   XREF to: 00419656 (CONDITIONAL_JUMP)  ; LAB_00419656
    PUSH EBX                            ; 00419930
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00419931
    LEA ESI,[ESP + 0x50]                ; 00419937
    LEA EDI,[ESP + 0x38]                ; 0041993b
    CALL dword ptr [EAX + 0x24]         ; 0041993f
    MOV ECX,0x6                         ; 00419942
    ADD ESP,0x4                         ; 00419947
    LEA ESI,[ESP + 0x4c]                ; 0041994a
    MOV EAX,dword ptr [ESP + 0x138]     ; 0041994e
    MOVSD.REP ES:EDI,ESI                ; 00419955
    FLD float ptr [EAX]                 ; 00419957
    FLD float ptr [EAX + 0x4]           ; 00419959
    FLD float ptr [EAX + 0x8]           ; 0041995c
    LEA EDI,[ESP + 0x94]                ; 0041995f
    LEA ESI,[ESP + 0xf4]                ; 00419966
    FXCH ST2                            ; 0041996d
    FSUB float ptr [ESP + 0x34]         ; 0041996f
    FXCH                                ; 00419973
    FSUB float ptr [ESP + 0x38]         ; 00419975
    FXCH ST2                            ; 00419979
    FSUB float ptr [ESP + 0x3c]         ; 0041997b
    FXCH                                ; 0041997f
    FSTP float ptr [ESP + 0xf4]         ; 00419981
    FXCH                                ; 00419988
    FSTP float ptr [ESP + 0xf8]         ; 0041998a
    FSTP float ptr [ESP + 0xfc]         ; 00419991
    MOVSD ES:EDI,ESI                    ; 00419998
    MOVSD ES:EDI,ESI                    ; 00419999
    MOVSD ES:EDI,ESI                    ; 0041999a
    FLD float ptr [ESP + 0x94]          ; 0041999b
    FLD1                                ; 004199a2
    FCOMPP                              ; 004199a4
    FNSTSW AX                           ; 004199a6
    SAHF                                ; 004199a8
    JBE 0x00419656                      ; 004199a9
        ;   XREF to: 00419656 (CONDITIONAL_JUMP)  ; LAB_00419656
    FLD float ptr [ESP + 0x98]          ; 004199af
    FLD1                                ; 004199b6
    FCOMPP                              ; 004199b8
    FNSTSW AX                           ; 004199ba
    SAHF                                ; 004199bc
    JBE 0x00419656                      ; 004199bd
        ;   XREF to: 00419656 (CONDITIONAL_JUMP)  ; LAB_00419656
    FLD float ptr [ESP + 0x9c]          ; 004199c3
    FST double ptr [ESP]                ; 004199ca
    FCOMP double ptr [0x005cc2ba]       ; 004199cd | DAT_005cc2ba
    FNSTSW AX                           ; 004199d3
    SAHF                                ; 004199d5
    JBE 0x00419656                      ; 004199d6
        ;   XREF to: 00419656 (CONDITIONAL_JUMP)  ; LAB_00419656
    FLD double ptr [ESP]                ; 004199dc
    FCOMP double ptr [0x005cc2c2]       ; 004199df | DAT_005cc2c2
    FNSTSW AX                           ; 004199e5
    SAHF                                ; 004199e7
    JNC 0x00419656                      ; 004199e8
        ;   XREF to: 00419656 (CONDITIONAL_JUMP)  ; LAB_00419656
    PUSH 0x5cc273                       ; 004199ee | = "CBodyPart"
    PUSH EBX                            ; 004199f3
    CALL FUN_0040c840                   ; 004199f4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004199f9
    TEST EAX,EAX                        ; 004199fc
    JNZ 0x00419656                      ; 004199fe
        ;   XREF to: 00419656 (CONDITIONAL_JUMP)  ; LAB_00419656
    LEA EAX,[EBX + 0x20]                ; 00419a04
    MOV ESI,dword ptr [ESP + 0x130]     ; 00419a07
    LEA EDI,[ESP + 0xa0]                ; 00419a0e
    FLD float ptr [EAX]                 ; 00419a15
    FLD float ptr [EAX + 0x4]           ; 00419a17
    FLD float ptr [EAX + 0x8]           ; 00419a1a
    FXCH ST2                            ; 00419a1d
    FSUB float ptr [ESI]                ; 00419a1f
    FXCH                                ; 00419a21
    FSUB float ptr [ESI + 0x4]          ; 00419a23
    FXCH ST2                            ; 00419a26
    FSUB float ptr [ESI + 0x8]          ; 00419a28
    FXCH                                ; 00419a2b
    FSTP float ptr [ESP + 0xac]         ; 00419a2d
    FXCH                                ; 00419a34
    FSTP float ptr [ESP + 0xb0]         ; 00419a36
    LEA ESI,[ESP + 0xac]                ; 00419a3d
    FSTP float ptr [ESP + 0xb4]         ; 00419a44
    MOVSD ES:EDI,ESI                    ; 00419a4b
    MOVSD ES:EDI,ESI                    ; 00419a4c
    MOVSD ES:EDI,ESI                    ; 00419a4d
    FLD float ptr [ESP + 0xa4]          ; 00419a4e
    FMUL ST0                            ; 00419a55
    FST float ptr [ESP + 0xa4]          ; 00419a57
    FMUL float ptr [ESP + 0xa4]         ; 00419a5e
    FST float ptr [ESP + 0xa4]          ; 00419a65
    FMUL float ptr [ESP + 0xa4]         ; 00419a6c
    FLD float ptr [ESP + 0xa0]          ; 00419a73
    FMUL ST0                            ; 00419a7a
    FADDP                               ; 00419a7c
    FLD float ptr [ESP + 0xa8]          ; 00419a7e
    FMUL ST0                            ; 00419a85
    FADDP                               ; 00419a87
    FSQRT                               ; 00419a89
    FST float ptr [ESP + 0x8]           ; 00419a8b
    FCOMP double ptr [0x005cc2aa]       ; 00419a8f | DAT_005cc2aa
    FNSTSW AX                           ; 00419a95
    SAHF                                ; 00419a97
    JC 0x00419656                       ; 00419a98
        ;   XREF to: 00419656 (CONDITIONAL_JUMP)  ; LAB_00419656
    CMP dword ptr [ESP + 0x8],0x41700000 ; 00419a9e
    JG 0x00419656                       ; 00419aa6
        ;   XREF to: 00419656 (CONDITIONAL_JUMP)  ; LAB_00419656
    MOV ESI,dword ptr [ESP + 0x148]     ; 00419aac
    MOV EAX,dword ptr [ESP + 0x144]     ; 00419ab3
    INC ESI                             ; 00419aba
    MOV dword ptr [ESP + EAX*0x1 + 0xc],EBX ; 00419abb
    LEA EBX,[EAX + 0x4]                 ; 00419abf
    MOV dword ptr [ESP + 0x148],ESI     ; 00419ac2
    MOV dword ptr [ESP + 0x144],EBX     ; 00419ac9
    CMP EBX,0x28                        ; 00419ad0
    JL 0x00419656                       ; 00419ad3
        ;   XREF to: 00419656 (CONDITIONAL_JUMP)  ; LAB_00419656
    MOV EAX,dword ptr [ESP + 0x148]     ; 00419ad9
        ;   Label: LAB_00419ad9
    CMP EAX,0x1                         ; 00419ae0
    JL 0x0041958a                       ; 00419ae3
        ;   XREF to: 0041958a (CONDITIONAL_JUMP)  ; LAB_0041958a
    DEC EAX                             ; 00419ae9
    PUSH EAX                            ; 00419aea
    PUSH 0x0                            ; 00419aeb
    CALL FUN_0040cfc0                   ; 00419aed
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 00419af2
    MOV EBX,dword ptr [EBP + 0x14]      ; 00419af5
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 00419af8
    MOV dword ptr [EBX + 0x10b04],EAX   ; 00419afc
    MOV ECX,dword ptr [EBX + 0x10b04]   ; 00419b02
    PUSH ECX                            ; 00419b08
    PUSH EBX                            ; 00419b09
    MOV ESI,dword ptr [0x00609ed0]      ; 00419b0a | PTR_DAT_00609ed0
    MOV EDX,dword ptr [EBX + 0x10af8]   ; 00419b10
    PUSH 0x5cc27d                       ; 00419b16 | = "%s is going to try to pick up %s\n"
    MOV dword ptr [EBX + 0x10b00],0xc2200000 ; 00419b1b
    INC EDX                             ; 00419b25
    PUSH ESI                            ; 00419b26 | DAT_007c158c
    MOV dword ptr [EBX + 0x10af8],EDX   ; 00419b27
    CALL FUN_00436710                   ; 00419b2d
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    MOV EAX,0x1                         ; 00419b32
    ADD ESP,0x10                        ; 00419b37
    MOV ESP,EBP                         ; 00419b3a
    POP EBP                             ; 00419b3c
    POP EDI                             ; 00419b3d
    POP ESI                             ; 00419b3e
    POP EBX                             ; 00419b3f
    RET                                 ; 00419b40

