; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_FUN_004a9870(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character_code
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
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
;   engine_font.cpp_FUN_004a8df0 at 004a9084
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_006141d8
;   undefined4 DAT_0061c8d0
;   undefined4 DAT_0061c8d8
;   undefined4 DAT_0061c8e0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c3581c
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c35828
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;   undefined4 DAT_01c35834
;   ... and 8 more
;
; Called Functions:
;   engine_font.cpp_clipCharacter_FUN_004a7ab0
;   engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9870
        ;   Label: engine_font.cpp_FUN_004a9870
    PUSH ESI                            ; 004a9871
    PUSH EDI                            ; 004a9872
    PUSH EBP                            ; 004a9873
    SUB ESP,0xc8                        ; 004a9874
    MOV EBX,dword ptr [ESP + 0xdc]      ; 004a987a
    MOV ESI,dword ptr [ESP + 0xe0]      ; 004a9881
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004a9888
    TEST ESI,ESI                        ; 004a988f
    JL 0x004a9aa0                       ; 004a9891
        ;   XREF to: 004a9aa0 (CONDITIONAL_JUMP)  ; LAB_004a9aa0
    CMP ESI,0x100                       ; 004a9897
    JGE 0x004a9aa0                      ; 004a989d
        ;   XREF to: 004a9aa0 (CONDITIONAL_JUMP)  ; LAB_004a9aa0
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x35e8] ; 004a98a3
    ADD EAX,dword ptr [EBX + 0x41f4]    ; 004a98aa
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1de8] ; 004a98b0
    MOV dword ptr [ESP],EAX             ; 004a98b7
    TEST EDI,EDI                        ; 004a98ba
    JZ 0x004a9aaf                       ; 004a98bc
        ;   XREF to: 004a9aaf (CONDITIONAL_JUMP)  ; LAB_004a9aaf
    CMP dword ptr [EBX + 0x420c],0x0    ; 004a98c2
    JNZ 0x004a98fd                      ; 004a98c9
        ;   XREF to: 004a98fd (CONDITIONAL_JUMP)  ; LAB_004a98fd
    CMP ECX,-0x1                        ; 004a98cb
    JZ 0x004a98fd                       ; 004a98ce
        ;   XREF to: 004a98fd (CONDITIONAL_JUMP)  ; LAB_004a98fd
    PUSH -0x1                           ; 004a98d0
    MOV EAX,dword ptr [ESP + 0xec]      ; 004a98d2
    MOV EDX,dword ptr [EBX + 0x4200]    ; 004a98d9
    PUSH ECX                            ; 004a98df
    ADD EAX,EDX                         ; 004a98e0
    PUSH EAX                            ; 004a98e2
    MOV ECX,dword ptr [EBX + 0x41fc]    ; 004a98e3
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004a98e9
    ADD EAX,ECX                         ; 004a98f0
    PUSH EAX                            ; 004a98f2
    PUSH ESI                            ; 004a98f3
    PUSH EBX                            ; 004a98f4
    CALL engine_font.cpp_FUN_004a9870   ; 004a98f5
        ;   XREF to: 004a9870 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004a9870(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x18                        ; 004a98fa
    LEA EDX,[ESI*0x4 + 0x0]             ; 004a98fd
        ;   Label: LAB_004a98fd
    ADD EDX,EBX                         ; 004a9904
    MOV EAX,dword ptr [EDX + 0x1de8]    ; 004a9906
    MOV dword ptr [ESP + 0x4],EAX       ; 004a990c
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004a9910
    MOV EAX,dword ptr [EDX + 0x3de8]    ; 004a9917
    ADD ESI,EAX                         ; 004a991d
    MOV dword ptr [ESP + 0xe8],ESI      ; 004a991f
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004a9926
    ADD EAX,dword ptr [EDX + 0x35e8]    ; 004a992d
    DEC EAX                             ; 004a9933
    MOV dword ptr [ESP + 0x8],EAX       ; 004a9934
    MOV EBP,dword ptr [EDX + 0x39e8]    ; 004a9938
    LEA EAX,[ESI + EBP*0x1 + -0x1]      ; 004a993e
    MOV dword ptr [ESP + 0xc],EAX       ; 004a9942
    MOV EAX,dword ptr [EDX + 0x21e8]    ; 004a9946
    MOV ESI,EAX                         ; 004a994c
    MOV dword ptr [ESP + 0x10],EAX      ; 004a994e
    MOV EAX,dword ptr [EBX + 0x4204]    ; 004a9952
    MOV ESI,dword ptr [EBX + ESI*0x4 + 0x1a4] ; 004a9958
    TEST EAX,EAX                        ; 004a995f
    JNZ 0x004a9abe                      ; 004a9961
        ;   XREF to: 004a9abe (CONDITIONAL_JUMP)  ; LAB_004a9abe
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004a9967
    MOV EDI,dword ptr [0x01c35e48]      ; 004a996e | DAT_01c35e48
    MOV ECX,dword ptr [EDX + 0x35e8]    ; 004a9974
    MOV EDX,dword ptr [EDX + 0x39e8]    ; 004a997a
    CMP EAX,EDI                         ; 004a9980
    JL 0x004a9a90                       ; 004a9982
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004a9988
    CMP EAX,dword ptr [0x01c35e4c]      ; 004a998f | DAT_01c35e4c
    JL 0x004a9a90                       ; 004a9995
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EAX,[0x01c35e50]                ; 004a999b | DAT_01c35e50
    INC EAX                             ; 004a99a0
    SUB EAX,ECX                         ; 004a99a1
    CMP EAX,dword ptr [ESP + 0xe4]      ; 004a99a3
    JL 0x004a9a90                       ; 004a99aa
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EAX,[0x01c35e54]                ; 004a99b0 | DAT_01c35e54
    INC EAX                             ; 004a99b5
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004a99b6
    SUB EAX,EDX                         ; 004a99bd
    CMP EAX,EDI                         ; 004a99bf
    JL 0x004a9a90                       ; 004a99c1
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a99c7
        ;   Label: LAB_004a99c7
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004a99cb
    INC EAX                             ; 004a99d2
    SUB ESI,EAX                         ; 004a99d3
    MOV EAX,[0x006141c0]                ; 004a99d5 | DAT_006141c0
    MOV dword ptr [ESP + 0x14],ESI      ; 004a99da
    CMP EAX,0x8                         ; 004a99de
    JNZ 0x004a9cc2                      ; 004a99e1
        ;   XREF to: 004a9cc2 (CONDITIONAL_JUMP)  ; LAB_004a9cc2
    MOV ECX,dword ptr [ESP + 0xec]      ; 004a99e7
    CMP ECX,-0x1                        ; 004a99ee
    JNZ 0x004a9afe                      ; 004a99f1
        ;   XREF to: 004a9afe (CONDITIONAL_JUMP)  ; LAB_004a9afe
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004a99f7
    MOV ESI,dword ptr [ESP + 0xc]       ; 004a99fe
    MOV dword ptr [ESP + 0x18],EAX      ; 004a9a02
    CMP EAX,ESI                         ; 004a9a06
    JG 0x004a9a90                       ; 004a9a08
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    LEA ESI,[EAX*0x4 + 0x0]             ; 004a9a0e
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004a9a15
        ;   Label: LAB_004a9a15
    MOV EBP,dword ptr [ESP + 0x8]       ; 004a9a1c
    MOV ECX,dword ptr [ESI + 0x1c2a38c] ; 004a9a20 | DAT_01c2a38c
    MOV EDX,EDI                         ; 004a9a26
    ADD ECX,EDI                         ; 004a9a28
    CMP EDI,EBP                         ; 004a9a2a
    JG 0x004a9a5c                       ; 004a9a2c
        ;   XREF to: 004a9a5c (CONDITIONAL_JUMP)  ; LAB_004a9a5c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9a2e
        ;   Label: LAB_004a9a2e
    MOV AL,byte ptr [EAX]               ; 004a9a32
    AND EAX,0xff                        ; 004a9a34
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004a9a39
    JZ 0x004a9a49                       ; 004a9a3f
        ;   XREF to: 004a9a49 (CONDITIONAL_JUMP)  ; LAB_004a9a49
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9a41
    MOV AL,byte ptr [EAX]               ; 004a9a45
    MOV byte ptr [ECX],AL               ; 004a9a47
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9a49
        ;   Label: LAB_004a9a49
    MOV EDI,dword ptr [ESP + 0x8]       ; 004a9a4d
    INC ECX                             ; 004a9a51
    INC EAX                             ; 004a9a52
    INC EDX                             ; 004a9a53
    MOV dword ptr [ESP + 0x4],EAX       ; 004a9a54
    CMP EDX,EDI                         ; 004a9a58
    JLE 0x004a9a2e                      ; 004a9a5a
        ;   XREF to: 004a9a2e (CONDITIONAL_JUMP)  ; LAB_004a9a2e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a9a5c
        ;   Label: LAB_004a9a5c
    MOV EDX,dword ptr [ESP + 0x4]       ; 004a9a60
    INC EAX                             ; 004a9a64
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a9a65
    MOV dword ptr [ESP + 0x18],EAX      ; 004a9a69
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a9a6d
    ADD ESI,0x4                         ; 004a9a71
    ADD EDX,EAX                         ; 004a9a74
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a9a76
    MOV dword ptr [ESP + 0x4],EDX       ; 004a9a7a
    CMP EAX,ECX                         ; 004a9a7e
    JLE 0x004a9a15                      ; 004a9a80
        ;   XREF to: 004a9a15 (CONDITIONAL_JUMP)  ; LAB_004a9a15
    LEA EAX,[EAX]                       ; 004a9a82
    LEA EDX,[EDX]                       ; 004a9a88
    MOV EAX,EAX                         ; 004a9a8e
    MOV EBX,dword ptr [ESP]             ; 004a9a90
        ;   Label: LAB_004a9a90
    MOV EAX,EBX                         ; 004a9a93
    ADD ESP,0xc8                        ; 004a9a95
    POP EBP                             ; 004a9a9b
    POP EDI                             ; 004a9a9c
    POP ESI                             ; 004a9a9d
    POP EBX                             ; 004a9a9e
    RET                                 ; 004a9a9f
    XOR EBX,EBX                         ; 004a9aa0
        ;   Label: LAB_004a9aa0
    MOV EAX,EBX                         ; 004a9aa2
    ADD ESP,0xc8                        ; 004a9aa4
    POP EBP                             ; 004a9aaa
    POP EDI                             ; 004a9aab
    POP ESI                             ; 004a9aac
    POP EBX                             ; 004a9aad
    RET                                 ; 004a9aae
    MOV EBX,EAX                         ; 004a9aaf
        ;   Label: LAB_004a9aaf
    MOV EAX,EBX                         ; 004a9ab1
    ADD ESP,0xc8                        ; 004a9ab3
    POP EBP                             ; 004a9ab9
    POP EDI                             ; 004a9aba
    POP ESI                             ; 004a9abb
    POP EBX                             ; 004a9abc
    RET                                 ; 004a9abd
    PUSH ESI                            ; 004a9abe
        ;   Label: LAB_004a9abe
    LEA EAX,[ESP + 0x10]                ; 004a9abf
    PUSH EAX                            ; 004a9ac3
    LEA EAX,[ESP + 0x10]                ; 004a9ac4
    PUSH EAX                            ; 004a9ac8
    LEA EAX,[ESP + 0xf4]                ; 004a9ac9
    PUSH EAX                            ; 004a9ad0
    LEA EAX,[ESP + 0xf4]                ; 004a9ad1
    PUSH EAX                            ; 004a9ad8
    LEA EAX,[ESP + 0x18]                ; 004a9ad9
    PUSH EAX                            ; 004a9add
    CALL engine_font.cpp_clipCharacter_FUN_004a7ab0 ; 004a9ade
        ;   XREF to: 004a7ab0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_clipCharacter_FUN_004a7ab0(int * bitmap_offset, int * left_x, int * top_y, int * right_x, ...)
    ADD ESP,0x18                        ; 004a9ae3
    TEST EAX,EAX                        ; 004a9ae6
    JZ 0x004a99c7                       ; 004a9ae8
        ;   XREF to: 004a99c7 (CONDITIONAL_JUMP)  ; LAB_004a99c7
    MOV EBX,dword ptr [ESP]             ; 004a9aee
    MOV EAX,EBX                         ; 004a9af1
    ADD ESP,0xc8                        ; 004a9af3
    POP EBP                             ; 004a9af9
    POP EDI                             ; 004a9afa
    POP ESI                             ; 004a9afb
    POP EBX                             ; 004a9afc
    RET                                 ; 004a9afd
    CMP ECX,-0x2                        ; 004a9afe
        ;   Label: LAB_004a9afe
    JNZ 0x004a9b97                      ; 004a9b01
        ;   XREF to: 004a9b97 (CONDITIONAL_JUMP)  ; LAB_004a9b97
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004a9b07
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a9b0e
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a9b12
    CMP EAX,ECX                         ; 004a9b16
    JG 0x004a9a90                       ; 004a9b18
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    LEA ESI,[EAX*0x4 + 0x0]             ; 004a9b1e
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004a9b25
        ;   Label: LAB_004a9b25
    MOV EBP,dword ptr [ESP + 0x8]       ; 004a9b2c
    MOV EDX,dword ptr [ESI + 0x1c2a38c] ; 004a9b30 | DAT_01c2a38c
    MOV ECX,EDI                         ; 004a9b36
    ADD EDX,EDI                         ; 004a9b38
    CMP EDI,EBP                         ; 004a9b3a
    JG 0x004a9b6b                       ; 004a9b3c
        ;   XREF to: 004a9b6b (CONDITIONAL_JUMP)  ; LAB_004a9b6b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9b3e
        ;   Label: LAB_004a9b3e
    MOV AL,byte ptr [EAX]               ; 004a9b42
    AND EAX,0xff                        ; 004a9b44
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004a9b49
    JZ 0x004a9b58                       ; 004a9b4f
        ;   XREF to: 004a9b58 (CONDITIONAL_JUMP)  ; LAB_004a9b58
    MOV AL,[0x01cb0240]                 ; 004a9b51 | DAT_01cb0240
    MOV byte ptr [EDX],AL               ; 004a9b56
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9b58
        ;   Label: LAB_004a9b58
    MOV EDI,dword ptr [ESP + 0x8]       ; 004a9b5c
    INC EDX                             ; 004a9b60
    INC EAX                             ; 004a9b61
    INC ECX                             ; 004a9b62
    MOV dword ptr [ESP + 0x4],EAX       ; 004a9b63
    CMP ECX,EDI                         ; 004a9b67
    JLE 0x004a9b3e                      ; 004a9b69
        ;   XREF to: 004a9b3e (CONDITIONAL_JUMP)  ; LAB_004a9b3e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a9b6b
        ;   Label: LAB_004a9b6b
    MOV EDX,dword ptr [ESP + 0x4]       ; 004a9b6f
    INC EAX                             ; 004a9b73
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a9b74
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a9b78
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a9b7c
    ADD ESI,0x4                         ; 004a9b80
    ADD EDX,EAX                         ; 004a9b83
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a9b85
    MOV dword ptr [ESP + 0x4],EDX       ; 004a9b89
    CMP EAX,ECX                         ; 004a9b8d
    JG 0x004a9a90                       ; 004a9b8f
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004a9b25                      ; 004a9b95
        ;   XREF to: 004a9b25 (UNCONDITIONAL_JUMP)  ; LAB_004a9b25
    CMP ECX,-0x3                        ; 004a9b97
        ;   Label: LAB_004a9b97
    JNZ 0x004a9c30                      ; 004a9b9a
        ;   XREF to: 004a9c30 (CONDITIONAL_JUMP)  ; LAB_004a9c30
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004a9ba0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a9ba7
    MOV dword ptr [ESP + 0x20],EAX      ; 004a9bab
    CMP EAX,EDX                         ; 004a9baf
    JG 0x004a9a90                       ; 004a9bb1
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    LEA ESI,[EAX*0x4 + 0x0]             ; 004a9bb7
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004a9bbe
        ;   Label: LAB_004a9bbe
    MOV EBP,dword ptr [ESP + 0x8]       ; 004a9bc5
    MOV EDX,dword ptr [ESI + 0x1c2a38c] ; 004a9bc9 | DAT_01c2a38c
    MOV ECX,EDI                         ; 004a9bcf
    ADD EDX,EDI                         ; 004a9bd1
    CMP EDI,EBP                         ; 004a9bd3
    JG 0x004a9c04                       ; 004a9bd5
        ;   XREF to: 004a9c04 (CONDITIONAL_JUMP)  ; LAB_004a9c04
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9bd7
        ;   Label: LAB_004a9bd7
    MOV AL,byte ptr [EAX]               ; 004a9bdb
    AND EAX,0xff                        ; 004a9bdd
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004a9be2
    JZ 0x004a9bf1                       ; 004a9be8
        ;   XREF to: 004a9bf1 (CONDITIONAL_JUMP)  ; LAB_004a9bf1
    MOV AL,[0x01cb0254]                 ; 004a9bea | DAT_01cb0254
    MOV byte ptr [EDX],AL               ; 004a9bef
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9bf1
        ;   Label: LAB_004a9bf1
    MOV EDI,dword ptr [ESP + 0x8]       ; 004a9bf5
    INC EDX                             ; 004a9bf9
    INC EAX                             ; 004a9bfa
    INC ECX                             ; 004a9bfb
    MOV dword ptr [ESP + 0x4],EAX       ; 004a9bfc
    CMP ECX,EDI                         ; 004a9c00
    JLE 0x004a9bd7                      ; 004a9c02
        ;   XREF to: 004a9bd7 (CONDITIONAL_JUMP)  ; LAB_004a9bd7
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a9c04
        ;   Label: LAB_004a9c04
    MOV EDX,dword ptr [ESP + 0x4]       ; 004a9c08
    INC EAX                             ; 004a9c0c
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a9c0d
    MOV dword ptr [ESP + 0x20],EAX      ; 004a9c11
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a9c15
    ADD ESI,0x4                         ; 004a9c19
    ADD EDX,EAX                         ; 004a9c1c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a9c1e
    MOV dword ptr [ESP + 0x4],EDX       ; 004a9c22
    CMP EAX,ECX                         ; 004a9c26
    JG 0x004a9a90                       ; 004a9c28
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004a9bbe                      ; 004a9c2e
        ;   XREF to: 004a9bbe (UNCONDITIONAL_JUMP)  ; LAB_004a9bbe
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004a9c30
        ;   Label: LAB_004a9c30
    MOV EBP,dword ptr [ESP + 0xc]       ; 004a9c37
    MOV dword ptr [ESP + 0x24],EAX      ; 004a9c3b
    CMP EAX,EBP                         ; 004a9c3f
    JG 0x004a9a90                       ; 004a9c41
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    LEA ESI,[EAX*0x4 + 0x0]             ; 004a9c47
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004a9c4e
        ;   Label: LAB_004a9c4e
    MOV EBP,dword ptr [ESP + 0x8]       ; 004a9c55
    MOV ECX,dword ptr [ESI + 0x1c2a38c] ; 004a9c59 | DAT_01c2a38c
    MOV EDX,EDI                         ; 004a9c5f
    ADD ECX,EDI                         ; 004a9c61
    CMP EDI,EBP                         ; 004a9c63
    JG 0x004a9c96                       ; 004a9c65
        ;   XREF to: 004a9c96 (CONDITIONAL_JUMP)  ; LAB_004a9c96
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9c67
        ;   Label: LAB_004a9c67
    MOV AL,byte ptr [EAX]               ; 004a9c6b
    AND EAX,0xff                        ; 004a9c6d
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004a9c72
    JZ 0x004a9c83                       ; 004a9c78
        ;   XREF to: 004a9c83 (CONDITIONAL_JUMP)  ; LAB_004a9c83
    MOV AL,byte ptr [ESP + 0xec]        ; 004a9c7a
    MOV byte ptr [ECX],AL               ; 004a9c81
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9c83
        ;   Label: LAB_004a9c83
    MOV EDI,dword ptr [ESP + 0x8]       ; 004a9c87
    INC ECX                             ; 004a9c8b
    INC EAX                             ; 004a9c8c
    INC EDX                             ; 004a9c8d
    MOV dword ptr [ESP + 0x4],EAX       ; 004a9c8e
    CMP EDX,EDI                         ; 004a9c92
    JLE 0x004a9c67                      ; 004a9c94
        ;   XREF to: 004a9c67 (CONDITIONAL_JUMP)  ; LAB_004a9c67
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a9c96
        ;   Label: LAB_004a9c96
    MOV EDX,dword ptr [ESP + 0x4]       ; 004a9c9a
    INC EAX                             ; 004a9c9e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a9c9f
    MOV dword ptr [ESP + 0x24],EAX      ; 004a9ca3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a9ca7
    ADD ESI,0x4                         ; 004a9cab
    ADD EDX,EAX                         ; 004a9cae
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a9cb0
    MOV dword ptr [ESP + 0x4],EDX       ; 004a9cb4
    CMP EAX,ECX                         ; 004a9cb8
    JG 0x004a9a90                       ; 004a9cba
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004a9c4e                      ; 004a9cc0
        ;   XREF to: 004a9c4e (UNCONDITIONAL_JUMP)  ; LAB_004a9c4e
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004a9cc2
        ;   Label: LAB_004a9cc2
    SHL EDX,0x2                         ; 004a9cc9
    CMP EAX,0x10                        ; 004a9ccc
    JNZ 0x004aaa2e                      ; 004a9ccf
        ;   XREF to: 004aaa2e (CONDITIONAL_JUMP)  ; LAB_004aaa2e
    MOV ESI,dword ptr [ESP + 0xec]      ; 004a9cd5
    CMP ESI,-0x1                        ; 004a9cdc
    JNZ 0x004aa046                      ; 004a9cdf
        ;   XREF to: 004aa046 (CONDITIONAL_JUMP)  ; LAB_004aa046
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004a9ce5
    JZ 0x004a9fb2                       ; 004a9cec
        ;   XREF to: 004a9fb2 (CONDITIONAL_JUMP)  ; LAB_004a9fb2
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004a9cf2
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a9cf9
    MOV dword ptr [ESP + 0x28],EAX      ; 004a9cfd
    CMP EAX,EDX                         ; 004a9d01
    JG 0x004a9a90                       ; 004a9d03
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a9d09
    SHL EAX,0xa                         ; 004a9d0d
    LEA EDX,[EBX + EAX*0x1]             ; 004a9d10
    MOV dword ptr [ESP + 0x40],EDX      ; 004a9d13
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a9d17
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a9d1b
    SUB EAX,EDX                         ; 004a9d22
    SHL EAX,0x8                         ; 004a9d24
    ADD EBX,EAX                         ; 004a9d27
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a9d29
    SHL EAX,0x2                         ; 004a9d2d
    MOV dword ptr [ESP + 0x30],EBX      ; 004a9d30
    MOV dword ptr [ESP + 0xb0],EAX      ; 004a9d34
    MOV EBX,dword ptr [ESP + 0xb0]      ; 004a9d3b
        ;   Label: LAB_004a9d3b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004a9d42
    MOV EBX,dword ptr [EBX + 0x1c2a38c] ; 004a9d49 | DAT_01c2a38c
    ADD EAX,EAX                         ; 004a9d4f
    ADD EBX,EAX                         ; 004a9d51
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004a9d53
    MOV EDI,dword ptr [ESP + 0x8]       ; 004a9d5a
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a9d5e
    CMP EAX,EDI                         ; 004a9d62
    JG 0x004a9f79                       ; 004a9d64
        ;   XREF to: 004a9f79 (CONDITIONAL_JUMP)  ; LAB_004a9f79
    MOV ECX,dword ptr [ESP + 0x4]       ; 004a9d6a
        ;   Label: LAB_004a9d6a
    MOV CL,byte ptr [ECX]               ; 004a9d6e
    AND ECX,0xff                        ; 004a9d70
    MOV ESI,dword ptr [ESP + 0x30]      ; 004a9d76
    LEA EAX,[ECX + ECX*0x2]             ; 004a9d7a
    ADD EAX,ESI                         ; 004a9d7d
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004a9d7f
    MOV EDX,dword ptr [0x006141d8]      ; 004a9d85 | DAT_006141d8
    AND EAX,0xff                        ; 004a9d8b
    IMUL EDX,EAX                        ; 004a9d90
    MOV EAX,EDX                         ; 004a9d93
    SAR EDX,0x1f                        ; 004a9d95
    SHL EDX,0x8                         ; 004a9d98
    SBB EAX,EDX                         ; 004a9d9b
    SAR EAX,0x8                         ; 004a9d9d
    TEST EAX,EAX                        ; 004a9da0
    JZ 0x004a9f58                       ; 004a9da2
        ;   XREF to: 004a9f58 (CONDITIONAL_JUMP)  ; LAB_004a9f58
    MOV EDI,dword ptr [ESP + 0x40]      ; 004a9da8
    SHL ECX,0x2                         ; 004a9dac
    MOV DX,word ptr [EBX]               ; 004a9daf
    ADD EDI,ECX                         ; 004a9db2
    MOV EBP,dword ptr [0x0061c8d0]      ; 004a9db4 | DAT_0061c8d0
    MOV dword ptr [ESP + 0xc4],EDX      ; 004a9dba
    MOV EDX,dword ptr [EDI + 0xdb4]     ; 004a9dc1
    MOV CL,byte ptr [0x01c35814]        ; 004a9dc7 | DAT_01c35814
    AND EDX,EBP                         ; 004a9dcd
    SHR EDX,CL                          ; 004a9dcf
    MOV CL,byte ptr [0x01c3581c]        ; 004a9dd1 | DAT_01c3581c
    MOV ESI,dword ptr [EDI + 0xdb4]     ; 004a9dd7
    SHL EDX,CL                          ; 004a9ddd
    AND ESI,dword ptr [0x0061c8d8]      ; 004a9ddf | DAT_0061c8d8
    MOV CL,byte ptr [0x01c35820]        ; 004a9de5 | DAT_01c35820
    SHR ESI,CL                          ; 004a9deb
    MOV CL,byte ptr [0x01c35828]        ; 004a9ded | DAT_01c35828
    SHL ESI,CL                          ; 004a9df3
    AND ESI,0xff                        ; 004a9df5
    IMUL ESI,EAX                        ; 004a9dfb
    MOV EBP,dword ptr [EDI + 0xdb4]     ; 004a9dfe
    AND EBP,dword ptr [0x0061c8e0]      ; 004a9e04 | DAT_0061c8e0
    MOV CL,byte ptr [0x01c3582c]        ; 004a9e0a | DAT_01c3582c
    SHR EBP,CL                          ; 004a9e10
    MOV CL,byte ptr [0x01c35834]        ; 004a9e12 | DAT_01c35834
    SHL EBP,CL                          ; 004a9e18
    AND EBP,0xff                        ; 004a9e1a
    IMUL EBP,EAX                        ; 004a9e20
    AND EDX,0xff                        ; 004a9e23
    MOV dword ptr [ESP + 0x34],EDX      ; 004a9e29
    XOR EDX,EDX                         ; 004a9e2d
    MOV DX,word ptr [ESP + 0xc4]        ; 004a9e2f
    MOV ECX,dword ptr [0x0061c8d0]      ; 004a9e37 | DAT_0061c8d0
    AND ECX,EDX                         ; 004a9e3d
    MOV dword ptr [ESP + 0x98],ECX      ; 004a9e3f
    MOV EDI,dword ptr [ESP + 0x98]      ; 004a9e46
    MOV CL,byte ptr [0x01c35814]        ; 004a9e4d | DAT_01c35814
    SHR EDI,CL                          ; 004a9e53
    MOV CL,byte ptr [0x01c3581c]        ; 004a9e55 | DAT_01c3581c
    SHL EDI,CL                          ; 004a9e5b
    MOV ECX,EDI                         ; 004a9e5d
    AND ECX,0xff                        ; 004a9e5f
    MOV dword ptr [ESP + 0x38],ECX      ; 004a9e65
    MOV ECX,dword ptr [0x0061c8d8]      ; 004a9e69 | DAT_0061c8d8
    AND ECX,EDX                         ; 004a9e6f
    MOV dword ptr [ESP + 0x98],ECX      ; 004a9e71
    MOV EDI,dword ptr [ESP + 0x98]      ; 004a9e78
    MOV CL,byte ptr [0x01c35820]        ; 004a9e7f | DAT_01c35820
    SHR EDI,CL                          ; 004a9e85
    MOV CL,byte ptr [0x01c35828]        ; 004a9e87 | DAT_01c35828
    SHL EDI,CL                          ; 004a9e8d
    MOV ECX,dword ptr [0x0061c8e0]      ; 004a9e8f | DAT_0061c8e0
    AND ECX,EDX                         ; 004a9e95
    MOV dword ptr [ESP + 0x98],ECX      ; 004a9e97
    MOV EDX,dword ptr [ESP + 0x98]      ; 004a9e9e
    MOV CL,byte ptr [0x01c3582c]        ; 004a9ea5 | DAT_01c3582c
    SHR EDX,CL                          ; 004a9eab
    MOV CL,byte ptr [0x01c35834]        ; 004a9ead | DAT_01c35834
    SHL EDX,CL                          ; 004a9eb3
    MOV ECX,EDX                         ; 004a9eb5
    MOV EDX,0xff                        ; 004a9eb7
    AND EDI,0xff                        ; 004a9ebc
    SUB EDX,EAX                         ; 004a9ec2
    IMUL EDI,EDX                        ; 004a9ec4
    AND ECX,0xff                        ; 004a9ec7
    MOV dword ptr [ESP + 0x3c],ECX      ; 004a9ecd
    MOV ECX,dword ptr [ESP + 0x38]      ; 004a9ed1
    IMUL ECX,EDX                        ; 004a9ed5
    MOV dword ptr [ESP + 0x98],ECX      ; 004a9ed8
    MOV ECX,dword ptr [ESP + 0x34]      ; 004a9edf
    IMUL ECX,EAX                        ; 004a9ee3
    ADD ECX,dword ptr [ESP + 0x98]      ; 004a9ee6
    MOV dword ptr [ESP + 0x34],ECX      ; 004a9eed
    IMUL EDX,dword ptr [ESP + 0x3c]     ; 004a9ef1
    MOV EAX,dword ptr [ESP + 0x34]      ; 004a9ef6
    ADD ESI,EDI                         ; 004a9efa
    SHR EAX,0x8                         ; 004a9efc
    MOV ECX,ESI                         ; 004a9eff
    ADD EBP,EDX                         ; 004a9f01
    MOV ESI,dword ptr [0x01c35818]      ; 004a9f03 | DAT_01c35818
    XOR EDX,EDX                         ; 004a9f09
    DIV ESI                             ; 004a9f0b
    MOV EDI,dword ptr [0x01c35824]      ; 004a9f0d | DAT_01c35824
    SHR ECX,0x8                         ; 004a9f13
    MOV ESI,EAX                         ; 004a9f16
    XOR EDX,EDX                         ; 004a9f18
    MOV EAX,ECX                         ; 004a9f1a
    DIV EDI                             ; 004a9f1c
    MOV dword ptr [ESP + 0x44],ECX      ; 004a9f1e
    SHR EBP,0x8                         ; 004a9f22
    MOV dword ptr [ESP + 0x44],EAX      ; 004a9f25
    XOR EDX,EDX                         ; 004a9f29
    MOV EAX,EBP                         ; 004a9f2b
    DIV dword ptr [0x01c35830]          ; 004a9f2d | DAT_01c35830
    MOV CL,byte ptr [0x01c35814]        ; 004a9f33 | DAT_01c35814
    SHL ESI,CL                          ; 004a9f39
    MOV CL,byte ptr [0x01c35820]        ; 004a9f3b | DAT_01c35820
    MOV EDI,EAX                         ; 004a9f41
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a9f43
    SHL EAX,CL                          ; 004a9f47
    MOV CL,byte ptr [0x01c3582c]        ; 004a9f49 | DAT_01c3582c
    OR EAX,ESI                          ; 004a9f4f
    SHL EDI,CL                          ; 004a9f51
    OR EAX,EDI                          ; 004a9f53
    MOV word ptr [EBX],AX               ; 004a9f55
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004a9f58
        ;   Label: LAB_004a9f58
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9f5c
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a9f60
    ADD EBX,0x2                         ; 004a9f64
    INC EBP                             ; 004a9f67
    INC EAX                             ; 004a9f68
    MOV dword ptr [ESP + 0x2c],EBP      ; 004a9f69
    MOV dword ptr [ESP + 0x4],EAX       ; 004a9f6d
    CMP EBP,EDX                         ; 004a9f71
    JLE 0x004a9d6a                      ; 004a9f73
        ;   XREF to: 004a9d6a (CONDITIONAL_JUMP)  ; LAB_004a9d6a
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004a9f79
        ;   Label: LAB_004a9f79
    MOV ECX,dword ptr [ESP + 0x28]      ; 004a9f80
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a9f84
    MOV EBX,dword ptr [ESP + 0x4]       ; 004a9f88
    MOV ESI,dword ptr [ESP + 0xc]       ; 004a9f8c
    ADD EDX,0x4                         ; 004a9f90
    INC ECX                             ; 004a9f93
    ADD EBX,EAX                         ; 004a9f94
    MOV dword ptr [ESP + 0xb0],EDX      ; 004a9f96
    MOV dword ptr [ESP + 0x28],ECX      ; 004a9f9d
    MOV dword ptr [ESP + 0x4],EBX       ; 004a9fa1
    CMP ECX,ESI                         ; 004a9fa5
    JG 0x004a9a90                       ; 004a9fa7
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004a9d3b                      ; 004a9fad
        ;   XREF to: 004a9d3b (UNCONDITIONAL_JUMP)  ; LAB_004a9d3b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a9fb2
        ;   Label: LAB_004a9fb2
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004a9fb6
    CMP EDI,EAX                         ; 004a9fbd
    JG 0x004a9a90                       ; 004a9fbf
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a9fc5
    SHL ESI,0xa                         ; 004a9fc9
    LEA EBP,[EDI*0x4 + 0x0]             ; 004a9fcc
    ADD ESI,EBX                         ; 004a9fd3
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004a9fd5
        ;   Label: LAB_004a9fd5
    MOV ECX,dword ptr [EBP + 0x1c2a38c] ; 004a9fdc | DAT_01c2a38c
    ADD EAX,EAX                         ; 004a9fe2
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004a9fe4
    ADD ECX,EAX                         ; 004a9feb
    CMP EDX,dword ptr [ESP + 0x8]       ; 004a9fed
    JG 0x004aa026                       ; 004a9ff1
        ;   XREF to: 004aa026 (CONDITIONAL_JUMP)  ; LAB_004aa026
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9ff3
        ;   Label: LAB_004a9ff3
    MOV AL,byte ptr [EAX]               ; 004a9ff7
    AND EAX,0xff                        ; 004a9ff9
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004a9ffe
    JZ 0x004aa011                       ; 004aa004
        ;   XREF to: 004aa011 (CONDITIONAL_JUMP)  ; LAB_004aa011
    MOV AX,word ptr [ESI + EAX*0x4 + 0xdb4] ; 004aa006
    MOV word ptr [ECX],AX               ; 004aa00e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa011
        ;   Label: LAB_004aa011
    INC EAX                             ; 004aa015
    INC EDX                             ; 004aa016
    MOV dword ptr [ESP + 0x4],EAX       ; 004aa017
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aa01b
    ADD ECX,0x2                         ; 004aa01f
    CMP EDX,EAX                         ; 004aa022
    JLE 0x004a9ff3                      ; 004aa024
        ;   XREF to: 004a9ff3 (CONDITIONAL_JUMP)  ; LAB_004a9ff3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aa026
        ;   Label: LAB_004aa026
    MOV EDX,dword ptr [ESP + 0x4]       ; 004aa02a
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aa02e
    ADD EBP,0x4                         ; 004aa032
    ADD EDX,EAX                         ; 004aa035
    INC EDI                             ; 004aa037
    MOV dword ptr [ESP + 0x4],EDX       ; 004aa038
    CMP EDI,ECX                         ; 004aa03c
    JG 0x004a9a90                       ; 004aa03e
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004a9fd5                      ; 004aa044
        ;   XREF to: 004a9fd5 (UNCONDITIONAL_JUMP)  ; LAB_004a9fd5
    CMP ESI,-0x2                        ; 004aa046
        ;   Label: LAB_004aa046
    JNZ 0x004aa38c                      ; 004aa049
        ;   XREF to: 004aa38c (CONDITIONAL_JUMP)  ; LAB_004aa38c
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004aa04f
    JZ 0x004aa301                       ; 004aa056
        ;   XREF to: 004aa301 (CONDITIONAL_JUMP)  ; LAB_004aa301
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004aa05c
    MOV EDI,dword ptr [ESP + 0xc]       ; 004aa063
    MOV dword ptr [ESP + 0x48],EAX      ; 004aa067
    CMP EAX,EDI                         ; 004aa06b
    JG 0x004a9a90                       ; 004aa06d
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004aa073
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aa077
    SUB EAX,EDX                         ; 004aa07e
    SHL EAX,0x8                         ; 004aa080
    ADD EBX,EAX                         ; 004aa083
    MOV EAX,dword ptr [ESP + 0x48]      ; 004aa085
    SHL EAX,0x2                         ; 004aa089
    MOV dword ptr [ESP + 0x50],EBX      ; 004aa08c
    MOV dword ptr [ESP + 0xac],EAX      ; 004aa090
    MOV EAX,dword ptr [ESP + 0xac]      ; 004aa097
        ;   Label: LAB_004aa097
    MOV EBX,dword ptr [ESP + 0xe4]      ; 004aa09e
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 004aa0a5 | DAT_01c2a38c
    ADD EBX,EBX                         ; 004aa0ab
    ADD EBX,EAX                         ; 004aa0ad
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aa0af
    MOV ESI,dword ptr [ESP + 0x8]       ; 004aa0b6
    MOV dword ptr [ESP + 0x4c],EAX      ; 004aa0ba
    CMP EAX,ESI                         ; 004aa0be
    JG 0x004aa2c8                       ; 004aa0c0
        ;   XREF to: 004aa2c8 (CONDITIONAL_JUMP)  ; LAB_004aa2c8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa0c6
        ;   Label: LAB_004aa0c6
    MOV AL,byte ptr [EAX]               ; 004aa0ca
    AND EAX,0xff                        ; 004aa0cc
    MOV ECX,dword ptr [ESP + 0x50]      ; 004aa0d1
    LEA EAX,[EAX + EAX*0x2]             ; 004aa0d5
    ADD EAX,ECX                         ; 004aa0d8
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004aa0da
    MOV EDX,dword ptr [0x006141d8]      ; 004aa0e0 | DAT_006141d8
    AND EAX,0xff                        ; 004aa0e6
    IMUL EDX,EAX                        ; 004aa0eb
    MOV EAX,EDX                         ; 004aa0ee
    SAR EDX,0x1f                        ; 004aa0f0
    SHL EDX,0x8                         ; 004aa0f3
    SBB EAX,EDX                         ; 004aa0f6
    SAR EAX,0x8                         ; 004aa0f8
    TEST EAX,EAX                        ; 004aa0fb
    JZ 0x004aa2a7                       ; 004aa0fd
        ;   XREF to: 004aa2a7 (CONDITIONAL_JUMP)  ; LAB_004aa2a7
    MOV DX,word ptr [EBX]               ; 004aa103
    MOV dword ptr [ESP + 0xc0],EDX      ; 004aa106
    XOR EDX,EDX                         ; 004aa10d
    MOV ESI,dword ptr [0x0061c8d0]      ; 004aa10f | DAT_0061c8d0
    MOV DX,word ptr [0x01cb0242]        ; 004aa115 | DAT_01cb0242
    MOV CL,byte ptr [0x01c35814]        ; 004aa11c | DAT_01c35814
    AND ESI,EDX                         ; 004aa122
    SHR ESI,CL                          ; 004aa124
    MOV CL,byte ptr [0x01c3581c]        ; 004aa126 | DAT_01c3581c
    SHL ESI,CL                          ; 004aa12c
    AND ESI,0xff                        ; 004aa12e
    MOV dword ptr [ESP + 0x54],ESI      ; 004aa134
    MOV ESI,dword ptr [0x0061c8d8]      ; 004aa138 | DAT_0061c8d8
    MOV CL,byte ptr [0x01c35820]        ; 004aa13e | DAT_01c35820
    AND ESI,EDX                         ; 004aa144
    MOV EDI,dword ptr [0x0061c8e0]      ; 004aa146 | DAT_0061c8e0
    SHR ESI,CL                          ; 004aa14c
    MOV CL,byte ptr [0x01c35828]        ; 004aa14e | DAT_01c35828
    AND EDI,EDX                         ; 004aa154
    SHL ESI,CL                          ; 004aa156
    MOV CL,byte ptr [0x01c3582c]        ; 004aa158 | DAT_01c3582c
    XOR EDX,EDX                         ; 004aa15e
    SHR EDI,CL                          ; 004aa160
    MOV CL,byte ptr [0x01c35834]        ; 004aa162 | DAT_01c35834
    MOV DX,word ptr [ESP + 0xc0]        ; 004aa168
    SHL EDI,CL                          ; 004aa170
    MOV ECX,dword ptr [0x0061c8d0]      ; 004aa172 | DAT_0061c8d0
    AND ECX,EDX                         ; 004aa178
    MOV dword ptr [ESP + 0x98],ECX      ; 004aa17a
    MOV EBP,dword ptr [ESP + 0x98]      ; 004aa181
    MOV CL,byte ptr [0x01c35814]        ; 004aa188 | DAT_01c35814
    SHR EBP,CL                          ; 004aa18e
    MOV CL,byte ptr [0x01c3581c]        ; 004aa190 | DAT_01c3581c
    SHL EBP,CL                          ; 004aa196
    MOV ECX,EBP                         ; 004aa198
    AND ECX,0xff                        ; 004aa19a
    MOV dword ptr [ESP + 0x58],ECX      ; 004aa1a0
    MOV ECX,dword ptr [0x0061c8d8]      ; 004aa1a4 | DAT_0061c8d8
    AND ECX,EDX                         ; 004aa1aa
    MOV dword ptr [ESP + 0x98],ECX      ; 004aa1ac
    MOV EBP,dword ptr [ESP + 0x98]      ; 004aa1b3
    MOV CL,byte ptr [0x01c35820]        ; 004aa1ba | DAT_01c35820
    SHR EBP,CL                          ; 004aa1c0
    MOV CL,byte ptr [0x01c35828]        ; 004aa1c2 | DAT_01c35828
    SHL EBP,CL                          ; 004aa1c8
    MOV ECX,dword ptr [0x0061c8e0]      ; 004aa1ca | DAT_0061c8e0
    AND ECX,EDX                         ; 004aa1d0
    MOV dword ptr [ESP + 0x98],ECX      ; 004aa1d2
    MOV EDX,dword ptr [ESP + 0x98]      ; 004aa1d9
    MOV CL,byte ptr [0x01c3582c]        ; 004aa1e0 | DAT_01c3582c
    SHR EDX,CL                          ; 004aa1e6
    MOV CL,byte ptr [0x01c35834]        ; 004aa1e8 | DAT_01c35834
    SHL EDX,CL                          ; 004aa1ee
    MOV ECX,EDX                         ; 004aa1f0
    MOV EDX,0xff                        ; 004aa1f2
    AND EBP,0xff                        ; 004aa1f7
    SUB EDX,EAX                         ; 004aa1fd
    IMUL EBP,EDX                        ; 004aa1ff
    AND ECX,0xff                        ; 004aa202
    MOV dword ptr [ESP + 0x5c],ECX      ; 004aa208
    MOV ECX,dword ptr [ESP + 0x58]      ; 004aa20c
    IMUL ECX,EDX                        ; 004aa210
    MOV dword ptr [ESP + 0x98],ECX      ; 004aa213
    MOV ECX,dword ptr [ESP + 0x54]      ; 004aa21a
    IMUL ECX,EAX                        ; 004aa21e
    ADD ECX,dword ptr [ESP + 0x98]      ; 004aa221
    AND ESI,0xff                        ; 004aa228
    MOV dword ptr [ESP + 0x54],ECX      ; 004aa22e
    MOV ECX,ESI                         ; 004aa232
    IMUL ECX,EAX                        ; 004aa234
    ADD ECX,EBP                         ; 004aa237
    IMUL EDX,dword ptr [ESP + 0x5c]     ; 004aa239
    AND EDI,0xff                        ; 004aa23e
    MOV EBP,EDI                         ; 004aa244
    IMUL EBP,EAX                        ; 004aa246
    MOV ESI,dword ptr [0x01c35818]      ; 004aa249 | DAT_01c35818
    MOV EAX,dword ptr [ESP + 0x54]      ; 004aa24f
    ADD EBP,EDX                         ; 004aa253
    SHR EAX,0x8                         ; 004aa255
    XOR EDX,EDX                         ; 004aa258
    DIV ESI                             ; 004aa25a
    SHR ECX,0x8                         ; 004aa25c
    MOV EDI,dword ptr [0x01c35824]      ; 004aa25f | DAT_01c35824
    MOV ESI,EAX                         ; 004aa265
    XOR EDX,EDX                         ; 004aa267
    MOV EAX,ECX                         ; 004aa269
    DIV EDI                             ; 004aa26b
    MOV dword ptr [ESP + 0x60],ECX      ; 004aa26d
    SHR EBP,0x8                         ; 004aa271
    MOV dword ptr [ESP + 0x60],EAX      ; 004aa274
    XOR EDX,EDX                         ; 004aa278
    MOV EAX,EBP                         ; 004aa27a
    DIV dword ptr [0x01c35830]          ; 004aa27c | DAT_01c35830
    MOV CL,byte ptr [0x01c35814]        ; 004aa282 | DAT_01c35814
    SHL ESI,CL                          ; 004aa288
    MOV CL,byte ptr [0x01c35820]        ; 004aa28a | DAT_01c35820
    MOV EDI,EAX                         ; 004aa290
    MOV EAX,dword ptr [ESP + 0x60]      ; 004aa292
    SHL EAX,CL                          ; 004aa296
    MOV CL,byte ptr [0x01c3582c]        ; 004aa298 | DAT_01c3582c
    OR EAX,ESI                          ; 004aa29e
    SHL EDI,CL                          ; 004aa2a0
    OR EAX,EDI                          ; 004aa2a2
    MOV word ptr [EBX],AX               ; 004aa2a4
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004aa2a7
        ;   Label: LAB_004aa2a7
    MOV EBP,dword ptr [ESP + 0x4]       ; 004aa2ab
    MOV EDX,dword ptr [ESP + 0x8]       ; 004aa2af
    ADD EBX,0x2                         ; 004aa2b3
    INC EDI                             ; 004aa2b6
    INC EBP                             ; 004aa2b7
    MOV dword ptr [ESP + 0x4c],EDI      ; 004aa2b8
    MOV dword ptr [ESP + 0x4],EBP       ; 004aa2bc
    CMP EDI,EDX                         ; 004aa2c0
    JLE 0x004aa0c6                      ; 004aa2c2
        ;   XREF to: 004aa0c6 (CONDITIONAL_JUMP)  ; LAB_004aa0c6
    MOV EAX,dword ptr [ESP + 0xac]      ; 004aa2c8
        ;   Label: LAB_004aa2c8
    MOV EDX,dword ptr [ESP + 0x48]      ; 004aa2cf
    MOV ECX,dword ptr [ESP + 0x4]       ; 004aa2d3
    ADD EAX,0x4                         ; 004aa2d7
    MOV EBX,dword ptr [ESP + 0xc]       ; 004aa2da
    MOV dword ptr [ESP + 0xac],EAX      ; 004aa2de
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aa2e5
    INC EDX                             ; 004aa2e9
    ADD ECX,EAX                         ; 004aa2ea
    MOV dword ptr [ESP + 0x48],EDX      ; 004aa2ec
    MOV dword ptr [ESP + 0x4],ECX       ; 004aa2f0
    CMP EDX,EBX                         ; 004aa2f4
    JG 0x004a9a90                       ; 004aa2f6
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aa097                      ; 004aa2fc
        ;   XREF to: 004aa097 (UNCONDITIONAL_JUMP)  ; LAB_004aa097
    MOV ESI,dword ptr [ESP + 0xc]       ; 004aa301
        ;   Label: LAB_004aa301
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aa305
    CMP EDI,ESI                         ; 004aa30c
    JG 0x004a9a90                       ; 004aa30e
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    LEA ESI,[EDI*0x4 + 0x0]             ; 004aa314
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aa31b
        ;   Label: LAB_004aa31b
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aa322
    MOV ECX,dword ptr [ESI + 0x1c2a38c] ; 004aa329 | DAT_01c2a38c
    ADD EAX,EAX                         ; 004aa32f
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aa331
    ADD ECX,EAX                         ; 004aa335
    CMP EDX,EBP                         ; 004aa337
    JG 0x004aa36c                       ; 004aa339
        ;   XREF to: 004aa36c (CONDITIONAL_JUMP)  ; LAB_004aa36c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa33b
        ;   Label: LAB_004aa33b
    MOV AL,byte ptr [EAX]               ; 004aa33f
    AND EAX,0xff                        ; 004aa341
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004aa346
    JZ 0x004aa357                       ; 004aa34c
        ;   XREF to: 004aa357 (CONDITIONAL_JUMP)  ; LAB_004aa357
    MOV AX,[0x01cb0242]                 ; 004aa34e | DAT_01cb0242
    MOV word ptr [ECX],AX               ; 004aa354
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa357
        ;   Label: LAB_004aa357
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aa35b
    ADD ECX,0x2                         ; 004aa35f
    INC EAX                             ; 004aa362
    INC EDX                             ; 004aa363
    MOV dword ptr [ESP + 0x4],EAX       ; 004aa364
    CMP EDX,EBP                         ; 004aa368
    JLE 0x004aa33b                      ; 004aa36a
        ;   XREF to: 004aa33b (CONDITIONAL_JUMP)  ; LAB_004aa33b
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aa36c
        ;   Label: LAB_004aa36c
    MOV EDX,dword ptr [ESP + 0x4]       ; 004aa370
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aa374
    ADD ESI,0x4                         ; 004aa378
    ADD EDX,EAX                         ; 004aa37b
    INC EDI                             ; 004aa37d
    MOV dword ptr [ESP + 0x4],EDX       ; 004aa37e
    CMP EDI,ECX                         ; 004aa382
    JG 0x004a9a90                       ; 004aa384
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aa31b                      ; 004aa38a
        ;   XREF to: 004aa31b (UNCONDITIONAL_JUMP)  ; LAB_004aa31b
    CMP ESI,-0x3                        ; 004aa38c
        ;   Label: LAB_004aa38c
    JNZ 0x004aa6ba                      ; 004aa38f
        ;   XREF to: 004aa6ba (CONDITIONAL_JUMP)  ; LAB_004aa6ba
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004aa395
    JZ 0x004aa62f                       ; 004aa39c
        ;   XREF to: 004aa62f (CONDITIONAL_JUMP)  ; LAB_004aa62f
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004aa3a2
    MOV EDX,dword ptr [ESP + 0xc]       ; 004aa3a9
    MOV dword ptr [ESP + 0x64],EAX      ; 004aa3ad
    CMP EAX,EDX                         ; 004aa3b1
    JG 0x004a9a90                       ; 004aa3b3
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004aa3b9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aa3bd
    SUB EAX,EDX                         ; 004aa3c4
    SHL EAX,0x8                         ; 004aa3c6
    ADD EBX,EAX                         ; 004aa3c9
    MOV EAX,dword ptr [ESP + 0x64]      ; 004aa3cb
    SHL EAX,0x2                         ; 004aa3cf
    MOV dword ptr [ESP + 0x6c],EBX      ; 004aa3d2
    MOV dword ptr [ESP + 0xa8],EAX      ; 004aa3d6
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004aa3dd
        ;   Label: LAB_004aa3dd
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aa3e4
    MOV EBX,dword ptr [EBX + 0x1c2a38c] ; 004aa3eb | DAT_01c2a38c
    ADD EAX,EAX                         ; 004aa3f1
    ADD EBX,EAX                         ; 004aa3f3
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aa3f5
    MOV ESI,dword ptr [ESP + 0x8]       ; 004aa3fc
    MOV dword ptr [ESP + 0x68],EAX      ; 004aa400
    CMP EAX,ESI                         ; 004aa404
    JG 0x004aa5f6                       ; 004aa406
        ;   XREF to: 004aa5f6 (CONDITIONAL_JUMP)  ; LAB_004aa5f6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa40c
        ;   Label: LAB_004aa40c
    MOV AL,byte ptr [EAX]               ; 004aa410
    AND EAX,0xff                        ; 004aa412
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004aa417
    LEA EAX,[EAX + EAX*0x2]             ; 004aa41b
    ADD EAX,ECX                         ; 004aa41e
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004aa420
    MOV EDX,dword ptr [0x006141d8]      ; 004aa426 | DAT_006141d8
    AND EAX,0xff                        ; 004aa42c
    IMUL EDX,EAX                        ; 004aa431
    MOV EAX,EDX                         ; 004aa434
    SAR EDX,0x1f                        ; 004aa436
    SHL EDX,0x8                         ; 004aa439
    SBB EAX,EDX                         ; 004aa43c
    SAR EAX,0x8                         ; 004aa43e
    TEST EAX,EAX                        ; 004aa441
    JZ 0x004aa5d5                       ; 004aa443
        ;   XREF to: 004aa5d5 (CONDITIONAL_JUMP)  ; LAB_004aa5d5
    MOV EBP,dword ptr [0x01cb0254]      ; 004aa449 | DAT_01cb0254
    MOV ESI,dword ptr [0x0061c8d0]      ; 004aa44f | DAT_0061c8d0
    MOV CL,byte ptr [0x01c35814]        ; 004aa455 | DAT_01c35814
    AND EBP,ESI                         ; 004aa45b
    SHR EBP,CL                          ; 004aa45d
    MOV CL,byte ptr [0x01c3581c]        ; 004aa45f | DAT_01c3581c
    SHL EBP,CL                          ; 004aa465
    AND EBP,0xff                        ; 004aa467
    IMUL EBP,EAX                        ; 004aa46d
    MOV DX,word ptr [EBX]               ; 004aa470
    MOV EDI,dword ptr [0x0061c8d8]      ; 004aa473 | DAT_0061c8d8
    MOV dword ptr [ESP + 0xbc],EDX      ; 004aa479
    MOV EDX,dword ptr [0x01cb0254]      ; 004aa480 | DAT_01cb0254
    AND EDI,EDX                         ; 004aa486
    MOV CL,byte ptr [0x01c35820]        ; 004aa488 | DAT_01c35820
    SHR EDI,CL                          ; 004aa48e
    MOV CL,byte ptr [0x01c35828]        ; 004aa490 | DAT_01c35828
    SHL EDI,CL                          ; 004aa496
    AND EDI,0xff                        ; 004aa498
    IMUL EDI,EAX                        ; 004aa49e
    MOV ESI,EDX                         ; 004aa4a1
    AND ESI,dword ptr [0x0061c8e0]      ; 004aa4a3 | DAT_0061c8e0
    MOV CL,byte ptr [0x01c3582c]        ; 004aa4a9 | DAT_01c3582c
    SHR ESI,CL                          ; 004aa4af
    MOV CL,byte ptr [0x01c35834]        ; 004aa4b1 | DAT_01c35834
    SHL ESI,CL                          ; 004aa4b7
    AND ESI,0xff                        ; 004aa4b9
    IMUL ESI,EAX                        ; 004aa4bf
    XOR EDX,EDX                         ; 004aa4c2
    MOV DX,word ptr [ESP + 0xbc]        ; 004aa4c4
    MOV ECX,dword ptr [0x0061c8d0]      ; 004aa4cc | DAT_0061c8d0
    MOV dword ptr [ESP + 0x98],EDX      ; 004aa4d2
    AND EDX,ECX                         ; 004aa4d9
    MOV CL,byte ptr [0x01c35814]        ; 004aa4db | DAT_01c35814
    SHR EDX,CL                          ; 004aa4e1
    MOV CL,byte ptr [0x01c3581c]        ; 004aa4e3 | DAT_01c3581c
    SHL EDX,CL                          ; 004aa4e9
    MOV ECX,EDX                         ; 004aa4eb
    AND ECX,0xff                        ; 004aa4ed
    MOV EDX,dword ptr [ESP + 0x98]      ; 004aa4f3
    MOV dword ptr [ESP + 0x70],ECX      ; 004aa4fa
    AND EDX,dword ptr [0x0061c8d8]      ; 004aa4fe | DAT_0061c8d8
    MOV CL,byte ptr [0x01c35820]        ; 004aa504 | DAT_01c35820
    SHR EDX,CL                          ; 004aa50a
    MOV CL,byte ptr [0x01c35828]        ; 004aa50c | DAT_01c35828
    SHL EDX,CL                          ; 004aa512
    MOV ECX,EDX                         ; 004aa514
    AND ECX,0xff                        ; 004aa516
    MOV EDX,dword ptr [ESP + 0x98]      ; 004aa51c
    MOV dword ptr [ESP + 0x74],ECX      ; 004aa523
    AND EDX,dword ptr [0x0061c8e0]      ; 004aa527 | DAT_0061c8e0
    MOV CL,byte ptr [0x01c3582c]        ; 004aa52d | DAT_01c3582c
    SHR EDX,CL                          ; 004aa533
    MOV CL,byte ptr [0x01c35834]        ; 004aa535 | DAT_01c35834
    SHL EDX,CL                          ; 004aa53b
    MOV ECX,EDX                         ; 004aa53d
    AND ECX,0xff                        ; 004aa53f
    MOV EDX,0xff                        ; 004aa545
    MOV dword ptr [ESP + 0x78],ECX      ; 004aa54a
    SUB EDX,EAX                         ; 004aa54e
    MOV ECX,dword ptr [ESP + 0x70]      ; 004aa550
    IMUL ECX,EDX                        ; 004aa554
    ADD EBP,ECX                         ; 004aa557
    MOV ECX,dword ptr [ESP + 0x74]      ; 004aa559
    IMUL ECX,EDX                        ; 004aa55d
    ADD EDI,ECX                         ; 004aa560
    IMUL EDX,dword ptr [ESP + 0x78]     ; 004aa562
    ADD ESI,EDX                         ; 004aa567
    MOV EAX,EBP                         ; 004aa569
    SHR ESI,0x8                         ; 004aa56b
    SHR EAX,0x8                         ; 004aa56e
    MOV dword ptr [ESP + 0x98],ESI      ; 004aa571
    MOV EDX,ESI                         ; 004aa578
    MOV dword ptr [ESP + 0x7c],ESI      ; 004aa57a
    XOR EDX,ESI                         ; 004aa57e
    DIV dword ptr [0x01c35818]          ; 004aa580 | DAT_01c35818
    MOV ECX,EDI                         ; 004aa586
    MOV EDI,dword ptr [0x01c35824]      ; 004aa588 | DAT_01c35824
    SHR ECX,0x8                         ; 004aa58e
    MOV ESI,EAX                         ; 004aa591
    XOR EDX,EDX                         ; 004aa593
    MOV EAX,ECX                         ; 004aa595
    DIV EDI                             ; 004aa597
    MOV EBP,dword ptr [0x01c35830]      ; 004aa599 | DAT_01c35830
    MOV EDI,EAX                         ; 004aa59f
    XOR EDX,EDX                         ; 004aa5a1
    MOV EAX,dword ptr [ESP + 0x98]      ; 004aa5a3
    DIV EBP                             ; 004aa5aa
    MOV CL,byte ptr [0x01c35814]        ; 004aa5ac | DAT_01c35814
    MOV dword ptr [ESP + 0x7c],EAX      ; 004aa5b2
    MOV EAX,ESI                         ; 004aa5b6
    SHL EAX,CL                          ; 004aa5b8
    MOV CL,byte ptr [0x01c35820]        ; 004aa5ba | DAT_01c35820
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004aa5c0
    SHL EDI,CL                          ; 004aa5c4
    MOV CL,byte ptr [0x01c3582c]        ; 004aa5c6 | DAT_01c3582c
    OR EAX,EDI                          ; 004aa5cc
    SHL EDX,CL                          ; 004aa5ce
    OR EAX,EDX                          ; 004aa5d0
    MOV word ptr [EBX],AX               ; 004aa5d2
    MOV EDI,dword ptr [ESP + 0x68]      ; 004aa5d5
        ;   Label: LAB_004aa5d5
    MOV EBP,dword ptr [ESP + 0x4]       ; 004aa5d9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004aa5dd
    ADD EBX,0x2                         ; 004aa5e1
    INC EDI                             ; 004aa5e4
    INC EBP                             ; 004aa5e5
    MOV dword ptr [ESP + 0x68],EDI      ; 004aa5e6
    MOV dword ptr [ESP + 0x4],EBP       ; 004aa5ea
    CMP EDI,EDX                         ; 004aa5ee
    JLE 0x004aa40c                      ; 004aa5f0
        ;   XREF to: 004aa40c (CONDITIONAL_JUMP)  ; LAB_004aa40c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004aa5f6
        ;   Label: LAB_004aa5f6
    MOV EDX,dword ptr [ESP + 0x64]      ; 004aa5fd
    MOV ECX,dword ptr [ESP + 0x4]       ; 004aa601
    ADD EAX,0x4                         ; 004aa605
    MOV EBX,dword ptr [ESP + 0xc]       ; 004aa608
    MOV dword ptr [ESP + 0xa8],EAX      ; 004aa60c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aa613
    INC EDX                             ; 004aa617
    ADD ECX,EAX                         ; 004aa618
    MOV dword ptr [ESP + 0x64],EDX      ; 004aa61a
    MOV dword ptr [ESP + 0x4],ECX       ; 004aa61e
    CMP EDX,EBX                         ; 004aa622
    JG 0x004a9a90                       ; 004aa624
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aa3dd                      ; 004aa62a
        ;   XREF to: 004aa3dd (UNCONDITIONAL_JUMP)  ; LAB_004aa3dd
    MOV EBP,dword ptr [ESP + 0xc]       ; 004aa62f
        ;   Label: LAB_004aa62f
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aa633
    CMP EDI,EBP                         ; 004aa63a
    JG 0x004a9a90                       ; 004aa63c
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    LEA ESI,[EDI*0x4 + 0x0]             ; 004aa642
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aa649
        ;   Label: LAB_004aa649
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004aa650
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 004aa657 | DAT_01c2a38c
    ADD EDX,EDX                         ; 004aa65d
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aa65f
    ADD EDX,EAX                         ; 004aa663
    CMP ECX,EBP                         ; 004aa665
    JG 0x004aa69a                       ; 004aa667
        ;   XREF to: 004aa69a (CONDITIONAL_JUMP)  ; LAB_004aa69a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa669
        ;   Label: LAB_004aa669
    MOV AL,byte ptr [EAX]               ; 004aa66d
    AND EAX,0xff                        ; 004aa66f
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004aa674
    JZ 0x004aa685                       ; 004aa67a
        ;   XREF to: 004aa685 (CONDITIONAL_JUMP)  ; LAB_004aa685
    MOV AX,[0x01cb0254]                 ; 004aa67c | DAT_01cb0254
    MOV word ptr [EDX],AX               ; 004aa682
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa685
        ;   Label: LAB_004aa685
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aa689
    INC ECX                             ; 004aa68d
    INC EAX                             ; 004aa68e
    ADD EDX,0x2                         ; 004aa68f
    MOV dword ptr [ESP + 0x4],EAX       ; 004aa692
    CMP ECX,EBP                         ; 004aa696
    JLE 0x004aa669                      ; 004aa698
        ;   XREF to: 004aa669 (CONDITIONAL_JUMP)  ; LAB_004aa669
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aa69a
        ;   Label: LAB_004aa69a
    MOV EDX,dword ptr [ESP + 0x4]       ; 004aa69e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aa6a2
    ADD ESI,0x4                         ; 004aa6a6
    ADD EDX,EAX                         ; 004aa6a9
    INC EDI                             ; 004aa6ab
    MOV dword ptr [ESP + 0x4],EDX       ; 004aa6ac
    CMP EDI,ECX                         ; 004aa6b0
    JG 0x004a9a90                       ; 004aa6b2
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aa649                      ; 004aa6b8
        ;   XREF to: 004aa649 (UNCONDITIONAL_JUMP)  ; LAB_004aa649
    MOV AX,word ptr [ESI*0x2 + 0x1c34910] ; 004aa6ba
        ;   Label: LAB_004aa6ba
    MOV dword ptr [ESP + 0xb8],EAX      ; 004aa6c2
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004aa6c9
    JZ 0x004aa9a7                       ; 004aa6d0
        ;   XREF to: 004aa9a7 (CONDITIONAL_JUMP)  ; LAB_004aa9a7
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004aa6d6
    MOV ESI,dword ptr [ESP + 0xc]       ; 004aa6dd
    MOV dword ptr [ESP + 0x80],EAX      ; 004aa6e1
    CMP EAX,ESI                         ; 004aa6e8
    JG 0x004a9a90                       ; 004aa6ea
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004aa6f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004aa6f4
    SUB EAX,EDX                         ; 004aa6fb
    SHL EAX,0x8                         ; 004aa6fd
    ADD EBX,EAX                         ; 004aa700
    MOV EAX,dword ptr [ESP + 0x80]      ; 004aa702
    SHL EAX,0x2                         ; 004aa709
    MOV dword ptr [ESP + 0x88],EBX      ; 004aa70c
    MOV dword ptr [ESP + 0xa4],EAX      ; 004aa713
    MOV EBX,dword ptr [ESP + 0xa4]      ; 004aa71a
        ;   Label: LAB_004aa71a
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aa721
    MOV EBX,dword ptr [EBX + 0x1c2a38c] ; 004aa728 | DAT_01c2a38c
    ADD EAX,EAX                         ; 004aa72e
    ADD EBX,EAX                         ; 004aa730
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aa732
    MOV ESI,dword ptr [ESP + 0x8]       ; 004aa739
    MOV dword ptr [ESP + 0x84],EAX      ; 004aa73d
    CMP EAX,ESI                         ; 004aa744
    JG 0x004aa968                       ; 004aa746
        ;   XREF to: 004aa968 (CONDITIONAL_JUMP)  ; LAB_004aa968
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa74c
        ;   Label: LAB_004aa74c
    MOV AL,byte ptr [EAX]               ; 004aa750
    AND EAX,0xff                        ; 004aa752
    MOV ECX,dword ptr [ESP + 0x88]      ; 004aa757
    LEA EAX,[EAX + EAX*0x2]             ; 004aa75e
    ADD EAX,ECX                         ; 004aa761
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004aa763
    MOV EDX,dword ptr [0x006141d8]      ; 004aa769 | DAT_006141d8
    AND EAX,0xff                        ; 004aa76f
    IMUL EDX,EAX                        ; 004aa774
    MOV EAX,EDX                         ; 004aa777
    SAR EDX,0x1f                        ; 004aa779
    SHL EDX,0x8                         ; 004aa77c
    SBB EAX,EDX                         ; 004aa77f
    SAR EAX,0x8                         ; 004aa781
    TEST EAX,EAX                        ; 004aa784
    JZ 0x004aa941                       ; 004aa786
        ;   XREF to: 004aa941 (CONDITIONAL_JUMP)  ; LAB_004aa941
    XOR ESI,ESI                         ; 004aa78c
    MOV EDI,dword ptr [0x0061c8d0]      ; 004aa78e | DAT_0061c8d0
    MOV SI,word ptr [ESP + 0xb8]        ; 004aa794
    MOV CL,byte ptr [0x01c35814]        ; 004aa79c | DAT_01c35814
    AND EDI,ESI                         ; 004aa7a2
    SHR EDI,CL                          ; 004aa7a4
    MOV CL,byte ptr [0x01c3581c]        ; 004aa7a6 | DAT_01c3581c
    SHL EDI,CL                          ; 004aa7ac
    AND EDI,0xff                        ; 004aa7ae
    IMUL EDI,EAX                        ; 004aa7b4
    MOV DX,word ptr [EBX]               ; 004aa7b7
    MOV dword ptr [ESP + 0xb4],EDX      ; 004aa7ba
    MOV EDX,dword ptr [0x0061c8d8]      ; 004aa7c1 | DAT_0061c8d8
    AND EDX,ESI                         ; 004aa7c7
    MOV CL,byte ptr [0x01c35820]        ; 004aa7c9 | DAT_01c35820
    SHR EDX,CL                          ; 004aa7cf
    MOV CL,byte ptr [0x01c35828]        ; 004aa7d1 | DAT_01c35828
    SHL EDX,CL                          ; 004aa7d7
    AND EDX,0xff                        ; 004aa7d9
    IMUL EDX,EAX                        ; 004aa7df
    AND ESI,dword ptr [0x0061c8e0]      ; 004aa7e2 | DAT_0061c8e0
    MOV CL,byte ptr [0x01c3582c]        ; 004aa7e8 | DAT_01c3582c
    SHR ESI,CL                          ; 004aa7ee
    MOV CL,byte ptr [0x01c35834]        ; 004aa7f0 | DAT_01c35834
    SHL ESI,CL                          ; 004aa7f6
    AND ESI,0xff                        ; 004aa7f8
    MOV dword ptr [ESP + 0x8c],ESI      ; 004aa7fe
    XOR ESI,ESI                         ; 004aa805
    MOV ECX,dword ptr [0x0061c8d0]      ; 004aa807 | DAT_0061c8d0
    MOV SI,word ptr [ESP + 0xb4]        ; 004aa80d
    AND ECX,ESI                         ; 004aa815
    MOV dword ptr [ESP + 0x98],ECX      ; 004aa817
    MOV EBP,dword ptr [ESP + 0x98]      ; 004aa81e
    MOV CL,byte ptr [0x01c35814]        ; 004aa825 | DAT_01c35814
    SHR EBP,CL                          ; 004aa82b
    MOV CL,byte ptr [0x01c3581c]        ; 004aa82d | DAT_01c3581c
    SHL EBP,CL                          ; 004aa833
    MOV ECX,EBP                         ; 004aa835
    AND ECX,0xff                        ; 004aa837
    MOV dword ptr [ESP + 0x90],ECX      ; 004aa83d
    MOV ECX,dword ptr [0x0061c8d8]      ; 004aa844 | DAT_0061c8d8
    AND ECX,ESI                         ; 004aa84a
    MOV dword ptr [ESP + 0x98],ECX      ; 004aa84c
    MOV EBP,dword ptr [ESP + 0x98]      ; 004aa853
    MOV CL,byte ptr [0x01c35820]        ; 004aa85a | DAT_01c35820
    SHR EBP,CL                          ; 004aa860
    MOV CL,byte ptr [0x01c35828]        ; 004aa862 | DAT_01c35828
    SHL EBP,CL                          ; 004aa868
    MOV ECX,dword ptr [0x0061c8e0]      ; 004aa86a | DAT_0061c8e0
    AND ECX,ESI                         ; 004aa870
    MOV dword ptr [ESP + 0x98],ECX      ; 004aa872
    MOV ESI,dword ptr [ESP + 0x98]      ; 004aa879
    MOV CL,byte ptr [0x01c3582c]        ; 004aa880 | DAT_01c3582c
    SHR ESI,CL                          ; 004aa886
    MOV CL,byte ptr [0x01c35834]        ; 004aa888 | DAT_01c35834
    SHL ESI,CL                          ; 004aa88e
    MOV ECX,ESI                         ; 004aa890
    MOV ESI,0xff                        ; 004aa892
    AND EBP,0xff                        ; 004aa897
    SUB ESI,EAX                         ; 004aa89d
    IMUL EBP,ESI                        ; 004aa89f
    AND ECX,0xff                        ; 004aa8a2
    MOV dword ptr [ESP + 0x94],ECX      ; 004aa8a8
    MOV ECX,dword ptr [ESP + 0x90]      ; 004aa8af
    IMUL ECX,ESI                        ; 004aa8b6
    ADD EDX,EBP                         ; 004aa8b9
    IMUL ESI,dword ptr [ESP + 0x94]     ; 004aa8bb
    ADD EDI,ECX                         ; 004aa8c3
    IMUL EAX,dword ptr [ESP + 0x8c]     ; 004aa8c5
    ADD EAX,ESI                         ; 004aa8cd
    MOV EBP,EDX                         ; 004aa8cf
    MOV dword ptr [ESP + 0x8c],EAX      ; 004aa8d1
    MOV ECX,EAX                         ; 004aa8d8
    MOV EAX,EDI                         ; 004aa8da
    XOR EDX,EDX                         ; 004aa8dc
    SHR EAX,0x8                         ; 004aa8de
    MOV ESI,dword ptr [0x01c35818]      ; 004aa8e1 | DAT_01c35818
    MOV dword ptr [ESP + 0x9c],EAX      ; 004aa8e7
    DIV ESI                             ; 004aa8ee
    SHR EBP,0x8                         ; 004aa8f0
    MOV EDI,dword ptr [0x01c35824]      ; 004aa8f3 | DAT_01c35824
    MOV dword ptr [ESP + 0x9c],EAX      ; 004aa8f9
    XOR EDX,EDX                         ; 004aa900
    MOV EAX,EBP                         ; 004aa902
    DIV EDI                             ; 004aa904
    SHR ECX,0x8                         ; 004aa906
    MOV EBP,dword ptr [0x01c35830]      ; 004aa909 | DAT_01c35830
    MOV EDI,EAX                         ; 004aa90f
    XOR EDX,EDX                         ; 004aa911
    MOV EAX,ECX                         ; 004aa913
    DIV EBP                             ; 004aa915
    MOV CL,byte ptr [0x01c35814]        ; 004aa917 | DAT_01c35814
    MOV EDX,dword ptr [ESP + 0x9c]      ; 004aa91d
    MOV ESI,EAX                         ; 004aa924
    MOV EAX,EDI                         ; 004aa926
    SHL EDX,CL                          ; 004aa928
    MOV CL,byte ptr [0x01c35820]        ; 004aa92a | DAT_01c35820
    SHL EAX,CL                          ; 004aa930
    MOV CL,byte ptr [0x01c3582c]        ; 004aa932 | DAT_01c3582c
    OR EAX,EDX                          ; 004aa938
    SHL ESI,CL                          ; 004aa93a
    OR EAX,ESI                          ; 004aa93c
    MOV word ptr [EBX],AX               ; 004aa93e
    MOV EDI,dword ptr [ESP + 0x84]      ; 004aa941
        ;   Label: LAB_004aa941
    MOV EBP,dword ptr [ESP + 0x4]       ; 004aa948
    MOV EDX,dword ptr [ESP + 0x8]       ; 004aa94c
    ADD EBX,0x2                         ; 004aa950
    INC EDI                             ; 004aa953
    INC EBP                             ; 004aa954
    MOV dword ptr [ESP + 0x84],EDI      ; 004aa955
    MOV dword ptr [ESP + 0x4],EBP       ; 004aa95c
    CMP EDI,EDX                         ; 004aa960
    JLE 0x004aa74c                      ; 004aa962
        ;   XREF to: 004aa74c (CONDITIONAL_JUMP)  ; LAB_004aa74c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004aa968
        ;   Label: LAB_004aa968
    MOV EDX,dword ptr [ESP + 0x80]      ; 004aa96f
    MOV ECX,dword ptr [ESP + 0x4]       ; 004aa976
    ADD EAX,0x4                         ; 004aa97a
    MOV EBX,dword ptr [ESP + 0xc]       ; 004aa97d
    MOV dword ptr [ESP + 0xa4],EAX      ; 004aa981
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aa988
    INC EDX                             ; 004aa98c
    ADD ECX,EAX                         ; 004aa98d
    MOV dword ptr [ESP + 0x80],EDX      ; 004aa98f
    MOV dword ptr [ESP + 0x4],ECX       ; 004aa996
    CMP EDX,EBX                         ; 004aa99a
    JG 0x004a9a90                       ; 004aa99c
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aa71a                      ; 004aa9a2
        ;   XREF to: 004aa71a (UNCONDITIONAL_JUMP)  ; LAB_004aa71a
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aa9a7
        ;   Label: LAB_004aa9a7
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aa9ab
    CMP EDI,ECX                         ; 004aa9b2
    JG 0x004a9a90                       ; 004aa9b4
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV ESI,EDX                         ; 004aa9ba
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aa9bc
        ;   Label: LAB_004aa9bc
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004aa9c3
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 004aa9ca | DAT_01c2a38c
    ADD EDX,EDX                         ; 004aa9d0
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aa9d2
    ADD EDX,EAX                         ; 004aa9d6
    CMP ECX,EBP                         ; 004aa9d8
    JG 0x004aaa0e                       ; 004aa9da
        ;   XREF to: 004aaa0e (CONDITIONAL_JUMP)  ; LAB_004aaa0e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa9dc
        ;   Label: LAB_004aa9dc
    MOV AL,byte ptr [EAX]               ; 004aa9e0
    AND EAX,0xff                        ; 004aa9e2
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004aa9e7
    JZ 0x004aa9f9                       ; 004aa9ed
        ;   XREF to: 004aa9f9 (CONDITIONAL_JUMP)  ; LAB_004aa9f9
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004aa9ef
    MOV word ptr [EDX],AX               ; 004aa9f6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa9f9
        ;   Label: LAB_004aa9f9
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aa9fd
    INC ECX                             ; 004aaa01
    INC EAX                             ; 004aaa02
    ADD EDX,0x2                         ; 004aaa03
    MOV dword ptr [ESP + 0x4],EAX       ; 004aaa06
    CMP ECX,EBP                         ; 004aaa0a
    JLE 0x004aa9dc                      ; 004aaa0c
        ;   XREF to: 004aa9dc (CONDITIONAL_JUMP)  ; LAB_004aa9dc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aaa0e
        ;   Label: LAB_004aaa0e
    MOV EDX,dword ptr [ESP + 0x4]       ; 004aaa12
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aaa16
    ADD ESI,0x4                         ; 004aaa1a
    ADD EDX,EAX                         ; 004aaa1d
    INC EDI                             ; 004aaa1f
    MOV dword ptr [ESP + 0x4],EDX       ; 004aaa20
    CMP EDI,ECX                         ; 004aaa24
    JG 0x004a9a90                       ; 004aaa26
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aa9bc                      ; 004aaa2c
        ;   XREF to: 004aa9bc (UNCONDITIONAL_JUMP)  ; LAB_004aa9bc
    CMP EAX,0x20                        ; 004aaa2e
        ;   Label: LAB_004aaa2e
    JNZ 0x004a9a90                      ; 004aaa31
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EAX,dword ptr [ESP + 0x10]      ; 004aaa37
    LEA EBP,[EBX + 0xdb4]               ; 004aaa3b
    SHL EAX,0xa                         ; 004aaa41
    MOV EDI,dword ptr [ESP + 0xec]      ; 004aaa44
    ADD EBP,EAX                         ; 004aaa4b
    CMP EDI,-0x1                        ; 004aaa4d
    JNZ 0x004aab7f                      ; 004aaa50
        ;   XREF to: 004aab7f (CONDITIONAL_JUMP)  ; LAB_004aab7f
    MOV EDI,dword ptr [EBX + 0x1de4]    ; 004aaa56
    LEA ESI,[EBX + EAX*0x1]             ; 004aaa5c
    TEST EDI,EDI                        ; 004aaa5f
    JZ 0x004aaafa                       ; 004aaa61
        ;   XREF to: 004aaafa (CONDITIONAL_JUMP)  ; LAB_004aaafa
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aaa67
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aaa6b
    CMP EDI,ECX                         ; 004aaa72
    JG 0x004a9a90                       ; 004aaa74
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EBX,EDX                         ; 004aaa7a
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aaa7c
        ;   Label: LAB_004aaa7c
    MOV EDX,dword ptr [EBX + 0x1c2a38c] ; 004aaa83 | DAT_01c2a38c
    SHL EAX,0x2                         ; 004aaa89
    ADD EDX,EAX                         ; 004aaa8c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aaa8e
    MOV AL,byte ptr [EAX]               ; 004aaa92
    AND EAX,0xff                        ; 004aaa94
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0xdb4] ; 004aaa99
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aaaa0
    PUSH ECX                            ; 004aaaa4
    SUB EAX,dword ptr [ESP + 0xe8]      ; 004aaaa5
    INC EAX                             ; 004aaaac
    PUSH EAX                            ; 004aaaad
    PUSH EBP                            ; 004aaaae
    MOV EAX,dword ptr [ESP + 0x10]      ; 004aaaaf
    PUSH EAX                            ; 004aaab3
    PUSH EDX                            ; 004aaab4
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710 ; 004aaab5
        ;   XREF to: 004a9710 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004aaaba
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aaabd
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004aaac1
    MOV ECX,dword ptr [ESP + 0x4]       ; 004aaac8
    INC EAX                             ; 004aaacc
    ADD EBX,0x4                         ; 004aaacd
    ADD ECX,EAX                         ; 004aaad0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aaad2
    MOV dword ptr [ESP + 0x4],ECX       ; 004aaad6
    LEA EDX,[ECX + EAX*0x1]             ; 004aaada
    INC EDI                             ; 004aaadd
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aaade
    MOV dword ptr [ESP + 0x4],EDX       ; 004aaae2
    CMP EDI,ECX                         ; 004aaae6
    JLE 0x004aaa7c                      ; 004aaae8
        ;   XREF to: 004aaa7c (CONDITIONAL_JUMP)  ; LAB_004aaa7c
    MOV EBX,dword ptr [ESP]             ; 004aaaea
    MOV EAX,EBX                         ; 004aaaed
    ADD ESP,0xc8                        ; 004aaaef
    POP EBP                             ; 004aaaf5
    POP EDI                             ; 004aaaf6
    POP ESI                             ; 004aaaf7
    POP EBX                             ; 004aaaf8
    RET                                 ; 004aaaf9
    MOV EBP,dword ptr [ESP + 0xc]       ; 004aaafa
        ;   Label: LAB_004aaafa
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aaafe
    CMP EDI,EBP                         ; 004aab05
    JG 0x004a9a90                       ; 004aab07
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EBP,EDX                         ; 004aab0d
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aab0f
        ;   Label: LAB_004aab0f
    MOV EDX,dword ptr [EBP + 0x1c2a38c] ; 004aab16 | DAT_01c2a38c
    SHL EAX,0x2                         ; 004aab1c
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004aab1f
    ADD EDX,EAX                         ; 004aab26
    CMP ECX,dword ptr [ESP + 0x8]       ; 004aab28
    JG 0x004aab5f                       ; 004aab2c
        ;   XREF to: 004aab5f (CONDITIONAL_JUMP)  ; LAB_004aab5f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aab2e
        ;   Label: LAB_004aab2e
    MOV AL,byte ptr [EAX]               ; 004aab32
    AND EAX,0xff                        ; 004aab34
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004aab39
    JZ 0x004aab4a                       ; 004aab3f
        ;   XREF to: 004aab4a (CONDITIONAL_JUMP)  ; LAB_004aab4a
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0xdb4] ; 004aab41
    MOV dword ptr [EDX],EAX             ; 004aab48
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aab4a
        ;   Label: LAB_004aab4a
    INC EAX                             ; 004aab4e
    INC ECX                             ; 004aab4f
    MOV dword ptr [ESP + 0x4],EAX       ; 004aab50
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aab54
    ADD EDX,0x4                         ; 004aab58
    CMP ECX,EAX                         ; 004aab5b
    JLE 0x004aab2e                      ; 004aab5d
        ;   XREF to: 004aab2e (CONDITIONAL_JUMP)  ; LAB_004aab2e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aab5f
        ;   Label: LAB_004aab5f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004aab63
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aab67
    ADD EBP,0x4                         ; 004aab6b
    ADD EDX,EAX                         ; 004aab6e
    INC EDI                             ; 004aab70
    MOV dword ptr [ESP + 0x4],EDX       ; 004aab71
    CMP EDI,ECX                         ; 004aab75
    JG 0x004a9a90                       ; 004aab77
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aab0f                      ; 004aab7d
        ;   XREF to: 004aab0f (UNCONDITIONAL_JUMP)  ; LAB_004aab0f
    CMP EDI,-0x2                        ; 004aab7f
        ;   Label: LAB_004aab7f
    JNZ 0x004aaca7                      ; 004aab82
        ;   XREF to: 004aaca7 (CONDITIONAL_JUMP)  ; LAB_004aaca7
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004aab88
    JZ 0x004aac22                       ; 004aab8f
        ;   XREF to: 004aac22 (CONDITIONAL_JUMP)  ; LAB_004aac22
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aab95
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aab99
    CMP EDI,ECX                         ; 004aaba0
    JG 0x004a9a90                       ; 004aaba2
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EBX,EDX                         ; 004aaba8
    MOV ESI,EBP                         ; 004aabaa
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aabac
        ;   Label: LAB_004aabac
    MOV EAX,dword ptr [EBX + 0x1c2a38c] ; 004aabb3 | DAT_01c2a38c
    SHL EDX,0x2                         ; 004aabb9
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004aabbc
    ADD EDX,EAX                         ; 004aabc3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aabc5
    MOV ECX,dword ptr [0x01cb0244]      ; 004aabc9 | DAT_01cb0244
    SUB EAX,EBP                         ; 004aabcf
    PUSH ECX                            ; 004aabd1
    INC EAX                             ; 004aabd2
    PUSH EAX                            ; 004aabd3
    PUSH ESI                            ; 004aabd4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004aabd5
    PUSH EAX                            ; 004aabd9
    PUSH EDX                            ; 004aabda
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710 ; 004aabdb
        ;   XREF to: 004a9710 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004aabe0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aabe3
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aabe7
    ADD EBX,0x4                         ; 004aabee
    SUB EAX,EDX                         ; 004aabf1
    MOV ECX,dword ptr [ESP + 0x4]       ; 004aabf3
    INC EAX                             ; 004aabf7
    INC EDI                             ; 004aabf8
    ADD ECX,EAX                         ; 004aabf9
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aabfb
    MOV dword ptr [ESP + 0x4],ECX       ; 004aabff
    LEA EBP,[ECX + EAX*0x1]             ; 004aac03
    MOV EAX,dword ptr [ESP + 0xc]       ; 004aac06
    MOV dword ptr [ESP + 0x4],EBP       ; 004aac0a
    CMP EDI,EAX                         ; 004aac0e
    JLE 0x004aabac                      ; 004aac10
        ;   XREF to: 004aabac (CONDITIONAL_JUMP)  ; LAB_004aabac
    MOV EBX,dword ptr [ESP]             ; 004aac12
    MOV EAX,EBX                         ; 004aac15
    ADD ESP,0xc8                        ; 004aac17
    POP EBP                             ; 004aac1d
    POP EDI                             ; 004aac1e
    POP ESI                             ; 004aac1f
    POP EBX                             ; 004aac20
    RET                                 ; 004aac21
    MOV EBP,dword ptr [ESP + 0xc]       ; 004aac22
        ;   Label: LAB_004aac22
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aac26
    CMP EDI,EBP                         ; 004aac2d
    JG 0x004a9a90                       ; 004aac2f
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV ESI,EDX                         ; 004aac35
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004aac37
        ;   Label: LAB_004aac37
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aac3e
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 004aac45 | DAT_01c2a38c
    SHL ECX,0x2                         ; 004aac4b
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aac4e
    ADD ECX,EAX                         ; 004aac52
    CMP EDX,EBP                         ; 004aac54
    JG 0x004aac87                       ; 004aac56
        ;   XREF to: 004aac87 (CONDITIONAL_JUMP)  ; LAB_004aac87
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aac58
        ;   Label: LAB_004aac58
    MOV AL,byte ptr [EAX]               ; 004aac5c
    AND EAX,0xff                        ; 004aac5e
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004aac63
    JZ 0x004aac72                       ; 004aac69
        ;   XREF to: 004aac72 (CONDITIONAL_JUMP)  ; LAB_004aac72
    MOV EAX,[0x01cb0244]                ; 004aac6b | DAT_01cb0244
    MOV dword ptr [ECX],EAX             ; 004aac70
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aac72
        ;   Label: LAB_004aac72
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aac76
    INC EDX                             ; 004aac7a
    INC EAX                             ; 004aac7b
    ADD ECX,0x4                         ; 004aac7c
    MOV dword ptr [ESP + 0x4],EAX       ; 004aac7f
    CMP EDX,EBP                         ; 004aac83
    JLE 0x004aac58                      ; 004aac85
        ;   XREF to: 004aac58 (CONDITIONAL_JUMP)  ; LAB_004aac58
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aac87
        ;   Label: LAB_004aac87
    MOV EDX,dword ptr [ESP + 0x4]       ; 004aac8b
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aac8f
    ADD ESI,0x4                         ; 004aac93
    ADD EDX,EAX                         ; 004aac96
    INC EDI                             ; 004aac98
    MOV dword ptr [ESP + 0x4],EDX       ; 004aac99
    CMP EDI,ECX                         ; 004aac9d
    JG 0x004a9a90                       ; 004aac9f
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aac37                      ; 004aaca5
        ;   XREF to: 004aac37 (UNCONDITIONAL_JUMP)  ; LAB_004aac37
    CMP EDI,-0x3                        ; 004aaca7
        ;   Label: LAB_004aaca7
    JNZ 0x004aadcf                      ; 004aacaa
        ;   XREF to: 004aadcf (CONDITIONAL_JUMP)  ; LAB_004aadcf
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004aacb0
    JZ 0x004aad4a                       ; 004aacb7
        ;   XREF to: 004aad4a (CONDITIONAL_JUMP)  ; LAB_004aad4a
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aacbd
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aacc1
    CMP EDI,ECX                         ; 004aacc8
    JG 0x004a9a90                       ; 004aacca
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EBX,EDX                         ; 004aacd0
    MOV ESI,EBP                         ; 004aacd2
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aacd4
        ;   Label: LAB_004aacd4
    MOV EDX,dword ptr [EBX + 0x1c2a38c] ; 004aacdb | DAT_01c2a38c
    SHL EAX,0x2                         ; 004aace1
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004aace4
    ADD EDX,EAX                         ; 004aaceb
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aaced
    MOV EBP,dword ptr [0x01cb0254]      ; 004aacf1 | DAT_01cb0254
    SUB EAX,ECX                         ; 004aacf7
    PUSH EBP                            ; 004aacf9
    INC EAX                             ; 004aacfa
    PUSH EAX                            ; 004aacfb
    PUSH ESI                            ; 004aacfc
    MOV EBP,dword ptr [ESP + 0x10]      ; 004aacfd
    PUSH EBP                            ; 004aad01
    PUSH EDX                            ; 004aad02
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710 ; 004aad03
        ;   XREF to: 004a9710 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004aad08
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aad0b
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aad0f
    ADD EBX,0x4                         ; 004aad16
    SUB EAX,EDX                         ; 004aad19
    MOV ECX,dword ptr [ESP + 0x4]       ; 004aad1b
    INC EAX                             ; 004aad1f
    INC EDI                             ; 004aad20
    ADD ECX,EAX                         ; 004aad21
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aad23
    MOV dword ptr [ESP + 0x4],ECX       ; 004aad27
    LEA EBP,[ECX + EAX*0x1]             ; 004aad2b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004aad2e
    MOV dword ptr [ESP + 0x4],EBP       ; 004aad32
    CMP EDI,EAX                         ; 004aad36
    JLE 0x004aacd4                      ; 004aad38
        ;   XREF to: 004aacd4 (CONDITIONAL_JUMP)  ; LAB_004aacd4
    MOV EBX,dword ptr [ESP]             ; 004aad3a
    MOV EAX,EBX                         ; 004aad3d
    ADD ESP,0xc8                        ; 004aad3f
    POP EBP                             ; 004aad45
    POP EDI                             ; 004aad46
    POP ESI                             ; 004aad47
    POP EBX                             ; 004aad48
    RET                                 ; 004aad49
    MOV EBP,dword ptr [ESP + 0xc]       ; 004aad4a
        ;   Label: LAB_004aad4a
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aad4e
    CMP EDI,EBP                         ; 004aad55
    JG 0x004a9a90                       ; 004aad57
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV ESI,EDX                         ; 004aad5d
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aad5f
        ;   Label: LAB_004aad5f
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004aad66
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 004aad6d | DAT_01c2a38c
    SHL EDX,0x2                         ; 004aad73
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aad76
    ADD EDX,EAX                         ; 004aad7a
    CMP ECX,EBP                         ; 004aad7c
    JG 0x004aadaf                       ; 004aad7e
        ;   XREF to: 004aadaf (CONDITIONAL_JUMP)  ; LAB_004aadaf
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aad80
        ;   Label: LAB_004aad80
    MOV AL,byte ptr [EAX]               ; 004aad84
    AND EAX,0xff                        ; 004aad86
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004aad8b
    JZ 0x004aad9a                       ; 004aad91
        ;   XREF to: 004aad9a (CONDITIONAL_JUMP)  ; LAB_004aad9a
    MOV EAX,[0x01cb0254]                ; 004aad93 | DAT_01cb0254
    MOV dword ptr [EDX],EAX             ; 004aad98
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aad9a
        ;   Label: LAB_004aad9a
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aad9e
    INC ECX                             ; 004aada2
    INC EAX                             ; 004aada3
    ADD EDX,0x4                         ; 004aada4
    MOV dword ptr [ESP + 0x4],EAX       ; 004aada7
    CMP ECX,EBP                         ; 004aadab
    JLE 0x004aad80                      ; 004aadad
        ;   XREF to: 004aad80 (CONDITIONAL_JUMP)  ; LAB_004aad80
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aadaf
        ;   Label: LAB_004aadaf
    MOV EDX,dword ptr [ESP + 0x4]       ; 004aadb3
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aadb7
    ADD ESI,0x4                         ; 004aadbb
    ADD EDX,EAX                         ; 004aadbe
    INC EDI                             ; 004aadc0
    MOV dword ptr [ESP + 0x4],EDX       ; 004aadc1
    CMP EDI,ECX                         ; 004aadc5
    JG 0x004a9a90                       ; 004aadc7
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aad5f                      ; 004aadcd
        ;   XREF to: 004aad5f (UNCONDITIONAL_JUMP)  ; LAB_004aad5f
    MOV ESI,dword ptr [EDI*0x4 + 0x1c34b10] ; 004aadcf
        ;   Label: LAB_004aadcf
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004aadd6
    JZ 0x004aae66                       ; 004aaddd
        ;   XREF to: 004aae66 (CONDITIONAL_JUMP)  ; LAB_004aae66
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aade3
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004aade7
    CMP EDI,ECX                         ; 004aadee
    JG 0x004a9a90                       ; 004aadf0
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EBX,EDX                         ; 004aadf6
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aadf8
        ;   Label: LAB_004aadf8
    MOV EAX,dword ptr [EBX + 0x1c2a38c] ; 004aadff | DAT_01c2a38c
    SHL EDX,0x2                         ; 004aae05
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004aae08
    ADD EDX,EAX                         ; 004aae0f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aae11
    SUB EAX,ECX                         ; 004aae15
    PUSH ESI                            ; 004aae17
    INC EAX                             ; 004aae18
    PUSH EAX                            ; 004aae19
    PUSH EBP                            ; 004aae1a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004aae1b
    PUSH EAX                            ; 004aae1f
    PUSH EDX                            ; 004aae20
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710 ; 004aae21
        ;   XREF to: 004a9710 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004a9710(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004aae26
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aae29
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004aae2d
    MOV ECX,dword ptr [ESP + 0x4]       ; 004aae34
    INC EAX                             ; 004aae38
    ADD EBX,0x4                         ; 004aae39
    ADD ECX,EAX                         ; 004aae3c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aae3e
    MOV dword ptr [ESP + 0x4],ECX       ; 004aae42
    LEA EDX,[ECX + EAX*0x1]             ; 004aae46
    INC EDI                             ; 004aae49
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aae4a
    MOV dword ptr [ESP + 0x4],EDX       ; 004aae4e
    CMP EDI,ECX                         ; 004aae52
    JLE 0x004aadf8                      ; 004aae54
        ;   XREF to: 004aadf8 (CONDITIONAL_JUMP)  ; LAB_004aadf8
    MOV EBX,dword ptr [ESP]             ; 004aae56
    MOV EAX,EBX                         ; 004aae59
    ADD ESP,0xc8                        ; 004aae5b
    POP EBP                             ; 004aae61
    POP EDI                             ; 004aae62
    POP ESI                             ; 004aae63
    POP EBX                             ; 004aae64
    RET                                 ; 004aae65
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004aae66
        ;   Label: LAB_004aae66
    MOV EBP,dword ptr [ESP + 0xc]       ; 004aae6d
    MOV dword ptr [ESP + 0xa0],EAX      ; 004aae71
    CMP EAX,EBP                         ; 004aae78
    JG 0x004a9a90                       ; 004aae7a
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    MOV EDI,EDX                         ; 004aae80
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004aae82
        ;   Label: LAB_004aae82
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004aae89
    MOV ECX,dword ptr [EDI + 0x1c2a38c] ; 004aae90 | DAT_01c2a38c
    SHL EAX,0x2                         ; 004aae96
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aae99
    ADD ECX,EAX                         ; 004aae9d
    CMP EDX,EBP                         ; 004aae9f
    JG 0x004aaecd                       ; 004aaea1
        ;   XREF to: 004aaecd (CONDITIONAL_JUMP)  ; LAB_004aaecd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aaea3
        ;   Label: LAB_004aaea3
    MOV AL,byte ptr [EAX]               ; 004aaea7
    AND EAX,0xff                        ; 004aaea9
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004aaeae
    JZ 0x004aaeb8                       ; 004aaeb4
        ;   XREF to: 004aaeb8 (CONDITIONAL_JUMP)  ; LAB_004aaeb8
    MOV dword ptr [ECX],ESI             ; 004aaeb6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aaeb8
        ;   Label: LAB_004aaeb8
    MOV EBP,dword ptr [ESP + 0x8]       ; 004aaebc
    INC EDX                             ; 004aaec0
    INC EAX                             ; 004aaec1
    ADD ECX,0x4                         ; 004aaec2
    MOV dword ptr [ESP + 0x4],EAX       ; 004aaec5
    CMP EDX,EBP                         ; 004aaec9
    JLE 0x004aaea3                      ; 004aaecb
        ;   XREF to: 004aaea3 (CONDITIONAL_JUMP)  ; LAB_004aaea3
    MOV EBP,dword ptr [ESP + 0xa0]      ; 004aaecd
        ;   Label: LAB_004aaecd
    MOV EAX,dword ptr [ESP + 0x14]      ; 004aaed4
    MOV EDX,dword ptr [ESP + 0x4]       ; 004aaed8
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aaedc
    ADD EDI,0x4                         ; 004aaee0
    INC EBP                             ; 004aaee3
    ADD EDX,EAX                         ; 004aaee4
    MOV dword ptr [ESP + 0xa0],EBP      ; 004aaee6
    MOV dword ptr [ESP + 0x4],EDX       ; 004aaeed
    CMP EBP,ECX                         ; 004aaef1
    JG 0x004a9a90                       ; 004aaef3
        ;   XREF to: 004a9a90 (CONDITIONAL_JUMP)  ; LAB_004a9a90
    JMP 0x004aae82                      ; 004aaef9
        ;   XREF to: 004aae82 (UNCONDITIONAL_JUMP)  ; LAB_004aae82

