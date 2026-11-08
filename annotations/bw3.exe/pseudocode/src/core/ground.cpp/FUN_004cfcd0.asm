; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cfcd0(int *param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xcb]:1  local_cb
; undefined1       Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x7b]:1  local_7b
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00572370 at 0057239b
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_005c4816
;   TerminatedCString s_eopen_ext_not_found_005c4829
;   TerminatedCString s_core_ground_cpp_005c4840
;   TerminatedCString s_eopen_Cannot_open_file_005c4853
;   undefined4 DAT_005c49af
;   undefined1 DAT_005c49b2
;   undefined1 DAT_005c49b3
;   undefined1 DAT_005c49b4
;   undefined1 DAT_005c49b5
;   undefined4 DAT_005c49b6
;   undefined4 DAT_005c49bb
;   undefined1 DAT_005c49be
;   undefined1 DAT_005c49bf
;   undefined1 DAT_005c49c0
;   undefined1 DAT_005c49c1
;   ... and 3 more
;
; Called Functions:
;   FUN_004659c0
;   FUN_004e4330
;   FUN_005690c0
;   FUN_005a32b0
;   FUN_005a3890
;   FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfcd0
        ;   Label: FUN_004cfcd0
    PUSH ESI                            ; 004cfcd1
    PUSH EDI                            ; 004cfcd2
    PUSH EBP                            ; 004cfcd3
    SUB ESP,0xbc                        ; 004cfcd4
    MOV EBX,dword ptr [ESP + 0xd0]      ; 004cfcda
    MOV EDX,0x5c49b6                    ; 004cfce1 | DAT_005c49b6
    MOV EBP,0x5c49b2                    ; 004cfce6 | DAT_005c49b2
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004cfceb
    MOV EDI,ESP                         ; 004cfcf2
    MOV ECX,0x5c49af                    ; 004cfcf4 | DAT_005c49af
    PUSH EDI                            ; 004cfcf9
    MOV AL,byte ptr [ESI]               ; 004cfcfa
        ;   Label: LAB_004cfcfa
    MOV byte ptr [EDI],AL               ; 004cfcfc
    CMP AL,0x0                          ; 004cfcfe
    JZ 0x004cfd12                       ; 004cfd00
        ;   XREF to: 004cfd12 (CONDITIONAL_JUMP)  ; LAB_004cfd12
    MOV AL,byte ptr [ESI + 0x1]         ; 004cfd02
    ADD ESI,0x2                         ; 004cfd05
    MOV byte ptr [EDI + 0x1],AL         ; 004cfd08
    ADD EDI,0x2                         ; 004cfd0b
    CMP AL,0x0                          ; 004cfd0e
    JNZ 0x004cfcfa                      ; 004cfd10
        ;   XREF to: 004cfcfa (CONDITIONAL_JUMP)  ; LAB_004cfcfa
    POP EDI                             ; 004cfd12
        ;   Label: LAB_004cfd12
    MOV ESI,ESP                         ; 004cfd13
    MOV dword ptr [ESP + 0xa8],EDX      ; 004cfd15 | DAT_005c49b6
    MOV DL,0x2e                         ; 004cfd1c
    MOV dword ptr [ESP + 0xac],ECX      ; 004cfd1e | DAT_005c49af
    MOV AL,byte ptr [ESI]               ; 004cfd25
        ;   Label: LAB_004cfd25
    CMP AL,DL                           ; 004cfd27
    JZ 0x004cfd3d                       ; 004cfd29
        ;   XREF to: 004cfd3d (CONDITIONAL_JUMP)  ; LAB_004cfd3d
    CMP AL,0x0                          ; 004cfd2b
    JZ 0x004cfd3b                       ; 004cfd2d
        ;   XREF to: 004cfd3b (CONDITIONAL_JUMP)  ; LAB_004cfd3b
    INC ESI                             ; 004cfd2f
    MOV AL,byte ptr [ESI]               ; 004cfd30
    CMP AL,DL                           ; 004cfd32
    JZ 0x004cfd3d                       ; 004cfd34
        ;   XREF to: 004cfd3d (CONDITIONAL_JUMP)  ; LAB_004cfd3d
    INC ESI                             ; 004cfd36
    CMP AL,0x0                          ; 004cfd37
    JNZ 0x004cfd25                      ; 004cfd39
        ;   XREF to: 004cfd25 (CONDITIONAL_JUMP)  ; LAB_004cfd25
    SUB ESI,ESI                         ; 004cfd3b
        ;   Label: LAB_004cfd3b
    MOV EDI,ESI                         ; 004cfd3d
        ;   Label: LAB_004cfd3d
    TEST ESI,ESI                        ; 004cfd3f
    JZ 0x004cffb1                       ; 004cfd41
        ;   XREF to: 004cffb1 (CONDITIONAL_JUMP)  ; LAB_004cffb1
    INC EDI                             ; 004cfd47
        ;   Label: LAB_004cfd47
    MOV ESI,EBP                         ; 004cfd48
    MOV EDX,dword ptr [ESP + 0xac]      ; 004cfd4a
    PUSH EDI                            ; 004cfd51
    MOV AL,byte ptr [ESI]               ; 004cfd52 | DAT_005c49b2 | DAT_005c49b4
        ;   Label: LAB_004cfd52
    MOV byte ptr [EDI],AL               ; 004cfd54
    CMP AL,0x0                          ; 004cfd56
    JZ 0x004cfd6a                       ; 004cfd58
        ;   XREF to: 004cfd6a (CONDITIONAL_JUMP)  ; LAB_004cfd6a
    MOV AL,byte ptr [ESI + 0x1]         ; 004cfd5a | DAT_005c49b3 | DAT_005c49b5
    ADD ESI,0x2                         ; 004cfd5d
    MOV byte ptr [EDI + 0x1],AL         ; 004cfd60
    ADD EDI,0x2                         ; 004cfd63
    CMP AL,0x0                          ; 004cfd66
    JNZ 0x004cfd52                      ; 004cfd68
        ;   XREF to: 004cfd52 (CONDITIONAL_JUMP)  ; LAB_004cfd52
    POP EDI                             ; 004cfd6a
        ;   Label: LAB_004cfd6a
    PUSH EDX                            ; 004cfd6b | DAT_005c49af
    LEA EAX,[ESP + 0x4]                 ; 004cfd6c
    PUSH EAX                            ; 004cfd70
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004cfd71
    PUSH ECX                            ; 004cfd78 | DAT_005c49b6
    CALL FUN_004659c0                   ; 004cfd79
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 004cfd7e
    MOV ESI,EAX                         ; 004cfd81
    TEST EAX,EAX                        ; 004cfd83
    JNZ 0x004cfdaa                      ; 004cfd85
        ;   XREF to: 004cfdaa (CONDITIONAL_JUMP)  ; LAB_004cfdaa
    MOV EDI,0x5c4840                    ; 004cfd87 | = "..\\core\\ground.cpp"
    MOV EBP,0x44                        ; 004cfd8c
    PUSH 0x5c4853                       ; 004cfd91 | = "eopen - Cannot open file"
    MOV dword ptr [0x01d71de0],EDI      ; 004cfd96 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004cfd9c | DAT_01d71de4
    CALL FUN_004e4330                   ; 004cfda2
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004cfda7
    XOR EAX,EAX                         ; 004cfdaa
        ;   Label: LAB_004cfdaa
    MOV EDX,dword ptr [EBX + 0x4]       ; 004cfdac
    MOV dword ptr [ESP + 0xb4],EAX      ; 004cfdaf
    TEST EDX,EDX                        ; 004cfdb6
    JLE 0x004cfe1e                      ; 004cfdb8
        ;   XREF to: 004cfe1e (CONDITIONAL_JUMP)  ; LAB_004cfe1e
    MOV EBP,dword ptr [EBX]             ; 004cfdba
        ;   Label: LAB_004cfdba
    XOR EDI,EDI                         ; 004cfdbc
    TEST EBP,EBP                        ; 004cfdbe
    JLE 0x004cfe08                      ; 004cfdc0
        ;   XREF to: 004cfe08 (CONDITIONAL_JUMP)  ; LAB_004cfe08
    MOV EBP,dword ptr [ESI + 0x4]       ; 004cfdc2
        ;   Label: LAB_004cfdc2
    TEST EBP,EBP                        ; 004cfdc5
    JLE 0x004cfde0                      ; 004cfdc7
        ;   XREF to: 004cfde0 (CONDITIONAL_JUMP)  ; LAB_004cfde0
    MOV EAX,dword ptr [ESI]             ; 004cfdc9
    MOV AL,byte ptr [EAX]               ; 004cfdcb
    AND EAX,0xff                        ; 004cfdcd
    SUB EAX,0xd                         ; 004cfdd2
    CMP EAX,0xfd                        ; 004cfdd5
    JA 0x004cffd8                       ; 004cfdda
        ;   XREF to: 004cffd8 (CONDITIONAL_JUMP)  ; LAB_004cffd8
    PUSH ESI                            ; 004cfde0
        ;   Label: LAB_004cfde0
    CALL FUN_005a32b0                   ; 004cfde1
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 004cfde6
    SHL EAX,0x7                         ; 004cfde9
        ;   Label: LAB_004cfde9
    MOV EDX,dword ptr [EBX]             ; 004cfdec
    MOV ECX,EAX                         ; 004cfdee
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004cfdf0
    IMUL EAX,EDX                        ; 004cfdf7
    MOV EDX,dword ptr [EBX + 0x24]      ; 004cfdfa
    ADD EAX,EDI                         ; 004cfdfd
    MOV word ptr [EDX + EAX*0x4],CX     ; 004cfdff
    INC EDI                             ; 004cfe03
    CMP EDI,dword ptr [EBX]             ; 004cfe04
    JL 0x004cfdc2                       ; 004cfe06
        ;   XREF to: 004cfdc2 (CONDITIONAL_JUMP)  ; LAB_004cfdc2
    MOV ECX,dword ptr [ESP + 0xb4]      ; 004cfe08
        ;   Label: LAB_004cfe08
    INC ECX                             ; 004cfe0f
    MOV EDI,dword ptr [EBX + 0x4]       ; 004cfe10
    MOV dword ptr [ESP + 0xb4],ECX      ; 004cfe13
    CMP ECX,EDI                         ; 004cfe1a
    JL 0x004cfdba                       ; 004cfe1c
        ;   XREF to: 004cfdba (CONDITIONAL_JUMP)  ; LAB_004cfdba
    PUSH ESI                            ; 004cfe1e
        ;   Label: LAB_004cfe1e
    MOV EBP,0x5c49c2                    ; 004cfe1f | DAT_005c49c2
    LEA EDI,[ESP + 0x54]                ; 004cfe24
    CALL FUN_005a3a90                   ; 004cfe28
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    MOV EAX,0x5c49bb                    ; 004cfe2d | DAT_005c49bb
    ADD ESP,0x4                         ; 004cfe32
    MOV DL,0x2e                         ; 004cfe35
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004cfe37
    MOV dword ptr [ESP + 0xa4],EBP      ; 004cfe3e | DAT_005c49c2
    MOV dword ptr [ESP + 0xa0],EAX      ; 004cfe45 | DAT_005c49bb
    PUSH EDI                            ; 004cfe4c
    MOV AL,byte ptr [ESI]               ; 004cfe4d
        ;   Label: LAB_004cfe4d
    MOV byte ptr [EDI],AL               ; 004cfe4f
    CMP AL,0x0                          ; 004cfe51
    JZ 0x004cfe65                       ; 004cfe53
        ;   XREF to: 004cfe65 (CONDITIONAL_JUMP)  ; LAB_004cfe65
    MOV AL,byte ptr [ESI + 0x1]         ; 004cfe55
    ADD ESI,0x2                         ; 004cfe58
    MOV byte ptr [EDI + 0x1],AL         ; 004cfe5b
    ADD EDI,0x2                         ; 004cfe5e
    CMP AL,0x0                          ; 004cfe61
    JNZ 0x004cfe4d                      ; 004cfe63
        ;   XREF to: 004cfe4d (CONDITIONAL_JUMP)  ; LAB_004cfe4d
    POP EDI                             ; 004cfe65
        ;   Label: LAB_004cfe65
    LEA ESI,[ESP + 0x50]                ; 004cfe66
    MOV EBP,0x5c49be                    ; 004cfe6a | DAT_005c49be
    MOV AL,byte ptr [ESI]               ; 004cfe6f
        ;   Label: LAB_004cfe6f
    CMP AL,DL                           ; 004cfe71
    JZ 0x004cfe87                       ; 004cfe73
        ;   XREF to: 004cfe87 (CONDITIONAL_JUMP)  ; LAB_004cfe87
    CMP AL,0x0                          ; 004cfe75
    JZ 0x004cfe85                       ; 004cfe77
        ;   XREF to: 004cfe85 (CONDITIONAL_JUMP)  ; LAB_004cfe85
    INC ESI                             ; 004cfe79
    MOV AL,byte ptr [ESI]               ; 004cfe7a
    CMP AL,DL                           ; 004cfe7c
    JZ 0x004cfe87                       ; 004cfe7e
        ;   XREF to: 004cfe87 (CONDITIONAL_JUMP)  ; LAB_004cfe87
    INC ESI                             ; 004cfe80
    CMP AL,0x0                          ; 004cfe81
    JNZ 0x004cfe6f                      ; 004cfe83
        ;   XREF to: 004cfe6f (CONDITIONAL_JUMP)  ; LAB_004cfe6f
    SUB ESI,ESI                         ; 004cfe85
        ;   Label: LAB_004cfe85
    MOV EDI,ESI                         ; 004cfe87
        ;   Label: LAB_004cfe87
    TEST ESI,ESI                        ; 004cfe89
    JNZ 0x004cfeb0                      ; 004cfe8b
        ;   XREF to: 004cfeb0 (CONDITIONAL_JUMP)  ; LAB_004cfeb0
    MOV EDX,0x5c4816                    ; 004cfe8d | = "..\\core\\ground.cpp"
    MOV ECX,0x40                        ; 004cfe92
    PUSH 0x5c4829                       ; 004cfe97 | = "eopen - ext not found!"
    MOV dword ptr [0x01d71de0],EDX      ; 004cfe9c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004cfea2 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004cfea8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004cfead
    INC EDI                             ; 004cfeb0
        ;   Label: LAB_004cfeb0
    MOV ESI,EBP                         ; 004cfeb1
    PUSH EDI                            ; 004cfeb3
    MOV AL,byte ptr [ESI]               ; 004cfeb4 | DAT_005c49be | DAT_005c49c0
        ;   Label: LAB_004cfeb4
    MOV byte ptr [EDI],AL               ; 004cfeb6
    CMP AL,0x0                          ; 004cfeb8
    JZ 0x004cfecc                       ; 004cfeba
        ;   XREF to: 004cfecc (CONDITIONAL_JUMP)  ; LAB_004cfecc
    MOV AL,byte ptr [ESI + 0x1]         ; 004cfebc | DAT_005c49bf | DAT_005c49c1
    ADD ESI,0x2                         ; 004cfebf
    MOV byte ptr [EDI + 0x1],AL         ; 004cfec2
    ADD EDI,0x2                         ; 004cfec5
    CMP AL,0x0                          ; 004cfec8
    JNZ 0x004cfeb4                      ; 004cfeca
        ;   XREF to: 004cfeb4 (CONDITIONAL_JUMP)  ; LAB_004cfeb4
    POP EDI                             ; 004cfecc
        ;   Label: LAB_004cfecc
    MOV ESI,dword ptr [ESP + 0xa0]      ; 004cfecd
    PUSH ESI                            ; 004cfed4 | DAT_005c49bb
    LEA EAX,[ESP + 0x54]                ; 004cfed5
    PUSH EAX                            ; 004cfed9
    MOV EDI,dword ptr [ESP + 0xac]      ; 004cfeda
    PUSH EDI                            ; 004cfee1 | DAT_005c49c2
    CALL FUN_004659c0                   ; 004cfee2
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 004cfee7
    MOV ESI,EAX                         ; 004cfeea
    TEST EAX,EAX                        ; 004cfeec
    JNZ 0x004cff12                      ; 004cfeee
        ;   XREF to: 004cff12 (CONDITIONAL_JUMP)  ; LAB_004cff12
    MOV EBP,0x5c4840                    ; 004cfef0 | = "..\\core\\ground.cpp"
    MOV EAX,0x44                        ; 004cfef5
    PUSH 0x5c4853                       ; 004cfefa | = "eopen - Cannot open file"
    MOV dword ptr [0x01d71de0],EBP      ; 004cfeff | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004cff05 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004cff0a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004cff0f
    MOV dword ptr [ESP + 0xb0],ESI      ; 004cff12
        ;   Label: LAB_004cff12
    XOR EDX,EDX                         ; 004cff19
    MOV ECX,dword ptr [EBX + 0x4]       ; 004cff1b
    MOV dword ptr [ESP + 0xb8],EDX      ; 004cff1e
    TEST ECX,ECX                        ; 004cff25
    JLE 0x004cff80                      ; 004cff27
        ;   XREF to: 004cff80 (CONDITIONAL_JUMP)  ; LAB_004cff80
    MOV EBP,0x2                         ; 004cff29
    MOV EDI,dword ptr [EBX]             ; 004cff2e
        ;   Label: LAB_004cff2e
    XOR ESI,ESI                         ; 004cff30
    TEST EDI,EDI                        ; 004cff32
    JLE 0x004cff6a                      ; 004cff34
        ;   XREF to: 004cff6a (CONDITIONAL_JUMP)  ; LAB_004cff6a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004cff36
        ;   Label: LAB_004cff36
    MOV EDX,dword ptr [EBX]             ; 004cff3d
    PUSH EAX                            ; 004cff3f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004cff40
    IMUL EAX,EDX                        ; 004cff47
    ADD EAX,ESI                         ; 004cff4a
    MOV EDI,dword ptr [EBX + 0x24]      ; 004cff4c
    SHL EAX,0x2                         ; 004cff4f
    PUSH EBP                            ; 004cff52
    ADD EAX,EDI                         ; 004cff53
    PUSH 0x1                            ; 004cff55
    ADD EAX,0x2                         ; 004cff57
    PUSH EAX                            ; 004cff5a
    INC ESI                             ; 004cff5b
    CALL FUN_005a3890                   ; 004cff5c
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    MOV ECX,dword ptr [EBX]             ; 004cff61
    ADD ESP,0x10                        ; 004cff63
    CMP ESI,ECX                         ; 004cff66
    JL 0x004cff36                       ; 004cff68
        ;   XREF to: 004cff36 (CONDITIONAL_JUMP)  ; LAB_004cff36
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004cff6a
        ;   Label: LAB_004cff6a
    INC EDX                             ; 004cff71
    MOV ECX,dword ptr [EBX + 0x4]       ; 004cff72
    MOV dword ptr [ESP + 0xb8],EDX      ; 004cff75
    CMP EDX,ECX                         ; 004cff7c
    JL 0x004cff2e                       ; 004cff7e
        ;   XREF to: 004cff2e (CONDITIONAL_JUMP)  ; LAB_004cff2e
    MOV ESI,dword ptr [ESP + 0xb0]      ; 004cff80
        ;   Label: LAB_004cff80
    PUSH ESI                            ; 004cff87
    CALL FUN_005a3a90                   ; 004cff88
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004cff8d
    MOV EDI,dword ptr [ESP + 0xd4]      ; 004cff90
    PUSH EDI                            ; 004cff97
    MOV EBP,dword ptr [EBX + 0x28]      ; 004cff98
    PUSH EBP                            ; 004cff9b
    CALL FUN_005690c0                   ; 004cff9c
        ;   XREF to: 005690c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005690c0()
    ADD ESP,0x8                         ; 004cffa1
    ADD ESP,0xbc                        ; 004cffa4
    POP EBP                             ; 004cffaa
    POP EDI                             ; 004cffab
    POP ESI                             ; 004cffac
    POP EBX                             ; 004cffad
    MOV EAX,EAX                         ; 004cffae
    RET                                 ; 004cffb0
    MOV ESI,0x5c4816                    ; 004cffb1 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004cffb1
    MOV EAX,0x40                        ; 004cffb6
    PUSH 0x5c4829                       ; 004cffbb | = "eopen - ext not found!"
    MOV dword ptr [0x01d71de0],ESI      ; 004cffc0 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004cffc6 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004cffcb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004cffd0
    JMP 0x004cfd47                      ; 004cffd3
        ;   XREF to: 004cfd47 (UNCONDITIONAL_JUMP)  ; LAB_004cfd47
    LEA EAX,[EBP + -0x1]                ; 004cffd8
        ;   Label: LAB_004cffd8
    MOV dword ptr [ESI + 0x4],EAX       ; 004cffdb
    MOV EAX,dword ptr [ESI]             ; 004cffde
    LEA EDX,[EAX + 0x1]                 ; 004cffe0
    MOV dword ptr [ESI],EDX             ; 004cffe3
    MOV AL,byte ptr [EAX]               ; 004cffe5
    AND EAX,0xff                        ; 004cffe7
    JMP 0x004cfde9                      ; 004cffec
        ;   XREF to: 004cfde9 (UNCONDITIONAL_JUMP)  ; LAB_004cfde9

