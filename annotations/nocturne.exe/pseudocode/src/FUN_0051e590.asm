; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_0051e590(int param_1,float *param_2,float param_3,float param_4)
;
; Local Variables:
; undefined8       Stack[-0x54]:8  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0051e510 at 0051e525
;
; Referenced Globals:
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; Called Functions:
;   FUN_0051e0a0
;   FUN_00563a30
;   FUN_005648c0
;   FUN_00567121
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0051e590
        ;   Label: FUN_0051e590
    PUSH EDI                            ; 0051e591
    SUB ESP,0x40                        ; 0051e592
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0051e595
    MOV ESI,dword ptr [ESP + 0x50]      ; 0051e599
    FLD float ptr [ESP + 0x54]          ; 0051e59d
    FCOMP float ptr [ESP + 0x58]        ; 0051e5a1
    FNSTSW AX                           ; 0051e5a5
    SAHF                                ; 0051e5a7
    JC 0x0051e5cd                       ; 0051e5a8
        ;   XREF to: 0051e5cd (CONDITIONAL_JUMP)  ; LAB_0051e5cd
    MOV EAX,[0x02dd1184]                ; 0051e5aa | DAT_02dd1184
    MOV dword ptr [ESI],EAX             ; 0051e5af
    LEA EAX,[ESI + 0x4]                 ; 0051e5b1
    MOV EDX,dword ptr [0x02dd1188]      ; 0051e5b4 | DAT_02dd1188
    MOV dword ptr [EAX],EDX             ; 0051e5ba
    MOV EDX,dword ptr [0x02dd118c]      ; 0051e5bc | DAT_02dd118c
    MOV dword ptr [EAX + 0x4],EDX       ; 0051e5c2
    MOV EAX,ESI                         ; 0051e5c5
    ADD ESP,0x40                        ; 0051e5c7
    POP EDI                             ; 0051e5ca
    POP ESI                             ; 0051e5cb
    RET                                 ; 0051e5cc
    PUSH EBX                            ; 0051e5cd
        ;   Label: LAB_0051e5cd
    PUSH EDI                            ; 0051e5ce
    CALL FUN_0051e0a0                   ; 0051e5cf
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051e5d4
    FLD float ptr [ESP + 0x58]          ; 0051e5d7
    SUB ESP,0x8                         ; 0051e5db
    FSTP double ptr [ESP]               ; 0051e5de
    MOV EBX,EAX                         ; 0051e5e1
    CALL FUN_005648c0                   ; 0051e5e3
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x30],EAX      ; 0051e5e8
    MOV dword ptr [ESP + 0x34],EDX      ; 0051e5ec
    FLD double ptr [ESP + 0x30]         ; 0051e5f0
    ADD ESP,0x8                         ; 0051e5f4
    CALL FUN_00563a30                   ; 0051e5f7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FLD float ptr [ESP + 0x5c]          ; 0051e5fc
    FXCH                                ; 0051e600
    FISTP dword ptr [ESP + 0x3c]        ; 0051e602
    SUB ESP,0x8                         ; 0051e606
    FSTP double ptr [ESP]               ; 0051e609
    CALL FUN_00567121                   ; 0051e60c
        ;   XREF to: 00567121 (UNCONDITIONAL_CALL)  ; undefined FUN_00567121()
    MOV dword ptr [ESP + 0x30],EAX      ; 0051e611
    MOV dword ptr [ESP + 0x34],EDX      ; 0051e615
    FLD double ptr [ESP + 0x30]         ; 0051e619
    CALL FUN_00563a30                   ; 0051e61d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    ADD ESP,0x8                         ; 0051e622
    XOR EDX,EDX                         ; 0051e625
    FISTP dword ptr [ESP + 0x38]        ; 0051e627
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051e62b
    MOV dword ptr [ESP + 0x1c],EDX      ; 0051e62f
    MOV dword ptr [ESP + 0x20],EDX      ; 0051e633
    MOV dword ptr [ESP + 0x24],EDX      ; 0051e637
    CMP EAX,dword ptr [ESP + 0x38]      ; 0051e63b
    JGE 0x0051e690                      ; 0051e63f
        ;   XREF to: 0051e690 (CONDITIONAL_JUMP)  ; LAB_0051e690
    MOV EDX,EAX                         ; 0051e641
    SHL EAX,0x2                         ; 0051e643
    SUB EAX,EDX                         ; 0051e646
    MOV EDX,dword ptr [ESP + 0x38]      ; 0051e648
    LEA ECX,[EDX*0x4 + 0x0]             ; 0051e64c
    SUB ECX,EDX                         ; 0051e653
    SHL EAX,0x2                         ; 0051e655
    SHL ECX,0x2                         ; 0051e658
    MOV EDX,dword ptr [EBX + 0x29378]   ; 0051e65b
        ;   Label: LAB_0051e65b
    FLD float ptr [ESP + 0x1c]          ; 0051e661
    FADD float ptr [EDX + EAX*0x1]      ; 0051e665
    FLD float ptr [ESP + 0x20]          ; 0051e668
    FXCH                                ; 0051e66c
    FSTP float ptr [ESP + 0x1c]         ; 0051e66e
    FADD float ptr [EDX + EAX*0x1 + 0x4] ; 0051e672
    FLD float ptr [ESP + 0x24]          ; 0051e676
    FXCH                                ; 0051e67a
    FSTP float ptr [ESP + 0x20]         ; 0051e67c
    FADD float ptr [EDX + EAX*0x1 + 0x8] ; 0051e680
    ADD EAX,0xc                         ; 0051e684
    FSTP float ptr [ESP + 0x24]         ; 0051e687
    CMP EAX,ECX                         ; 0051e68b
    JL 0x0051e65b                       ; 0051e68d
        ;   XREF to: 0051e65b (CONDITIONAL_JUMP)  ; LAB_0051e65b
    NOP                                 ; 0051e68f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051e690
        ;   Label: LAB_0051e690
    MOV EDX,EAX                         ; 0051e694
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e696
    SHL EAX,0x2                         ; 0051e69a
    SUB EAX,EDX                         ; 0051e69d
    FILD dword ptr [ESP + 0x40]         ; 0051e69f
    LEA EDX,[EAX*0x4 + 0x0]             ; 0051e6a3
    FSUBR float ptr [ESP + 0x58]        ; 0051e6aa
    MOV EAX,dword ptr [EBX + 0x29378]   ; 0051e6ae
    FSTP float ptr [ESP + 0x30]         ; 0051e6b4
    FLD float ptr [EDX + EAX*0x1]       ; 0051e6b8
    FMUL float ptr [ESP + 0x30]         ; 0051e6bb
    FSTP float ptr [ESP + 0x10]         ; 0051e6bf
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0051e6c3
    FMUL float ptr [ESP + 0x30]         ; 0051e6c7
    FSTP float ptr [ESP + 0x14]         ; 0051e6cb
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 0051e6cf
    FMUL float ptr [ESP + 0x30]         ; 0051e6d3
    FLD float ptr [ESP + 0x20]          ; 0051e6d7
    FLD float ptr [ESP + 0x1c]          ; 0051e6db
    FSUB float ptr [ESP + 0x10]         ; 0051e6df
    FLD float ptr [ESP + 0x24]          ; 0051e6e3
    FXCH                                ; 0051e6e7
    FSTP float ptr [ESP + 0x1c]         ; 0051e6e9
    FXCH                                ; 0051e6ed
    FSUB float ptr [ESP + 0x14]         ; 0051e6ef
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051e6f3
    FSTP float ptr [ESP + 0x20]         ; 0051e6f7
    MOV dword ptr [ESP + 0x40],EAX      ; 0051e6fb
    FXCH                                ; 0051e6ff
    FSTP float ptr [ESP + 0x18]         ; 0051e701
    FILD dword ptr [ESP + 0x40]         ; 0051e705
    FXCH                                ; 0051e709
    FSUB float ptr [ESP + 0x18]         ; 0051e70b
    LEA EDX,[EAX + -0x1]                ; 0051e70f
    FSTP float ptr [ESP + 0x24]         ; 0051e712
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051e716
    FSUB float ptr [ESP + 0x5c]         ; 0051e71d
    SUB EAX,EDX                         ; 0051e721
    MOV EDX,dword ptr [EBX + 0x29378]   ; 0051e723
    FSTP float ptr [ESP + 0x34]         ; 0051e729
    FLD float ptr [EDX + EAX*0x4]       ; 0051e72d
    FMUL float ptr [ESP + 0x34]         ; 0051e730
    FSTP float ptr [ESP + 0x4]          ; 0051e734
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0051e738
    FMUL float ptr [ESP + 0x34]         ; 0051e73c
    FSTP float ptr [ESP + 0x8]          ; 0051e740
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 0051e744
    FMUL float ptr [ESP + 0x34]         ; 0051e748
    FLD float ptr [ESP + 0x20]          ; 0051e74c
    FLD float ptr [ESP + 0x1c]          ; 0051e750
    FSUB float ptr [ESP + 0x4]          ; 0051e754
    FLD float ptr [ESP + 0x24]          ; 0051e758
    FXCH                                ; 0051e75c
    FST float ptr [ESP + 0x1c]          ; 0051e75e
    FXCH ST2                            ; 0051e762
    FSUB float ptr [ESP + 0x8]          ; 0051e764
    FXCH ST3                            ; 0051e768
    FSTP float ptr [ESP + 0xc]          ; 0051e76a
    FSUB float ptr [ESP + 0xc]          ; 0051e76e
    FXCH ST2                            ; 0051e772
    FSTP float ptr [ESP + 0x20]         ; 0051e774
    FXCH                                ; 0051e778
    FSTP float ptr [ESP + 0x24]         ; 0051e77a
    FMUL float ptr [EDI + 0x508]        ; 0051e77e
    FLD float ptr [ESP + 0x20]          ; 0051e784
    FXCH                                ; 0051e788
    FSTP float ptr [ESP + 0x1c]         ; 0051e78a
    FMUL float ptr [EDI + 0x50c]        ; 0051e78e
    FLD float ptr [ESP + 0x24]          ; 0051e794
    FXCH                                ; 0051e798
    FSTP float ptr [ESP + 0x20]         ; 0051e79a
    FMUL float ptr [EDI + 0x510]        ; 0051e79e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051e7a4
    FSTP float ptr [ESP + 0x24]         ; 0051e7a8
    MOV dword ptr [ESI],EAX             ; 0051e7ac
    LEA EDX,[ESI + 0x4]                 ; 0051e7ae
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051e7b1
    MOV dword ptr [EDX],EAX             ; 0051e7b5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051e7b7
    MOV dword ptr [EDX + 0x4],EAX       ; 0051e7bb
    POP EBX                             ; 0051e7be
    MOV EAX,ESI                         ; 0051e7bf
    ADD ESP,0x40                        ; 0051e7c1
    POP EDI                             ; 0051e7c4
    POP ESI                             ; 0051e7c5
    RET                                 ; 0051e7c6

