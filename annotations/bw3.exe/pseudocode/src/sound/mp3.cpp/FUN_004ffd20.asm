; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ffd20(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)
;
; Local Variables:
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
;   FUN_00502d60 at 00503555
;
; Referenced Globals:
;   undefined4 DAT_005ca163
;   undefined4 DAT_005ca166
;   TerminatedCString s_sound_mp3_cpp_005ca169
;   TerminatedCString s_wrong_table_number_u_Fil_005ca17a
;   TerminatedCString s_sound_mp3_cpp_005ca19b
;   TerminatedCString s_wrong_table_u_reference_005ca1ac
;   TerminatedCString s_sound_mp3_cpp_005ca1d0
;   TerminatedCString s_MP3_Huffman_tree_overflo_005ca1e1
;   TerminatedCString s_sound_mp3_cpp_005ca206
;   TerminatedCString s_huffman_decodertable_err_005ca217
;   TerminatedCString s_sound_mp3_cpp_005ca249
;   TerminatedCString s_decoder_table_read_error_005ca25a
;   undefined4 DAT_0060166c
;   undefined4 DAT_00601670
;   undefined4 DAT_00603110
;   ... and 10 more
;
; Called Functions:
;   FUN_004e4330
;   FUN_004fd800
;   FUN_004fd810
;   FUN_004fd960
;   FUN_004fd9f0
;   FUN_005a28c0
;   FUN_005a5b9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffd20
        ;   Label: FUN_004ffd20
    PUSH ESI                            ; 004ffd21
    PUSH EDI                            ; 004ffd22
    PUSH EBP                            ; 004ffd23
    SUB ESP,0x38                        ; 004ffd24
    MOV ECX,dword ptr [ESP + 0x64]      ; 004ffd27
    MOV ECX,dword ptr [ECX]             ; 004ffd2b
    MOV EDX,dword ptr [ECX]             ; 004ffd2d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ffd2f
    SUB EAX,EDX                         ; 004ffd36
    MOV EDX,dword ptr [ECX + 0x10]      ; 004ffd38
    ADD EDX,EAX                         ; 004ffd3b
    MOV dword ptr [ESP + 0x14],EDX      ; 004ffd3d
    MOV EDX,dword ptr [0x01d90410]      ; 004ffd41 | DAT_01d90410
    TEST EDX,EDX                        ; 004ffd47
    JZ 0x004fff80                       ; 004ffd49
        ;   XREF to: 004fff80 (CONDITIONAL_JUMP)  ; LAB_004fff80
    MOV EDX,dword ptr [ESP + 0x58]      ; 004ffd4f
        ;   Label: LAB_004ffd4f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ffd53
    ADD EAX,EDX                         ; 004ffd5a
    MOV ECX,dword ptr [ESP + 0x54]      ; 004ffd5c
    SHL EAX,0x5                         ; 004ffd60
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004ffd63
    ADD ECX,EAX                         ; 004ffd67
    LEA EAX,[EDX*0x8 + 0x0]             ; 004ffd69
    ADD EAX,EDX                         ; 004ffd70
    SHL EAX,0x3                         ; 004ffd72
    ADD EAX,ECX                         ; 004ffd75
    CMP dword ptr [EAX + 0x28],0x0      ; 004ffd77
    JZ 0x005001e4                       ; 004ffd7b
        ;   XREF to: 005001e4 (CONDITIONAL_JUMP)  ; LAB_005001e4
    CMP dword ptr [EAX + 0x2c],0x2      ; 004ffd81
    JNZ 0x005001e4                      ; 004ffd85
        ;   XREF to: 005001e4 (CONDITIONAL_JUMP)  ; LAB_005001e4
    MOV EBX,0x24                        ; 004ffd8b
    MOV EBP,0x240                       ; 004ffd90
    MOV dword ptr [ESP + 0x28],EBX      ; 004ffd95
    MOV EDX,dword ptr [ESP + 0x58]      ; 004ffd99
        ;   Label: LAB_004ffd99
    MOV EBX,dword ptr [ESP + 0x54]      ; 004ffd9d
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004ffda1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ffda5
    PUSH ESI                            ; 004ffdac
    ADD EAX,EDX                         ; 004ffdad
    XOR ESI,ESI                         ; 004ffdaf
    MOV EDX,dword ptr [ESP + 0x60]      ; 004ffdb1
    SHL EAX,0x5                         ; 004ffdb5
    LEA EDI,[EDX*0x8 + 0x0]             ; 004ffdb8
    ADD EBX,EAX                         ; 004ffdbf
    ADD EDI,EDX                         ; 004ffdc1
    CALL FUN_004fd800                   ; 004ffdc3
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd800()
    ADD ESP,0x4                         ; 004ffdc8
    SHL EDI,0x3                         ; 004ffdcb
    MOV dword ptr [ESP + 0x24],EBX      ; 004ffdce
    MOV dword ptr [ESP + 0x18],EDI      ; 004ffdd2
    MOV EBX,0x1                         ; 004ffdd6
    MOV EDI,dword ptr [ESP + 0x24]      ; 004ffddb
        ;   Label: LAB_004ffddb
    ADD EDI,dword ptr [ESP + 0x18]      ; 004ffddf
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004ffde3
    ADD EAX,EAX                         ; 004ffde6
    CMP ESI,EAX                         ; 004ffde8
    JC 0x00500240                       ; 004ffdea
        ;   XREF to: 00500240 (CONDITIONAL_JUMP)  ; LAB_00500240
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004ffdf0
    PUSH EDX                            ; 004ffdf4
    CALL FUN_004fd800                   ; 004ffdf5
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd800()
    MOV EDX,dword ptr [EDI + 0x5c]      ; 004ffdfa
    ADD EDX,0x20                        ; 004ffdfd
    MOV EAX,EDX                         ; 004ffe00
    SHL EAX,0x6                         ; 004ffe02
    ADD EAX,EDX                         ; 004ffe05
    SHL EAX,0x2                         ; 004ffe07
    ADD EAX,EDX                         ; 004ffe0a
    MOV EDX,0x1d94c98                   ; 004ffe0c
    SHL EAX,0x3                         ; 004ffe11
    ADD ESP,0x4                         ; 004ffe14
    ADD EDX,EAX                         ; 004ffe17
    MOV dword ptr [ESP + 0x20],EDX      ; 004ffe19
    MOV EDX,dword ptr [ESP + 0x58]      ; 004ffe1d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ffe21
    ADD EAX,EDX                         ; 004ffe28
    MOV ECX,dword ptr [ESP + 0x54]      ; 004ffe2a
    SHL EAX,0x5                         ; 004ffe2e
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004ffe31
    ADD ECX,EAX                         ; 004ffe35
    LEA EAX,[EDX*0x8 + 0x0]             ; 004ffe37
    ADD EAX,EDX                         ; 004ffe3e
    LEA EDI,[ESI + 0x3]                 ; 004ffe40
    SHL EAX,0x3                         ; 004ffe43
    LEA EBP,[ESI + 0x2]                 ; 004ffe46
    ADD ECX,EAX                         ; 004ffe49
    LEA EBX,[ESI + 0x1]                 ; 004ffe4b
    MOV dword ptr [ESP + 0x1c],ECX      ; 004ffe4e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ffe52
        ;   Label: LAB_004ffe52
    MOV EAX,dword ptr [ESP + 0x60]      ; 004ffe56
    MOV ECX,dword ptr [EDX + 0x18]      ; 004ffe5a
    ADD EAX,ECX                         ; 004ffe5d
    MOV dword ptr [ESP + 0x34],EAX      ; 004ffe5f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004ffe63
    PUSH EAX                            ; 004ffe67
    CALL FUN_004fd800                   ; 004ffe68
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd800()
    ADD ESP,0x4                         ; 004ffe6d
    CMP EAX,dword ptr [ESP + 0x34]      ; 004ffe70
    JNC 0x005002ec                      ; 004ffe74
        ;   XREF to: 005002ec (CONDITIONAL_JUMP)  ; LAB_005002ec
    CMP ESI,0x240                       ; 004ffe7a
    JGE 0x005002ec                      ; 004ffe80
        ;   XREF to: 005002ec (CONDITIONAL_JUMP)  ; LAB_005002ec
    LEA EAX,[ESP + 0xc]                 ; 004ffe86
    PUSH EAX                            ; 004ffe8a
    LEA EAX,[ESP + 0xc]                 ; 004ffe8b
    PUSH EAX                            ; 004ffe8f
    LEA EAX,[ESP + 0xc]                 ; 004ffe90
    PUSH EAX                            ; 004ffe94
    LEA EAX,[ESP + 0xc]                 ; 004ffe95
    PUSH EAX                            ; 004ffe99
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ffe9a
    PUSH EAX                            ; 004ffe9e
    MOV EDX,dword ptr [ESP + 0x60]      ; 004ffe9f
    PUSH EDX                            ; 004ffea3
    CALL FUN_004fd9f0                   ; 004ffea4
        ;   XREF to: 004fd9f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd9f0()
    MOV ECX,0x12                        ; 004ffea9
    MOV EDX,ESI                         ; 004ffeae
    MOV EAX,ESI                         ; 004ffeb0
    SAR EDX,0x1f                        ; 004ffeb2
    IDIV ECX                            ; 004ffeb5
    IMUL EAX,EAX,0x48                   ; 004ffeb7
    ADD ESP,0x18                        ; 004ffeba
    MOV dword ptr [ESP + 0x34],0x12     ; 004ffebd
    MOV EDX,ESI                         ; 004ffec5
    MOV ECX,dword ptr [ESP + 0x50]      ; 004ffec7
    SAR EDX,0x1f                        ; 004ffecb
    ADD ECX,EAX                         ; 004ffece
    MOV EAX,ESI                         ; 004ffed0
    IDIV dword ptr [ESP + 0x34]         ; 004ffed2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ffed6
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004ffeda
    MOV ECX,0x12                        ; 004ffedd
    MOV EDX,EBX                         ; 004ffee2
    MOV EAX,EBX                         ; 004ffee4
    SAR EDX,0x1f                        ; 004ffee6
    IDIV ECX                            ; 004ffee9
    IMUL EAX,EAX,0x48                   ; 004ffeeb
    MOV dword ptr [ESP + 0x34],0x12     ; 004ffeee
    MOV EDX,EBX                         ; 004ffef6
    MOV ECX,dword ptr [ESP + 0x50]      ; 004ffef8
    SAR EDX,0x1f                        ; 004ffefc
    ADD ECX,EAX                         ; 004ffeff
    MOV EAX,EBX                         ; 004fff01
    IDIV dword ptr [ESP + 0x34]         ; 004fff03
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fff07
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004fff0b
    MOV ECX,0x12                        ; 004fff0e
    MOV EDX,EBP                         ; 004fff13
    MOV EAX,EBP                         ; 004fff15
    SAR EDX,0x1f                        ; 004fff17
    IDIV ECX                            ; 004fff1a
    IMUL EAX,EAX,0x48                   ; 004fff1c
    MOV dword ptr [ESP + 0x34],0x12     ; 004fff1f
    MOV EDX,EBP                         ; 004fff27
    MOV ECX,dword ptr [ESP + 0x50]      ; 004fff29
    SAR EDX,0x1f                        ; 004fff2d
    ADD ECX,EAX                         ; 004fff30
    MOV EAX,EBP                         ; 004fff32
    IDIV dword ptr [ESP + 0x34]         ; 004fff34
    MOV EAX,dword ptr [ESP]             ; 004fff38
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004fff3b
    MOV ECX,0x12                        ; 004fff3e
    MOV EDX,EDI                         ; 004fff43
    MOV EAX,EDI                         ; 004fff45
    SAR EDX,0x1f                        ; 004fff47
    IDIV ECX                            ; 004fff4a
    IMUL EAX,EAX,0x48                   ; 004fff4c
    MOV dword ptr [ESP + 0x34],0x12     ; 004fff4f
    MOV EDX,EDI                         ; 004fff57
    MOV ECX,dword ptr [ESP + 0x50]      ; 004fff59
    SAR EDX,0x1f                        ; 004fff5d
    ADD ECX,EAX                         ; 004fff60
    MOV EAX,EDI                         ; 004fff62
    IDIV dword ptr [ESP + 0x34]         ; 004fff64
    ADD ESI,0x4                         ; 004fff68
    ADD EBX,0x4                         ; 004fff6b
    ADD EBP,0x4                         ; 004fff6e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fff71
    ADD EDI,0x4                         ; 004fff75
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 004fff78
    JMP 0x004ffe52                      ; 004fff7b
        ;   XREF to: 004ffe52 (UNCONDITIONAL_JUMP)  ; LAB_004ffe52
    MOV ECX,0x1d94c98                   ; 004fff80
        ;   Label: LAB_004fff80
    MOV dword ptr [ESP + 0x30],EDX      ; 004fff85
    XOR EBX,EBX                         ; 004fff89
    XOR EBP,EBP                         ; 004fff8b
    MOV dword ptr [ESP + 0x2c],ECX      ; 004fff8d
    PUSH EBP                            ; 004fff91
        ;   Label: LAB_004fff91
    PUSH 0x5ca163                       ; 004fff92 | DAT_005ca163
    MOV EDI,dword ptr [ESP + 0x34]      ; 004fff97
    PUSH EDI                            ; 004fff9b
    CALL FUN_005a28c0                   ; 004fff9c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 004fffa1
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fffa4
    MOV EAX,dword ptr [EAX + 0x603110]  ; 004fffa8 | DAT_00603110
    MOV dword ptr [EBX + 0x1d954bc],EAX ; 004fffae | DAT_01d954bc
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fffb4
    MOV EAX,dword ptr [EAX + 0x603114]  ; 004fffb8 | DAT_00603114
    MOV dword ptr [EBX + 0x1d94c9c],EAX ; 004fffbe
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fffc4
    MOV EAX,dword ptr [EAX + 0x603118]  ; 004fffc8 | DAT_00603118
    MOV dword ptr [EBX + 0x1d94ca0],EAX ; 004fffce
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fffd4
    MOV EAX,dword ptr [EAX + 0x60311c]  ; 004fffd8 | DAT_0060311c
    MOV dword ptr [EBX + 0x1d94ca4],EAX ; 004fffde
    MOV EAX,0x1                         ; 004fffe4
    MOV CL,byte ptr [EBX + 0x1d94ca4]   ; 004fffe9
    SHL EAX,CL                          ; 004fffef
    DEC EAX                             ; 004ffff1
    MOV dword ptr [EBX + 0x1d94ca8],EAX ; 004ffff2
    LEA EAX,[ESP + 0x10]                ; 004ffff8
    PUSH EAX                            ; 004ffffc
    PUSH 0x5ca166                       ; 004ffffd | DAT_005ca166
    PUSH EDI                            ; 00500002
    CALL FUN_005a5b9c                   ; 00500003
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b9c()
    ADD ESP,0xc                         ; 00500008
    CMP EBP,dword ptr [ESP + 0x10]      ; 0050000b
    JZ 0x0050003a                       ; 0050000f
        ;   XREF to: 0050003a (CONDITIONAL_JUMP)  ; LAB_0050003a
    PUSH 0x1d94b98                      ; 00500011 | DAT_01d94b98
    PUSH EBP                            ; 00500016
    MOV ECX,0x5ca169                    ; 00500017 | = "..\\sound\\mp3.cpp"
    MOV ESI,0xdfb                       ; 0050001c
    PUSH 0x5ca17a                       ; 00500021 | = "wrong table number %u.  File: %s"
    MOV dword ptr [0x01d71de0],ECX      ; 00500026 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0050002c | DAT_01d71de4
    CALL FUN_004e4330                   ; 00500032
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 00500037
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050003a
        ;   Label: LAB_0050003a
    MOV EAX,dword ptr [EAX + 0x603120]  ; 0050003e | DAT_00603120
    TEST EAX,EAX                        ; 00500044
    JL 0x0050013d                       ; 00500046
        ;   XREF to: 0050013d (CONDITIONAL_JUMP)  ; LAB_0050013d
    MOV dword ptr [EBX + 0x1d94cac],EAX ; 0050004c
    IMUL EDX,EAX,0x828                  ; 00500052
    MOV ESI,0x1d94c98                   ; 00500058
    MOV EDI,0x1d94c98                   ; 0050005d
    MOV ECX,0x802                       ; 00500062
    ADD EDI,EBX                         ; 00500067
    ADD ESI,EDX                         ; 00500069
    ADD EDI,0x20                        ; 0050006b
    ADD ESI,0x20                        ; 0050006e
    PUSH EDI                            ; 00500071
    MOV EAX,ECX                         ; 00500072
    SHR ECX,0x2                         ; 00500074
    MOVSD.REP ES:EDI,ESI                ; 00500077
    MOV CL,AL                           ; 00500079
    AND CL,0x3                          ; 0050007b
    MOVSB.REP ES:EDI,ESI                ; 0050007e
    POP EDI                             ; 00500080
    MOV EAX,dword ptr [EDX + 0x1d954bc] ; 00500081 | DAT_01d954bc
    MOV dword ptr [EBX + 0x1d954bc],EAX ; 00500087 | DAT_01d954bc
    MOV EAX,dword ptr [EBX + 0x1d94c9c] ; 0050008d
    CMP EAX,dword ptr [EDX + 0x1d94c9c] ; 00500093
    JZ 0x00500129                       ; 00500099
        ;   XREF to: 00500129 (CONDITIONAL_JUMP)  ; LAB_00500129
    PUSH 0x1d94b98                      ; 0050009f | DAT_01d94b98
        ;   Label: LAB_0050009f
    PUSH EBP                            ; 005000a4
    MOV EDI,0x5ca19b                    ; 005000a5 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xe06                       ; 005000aa
    PUSH 0x5ca1ac                       ; 005000af | = "wrong table %u reference.  File: %s"
    MOV dword ptr [0x01d71de0],EDI      ; 005000b4 | DAT_01d71de0
        ;   Label: LAB_005000b4
    MOV [0x01d71de4],EAX                ; 005000ba | DAT_01d71de4
    CALL FUN_004e4330                   ; 005000bf
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 005000c4
    MOV ESI,dword ptr [ESP + 0x30]      ; 005000c7
        ;   Label: LAB_005000c7
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005000cb
    ADD EBX,0x828                       ; 005000cf
    INC EBP                             ; 005000d5
    ADD ESI,0x18                        ; 005000d6
    ADD ECX,0x828                       ; 005000d9
    MOV dword ptr [ESP + 0x30],ESI      ; 005000df
    MOV dword ptr [ESP + 0x2c],ECX      ; 005000e3
    CMP EBP,0x22                        ; 005000e7
    JL 0x004fff91                       ; 005000ea
        ;   XREF to: 004fff91 (CONDITIONAL_JUMP)  ; LAB_004fff91
    JZ 0x0050011a                       ; 005000f0
        ;   XREF to: 0050011a (CONDITIONAL_JUMP)  ; LAB_0050011a
    PUSH 0x1d94b98                      ; 005000f2 | DAT_01d94b98
    MOV EDI,0x5ca249                    ; 005000f7 | = "..\\sound\\mp3.cpp"
    MOV EBP,0xe32                       ; 005000fc
    PUSH 0x5ca25a                       ; 00500101 | = "decoder table read error.  File: %s"
    MOV dword ptr [0x01d71de0],EDI      ; 00500106 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0050010c | DAT_01d71de4
    CALL FUN_004e4330                   ; 00500112
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00500117
    MOV dword ptr [0x01d90410],0x1      ; 0050011a | DAT_01d90410
        ;   Label: LAB_0050011a
    JMP 0x004ffd4f                      ; 00500124
        ;   XREF to: 004ffd4f (UNCONDITIONAL_JUMP)  ; LAB_004ffd4f
    MOV ESI,dword ptr [EDX + 0x1d94ca0] ; 00500129
        ;   Label: LAB_00500129
    CMP ESI,dword ptr [EBX + 0x1d94ca0] ; 0050012f
    JNZ 0x0050009f                      ; 00500135
        ;   XREF to: 0050009f (CONDITIONAL_JUMP)  ; LAB_0050009f
    JMP 0x005000c7                      ; 0050013b
        ;   XREF to: 005000c7 (UNCONDITIONAL_JUMP)  ; LAB_005000c7
    CMP EAX,-0x1                        ; 0050013d
        ;   Label: LAB_0050013d
    JNZ 0x005001ca                      ; 00500140
        ;   XREF to: 005001ca (CONDITIONAL_JUMP)  ; LAB_005001ca
    MOV ECX,dword ptr [EBX + 0x1d954bc] ; 00500146 | DAT_01d954bc
    MOV dword ptr [EBX + 0x1d94cac],EAX ; 0050014c
    CMP ECX,0x401                       ; 00500152
    JC 0x00500182                       ; 00500158
        ;   XREF to: 00500182 (CONDITIONAL_JUMP)  ; LAB_00500182
    PUSH 0x1d94b98                      ; 0050015a | DAT_01d94b98
    MOV ESI,0x5ca1d0                    ; 0050015f | = "..\\sound\\mp3.cpp"
    MOV EDI,0xe0e                       ; 00500164
    PUSH 0x5ca1e1                       ; 00500169 | = "MP3 Huffman tree overflow!  File: %s"
    MOV dword ptr [0x01d71de0],ESI      ; 0050016e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00500174 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0050017a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 0050017f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00500182
        ;   Label: LAB_00500182
    MOV EDI,EBX                         ; 00500186
    MOV ECX,EBX                         ; 00500188
    MOV EDX,dword ptr [EBX + 0x1d954bc] ; 0050018a | DAT_01d954bc
    XOR ESI,ESI                         ; 00500190
    MOV EAX,dword ptr [EAX + 0x603124]  ; 00500192 | DAT_00603124
    TEST EDX,EDX                        ; 00500198
    JBE 0x005000c7                      ; 0050019a
        ;   XREF to: 005000c7 (CONDITIONAL_JUMP)  ; LAB_005000c7
    MOV EDX,EAX                         ; 005001a0
        ;   Label: LAB_005001a0
    MOV DL,byte ptr [EDX]               ; 005001a2
    INC EAX                             ; 005001a4
    MOV byte ptr [ECX + 0x1d94cb8],DL   ; 005001a5
    MOV EDX,EAX                         ; 005001ab
    ADD ECX,0x2                         ; 005001ad
    MOV DL,byte ptr [EDX]               ; 005001b0
    MOV byte ptr [ECX + 0x1d94cb7],DL   ; 005001b2
    INC ESI                             ; 005001b8
    MOV EDX,dword ptr [EDI + 0x1d954bc] ; 005001b9 | DAT_01d954bc
    INC EAX                             ; 005001bf
    CMP ESI,EDX                         ; 005001c0
    JNC 0x005000c7                      ; 005001c2
        ;   XREF to: 005000c7 (CONDITIONAL_JUMP)  ; LAB_005000c7
    JMP 0x005001a0                      ; 005001c8
        ;   XREF to: 005001a0 (UNCONDITIONAL_JUMP)  ; LAB_005001a0
    PUSH 0x1d94b98                      ; 005001ca | DAT_01d94b98
        ;   Label: LAB_005001ca
    PUSH EBP                            ; 005001cf
    MOV EDI,0x5ca206                    ; 005001d0 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xe1d                       ; 005001d5
    PUSH 0x5ca217                       ; 005001da | = "huffman decodertable error at table %..."
    JMP 0x005000b4                      ; 005001df
        ;   XREF to: 005000b4 (UNCONDITIONAL_JUMP)  ; LAB_005000b4
    MOV EDX,dword ptr [ESP + 0x58]      ; 005001e4
        ;   Label: LAB_005001e4
    LEA EAX,[EDX*0x4 + 0x0]             ; 005001e8
    ADD EAX,EDX                         ; 005001ef
    MOV ECX,dword ptr [ESP + 0x54]      ; 005001f1
    SHL EAX,0x5                         ; 005001f5
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005001f8
    ADD ECX,EAX                         ; 005001fc
    LEA EAX,[EDX*0x8 + 0x0]             ; 005001fe
    ADD EAX,EDX                         ; 00500205
    SHL EAX,0x3                         ; 00500207
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050020a
    ADD ECX,EAX                         ; 0050020e
    LEA EAX,[EDX*0x8 + 0x0]             ; 00500210
    ADD EAX,EDX                         ; 00500217
    SHL EAX,0x2                         ; 00500219
    ADD EAX,EDX                         ; 0050021c
    MOV EBX,dword ptr [ECX + 0x4c]      ; 0050021e
    SHL EAX,0x2                         ; 00500221
    MOV EDX,dword ptr [EAX + EBX*0x4 + 0x60166c] ; 00500224 | DAT_0060166c
    MOV dword ptr [ESP + 0x28],EDX      ; 0050022b
    MOV EDX,dword ptr [ECX + 0x50]      ; 0050022f
    ADD EDX,EBX                         ; 00500232
    MOV EBP,dword ptr [EAX + EDX*0x4 + 0x601670] ; 00500234 | DAT_00601670
    JMP 0x004ffd99                      ; 0050023b
        ;   XREF to: 004ffd99 (UNCONDITIONAL_JUMP)  ; LAB_004ffd99
    CMP ESI,dword ptr [ESP + 0x28]      ; 00500240
        ;   Label: LAB_00500240
    JGE 0x00500254                      ; 00500244
        ;   XREF to: 00500254 (CONDITIONAL_JUMP)  ; LAB_00500254
    IMUL EAX,dword ptr [EDI + 0x34],0x828 ; 00500246
    ADD EAX,0x1d94c98                   ; 0050024d
    JMP 0x00500272                      ; 00500252
        ;   XREF to: 00500272 (UNCONDITIONAL_JUMP)  ; LAB_00500272
    CMP ESI,EBP                         ; 00500254
        ;   Label: LAB_00500254
    JGE 0x00500266                      ; 00500256
        ;   XREF to: 00500266 (CONDITIONAL_JUMP)  ; LAB_00500266
    IMUL EAX,dword ptr [EDI + 0x38],0x828 ; 00500258
    ADD EAX,0x1d94c98                   ; 0050025f
    JMP 0x00500272                      ; 00500264
        ;   XREF to: 00500272 (UNCONDITIONAL_JUMP)  ; LAB_00500272
    IMUL EAX,dword ptr [EDI + 0x3c],0x828 ; 00500266
        ;   Label: LAB_00500266
    ADD EAX,0x1d94c98                   ; 0050026d
    LEA EDX,[ESP + 0xc]                 ; 00500272
        ;   Label: LAB_00500272
    PUSH EDX                            ; 00500276
    LEA EDX,[ESP + 0xc]                 ; 00500277
    PUSH EDX                            ; 0050027b
    LEA EDX,[ESP + 0xc]                 ; 0050027c
    PUSH EDX                            ; 00500280
    LEA EDX,[ESP + 0xc]                 ; 00500281
    PUSH EDX                            ; 00500285
    PUSH EAX                            ; 00500286
    MOV ECX,dword ptr [ESP + 0x60]      ; 00500287
    PUSH ECX                            ; 0050028b
    CALL FUN_004fd9f0                   ; 0050028c
        ;   XREF to: 004fd9f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd9f0()
    MOV ECX,0x12                        ; 00500291
    MOV EDX,ESI                         ; 00500296
    MOV EAX,ESI                         ; 00500298
    SAR EDX,0x1f                        ; 0050029a
    IDIV ECX                            ; 0050029d
    IMUL EAX,EAX,0x48                   ; 0050029f
    MOV EDI,0x12                        ; 005002a2
    ADD ESP,0x18                        ; 005002a7
    MOV EDX,ESI                         ; 005002aa
    MOV ECX,dword ptr [ESP + 0x50]      ; 005002ac
    SAR EDX,0x1f                        ; 005002b0
    ADD ECX,EAX                         ; 005002b3
    MOV EAX,ESI                         ; 005002b5
    IDIV EDI                            ; 005002b7
    MOV EAX,dword ptr [ESP]             ; 005002b9
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 005002bc
    MOV EDX,EBX                         ; 005002bf
    MOV EAX,EBX                         ; 005002c1
    SAR EDX,0x1f                        ; 005002c3
    IDIV EDI                            ; 005002c6
    IMUL EAX,EAX,0x48                   ; 005002c8
    MOV EDX,EBX                         ; 005002cb
    MOV ECX,dword ptr [ESP + 0x50]      ; 005002cd
    SAR EDX,0x1f                        ; 005002d1
    ADD ECX,EAX                         ; 005002d4
    MOV EAX,EBX                         ; 005002d6
    IDIV EDI                            ; 005002d8
    ADD ESI,0x2                         ; 005002da
    MOV EAX,dword ptr [ESP + 0x4]       ; 005002dd
    ADD EBX,0x2                         ; 005002e1
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 005002e4
    JMP 0x004ffddb                      ; 005002e7
        ;   XREF to: 004ffddb (UNCONDITIONAL_JUMP)  ; LAB_004ffddb
    MOV EDX,dword ptr [ESP + 0x58]      ; 005002ec
        ;   Label: LAB_005002ec
    LEA EAX,[EDX*0x4 + 0x0]             ; 005002f0
    ADD EAX,EDX                         ; 005002f7
    MOV EBX,dword ptr [ESP + 0x54]      ; 005002f9
    SHL EAX,0x5                         ; 005002fd
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00500300
    ADD EBX,EAX                         ; 00500304
    LEA EAX,[EDX*0x8 + 0x0]             ; 00500306
    ADD EAX,EDX                         ; 0050030d
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0050030f
    SHL EAX,0x3                         ; 00500313
    PUSH ECX                            ; 00500316
    ADD EBX,EAX                         ; 00500317
    CALL FUN_004fd800                   ; 00500319
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd800()
    ADD ESP,0x4                         ; 0050031e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00500321
    PUSH EAX                            ; 00500325
    MOV EBP,dword ptr [EBX + 0x18]      ; 00500326
    MOV EDI,dword ptr [ESP + 0x64]      ; 00500329
    CALL FUN_004fd800                   ; 0050032d
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd800()
    ADD EDI,EBP                         ; 00500332
    ADD ESP,0x4                         ; 00500334
    CMP EAX,EDI                         ; 00500337
    JBE 0x00500364                      ; 00500339
        ;   XREF to: 00500364 (CONDITIONAL_JUMP)  ; LAB_00500364
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0050033b
    PUSH EDX                            ; 0050033f
    CALL FUN_004fd800                   ; 00500340
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd800()
    ADD ESP,0x4                         ; 00500345
    MOV ECX,dword ptr [ESP + 0x60]      ; 00500348
    MOV EDI,dword ptr [EBX + 0x18]      ; 0050034c
    SUB EAX,ECX                         ; 0050034f
    SUB EAX,EDI                         ; 00500351
    PUSH EAX                            ; 00500353
    MOV EBP,dword ptr [ESP + 0x50]      ; 00500354
    PUSH EBP                            ; 00500358
    SUB ESI,0x4                         ; 00500359
    CALL FUN_004fd960                   ; 0050035c
        ;   XREF to: 004fd960 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd960()
    ADD ESP,0x8                         ; 00500361
    MOV EDX,dword ptr [ESP + 0x58]      ; 00500364
        ;   Label: LAB_00500364
    LEA EAX,[EDX*0x4 + 0x0]             ; 00500368
    ADD EAX,EDX                         ; 0050036f
    MOV ECX,dword ptr [ESP + 0x54]      ; 00500371
    SHL EAX,0x5                         ; 00500375
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00500378
    ADD ECX,EAX                         ; 0050037c
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050037e
    ADD EAX,EDX                         ; 00500385
    MOV EDX,dword ptr [ECX + EAX*0x8 + 0x18] ; 00500387
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0050038b
    MOV EBX,dword ptr [ESP + 0x60]      ; 0050038f
    PUSH ECX                            ; 00500393
    ADD EBX,EDX                         ; 00500394
    CALL FUN_004fd800                   ; 00500396
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd800()
    ADD ESP,0x4                         ; 0050039b
    CMP EAX,EBX                         ; 0050039e
    JL 0x005003d4                       ; 005003a0
        ;   XREF to: 005003d4 (CONDITIONAL_JUMP)  ; LAB_005003d4
    MOV EBX,0x12                        ; 005003a2
        ;   Label: LAB_005003a2
    CMP ESI,0x240                       ; 005003a7
        ;   Label: LAB_005003a7
    JGE 0x005003e6                      ; 005003ad
        ;   XREF to: 005003e6 (CONDITIONAL_JUMP)  ; LAB_005003e6
    MOV EDX,ESI                         ; 005003af
    MOV EAX,ESI                         ; 005003b1
    SAR EDX,0x1f                        ; 005003b3
    IDIV EBX                            ; 005003b6
    IMUL EAX,EAX,0x48                   ; 005003b8
    MOV EDX,ESI                         ; 005003bb
    MOV ECX,dword ptr [ESP + 0x50]      ; 005003bd
    SAR EDX,0x1f                        ; 005003c1
    ADD ECX,EAX                         ; 005003c4
    MOV EAX,ESI                         ; 005003c6
    IDIV EBX                            ; 005003c8
    INC ESI                             ; 005003ca
    MOV dword ptr [ECX + EDX*0x4],0x0   ; 005003cb
    JMP 0x005003a7                      ; 005003d2
        ;   XREF to: 005003a7 (UNCONDITIONAL_JUMP)  ; LAB_005003a7
    SUB EBX,EAX                         ; 005003d4
        ;   Label: LAB_005003d4
    PUSH EBX                            ; 005003d6
    MOV EBX,dword ptr [ESP + 0x50]      ; 005003d7
    PUSH EBX                            ; 005003db
    CALL FUN_004fd810                   ; 005003dc
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd810()
    ADD ESP,0x8                         ; 005003e1
    JMP 0x005003a2                      ; 005003e4
        ;   XREF to: 005003a2 (UNCONDITIONAL_JUMP)  ; LAB_005003a2
    ADD ESP,0x38                        ; 005003e6
        ;   Label: LAB_005003e6
    POP EBP                             ; 005003e9
    POP EDI                             ; 005003ea
    POP ESI                             ; 005003eb
    POP EBX                             ; 005003ec
    RET                                 ; 005003ed

