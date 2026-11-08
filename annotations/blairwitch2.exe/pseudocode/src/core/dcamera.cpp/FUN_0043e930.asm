; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043e930(int param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x144]:1  local_144
; undefined1       Stack[-0x143]:1  local_143
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x9d]:1  local_9d
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052ddf0 at 0052e4ff
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005ce466
;   TerminatedCString s_CDemonCamera_loadImage_n_005ce47a
;   undefined1 DAT_005ce4a1
;   undefined1 DAT_005ce4a2
;   undefined1 DAT_005ce4a3
;   undefined1 DAT_005ce4a4
;   undefined4 DAT_005ce4a6
;   TerminatedCString s_backdrop_005ce4a9
;   undefined4 DAT_005ce4b2
;   undefined4 DAT_005ce4b5
;   TerminatedCString s_core_dcamera_cpp_005ce4b9
;   TerminatedCString s_CDemonCamera_loadImage_n_005ce4cd
;   undefined1 DAT_005ce4ee
;   undefined1 DAT_005ce4ef
;   undefined1 DAT_005ce4f0
;   ... and 45 more
;
; Called Functions:
;   FUN_00434070
;   FUN_004349d0
;   FUN_00460aa0
;   FUN_00460c70
;   FUN_0046ca00
;   FUN_0046cab0
;   FUN_00492670
;   FUN_004e4500
;   FUN_005b77c0
;   FUN_005b87c0
;   FUN_005b89c0
;   FUN_005b8c30
;   FUN_005b929c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e930
        ;   Label: FUN_0043e930
    PUSH ESI                            ; 0043e931
    PUSH EDI                            ; 0043e932
    PUSH EBP                            ; 0043e933
    SUB ESP,0x134                       ; 0043e934
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0043e93a
    MOV EDI,ESP                         ; 0043e941
    MOV DL,0x2e                         ; 0043e943
    PUSH EDI                            ; 0043e945
    MOV AL,byte ptr [ESI]               ; 0043e946
        ;   Label: LAB_0043e946
    MOV byte ptr [EDI],AL               ; 0043e948
    CMP AL,0x0                          ; 0043e94a
    JZ 0x0043e95e                       ; 0043e94c
        ;   XREF to: 0043e95e (CONDITIONAL_JUMP)  ; LAB_0043e95e
    MOV AL,byte ptr [ESI + 0x1]         ; 0043e94e
    ADD ESI,0x2                         ; 0043e951
    MOV byte ptr [EDI + 0x1],AL         ; 0043e954
    ADD EDI,0x2                         ; 0043e957
    CMP AL,0x0                          ; 0043e95a
    JNZ 0x0043e946                      ; 0043e95c
        ;   XREF to: 0043e946 (CONDITIONAL_JUMP)  ; LAB_0043e946
    POP EDI                             ; 0043e95e
        ;   Label: LAB_0043e95e
    MOV ESI,ESP                         ; 0043e95f
    MOV AL,byte ptr [ESI]               ; 0043e961
        ;   Label: LAB_0043e961
    CMP AL,DL                           ; 0043e963
    JZ 0x0043e979                       ; 0043e965
        ;   XREF to: 0043e979 (CONDITIONAL_JUMP)  ; LAB_0043e979
    CMP AL,0x0                          ; 0043e967
    JZ 0x0043e977                       ; 0043e969
        ;   XREF to: 0043e977 (CONDITIONAL_JUMP)  ; LAB_0043e977
    INC ESI                             ; 0043e96b
    MOV AL,byte ptr [ESI]               ; 0043e96c
    CMP AL,DL                           ; 0043e96e
    JZ 0x0043e979                       ; 0043e970
        ;   XREF to: 0043e979 (CONDITIONAL_JUMP)  ; LAB_0043e979
    INC ESI                             ; 0043e972
    CMP AL,0x0                          ; 0043e973
    JNZ 0x0043e961                      ; 0043e975
        ;   XREF to: 0043e961 (CONDITIONAL_JUMP)  ; LAB_0043e961
    SUB ESI,ESI                         ; 0043e977
        ;   Label: LAB_0043e977
    MOV EDI,ESI                         ; 0043e979
        ;   Label: LAB_0043e979
    TEST ESI,ESI                        ; 0043e97b
    JNZ 0x0043e9a2                      ; 0043e97d
        ;   XREF to: 0043e9a2 (CONDITIONAL_JUMP)  ; LAB_0043e9a2
    MOV EDX,0x5ce466                    ; 0043e97f | = "..\\core\\dcamera.cpp"
    MOV ECX,0x9bd                       ; 0043e984
    PUSH 0x5ce47a                       ; 0043e989 | = "CDemonCamera::loadImage - no extention"
    MOV dword ptr [0x01d046a0],EDX      ; 0043e98e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0043e994 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043e99a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0043e99f
    MOV ESI,0x5ce4a1                    ; 0043e9a2 | DAT_005ce4a1
        ;   Label: LAB_0043e9a2
    PUSH EDI                            ; 0043e9a7
    MOV AL,byte ptr [ESI]               ; 0043e9a8 | DAT_005ce4a1 | DAT_005ce4a3
        ;   Label: LAB_0043e9a8
    MOV byte ptr [EDI],AL               ; 0043e9aa
    CMP AL,0x0                          ; 0043e9ac
    JZ 0x0043e9c0                       ; 0043e9ae
        ;   XREF to: 0043e9c0 (CONDITIONAL_JUMP)  ; LAB_0043e9c0
    MOV AL,byte ptr [ESI + 0x1]         ; 0043e9b0 | DAT_005ce4a2 | DAT_005ce4a4
    ADD ESI,0x2                         ; 0043e9b3
    MOV byte ptr [EDI + 0x1],AL         ; 0043e9b6
    ADD EDI,0x2                         ; 0043e9b9
    CMP AL,0x0                          ; 0043e9bc
    JNZ 0x0043e9a8                      ; 0043e9be
        ;   XREF to: 0043e9a8 (CONDITIONAL_JUMP)  ; LAB_0043e9a8
    POP EDI                             ; 0043e9c0
        ;   Label: LAB_0043e9c0
    PUSH 0x5ce4a6                       ; 0043e9c1 | DAT_005ce4a6
    LEA EAX,[ESP + 0x4]                 ; 0043e9c6
    PUSH EAX                            ; 0043e9ca
    PUSH 0x5ce4a9                       ; 0043e9cb | = "backdrop"
    CALL FUN_00460c70                   ; 0043e9d0
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0043e9d5
    MOV EBX,EAX                         ; 0043e9d8
    TEST EAX,EAX                        ; 0043e9da
    JZ 0x0043f10c                       ; 0043e9dc
        ;   XREF to: 0043f10c (CONDITIONAL_JUMP)  ; LAB_0043f10c
    PUSH EBX                            ; 0043e9e2
        ;   Label: LAB_0043e9e2
    PUSH 0x3                            ; 0043e9e3
    PUSH 0x100                          ; 0043e9e5
    PUSH 0xb65c98                       ; 0043e9ea | DAT_00b65c98
    CALL FUN_005b87c0                   ; 0043e9ef
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0043e9f4
    PUSH EBX                            ; 0043e9f7
    CALL FUN_005b89c0                   ; 0043e9f8
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0043e9fd
    LEA EDI,[ESP + 0x50]                ; 0043ea00
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0043ea04
    MOV DL,0x2e                         ; 0043ea0b
    PUSH EDI                            ; 0043ea0d
    MOV AL,byte ptr [ESI]               ; 0043ea0e
        ;   Label: LAB_0043ea0e
    MOV byte ptr [EDI],AL               ; 0043ea10
    CMP AL,0x0                          ; 0043ea12
    JZ 0x0043ea26                       ; 0043ea14
        ;   XREF to: 0043ea26 (CONDITIONAL_JUMP)  ; LAB_0043ea26
    MOV AL,byte ptr [ESI + 0x1]         ; 0043ea16
    ADD ESI,0x2                         ; 0043ea19
    MOV byte ptr [EDI + 0x1],AL         ; 0043ea1c
    ADD EDI,0x2                         ; 0043ea1f
    CMP AL,0x0                          ; 0043ea22
    JNZ 0x0043ea0e                      ; 0043ea24
        ;   XREF to: 0043ea0e (CONDITIONAL_JUMP)  ; LAB_0043ea0e
    POP EDI                             ; 0043ea26
        ;   Label: LAB_0043ea26
    LEA ESI,[ESP + 0x50]                ; 0043ea27
    MOV AL,byte ptr [ESI]               ; 0043ea2b
        ;   Label: LAB_0043ea2b
    CMP AL,DL                           ; 0043ea2d
    JZ 0x0043ea43                       ; 0043ea2f
        ;   XREF to: 0043ea43 (CONDITIONAL_JUMP)  ; LAB_0043ea43
    CMP AL,0x0                          ; 0043ea31
    JZ 0x0043ea41                       ; 0043ea33
        ;   XREF to: 0043ea41 (CONDITIONAL_JUMP)  ; LAB_0043ea41
    INC ESI                             ; 0043ea35
    MOV AL,byte ptr [ESI]               ; 0043ea36
    CMP AL,DL                           ; 0043ea38
    JZ 0x0043ea43                       ; 0043ea3a
        ;   XREF to: 0043ea43 (CONDITIONAL_JUMP)  ; LAB_0043ea43
    INC ESI                             ; 0043ea3c
    CMP AL,0x0                          ; 0043ea3d
    JNZ 0x0043ea2b                      ; 0043ea3f
        ;   XREF to: 0043ea2b (CONDITIONAL_JUMP)  ; LAB_0043ea2b
    SUB ESI,ESI                         ; 0043ea41
        ;   Label: LAB_0043ea41
    MOV EDI,ESI                         ; 0043ea43
        ;   Label: LAB_0043ea43
    TEST ESI,ESI                        ; 0043ea45
    JNZ 0x0043ea6c                      ; 0043ea47
        ;   XREF to: 0043ea6c (CONDITIONAL_JUMP)  ; LAB_0043ea6c
    MOV EBX,0x5ce4b9                    ; 0043ea49 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x9d0                       ; 0043ea4e
    PUSH 0x5ce4cd                       ; 0043ea53 | = "CDemonCamera::loadImage - no ext"
    MOV dword ptr [0x01d046a0],EBX      ; 0043ea58 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0043ea5e | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043ea64
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0043ea69
    MOV ESI,0x5ce4ee                    ; 0043ea6c | DAT_005ce4ee
        ;   Label: LAB_0043ea6c
    PUSH EDI                            ; 0043ea71
    MOV AL,byte ptr [ESI]               ; 0043ea72 | DAT_005ce4ee | DAT_005ce4f0
        ;   Label: LAB_0043ea72
    MOV byte ptr [EDI],AL               ; 0043ea74
    CMP AL,0x0                          ; 0043ea76
    JZ 0x0043ea8a                       ; 0043ea78
        ;   XREF to: 0043ea8a (CONDITIONAL_JUMP)  ; LAB_0043ea8a
    MOV AL,byte ptr [ESI + 0x1]         ; 0043ea7a | DAT_005ce4ef | DAT_005ce4f1
    ADD ESI,0x2                         ; 0043ea7d
    MOV byte ptr [EDI + 0x1],AL         ; 0043ea80
    ADD EDI,0x2                         ; 0043ea83
    CMP AL,0x0                          ; 0043ea86
    JNZ 0x0043ea72                      ; 0043ea88
        ;   XREF to: 0043ea72 (CONDITIONAL_JUMP)  ; LAB_0043ea72
    POP EDI                             ; 0043ea8a
        ;   Label: LAB_0043ea8a
    PUSH 0x5ce4f3                       ; 0043ea8b | DAT_005ce4f3
    LEA EAX,[ESP + 0x54]                ; 0043ea90
    PUSH EAX                            ; 0043ea94
    PUSH 0x5ce4f6                       ; 0043ea95 | = "backdrop"
    CALL FUN_00460c70                   ; 0043ea9a
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0043ea9f
    MOV dword ptr [ESP + 0x130],EAX     ; 0043eaa2
    TEST EAX,EAX                        ; 0043eaa9
    JZ 0x0043edb4                       ; 0043eaab
        ;   XREF to: 0043edb4 (CONDITIONAL_JUMP)  ; LAB_0043edb4
    PUSH EAX                            ; 0043eab1
    PUSH 0x1                            ; 0043eab2
    PUSH 0x1000                         ; 0043eab4
    PUSH 0x146592c                      ; 0043eab9
    CALL FUN_005b87c0                   ; 0043eabe
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    MOV EDI,dword ptr [0x01466948]      ; 0043eac3 | DAT_01466948
    ADD ESP,0x10                        ; 0043eac9
    TEST EDI,EDI                        ; 0043eacc
    JZ 0x0043f1a3                       ; 0043eace
        ;   XREF to: 0043f1a3 (CONDITIONAL_JUMP)  ; LAB_0043f1a3
    MOV EBP,0x10                        ; 0043ead4
    MOV EAX,[0x01466938]                ; 0043ead9 | DAT_01466938
    MOV EDX,dword ptr [0x0146693c]      ; 0043eade | DAT_0146693c
    MOV ECX,dword ptr [0x01466940]      ; 0043eae4 | DAT_01466940
    OR EAX,EDX                          ; 0043eaea
    MOV dword ptr [0x01465928],EBP      ; 0043eaec | DAT_01465928
    OR EAX,ECX                          ; 0043eaf2
    JNZ 0x0043eb00                      ; 0043eaf4
        ;   XREF to: 0043eb00 (CONDITIONAL_JUMP)  ; LAB_0043eb00
    MOV dword ptr [0x01465928],0x1      ; 0043eaf6 | DAT_01465928
    MOV ESI,dword ptr [ESP + 0x130]     ; 0043eb00
        ;   Label: LAB_0043eb00
    PUSH ESI                            ; 0043eb07
    PUSH 0x1                            ; 0043eb08
    PUSH 0x3                            ; 0043eb0a
    LEA EAX,[ESP + 0xb0]                ; 0043eb0c
    PUSH EAX                            ; 0043eb13
    CALL FUN_005b87c0                   ; 0043eb14
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0043eb19
    XOR AH,AH                           ; 0043eb1c
    PUSH 0x5ce4ff                       ; 0043eb1e | DAT_005ce4ff
    MOV byte ptr [ESP + 0xab],AH        ; 0043eb23
    LEA EAX,[ESP + 0xa8]                ; 0043eb2a
    PUSH EAX                            ; 0043eb31
    CALL FUN_005b8c30                   ; 0043eb32
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 0043eb37
    TEST EAX,EAX                        ; 0043eb3a
    JNZ 0x0043f12e                      ; 0043eb3c
        ;   XREF to: 0043f12e (CONDITIONAL_JUMP)  ; LAB_0043f12e
    LEA EAX,[ESP + 0x50]                ; 0043eb42
        ;   Label: LAB_0043eb42
    PUSH EAX                            ; 0043eb46
    PUSH 0x5ce507                       ; 0043eb47 | = "backdrop"
    CALL FUN_00460aa0                   ; 0043eb4c
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460aa0()
    ADD ESP,0x8                         ; 0043eb51
    SUB EAX,0x1003                      ; 0043eb54
    MOV dword ptr [ESP + 0xa8],EAX      ; 0043eb59
    CMP EAX,0x1                         ; 0043eb60
    JGE 0x0043eb8d                      ; 0043eb63
        ;   XREF to: 0043eb8d (CONDITIONAL_JUMP)  ; LAB_0043eb8d
    LEA EAX,[ESP + 0x50]                ; 0043eb65
    PUSH EAX                            ; 0043eb69
    MOV ECX,0x5ce510                    ; 0043eb6a | = "..\\core\\dcamera.cpp"
    MOV EBX,0x9f0                       ; 0043eb6f
    PUSH 0x5ce524                       ; 0043eb74 | = "Hell froze loading %s"
    MOV dword ptr [0x01d046a0],ECX      ; 0043eb79 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0043eb7f | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043eb85
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0043eb8a
    CMP dword ptr [ESP + 0xa8],0x7a120  ; 0043eb8d
        ;   Label: LAB_0043eb8d
    JBE 0x0043ebc2                      ; 0043eb98
        ;   XREF to: 0043ebc2 (CONDITIONAL_JUMP)  ; LAB_0043ebc2
    LEA EAX,[ESP + 0x50]                ; 0043eb9a
    PUSH EAX                            ; 0043eb9e
    MOV EDI,0x5ce53a                    ; 0043eb9f | = "..\\core\\dcamera.cpp"
    MOV EBP,0x9f6                       ; 0043eba4
    PUSH 0x5ce54e                       ; 0043eba9 | = "%s too big to fit in decompress buffer"
    MOV dword ptr [0x01d046a0],EDI      ; 0043ebae | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0043ebb4 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043ebba
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0043ebbf
    MOV EAX,dword ptr [ESP + 0x130]     ; 0043ebc2
        ;   Label: LAB_0043ebc2
    PUSH EAX                            ; 0043ebc9
    PUSH 0x1                            ; 0043ebca
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0043ebcc
    PUSH EDX                            ; 0043ebd3
    PUSH 0x7c26b0                       ; 0043ebd4 | DAT_007c26b0
    CALL FUN_005b87c0                   ; 0043ebd9
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0043ebde
    PUSH 0x1325cc8                      ; 0043ebe1
    CALL FUN_004349d0                   ; 0043ebe6
        ;   XREF to: 004349d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004349d0()
    MOV EDX,dword ptr [0x01465928]      ; 0043ebeb | DAT_01465928
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043ebf1
    ADD EAX,EDX                         ; 0043ebf8
    SHL EAX,0xa                         ; 0043ebfa
    MOV EDX,EAX                         ; 0043ebfd
    SHL EAX,0x4                         ; 0043ebff
    ADD ESP,0x4                         ; 0043ec02
    SUB EAX,EDX                         ; 0043ec05
    PUSH 0x1                            ; 0043ec07
    MOV dword ptr [ESP + 0xb0],EAX      ; 0043ec09
    LEA EAX,[ESP + 0xb0]                ; 0043ec10
    PUSH EAX                            ; 0043ec17
    PUSH 0x1339920                      ; 0043ec18
    LEA EAX,[ESP + 0xb4]                ; 0043ec1d
    PUSH EAX                            ; 0043ec24
    PUSH 0x7c26b0                       ; 0043ec25 | DAT_007c26b0
    PUSH 0x1325cc8                      ; 0043ec2a
    CALL FUN_00434070                   ; 0043ec2f
        ;   XREF to: 00434070 (UNCONDITIONAL_CALL)  ; undefined FUN_00434070()
    ADD ESP,0x18                        ; 0043ec34
    TEST EAX,EAX                        ; 0043ec37
    JZ 0x0043f176                       ; 0043ec39
        ;   XREF to: 0043f176 (CONDITIONAL_JUMP)  ; LAB_0043f176
    XOR ESI,ESI                         ; 0043ec3f
        ;   Label: LAB_0043ec3f
    MOV EDI,dword ptr [0x01465928]      ; 0043ec41 | DAT_01465928
    MOV dword ptr [ESP + 0xa0],ESI      ; 0043ec47
    TEST EDI,EDI                        ; 0043ec4e
    JLE 0x0043eda4                      ; 0043ec50
        ;   XREF to: 0043eda4 (CONDITIONAL_JUMP)  ; LAB_0043eda4
    MOV EBP,0xfffed400                  ; 0043ec56
    XOR EDI,EDI                         ; 0043ec5b
    MOV ESI,0x12c00                     ; 0043ec5d
    MOV dword ptr [ESP + 0x110],EDI     ; 0043ec62
    MOV dword ptr [ESP + 0x114],EBP     ; 0043ec69
    MOV dword ptr [ESP + 0x10c],ESI     ; 0043ec70
    MOV EAX,dword ptr [ESP + 0x110]     ; 0043ec77
        ;   Label: LAB_0043ec77
    MOV dword ptr [ESP + 0xfc],EAX      ; 0043ec7e
    MOV EAX,dword ptr [ESP + 0x114]     ; 0043ec85
    MOV dword ptr [ESP + 0x100],EAX     ; 0043ec8c
    MOV EAX,dword ptr [ESP + 0x110]     ; 0043ec93
    MOV dword ptr [ESP + 0x104],EAX     ; 0043ec9a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0043eca1
    MOV dword ptr [ESP + 0x108],EAX     ; 0043eca8
    MOV ECX,dword ptr [ESP + 0x104]     ; 0043ecaf
        ;   Label: LAB_0043ecaf
    MOV EDI,dword ptr [ESP + 0x100]     ; 0043ecb6
    MOV EBP,dword ptr [ESP + 0xfc]      ; 0043ecbd
    XOR EDX,EDX                         ; 0043ecc4
    XOR EBX,EBX                         ; 0043ecc6
    LEA EAX,[EDX + EBP*0x1]             ; 0043ecc8
        ;   Label: LAB_0043ecc8
    MOV EAX,dword ptr [EAX + 0x133991d] ; 0043eccb
    SAR EAX,0x18                        ; 0043ecd1
    ADD EAX,EBX                         ; 0043ecd4
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0043ecd6
    MOV EBX,EAX                         ; 0043ecdd
    SHL EAX,0x2                         ; 0043ecdf
    TEST ESI,ESI                        ; 0043ece2
    JLE 0x0043ecf2                      ; 0043ece4
        ;   XREF to: 0043ecf2 (CONDITIONAL_JUMP)  ; LAB_0043ecf2
    LEA ESI,[EDI + EDX*0x1]             ; 0043ece6
    MOVZX ESI,byte ptr [ESI + 0x1339920] ; 0043ece9 | DAT_01326d20 | DAT_01326d21 | DAT_01326e60
    ADD EAX,ESI                         ; 0043ecf0
    INC ECX                             ; 0043ecf2
        ;   Label: LAB_0043ecf2
    INC EDX                             ; 0043ecf3
    MOV byte ptr [ECX + 0x133991f],AL   ; 0043ecf4
    CMP EDX,0x140                       ; 0043ecfa
    JL 0x0043ecc8                       ; 0043ed00
        ;   XREF to: 0043ecc8 (CONDITIONAL_JUMP)  ; LAB_0043ecc8
    MOV EBP,dword ptr [ESP + 0x100]     ; 0043ed02
    MOV EAX,dword ptr [ESP + 0x104]     ; 0043ed09
    MOV EDI,dword ptr [ESP + 0xfc]      ; 0043ed10
    MOV EDX,dword ptr [ESP + 0x108]     ; 0043ed17
    ADD EBP,0x140                       ; 0043ed1e
    ADD EAX,0x140                       ; 0043ed24
    ADD EDI,0x140                       ; 0043ed29
    MOV dword ptr [ESP + 0x100],EBP     ; 0043ed2f
    MOV dword ptr [ESP + 0x104],EAX     ; 0043ed36
    MOV dword ptr [ESP + 0xfc],EDI      ; 0043ed3d
    CMP EAX,EDX                         ; 0043ed44
    JNZ 0x0043ecaf                      ; 0043ed46
        ;   XREF to: 0043ecaf (CONDITIONAL_JUMP)  ; LAB_0043ecaf
    MOV EBP,dword ptr [ESP + 0x10c]     ; 0043ed4c
    MOV EAX,dword ptr [ESP + 0x110]     ; 0043ed53
    MOV EDX,dword ptr [ESP + 0x114]     ; 0043ed5a
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0043ed61
    MOV EBX,dword ptr [0x01465928]      ; 0043ed68 | DAT_01465928
    ADD EBP,0x12c00                     ; 0043ed6e
    ADD EAX,0x12c00                     ; 0043ed74
    ADD EDX,0x12c00                     ; 0043ed79
    INC ECX                             ; 0043ed7f
    MOV dword ptr [ESP + 0x10c],EBP     ; 0043ed80
    MOV dword ptr [ESP + 0x110],EAX     ; 0043ed87
    MOV dword ptr [ESP + 0x114],EDX     ; 0043ed8e
    MOV dword ptr [ESP + 0xa0],ECX      ; 0043ed95
    CMP ECX,EBX                         ; 0043ed9c
    JL 0x0043ec77                       ; 0043ed9e
        ;   XREF to: 0043ec77 (CONDITIONAL_JUMP)  ; LAB_0043ec77
    MOV ECX,dword ptr [ESP + 0x130]     ; 0043eda4
        ;   Label: LAB_0043eda4
    PUSH ECX                            ; 0043edab
    CALL FUN_005b89c0                   ; 0043edac
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0043edb1
    PUSH 0x5ce5a0                       ; 0043edb4 | DAT_005ce5a0
        ;   Label: LAB_0043edb4
    MOV EBX,dword ptr [ESP + 0x150]     ; 0043edb9
    PUSH EBX                            ; 0043edc0
    PUSH 0x5ce5a3                       ; 0043edc1 | = "backdrop"
    CALL FUN_00460c70                   ; 0043edc6
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0043edcb
    MOV EBP,EAX                         ; 0043edce
    TEST EAX,EAX                        ; 0043edd0
    JZ 0x0043f1bb                       ; 0043edd2
        ;   XREF to: 0043f1bb (CONDITIONAL_JUMP)  ; LAB_0043f1bb
    XOR EDX,EDX                         ; 0043edd8
        ;   Label: LAB_0043edd8
    XOR EAX,EAX                         ; 0043edda
    MOV ECX,dword ptr [0x006141c0]      ; 0043eddc | DAT_006141c0
        ;   Label: LAB_0043eddc
    MOVZX ESI,byte ptr [EAX + 0xb65c9a] ; 0043ede2
    XOR EBX,EBX                         ; 0043ede9
    MOVZX EDI,byte ptr [EAX + 0xb65c98] ; 0043edeb | DAT_00b65c98
    MOV BL,byte ptr [EAX + 0xb65c99]    ; 0043edf2
    CMP ECX,0x20                        ; 0043edf8
    JNZ 0x0043f1dd                      ; 0043edfb
        ;   XREF to: 0043f1dd (CONDITIONAL_JUMP)  ; LAB_0043f1dd
    MOV CL,byte ptr [0x01c35814]        ; 0043ee01 | DAT_01c35814
    SHL EDI,CL                          ; 0043ee07
    MOV CL,byte ptr [0x01c35820]        ; 0043ee09 | DAT_01c35820
    SHL EBX,CL                          ; 0043ee0f
    MOV CL,byte ptr [0x01c3582c]        ; 0043ee11 | DAT_01c3582c
    SHL ESI,CL                          ; 0043ee17
    OR EBX,EDI                          ; 0043ee19
    MOV ECX,ESI                         ; 0043ee1b
    OR ECX,EBX                          ; 0043ee1d
    ADD EDX,0x4                         ; 0043ee1f
        ;   Label: LAB_0043ee1f
    ADD EAX,0x3                         ; 0043ee22
    MOV dword ptr [EDX + 0xb65f98],ECX  ; 0043ee25
    CMP EDX,0x400                       ; 0043ee2b
    JNZ 0x0043eddc                      ; 0043ee31
        ;   XREF to: 0043eddc (CONDITIONAL_JUMP)  ; LAB_0043eddc
    PUSH EBP                            ; 0043ee33
    PUSH 0x1e0                          ; 0043ee34
    PUSH 0x280                          ; 0043ee39
    PUSH 0x1468550                      ; 0043ee3e
    CALL FUN_005b87c0                   ; 0043ee43
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0043ee48
    PUSH EBP                            ; 0043ee4b
    CALL FUN_005b89c0                   ; 0043ee4c
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0043ee51
    MOV EAX,dword ptr [ESP + 0x148]     ; 0043ee54
    MOV EBX,dword ptr [EAX + 0x148]     ; 0043ee5b
    CMP EBX,0xf0                        ; 0043ee61
    JNZ 0x0043f1ee                      ; 0043ee67
        ;   XREF to: 0043f1ee (CONDITIONAL_JUMP)  ; LAB_0043f1ee
    XOR ECX,ECX                         ; 0043ee6d
    MOV dword ptr [ESP + 0x124],ECX     ; 0043ee6f
    MOV EBP,0x1468550                   ; 0043ee76
    MOV EDI,dword ptr [ESP + 0x148]     ; 0043ee7b
        ;   Label: LAB_0043ee7b
    MOV EAX,dword ptr [ESP + 0x124]     ; 0043ee82
    XOR EBX,EBX                         ; 0043ee89
    MOV ECX,dword ptr [ESP + 0x124]     ; 0043ee8b
    MOV dword ptr [ESP + 0xb0],EBX      ; 0043ee92
    MOV EDI,dword ptr [EDI + 0x158]     ; 0043ee99
    ADD EAX,EBP                         ; 0043ee9f
    ADD EDI,ECX                         ; 0043eea1
    ADD EDI,0x4                         ; 0043eea3
        ;   Label: LAB_0043eea3
    MOVZX ESI,byte ptr [EAX + 0x1]      ; 0043eea6
    ADD EAX,0x2                         ; 0043eeaa
    XOR EDX,EDX                         ; 0043eead
    XOR EBX,EBX                         ; 0043eeaf
    XOR ECX,ECX                         ; 0043eeb1
    MOV ESI,dword ptr [ESI*0x4 + 0xb65f9c] ; 0043eeb3
    MOV DL,byte ptr [EAX + -0x2]        ; 0043eeba
    MOV BL,byte ptr [EAX + 0x27e]       ; 0043eebd
    MOV CL,byte ptr [EAX + 0x27f]       ; 0043eec3
    AND ESI,0xfcfcfc                    ; 0043eec9
    MOV EDX,dword ptr [EDX*0x4 + 0xb65f9c] ; 0043eecf
    MOV EBX,dword ptr [EBX*0x4 + 0xb65f9c] ; 0043eed6
    MOV ECX,dword ptr [ECX*0x4 + 0xb65f9c] ; 0043eedd
    AND EDX,0xfcfcfc                    ; 0043eee4
    SHR ESI,0x2                         ; 0043eeea
    AND EBX,0xfcfcfc                    ; 0043eeed
    AND ECX,0xfcfcfc                    ; 0043eef3
    SHR EDX,0x2                         ; 0043eef9
    SHR EBX,0x2                         ; 0043eefc
    SHR ECX,0x2                         ; 0043eeff
    ADD EDX,ESI                         ; 0043ef02
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0043ef04
    ADD EDX,EBX                         ; 0043ef0b
    INC ESI                             ; 0043ef0d
    ADD EDX,ECX                         ; 0043ef0e
    MOV dword ptr [ESP + 0xb0],ESI      ; 0043ef10
    MOV dword ptr [EDI + -0x4],EDX      ; 0043ef17
    CMP ESI,0x140                       ; 0043ef1a
    JL 0x0043eea3                       ; 0043ef20
        ;   XREF to: 0043eea3 (CONDITIONAL_JUMP)  ; LAB_0043eea3
    MOV ECX,dword ptr [ESP + 0x124]     ; 0043ef22
    ADD ECX,0x500                       ; 0043ef29
    MOV dword ptr [ESP + 0x124],ECX     ; 0043ef2f
    CMP ECX,0x4b000                     ; 0043ef36
    JNZ 0x0043ee7b                      ; 0043ef3c
        ;   XREF to: 0043ee7b (CONDITIONAL_JUMP)  ; LAB_0043ee7b
    LEA EAX,[EAX]                       ; 0043ef42
    LEA EDX,[EDX]                       ; 0043ef48
    MOV EAX,EAX                         ; 0043ef4e
    XOR EDI,EDI                         ; 0043ef50
        ;   Label: LAB_0043ef50
    XOR EBP,EBP                         ; 0043ef52
    MOV EDX,EDI                         ; 0043ef54
        ;   Label: LAB_0043ef54
    MOV EAX,EDI                         ; 0043ef56
    SAR EDX,0x1f                        ; 0043ef58
    SHL EDX,0x8                         ; 0043ef5b
    SBB EAX,EDX                         ; 0043ef5e
    SAR EAX,0x8                         ; 0043ef60
    MOV EBX,EBP                         ; 0043ef63
    XOR ECX,ECX                         ; 0043ef65
    IMUL ESI,EAX,0x280                  ; 0043ef67
    MOV EDX,ECX                         ; 0043ef6d
        ;   Label: LAB_0043ef6d
    MOV EAX,ECX                         ; 0043ef6f
    SAR EDX,0x1f                        ; 0043ef71
    SHL EDX,0x8                         ; 0043ef74
    SBB EAX,EDX                         ; 0043ef77
    SAR EAX,0x8                         ; 0043ef79
    INC EBX                             ; 0043ef7c
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1468550] ; 0043ef7d
    ADD ECX,0x280                       ; 0043ef84
    MOV byte ptr [EBX + 0x14b354f],AL   ; 0043ef8a
    CMP ECX,0x28000                     ; 0043ef90
    JNZ 0x0043ef6d                      ; 0043ef96
        ;   XREF to: 0043ef6d (CONDITIONAL_JUMP)  ; LAB_0043ef6d
    ADD EBP,0x100                       ; 0043ef98
    ADD EDI,0x1e0                       ; 0043ef9e
    CMP EBP,0x10000                     ; 0043efa4
    JNZ 0x0043ef54                      ; 0043efaa
        ;   XREF to: 0043ef54 (CONDITIONAL_JUMP)  ; LAB_0043ef54
    PUSH 0x609ff0                       ; 0043efac | DAT_00609ff0
    MOV ESI,dword ptr [0x0060b280]      ; 0043efb1 | DAT_0060b280
    PUSH ESI                            ; 0043efb7 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 0043efb8
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    MOV ESI,0x14b3550                   ; 0043efbd
    ADD ESP,0x8                         ; 0043efc2
    MOV EDI,dword ptr [0x01c37770]      ; 0043efc5 | DAT_01c37770
    MOV ECX,EBP                         ; 0043efcb
    PUSH EDI                            ; 0043efcd
    MOV EAX,ECX                         ; 0043efce
    SHR ECX,0x2                         ; 0043efd0
    MOVSD.REP ES:EDI,ESI                ; 0043efd3 | DAT_014b3550 | DAT_014b3554
    MOV CL,AL                           ; 0043efd5
    AND CL,0x3                          ; 0043efd7
    MOVSB.REP ES:EDI,ESI                ; 0043efda | DAT_014b3554 | DAT_014b3555
    POP EDI                             ; 0043efdc
    MOV ECX,0x300                       ; 0043efdd
    MOV ESI,0xb65c98                    ; 0043efe2
    MOV EDI,dword ptr [0x01c35210]      ; 0043efe7 | DAT_01c35210
    PUSH EDI                            ; 0043efed
    MOV EAX,ECX                         ; 0043efee
    SHR ECX,0x2                         ; 0043eff0
    MOVSD.REP ES:EDI,ESI                ; 0043eff3 | DAT_00b65c98 | DAT_00b65c9c
    MOV CL,AL                           ; 0043eff5
    AND CL,0x3                          ; 0043eff7
    MOVSB.REP ES:EDI,ESI                ; 0043effa | DAT_00b65c9c | DAT_00b65c9d
    POP EDI                             ; 0043effc
    PUSH 0xb65c98                       ; 0043effd | DAT_00b65c98
    PUSH 0x609ff0                       ; 0043f002 | DAT_00609ff0
    MOV EDI,dword ptr [0x0060b280]      ; 0043f007 | DAT_0060b280
    PUSH EDI                            ; 0043f00d | DAT_01ba5c50
    CALL FUN_0046cab0                   ; 0043f00e
        ;   XREF to: 0046cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cab0()
    ADD ESP,0xc                         ; 0043f013
    PUSH 0x12d40                        ; 0043f016
    MOV ECX,0xb07f58                    ; 0043f01b
    XOR EDX,EDX                         ; 0043f020
    CALL FUN_00492670                   ; 0043f022
        ;   XREF to: 00492670 (UNCONDITIONAL_CALL)  ; undefined FUN_00492670()
    CMP dword ptr [0x006141bc],0x180    ; 0043f027 | DAT_006141bc
    JNZ 0x0043f101                      ; 0043f031
        ;   XREF to: 0043f101 (CONDITIONAL_JUMP)  ; LAB_0043f101
    XOR EAX,EAX                         ; 0043f037
    MOV dword ptr [ESP + 0x12c],EAX     ; 0043f039
    MOV dword ptr [ESP + 0x128],EAX     ; 0043f040
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0043f047
        ;   Label: LAB_0043f047
    MOV EDX,EAX                         ; 0043f04e
    MOV ECX,0xc0                        ; 0043f050
    SAR EDX,0x1f                        ; 0043f055
    IDIV ECX                            ; 0043f058
    IMUL EBP,EAX,0x140                  ; 0043f05a
    XOR EDI,EDI                         ; 0043f060
    MOV EAX,dword ptr [ESP + 0x128]     ; 0043f062
    XOR ESI,ESI                         ; 0043f069
    MOV dword ptr [ESP + 0xf8],EAX      ; 0043f06b
    MOV EDX,ESI                         ; 0043f072
        ;   Label: LAB_0043f072
    MOV EAX,ESI                         ; 0043f074
    SAR EDX,0x1f                        ; 0043f076
    SHL EDX,0x8                         ; 0043f079
    SBB EAX,EDX                         ; 0043f07c
    SAR EAX,0x8                         ; 0043f07e
    MOV ECX,dword ptr [0x01465928]      ; 0043f081 | DAT_01465928
    MOV EBX,EAX                         ; 0043f087
    XOR EAX,EAX                         ; 0043f089
    TEST ECX,ECX                        ; 0043f08b
    JLE 0x0043f0be                      ; 0043f08d
        ;   XREF to: 0043f0be (CONDITIONAL_JUMP)  ; LAB_0043f0be
    MOV EDX,dword ptr [ESP + 0xf8]      ; 0043f08f
    LEA ECX,[EBX + EBP*0x1]             ; 0043f096
    ADD EDX,EDI                         ; 0043f099
    ADD EDX,0x12c00                     ; 0043f09b
        ;   Label: LAB_0043f09b
    MOV BL,byte ptr [ECX + 0x1339920]   ; 0043f0a1
    INC EAX                             ; 0043f0a7
    MOV byte ptr [EDX + 0x1326d20],BL   ; 0043f0a8
    MOV EBX,dword ptr [0x01465928]      ; 0043f0ae | DAT_01465928
    ADD ECX,0x12c00                     ; 0043f0b4
    CMP EAX,EBX                         ; 0043f0ba
    JL 0x0043f09b                       ; 0043f0bc
        ;   XREF to: 0043f09b (CONDITIONAL_JUMP)  ; LAB_0043f09b
    INC EDI                             ; 0043f0be
        ;   Label: LAB_0043f0be
    ADD ESI,0x140                       ; 0043f0bf
    CMP EDI,0x100                       ; 0043f0c5
    JL 0x0043f072                       ; 0043f0cb
        ;   XREF to: 0043f072 (CONDITIONAL_JUMP)  ; LAB_0043f072
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0043f0cd
    MOV ESI,dword ptr [ESP + 0x128]     ; 0043f0d4
    ADD EDI,0xf0                        ; 0043f0db
    ADD ESI,0x140                       ; 0043f0e1
    MOV dword ptr [ESP + 0x12c],EDI     ; 0043f0e7
    MOV dword ptr [ESP + 0x128],ESI     ; 0043f0ee
    CMP EDI,0xb400                      ; 0043f0f5
    JNZ 0x0043f047                      ; 0043f0fb
        ;   XREF to: 0043f047 (CONDITIONAL_JUMP)  ; LAB_0043f047
    ADD ESP,0x134                       ; 0043f101
        ;   Label: LAB_0043f101
    POP EBP                             ; 0043f107
    POP EDI                             ; 0043f108
    POP ESI                             ; 0043f109
    POP EBX                             ; 0043f10a
    RET                                 ; 0043f10b
    PUSH 0x5ce4b2                       ; 0043f10c | DAT_005ce4b2
        ;   Label: LAB_0043f10c
    LEA EAX,[ESP + 0x4]                 ; 0043f111
    PUSH EAX                            ; 0043f115
    PUSH 0x5ce4b5                       ; 0043f116 | DAT_005ce4b5
    CALL FUN_00460c70                   ; 0043f11b
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0043f120
    MOV EBX,EAX                         ; 0043f123
    TEST EAX,EAX                        ; 0043f125
    JZ 0x0043f101                       ; 0043f127
        ;   XREF to: 0043f101 (CONDITIONAL_JUMP)  ; LAB_0043f101
    JMP 0x0043e9e2                      ; 0043f129
        ;   XREF to: 0043e9e2 (UNCONDITIONAL_JUMP)  ; LAB_0043e9e2
    PUSH 0x5ce503                       ; 0043f12e | DAT_005ce503
        ;   Label: LAB_0043f12e
    LEA EAX,[ESP + 0xa8]                ; 0043f133
    PUSH EAX                            ; 0043f13a
    CALL FUN_005b8c30                   ; 0043f13b
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 0043f140
    TEST EAX,EAX                        ; 0043f143
    JZ 0x0043eb42                       ; 0043f145
        ;   XREF to: 0043eb42 (CONDITIONAL_JUMP)  ; LAB_0043eb42
    PUSH 0x1                            ; 0043f14b
    PUSH -0x3                           ; 0043f14d
    PUSH ESI                            ; 0043f14f
    CALL FUN_005b929c                   ; 0043f150
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined FUN_005b929c()
    ADD ESP,0xc                         ; 0043f155
    PUSH ESI                            ; 0043f158
    MOV EAX,[0x01465928]                ; 0043f159 | DAT_01465928
    PUSH EAX                            ; 0043f15e
    PUSH 0x12c00                        ; 0043f15f
    PUSH 0x1339920                      ; 0043f164
    CALL FUN_005b87c0                   ; 0043f169
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0043f16e
    JMP 0x0043eda4                      ; 0043f171
        ;   XREF to: 0043eda4 (UNCONDITIONAL_JUMP)  ; LAB_0043eda4
    LEA EAX,[ESP + 0x50]                ; 0043f176
        ;   Label: LAB_0043f176
    PUSH EAX                            ; 0043f17a
    MOV ECX,0x5ce575                    ; 0043f17b | = "..\\core\\dcamera.cpp"
    MOV EBX,0x9ff                       ; 0043f180
    PUSH 0x5ce589                       ; 0043f185 | = "Error decompressing %s"
    MOV dword ptr [0x01d046a0],ECX      ; 0043f18a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0043f190 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043f196
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0043f19b
    JMP 0x0043ec3f                      ; 0043f19e
        ;   XREF to: 0043ec3f (UNCONDITIONAL_JUMP)  ; LAB_0043ec3f
    PUSH 0x12c000                       ; 0043f1a3
        ;   Label: LAB_0043f1a3
    PUSH EDI                            ; 0043f1a8
    PUSH 0x1339920                      ; 0043f1a9
    CALL FUN_005b77c0                   ; 0043f1ae
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 0043f1b3
    JMP 0x0043eda4                      ; 0043f1b6
        ;   XREF to: 0043eda4 (UNCONDITIONAL_JUMP)  ; LAB_0043eda4
    PUSH 0x5ce5ac                       ; 0043f1bb | DAT_005ce5ac
        ;   Label: LAB_0043f1bb
    PUSH EBX                            ; 0043f1c0
    PUSH 0x5ce5af                       ; 0043f1c1 | DAT_005ce5af
    CALL FUN_00460c70                   ; 0043f1c6
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0043f1cb
    MOV EBP,EAX                         ; 0043f1ce
    TEST EAX,EAX                        ; 0043f1d0
    JZ 0x0043f101                       ; 0043f1d2
        ;   XREF to: 0043f101 (CONDITIONAL_JUMP)  ; LAB_0043f101
    JMP 0x0043edd8                      ; 0043f1d8
        ;   XREF to: 0043edd8 (UNCONDITIONAL_JUMP)  ; LAB_0043edd8
    MOV ECX,EBX                         ; 0043f1dd
        ;   Label: LAB_0043f1dd
    SHL EDI,0x10                        ; 0043f1df
    SHL ECX,0x8                         ; 0043f1e2
    OR ECX,EDI                          ; 0043f1e5
    OR ECX,ESI                          ; 0043f1e7
    JMP 0x0043ee1f                      ; 0043f1e9
        ;   XREF to: 0043ee1f (UNCONDITIONAL_JUMP)  ; LAB_0043ee1f
    CMP EBX,0x1e0                       ; 0043f1ee
        ;   Label: LAB_0043f1ee
    JNZ 0x0043f22a                      ; 0043f1f4
        ;   XREF to: 0043f22a (CONDITIONAL_JUMP)  ; LAB_0043f22a
    MOV ECX,dword ptr [ESP + 0x148]     ; 0043f1f6
    MOV EAX,0x1468550                   ; 0043f1fd
    XOR EDX,EDX                         ; 0043f202
    MOV ECX,dword ptr [ECX + 0x158]     ; 0043f204
    XOR EBX,EBX                         ; 0043f20a
        ;   Label: LAB_0043f20a
    MOV BL,byte ptr [EAX]               ; 0043f20c | DAT_01468550 | DAT_01468551
    INC EAX                             ; 0043f20e
    ADD ECX,0x4                         ; 0043f20f
    MOV EBX,dword ptr [EBX*0x4 + 0xb65f9c] ; 0043f212
    INC EDX                             ; 0043f219
    MOV dword ptr [ECX + -0x4],EBX      ; 0043f21a
    CMP EDX,0x4b000                     ; 0043f21d
    JL 0x0043f20a                       ; 0043f223
        ;   XREF to: 0043f20a (CONDITIONAL_JUMP)  ; LAB_0043f20a
    JMP 0x0043ef50                      ; 0043f225
        ;   XREF to: 0043ef50 (UNCONDITIONAL_JUMP)  ; LAB_0043ef50
    JLE 0x0043f322                      ; 0043f22a
        ;   XREF to: 0043f322 (CONDITIONAL_JUMP)  ; LAB_0043f322
        ;   Label: LAB_0043f22a
    MOV EAX,dword ptr [EAX + 0x158]     ; 0043f230
    MOV dword ptr [ESP + 0xb4],EAX      ; 0043f236
    MOV EAX,dword ptr [ESP + 0x148]     ; 0043f23d
    XOR EBP,EBP                         ; 0043f244
    MOV EDX,dword ptr [EAX + 0x148]     ; 0043f246
    MOV dword ptr [ESP + 0xb8],EBP      ; 0043f24c
    TEST EDX,EDX                        ; 0043f253
    JLE 0x0043ef50                      ; 0043f255
        ;   XREF to: 0043ef50 (CONDITIONAL_JUMP)  ; LAB_0043ef50
    MOV dword ptr [ESP + 0x120],EBP     ; 0043f25b
    MOV EAX,dword ptr [ESP + 0x148]     ; 0043f262
        ;   Label: LAB_0043f262
    MOV EDI,dword ptr [EAX + 0x144]     ; 0043f269
    XOR ESI,ESI                         ; 0043f26f
    TEST EDI,EDI                        ; 0043f271
    JLE 0x0043f2e5                      ; 0043f273
        ;   XREF to: 0043f2e5 (CONDITIONAL_JUMP)  ; LAB_0043f2e5
    MOV EBX,dword ptr [ESP + 0x120]     ; 0043f275
    XOR ECX,ECX                         ; 0043f27c
    MOV EDI,dword ptr [ESP + 0x148]     ; 0043f27e
        ;   Label: LAB_0043f27e
    MOV EDX,EBX                         ; 0043f285
    MOV EAX,EBX                         ; 0043f287
    SAR EDX,0x1f                        ; 0043f289
    IDIV dword ptr [EDI + 0x148]        ; 0043f28c
    IMUL EDI,EAX,0x280                  ; 0043f292
    MOV EDX,ECX                         ; 0043f298
    MOV EBP,dword ptr [ESP + 0x148]     ; 0043f29a
    SAR EDX,0x1f                        ; 0043f2a1
    MOV EAX,ECX                         ; 0043f2a4
    IDIV dword ptr [EBP + 0x144]        ; 0043f2a6
    ADD EAX,EDI                         ; 0043f2ac
    ADD EAX,0x1468550                   ; 0043f2ae
    MOV AL,byte ptr [EAX]               ; 0043f2b3 | DAT_01468550
    AND EAX,0xff                        ; 0043f2b5
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0043f2ba
    MOV EAX,dword ptr [EAX*0x4 + 0xb65f9c] ; 0043f2c1
    ADD ECX,0x280                       ; 0043f2c8
    MOV dword ptr [EDX],EAX             ; 0043f2ce
    LEA EAX,[EDX + 0x4]                 ; 0043f2d0
    INC ESI                             ; 0043f2d3
    MOV EDX,dword ptr [EBP + 0x144]     ; 0043f2d4
    MOV dword ptr [ESP + 0xb4],EAX      ; 0043f2da
    CMP ESI,EDX                         ; 0043f2e1
    JL 0x0043f27e                       ; 0043f2e3
        ;   XREF to: 0043f27e (CONDITIONAL_JUMP)  ; LAB_0043f27e
    MOV EBP,dword ptr [ESP + 0x120]     ; 0043f2e5
        ;   Label: LAB_0043f2e5
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0043f2ec
    MOV EDX,dword ptr [ESP + 0x148]     ; 0043f2f3
    ADD EBP,0x1e0                       ; 0043f2fa
    INC EAX                             ; 0043f300
    MOV ECX,dword ptr [EDX + 0x148]     ; 0043f301
    MOV dword ptr [ESP + 0x120],EBP     ; 0043f307
    MOV dword ptr [ESP + 0xb8],EAX      ; 0043f30e
    CMP EAX,ECX                         ; 0043f315
    JGE 0x0043ef50                      ; 0043f317
        ;   XREF to: 0043ef50 (CONDITIONAL_JUMP)  ; LAB_0043ef50
    JMP 0x0043f262                      ; 0043f31d
        ;   XREF to: 0043f262 (UNCONDITIONAL_JUMP)  ; LAB_0043f262
    MOV EAX,dword ptr [EAX + 0x158]     ; 0043f322
        ;   Label: LAB_0043f322
    MOV dword ptr [ESP + 0xbc],EAX      ; 0043f328
    MOV EAX,0x9600000                   ; 0043f32f
    MOV ECX,dword ptr [ESP + 0x148]     ; 0043f334
    MOV EDX,EAX                         ; 0043f33b
    MOV EBP,dword ptr [ECX + 0x144]     ; 0043f33d
    SAR EDX,0x1f                        ; 0043f343
    IDIV EBP                            ; 0043f346
    MOV EDX,EAX                         ; 0043f348
    MOV EBX,dword ptr [ECX + 0x148]     ; 0043f34a
    SAR EDX,0x1f                        ; 0043f350
    IDIV EBX                            ; 0043f353
    XOR ESI,ESI                         ; 0043f355
    MOV dword ptr [ESP + 0xc8],ESI      ; 0043f357
    MOV dword ptr [ESP + 0xc0],EAX      ; 0043f35e
    TEST EBX,EBX                        ; 0043f365
    JLE 0x0043ef50                      ; 0043f367
        ;   XREF to: 0043ef50 (CONDITIONAL_JUMP)  ; LAB_0043ef50
    MOV dword ptr [ESP + 0x11c],ESI     ; 0043f36d
    XOR EAX,EAX                         ; 0043f374
        ;   Label: LAB_0043f374
    MOV dword ptr [ESP + 0xc4],EAX      ; 0043f376
    MOV EAX,dword ptr [ESP + 0x148]     ; 0043f37d
    CMP dword ptr [EAX + 0x144],0x0     ; 0043f384
    JLE 0x0043f7d9                      ; 0043f38b
        ;   XREF to: 0043f7d9 (CONDITIONAL_JUMP)  ; LAB_0043f7d9
    XOR EBP,EBP                         ; 0043f391
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0043f393
    MOV dword ptr [ESP + 0x118],EBP     ; 0043f39a
    MOV dword ptr [ESP + 0xe0],EAX      ; 0043f3a1
    MOV EAX,dword ptr [ESP + 0x118]     ; 0043f3a8
        ;   Label: LAB_0043f3a8
    MOV ECX,dword ptr [ESP + 0x148]     ; 0043f3af
    MOV EDX,EAX                         ; 0043f3b6
    MOV EBX,dword ptr [ECX + 0x144]     ; 0043f3b8
    SAR EDX,0x1f                        ; 0043f3be
    IDIV EBX                            ; 0043f3c1
    MOV EBX,EAX                         ; 0043f3c3
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0043f3c5
    MOV EDX,EAX                         ; 0043f3cc
    MOV ESI,dword ptr [ECX + 0x148]     ; 0043f3ce
    SAR EDX,0x1f                        ; 0043f3d4
    IDIV ESI                            ; 0043f3d7
    MOV ECX,EAX                         ; 0043f3d9
    MOV EAX,0x27d80                     ; 0043f3db
    MOV ESI,dword ptr [ESP + 0x148]     ; 0043f3e0
    MOV EDX,EAX                         ; 0043f3e7
    MOV EDI,dword ptr [ESI + 0x144]     ; 0043f3e9
    SAR EDX,0x1f                        ; 0043f3ef
    IDIV EDI                            ; 0043f3f2
    ADD EAX,EBX                         ; 0043f3f4
    MOV dword ptr [ESP + 0xd8],EAX      ; 0043f3f6
    MOV EAX,0x1de20                     ; 0043f3fd
    MOV EDX,EAX                         ; 0043f402
    MOV EBP,dword ptr [ESI + 0x148]     ; 0043f404
    SAR EDX,0x1f                        ; 0043f40a
    IDIV EBP                            ; 0043f40d
    MOV EBP,ECX                         ; 0043f40f
    SAR EBP,0x8                         ; 0043f411
    IMUL EBP,EBP,0x280                  ; 0043f414
    ADD EAX,ECX                         ; 0043f41a
    MOV dword ptr [ESP + 0xdc],EAX      ; 0043f41c
    MOV EAX,EBX                         ; 0043f423
    SAR EAX,0x8                         ; 0043f425
    MOV dword ptr [ESP + 0xe4],EAX      ; 0043f428
    ADD EAX,EBP                         ; 0043f42f
    ADD EAX,0x1468550                   ; 0043f431
    MOV AL,byte ptr [EAX]               ; 0043f436 | DAT_01468550
    AND EAX,0xff                        ; 0043f438
    MOV EAX,dword ptr [EAX*0x4 + 0xb65f9c] ; 0043f43d
    MOV EDX,EAX                         ; 0043f444
    MOV EDI,0xff                        ; 0043f446
    AND EDX,0xff                        ; 0043f44b
    AND ECX,0xff                        ; 0043f451
    MOV dword ptr [ESP + 0xcc],EDX      ; 0043f457
    SUB EDI,ECX                         ; 0043f45e
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0043f460
    IMUL ECX,EDI                        ; 0043f467
    MOV EDX,EAX                         ; 0043f46a
    SHR EDX,0x8                         ; 0043f46c
    AND EDX,0xff                        ; 0043f46f
    MOV dword ptr [ESP + 0xd0],EDX      ; 0043f475
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0043f47c
    IMUL ESI,EDI                        ; 0043f483
    SHR EAX,0x10                        ; 0043f486
    AND EAX,0xff                        ; 0043f489
    MOV dword ptr [ESP + 0xd4],EAX      ; 0043f48e
    MOV EDX,EBX                         ; 0043f495
    MOV EBX,dword ptr [ESP + 0xd4]      ; 0043f497
    IMUL EBX,EDI                        ; 0043f49e
    MOV EAX,0xff                        ; 0043f4a1
    AND EDX,0xff                        ; 0043f4a6
    SUB EAX,EDX                         ; 0043f4ac
    MOV EDX,EAX                         ; 0043f4ae
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0043f4b0
    IMUL EAX,EDX                        ; 0043f4b7
    ADD ECX,EAX                         ; 0043f4ba
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043f4bc
    IMUL EAX,EDX                        ; 0043f4c3
    ADD ESI,EAX                         ; 0043f4c6
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0043f4c8
    IMUL EAX,EDX                        ; 0043f4cf
    ADD EBX,EAX                         ; 0043f4d2
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0043f4d4
    SAR EAX,0x8                         ; 0043f4db
    ADD EBP,EAX                         ; 0043f4de
    ADD EBP,0x1468550                   ; 0043f4e0
    MOVZX EBP,byte ptr [EBP]            ; 0043f4e6 | DAT_01468550
    MOV dword ptr [ESP + 0xe8],EAX      ; 0043f4ea
    MOV EAX,dword ptr [EBP*0x4 + 0xb65f9c] ; 0043f4f1
    MOV EBP,EAX                         ; 0043f4f8
    AND EBP,0xff                        ; 0043f4fa
    MOV dword ptr [ESP + 0xcc],EBP      ; 0043f500
    MOV EBP,EAX                         ; 0043f507
    SHR EAX,0x10                        ; 0043f509
    AND EAX,0xff                        ; 0043f50c
    MOV dword ptr [ESP + 0xd4],EAX      ; 0043f511
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0043f518
    IMUL EAX,EDI                        ; 0043f51f
    SHR EBP,0x8                         ; 0043f522
    AND EBP,0xff                        ; 0043f525
    MOV dword ptr [ESP + 0xd0],EBP      ; 0043f52b
    MOV EBP,dword ptr [ESP + 0xd8]      ; 0043f532
    AND EBP,0xff                        ; 0043f539
    MOV dword ptr [ESP + 0xec],EAX      ; 0043f53f
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0043f546
    IMUL EAX,EBP                        ; 0043f54d
    ADD EAX,dword ptr [ESP + 0xec]      ; 0043f550
    ADD ECX,EAX                         ; 0043f557
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043f559
    IMUL EAX,EDI                        ; 0043f560
    MOV dword ptr [ESP + 0xec],EAX      ; 0043f563
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043f56a
    IMUL EAX,EBP                        ; 0043f571
    ADD EAX,dword ptr [ESP + 0xec]      ; 0043f574
    ADD ESI,EAX                         ; 0043f57b
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0043f57d
    IMUL EDI,EAX                        ; 0043f584
    IMUL EAX,EBP                        ; 0043f587
    ADD EDI,EAX                         ; 0043f58a
    ADD EBX,EDI                         ; 0043f58c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0043f58e
    SAR EAX,0x8                         ; 0043f595
    IMUL EAX,EAX,0x280                  ; 0043f598
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0043f59e
    MOV dword ptr [ESP + 0xec],EAX      ; 0043f5a5
    ADD EAX,EDI                         ; 0043f5ac
    ADD EAX,0x1468550                   ; 0043f5ae
    MOV AL,byte ptr [EAX]               ; 0043f5b3 | DAT_01468550
    AND EAX,0xff                        ; 0043f5b5
    MOV EAX,dword ptr [EAX*0x4 + 0xb65f9c] ; 0043f5ba
    MOV EDI,EAX                         ; 0043f5c1
    AND EDI,0xff                        ; 0043f5c3
    MOV dword ptr [ESP + 0xcc],EDI      ; 0043f5c9
    MOV EDI,EAX                         ; 0043f5d0
    SHR EAX,0x10                        ; 0043f5d2
    AND EAX,0xff                        ; 0043f5d5
    MOV dword ptr [ESP + 0xd4],EAX      ; 0043f5da
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0043f5e1
    IMUL EAX,EDX                        ; 0043f5e8
    SHR EDI,0x8                         ; 0043f5eb
    AND EDI,0xff                        ; 0043f5ee
    MOV dword ptr [ESP + 0xd0],EDI      ; 0043f5f4
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0043f5fb
    AND EDI,0xff                        ; 0043f602
    MOV dword ptr [ESP + 0xf4],EAX      ; 0043f608
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0043f60f
    IMUL EAX,EDI                        ; 0043f616
    MOV dword ptr [ESP + 0xf0],EAX      ; 0043f619
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0043f620
    ADD EAX,dword ptr [ESP + 0xf0]      ; 0043f627
    ADD ECX,EAX                         ; 0043f62e
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043f630
    IMUL EAX,EDX                        ; 0043f637
    MOV dword ptr [ESP + 0xf0],EAX      ; 0043f63a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043f641
    IMUL EAX,EDI                        ; 0043f648
    MOV dword ptr [ESP + 0xf4],EAX      ; 0043f64b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0043f652
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0043f659
    ADD ESI,EAX                         ; 0043f660
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0043f662
    IMUL EAX,EDX                        ; 0043f669
    MOV dword ptr [ESP + 0xf4],EAX      ; 0043f66c
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0043f673
    IMUL EAX,EDI                        ; 0043f67a
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0043f67d
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0043f684
    ADD EBX,EAX                         ; 0043f68b
    MOV EAX,dword ptr [ESP + 0xec]      ; 0043f68d
    ADD EAX,EDX                         ; 0043f694
    ADD EAX,0x1468550                   ; 0043f696
    MOV AL,byte ptr [EAX]               ; 0043f69b | DAT_01468550
    AND EAX,0xff                        ; 0043f69d
    MOV EAX,dword ptr [EAX*0x4 + 0xb65f9c] ; 0043f6a2
    MOV EDX,EAX                         ; 0043f6a9
    AND EDX,0xff                        ; 0043f6ab
    MOV dword ptr [ESP + 0xcc],EDX      ; 0043f6b1
    MOV EDX,EAX                         ; 0043f6b8
    SHR EAX,0x10                        ; 0043f6ba
    AND EAX,0xff                        ; 0043f6bd
    MOV dword ptr [ESP + 0xd4],EAX      ; 0043f6c2
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0043f6c9
    IMUL EAX,EBP                        ; 0043f6d0
    MOV dword ptr [ESP + 0xf4],EAX      ; 0043f6d3
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0043f6da
    IMUL EAX,EDI                        ; 0043f6e1
    SHR EDX,0x8                         ; 0043f6e4
    AND EDX,0xff                        ; 0043f6e7
    MOV dword ptr [ESP + 0xd0],EDX      ; 0043f6ed
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0043f6f4
    ADD ECX,EAX                         ; 0043f6fb
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043f6fd
    IMUL EAX,EBP                        ; 0043f704
    MOV dword ptr [ESP + 0xf4],EAX      ; 0043f707
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043f70e
    IMUL EAX,EDI                        ; 0043f715
    ADD EAX,dword ptr [ESP + 0xf4]      ; 0043f718
    ADD ESI,EAX                         ; 0043f71f
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0043f721
    IMUL EBP,EAX                        ; 0043f728
    IMUL EAX,EDI                        ; 0043f72b
    ADD EAX,EBP                         ; 0043f72e
    XOR EDX,EDX                         ; 0043f730
    ADD EBX,EAX                         ; 0043f732
    MOV EAX,ECX                         ; 0043f734
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0043f736
    DIV ECX                             ; 0043f73d
    MOV ECX,EAX                         ; 0043f73f
    XOR EDX,EDX                         ; 0043f741
    MOV EAX,ESI                         ; 0043f743
    DIV dword ptr [ESP + 0xc0]          ; 0043f745
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0043f74c
    MOV ESI,EAX                         ; 0043f753
    XOR EDX,EDX                         ; 0043f755
    MOV EAX,EBX                         ; 0043f757
    DIV EDI                             ; 0043f759
    MOV EBX,EAX                         ; 0043f75b
    CMP ECX,0xff                        ; 0043f75d
    JBE 0x0043f76a                      ; 0043f763
        ;   XREF to: 0043f76a (CONDITIONAL_JUMP)  ; LAB_0043f76a
    MOV ECX,0xff                        ; 0043f765
    CMP ESI,0xff                        ; 0043f76a
        ;   Label: LAB_0043f76a
    JBE 0x0043f777                      ; 0043f770
        ;   XREF to: 0043f777 (CONDITIONAL_JUMP)  ; LAB_0043f777
    MOV ESI,0xff                        ; 0043f772
    CMP EBX,0xff                        ; 0043f777
        ;   Label: LAB_0043f777
    JBE 0x0043f784                      ; 0043f77d
        ;   XREF to: 0043f784 (CONDITIONAL_JUMP)  ; LAB_0043f784
    MOV EBX,0xff                        ; 0043f77f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0043f784
        ;   Label: LAB_0043f784
    MOV EDX,dword ptr [ESP + 0x148]     ; 0043f78b
    SHL ESI,0x8                         ; 0043f792
    SHL EBX,0x10                        ; 0043f795
    OR ECX,ESI                          ; 0043f798
    MOV ESI,dword ptr [ESP + 0xc4]      ; 0043f79a
    OR ECX,EBX                          ; 0043f7a1
    MOV EBX,dword ptr [ESP + 0x118]     ; 0043f7a3
    INC ESI                             ; 0043f7aa
    MOV dword ptr [EAX],ECX             ; 0043f7ab
    LEA ECX,[EAX + 0x4]                 ; 0043f7ad
    ADD EBX,0x28000                     ; 0043f7b0
    MOV dword ptr [ESP + 0xc4],ESI      ; 0043f7b6
    MOV EDI,dword ptr [EDX + 0x144]     ; 0043f7bd
    MOV dword ptr [ESP + 0xbc],ECX      ; 0043f7c3
    MOV dword ptr [ESP + 0x118],EBX     ; 0043f7ca
    CMP ESI,EDI                         ; 0043f7d1
    JL 0x0043f3a8                       ; 0043f7d3
        ;   XREF to: 0043f3a8 (CONDITIONAL_JUMP)  ; LAB_0043f3a8
    MOV EBX,dword ptr [ESP + 0x11c]     ; 0043f7d9
        ;   Label: LAB_0043f7d9
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0043f7e0
    MOV EDX,dword ptr [ESP + 0x148]     ; 0043f7e7
    ADD EBX,0x1e000                     ; 0043f7ee
    INC ESI                             ; 0043f7f4
    MOV EDI,dword ptr [EDX + 0x148]     ; 0043f7f5
    MOV dword ptr [ESP + 0x11c],EBX     ; 0043f7fb
    MOV dword ptr [ESP + 0xc8],ESI      ; 0043f802
    CMP ESI,EDI                         ; 0043f809
    JGE 0x0043ef50                      ; 0043f80b
        ;   XREF to: 0043ef50 (CONDITIONAL_JUMP)  ; LAB_0043ef50
    JMP 0x0043f374                      ; 0043f811
        ;   XREF to: 0043f374 (UNCONDITIONAL_JUMP)  ; LAB_0043f374

