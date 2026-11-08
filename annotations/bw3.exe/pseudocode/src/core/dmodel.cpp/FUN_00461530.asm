; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461530(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00460550 at 00460651
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005bb8fc
;   TerminatedCString s_CKeyFramedModel_calcNorm_005bb90f
;   undefined4 DAT_005bb954
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004dece0
;   FUN_004e4330
;   FUN_005a28f0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461530
        ;   Label: FUN_00461530
    PUSH ESI                            ; 00461531
    PUSH EDI                            ; 00461532
    PUSH EBP                            ; 00461533
    MOV EBP,ESP                         ; 00461534
    SUB ESP,0x30                        ; 00461536
    AND ESP,0xfffffff8                  ; 00461539
    MOV EDI,dword ptr [EBP + 0x14]      ; 0046153c
    CMP dword ptr [EDI + 0x100],0x1     ; 0046153f
    JNZ 0x00461668                      ; 00461546
        ;   XREF to: 00461668 (CONDITIONAL_JUMP)  ; LAB_00461668
    CMP dword ptr [EDI + 0x108],0x0     ; 0046154c
    JZ 0x0046166f                       ; 00461553
        ;   XREF to: 0046166f (CONDITIONAL_JUMP)  ; LAB_0046166f
    MOV EDX,dword ptr [EDI + 0x104]     ; 00461559
        ;   Label: LAB_00461559
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046155f
    SUB EAX,EDX                         ; 00461566
    SHL EAX,0x2                         ; 00461568
    PUSH EAX                            ; 0046156b
    PUSH 0x0                            ; 0046156c
    MOV EAX,dword ptr [EDI + 0x108]     ; 0046156e
    PUSH EAX                            ; 00461574
    CALL FUN_005a28f0                   ; 00461575
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0046157a
    XOR EDX,EDX                         ; 0046157d
    MOV ECX,dword ptr [EDI + 0x110]     ; 0046157f
    MOV dword ptr [ESP + 0x2c],EDX      ; 00461585
    TEST ECX,ECX                        ; 00461589
    JLE 0x004615fe                      ; 0046158b
        ;   XREF to: 004615fe (CONDITIONAL_JUMP)  ; LAB_004615fe
    MOV dword ptr [ESP + 0x28],EDX      ; 0046158d
    MOV ESI,dword ptr [ESP + 0x28]      ; 00461591
        ;   Label: LAB_00461591
    MOV EBX,dword ptr [EDI + 0x114]     ; 00461595
    ADD EBX,ESI                         ; 0046159b
    PUSH EBX                            ; 0046159d
    MOV EAX,dword ptr [EDI + 0x10c]     ; 0046159e
    PUSH EAX                            ; 004615a4
    CALL FUN_004dece0                   ; 004615a5
        ;   XREF to: 004dece0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dece0()
    ADD ESP,0x8                         ; 004615aa
    MOV ECX,dword ptr [EBX + 0x4]       ; 004615ad
    XOR EDX,EDX                         ; 004615b0
    TEST ECX,ECX                        ; 004615b2
    JLE 0x004615e0                      ; 004615b4
        ;   XREF to: 004615e0 (CONDITIONAL_JUMP)  ; LAB_004615e0
    MOV ECX,EBX                         ; 004615b6
    IMUL ESI,dword ptr [ECX + 0x18],0xc ; 004615b8
        ;   Label: LAB_004615b8
    MOV EAX,dword ptr [EDI + 0x108]     ; 004615bc
    ADD EAX,ESI                         ; 004615c2
    MOV ESI,dword ptr [EBX + 0x8]       ; 004615c4
    ADD dword ptr [EAX],ESI             ; 004615c7
    MOV ESI,dword ptr [EBX + 0xc]       ; 004615c9
    ADD dword ptr [EAX + 0x4],ESI       ; 004615cc
    MOV ESI,dword ptr [EBX + 0x10]      ; 004615cf
    ADD dword ptr [EAX + 0x8],ESI       ; 004615d2
    INC EDX                             ; 004615d5
    MOV ESI,dword ptr [EBX + 0x4]       ; 004615d6
    ADD ECX,0xc                         ; 004615d9
    CMP EDX,ESI                         ; 004615dc
    JL 0x004615b8                       ; 004615de
        ;   XREF to: 004615b8 (CONDITIONAL_JUMP)  ; LAB_004615b8
    MOV EBX,dword ptr [ESP + 0x28]      ; 004615e0
        ;   Label: LAB_004615e0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004615e4
    MOV EDX,dword ptr [EDI + 0x110]     ; 004615e8
    ADD EBX,0x48                        ; 004615ee
    INC ESI                             ; 004615f1
    MOV dword ptr [ESP + 0x28],EBX      ; 004615f2
    MOV dword ptr [ESP + 0x2c],ESI      ; 004615f6
    CMP ESI,EDX                         ; 004615fa
    JL 0x00461591                       ; 004615fc
        ;   XREF to: 00461591 (CONDITIONAL_JUMP)  ; LAB_00461591
    MOV ECX,dword ptr [EDI + 0x104]     ; 004615fe
        ;   Label: LAB_004615fe
    XOR EBX,EBX                         ; 00461604
    TEST ECX,ECX                        ; 00461606
    JLE 0x00461668                      ; 00461608
        ;   XREF to: 00461668 (CONDITIONAL_JUMP)  ; LAB_00461668
    XOR ECX,ECX                         ; 0046160a
    MOV EDX,dword ptr [EDI + 0x108]     ; 0046160c
        ;   Label: LAB_0046160c
    ADD EDX,ECX                         ; 00461612
    FILD dword ptr [EDX]                ; 00461614
    FST double ptr [ESP + 0x8]          ; 00461616
    FMUL double ptr [ESP + 0x8]         ; 0046161a
    FILD dword ptr [EDX + 0x4]          ; 0046161e
    FST double ptr [ESP + 0x18]         ; 00461621
    FMUL double ptr [ESP + 0x18]        ; 00461625
    FILD dword ptr [EDX + 0x8]          ; 00461629
    FXCH                                ; 0046162c
    FADDP ST2,ST0                       ; 0046162e
    FST double ptr [ESP + 0x10]         ; 00461630
    FMUL double ptr [ESP + 0x10]        ; 00461634
    FADDP                               ; 00461638
    FSQRT                               ; 0046163a
    FLDZ                                ; 0046163c
    FXCH                                ; 0046163e
    FSTP double ptr [ESP]               ; 00461640
    FCOMP double ptr [ESP]              ; 00461643
    FNSTSW AX                           ; 00461646
    SAHF                                ; 00461648
    JC 0x00461697                       ; 00461649
        ;   XREF to: 00461697 (CONDITIONAL_JUMP)  ; LAB_00461697
    MOV dword ptr [EDX + 0x8],0x0       ; 0046164b
    MOV EAX,dword ptr [EDX + 0x8]       ; 00461652
    MOV dword ptr [EDX + 0x4],EAX       ; 00461655
    MOV dword ptr [EDX],EAX             ; 00461658
    INC EBX                             ; 0046165a
        ;   Label: LAB_0046165a
    MOV ESI,dword ptr [EDI + 0x104]     ; 0046165b
    ADD ECX,0xc                         ; 00461661
    CMP EBX,ESI                         ; 00461664
    JL 0x0046160c                       ; 00461666
        ;   XREF to: 0046160c (CONDITIONAL_JUMP)  ; LAB_0046160c
    MOV ESP,EBP                         ; 00461668
        ;   Label: LAB_00461668
    POP EBP                             ; 0046166a
    POP EDI                             ; 0046166b
    POP ESI                             ; 0046166c
    POP EBX                             ; 0046166d
    RET                                 ; 0046166e
    MOV EBX,0x5bb8fc                    ; 0046166f | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0046166f
    MOV ESI,0x2f1                       ; 00461674
    PUSH 0x5bb90f                       ; 00461679 | = "CKeyFramedModel::calcNormals() - vert..."
    MOV dword ptr [0x01d71de0],EBX      ; 0046167e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00461684 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0046168a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0046168f
    JMP 0x00461559                      ; 00461692
        ;   XREF to: 00461559 (UNCONDITIONAL_JUMP)  ; LAB_00461559
    FLD double ptr [ESP + 0x8]          ; 00461697
        ;   Label: LAB_00461697
    FLD double ptr [0x005bb954]         ; 0046169b | DAT_005bb954
    FDIV double ptr [ESP]               ; 004616a1
    FXCH                                ; 004616a4
    FMUL ST1                            ; 004616a6
    FLD double ptr [ESP + 0x18]         ; 004616a8
    FMUL ST2                            ; 004616ac
    FLD double ptr [ESP + 0x10]         ; 004616ae
    FMULP ST3                           ; 004616b2
    FXCH                                ; 004616b4
    CALL FUN_005a3120                   ; 004616b6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 004616bb
    CALL FUN_005a3120                   ; 004616bd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 004616c2
    CALL FUN_005a3120                   ; 004616c4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 004616c9
    FISTP dword ptr [EDX]               ; 004616cb
    FXCH                                ; 004616cd
    FISTP dword ptr [EDX + 0x4]         ; 004616cf
    FISTP dword ptr [EDX + 0x8]         ; 004616d2
    JMP 0x0046165a                      ; 004616d5
        ;   XREF to: 0046165a (UNCONDITIONAL_JUMP)  ; LAB_0046165a

