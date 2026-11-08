; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00553680(int param_1)
;
; Local Variables:
; undefined        Stack[-0x194]:1  local_194
;
; XREF[1]:
;   FUN_004d8d60 at 004d8ffa
;
; Referenced Globals:
;   undefined4 s_DeviceName_005e92cd+1
;   TerminatedCString s_RecordingDeviceName_005e92d9
;   TerminatedCString s_AccelEnabled_005e92ed
;   TerminatedCString s_MaxSwLatency_005e92fa
;   undefined4 DAT_005e9307
;   TerminatedCString s_Channels_005e930c
;   undefined4 DAT_005e9315
;   undefined4 DAT_005e9318
;   TerminatedCString s_SfxChannel_dEnabled_005e931d
;   TerminatedCString s_SfxChannel_dVol_005e9331
;   undefined4 DAT_0061bc94
;   undefined4 DAT_0061bce0
;   undefined4 DAT_0061bce4
;
; Called Functions:
;   FUN_004d8b20
;   FUN_004d8bc0
;   FUN_00550bc0
;   FUN_00550bd0
;   FUN_00551100
;   FUN_00551190
;   FUN_00551220
;   FUN_005512a0
;   FUN_005526f0
;   FUN_00552790
;   FUN_00552890
;   FUN_00552920
;   FUN_00552aa0
;   FUN_00552b40
;   FUN_00552b50
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553680
        ;   Label: FUN_00553680
    PUSH ESI                            ; 00553681
    PUSH EDI                            ; 00553682
    PUSH EBP                            ; 00553683
    SUB ESP,0x3a4                       ; 00553684
    MOV EBP,dword ptr [ESP + 0x3b8]     ; 0055368a
    MOV ECX,0x40                        ; 00553691
    LEA EDI,[ESP + 0x220]               ; 00553696
    PUSH 0x100                          ; 0055369d
    LEA EAX,[ESP + 0x224]               ; 005536a2
    MOV ESI,0x61bce0                    ; 005536a9 | DAT_0061bce0
    PUSH EAX                            ; 005536ae
    MOVSD.REP ES:EDI,ESI                ; 005536af | DAT_0061bce0 | DAT_0061bce4
    PUSH 0x5e92ce                       ; 005536b1 | s_DeviceName_005e92cd+1
    MOV EBX,dword ptr [EBP + 0x200]     ; 005536b6
    PUSH EBP                            ; 005536bc
    CALL dword ptr [EBX + 0x4]          ; 005536bd
    ADD ESP,0x10                        ; 005536c0
    CALL FUN_00552c40                   ; 005536c3
        ;   XREF to: 00552c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00552c40()
    XOR EBX,EBX                         ; 005536c8
    CALL FUN_00552890                   ; 005536ca
        ;   XREF to: 00552890 (UNCONDITIONAL_CALL)  ; undefined FUN_00552890()
        ;   Label: LAB_005536ca
    CMP EBX,EAX                         ; 005536cf
    JL 0x0055373e                       ; 005536d1
        ;   XREF to: 0055373e (CONDITIONAL_JUMP)  ; LAB_0055373e
    PUSH 0x100                          ; 005536d3
        ;   Label: LAB_005536d3
    LEA EBX,[ESP + 0x224]               ; 005536d8
    XOR AH,AH                           ; 005536df
    PUSH EBX                            ; 005536e1
    MOV byte ptr [ESP + 0x228],AH       ; 005536e2
    PUSH 0x5e92d9                       ; 005536e9 | = "RecordingDeviceName"
    MOV EAX,dword ptr [EBP + 0x200]     ; 005536ee
    PUSH EBP                            ; 005536f4
    CALL dword ptr [EAX + 0x4]          ; 005536f5
    ADD ESP,0x10                        ; 005536f8
    XOR EBX,EBX                         ; 005536fb
    CALL FUN_00552f10                   ; 005536fd
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f10()
    CALL FUN_00552d00                   ; 00553702
        ;   XREF to: 00552d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00552d00()
        ;   Label: LAB_00553702
    CMP EBX,EAX                         ; 00553707
    JGE 0x0055377a                      ; 00553709
        ;   XREF to: 0055377a (CONDITIONAL_JUMP)  ; LAB_0055377a
    LEA EAX,[ESP + 0x118]               ; 0055370b
    PUSH EAX                            ; 00553712
    PUSH EBX                            ; 00553713
    CALL FUN_00552d60                   ; 00553714
        ;   XREF to: 00552d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00552d60()
    ADD ESP,0x8                         ; 00553719
    LEA EAX,[ESP + 0x220]               ; 0055371c
    PUSH EAX                            ; 00553723
    LEA EAX,[ESP + 0x11c]               ; 00553724
    PUSH EAX                            ; 0055372b
    CALL FUN_005b8130                   ; 0055372c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00553731
    TEST EAX,EAX                        ; 00553734
    JZ 0x00553771                       ; 00553736
        ;   XREF to: 00553771 (CONDITIONAL_JUMP)  ; LAB_00553771
    INC EBX                             ; 00553738
    JMP 0x00553702                      ; 00553739
        ;   XREF to: 00553702 (UNCONDITIONAL_JUMP)  ; LAB_00553702
    INC EBX                             ; 0055373b
        ;   Label: LAB_0055373b
    JMP 0x005536ca                      ; 0055373c
        ;   XREF to: 005536ca (UNCONDITIONAL_JUMP)  ; LAB_005536ca
    MOV EAX,ESP                         ; 0055373e
        ;   Label: LAB_0055373e
    PUSH EAX                            ; 00553740
    PUSH EBX                            ; 00553741
    CALL FUN_00552920                   ; 00553742
        ;   XREF to: 00552920 (UNCONDITIONAL_CALL)  ; undefined FUN_00552920()
    ADD ESP,0x8                         ; 00553747
    LEA EAX,[ESP + 0x220]               ; 0055374a
    PUSH EAX                            ; 00553751
    LEA EAX,[ESP + 0x4]                 ; 00553752
    PUSH EAX                            ; 00553756
    CALL FUN_005b8130                   ; 00553757
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0055375c
    TEST EAX,EAX                        ; 0055375f
    JNZ 0x0055373b                      ; 00553761
        ;   XREF to: 0055373b (CONDITIONAL_JUMP)  ; LAB_0055373b
    PUSH EBX                            ; 00553763
    CALL FUN_00552aa0                   ; 00553764
        ;   XREF to: 00552aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00552aa0()
    ADD ESP,0x4                         ; 00553769
    JMP 0x005536d3                      ; 0055376c
        ;   XREF to: 005536d3 (UNCONDITIONAL_JUMP)  ; LAB_005536d3
    PUSH EBX                            ; 00553771
        ;   Label: LAB_00553771
    CALL FUN_00552e40                   ; 00553772
        ;   XREF to: 00552e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00552e40()
    ADD ESP,0x4                         ; 00553777
    CALL FUN_00552b40                   ; 0055377a
        ;   XREF to: 00552b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00552b40()
        ;   Label: LAB_0055377a
    MOV dword ptr [ESP + 0x384],EAX     ; 0055377f
    LEA EAX,[ESP + 0x384]               ; 00553786
    PUSH EAX                            ; 0055378d
    PUSH 0x5e92ed                       ; 0055378e | = "AccelEnabled"
    PUSH EBP                            ; 00553793
    CALL FUN_004d8b20                   ; 00553794
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b20()
    ADD ESP,0xc                         ; 00553799
    MOV EDX,dword ptr [ESP + 0x384]     ; 0055379c
    PUSH EDX                            ; 005537a3
    CALL FUN_00552b50                   ; 005537a4
        ;   XREF to: 00552b50 (UNCONDITIONAL_CALL)  ; undefined FUN_00552b50()
    ADD ESP,0x4                         ; 005537a9
    CALL FUN_00553600                   ; 005537ac
        ;   XREF to: 00553600 (UNCONDITIONAL_CALL)  ; undefined FUN_00553600()
    MOV dword ptr [ESP + 0x3a0],EAX     ; 005537b1
    LEA EAX,[ESP + 0x388]               ; 005537b8
    PUSH EAX                            ; 005537bf
    PUSH 0x5e92fa                       ; 005537c0 | = "MaxSwLatency"
    FLD float ptr [ESP + 0x3a8]         ; 005537c5
    PUSH EBP                            ; 005537cc
    FSTP float ptr [ESP + 0x394]        ; 005537cd
    CALL FUN_004d8bc0                   ; 005537d4
        ;   XREF to: 004d8bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8bc0()
    ADD ESP,0xc                         ; 005537d9
    PUSH dword ptr [ESP + 0x388]        ; 005537dc
    CALL FUN_00553610                   ; 005537e3
        ;   XREF to: 00553610 (UNCONDITIONAL_CALL)  ; undefined FUN_00553610()
    ADD ESP,0x4                         ; 005537e8
    LEA EAX,[ESP + 0x394]               ; 005537eb
    PUSH EAX                            ; 005537f2
    LEA EAX,[ESP + 0x394]               ; 005537f3
    PUSH EAX                            ; 005537fa
    LEA EAX,[ESP + 0x394]               ; 005537fb
    PUSH EAX                            ; 00553802
    CALL FUN_00552790                   ; 00553803
        ;   XREF to: 00552790 (UNCONDITIONAL_CALL)  ; undefined FUN_00552790()
    ADD ESP,0xc                         ; 00553808
    LEA EAX,[ESP + 0x38c]               ; 0055380b
    PUSH EAX                            ; 00553812
    PUSH 0x5e9307                       ; 00553813 | DAT_005e9307
    PUSH EBP                            ; 00553818
    CALL FUN_004d8b20                   ; 00553819
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b20()
    ADD ESP,0xc                         ; 0055381e
    LEA EAX,[ESP + 0x390]               ; 00553821
    PUSH EAX                            ; 00553828
    PUSH 0x5e930c                       ; 00553829 | = "Channels"
    PUSH EBP                            ; 0055382e
    CALL FUN_004d8b20                   ; 0055382f
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b20()
    ADD ESP,0xc                         ; 00553834
    LEA EAX,[ESP + 0x394]               ; 00553837
    PUSH EAX                            ; 0055383e
    PUSH 0x5e9315                       ; 0055383f | DAT_005e9315
    PUSH EBP                            ; 00553844
    CALL FUN_004d8b20                   ; 00553845
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b20()
    ADD ESP,0xc                         ; 0055384a
    MOV ECX,dword ptr [ESP + 0x394]     ; 0055384d
    PUSH ECX                            ; 00553854
    MOV EBX,dword ptr [ESP + 0x394]     ; 00553855
    PUSH EBX                            ; 0055385c
    MOV ESI,dword ptr [ESP + 0x394]     ; 0055385d
    PUSH ESI                            ; 00553864
    CALL FUN_005526f0                   ; 00553865
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005526f0()
    ADD ESP,0xc                         ; 0055386a
    CALL FUN_00550bc0                   ; 0055386d
        ;   XREF to: 00550bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00550bc0()
    MOV dword ptr [ESP + 0x384],EAX     ; 00553872
    LEA EAX,[ESP + 0x384]               ; 00553879
    PUSH EAX                            ; 00553880
    PUSH 0x5e9318                       ; 00553881 | DAT_005e9318
    PUSH EBP                            ; 00553886
    CALL FUN_004d8b20                   ; 00553887
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b20()
    ADD ESP,0xc                         ; 0055388c
    MOV EDI,dword ptr [ESP + 0x384]     ; 0055388f
    PUSH EDI                            ; 00553896
    XOR EBX,EBX                         ; 00553897
    CALL FUN_00550bd0                   ; 00553899
        ;   XREF to: 00550bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00550bd0()
    MOV EAX,[0x0061bc94]                ; 0055389e | DAT_0061bc94
    ADD ESP,0x4                         ; 005538a3
    TEST EAX,EAX                        ; 005538a6
    JLE 0x00553970                      ; 005538a8
        ;   XREF to: 00553970 (CONDITIONAL_JUMP)  ; LAB_00553970
    PUSH EBX                            ; 005538ae
        ;   Label: LAB_005538ae
    PUSH 0x5e931d                       ; 005538af | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x328]               ; 005538b4
    PUSH EAX                            ; 005538bb
    CALL FUN_005b7790                   ; 005538bc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 005538c1
    PUSH EBX                            ; 005538c4
    CALL FUN_005512a0                   ; 005538c5
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005512a0()
    ADD ESP,0x4                         ; 005538ca
    MOV dword ptr [ESP + 0x398],EAX     ; 005538cd
    LEA EAX,[ESP + 0x398]               ; 005538d4
    PUSH EAX                            ; 005538db
    LEA EAX,[ESP + 0x324]               ; 005538dc
    PUSH EAX                            ; 005538e3
    PUSH EBP                            ; 005538e4
    CALL FUN_004d8b20                   ; 005538e5
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8b20()
    ADD ESP,0xc                         ; 005538ea
    MOV EDX,dword ptr [ESP + 0x398]     ; 005538ed
    PUSH EDX                            ; 005538f4
    PUSH EBX                            ; 005538f5
    CALL FUN_00551220                   ; 005538f6
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; undefined FUN_00551220()
    ADD ESP,0x8                         ; 005538fb
    PUSH EBX                            ; 005538fe
    PUSH 0x5e9331                       ; 005538ff | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x328]               ; 00553904
    PUSH EAX                            ; 0055390b
    CALL FUN_005b7790                   ; 0055390c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00553911
    PUSH EBX                            ; 00553914
    CALL FUN_00551190                   ; 00553915
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; undefined FUN_00551190()
    MOV dword ptr [ESP + 0x3a4],EAX     ; 0055391a
    FLD float ptr [ESP + 0x3a4]         ; 00553921
    ADD ESP,0x4                         ; 00553928
    LEA EAX,[ESP + 0x39c]               ; 0055392b
    PUSH EAX                            ; 00553932
    LEA EAX,[ESP + 0x324]               ; 00553933
    PUSH EAX                            ; 0055393a
    PUSH EBP                            ; 0055393b
    FSTP float ptr [ESP + 0x3a8]        ; 0055393c
    CALL FUN_004d8bc0                   ; 00553943
        ;   XREF to: 004d8bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8bc0()
    ADD ESP,0xc                         ; 00553948
    PUSH dword ptr [ESP + 0x39c]        ; 0055394b
    PUSH EBX                            ; 00553952
    CALL FUN_00551100                   ; 00553953
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; undefined FUN_00551100()
    MOV ECX,dword ptr [0x0061bc94]      ; 00553958 | DAT_0061bc94
    INC EBX                             ; 0055395e
    ADD ESP,0x8                         ; 0055395f
    CMP EBX,ECX                         ; 00553962
    JL 0x005538ae                       ; 00553964
        ;   XREF to: 005538ae (CONDITIONAL_JUMP)  ; LAB_005538ae
    LEA EAX,[EAX]                       ; 0055396a
    ADD ESP,0x3a4                       ; 00553970
        ;   Label: LAB_00553970
    POP EBP                             ; 00553976
    POP EDI                             ; 00553977
    POP ESI                             ; 00553978
    POP EBX                             ; 00553979
    RET                                 ; 0055397a

