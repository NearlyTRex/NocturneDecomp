; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; short * FUN_005747f0(int param_1,int param_2,short *param_3,int param_4,short *param_5,int param_6,int param_7,short *param_8,int param_9,short *param_10,int param_11)
;
; Local Variables:
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
;   FUN_0057b1e0 at 0057b2bf
;
; Called Functions:
;   FUN_005747b0
;   FUN_005747d0
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005747f0
        ;   Label: FUN_005747f0
    PUSH ESI                            ; 005747f1
    PUSH EDI                            ; 005747f2
    PUSH EBP                            ; 005747f3
    SUB ESP,0x4c                        ; 005747f4
    MOV EDX,dword ptr [ESP + 0x64]      ; 005747f7
    MOV ECX,dword ptr [ESP + 0x68]      ; 005747fb
    MOV EDI,dword ptr [ESP + 0x70]      ; 005747ff
    MOV ESI,dword ptr [ESP + 0x78]      ; 00574803
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00574807
    MOV EBX,dword ptr [ESP + 0x88]      ; 0057480b
    CMP EBX,0x1                         ; 00574812
    JL 0x005748b0                       ; 00574815
        ;   XREF to: 005748b0 (CONDITIONAL_JUMP)  ; LAB_005748b0
    CMP ECX,EAX                         ; 0057481b
    JNZ 0x005748b8                      ; 0057481d
        ;   XREF to: 005748b8 (CONDITIONAL_JUMP)  ; LAB_005748b8
    MOV EBP,dword ptr [ESP + 0x60]      ; 00574823
    CMP EBP,dword ptr [ESP + 0x74]      ; 00574827
    JNZ 0x005748b8                      ; 0057482b
        ;   XREF to: 005748b8 (CONDITIONAL_JUMP)  ; LAB_005748b8
    CMP EDX,ESI                         ; 00574831
    JNZ 0x005748b8                      ; 00574833
        ;   XREF to: 005748b8 (CONDITIONAL_JUMP)  ; LAB_005748b8
    CMP EDI,dword ptr [ESP + 0x84]      ; 00574839
    JZ 0x00574872                       ; 00574840
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    MOV EDX,EBP                         ; 00574842
    MOV EAX,EBP                         ; 00574844
    SAR EDX,0x1f                        ; 00574846
    SHL EDX,0x3                         ; 00574849
    SBB EAX,EDX                         ; 0057484c
    SAR EAX,0x3                         ; 0057484e
    MOV ECX,EAX                         ; 00574851
    IMUL ECX,EBX                        ; 00574853
    IMUL ECX,ESI                        ; 00574856
    MOV ESI,EDI                         ; 00574859
    MOV EDI,dword ptr [ESP + 0x84]      ; 0057485b
    PUSH EDI                            ; 00574862
    MOV EAX,ECX                         ; 00574863
    SHR ECX,0x2                         ; 00574865
    MOVSD.REP ES:EDI,ESI                ; 00574868
    MOV CL,AL                           ; 0057486a
    AND CL,0x3                          ; 0057486c
    MOVSB.REP ES:EDI,ESI                ; 0057486f
    POP EDI                             ; 00574871
    CMP dword ptr [ESP + 0x6c],0x0      ; 00574872
        ;   Label: LAB_00574872
    JZ 0x00574883                       ; 00574877
        ;   XREF to: 00574883 (CONDITIONAL_JUMP)  ; LAB_00574883
    CMP dword ptr [ESP + 0x80],0x0      ; 00574879
    JZ 0x00574894                       ; 00574881
        ;   XREF to: 00574894 (CONDITIONAL_JUMP)  ; LAB_00574894
    CMP dword ptr [ESP + 0x6c],0x0      ; 00574883
        ;   Label: LAB_00574883
    JNZ 0x005748b0                      ; 00574888
        ;   XREF to: 005748b0 (CONDITIONAL_JUMP)  ; LAB_005748b0
    CMP dword ptr [ESP + 0x80],0x0      ; 0057488a
    JZ 0x005748b0                       ; 00574892
        ;   XREF to: 005748b0 (CONDITIONAL_JUMP)  ; LAB_005748b0
    CMP dword ptr [ESP + 0x74],0x8      ; 00574894
        ;   Label: LAB_00574894
    JNZ 0x00574de4                      ; 00574899
        ;   XREF to: 00574de4 (CONDITIONAL_JUMP)  ; LAB_00574de4
    PUSH EBX                            ; 0057489f
    MOV EDX,dword ptr [ESP + 0x88]      ; 005748a0
    PUSH EDX                            ; 005748a7
    CALL FUN_005747b0                   ; 005748a8
        ;   XREF to: 005747b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005747b0()
    ADD ESP,0x8                         ; 005748ad
    ADD ESP,0x4c                        ; 005748b0
        ;   Label: LAB_005748b0
    POP EBP                             ; 005748b3
    POP EDI                             ; 005748b4
    POP ESI                             ; 005748b5
    POP EBX                             ; 005748b6
    RET                                 ; 005748b7
    MOV dword ptr [ESP + 0x44],ECX      ; 005748b8
        ;   Label: LAB_005748b8
    MOV dword ptr [ESP + 0x48],EAX      ; 005748bc
    FILD dword ptr [ESP + 0x44]         ; 005748c0
    FILD dword ptr [ESP + 0x48]         ; 005748c4
    FDIVP                               ; 005748c8
    MOV ECX,dword ptr [ESP + 0x60]      ; 005748ca
    FSTP float ptr [ESP + 0x18]         ; 005748ce
    CMP ECX,0x8                         ; 005748d2
    JNZ 0x00574b53                      ; 005748d5
        ;   XREF to: 00574b53 (CONDITIONAL_JUMP)  ; LAB_00574b53
    MOV EBP,dword ptr [ESP + 0x74]      ; 005748db
    MOV EAX,EDI                         ; 005748df
    CMP EBP,ECX                         ; 005748e1
    JNZ 0x00574a0d                      ; 005748e3
        ;   XREF to: 00574a0d (CONDITIONAL_JUMP)  ; LAB_00574a0d
    MOV ECX,dword ptr [ESP + 0x84]      ; 005748e9
    CMP EDX,0x1                         ; 005748f0
    JNZ 0x00574977                      ; 005748f3
        ;   XREF to: 00574977 (CONDITIONAL_JUMP)  ; LAB_00574977
    CMP ESI,EDX                         ; 005748f9
    JNZ 0x00574935                      ; 005748fb
        ;   XREF to: 00574935 (CONDITIONAL_JUMP)  ; LAB_00574935
    XOR EDX,EDX                         ; 005748fd
    CMP EDX,EBX                         ; 005748ff
    JGE 0x00574872                      ; 00574901
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574907
    MOV ESI,ECX                         ; 0057490b
    MOV dword ptr [ESP + 0x48],EDX      ; 0057490d
        ;   Label: LAB_0057490d
    FILD dword ptr [ESP + 0x48]         ; 00574911
    FMUL ST1                            ; 00574915
    CALL FUN_005c03a0                   ; 00574917
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 0057491c
    MOV EDI,dword ptr [ESP]             ; 0057491f
    INC ESI                             ; 00574922
    MOV CL,byte ptr [EDI + EAX*0x1]     ; 00574923
    INC EDX                             ; 00574926
    MOV byte ptr [ESI + -0x1],CL        ; 00574927
    CMP EDX,EBX                         ; 0057492a
    JL 0x0057490d                       ; 0057492c
        ;   XREF to: 0057490d (CONDITIONAL_JUMP)  ; LAB_0057490d
    FSTP ST0                            ; 0057492e
    JMP 0x00574872                      ; 00574930
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    XOR ESI,ESI                         ; 00574935
        ;   Label: LAB_00574935
    CMP ESI,EBX                         ; 00574937
    JGE 0x00574872                      ; 00574939
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    LEA EDX,[ESI + ESI*0x1]             ; 0057493f
    FLD float ptr [ESP + 0x18]          ; 00574942
    ADD EDX,ECX                         ; 00574946
    MOV dword ptr [ESP + 0x44],ESI      ; 00574948
        ;   Label: LAB_00574948
    FILD dword ptr [ESP + 0x44]         ; 0057494c
    FMUL ST1                            ; 00574950
    CALL FUN_005c03a0                   ; 00574952
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 00574957
    MOV ECX,dword ptr [ESP + 0x4]       ; 0057495b
    ADD EDX,0x2                         ; 0057495f
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00574962
    MOV byte ptr [EDX + -0x1],CL        ; 00574965
    INC ESI                             ; 00574968
    MOV byte ptr [EDX + -0x2],CL        ; 00574969
    CMP ESI,EBX                         ; 0057496c
    JL 0x00574948                       ; 0057496e
        ;   XREF to: 00574948 (CONDITIONAL_JUMP)  ; LAB_00574948
    FSTP ST0                            ; 00574970
    JMP 0x00574872                      ; 00574972
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    CMP ESI,0x1                         ; 00574977
        ;   Label: LAB_00574977
    JNZ 0x005749c8                      ; 0057497a
        ;   XREF to: 005749c8 (CONDITIONAL_JUMP)  ; LAB_005749c8
    XOR EDX,EDX                         ; 0057497c
    CMP EDX,EBX                         ; 0057497e
    JGE 0x00574872                      ; 00574980
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574986
    MOV ESI,ECX                         ; 0057498a
    MOV dword ptr [ESP + 0x44],EDX      ; 0057498c
        ;   Label: LAB_0057498c
    FILD dword ptr [ESP + 0x44]         ; 00574990
    FMUL ST1                            ; 00574994
    CALL FUN_005c03a0                   ; 00574996
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 0057499b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0057499f
    MOVSX EDI,byte ptr [EAX + ECX*0x2 + 0x1] ; 005749a3
    MOVSX ECX,byte ptr [EAX + ECX*0x2]  ; 005749a8
    ADD ECX,EDI                         ; 005749ac
    SAR ECX,0x1                         ; 005749ae
    MOV dword ptr [ESP + 0x44],ECX      ; 005749b0
    INC ESI                             ; 005749b4
    MOV CL,byte ptr [ESP + 0x44]        ; 005749b5
    INC EDX                             ; 005749b9
    MOV byte ptr [ESI + -0x1],CL        ; 005749ba
    CMP EDX,EBX                         ; 005749bd
    JL 0x0057498c                       ; 005749bf
        ;   XREF to: 0057498c (CONDITIONAL_JUMP)  ; LAB_0057498c
    FSTP ST0                            ; 005749c1
    JMP 0x00574872                      ; 005749c3
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    XOR EDX,EDX                         ; 005749c8
        ;   Label: LAB_005749c8
    CMP EDX,EBX                         ; 005749ca
    JGE 0x00574872                      ; 005749cc
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    LEA ESI,[EDX + EDX*0x1]             ; 005749d2
    FLD float ptr [ESP + 0x18]          ; 005749d5
    ADD ESI,ECX                         ; 005749d9
    MOV dword ptr [ESP + 0x44],EDX      ; 005749db
        ;   Label: LAB_005749db
    FILD dword ptr [ESP + 0x44]         ; 005749df
    FMUL ST1                            ; 005749e3
    CALL FUN_005c03a0                   ; 005749e5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 005749ea
    MOV EDI,dword ptr [ESP + 0xc]       ; 005749ee
    MOV CL,byte ptr [EAX + EDI*0x2]     ; 005749f2
    MOV byte ptr [ESI],CL               ; 005749f5
    ADD ESI,0x2                         ; 005749f7
    MOV CL,byte ptr [EAX + EDI*0x2 + 0x1] ; 005749fa
    INC EDX                             ; 005749fe
    MOV byte ptr [ESI + -0x1],CL        ; 005749ff
    CMP EDX,EBX                         ; 00574a02
    JL 0x005749db                       ; 00574a04
        ;   XREF to: 005749db (CONDITIONAL_JUMP)  ; LAB_005749db
    FSTP ST0                            ; 00574a06
    JMP 0x00574872                      ; 00574a08
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    MOV ECX,dword ptr [ESP + 0x84]      ; 00574a0d
        ;   Label: LAB_00574a0d
    CMP EDX,0x1                         ; 00574a14
    JNZ 0x00574ab3                      ; 00574a17
        ;   XREF to: 00574ab3 (CONDITIONAL_JUMP)  ; LAB_00574ab3
    CMP ESI,EDX                         ; 00574a1d
    JNZ 0x00574a66                      ; 00574a1f
        ;   XREF to: 00574a66 (CONDITIONAL_JUMP)  ; LAB_00574a66
    XOR EDX,EDX                         ; 00574a21
    CMP EDX,EBX                         ; 00574a23
    JGE 0x00574872                      ; 00574a25
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    LEA ESI,[EDX + EDX*0x1]             ; 00574a2b
    FLD float ptr [ESP + 0x18]          ; 00574a2e
    ADD ESI,ECX                         ; 00574a32
    MOV dword ptr [ESP + 0x44],EDX      ; 00574a34
        ;   Label: LAB_00574a34
    FILD dword ptr [ESP + 0x44]         ; 00574a38
    FMUL ST1                            ; 00574a3c
    CALL FUN_005c03a0                   ; 00574a3e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 00574a43
    MOV ECX,dword ptr [ESP + 0x10]      ; 00574a47
    MOVSX CX,byte ptr [ECX + EAX*0x1]   ; 00574a4b
    ADD ESI,0x2                         ; 00574a50
    SHL ECX,0x8                         ; 00574a53
    INC EDX                             ; 00574a56
    MOV word ptr [ESI + -0x2],CX        ; 00574a57
    CMP EDX,EBX                         ; 00574a5b
    JL 0x00574a34                       ; 00574a5d
        ;   XREF to: 00574a34 (CONDITIONAL_JUMP)  ; LAB_00574a34
    FSTP ST0                            ; 00574a5f
    JMP 0x00574872                      ; 00574a61
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    XOR ESI,ESI                         ; 00574a66
        ;   Label: LAB_00574a66
    CMP ESI,EBX                         ; 00574a68
    JGE 0x00574872                      ; 00574a6a
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    LEA EDX,[ESI*0x4 + 0x0]             ; 00574a70
    FLD float ptr [ESP + 0x18]          ; 00574a77
    ADD EDX,ECX                         ; 00574a7b
    MOV dword ptr [ESP + 0x48],ESI      ; 00574a7d
        ;   Label: LAB_00574a7d
    FILD dword ptr [ESP + 0x48]         ; 00574a81
    FMUL ST1                            ; 00574a85
    CALL FUN_005c03a0                   ; 00574a87
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x14]        ; 00574a8c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00574a90
    MOVSX CX,byte ptr [ECX + EAX*0x1]   ; 00574a94
    ADD EDX,0x4                         ; 00574a99
    SHL ECX,0x8                         ; 00574a9c
    MOV word ptr [EDX + -0x2],CX        ; 00574a9f
    INC ESI                             ; 00574aa3
    MOV word ptr [EDX + -0x4],CX        ; 00574aa4
    CMP ESI,EBX                         ; 00574aa8
    JL 0x00574a7d                       ; 00574aaa
        ;   XREF to: 00574a7d (CONDITIONAL_JUMP)  ; LAB_00574a7d
    FSTP ST0                            ; 00574aac
    JMP 0x00574872                      ; 00574aae
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    CMP ESI,0x1                         ; 00574ab3
        ;   Label: LAB_00574ab3
    JNZ 0x00574b05                      ; 00574ab6
        ;   XREF to: 00574b05 (CONDITIONAL_JUMP)  ; LAB_00574b05
    XOR EDX,EDX                         ; 00574ab8
    TEST EBX,EBX                        ; 00574aba
    JLE 0x00574872                      ; 00574abc
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574ac2
    MOV ESI,ECX                         ; 00574ac6
    MOV dword ptr [ESP + 0x48],EDX      ; 00574ac8
        ;   Label: LAB_00574ac8
    FILD dword ptr [ESP + 0x48]         ; 00574acc
    FMUL ST1                            ; 00574ad0
    CALL FUN_005c03a0                   ; 00574ad2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1c]        ; 00574ad7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00574adb
    MOVSX DI,byte ptr [EAX + ECX*0x2 + 0x1] ; 00574adf
    ADD ESI,0x2                         ; 00574ae5
    MOVSX CX,byte ptr [EAX + ECX*0x2]   ; 00574ae8
    SHL EDI,0x7                         ; 00574aed
    SHL ECX,0x7                         ; 00574af0
    INC EDX                             ; 00574af3
    ADD ECX,EDI                         ; 00574af4
    MOV word ptr [ESI + -0x2],CX        ; 00574af6
    CMP EDX,EBX                         ; 00574afa
    JL 0x00574ac8                       ; 00574afc
        ;   XREF to: 00574ac8 (CONDITIONAL_JUMP)  ; LAB_00574ac8
    FSTP ST0                            ; 00574afe
    JMP 0x00574872                      ; 00574b00
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    XOR ESI,ESI                         ; 00574b05
        ;   Label: LAB_00574b05
    TEST EBX,EBX                        ; 00574b07
    JLE 0x00574872                      ; 00574b09
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574b0f
    MOV EDX,ECX                         ; 00574b13
    MOV dword ptr [ESP + 0x48],ESI      ; 00574b15
        ;   Label: LAB_00574b15
    FILD dword ptr [ESP + 0x48]         ; 00574b19
    FMUL ST1                            ; 00574b1d
    CALL FUN_005c03a0                   ; 00574b1f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x24]        ; 00574b24
    MOV ECX,dword ptr [ESP + 0x24]      ; 00574b28
    MOVSX DI,byte ptr [EAX + ECX*0x2]   ; 00574b2c
    SHL EDI,0x8                         ; 00574b31
    MOV word ptr [EDX],DI               ; 00574b34
    ADD EDX,0x4                         ; 00574b37
    MOVSX CX,byte ptr [EAX + ECX*0x2 + 0x1] ; 00574b3a
    INC ESI                             ; 00574b40
    SHL ECX,0x8                         ; 00574b41
    MOV word ptr [EDX + -0x2],CX        ; 00574b44
    CMP ESI,EBX                         ; 00574b48
    JL 0x00574b15                       ; 00574b4a
        ;   XREF to: 00574b15 (CONDITIONAL_JUMP)  ; LAB_00574b15
    FSTP ST0                            ; 00574b4c
    JMP 0x00574872                      ; 00574b4e
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    MOV EAX,EDI                         ; 00574b53
        ;   Label: LAB_00574b53
    CMP dword ptr [ESP + 0x74],0x8      ; 00574b55
    JNZ 0x00574cb0                      ; 00574b5a
        ;   XREF to: 00574cb0 (CONDITIONAL_JUMP)  ; LAB_00574cb0
    CMP EDX,0x1                         ; 00574b60
    JNZ 0x00574c00                      ; 00574b63
        ;   XREF to: 00574c00 (CONDITIONAL_JUMP)  ; LAB_00574c00
    CMP ESI,EDX                         ; 00574b69
    JNZ 0x00574bb0                      ; 00574b6b
        ;   XREF to: 00574bb0 (CONDITIONAL_JUMP)  ; LAB_00574bb0
    XOR EDX,EDX                         ; 00574b6d
    TEST EBX,EBX                        ; 00574b6f
    JLE 0x00574872                      ; 00574b71
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574b77
    MOV ESI,dword ptr [ESP + 0x84]      ; 00574b7b
    MOV dword ptr [ESP + 0x44],EDX      ; 00574b82
        ;   Label: LAB_00574b82
    FILD dword ptr [ESP + 0x44]         ; 00574b86
    FMUL ST1                            ; 00574b8a
    CALL FUN_005c03a0                   ; 00574b8c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x28]        ; 00574b91
    MOV ECX,dword ptr [ESP + 0x28]      ; 00574b95
    MOVSX ECX,word ptr [EAX + ECX*0x2]  ; 00574b99
    INC ESI                             ; 00574b9d
    SAR ECX,0x8                         ; 00574b9e
    INC EDX                             ; 00574ba1
    MOV byte ptr [ESI + -0x1],CL        ; 00574ba2
    CMP EDX,EBX                         ; 00574ba5
    JL 0x00574b82                       ; 00574ba7
        ;   XREF to: 00574b82 (CONDITIONAL_JUMP)  ; LAB_00574b82
    FSTP ST0                            ; 00574ba9
    JMP 0x00574872                      ; 00574bab
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    XOR ESI,ESI                         ; 00574bb0
        ;   Label: LAB_00574bb0
    TEST EBX,EBX                        ; 00574bb2
    JLE 0x00574872                      ; 00574bb4
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574bba
    MOV EDX,dword ptr [ESP + 0x84]      ; 00574bbe
    MOV dword ptr [ESP + 0x48],ESI      ; 00574bc5
        ;   Label: LAB_00574bc5
    FILD dword ptr [ESP + 0x48]         ; 00574bc9
    FMUL ST1                            ; 00574bcd
    CALL FUN_005c03a0                   ; 00574bcf
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x2c]        ; 00574bd4
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00574bd8
    MOVSX ECX,word ptr [EAX + ECX*0x2]  ; 00574bdc
    SAR ECX,0x8                         ; 00574be0
    MOV dword ptr [ESP + 0x44],ECX      ; 00574be3
    ADD EDX,0x2                         ; 00574be7
    MOV CL,byte ptr [ESP + 0x44]        ; 00574bea
    MOV byte ptr [EDX + -0x1],CL        ; 00574bee
    INC ESI                             ; 00574bf1
    MOV byte ptr [EDX + -0x2],CL        ; 00574bf2
    CMP ESI,EBX                         ; 00574bf5
    JL 0x00574bc5                       ; 00574bf7
        ;   XREF to: 00574bc5 (CONDITIONAL_JUMP)  ; LAB_00574bc5
    FSTP ST0                            ; 00574bf9
    JMP 0x00574872                      ; 00574bfb
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    CMP ESI,0x1                         ; 00574c00
        ;   Label: LAB_00574c00
    JNZ 0x00574c50                      ; 00574c03
        ;   XREF to: 00574c50 (CONDITIONAL_JUMP)  ; LAB_00574c50
    XOR EDX,EDX                         ; 00574c05
    TEST EBX,EBX                        ; 00574c07
    JLE 0x00574872                      ; 00574c09
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574c0f
    MOV ESI,dword ptr [ESP + 0x84]      ; 00574c13
    MOV dword ptr [ESP + 0x48],EDX      ; 00574c1a
        ;   Label: LAB_00574c1a
    FILD dword ptr [ESP + 0x48]         ; 00574c1e
    FMUL ST1                            ; 00574c22
    CALL FUN_005c03a0                   ; 00574c24
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x30]        ; 00574c29
    MOV ECX,dword ptr [ESP + 0x30]      ; 00574c2d
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 00574c31
    SAR EDI,0x10                        ; 00574c34
    MOVSX ECX,word ptr [EAX + ECX*0x4]  ; 00574c37
    ADD ECX,EDI                         ; 00574c3b
    INC ESI                             ; 00574c3d
    SAR ECX,0x9                         ; 00574c3e
    INC EDX                             ; 00574c41
    MOV byte ptr [ESI + -0x1],CL        ; 00574c42
    CMP EDX,EBX                         ; 00574c45
    JL 0x00574c1a                       ; 00574c47
        ;   XREF to: 00574c1a (CONDITIONAL_JUMP)  ; LAB_00574c1a
    FSTP ST0                            ; 00574c49
    JMP 0x00574872                      ; 00574c4b
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    XOR EDX,EDX                         ; 00574c50
        ;   Label: LAB_00574c50
    TEST EBX,EBX                        ; 00574c52
    JLE 0x00574872                      ; 00574c54
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574c5a
    MOV ESI,dword ptr [ESP + 0x84]      ; 00574c5e
    MOV dword ptr [ESP + 0x48],EDX      ; 00574c65
        ;   Label: LAB_00574c65
    FILD dword ptr [ESP + 0x48]         ; 00574c69
    FMUL ST1                            ; 00574c6d
    CALL FUN_005c03a0                   ; 00574c6f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x34]        ; 00574c74
    MOV EDI,dword ptr [ESP + 0x34]      ; 00574c78
    MOVSX ECX,word ptr [EAX + EDI*0x4]  ; 00574c7c
    SAR ECX,0x8                         ; 00574c80
    MOV dword ptr [ESP + 0x44],ECX      ; 00574c83
    MOV CL,byte ptr [ESP + 0x44]        ; 00574c87
    MOV byte ptr [ESI],CL               ; 00574c8b
    MOV ECX,dword ptr [EAX + EDI*0x4]   ; 00574c8d
    SAR ECX,0x10                        ; 00574c90
    SAR ECX,0x8                         ; 00574c93
    MOV dword ptr [ESP + 0x44],ECX      ; 00574c96
    ADD ESI,0x2                         ; 00574c9a
    MOV CL,byte ptr [ESP + 0x44]        ; 00574c9d
    INC EDX                             ; 00574ca1
    MOV byte ptr [ESI + -0x1],CL        ; 00574ca2
    CMP EDX,EBX                         ; 00574ca5
    JL 0x00574c65                       ; 00574ca7
        ;   XREF to: 00574c65 (CONDITIONAL_JUMP)  ; LAB_00574c65
    FSTP ST0                            ; 00574ca9
    JMP 0x00574872                      ; 00574cab
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    CMP EDX,0x1                         ; 00574cb0
        ;   Label: LAB_00574cb0
    JNZ 0x00574d47                      ; 00574cb3
        ;   XREF to: 00574d47 (CONDITIONAL_JUMP)  ; LAB_00574d47
    CMP ESI,EDX                         ; 00574cb9
    JNZ 0x00574d00                      ; 00574cbb
        ;   XREF to: 00574d00 (CONDITIONAL_JUMP)  ; LAB_00574d00
    XOR EDX,EDX                         ; 00574cbd
    TEST EBX,EBX                        ; 00574cbf
    JLE 0x00574872                      ; 00574cc1
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574cc7
    MOV ESI,dword ptr [ESP + 0x84]      ; 00574ccb
    MOV dword ptr [ESP + 0x44],EDX      ; 00574cd2
        ;   Label: LAB_00574cd2
    FILD dword ptr [ESP + 0x44]         ; 00574cd6
    FMUL ST1                            ; 00574cda
    CALL FUN_005c03a0                   ; 00574cdc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x38]        ; 00574ce1
    MOV ECX,dword ptr [ESP + 0x38]      ; 00574ce5
    ADD ESI,0x2                         ; 00574ce9
    MOV CX,word ptr [EAX + ECX*0x2]     ; 00574cec
    INC EDX                             ; 00574cf0
    MOV word ptr [ESI + -0x2],CX        ; 00574cf1
    CMP EDX,EBX                         ; 00574cf5
    JL 0x00574cd2                       ; 00574cf7
        ;   XREF to: 00574cd2 (CONDITIONAL_JUMP)  ; LAB_00574cd2
    FSTP ST0                            ; 00574cf9
    JMP 0x00574872                      ; 00574cfb
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    XOR ESI,ESI                         ; 00574d00
        ;   Label: LAB_00574d00
    TEST EBX,EBX                        ; 00574d02
    JLE 0x00574872                      ; 00574d04
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574d0a
    MOV EDX,dword ptr [ESP + 0x84]      ; 00574d0e
    MOV dword ptr [ESP + 0x44],ESI      ; 00574d15
        ;   Label: LAB_00574d15
    FILD dword ptr [ESP + 0x44]         ; 00574d19
    FMUL ST1                            ; 00574d1d
    CALL FUN_005c03a0                   ; 00574d1f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x3c]        ; 00574d24
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00574d28
    ADD EDX,0x4                         ; 00574d2c
    MOV CX,word ptr [EAX + ECX*0x2]     ; 00574d2f
    MOV word ptr [EDX + -0x2],CX        ; 00574d33
    INC ESI                             ; 00574d37
    MOV word ptr [EDX + -0x4],CX        ; 00574d38
    CMP ESI,EBX                         ; 00574d3c
    JL 0x00574d15                       ; 00574d3e
        ;   XREF to: 00574d15 (CONDITIONAL_JUMP)  ; LAB_00574d15
    FSTP ST0                            ; 00574d40
    JMP 0x00574872                      ; 00574d42
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    CMP ESI,0x1                         ; 00574d47
        ;   Label: LAB_00574d47
    JNZ 0x00574d99                      ; 00574d4a
        ;   XREF to: 00574d99 (CONDITIONAL_JUMP)  ; LAB_00574d99
    XOR EDX,EDX                         ; 00574d4c
    TEST EBX,EBX                        ; 00574d4e
    JLE 0x00574872                      ; 00574d50
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574d56
    MOV ESI,dword ptr [ESP + 0x84]      ; 00574d5a
    MOV dword ptr [ESP + 0x44],EDX      ; 00574d61
        ;   Label: LAB_00574d61
    FILD dword ptr [ESP + 0x44]         ; 00574d65
    FMUL ST1                            ; 00574d69
    CALL FUN_005c03a0                   ; 00574d6b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x40]        ; 00574d70
    MOV ECX,dword ptr [ESP + 0x40]      ; 00574d74
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 00574d78
    SAR EDI,0x10                        ; 00574d7b
    MOVSX ECX,word ptr [EAX + ECX*0x4]  ; 00574d7e
    ADD ECX,EDI                         ; 00574d82
    ADD ESI,0x2                         ; 00574d84
    SAR ECX,0x1                         ; 00574d87
    INC EDX                             ; 00574d89
    MOV word ptr [ESI + -0x2],CX        ; 00574d8a
    CMP EDX,EBX                         ; 00574d8e
    JL 0x00574d61                       ; 00574d90
        ;   XREF to: 00574d61 (CONDITIONAL_JUMP)  ; LAB_00574d61
    FSTP ST0                            ; 00574d92
    JMP 0x00574872                      ; 00574d94
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    XOR ESI,ESI                         ; 00574d99
        ;   Label: LAB_00574d99
    TEST EBX,EBX                        ; 00574d9b
    JLE 0x00574872                      ; 00574d9d
        ;   XREF to: 00574872 (CONDITIONAL_JUMP)  ; LAB_00574872
    FLD float ptr [ESP + 0x18]          ; 00574da3
    MOV EDX,dword ptr [ESP + 0x84]      ; 00574da7
    MOV dword ptr [ESP + 0x44],ESI      ; 00574dae
        ;   Label: LAB_00574dae
    FILD dword ptr [ESP + 0x44]         ; 00574db2
    FMUL ST1                            ; 00574db6
    CALL FUN_005c03a0                   ; 00574db8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x20]        ; 00574dbd
    MOV ECX,dword ptr [ESP + 0x20]      ; 00574dc1
    MOV DI,word ptr [EAX + ECX*0x4]     ; 00574dc5
    MOV word ptr [EDX],DI               ; 00574dc9
    ADD EDX,0x4                         ; 00574dcc
    MOV CX,word ptr [EAX + ECX*0x4 + 0x2] ; 00574dcf
    INC ESI                             ; 00574dd4
    MOV word ptr [EDX + -0x2],CX        ; 00574dd5
    CMP ESI,EBX                         ; 00574dd9
    JL 0x00574dae                       ; 00574ddb
        ;   XREF to: 00574dae (CONDITIONAL_JUMP)  ; LAB_00574dae
    FSTP ST0                            ; 00574ddd
    JMP 0x00574872                      ; 00574ddf
        ;   XREF to: 00574872 (UNCONDITIONAL_JUMP)  ; LAB_00574872
    PUSH EBX                            ; 00574de4
        ;   Label: LAB_00574de4
    MOV EAX,dword ptr [ESP + 0x88]      ; 00574de5
    PUSH EAX                            ; 00574dec
    CALL FUN_005747d0                   ; 00574ded
        ;   XREF to: 005747d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005747d0()
    ADD ESP,0x8                         ; 00574df2
    ADD ESP,0x4c                        ; 00574df5
    POP EBP                             ; 00574df8
    POP EDI                             ; 00574df9
    POP ESI                             ; 00574dfa
    POP EBX                             ; 00574dfb
    RET                                 ; 00574dfc

