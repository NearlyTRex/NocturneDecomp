; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00450520(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0044f430 at 0044f979
;
; Referenced Globals:
;   undefined4 DAT_0057c866
;   undefined4 DAT_0057c86e
;   undefined4 DAT_0057c876
;   undefined4 DAT_0057c87a
;   undefined4 DAT_0057c87e
;   undefined4 DAT_0059c030
;   undefined4 DAT_0059c038
;   undefined4 DAT_005ae470
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f4
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c775f8
;
; Called Functions:
;   FUN_0044da40
;   FUN_0044daa0
;   FUN_00460080
;   FUN_00460a00
;   FUN_00460aa0
;   FUN_00460d10
;   FUN_00460d30
;   FUN_00460db0
;   FUN_00461000
;   FUN_00461eb0
;   FUN_0053075c
;   FUN_00563a30
;   thunk_FUN_004cdbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450520
        ;   Label: FUN_00450520
    PUSH ESI                            ; 00450521
    PUSH EDI                            ; 00450522
    PUSH EBP                            ; 00450523
    MOV EBP,ESP                         ; 00450524
    SUB ESP,0x128                       ; 00450526
    AND ESP,0xfffffff8                  ; 0045052c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045052f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 00450532
    JZ 0x00450546                       ; 00450539
        ;   XREF to: 00450546 (CONDITIONAL_JUMP)  ; LAB_00450546
    MOV EAX,[0x005b9354]                ; 0045053b | DAT_005b9354 | DAT_01c775ec
    CMP dword ptr [EAX + 0xc],0x2       ; 00450540 | DAT_01c775f8
    JZ 0x0045054d                       ; 00450544
        ;   XREF to: 0045054d (CONDITIONAL_JUMP)  ; LAB_0045054d
    MOV ESP,EBP                         ; 00450546
        ;   Label: LAB_00450546
    POP EBP                             ; 00450548
    POP EDI                             ; 00450549
    POP ESI                             ; 0045054a
    POP EBX                             ; 0045054b
    RET                                 ; 0045054c
    LEA EAX,[ESP + 0xac]                ; 0045054d
        ;   Label: LAB_0045054d
    PUSH EAX                            ; 00450554
    MOV EBX,dword ptr [0x005ae704]      ; 00450555 | DAT_005ae704
    PUSH EBX                            ; 0045055b | DAT_01b4d738
    CALL FUN_00460d30                   ; 0045055c
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00460d30()
    ADD ESP,0x8                         ; 00450561
    MOV EAX,dword ptr [EBP + 0x14]      ; 00450564
    FLD float ptr [ESP + 0xac]          ; 00450567
    FSUB float ptr [EAX + 0x104]        ; 0045056e
    FLD float ptr [ESP + 0xb0]          ; 00450574
    FXCH                                ; 0045057b
    FSTP float ptr [ESP + 0xac]         ; 0045057d
    FSUB float ptr [EAX + 0x108]        ; 00450584
    FLD float ptr [ESP + 0xb4]          ; 0045058a
    FXCH                                ; 00450591
    FSTP float ptr [ESP + 0xb0]         ; 00450593
    FSUB float ptr [EAX + 0x10c]        ; 0045059a
    LEA EAX,[ESP + 0xac]                ; 004505a0
    PUSH EAX                            ; 004505a7
    LEA EAX,[ESP + 0xd4]                ; 004505a8
    PUSH EAX                            ; 004505af
    MOV EAX,dword ptr [EBP + 0x14]      ; 004505b0
    ADD EAX,0x110                       ; 004505b3
    PUSH EAX                            ; 004505b8
    FSTP float ptr [ESP + 0xc0]         ; 004505b9
    CALL FUN_0044daa0                   ; 004505c0
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044daa0()
    MOV EDX,EAX                         ; 004505c5
    LEA EAX,[ESP + 0xb8]                ; 004505c7
    ADD ESP,0xc                         ; 004505ce
    CMP EAX,EDX                         ; 004505d1
    JZ 0x004505f2                       ; 004505d3
        ;   XREF to: 004505f2 (CONDITIONAL_JUMP)  ; LAB_004505f2
    MOV EAX,dword ptr [EDX]             ; 004505d5
    MOV dword ptr [ESP + 0xac],EAX      ; 004505d7
    MOV EAX,dword ptr [EDX + 0x4]       ; 004505de
    MOV dword ptr [ESP + 0xb0],EAX      ; 004505e1
    MOV EAX,dword ptr [EDX + 0x8]       ; 004505e8
    MOV dword ptr [ESP + 0xb4],EAX      ; 004505eb
    FLD float ptr [ESP + 0xb4]          ; 004505f2
        ;   Label: LAB_004505f2
    FMUL double ptr [0x0057c866]        ; 004505f9 | DAT_0057c866
    MOV EAX,dword ptr [EBP + 0x14]      ; 004505ff
    FDIV float ptr [EAX + 0x138]        ; 00450602
    FLD float ptr [ESP + 0xb0]          ; 00450608
    FMUL ST0                            ; 0045060f
    FLD float ptr [ESP + 0xac]          ; 00450611
    FMUL ST0                            ; 00450618
    FXCH ST2                            ; 0045061a
    FMUL double ptr [0x0057c86e]        ; 0045061c | DAT_0057c86e
    FXCH                                ; 00450622
    FSTP float ptr [ESP + 0x110]        ; 00450624
    FXCH                                ; 0045062b
    FADD float ptr [ESP + 0x110]        ; 0045062d
    FXCH                                ; 00450634
    FST float ptr [ESP + 0x118]         ; 00450636
    FMUL float ptr [ESP + 0x118]        ; 0045063d
    FXCH                                ; 00450644
    FST float ptr [ESP + 0x11c]         ; 00450646
    FXCH                                ; 0045064d
    FSTP float ptr [ESP + 0x114]        ; 0045064f
    FCOMP float ptr [ESP + 0x114]       ; 00450656
    FNSTSW AX                           ; 0045065d
    SAHF                                ; 0045065f
    JA 0x00450546                       ; 00450660
        ;   XREF to: 00450546 (CONDITIONAL_JUMP)  ; LAB_00450546
    FLD float ptr [ESP + 0x11c]         ; 00450666
    FDIV float ptr [ESP + 0x114]        ; 0045066d
    LEA EDI,[ESP + 0xdc]                ; 00450674
    MOV ESI,dword ptr [0x005ae704]      ; 0045067b | DAT_005ae704
    LEA EBX,[ESP + 0xb8]                ; 00450681
    PUSH ESI                            ; 00450688 | DAT_01b4d738
    FLD1                                ; 00450689
    FSUBRP                              ; 0045068b
    LEA ESI,[ESP + 0x68]                ; 0045068d
    FSTP float ptr [ESP + 0xc]          ; 00450691
    CALL FUN_00460d10                   ; 00450695
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460d10()
    LEA ESI,[ESP + 0x68]                ; 0045069a
    ADD ESP,0x4                         ; 0045069e
    LEA EAX,[ESP + 0xdc]                ; 004506a1
    MOVSD ES:EDI,ESI                    ; 004506a8
    MOVSD ES:EDI,ESI                    ; 004506a9
    MOVSD ES:EDI,ESI                    ; 004506aa
    FILD dword ptr [EAX]                ; 004506ab
    FMUL float ptr [0x0059c038]         ; 004506ad | DAT_0059c038
    FSTP float ptr [EBX]                ; 004506b3
    FILD dword ptr [EAX + 0x4]          ; 004506b5
    FMUL float ptr [0x0059c038]         ; 004506b8 | DAT_0059c038
    FSTP float ptr [EBX + 0x4]          ; 004506be
    FILD dword ptr [EAX + 0x8]          ; 004506c1
    FMUL float ptr [0x0059c038]         ; 004506c4 | DAT_0059c038
    FSTP float ptr [EBX + 0x8]          ; 004506ca
    MOV EDI,dword ptr [EBP + 0x14]      ; 004506cd
    FLD float ptr [ESP + 0xb8]          ; 004506d0
    FSUB float ptr [EDI + 0x104]        ; 004506d7
    FLD float ptr [ESP + 0xbc]          ; 004506dd
    FXCH                                ; 004506e4
    FSTP float ptr [ESP + 0x100]        ; 004506e6
    FSUB float ptr [EDI + 0x108]        ; 004506ed
    FST float ptr [ESP + 0x104]         ; 004506f3
    FMUL float ptr [ESP + 0x104]        ; 004506fa
    FLD float ptr [ESP + 0x100]         ; 00450701
    FMUL ST0                            ; 00450708
    FLD float ptr [ESP + 0xc0]          ; 0045070a
    FSUB float ptr [EDI + 0x10c]        ; 00450711
    FXCH                                ; 00450717
    FADDP ST2,ST0                       ; 00450719
    FST float ptr [ESP + 0x108]         ; 0045071b
    FMUL float ptr [ESP + 0x108]        ; 00450722
    FADDP                               ; 00450729
    FSQRT                               ; 0045072b
    ADD EDI,0x104                       ; 0045072d
    FST float ptr [ESP + 0x4]           ; 00450733
    FLDZ                                ; 00450737
    FCOMPP                              ; 00450739
    FNSTSW AX                           ; 0045073b
    SAHF                                ; 0045073d
    JNC 0x00450546                      ; 0045073e
        ;   XREF to: 00450546 (CONDITIONAL_JUMP)  ; LAB_00450546
    FLD1                                ; 00450744
    FLD float ptr [ESP + 0x100]         ; 00450746
    FXCH                                ; 0045074d
    FDIV float ptr [ESP + 0x4]          ; 0045074f
    FXCH                                ; 00450753
    FMUL ST1                            ; 00450755
    FLD float ptr [ESP + 0x104]         ; 00450757
    FMUL ST2                            ; 0045075e
    FLD float ptr [ESP + 0x108]         ; 00450760
    FMULP ST3                           ; 00450767
    MOV EAX,0xffff                      ; 00450769
    MOV ESI,0x3f800000                  ; 0045076e
    MOV EDX,dword ptr [0x01c038f4]      ; 00450773 | DAT_01c038f4
    XOR ECX,ECX                         ; 00450779
    SUB EAX,EDX                         ; 0045077b
    MOV dword ptr [ESP + 0x4c],ECX      ; 0045077d
    MOV dword ptr [ESP + 0x124],EAX     ; 00450781
    LEA EAX,[ESP + 0x4c]                ; 00450788
    MOV dword ptr [ESP + 0x50],ECX      ; 0045078c
    PUSH EAX                            ; 00450790
    LEA EAX,[ESP + 0x38]                ; 00450791
    MOV dword ptr [ESP + 0x58],ESI      ; 00450795
    PUSH EAX                            ; 00450799
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045079a
    FILD dword ptr [ESP + 0x12c]        ; 0045079d
    ADD EAX,0x110                       ; 004507a4
    FSTP float ptr [ESP + 0x12c]        ; 004507a9
    PUSH EAX                            ; 004507b0
    FXCH                                ; 004507b1
    FSTP float ptr [ESP + 0x10c]        ; 004507b3
    FSTP float ptr [ESP + 0x110]        ; 004507ba
    FSTP float ptr [ESP + 0x114]        ; 004507c1
    CALL FUN_0044da40                   ; 004507c8
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined FUN_0044da40()
    ADD ESP,0xc                         ; 004507cd
    FLD float ptr [ESP + 0x104]         ; 004507d0
    FMUL float ptr [EAX + 0x4]          ; 004507d7
    FLD float ptr [ESP + 0x100]         ; 004507da
    FMUL float ptr [EAX]                ; 004507e1
    FADDP                               ; 004507e3
    FLD float ptr [ESP + 0x108]         ; 004507e5
    FMUL float ptr [EAX + 0x8]          ; 004507ec
    FADDP                               ; 004507ef
    FMUL float ptr [ESP + 0x124]        ; 004507f1
    FMUL float ptr [0x0057c876]         ; 004507f8 | DAT_0057c876
    FLDZ                                ; 004507fe
    FCOMPP                              ; 00450800
    FNSTSW AX                           ; 00450802
    SAHF                                ; 00450804
    JNC 0x00450546                      ; 00450805
        ;   XREF to: 00450546 (CONDITIONAL_JUMP)  ; LAB_00450546
    PUSH 0x1                            ; 0045080b
    MOV EAX,[0x005ae704]                ; 0045080d | DAT_005ae704
    PUSH EAX                            ; 00450812 | DAT_01b4d738
    XOR ESI,ESI                         ; 00450813
    CALL FUN_00461000                   ; 00450815
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    ADD ESP,0x8                         ; 0045081a
    MOV dword ptr [ESP + 0x124],ESI     ; 0045081d
        ;   Label: LAB_0045081d
    FILD dword ptr [ESP + 0x124]        ; 00450824
    FMUL float ptr [0x0057c87a]         ; 0045082b | DAT_0057c87a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00450831
    FMUL float ptr [EAX + 0x100]        ; 00450834
    FLD float ptr [EAX + 0x138]         ; 0045083a
    FXCH                                ; 00450840
    FST float ptr [ESP]                 ; 00450842
    FMUL double ptr [0x0057c866]        ; 00450845 | DAT_0057c866
    FDIVRP                              ; 0045084b
    MOV EAX,dword ptr [EAX + 0x118]     ; 0045084d
    MOV dword ptr [ESP + 0x7c],EAX      ; 00450853
    FLD float ptr [ESP + 0x7c]          ; 00450857
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045085b
    FMUL float ptr [ESP]                ; 0045085e
    MOV EAX,dword ptr [EAX + 0x124]     ; 00450861
    MOV dword ptr [ESP + 0x80],EAX      ; 00450867
    FLD float ptr [ESP + 0x80]          ; 0045086e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00450875
    FMUL float ptr [ESP]                ; 00450878
    MOV EAX,dword ptr [EAX + 0x130]     ; 0045087b
    MOV dword ptr [ESP + 0x84],EAX      ; 00450881
    FLD float ptr [ESP + 0x84]          ; 00450888
    FMUL float ptr [ESP]                ; 0045088f
    FXCH ST2                            ; 00450892
    FSTP float ptr [ESP + 0x88]         ; 00450894
    FSTP float ptr [ESP + 0x8c]         ; 0045089b
    FSTP float ptr [ESP + 0x90]         ; 004508a2
    FLD float ptr [EDI]                 ; 004508a9
    FADD float ptr [ESP + 0x88]         ; 004508ab
    FSTP float ptr [ESP + 0x94]         ; 004508b2
    FLD float ptr [EDI + 0x4]           ; 004508b9
    FADD float ptr [ESP + 0x8c]         ; 004508bc
    LEA EDX,[ESP + 0x94]                ; 004508c3
    FSTP float ptr [ESP + 0x98]         ; 004508ca
    FLD float ptr [EDI + 0x8]           ; 004508d1
    FADD float ptr [ESP + 0x90]         ; 004508d4
    LEA EAX,[ESP + 0x58]                ; 004508db
    FSTP float ptr [ESP + 0x9c]         ; 004508df
    FSTP float ptr [ESP + 0x120]        ; 004508e6
    CMP EAX,EDX                         ; 004508ed
    JZ 0x00450912                       ; 004508ef
        ;   XREF to: 00450912 (CONDITIONAL_JUMP)  ; LAB_00450912
    MOV EAX,dword ptr [ESP + 0x94]      ; 004508f1
    MOV dword ptr [ESP + 0x58],EAX      ; 004508f8
    MOV EAX,dword ptr [ESP + 0x98]      ; 004508fc
    MOV dword ptr [ESP + 0x5c],EAX      ; 00450903
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00450907
    MOV dword ptr [ESP + 0x60],EAX      ; 0045090e
    LEA EAX,[ESP + 0x58]                ; 00450912
        ;   Label: LAB_00450912
    PUSH EAX                            ; 00450916
    MOV EDX,dword ptr [0x005ae704]      ; 00450917 | DAT_005ae704
    PUSH EDX                            ; 0045091d | DAT_01b4d738
    CALL FUN_00460a00                   ; 0045091e
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 00450923
    LEA EAX,[ESP + 0xa0]                ; 00450926
    PUSH EAX                            ; 0045092d
    MOV ECX,dword ptr [0x005ae704]      ; 0045092e | DAT_005ae704
    PUSH ECX                            ; 00450934 | DAT_01b4d738
    CALL FUN_00460db0                   ; 00450935
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460db0()
    ADD ESP,0x8                         ; 0045093a
    PUSH 0x0                            ; 0045093d
    LEA EAX,[ESP + 0xa4]                ; 0045093f
    PUSH EAX                            ; 00450946
    MOV EBX,dword ptr [0x005ae704]      ; 00450947 | DAT_005ae704
    PUSH EBX                            ; 0045094d | DAT_01b4d738
    CALL FUN_00460aa0                   ; 0045094e
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460aa0()
    ADD ESP,0xc                         ; 00450953
    MOV EAX,dword ptr [ESP + 0x120]     ; 00450956
    MOV dword ptr [ESP + 0xe8],EAX      ; 0045095d
    MOV dword ptr [ESP + 0xec],EAX      ; 00450964
    XOR EAX,EAX                         ; 0045096b
    LEA EBX,[ESP + 0xc4]                ; 0045096d
    MOV dword ptr [ESP + 0xf0],EAX      ; 00450974
    LEA EAX,[ESP + 0xe8]                ; 0045097b
    MOV EDX,dword ptr [0x005ae704]      ; 00450982 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00450988
    FMUL float ptr [0x0059c030]         ; 0045098a | DAT_0059c030
    FISTP dword ptr [EBX]               ; 00450990
    FLD float ptr [EAX + 0x4]           ; 00450992
    FMUL float ptr [0x0059c030]         ; 00450995 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0045099b
    FLD float ptr [EAX + 0x8]           ; 0045099e
    FMUL float ptr [0x0059c030]         ; 004509a1 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 004509a7
    LEA EAX,[ESP + 0xc4]                ; 004509aa
    PUSH EAX                            ; 004509b1
    MOV EAX,dword ptr [EDX]             ; 004509b2 | DAT_01b4d738
    PUSH EAX                            ; 004509b4
    CALL FUN_0053075c                   ; 004509b5
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 004509ba
    MOV AH,byte ptr [ESP + 0xeb]        ; 004509bd
    XOR AH,0x80                         ; 004509c4
    LEA EBX,[ESP + 0xf4]                ; 004509c7
    MOV byte ptr [ESP + 0xeb],AH        ; 004509ce
    LEA EAX,[ESP + 0xe8]                ; 004509d5
    MOV EDX,dword ptr [0x005ae704]      ; 004509dc | DAT_005ae704
    FLD float ptr [EAX]                 ; 004509e2
    FMUL float ptr [0x0059c030]         ; 004509e4 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 004509ea
    FLD float ptr [EAX + 0x4]           ; 004509ec
    FMUL float ptr [0x0059c030]         ; 004509ef | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 004509f5
    FLD float ptr [EAX + 0x8]           ; 004509f8
    FMUL float ptr [0x0059c030]         ; 004509fb | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00450a01
    LEA EAX,[ESP + 0xf4]                ; 00450a04
    PUSH EAX                            ; 00450a0b
    MOV EAX,dword ptr [EDX]             ; 00450a0c | DAT_01b4d738
    ADD EAX,0x30                        ; 00450a0e
    PUSH EAX                            ; 00450a11
    CALL FUN_0053075c                   ; 00450a12
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00450a17
    MOV DL,byte ptr [ESP + 0xef]        ; 00450a1a
    LEA EBX,[ESP + 0x40]                ; 00450a21
    XOR DL,0x80                         ; 00450a25
    LEA EAX,[ESP + 0xe8]                ; 00450a28
    MOV byte ptr [ESP + 0xef],DL        ; 00450a2f
    MOV EDX,dword ptr [0x005ae704]      ; 00450a36 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00450a3c
    FMUL float ptr [0x0059c030]         ; 00450a3e | DAT_0059c030
    FISTP dword ptr [EBX]               ; 00450a44
    FLD float ptr [EAX + 0x4]           ; 00450a46
    FMUL float ptr [0x0059c030]         ; 00450a49 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00450a4f
    FLD float ptr [EAX + 0x8]           ; 00450a52
    FMUL float ptr [0x0059c030]         ; 00450a55 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00450a5b
    LEA EAX,[ESP + 0x40]                ; 00450a5e
    PUSH EAX                            ; 00450a62
    MOV EAX,dword ptr [EDX]             ; 00450a63 | DAT_01b4d738
    ADD EAX,0x60                        ; 00450a65
    PUSH EAX                            ; 00450a68
    CALL FUN_0053075c                   ; 00450a69
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00450a6e
    MOV DH,byte ptr [ESP + 0xeb]        ; 00450a71
    LEA EBX,[ESP + 0x70]                ; 00450a78
    XOR DH,0x80                         ; 00450a7c
    LEA EAX,[ESP + 0xe8]                ; 00450a7f
    MOV byte ptr [ESP + 0xeb],DH        ; 00450a86
    MOV EDX,dword ptr [0x005ae704]      ; 00450a8d | DAT_005ae704
    FLD float ptr [EAX]                 ; 00450a93
    FMUL float ptr [0x0059c030]         ; 00450a95 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 00450a9b
    FLD float ptr [EAX + 0x4]           ; 00450a9d
    FMUL float ptr [0x0059c030]         ; 00450aa0 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00450aa6
    FLD float ptr [EAX + 0x8]           ; 00450aa9
    FMUL float ptr [0x0059c030]         ; 00450aac | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00450ab2
    LEA EAX,[ESP + 0x70]                ; 00450ab5
    PUSH EAX                            ; 00450ab9
    MOV EAX,dword ptr [EDX]             ; 00450aba | DAT_01b4d738
    ADD EAX,0x90                        ; 00450abc
    PUSH EAX                            ; 00450ac1
    CALL FUN_0053075c                   ; 00450ac2
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00450ac7
    PUSH 0x5ae470                       ; 00450aca | DAT_005ae470
    MOV EDX,dword ptr [0x005ae704]      ; 00450acf | DAT_005ae704
    PUSH EDX                            ; 00450ad5 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 00450ad6
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 00450adb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00450ade
    FLD float ptr [EAX + 0x100]         ; 00450ae1
    FSUB float ptr [ESP]                ; 00450ae7
    FMUL double ptr [0x0057c87e]        ; 00450aea | DAT_0057c87e
    FDIV float ptr [EAX + 0x100]        ; 00450af0
    XOR EBX,EBX                         ; 00450af6
    MOV ECX,0x4                         ; 00450af8
    MOV EDX,dword ptr [0x005ae704]      ; 00450afd | DAT_005ae704
    MOV dword ptr [ESP + 0x10],ECX      ; 00450b03
    MOV dword ptr [ESP + 0x20],EBX      ; 00450b07
    MOV dword ptr [ESP + 0x1c],EBX      ; 00450b0b
    MOV dword ptr [ESP + 0x18],EBX      ; 00450b0f
    MOV dword ptr [ESP + 0x14],EBX      ; 00450b13
    MOV dword ptr [ESP + 0x24],EBX      ; 00450b17
    FMUL float ptr [ESP + 0x8]          ; 00450b1b
    MOV EBX,dword ptr [EDX]             ; 00450b1f | DAT_01b4d738
    CALL FUN_00563a30                   ; 00450b21
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x10c]       ; 00450b26
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00450b2d
    MOV dword ptr [EBX + 0x2c],EAX      ; 00450b34
    MOV EAX,dword ptr [EDX]             ; 00450b37
    MOV dword ptr [EAX + 0x20],0xffff   ; 00450b39
    MOV EAX,dword ptr [EDX]             ; 00450b40
    MOV dword ptr [EAX + 0x24],0xffff   ; 00450b42
    MOV EAX,dword ptr [EDX]             ; 00450b49
    MOV dword ptr [EAX + 0x28],0xffff   ; 00450b4b
    MOV dword ptr [ESP + 0x28],0x1      ; 00450b52
    MOV EBX,dword ptr [EDX]             ; 00450b5a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00450b5c
    MOV dword ptr [EBX + 0x5c],EAX      ; 00450b63
    MOV EAX,dword ptr [EDX]             ; 00450b66
    MOV dword ptr [EAX + 0x50],0xffff   ; 00450b68
    MOV EAX,dword ptr [EDX]             ; 00450b6f
    MOV dword ptr [EAX + 0x54],0xffff   ; 00450b71
    MOV EAX,dword ptr [EDX]             ; 00450b78
    MOV ECX,0x2                         ; 00450b7a
    MOV dword ptr [EAX + 0x58],0xffff   ; 00450b7f
    MOV dword ptr [ESP + 0x2c],ECX      ; 00450b86
    MOV EBX,dword ptr [EDX]             ; 00450b8a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00450b8c
    MOV dword ptr [EBX + 0x8c],EAX      ; 00450b93
    MOV EAX,dword ptr [EDX]             ; 00450b99
    MOV dword ptr [EAX + 0x80],0xffff   ; 00450b9b
    MOV EAX,dword ptr [EDX]             ; 00450ba5
    MOV dword ptr [EAX + 0x84],0xffff   ; 00450ba7
    MOV EAX,dword ptr [EDX]             ; 00450bb1
    MOV EBX,0x3                         ; 00450bb3
    MOV dword ptr [EAX + 0x88],0xffff   ; 00450bb8
    MOV dword ptr [ESP + 0x30],EBX      ; 00450bc2
    MOV EBX,dword ptr [EDX]             ; 00450bc6
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00450bc8
    MOV dword ptr [EBX + 0xbc],EAX      ; 00450bcf
    MOV EAX,dword ptr [EDX]             ; 00450bd5
    MOV dword ptr [EAX + 0xb0],0xffff   ; 00450bd7
    MOV EAX,dword ptr [EDX]             ; 00450be1
    MOV dword ptr [EAX + 0xb4],0xffff   ; 00450be3
    MOV EAX,dword ptr [EDX]             ; 00450bed
    MOV dword ptr [EAX + 0xb8],0xffff   ; 00450bef
    MOV EAX,dword ptr [EDX]             ; 00450bf9
    MOV dword ptr [EAX + 0x18],0xf80000 ; 00450bfb
    MOV EAX,dword ptr [EDX]             ; 00450c02
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 00450c04
    MOV EAX,dword ptr [EDX]             ; 00450c0b
    MOV dword ptr [EAX + 0x48],0x80000  ; 00450c0d
    MOV EAX,dword ptr [EDX]             ; 00450c14
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 00450c16
    MOV EAX,dword ptr [EDX]             ; 00450c1d
    MOV dword ptr [EAX + 0x78],0x80000  ; 00450c1f
    MOV EAX,dword ptr [EDX]             ; 00450c26
    MOV dword ptr [EAX + 0x7c],0x80000  ; 00450c28
    MOV EAX,dword ptr [EDX]             ; 00450c2f
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 00450c31
    MOV EAX,dword ptr [EDX]             ; 00450c3b
    MOV dword ptr [EAX + 0xac],0x80000  ; 00450c3d
    LEA EAX,[ESP + 0xc]                 ; 00450c47
    PUSH EAX                            ; 00450c4b
    PUSH EDX                            ; 00450c4c
    CALL FUN_00460080                   ; 00450c4d
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; undefined FUN_00460080()
    ADD ESP,0x8                         ; 00450c52
    MOV EAX,[0x005ae704]                ; 00450c55 | DAT_005ae704
    PUSH EAX                            ; 00450c5a | DAT_01b4d738
    INC ESI                             ; 00450c5b
    CALL thunk_FUN_004cdbc0             ; 00450c5c
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 00450c61
    CMP ESI,0x19                        ; 00450c64
    JL 0x0045081d                       ; 00450c67
        ;   XREF to: 0045081d (CONDITIONAL_JUMP)  ; LAB_0045081d
    PUSH 0x0                            ; 00450c6d
    MOV EDX,dword ptr [0x005ae704]      ; 00450c6f | DAT_005ae704
    PUSH EDX                            ; 00450c75 | DAT_01b4d738
    CALL FUN_00461000                   ; 00450c76
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    ADD ESP,0x8                         ; 00450c7b
    MOV ESP,EBP                         ; 00450c7e
    POP EBP                             ; 00450c80
    POP EDI                             ; 00450c81
    POP ESI                             ; 00450c82
    POP EBX                             ; 00450c83
    RET                                 ; 00450c84

