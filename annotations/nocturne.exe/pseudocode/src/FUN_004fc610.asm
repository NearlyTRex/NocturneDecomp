; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc610(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   FUN_004fbf20 at 004fc393
;
; Referenced Globals:
;   undefined4 DAT_0058dede
;   undefined4 DAT_0058dee6
;   undefined4 DAT_0058deee
;   undefined4 DAT_0058def6
;   undefined4 DAT_0058defe
;   undefined4 DAT_0058df06
;   undefined4 DAT_0058df0e
;   undefined4 DAT_0058df16
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   FUN_0040df00
;   FUN_00424e90
;   FUN_004b5d00
;   FUN_004e1660
;   FUN_004f1600
;   FUN_004f1e00
;   FUN_0054e4a0
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc610
        ;   Label: FUN_004fc610
    PUSH ESI                            ; 004fc611
    PUSH EDI                            ; 004fc612
    PUSH EBP                            ; 004fc613
    MOV EBP,ESP                         ; 004fc614
    SUB ESP,0x7c                        ; 004fc616
    AND ESP,0xfffffff8                  ; 004fc619
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fc61c
    MOV EDX,0x3e800000                  ; 004fc61f
    MOV ECX,0x3f490fdb                  ; 004fc624
    MOV ESI,dword ptr [0x01cae0e8]      ; 004fc629 | DAT_01cae0e8
    MOV EDI,dword ptr [EBX + 0x1fa38]   ; 004fc62f
    MOV dword ptr [ESP + 0x70],EDX      ; 004fc635
    MOV dword ptr [ESP + 0x74],ECX      ; 004fc639
    MOV ESI,dword ptr [ESI*0x4 + 0x1cae0d8] ; 004fc63d
    TEST EDI,EDI                        ; 004fc644
    JNZ 0x004fc64f                      ; 004fc646
        ;   XREF to: 004fc64f (CONDITIONAL_JUMP)  ; LAB_004fc64f
    MOV ESP,EBP                         ; 004fc648
    POP EBP                             ; 004fc64a
    POP EDI                             ; 004fc64b
    POP ESI                             ; 004fc64c
    POP EBX                             ; 004fc64d
    RET                                 ; 004fc64e
    PUSH 0x2c                           ; 004fc64f
        ;   Label: LAB_004fc64f
    PUSH 0x0                            ; 004fc651
    LEA EAX,[EBX + 0xbc94]              ; 004fc653
    PUSH EAX                            ; 004fc659
    CALL FUN_00563cc0                   ; 004fc65a
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    MOV EAX,[0x01cae0e8]                ; 004fc65f | DAT_01cae0e8
    LEA EDX,[EBX + 0x20]                ; 004fc664
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004fc667
    FLD float ptr [EDX]                 ; 004fc66e
    FSUB float ptr [EAX + 0x20]         ; 004fc670
    ADD ESP,0xc                         ; 004fc673
    FSTP float ptr [ESP + 0x54]         ; 004fc676
    FLD float ptr [EDX + 0x4]           ; 004fc67a
    FSUB float ptr [EAX + 0x24]         ; 004fc67d
    FSTP float ptr [ESP + 0x58]         ; 004fc680
    FLD float ptr [EDX + 0x8]           ; 004fc684
    FSUB float ptr [EAX + 0x28]         ; 004fc687
    FSTP float ptr [ESP + 0x5c]         ; 004fc68a
    MOV EAX,dword ptr [EBX + 0x1fa38]   ; 004fc68e
    XOR EDI,EDI                         ; 004fc694
    CMP EAX,0x2                         ; 004fc696
    JNZ 0x004fc9c4                      ; 004fc699
        ;   XREF to: 004fc9c4 (CONDITIONAL_JUMP)  ; LAB_004fc9c4
    LEA EAX,[EBX + 0x1f5a0]             ; 004fc69f
        ;   Label: LAB_004fc69f
    MOV EAX,dword ptr [EAX + 0x330]     ; 004fc6a5
    TEST EAX,EAX                        ; 004fc6ab
    JZ 0x004fc6e3                       ; 004fc6ad
        ;   XREF to: 004fc6e3 (CONDITIONAL_JUMP)  ; LAB_004fc6e3
    CMP dword ptr [EAX + 0x560],0x0     ; 004fc6af
    JLE 0x004fc6e3                      ; 004fc6b6
        ;   XREF to: 004fc6e3 (CONDITIONAL_JUMP)  ; LAB_004fc6e3
    MOV dword ptr [ESP + 0x60],0x461c3f9a ; 004fc6b8
    LEA EAX,[ESP + 0x60]                ; 004fc6c0
    PUSH EAX                            ; 004fc6c4
    PUSH EBX                            ; 004fc6c5
    CALL FUN_004b5d00                   ; 004fc6c6
        ;   XREF to: 004b5d00 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5d00()
    ADD ESP,0x8                         ; 004fc6cb
    TEST EAX,EAX                        ; 004fc6ce
    JZ 0x004fc6e3                       ; 004fc6d0
        ;   XREF to: 004fc6e3 (CONDITIONAL_JUMP)  ; LAB_004fc6e3
    CMP dword ptr [ESP + 0x60],0x41f00000 ; 004fc6d2
    JGE 0x004fc6e3                      ; 004fc6da
        ;   XREF to: 004fc6e3 (CONDITIONAL_JUMP)  ; LAB_004fc6e3
    MOV EDI,0x1                         ; 004fc6dc
    MOV ESI,EAX                         ; 004fc6e1
    CMP EDI,dword ptr [EBX + 0x1fa3c]   ; 004fc6e3
        ;   Label: LAB_004fc6e3
    JZ 0x004fc6f5                       ; 004fc6e9
        ;   XREF to: 004fc6f5 (CONDITIONAL_JUMP)  ; LAB_004fc6f5
    MOV dword ptr [EBX + 0xbcac],0x1    ; 004fc6eb
    LEA EDX,[ESI + 0x20]                ; 004fc6f5
        ;   Label: LAB_004fc6f5
    LEA EAX,[EBX + 0x20]                ; 004fc6f8
    FLD float ptr [EDX]                 ; 004fc6fb
    FSUB float ptr [EAX]                ; 004fc6fd
    FSTP float ptr [ESP + 0x30]         ; 004fc6ff
    FLD float ptr [EDX + 0x4]           ; 004fc703
    FSUB float ptr [EAX + 0x4]          ; 004fc706
    FSTP float ptr [ESP + 0x34]         ; 004fc709
    FLD float ptr [EDX + 0x8]           ; 004fc70d
    LEA EDX,[ESP + 0x54]                ; 004fc710
    FSUB float ptr [EAX + 0x8]          ; 004fc714
    LEA EAX,[ESP + 0x30]                ; 004fc717
    FSTP float ptr [ESP + 0x38]         ; 004fc71b
    CMP EDX,EAX                         ; 004fc71f
    JZ 0x004fc73b                       ; 004fc721
        ;   XREF to: 004fc73b (CONDITIONAL_JUMP)  ; LAB_004fc73b
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fc723
    MOV dword ptr [ESP + 0x54],EAX      ; 004fc727
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fc72b
    MOV dword ptr [ESP + 0x58],EAX      ; 004fc72f
    MOV EAX,dword ptr [ESP + 0x38]      ; 004fc733
    MOV dword ptr [ESP + 0x5c],EAX      ; 004fc737
    FLD float ptr [ESP + 0x58]          ; 004fc73b
        ;   Label: LAB_004fc73b
    FMUL ST0                            ; 004fc73f
    FLD float ptr [ESP + 0x54]          ; 004fc741
    FMUL ST0                            ; 004fc745
    FADDP                               ; 004fc747
    FLD float ptr [ESP + 0x5c]          ; 004fc749
    FMUL ST0                            ; 004fc74d
    FADDP                               ; 004fc74f
    FSQRT                               ; 004fc751
    MOV EAX,dword ptr [EBX + 0x1fa38]   ; 004fc753
    FSTP float ptr [ESP + 0x14]         ; 004fc759
    CMP EAX,0x3                         ; 004fc75d
    JNZ 0x004fc768                      ; 004fc760
        ;   XREF to: 004fc768 (CONDITIONAL_JUMP)  ; LAB_004fc768
    XOR EDX,EDX                         ; 004fc762
    MOV dword ptr [ESP + 0x14],EDX      ; 004fc764
    MOV ECX,dword ptr [EBX + 0x1fa50]   ; 004fc768
        ;   Label: LAB_004fc768
    TEST ECX,ECX                        ; 004fc76e
    JZ 0x004fc893                       ; 004fc770
        ;   XREF to: 004fc893 (CONDITIONAL_JUMP)  ; LAB_004fc893
    XOR EAX,EAX                         ; 004fc776
    MOV EDX,dword ptr [ECX + 0x2d8]     ; 004fc778
    MOV dword ptr [ESP + 0x64],EAX      ; 004fc77e
    CMP EDX,0x8                         ; 004fc782
    JNZ 0x004fc9d2                      ; 004fc785
        ;   XREF to: 004fc9d2 (CONDITIONAL_JUMP)  ; LAB_004fc9d2
    FLD float ptr [ESP + 0x14]          ; 004fc78b
    FCOMP double ptr [0x0058deee]       ; 004fc78f | DAT_0058deee
    FNSTSW AX                           ; 004fc795
    SAHF                                ; 004fc797
    JNC 0x004fc7cf                      ; 004fc798
        ;   XREF to: 004fc7cf (CONDITIONAL_JUMP)  ; LAB_004fc7cf
    LEA EAX,[EBX + 0x150]               ; 004fc79a
    PUSH EAX                            ; 004fc7a0
    CALL FUN_004e1660                   ; 004fc7a1
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fc7a6
    ADD ESP,0x4                         ; 004fc7a9
    CMP EAX,0x7                         ; 004fc7ac
    JNZ 0x004fc7c4                      ; 004fc7af
        ;   XREF to: 004fc7c4 (CONDITIONAL_JUMP)  ; LAB_004fc7c4
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004fc7b1
    JZ 0x004fc7c4                       ; 004fc7b8
        ;   XREF to: 004fc7c4 (CONDITIONAL_JUMP)  ; LAB_004fc7c4
    MOV dword ptr [EBX + 0xbca0],0x1    ; 004fc7ba
    CMP dword ptr [ESP + 0x64],0x0      ; 004fc7c4
        ;   Label: LAB_004fc7c4
    JZ 0x004fc893                       ; 004fc7c9
        ;   XREF to: 004fc893 (CONDITIONAL_JUMP)  ; LAB_004fc893
    PUSH ESI                            ; 004fc7cf
        ;   Label: LAB_004fc7cf
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004fc7d0
    CALL dword ptr [EAX + 0xbc]         ; 004fc7d6
    ADD ESP,0x4                         ; 004fc7dc
    MOV EDX,EAX                         ; 004fc7df
    TEST EAX,EAX                        ; 004fc7e1
    JNZ 0x004fc7f3                      ; 004fc7e3
        ;   XREF to: 004fc7f3 (CONDITIONAL_JUMP)  ; LAB_004fc7f3
    LEA EAX,[ESI + 0x20]                ; 004fc7e5
    PUSH EAX                            ; 004fc7e8
    CALL FUN_004f1e00                   ; 004fc7e9
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1e00()
    ADD ESP,0x4                         ; 004fc7ee
    MOV EDX,EAX                         ; 004fc7f1
    MOV ECX,dword ptr [EBX + 0x6c]      ; 004fc7f3
        ;   Label: LAB_004fc7f3
    PUSH ECX                            ; 004fc7f6
    LEA EAX,[ESP + 0x40]                ; 004fc7f7
    PUSH EAX                            ; 004fc7fb
    LEA EAX,[EBX + 0x20]                ; 004fc7fc
    PUSH EAX                            ; 004fc7ff
    PUSH EDX                            ; 004fc800
    CALL FUN_004f1600                   ; 004fc801
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1600()
    ADD ESP,0x10                        ; 004fc806
    TEST EAX,EAX                        ; 004fc809
    JZ 0x004fc893                       ; 004fc80b
        ;   XREF to: 004fc893 (CONDITIONAL_JUMP)  ; LAB_004fc893
    FLD float ptr [ESP + 0x40]          ; 004fc811
    FSUB float ptr [EBX + 0x34]         ; 004fc815
    SUB ESP,0x4                         ; 004fc818
    FSTP float ptr [ESP]                ; 004fc81b
    CALL FUN_0040df00                   ; 004fc81e
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x7c],EAX      ; 004fc823
    FLD float ptr [ESP + 0x7c]          ; 004fc827
    FMUL double ptr [0x0058def6]        ; 004fc82b | DAT_0058def6
    ADD ESP,0x4                         ; 004fc831
    FMUL double ptr [0x0058defe]        ; 004fc834 | DAT_0058defe
    FLD float ptr [ESP + 0x70]          ; 004fc83a
    FCHS                                ; 004fc83e
    FSTP float ptr [ESP + 0x6c]         ; 004fc840
    FST float ptr [EBX + 0xbcb8]        ; 004fc844
    FCOMP float ptr [ESP + 0x6c]        ; 004fc84a
    FNSTSW AX                           ; 004fc84e
    SAHF                                ; 004fc850
    JNC 0x004fc85d                      ; 004fc851
        ;   XREF to: 004fc85d (CONDITIONAL_JUMP)  ; LAB_004fc85d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004fc853
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004fc857
    FLD float ptr [EBX + 0xbcb8]        ; 004fc85d
        ;   Label: LAB_004fc85d
    FCOMP float ptr [ESP + 0x70]        ; 004fc863
    FNSTSW AX                           ; 004fc867
    SAHF                                ; 004fc869
    JBE 0x004fc876                      ; 004fc86a
        ;   XREF to: 004fc876 (CONDITIONAL_JUMP)  ; LAB_004fc876
    MOV EAX,dword ptr [ESP + 0x70]      ; 004fc86c
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004fc870
    FLD float ptr [ESP + 0x14]          ; 004fc876
        ;   Label: LAB_004fc876
    FCOMP double ptr [0x0058df06]       ; 004fc87a | DAT_0058df06
    FNSTSW AX                           ; 004fc880
    SAHF                                ; 004fc882
    JNC 0x004fca3c                      ; 004fc883
        ;   XREF to: 004fca3c (CONDITIONAL_JUMP)  ; LAB_004fca3c
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004fc889
        ;   Label: LAB_004fc889
    LEA EAX,[EBX + 0x20]                ; 004fc893
        ;   Label: LAB_004fc893
    FLD float ptr [ESI + 0x20]          ; 004fc896
    FSUB float ptr [EAX]                ; 004fc899
    FSTP float ptr [ESP + 0x18]         ; 004fc89b
    FLD float ptr [ESI + 0x24]          ; 004fc89f
    FSUB float ptr [EAX + 0x4]          ; 004fc8a2
    LEA EDX,[ESP + 0x54]                ; 004fc8a5
    FSTP float ptr [ESP + 0x1c]         ; 004fc8a9
    FLD float ptr [ESI + 0x28]          ; 004fc8ad
    FSUB float ptr [EAX + 0x8]          ; 004fc8b0
    LEA EAX,[ESP + 0x18]                ; 004fc8b3
    FSTP float ptr [ESP + 0x20]         ; 004fc8b7
    CMP EDX,EAX                         ; 004fc8bb
    JZ 0x004fc8d7                       ; 004fc8bd
        ;   XREF to: 004fc8d7 (CONDITIONAL_JUMP)  ; LAB_004fc8d7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fc8bf
    MOV dword ptr [ESP + 0x54],EAX      ; 004fc8c3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fc8c7
    MOV dword ptr [ESP + 0x58],EAX      ; 004fc8cb
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fc8cf
    MOV dword ptr [ESP + 0x5c],EAX      ; 004fc8d3
    LEA EAX,[ESP + 0x54]                ; 004fc8d7
        ;   Label: LAB_004fc8d7
    PUSH EAX                            ; 004fc8db
    LEA EAX,[ESP + 0x28]                ; 004fc8dc
    PUSH EAX                            ; 004fc8e0
    CALL FUN_0054e4a0                   ; 004fc8e1
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    MOV ESI,EAX                         ; 004fc8e6
    LEA EAX,[ESP + 0x5c]                ; 004fc8e8
    ADD ESP,0x8                         ; 004fc8ec
    CMP EAX,ESI                         ; 004fc8ef
    JZ 0x004fc907                       ; 004fc8f1
        ;   XREF to: 004fc907 (CONDITIONAL_JUMP)  ; LAB_004fc907
    MOV EAX,dword ptr [ESI]             ; 004fc8f3
    MOV dword ptr [ESP + 0x54],EAX      ; 004fc8f5
    MOV EAX,dword ptr [ESI + 0x4]       ; 004fc8f9
    MOV dword ptr [ESP + 0x58],EAX      ; 004fc8fc
    MOV EAX,dword ptr [ESI + 0x8]       ; 004fc900
    MOV dword ptr [ESP + 0x5c],EAX      ; 004fc903
    FLD float ptr [ESP + 0x58]          ; 004fc907
        ;   Label: LAB_004fc907
    FSUB float ptr [EBX + 0x34]         ; 004fc90b
    SUB ESP,0x4                         ; 004fc90e
    FSTP float ptr [ESP]                ; 004fc911
    CALL FUN_0040df00                   ; 004fc914
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x7c],EAX      ; 004fc919
    FLD float ptr [ESP + 0x7c]          ; 004fc91d
    ADD ESP,0x4                         ; 004fc921
    FST float ptr [ESP + 0x4c]          ; 004fc924
    FCOMP float ptr [ESP + 0x74]        ; 004fc928
    FNSTSW AX                           ; 004fc92c
    SAHF                                ; 004fc92e
    JBE 0x004fc939                      ; 004fc92f
        ;   XREF to: 004fc939 (CONDITIONAL_JUMP)  ; LAB_004fc939
    MOV EAX,dword ptr [ESP + 0x74]      ; 004fc931
    MOV dword ptr [ESP + 0x4c],EAX      ; 004fc935
    FLD float ptr [ESP + 0x4c]          ; 004fc939
        ;   Label: LAB_004fc939
    FLD float ptr [ESP + 0x74]          ; 004fc93d
    FCHS                                ; 004fc941
    FSTP float ptr [ESP + 0x68]         ; 004fc943
    FCOMP float ptr [ESP + 0x68]        ; 004fc947
    FNSTSW AX                           ; 004fc94b
    SAHF                                ; 004fc94d
    JNC 0x004fc958                      ; 004fc94e
        ;   XREF to: 004fc958 (CONDITIONAL_JUMP)  ; LAB_004fc958
    MOV EAX,dword ptr [ESP + 0x68]      ; 004fc950
    MOV dword ptr [ESP + 0x4c],EAX      ; 004fc954
    FLD float ptr [ESP + 0x4c]          ; 004fc958
        ;   Label: LAB_004fc958
    FLD float ptr [EBP + 0x18]          ; 004fc95c
    FXCH                                ; 004fc95f
    FSUB float ptr [EBX + 0x1fa44]      ; 004fc961
    FXCH                                ; 004fc967
    FMUL double ptr [0x0058df0e]        ; 004fc969 | DAT_0058df0e
    FXCH                                ; 004fc96f
    FST float ptr [ESP + 0x10]          ; 004fc971
    FXCH                                ; 004fc975
    FSTP double ptr [ESP]               ; 004fc977
    FCOMP double ptr [ESP]              ; 004fc97a
    FNSTSW AX                           ; 004fc97d
    SAHF                                ; 004fc97f
    JBE 0x004fc989                      ; 004fc980
        ;   XREF to: 004fc989 (CONDITIONAL_JUMP)  ; LAB_004fc989
    FLD double ptr [ESP]                ; 004fc982
    FSTP float ptr [ESP + 0x10]         ; 004fc985
    FLD float ptr [EBP + 0x18]          ; 004fc989
        ;   Label: LAB_004fc989
    FMUL double ptr [0x0058df16]        ; 004fc98c | DAT_0058df16
    FLD float ptr [ESP + 0x10]          ; 004fc992
    FXCH                                ; 004fc996
    FSTP double ptr [ESP + 0x8]         ; 004fc998
    FCOMP double ptr [ESP + 0x8]        ; 004fc99c
    FNSTSW AX                           ; 004fc9a0
    SAHF                                ; 004fc9a2
    JNC 0x004fc9ad                      ; 004fc9a3
        ;   XREF to: 004fc9ad (CONDITIONAL_JUMP)  ; LAB_004fc9ad
    FLD double ptr [ESP + 0x8]          ; 004fc9a5
    FSTP float ptr [ESP + 0x10]         ; 004fc9a9
    FLD float ptr [EBX + 0x1fa44]       ; 004fc9ad
        ;   Label: LAB_004fc9ad
    FADD float ptr [ESP + 0x10]         ; 004fc9b3
    FSTP float ptr [EBX + 0x1fa44]      ; 004fc9b7
    MOV ESP,EBP                         ; 004fc9bd
    POP EBP                             ; 004fc9bf
    POP EDI                             ; 004fc9c0
    POP ESI                             ; 004fc9c1
    POP EBX                             ; 004fc9c2
    RET                                 ; 004fc9c3
    CMP EAX,0x3                         ; 004fc9c4
        ;   Label: LAB_004fc9c4
    JZ 0x004fc69f                       ; 004fc9c7
        ;   XREF to: 004fc69f (CONDITIONAL_JUMP)  ; LAB_004fc69f
    JMP 0x004fc6e3                      ; 004fc9cd
        ;   XREF to: 004fc6e3 (UNCONDITIONAL_JUMP)  ; LAB_004fc6e3
    FLD float ptr [ESP + 0x14]          ; 004fc9d2
        ;   Label: LAB_004fc9d2
    FCOMP double ptr [0x0058dede]       ; 004fc9d6 | DAT_0058dede
    FNSTSW AX                           ; 004fc9dc
    SAHF                                ; 004fc9de
    JNC 0x004fc7cf                      ; 004fc9df
        ;   XREF to: 004fc7cf (CONDITIONAL_JUMP)  ; LAB_004fc7cf
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004fc9e5
    JZ 0x004fca23                       ; 004fc9ec
        ;   XREF to: 004fca23 (CONDITIONAL_JUMP)  ; LAB_004fca23
    TEST EDI,EDI                        ; 004fc9ee
    JZ 0x004fca23                       ; 004fc9f0
        ;   XREF to: 004fca23 (CONDITIONAL_JUMP)  ; LAB_004fca23
    FLD float ptr [EBX + 0x2a88]        ; 004fc9f2
    FCOMP double ptr [0x0058dee6]       ; 004fc9f8 | DAT_0058dee6
    FNSTSW AX                           ; 004fc9fe
    SAHF                                ; 004fca00
    JBE 0x004fca16                      ; 004fca01
        ;   XREF to: 004fca16 (CONDITIONAL_JUMP)  ; LAB_004fca16
    CMP dword ptr [EBX + 0x1fa64],0x0   ; 004fca03
    JZ 0x004fca16                       ; 004fca0a
        ;   XREF to: 004fca16 (CONDITIONAL_JUMP)  ; LAB_004fca16
    MOV dword ptr [EBX + 0xbca0],0x1    ; 004fca0c
    LEA EAX,[ESI + 0x20]                ; 004fca16
        ;   Label: LAB_004fca16
    PUSH EAX                            ; 004fca19
    PUSH EBX                            ; 004fca1a
    CALL FUN_00424e90                   ; 004fca1b
        ;   XREF to: 00424e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00424e90()
    ADD ESP,0x8                         ; 004fca20
    MOV dword ptr [EBX + 0xbc9c],0x0    ; 004fca23
        ;   Label: LAB_004fca23
    MOV dword ptr [EBX + 0xbc94],0x0    ; 004fca2d
    JMP 0x004fc7c4                      ; 004fca37
        ;   XREF to: 004fc7c4 (UNCONDITIONAL_JUMP)  ; LAB_004fc7c4
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 004fca3c
        ;   Label: LAB_004fca3c
    JMP 0x004fc889                      ; 004fca46
        ;   XREF to: 004fc889 (UNCONDITIONAL_JUMP)  ; LAB_004fc889

