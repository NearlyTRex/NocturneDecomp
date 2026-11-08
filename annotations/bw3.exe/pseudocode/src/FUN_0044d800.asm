; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d800(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
;   FUN_00535da0 at 00535ebc
;
; Referenced Globals:
;   undefined4 DAT_005b9eee
;   undefined4 DAT_005b9ef6
;   undefined4 DAT_00b9e54c
;   undefined4 DAT_00b9e550
;   undefined4 DAT_0134017c
;   undefined4 DAT_01340584
;   undefined4 DAT_01340588
;   undefined4 DAT_0134058c
;   undefined4 DAT_01340590
;   undefined4 DAT_0134059c
;   undefined4 DAT_013405a8
;   undefined4 DAT_013405b0
;   undefined4 DAT_01c60dac
;
; Called Functions:
;   FUN_0044a3e0
;   FUN_0045d170
;   FUN_005a3120
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d800
        ;   Label: FUN_0044d800
    PUSH ESI                            ; 0044d801
    PUSH EDI                            ; 0044d802
    PUSH EBP                            ; 0044d803
    MOV EBP,ESP                         ; 0044d804
    SUB ESP,0x50                        ; 0044d806
    AND ESP,0xfffffff8                  ; 0044d809
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d80c
    MOV ESI,EAX                         ; 0044d80f
    MOV ECX,0xa                         ; 0044d811
    MOV EDI,0x1340588                   ; 0044d816
    LEA ESI,[ESI + 0x10]                ; 0044d81b
    XOR EBX,EBX                         ; 0044d81e
    MOV [0x01340584],EAX                ; 0044d820 | DAT_01340584
    MOVSD.REP ES:EDI,ESI                ; 0044d825 | DAT_01340588 | DAT_0134058c
    ADD EBX,0x4                         ; 0044d827
        ;   Label: LAB_0044d827
    CALL FUN_005a35cc                   ; 0044d82a
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    AND EAX,0xff                        ; 0044d82f
    MOV dword ptr [EBX + 0x1340180],EAX ; 0044d834
    CMP EBX,0x400                       ; 0044d83a
    JNZ 0x0044d827                      ; 0044d840
        ;   XREF to: 0044d827 (CONDITIONAL_JUMP)  ; LAB_0044d827
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044d842
    MOV ECX,dword ptr [EAX + 0x154]     ; 0044d845
    XOR EDX,EDX                         ; 0044d84b
    TEST ECX,ECX                        ; 0044d84d
    JLE 0x0044d880                      ; 0044d84f
        ;   XREF to: 0044d880 (CONDITIONAL_JUMP)  ; LAB_0044d880
    XOR EAX,EAX                         ; 0044d851
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044d853
        ;   Label: LAB_0044d853
    MOV ECX,dword ptr [ECX + 0x150]     ; 0044d856
    XOR EBX,EBX                         ; 0044d85c
    MOV dword ptr [EAX + 0x14fb300],ECX ; 0044d85e
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044d864
    MOV dword ptr [EAX + 0x14fb6c0],EBX ; 0044d867
    INC EDX                             ; 0044d86d
    MOV ESI,dword ptr [ECX + 0x154]     ; 0044d86e
    ADD EAX,0x4                         ; 0044d874
    CMP EDX,ESI                         ; 0044d877
    JL 0x0044d853                       ; 0044d879
        ;   XREF to: 0044d853 (CONDITIONAL_JUMP)  ; LAB_0044d853
    LEA EAX,[EAX]                       ; 0044d87b
    MOV ECX,ECX                         ; 0044d87e
    MOV EDI,dword ptr [EBP + 0x18]      ; 0044d880
        ;   Label: LAB_0044d880
    PUSH EDI                            ; 0044d883
    CALL FUN_0045d170                   ; 0044d884
        ;   XREF to: 0045d170 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d170()
    FLD float ptr [EDI + 0x140]         ; 0044d889
    FMUL double ptr [0x005b9eee]        ; 0044d88f | DAT_005b9eee
    ADD ESP,0x4                         ; 0044d895
    FLD ST0                             ; 0044d898
    FLDLG2                              ; 0044d89a
    FXCH                                ; 0044d89c
    FYL2X                               ; 0044d89e
    FMUL double ptr [0x005b9ef6]        ; 0044d8a0 | DAT_005b9ef6
    FXCH                                ; 0044d8a6
    CALL FUN_005a3120                   ; 0044d8a8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    XOR EAX,EAX                         ; 0044d8ad
    FXCH                                ; 0044d8af
    CALL FUN_005a3120                   ; 0044d8b1
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV dword ptr [ESP + 0x30],EAX      ; 0044d8b6
    FISTP dword ptr [0x00b9e550]        ; 0044d8ba | DAT_00b9e550
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044d8c0
    MOV EDX,dword ptr [0x00b9e550]      ; 0044d8c3 | DAT_00b9e550
    FISTP dword ptr [0x00b9e54c]        ; 0044d8c9 | DAT_00b9e54c
    DEC EDX                             ; 0044d8cf
    MOV ECX,dword ptr [EAX + 0x154]     ; 0044d8d0
    MOV dword ptr [0x00b9e550],EDX      ; 0044d8d6 | DAT_00b9e550
    TEST ECX,ECX                        ; 0044d8dc
    JLE 0x0044d97b                      ; 0044d8de
        ;   XREF to: 0044d97b (CONDITIONAL_JUMP)  ; LAB_0044d97b
    MOV EDI,0xa38388                    ; 0044d8e4
    MOV EAX,0x14fba80                   ; 0044d8e9
    MOV EDX,0xb2cfc8                    ; 0044d8ee
    XOR ESI,ESI                         ; 0044d8f3
    MOV ECX,0x956488                    ; 0044d8f5
    MOV dword ptr [ESP + 0x34],ESI      ; 0044d8fa
    MOV dword ptr [ESP + 0x28],EDI      ; 0044d8fe
    MOV dword ptr [ESP + 0x24],EAX      ; 0044d902
    MOV dword ptr [ESP + 0x20],EDX      ; 0044d906
    MOV dword ptr [ESP + 0x2c],ECX      ; 0044d90a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044d90e
        ;   Label: LAB_0044d90e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044d911
    MOV EBX,dword ptr [EDX + 0x150]     ; 0044d915
    CMP EBX,dword ptr [EAX + 0x14fb300] ; 0044d91b
    JNZ 0x0044d98c                      ; 0044d921
        ;   XREF to: 0044d98c (CONDITIONAL_JUMP)  ; LAB_0044d98c
    MOV EBX,dword ptr [ESP + 0x34]      ; 0044d923
        ;   Label: LAB_0044d923
    MOV ESI,dword ptr [ESP + 0x28]      ; 0044d927
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044d92b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044d92f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0044d933
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044d937
    ADD EBX,0x4                         ; 0044d93b
    ADD ESI,0xf00                       ; 0044d93e
    ADD EDI,0x500                       ; 0044d944
    ADD EAX,0x140                       ; 0044d94a
    ADD EDX,0xf00                       ; 0044d94f
    INC ECX                             ; 0044d955
    MOV dword ptr [ESP + 0x34],EBX      ; 0044d956
    MOV dword ptr [ESP + 0x28],ESI      ; 0044d95a
    MOV dword ptr [ESP + 0x2c],EDX      ; 0044d95e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044d962
    MOV dword ptr [ESP + 0x24],EDI      ; 0044d965
    MOV dword ptr [ESP + 0x20],EAX      ; 0044d969
    MOV EBX,dword ptr [EDX + 0x154]     ; 0044d96d
    MOV dword ptr [ESP + 0x30],ECX      ; 0044d973
    CMP ECX,EBX                         ; 0044d977
    JL 0x0044d90e                       ; 0044d979
        ;   XREF to: 0044d90e (CONDITIONAL_JUMP)  ; LAB_0044d90e
    MOV dword ptr [0x0134017c],0x1      ; 0044d97b | DAT_0134017c
        ;   Label: LAB_0044d97b
    MOV ESP,EBP                         ; 0044d985
    POP EBP                             ; 0044d987
    POP EDI                             ; 0044d988
    POP ESI                             ; 0044d989
    POP EBX                             ; 0044d98a
    RET                                 ; 0044d98b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044d98c
        ;   Label: LAB_0044d98c
    MOV EAX,dword ptr [EAX + 0x14fb300] ; 0044d990
    MOV dword ptr [ESP + 0x48],EAX      ; 0044d996
    MOV ESI,dword ptr [ESP + 0x48]      ; 0044d99a
    IMUL EBX,ESI,0xc                    ; 0044d99e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044d9a1
    MOV EAX,dword ptr [EAX + 0x14fb6c0] ; 0044d9a5
    MOV dword ptr [ESP + 0x38],EAX      ; 0044d9ab
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044d9af
    ADD EAX,EBX                         ; 0044d9b3
    MOV dword ptr [ESP + 0x44],EAX      ; 0044d9b5
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044d9b9
    ADD EAX,ESI                         ; 0044d9bd
    MOV EDX,dword ptr [ESP + 0x24]      ; 0044d9bf
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044d9c3
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044d9c7
    MOV CL,byte ptr [0x013405b0]        ; 0044d9ce | DAT_013405b0
    ADD EDX,EAX                         ; 0044d9d4
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044d9d6
    MOV dword ptr [ESP + 0x3c],EDX      ; 0044d9da
    MOV EDX,ESI                         ; 0044d9de
    SHL EAX,CL                          ; 0044d9e0
    SHL EDX,CL                          ; 0044d9e2
    MOV EAX,dword ptr [EAX*0x4 + 0x1c60dac] ; 0044d9e4 | DAT_01c60dac
    SHL EDX,0x2                         ; 0044d9eb
    ADD EAX,EDX                         ; 0044d9ee
    MOV dword ptr [ESP + 0x40],EAX      ; 0044d9f0
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044d9f4
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044d9f8
    ADD EBX,EAX                         ; 0044d9fc
    CMP ESI,EDX                         ; 0044d9fe
    JGE 0x0044d923                      ; 0044da00
        ;   XREF to: 0044d923 (CONDITIONAL_JUMP)  ; LAB_0044d923
        ;   Label: LAB_0044da00
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0044da06
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044da0a
    MOV ESI,dword ptr [EDX]             ; 0044da0e
    CMP ESI,dword ptr [EAX]             ; 0044da10
    JBE 0x0044db18                      ; 0044da12
        ;   XREF to: 0044db18 (CONDITIONAL_JUMP)  ; LAB_0044db18
    FLD float ptr [EBX + 0x4]           ; 0044da18
    FMUL float ptr [0x0134059c]         ; 0044da1b | DAT_0134059c
    FLD float ptr [EBX]                 ; 0044da21
    FMUL float ptr [0x01340590]         ; 0044da23 | DAT_01340590
    FADDP                               ; 0044da29
    FLD float ptr [EBX + 0x8]           ; 0044da2b
    FMUL float ptr [0x013405a8]         ; 0044da2e | DAT_013405a8
    FADDP                               ; 0044da34
    FLDZ                                ; 0044da36
    FCOMPP                              ; 0044da38
    FNSTSW AX                           ; 0044da3a
    SAHF                                ; 0044da3c
    JA 0x0044db18                       ; 0044da3d
        ;   XREF to: 0044db18 (CONDITIONAL_JUMP)  ; LAB_0044db18
    MOV EDI,dword ptr [ESP + 0x44]      ; 0044da43
    PUSH EDI                            ; 0044da47
    MOV EAX,[0x01340584]                ; 0044da48 | DAT_01340584
    PUSH EAX                            ; 0044da4d
    LEA ESI,[ESP + 0x8]                 ; 0044da4e
    LEA EDI,[ESP + 0x14]                ; 0044da52
    CALL FUN_0044a3e0                   ; 0044da56
        ;   XREF to: 0044a3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044a3e0()
    LEA ESI,[ESP + 0x8]                 ; 0044da5b
    ADD ESP,0x8                         ; 0044da5f
    MOVSD ES:EDI,ESI                    ; 0044da62
    MOVSD ES:EDI,ESI                    ; 0044da63
    MOVSD ES:EDI,ESI                    ; 0044da64
    CMP dword ptr [ESP + 0x14],0x0      ; 0044da65
    JLE 0x0044db18                      ; 0044da6a
        ;   XREF to: 0044db18 (CONDITIONAL_JUMP)  ; LAB_0044db18
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044da70
    MOV EAX,[0x01340584]                ; 0044da74 | DAT_01340584
    SAR EDX,0x10                        ; 0044da79
    IMUL EDX,dword ptr [EAX + 0x1cc0]   ; 0044da7c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044da83
    SAR ECX,0x10                        ; 0044da87
    ADD EDX,ECX                         ; 0044da8a
    LEA ESI,[EDX + EDX*0x1]             ; 0044da8c
    MOV EDX,dword ptr [EAX + 0x2f94]    ; 0044da8f
    MOV DX,word ptr [EDX + ESI*0x1]     ; 0044da95
    MOV ESI,dword ptr [0x00b9e54c]      ; 0044da99 | DAT_00b9e54c
    AND EDX,0xffff                      ; 0044da9f
    CMP EDX,ESI                         ; 0044daa5
    JGE 0x0044db18                      ; 0044daa7
        ;   XREF to: 0044db18 (CONDITIONAL_JUMP)  ; LAB_0044db18
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044daa9
    LEA ECX,[EDX + 0x80]                ; 0044daad
    CMP ECX,EDI                         ; 0044dab3
    JLE 0x0044db18                      ; 0044dab5
        ;   XREF to: 0044db18 (CONDITIONAL_JUMP)  ; LAB_0044db18
    MOV ESI,dword ptr [ESP + 0xc]       ; 0044dab7
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 0044dabb
    SAR ESI,CL                          ; 0044dac1
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 0044dac3
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044dac9
    AND ESI,ECX                         ; 0044dacd
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 0044dacf
    SAR EDI,CL                          ; 0044dad5
    MOV ECX,EDI                         ; 0044dad7
    MOV EDI,dword ptr [EAX + 0x1c68]    ; 0044dad9
    AND EDI,ECX                         ; 0044dadf
    MOV CL,byte ptr [EAX + 0x1c60]      ; 0044dae1
    SHL EDI,CL                          ; 0044dae7
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 0044dae9
    LEA ECX,[EDI + ESI*0x1]             ; 0044daef
    ADD EAX,ECX                         ; 0044daf2
    XOR ECX,ECX                         ; 0044daf4
    MOV CL,byte ptr [EAX]               ; 0044daf6
    MOV EAX,[0x00b9e54c]                ; 0044daf8 | DAT_00b9e54c
    SUB EAX,EDX                         ; 0044dafd
    MOV EDX,EAX                         ; 0044daff
    IMUL EDX,ECX                        ; 0044db01
    MOV CL,byte ptr [0x00b9e550]        ; 0044db04 | DAT_00b9e550
    SAR EDX,CL                          ; 0044db0a
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0044db0c
    XOR EAX,EAX                         ; 0044db10
    MOV AL,byte ptr [ECX]               ; 0044db12
    ADD EAX,EDX                         ; 0044db14
    MOV byte ptr [ECX],AL               ; 0044db16
    MOV EAX,0x1                         ; 0044db18
        ;   Label: LAB_0044db18
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0044db1d
    MOV EDI,dword ptr [ESP + 0x44]      ; 0044db21
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044db25
    MOV CL,byte ptr [0x013405b0]        ; 0044db29 | DAT_013405b0
    ADD EBX,0xc                         ; 0044db2f
    ADD ESI,0x4                         ; 0044db32
    ADD EDI,0xc                         ; 0044db35
    INC EDX                             ; 0044db38
    SHL EAX,CL                          ; 0044db39
    MOV ECX,dword ptr [ESP + 0x40]      ; 0044db3b
    SHL EAX,0x2                         ; 0044db3f
    MOV dword ptr [ESP + 0x3c],ESI      ; 0044db42
    MOV dword ptr [ESP + 0x44],EDI      ; 0044db46
    MOV dword ptr [ESP + 0x48],EDX      ; 0044db4a
    ADD ECX,EAX                         ; 0044db4e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044db50
    MOV dword ptr [ESP + 0x40],ECX      ; 0044db54
    INC EAX                             ; 0044db58
    MOV ECX,dword ptr [ESP + 0x38]      ; 0044db59
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044db5d
    CMP EDX,ECX                         ; 0044db61
    JMP 0x0044da00                      ; 0044db63
        ;   XREF to: 0044da00 (UNCONDITIONAL_JUMP)  ; LAB_0044da00

