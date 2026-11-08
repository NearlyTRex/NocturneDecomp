; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00536990(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b6f30 at 004b7ab1
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_005d05ce+1
;   undefined4 DAT_005d05df
;   undefined4 DAT_005e3bc0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_005fed24
;   undefined4 DAT_006039e0
;   undefined4 DAT_00603b38
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d1e364
;   undefined4 DAT_01d1e368
;   undefined4 DAT_01d1e36c
;   undefined4 DAT_01d1e370
;   ... and 9 more
;
; Called Functions:
;   FUN_00408b80
;   FUN_0045b550
;   FUN_0045c530
;   FUN_0045c7e0
;   FUN_0045fab0
;   FUN_0045ff30
;   FUN_0046d500
;   FUN_004a1ad0
;   FUN_004ce5b0
;   FUN_00533b80
;   FUN_005346b0
;   FUN_005375c0
;   FUN_00539f30
;   FUN_00548090
;   FUN_0054eac0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536990
        ;   Label: FUN_00536990
    PUSH ESI                            ; 00536991
    PUSH EDI                            ; 00536992
    PUSH EBP                            ; 00536993
    MOV EBP,ESP                         ; 00536994
    SUB ESP,0x74                        ; 00536996
    MOV EBX,dword ptr [0x006039e0]      ; 00536999 | DAT_006039e0
    MOV EDX,0x1d1e360                   ; 0053699f
    MOV EBX,dword ptr [EBX + 0x18]      ; 005369a4 | DAT_01ed73f8
    MOV dword ptr [EBP + -0x4],EDX      ; 005369a7
    TEST EBX,EBX                        ; 005369aa
    JNZ 0x005369b5                      ; 005369ac
        ;   XREF to: 005369b5 (CONDITIONAL_JUMP)  ; LAB_005369b5
    MOV ESP,EBP                         ; 005369ae
    POP EBP                             ; 005369b0
    POP EDI                             ; 005369b1
    POP ESI                             ; 005369b2
    POP EBX                             ; 005369b3
    RET                                 ; 005369b4
    LEA ESI,[EBX + 0x158]               ; 005369b5
        ;   Label: LAB_005369b5
    PUSH ESI                            ; 005369bb
    CALL FUN_0054eac0                   ; 005369bc
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 005369c1
    PUSH 0x0                            ; 005369c4
    PUSH 0x5d05cf                       ; 005369c6 | s_Bip01_Head_005d05ce+1
    PUSH EAX                            ; 005369cb
    MOV EDI,0x3ead0e56                  ; 005369cc
    CALL FUN_00548090                   ; 005369d1
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    MOV EDX,EAX                         ; 005369d6
    SHL EAX,0x2                         ; 005369d8
    ADD ESI,0xe80                       ; 005369db
    SUB EAX,EDX                         ; 005369e1
    ADD ESP,0xc                         ; 005369e3
    SHL EAX,0x4                         ; 005369e6
    MOV dword ptr [EBP + -0x4c],EDI     ; 005369e9
    ADD ESI,EAX                         ; 005369ec
    MOV EAX,0x3f400000                  ; 005369ee
    MOV dword ptr [EBP + -0x8],ESI      ; 005369f3
    PUSH ESI                            ; 005369f6
    MOV dword ptr [EBP + -0x48],EAX     ; 005369f7
    XOR ESI,ESI                         ; 005369fa
    LEA EAX,[EBP + -0x50]               ; 005369fc
    MOV dword ptr [EBP + -0x50],ESI     ; 005369ff
    PUSH EAX                            ; 00536a02
    LEA ESI,[EBP + -0x44]               ; 00536a03
    LEA EDI,[EBP + -0x68]               ; 00536a06
    CALL FUN_00583260                   ; 00536a09
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    ADD ESP,0x8                         ; 00536a0e
    LEA EAX,[EBP + -0x68]               ; 00536a11
    LEA ESI,[EBP + -0x44]               ; 00536a14
    PUSH EAX                            ; 00536a17
    MOVSD ES:EDI,ESI                    ; 00536a18
    MOVSD ES:EDI,ESI                    ; 00536a19
    MOVSD ES:EDI,ESI                    ; 00536a1a
    PUSH EBX                            ; 00536a1b
    LEA ESI,[EBP + -0x14]               ; 00536a1c
    LEA EDI,[EBP + -0x74]               ; 00536a1f
    CALL FUN_00408b80                   ; 00536a22
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[EBP + -0x14]               ; 00536a27
    MOV EDX,dword ptr [EBP + -0x8]      ; 00536a2a
    ADD ESP,0x8                         ; 00536a2d
    MOVSD ES:EDI,ESI                    ; 00536a30
    MOVSD ES:EDI,ESI                    ; 00536a31
    MOVSD ES:EDI,ESI                    ; 00536a32
    PUSH EDX                            ; 00536a33
    LEA ESI,[EBP + -0x20]               ; 00536a34
    LEA EDI,[EBP + -0x2c]               ; 00536a37
    CALL FUN_00583b10                   ; 00536a3a
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    LEA ESI,[EBP + -0x20]               ; 00536a3f
    MOV EDX,0x1d1e360                   ; 00536a42
    LEA EAX,[EBP + -0x74]               ; 00536a47
    XOR ECX,ECX                         ; 00536a4a
    ADD ESP,0x4                         ; 00536a4c
    MOV dword ptr [EBP + -0x34],ECX     ; 00536a4f
    MOV dword ptr [EBP + -0x30],ECX     ; 00536a52
    MOVSD ES:EDI,ESI                    ; 00536a55
    MOVSD ES:EDI,ESI                    ; 00536a56
    MOVSD ES:EDI,ESI                    ; 00536a57
    MOV dword ptr [0x01d2001c],ECX      ; 00536a58 | DAT_01d2001c
    FLD float ptr [EBP + -0x2c]         ; 00536a5e
    FADD double ptr [0x005d05df]        ; 00536a61 | DAT_005d05df
    FLD float ptr [EBP + -0x28]         ; 00536a67
    FXCH                                ; 00536a6a
    FSTP float ptr [EBP + -0x38]        ; 00536a6c
    FADD float ptr [EBX + 0x34]         ; 00536a6f
    ADD EDX,0x4                         ; 00536a72
    FSTP float ptr [EBP + -0x34]        ; 00536a75
    CMP EDX,EAX                         ; 00536a78
    JZ 0x00536a8d                       ; 00536a7a
        ;   XREF to: 00536a8d (CONDITIONAL_JUMP)  ; LAB_00536a8d
    MOV EAX,dword ptr [EBP + -0x74]     ; 00536a7c
    MOV dword ptr [EDX],EAX             ; 00536a7f | DAT_01d1e364
    MOV EAX,dword ptr [EBP + -0x70]     ; 00536a81
    MOV dword ptr [EDX + 0x4],EAX       ; 00536a84 | DAT_01d1e368
    MOV EAX,dword ptr [EBP + -0x6c]     ; 00536a87
    MOV dword ptr [EDX + 0x8],EAX       ; 00536a8a | DAT_01d1e36c
    LEA EAX,[EBP + -0x38]               ; 00536a8d
        ;   Label: LAB_00536a8d
    PUSH EAX                            ; 00536a90
    MOV EAX,dword ptr [EBP + -0x4]      ; 00536a91
    ADD EAX,0x10                        ; 00536a94
    PUSH EAX                            ; 00536a97 | DAT_01d1e370
    CALL FUN_0045b550                   ; 00536a98
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b550()
    ADD ESP,0x8                         ; 00536a9d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00536aa0
    PUSH 0x3f800000                     ; 00536aa3
    MOV dword ptr [EAX + 0x140],0x42280000 ; 00536aa8 | DAT_01d1e4a0
    PUSH EAX                            ; 00536ab2
    MOV dword ptr [EAX + 0x38],0x41d00000 ; 00536ab3 | DAT_01d1e398
    CALL FUN_0045fab0                   ; 00536aba
        ;   XREF to: 0045fab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fab0()
    LEA EAX,[EBP + -0x74]               ; 00536abf
    ADD ESP,0x8                         ; 00536ac2
    CMP EAX,0x2038f50                   ; 00536ac5
    JZ 0x00536ae4                       ; 00536aca
        ;   XREF to: 00536ae4 (CONDITIONAL_JUMP)  ; LAB_00536ae4
    MOV EAX,dword ptr [EBP + -0x74]     ; 00536acc
    MOV [0x02038f50],EAX                ; 00536acf | DAT_02038f50
    MOV EAX,dword ptr [EBP + -0x70]     ; 00536ad4
    MOV [0x02038f54],EAX                ; 00536ad7 | DAT_02038f54
    MOV EAX,dword ptr [EBP + -0x6c]     ; 00536adc
    MOV [0x02038f58],EAX                ; 00536adf | DAT_02038f58
    PUSH 0x0                            ; 00536ae4
        ;   Label: LAB_00536ae4
    MOV EDX,dword ptr [EBP + -0x4]      ; 00536ae6
    PUSH EDX                            ; 00536ae9
    CALL FUN_0045c530                   ; 00536aea
        ;   XREF to: 0045c530 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c530()
    ADD ESP,0x8                         ; 00536aef
    XOR ECX,ECX                         ; 00536af2
    MOV EAX,dword ptr [EBP + -0x4]      ; 00536af4
    PUSH ECX                            ; 00536af7
    MOV EBX,dword ptr [EBP + 0x14]      ; 00536af8
    PUSH dword ptr [EAX + 0x140]        ; 00536afb | DAT_01d1e4a0
    PUSH EBX                            ; 00536b01
    MOV dword ptr [0x00603b38],ECX      ; 00536b02 | DAT_00603b38
    CALL FUN_00533b80                   ; 00536b08
        ;   XREF to: 00533b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00533b80()
    ADD ESP,0xc                         ; 00536b0d
    PUSH -0x1                           ; 00536b10
    MOV ESI,0x1                         ; 00536b12
    PUSH EBX                            ; 00536b17
    MOV dword ptr [0x00603b38],ESI      ; 00536b18 | DAT_00603b38
    CALL FUN_00539f30                   ; 00536b1e
        ;   XREF to: 00539f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00539f30()
    ADD ESP,0x8                         ; 00536b23
    PUSH ESI                            ; 00536b26
    PUSH EBX                            ; 00536b27
    CALL FUN_005346b0                   ; 00536b28
        ;   XREF to: 005346b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005346b0()
    ADD ESP,0x8                         ; 00536b2d
    PUSH ESI                            ; 00536b30
    PUSH EBX                            ; 00536b31
    MOV EDI,EBX                         ; 00536b32
    CALL FUN_00539f30                   ; 00536b34
        ;   XREF to: 00539f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00539f30()
    MOV EAX,EDI                         ; 00536b39
    ADD ESP,0x8                         ; 00536b3b
    MOV ECX,dword ptr [EAX + 0x15f6fc]  ; 00536b3e
    XOR EBX,EBX                         ; 00536b44
    TEST ECX,ECX                        ; 00536b46
    JLE 0x00536b90                      ; 00536b48
        ;   XREF to: 00536b90 (CONDITIONAL_JUMP)  ; LAB_00536b90
    MOV ESI,EAX                         ; 00536b4a
    MOV EAX,dword ptr [ESI + 0x15f700]  ; 00536b4c
        ;   Label: LAB_00536b4c
    PUSH EAX                            ; 00536b52
    MOV EDX,dword ptr [EAX + 0x154]     ; 00536b53
    CALL dword ptr [EDX + 0x10]         ; 00536b59
    ADD ESP,0x4                         ; 00536b5c
    PUSH 0x1                            ; 00536b5f
    MOV EDI,dword ptr [0x005f2afc]      ; 00536b61 | DAT_005f2afc
    PUSH EDI                            ; 00536b67 | DAT_01bdd7e4
    CALL FUN_0046d500                   ; 00536b68
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d500()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00536b6d
    ADD ESI,0x4                         ; 00536b70
    INC EBX                             ; 00536b73
    MOV EDX,dword ptr [EAX + 0x15f6fc]  ; 00536b74
    ADD ESP,0x8                         ; 00536b7a
    CMP EBX,EDX                         ; 00536b7d
    JL 0x00536b4c                       ; 00536b7f
        ;   XREF to: 00536b4c (CONDITIONAL_JUMP)  ; LAB_00536b4c
    LEA EAX,[EAX]                       ; 00536b81
    LEA EDX,[EDX]                       ; 00536b87
    LEA EAX,[EAX]                       ; 00536b8d
    MOV ECX,dword ptr [0x005fed24]      ; 00536b90 | DAT_005fed24
        ;   Label: LAB_00536b90
    PUSH ECX                            ; 00536b96
    CALL FUN_004ce5b0                   ; 00536b97
        ;   XREF to: 004ce5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce5b0()
    ADD ESP,0x4                         ; 00536b9c
    MOV EBX,dword ptr [0x005fc5a0]      ; 00536b9f | DAT_005fc5a0
    PUSH EBX                            ; 00536ba5
    CALL FUN_004a1ad0                   ; 00536ba6
        ;   XREF to: 004a1ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1ad0()
    ADD ESP,0x4                         ; 00536bab
    PUSH 0x1                            ; 00536bae
    MOV ESI,dword ptr [EBP + -0x4]      ; 00536bb0
    PUSH ESI                            ; 00536bb3
    CALL FUN_0045c7e0                   ; 00536bb4
        ;   XREF to: 0045c7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c7e0()
    ADD ESP,0x8                         ; 00536bb9
    LEA EBX,[EBP + -0x5c]               ; 00536bbc
    LEA EAX,[EBP + -0x74]               ; 00536bbf
    FLD float ptr [EAX]                 ; 00536bc2
    FMUL float ptr [0x005e3bc0]         ; 00536bc4 | DAT_005e3bc0
    FISTP dword ptr [EBX]               ; 00536bca
    FLD float ptr [EAX + 0x4]           ; 00536bcc
    FMUL float ptr [0x005e3bc0]         ; 00536bcf | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x4]         ; 00536bd5
    FLD float ptr [EAX + 0x8]           ; 00536bd8
    FMUL float ptr [0x005e3bc0]         ; 00536bdb | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x8]         ; 00536be1
    PUSH 0x0                            ; 00536be4
    PUSH 0x0                            ; 00536be6
    PUSH 0x0                            ; 00536be8
    PUSH 0x0                            ; 00536bea
    PUSH 0x0                            ; 00536bec
    MOV EDI,dword ptr [EBP + 0x14]      ; 00536bee
    PUSH EDI                            ; 00536bf1
    XOR ESI,ESI                         ; 00536bf2
    CALL FUN_005375c0                   ; 00536bf4
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005375c0()
    MOV EAX,[0x005fba1c]                ; 00536bf9 | DAT_005fba1c
    ADD ESP,0x18                        ; 00536bfe
    CMP EAX,0xf0                        ; 00536c01
    JLE 0x00536c56                      ; 00536c06
        ;   XREF to: 00536c56 (CONDITIONAL_JUMP)  ; LAB_00536c56
    MOV EDX,dword ptr [EBP + -0x4]      ; 00536c08
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 00536c0b | DAT_01d20020
    MOV EAX,[0x005fba18]                ; 00536c11 | DAT_005fba18
    ADD EDX,EDX                         ; 00536c16
    SUB EAX,EDX                         ; 00536c18
    MOV EDX,EAX                         ; 00536c1a
    SAR EDX,0x1f                        ; 00536c1c
    SUB EAX,EDX                         ; 00536c1f
    SAR EAX,0x1                         ; 00536c21
    MOV EDX,dword ptr [EBP + -0x4]      ; 00536c23
    MOV EBX,EAX                         ; 00536c26
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 00536c28 | DAT_01d20024
    MOV EAX,[0x005fba1c]                ; 00536c2e | DAT_005fba1c
    ADD EDX,EDX                         ; 00536c33
    SUB EAX,EDX                         ; 00536c35
    MOV EDX,EAX                         ; 00536c37
    SAR EDX,0x1f                        ; 00536c39
        ;   Label: LAB_00536c39
    SUB EAX,EDX                         ; 00536c3c
    SAR EAX,0x1                         ; 00536c3e
    PUSH ESI                            ; 00536c40
    PUSH EAX                            ; 00536c41
    PUSH EBX                            ; 00536c42
    MOV EAX,dword ptr [EBP + -0x4]      ; 00536c43
    PUSH EAX                            ; 00536c46
    CALL FUN_0045ff30                   ; 00536c47
        ;   XREF to: 0045ff30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ff30()
    ADD ESP,0x10                        ; 00536c4c
    MOV ESP,EBP                         ; 00536c4f
    POP EBP                             ; 00536c51
    POP EDI                             ; 00536c52
    POP ESI                             ; 00536c53
    POP EBX                             ; 00536c54
    RET                                 ; 00536c55
    MOV EAX,dword ptr [EBP + -0x4]      ; 00536c56
        ;   Label: LAB_00536c56
    MOV EDX,dword ptr [0x005fba18]      ; 00536c59 | DAT_005fba18
    MOV ECX,dword ptr [EAX + 0x1cc0]    ; 00536c5f | DAT_01d20020
    SUB EDX,ECX                         ; 00536c65
    MOV EAX,EDX                         ; 00536c67
    SAR EDX,0x1f                        ; 00536c69
    SUB EAX,EDX                         ; 00536c6c
    SAR EAX,0x1                         ; 00536c6e
    MOV EBX,EAX                         ; 00536c70
    MOV EAX,dword ptr [EBP + -0x4]      ; 00536c72
    MOV EDX,dword ptr [0x005fba1c]      ; 00536c75 | DAT_005fba1c
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 00536c7b | DAT_01d20024
    SUB EDX,EDI                         ; 00536c81
    MOV EAX,EDX                         ; 00536c83
    JMP 0x00536c39                      ; 00536c85
        ;   XREF to: 00536c39 (UNCONDITIONAL_JUMP)  ; LAB_00536c39

