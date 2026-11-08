; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004caac0(int *param_1,char *param_2)
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
;   FUN_0057b800 at 0057b82b
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_005d960f
;   TerminatedCString s_eopen_ext_not_found_005d9622
;   TerminatedCString s_core_ground_cpp_005d9639
;   TerminatedCString s_eopen_Cannot_open_file_005d964c
;   undefined4 DAT_005d9796
;   undefined1 DAT_005d9799
;   undefined1 DAT_005d979a
;   undefined1 DAT_005d979b
;   undefined1 DAT_005d979c
;   undefined4 DAT_005d979d
;   undefined4 DAT_005d97a2
;   undefined1 DAT_005d97a5
;   undefined1 DAT_005d97a6
;   undefined1 DAT_005d97a7
;   undefined1 DAT_005d97a8
;   ... and 3 more
;
; Called Functions:
;   FUN_00460c70
;   FUN_004e4500
;   FUN_005734b0
;   FUN_005b8180
;   FUN_005b87c0
;   FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004caac0
        ;   Label: FUN_004caac0
    PUSH ESI                            ; 004caac1
    PUSH EDI                            ; 004caac2
    PUSH EBP                            ; 004caac3
    SUB ESP,0xbc                        ; 004caac4
    MOV EBX,dword ptr [ESP + 0xd0]      ; 004caaca
    MOV EDX,0x5d979d                    ; 004caad1 | DAT_005d979d
    MOV EBP,0x5d9799                    ; 004caad6 | DAT_005d9799
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004caadb
    MOV EDI,ESP                         ; 004caae2
    MOV ECX,0x5d9796                    ; 004caae4 | DAT_005d9796
    PUSH EDI                            ; 004caae9
    MOV AL,byte ptr [ESI]               ; 004caaea
        ;   Label: LAB_004caaea
    MOV byte ptr [EDI],AL               ; 004caaec
    CMP AL,0x0                          ; 004caaee
    JZ 0x004cab02                       ; 004caaf0
        ;   XREF to: 004cab02 (CONDITIONAL_JUMP)  ; LAB_004cab02
    MOV AL,byte ptr [ESI + 0x1]         ; 004caaf2
    ADD ESI,0x2                         ; 004caaf5
    MOV byte ptr [EDI + 0x1],AL         ; 004caaf8
    ADD EDI,0x2                         ; 004caafb
    CMP AL,0x0                          ; 004caafe
    JNZ 0x004caaea                      ; 004cab00
        ;   XREF to: 004caaea (CONDITIONAL_JUMP)  ; LAB_004caaea
    POP EDI                             ; 004cab02
        ;   Label: LAB_004cab02
    MOV ESI,ESP                         ; 004cab03
    MOV dword ptr [ESP + 0xa8],EDX      ; 004cab05 | DAT_005d979d
    MOV DL,0x2e                         ; 004cab0c
    MOV dword ptr [ESP + 0xac],ECX      ; 004cab0e | DAT_005d9796
    MOV AL,byte ptr [ESI]               ; 004cab15
        ;   Label: LAB_004cab15
    CMP AL,DL                           ; 004cab17
    JZ 0x004cab2d                       ; 004cab19
        ;   XREF to: 004cab2d (CONDITIONAL_JUMP)  ; LAB_004cab2d
    CMP AL,0x0                          ; 004cab1b
    JZ 0x004cab2b                       ; 004cab1d
        ;   XREF to: 004cab2b (CONDITIONAL_JUMP)  ; LAB_004cab2b
    INC ESI                             ; 004cab1f
    MOV AL,byte ptr [ESI]               ; 004cab20
    CMP AL,DL                           ; 004cab22
    JZ 0x004cab2d                       ; 004cab24
        ;   XREF to: 004cab2d (CONDITIONAL_JUMP)  ; LAB_004cab2d
    INC ESI                             ; 004cab26
    CMP AL,0x0                          ; 004cab27
    JNZ 0x004cab15                      ; 004cab29
        ;   XREF to: 004cab15 (CONDITIONAL_JUMP)  ; LAB_004cab15
    SUB ESI,ESI                         ; 004cab2b
        ;   Label: LAB_004cab2b
    MOV EDI,ESI                         ; 004cab2d
        ;   Label: LAB_004cab2d
    TEST ESI,ESI                        ; 004cab2f
    JZ 0x004cada1                       ; 004cab31
        ;   XREF to: 004cada1 (CONDITIONAL_JUMP)  ; LAB_004cada1
    INC EDI                             ; 004cab37
        ;   Label: LAB_004cab37
    MOV ESI,EBP                         ; 004cab38
    MOV EDX,dword ptr [ESP + 0xac]      ; 004cab3a
    PUSH EDI                            ; 004cab41
    MOV AL,byte ptr [ESI]               ; 004cab42 | DAT_005d9799 | DAT_005d979b
        ;   Label: LAB_004cab42
    MOV byte ptr [EDI],AL               ; 004cab44
    CMP AL,0x0                          ; 004cab46
    JZ 0x004cab5a                       ; 004cab48
        ;   XREF to: 004cab5a (CONDITIONAL_JUMP)  ; LAB_004cab5a
    MOV AL,byte ptr [ESI + 0x1]         ; 004cab4a | DAT_005d979a | DAT_005d979c
    ADD ESI,0x2                         ; 004cab4d
    MOV byte ptr [EDI + 0x1],AL         ; 004cab50
    ADD EDI,0x2                         ; 004cab53
    CMP AL,0x0                          ; 004cab56
    JNZ 0x004cab42                      ; 004cab58
        ;   XREF to: 004cab42 (CONDITIONAL_JUMP)  ; LAB_004cab42
    POP EDI                             ; 004cab5a
        ;   Label: LAB_004cab5a
    PUSH EDX                            ; 004cab5b | DAT_005d9796
    LEA EAX,[ESP + 0x4]                 ; 004cab5c
    PUSH EAX                            ; 004cab60
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004cab61
    PUSH ECX                            ; 004cab68 | DAT_005d979d
    CALL FUN_00460c70                   ; 004cab69
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 004cab6e
    MOV ESI,EAX                         ; 004cab71
    TEST EAX,EAX                        ; 004cab73
    JNZ 0x004cab9a                      ; 004cab75
        ;   XREF to: 004cab9a (CONDITIONAL_JUMP)  ; LAB_004cab9a
    MOV EDI,0x5d9639                    ; 004cab77 | = "..\\core\\ground.cpp"
    MOV EBP,0x44                        ; 004cab7c
    PUSH 0x5d964c                       ; 004cab81 | = "eopen - Cannot open file"
    MOV dword ptr [0x01d046a0],EDI      ; 004cab86 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004cab8c | DAT_01d046a4
    CALL FUN_004e4500                   ; 004cab92
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004cab97
    XOR EAX,EAX                         ; 004cab9a
        ;   Label: LAB_004cab9a
    MOV EDX,dword ptr [EBX + 0x4]       ; 004cab9c
    MOV dword ptr [ESP + 0xb4],EAX      ; 004cab9f
    TEST EDX,EDX                        ; 004caba6
    JLE 0x004cac0e                      ; 004caba8
        ;   XREF to: 004cac0e (CONDITIONAL_JUMP)  ; LAB_004cac0e
    MOV EBP,dword ptr [EBX]             ; 004cabaa
        ;   Label: LAB_004cabaa
    XOR EDI,EDI                         ; 004cabac
    TEST EBP,EBP                        ; 004cabae
    JLE 0x004cabf8                      ; 004cabb0
        ;   XREF to: 004cabf8 (CONDITIONAL_JUMP)  ; LAB_004cabf8
    MOV EBP,dword ptr [ESI + 0x4]       ; 004cabb2
        ;   Label: LAB_004cabb2
    TEST EBP,EBP                        ; 004cabb5
    JLE 0x004cabd0                      ; 004cabb7
        ;   XREF to: 004cabd0 (CONDITIONAL_JUMP)  ; LAB_004cabd0
    MOV EAX,dword ptr [ESI]             ; 004cabb9
    MOV AL,byte ptr [EAX]               ; 004cabbb
    AND EAX,0xff                        ; 004cabbd
    SUB EAX,0xd                         ; 004cabc2
    CMP EAX,0xfd                        ; 004cabc5
    JA 0x004cadc8                       ; 004cabca
        ;   XREF to: 004cadc8 (CONDITIONAL_JUMP)  ; LAB_004cadc8
    PUSH ESI                            ; 004cabd0
        ;   Label: LAB_004cabd0
    CALL FUN_005b8180                   ; 004cabd1
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004cabd6
    SHL EAX,0x7                         ; 004cabd9
        ;   Label: LAB_004cabd9
    MOV EDX,dword ptr [EBX]             ; 004cabdc
    MOV ECX,EAX                         ; 004cabde
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004cabe0
    IMUL EAX,EDX                        ; 004cabe7
    MOV EDX,dword ptr [EBX + 0x24]      ; 004cabea
    ADD EAX,EDI                         ; 004cabed
    MOV word ptr [EDX + EAX*0x4],CX     ; 004cabef
    INC EDI                             ; 004cabf3
    CMP EDI,dword ptr [EBX]             ; 004cabf4
    JL 0x004cabb2                       ; 004cabf6
        ;   XREF to: 004cabb2 (CONDITIONAL_JUMP)  ; LAB_004cabb2
    MOV ECX,dword ptr [ESP + 0xb4]      ; 004cabf8
        ;   Label: LAB_004cabf8
    INC ECX                             ; 004cabff
    MOV EDI,dword ptr [EBX + 0x4]       ; 004cac00
    MOV dword ptr [ESP + 0xb4],ECX      ; 004cac03
    CMP ECX,EDI                         ; 004cac0a
    JL 0x004cabaa                       ; 004cac0c
        ;   XREF to: 004cabaa (CONDITIONAL_JUMP)  ; LAB_004cabaa
    PUSH ESI                            ; 004cac0e
        ;   Label: LAB_004cac0e
    MOV EBP,0x5d97a9                    ; 004cac0f | DAT_005d97a9
    LEA EDI,[ESP + 0x54]                ; 004cac14
    CALL FUN_005b89c0                   ; 004cac18
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    MOV EAX,0x5d97a2                    ; 004cac1d | DAT_005d97a2
    ADD ESP,0x4                         ; 004cac22
    MOV DL,0x2e                         ; 004cac25
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004cac27
    MOV dword ptr [ESP + 0xa4],EBP      ; 004cac2e | DAT_005d97a9
    MOV dword ptr [ESP + 0xa0],EAX      ; 004cac35 | DAT_005d97a2
    PUSH EDI                            ; 004cac3c
    MOV AL,byte ptr [ESI]               ; 004cac3d
        ;   Label: LAB_004cac3d
    MOV byte ptr [EDI],AL               ; 004cac3f
    CMP AL,0x0                          ; 004cac41
    JZ 0x004cac55                       ; 004cac43
        ;   XREF to: 004cac55 (CONDITIONAL_JUMP)  ; LAB_004cac55
    MOV AL,byte ptr [ESI + 0x1]         ; 004cac45
    ADD ESI,0x2                         ; 004cac48
    MOV byte ptr [EDI + 0x1],AL         ; 004cac4b
    ADD EDI,0x2                         ; 004cac4e
    CMP AL,0x0                          ; 004cac51
    JNZ 0x004cac3d                      ; 004cac53
        ;   XREF to: 004cac3d (CONDITIONAL_JUMP)  ; LAB_004cac3d
    POP EDI                             ; 004cac55
        ;   Label: LAB_004cac55
    LEA ESI,[ESP + 0x50]                ; 004cac56
    MOV EBP,0x5d97a5                    ; 004cac5a | DAT_005d97a5
    MOV AL,byte ptr [ESI]               ; 004cac5f
        ;   Label: LAB_004cac5f
    CMP AL,DL                           ; 004cac61
    JZ 0x004cac77                       ; 004cac63
        ;   XREF to: 004cac77 (CONDITIONAL_JUMP)  ; LAB_004cac77
    CMP AL,0x0                          ; 004cac65
    JZ 0x004cac75                       ; 004cac67
        ;   XREF to: 004cac75 (CONDITIONAL_JUMP)  ; LAB_004cac75
    INC ESI                             ; 004cac69
    MOV AL,byte ptr [ESI]               ; 004cac6a
    CMP AL,DL                           ; 004cac6c
    JZ 0x004cac77                       ; 004cac6e
        ;   XREF to: 004cac77 (CONDITIONAL_JUMP)  ; LAB_004cac77
    INC ESI                             ; 004cac70
    CMP AL,0x0                          ; 004cac71
    JNZ 0x004cac5f                      ; 004cac73
        ;   XREF to: 004cac5f (CONDITIONAL_JUMP)  ; LAB_004cac5f
    SUB ESI,ESI                         ; 004cac75
        ;   Label: LAB_004cac75
    MOV EDI,ESI                         ; 004cac77
        ;   Label: LAB_004cac77
    TEST ESI,ESI                        ; 004cac79
    JNZ 0x004caca0                      ; 004cac7b
        ;   XREF to: 004caca0 (CONDITIONAL_JUMP)  ; LAB_004caca0
    MOV EDX,0x5d960f                    ; 004cac7d | = "..\\core\\ground.cpp"
    MOV ECX,0x40                        ; 004cac82
    PUSH 0x5d9622                       ; 004cac87 | = "eopen - ext not found!"
    MOV dword ptr [0x01d046a0],EDX      ; 004cac8c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004cac92 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004cac98
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004cac9d
    INC EDI                             ; 004caca0
        ;   Label: LAB_004caca0
    MOV ESI,EBP                         ; 004caca1
    PUSH EDI                            ; 004caca3
    MOV AL,byte ptr [ESI]               ; 004caca4 | DAT_005d97a5 | DAT_005d97a7
        ;   Label: LAB_004caca4
    MOV byte ptr [EDI],AL               ; 004caca6
    CMP AL,0x0                          ; 004caca8
    JZ 0x004cacbc                       ; 004cacaa
        ;   XREF to: 004cacbc (CONDITIONAL_JUMP)  ; LAB_004cacbc
    MOV AL,byte ptr [ESI + 0x1]         ; 004cacac | DAT_005d97a6 | DAT_005d97a8
    ADD ESI,0x2                         ; 004cacaf
    MOV byte ptr [EDI + 0x1],AL         ; 004cacb2
    ADD EDI,0x2                         ; 004cacb5
    CMP AL,0x0                          ; 004cacb8
    JNZ 0x004caca4                      ; 004cacba
        ;   XREF to: 004caca4 (CONDITIONAL_JUMP)  ; LAB_004caca4
    POP EDI                             ; 004cacbc
        ;   Label: LAB_004cacbc
    MOV ESI,dword ptr [ESP + 0xa0]      ; 004cacbd
    PUSH ESI                            ; 004cacc4 | DAT_005d97a2
    LEA EAX,[ESP + 0x54]                ; 004cacc5
    PUSH EAX                            ; 004cacc9
    MOV EDI,dword ptr [ESP + 0xac]      ; 004cacca
    PUSH EDI                            ; 004cacd1 | DAT_005d97a9
    CALL FUN_00460c70                   ; 004cacd2
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 004cacd7
    MOV ESI,EAX                         ; 004cacda
    TEST EAX,EAX                        ; 004cacdc
    JNZ 0x004cad02                      ; 004cacde
        ;   XREF to: 004cad02 (CONDITIONAL_JUMP)  ; LAB_004cad02
    MOV EBP,0x5d9639                    ; 004cace0 | = "..\\core\\ground.cpp"
    MOV EAX,0x44                        ; 004cace5
    PUSH 0x5d964c                       ; 004cacea | = "eopen - Cannot open file"
    MOV dword ptr [0x01d046a0],EBP      ; 004cacef | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004cacf5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004cacfa
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004cacff
    MOV dword ptr [ESP + 0xb0],ESI      ; 004cad02
        ;   Label: LAB_004cad02
    XOR EDX,EDX                         ; 004cad09
    MOV ECX,dword ptr [EBX + 0x4]       ; 004cad0b
    MOV dword ptr [ESP + 0xb8],EDX      ; 004cad0e
    TEST ECX,ECX                        ; 004cad15
    JLE 0x004cad70                      ; 004cad17
        ;   XREF to: 004cad70 (CONDITIONAL_JUMP)  ; LAB_004cad70
    MOV EBP,0x2                         ; 004cad19
    MOV EDI,dword ptr [EBX]             ; 004cad1e
        ;   Label: LAB_004cad1e
    XOR ESI,ESI                         ; 004cad20
    TEST EDI,EDI                        ; 004cad22
    JLE 0x004cad5a                      ; 004cad24
        ;   XREF to: 004cad5a (CONDITIONAL_JUMP)  ; LAB_004cad5a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004cad26
        ;   Label: LAB_004cad26
    MOV EDX,dword ptr [EBX]             ; 004cad2d
    PUSH EAX                            ; 004cad2f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004cad30
    IMUL EAX,EDX                        ; 004cad37
    ADD EAX,ESI                         ; 004cad3a
    MOV EDI,dword ptr [EBX + 0x24]      ; 004cad3c
    SHL EAX,0x2                         ; 004cad3f
    PUSH EBP                            ; 004cad42
    ADD EAX,EDI                         ; 004cad43
    PUSH 0x1                            ; 004cad45
    ADD EAX,0x2                         ; 004cad47
    PUSH EAX                            ; 004cad4a
    INC ESI                             ; 004cad4b
    CALL FUN_005b87c0                   ; 004cad4c
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    MOV ECX,dword ptr [EBX]             ; 004cad51
    ADD ESP,0x10                        ; 004cad53
    CMP ESI,ECX                         ; 004cad56
    JL 0x004cad26                       ; 004cad58
        ;   XREF to: 004cad26 (CONDITIONAL_JUMP)  ; LAB_004cad26
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004cad5a
        ;   Label: LAB_004cad5a
    INC EDX                             ; 004cad61
    MOV ECX,dword ptr [EBX + 0x4]       ; 004cad62
    MOV dword ptr [ESP + 0xb8],EDX      ; 004cad65
    CMP EDX,ECX                         ; 004cad6c
    JL 0x004cad1e                       ; 004cad6e
        ;   XREF to: 004cad1e (CONDITIONAL_JUMP)  ; LAB_004cad1e
    MOV ESI,dword ptr [ESP + 0xb0]      ; 004cad70
        ;   Label: LAB_004cad70
    PUSH ESI                            ; 004cad77
    CALL FUN_005b89c0                   ; 004cad78
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 004cad7d
    MOV EDI,dword ptr [ESP + 0xd4]      ; 004cad80
    PUSH EDI                            ; 004cad87
    MOV EBP,dword ptr [EBX + 0x28]      ; 004cad88
    PUSH EBP                            ; 004cad8b
    CALL FUN_005734b0                   ; 004cad8c
        ;   XREF to: 005734b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005734b0()
    ADD ESP,0x8                         ; 004cad91
    ADD ESP,0xbc                        ; 004cad94
    POP EBP                             ; 004cad9a
    POP EDI                             ; 004cad9b
    POP ESI                             ; 004cad9c
    POP EBX                             ; 004cad9d
    MOV EAX,EAX                         ; 004cad9e
    RET                                 ; 004cada0
    MOV ESI,0x5d960f                    ; 004cada1 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004cada1
    MOV EAX,0x40                        ; 004cada6
    PUSH 0x5d9622                       ; 004cadab | = "eopen - ext not found!"
    MOV dword ptr [0x01d046a0],ESI      ; 004cadb0 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004cadb6 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004cadbb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004cadc0
    JMP 0x004cab37                      ; 004cadc3
        ;   XREF to: 004cab37 (UNCONDITIONAL_JUMP)  ; LAB_004cab37
    LEA EAX,[EBP + -0x1]                ; 004cadc8
        ;   Label: LAB_004cadc8
    MOV dword ptr [ESI + 0x4],EAX       ; 004cadcb
    MOV EAX,dword ptr [ESI]             ; 004cadce
    LEA EDX,[EAX + 0x1]                 ; 004cadd0
    MOV dword ptr [ESI],EDX             ; 004cadd3
    MOV AL,byte ptr [EAX]               ; 004cadd5
    AND EAX,0xff                        ; 004cadd7
    JMP 0x004cabd9                      ; 004caddc
        ;   XREF to: 004cabd9 (UNCONDITIONAL_JUMP)  ; LAB_004cabd9

