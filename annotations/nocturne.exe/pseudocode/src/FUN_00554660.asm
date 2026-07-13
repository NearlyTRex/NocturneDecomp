; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00554660(int param_1)
;
;
; XREF[2]:
;   FUN_00553f10 at 00553f2e
;   FUN_00554310 at 00554328
;
; Referenced Globals:
;   undefined4 DAT_00597c15
;   undefined4 DAT_0078a123
;
; Called Functions:
;   FUN_0040a240
;   FUN_0041a6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554660
        ;   Label: FUN_00554660
    SUB ESP,0x48                        ; 00554661
    MOV EBX,dword ptr [ESP + 0x50]      ; 00554664
    LEA EAX,[EBX + 0x150]               ; 00554668
    CMP dword ptr [EAX + 0x178],0x0     ; 0055466e
    JZ 0x00554680                       ; 00554675
        ;   XREF to: 00554680 (CONDITIONAL_JUMP)  ; LAB_00554680
    CMP dword ptr [EBX + 0x68],0x78a123 ; 00554677 | DAT_0078a123
    JZ 0x00554685                       ; 0055467e
        ;   XREF to: 00554685 (CONDITIONAL_JUMP)  ; LAB_00554685
    ADD ESP,0x48                        ; 00554680
        ;   Label: LAB_00554680
    POP EBX                             ; 00554683
    RET                                 ; 00554684
    MOV EAX,ESP                         ; 00554685
        ;   Label: LAB_00554685
    PUSH EAX                            ; 00554687
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00554688
    PUSH EBX                            ; 0055468e
    CALL dword ptr [EDX + 0x14]         ; 0055468f
    ADD ESP,0x8                         ; 00554692
    FLD float ptr [ESP + 0x4]           ; 00554695
    FLD float ptr [ESP]                 ; 00554699
    FADD float ptr [ESP + 0xc]          ; 0055469c
    FXCH                                ; 005546a0
    FADD float ptr [ESP + 0x10]         ; 005546a2
    FXCH                                ; 005546a6
    FST float ptr [ESP + 0x3c]          ; 005546a8
    FLD float ptr [0x00597c15]          ; 005546ac | DAT_00597c15
    FXCH                                ; 005546b2
    FMUL ST1                            ; 005546b4
    FXCH ST2                            ; 005546b6
    FST float ptr [ESP + 0x40]          ; 005546b8
    FMUL ST1                            ; 005546bc
    LEA EAX,[ESP + 0x30]                ; 005546be
    FLD float ptr [ESP + 0x8]           ; 005546c2
    PUSH EAX                            ; 005546c6
    FADD float ptr [ESP + 0x18]         ; 005546c7
    LEA EAX,[ESP + 0x1c]                ; 005546cb
    FST float ptr [ESP + 0x48]          ; 005546cf
    PUSH EAX                            ; 005546d3
    FMULP ST2                           ; 005546d4
    PUSH EBX                            ; 005546d6
    FXCH ST2                            ; 005546d7
    FSTP float ptr [ESP + 0x3c]         ; 005546d9
    FXCH                                ; 005546dd
    FSTP float ptr [ESP + 0x40]         ; 005546df
    FSTP float ptr [ESP + 0x44]         ; 005546e3
    CALL FUN_0040a240                   ; 005546e7
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 005546ec
    LEA EAX,[ESP + 0x24]                ; 005546ef
    FLD float ptr [ESP + 0xc]           ; 005546f3
    FLD float ptr [ESP + 0x10]          ; 005546f7
    FLD float ptr [ESP + 0x14]          ; 005546fb
    FXCH ST2                            ; 005546ff
    FSUB float ptr [ESP]                ; 00554701
    FXCH                                ; 00554704
    FSUB float ptr [ESP + 0x4]          ; 00554706
    FXCH ST2                            ; 0055470a
    FSUB float ptr [ESP + 0x8]          ; 0055470c
    FXCH                                ; 00554710
    FSTP float ptr [ESP + 0x24]         ; 00554712
    FXCH                                ; 00554716
    FSTP float ptr [ESP + 0x28]         ; 00554718
    FSTP float ptr [ESP + 0x2c]         ; 0055471c
    PUSH dword ptr [EBX + 0x55c]        ; 00554720
    PUSH EAX                            ; 00554726
    LEA EAX,[EBX + 0x30]                ; 00554727
    PUSH EAX                            ; 0055472a
    LEA EAX,[ESP + 0x24]                ; 0055472b
    PUSH EAX                            ; 0055472f
    ADD EBX,0x300                       ; 00554730
    PUSH EBX                            ; 00554736
    CALL FUN_0041a6e0                   ; 00554737
        ;   XREF to: 0041a6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a6e0()
    ADD ESP,0x14                        ; 0055473c
    ADD ESP,0x48                        ; 0055473f
    POP EBX                             ; 00554742
    RET                                 ; 00554743

