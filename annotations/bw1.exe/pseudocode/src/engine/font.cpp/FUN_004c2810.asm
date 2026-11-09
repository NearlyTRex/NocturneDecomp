; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_FUN_004c2810(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)
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
;   engine_font.cpp_FUN_004c1dd0 at 004c202e
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_00623f20
;   undefined4 DAT_00623f28
;   undefined4 DAT_00623f30
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9dc
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9e8
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;   undefined4 DAT_01c4e9f4
;   ... and 8 more
;
; Called Functions:
;   engine_font.cpp_clipCharacter_FUN_004c0a80
;   engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2810
        ;   Label: engine_font.cpp_FUN_004c2810
    PUSH ESI                            ; 004c2811
    PUSH EDI                            ; 004c2812
    PUSH EBP                            ; 004c2813
    SUB ESP,0xc8                        ; 004c2814
    MOV EBX,dword ptr [ESP + 0xdc]      ; 004c281a
    MOV ESI,dword ptr [ESP + 0xe0]      ; 004c2821
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004c2828
    TEST ESI,ESI                        ; 004c282f
    JL 0x004c2a40                       ; 004c2831
        ;   XREF to: 004c2a40 (CONDITIONAL_JUMP)  ; LAB_004c2a40
    CMP ESI,0x100                       ; 004c2837
    JGE 0x004c2a40                      ; 004c283d
        ;   XREF to: 004c2a40 (CONDITIONAL_JUMP)  ; LAB_004c2a40
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x35e8] ; 004c2843
    ADD EAX,dword ptr [EBX + 0x41f4]    ; 004c284a
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1de8] ; 004c2850
    MOV dword ptr [ESP],EAX             ; 004c2857
    TEST EDI,EDI                        ; 004c285a
    JZ 0x004c2a4f                       ; 004c285c
        ;   XREF to: 004c2a4f (CONDITIONAL_JUMP)  ; LAB_004c2a4f
    CMP dword ptr [EBX + 0x420c],0x0    ; 004c2862
    JNZ 0x004c289d                      ; 004c2869
        ;   XREF to: 004c289d (CONDITIONAL_JUMP)  ; LAB_004c289d
    CMP ECX,-0x1                        ; 004c286b
    JZ 0x004c289d                       ; 004c286e
        ;   XREF to: 004c289d (CONDITIONAL_JUMP)  ; LAB_004c289d
    PUSH -0x1                           ; 004c2870
    MOV EAX,dword ptr [ESP + 0xec]      ; 004c2872
    MOV EDX,dword ptr [EBX + 0x4200]    ; 004c2879
    PUSH ECX                            ; 004c287f
    ADD EAX,EDX                         ; 004c2880
    PUSH EAX                            ; 004c2882
    MOV ECX,dword ptr [EBX + 0x41fc]    ; 004c2883
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004c2889
    ADD EAX,ECX                         ; 004c2890
    PUSH EAX                            ; 004c2892
    PUSH ESI                            ; 004c2893
    PUSH EBX                            ; 004c2894
    CALL engine_font.cpp_FUN_004c2810   ; 004c2895
        ;   XREF to: 004c2810 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c2810(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x18                        ; 004c289a
    LEA EDX,[ESI*0x4 + 0x0]             ; 004c289d
        ;   Label: LAB_004c289d
    ADD EDX,EBX                         ; 004c28a4
    MOV EAX,dword ptr [EDX + 0x1de8]    ; 004c28a6
    MOV dword ptr [ESP + 0x4],EAX       ; 004c28ac
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004c28b0
    MOV EAX,dword ptr [EDX + 0x3de8]    ; 004c28b7
    ADD ESI,EAX                         ; 004c28bd
    MOV dword ptr [ESP + 0xe8],ESI      ; 004c28bf
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c28c6
    ADD EAX,dword ptr [EDX + 0x35e8]    ; 004c28cd
    DEC EAX                             ; 004c28d3
    MOV dword ptr [ESP + 0x8],EAX       ; 004c28d4
    MOV EBP,dword ptr [EDX + 0x39e8]    ; 004c28d8
    LEA EAX,[ESI + EBP*0x1 + -0x1]      ; 004c28de
    MOV dword ptr [ESP + 0xc],EAX       ; 004c28e2
    MOV EAX,dword ptr [EDX + 0x21e8]    ; 004c28e6
    MOV ESI,EAX                         ; 004c28ec
    MOV dword ptr [ESP + 0x10],EAX      ; 004c28ee
    MOV EAX,dword ptr [EBX + 0x4204]    ; 004c28f2
    MOV ESI,dword ptr [EBX + ESI*0x4 + 0x1a4] ; 004c28f8
    TEST EAX,EAX                        ; 004c28ff
    JNZ 0x004c2a5e                      ; 004c2901
        ;   XREF to: 004c2a5e (CONDITIONAL_JUMP)  ; LAB_004c2a5e
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c2907
    MOV EDI,dword ptr [0x01c4f008]      ; 004c290e | DAT_01c4f008
    MOV ECX,dword ptr [EDX + 0x35e8]    ; 004c2914
    MOV EDX,dword ptr [EDX + 0x39e8]    ; 004c291a
    CMP EAX,EDI                         ; 004c2920
    JL 0x004c2a30                       ; 004c2922
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c2928
    CMP EAX,dword ptr [0x01c4f00c]      ; 004c292f | DAT_01c4f00c
    JL 0x004c2a30                       ; 004c2935
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EAX,[0x01c4f010]                ; 004c293b | DAT_01c4f010
    INC EAX                             ; 004c2940
    SUB EAX,ECX                         ; 004c2941
    CMP EAX,dword ptr [ESP + 0xe4]      ; 004c2943
    JL 0x004c2a30                       ; 004c294a
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EAX,[0x01c4f014]                ; 004c2950 | DAT_01c4f014
    INC EAX                             ; 004c2955
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c2956
    SUB EAX,EDX                         ; 004c295d
    CMP EAX,EDI                         ; 004c295f
    JL 0x004c2a30                       ; 004c2961
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c2967
        ;   Label: LAB_004c2967
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004c296b
    INC EAX                             ; 004c2972
    SUB ESI,EAX                         ; 004c2973
    MOV EAX,[0x0061b4a0]                ; 004c2975 | DAT_0061b4a0
    MOV dword ptr [ESP + 0x14],ESI      ; 004c297a
    CMP EAX,0x8                         ; 004c297e
    JNZ 0x004c2c62                      ; 004c2981
        ;   XREF to: 004c2c62 (CONDITIONAL_JUMP)  ; LAB_004c2c62
    MOV ECX,dword ptr [ESP + 0xec]      ; 004c2987
    CMP ECX,-0x1                        ; 004c298e
    JNZ 0x004c2a9e                      ; 004c2991
        ;   XREF to: 004c2a9e (CONDITIONAL_JUMP)  ; LAB_004c2a9e
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c2997
    MOV ESI,dword ptr [ESP + 0xc]       ; 004c299e
    MOV dword ptr [ESP + 0x18],EAX      ; 004c29a2
    CMP EAX,ESI                         ; 004c29a6
    JG 0x004c2a30                       ; 004c29a8
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    LEA ESI,[EAX*0x4 + 0x0]             ; 004c29ae
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004c29b5
        ;   Label: LAB_004c29b5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c29bc
    MOV ECX,dword ptr [ESI + 0x1c4354c] ; 004c29c0 | DAT_01c4354c
    MOV EDX,EDI                         ; 004c29c6
    ADD ECX,EDI                         ; 004c29c8
    CMP EDI,EBP                         ; 004c29ca
    JG 0x004c29fc                       ; 004c29cc
        ;   XREF to: 004c29fc (CONDITIONAL_JUMP)  ; LAB_004c29fc
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c29ce
        ;   Label: LAB_004c29ce
    MOV AL,byte ptr [EAX]               ; 004c29d2
    AND EAX,0xff                        ; 004c29d4
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c29d9
    JZ 0x004c29e9                       ; 004c29df
        ;   XREF to: 004c29e9 (CONDITIONAL_JUMP)  ; LAB_004c29e9
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c29e1
    MOV AL,byte ptr [EAX]               ; 004c29e5
    MOV byte ptr [ECX],AL               ; 004c29e7
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c29e9
        ;   Label: LAB_004c29e9
    MOV EDI,dword ptr [ESP + 0x8]       ; 004c29ed
    INC ECX                             ; 004c29f1
    INC EAX                             ; 004c29f2
    INC EDX                             ; 004c29f3
    MOV dword ptr [ESP + 0x4],EAX       ; 004c29f4
    CMP EDX,EDI                         ; 004c29f8
    JLE 0x004c29ce                      ; 004c29fa
        ;   XREF to: 004c29ce (CONDITIONAL_JUMP)  ; LAB_004c29ce
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c29fc
        ;   Label: LAB_004c29fc
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c2a00
    INC EAX                             ; 004c2a04
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c2a05
    MOV dword ptr [ESP + 0x18],EAX      ; 004c2a09
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c2a0d
    ADD ESI,0x4                         ; 004c2a11
    ADD EDX,EAX                         ; 004c2a14
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c2a16
    MOV dword ptr [ESP + 0x4],EDX       ; 004c2a1a
    CMP EAX,ECX                         ; 004c2a1e
    JLE 0x004c29b5                      ; 004c2a20
        ;   XREF to: 004c29b5 (CONDITIONAL_JUMP)  ; LAB_004c29b5
    LEA EAX,[EAX]                       ; 004c2a22
    LEA EDX,[EDX]                       ; 004c2a28
    MOV EAX,EAX                         ; 004c2a2e
    MOV EBX,dword ptr [ESP]             ; 004c2a30
        ;   Label: LAB_004c2a30
    MOV EAX,EBX                         ; 004c2a33
    ADD ESP,0xc8                        ; 004c2a35
    POP EBP                             ; 004c2a3b
    POP EDI                             ; 004c2a3c
    POP ESI                             ; 004c2a3d
    POP EBX                             ; 004c2a3e
    RET                                 ; 004c2a3f
    XOR EBX,EBX                         ; 004c2a40
        ;   Label: LAB_004c2a40
    MOV EAX,EBX                         ; 004c2a42
    ADD ESP,0xc8                        ; 004c2a44
    POP EBP                             ; 004c2a4a
    POP EDI                             ; 004c2a4b
    POP ESI                             ; 004c2a4c
    POP EBX                             ; 004c2a4d
    RET                                 ; 004c2a4e
    MOV EBX,EAX                         ; 004c2a4f
        ;   Label: LAB_004c2a4f
    MOV EAX,EBX                         ; 004c2a51
    ADD ESP,0xc8                        ; 004c2a53
    POP EBP                             ; 004c2a59
    POP EDI                             ; 004c2a5a
    POP ESI                             ; 004c2a5b
    POP EBX                             ; 004c2a5c
    RET                                 ; 004c2a5d
    PUSH ESI                            ; 004c2a5e
        ;   Label: LAB_004c2a5e
    LEA EAX,[ESP + 0x10]                ; 004c2a5f
    PUSH EAX                            ; 004c2a63
    LEA EAX,[ESP + 0x10]                ; 004c2a64
    PUSH EAX                            ; 004c2a68
    LEA EAX,[ESP + 0xf4]                ; 004c2a69
    PUSH EAX                            ; 004c2a70
    LEA EAX,[ESP + 0xf4]                ; 004c2a71
    PUSH EAX                            ; 004c2a78
    LEA EAX,[ESP + 0x18]                ; 004c2a79
    PUSH EAX                            ; 004c2a7d
    CALL engine_font.cpp_clipCharacter_FUN_004c0a80 ; 004c2a7e
        ;   XREF to: 004c0a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_clipCharacter_FUN_004c0a80(int * bitmap_offset, int * left_x, int * top_y, int * right_x, ...)
    ADD ESP,0x18                        ; 004c2a83
    TEST EAX,EAX                        ; 004c2a86
    JZ 0x004c2967                       ; 004c2a88
        ;   XREF to: 004c2967 (CONDITIONAL_JUMP)  ; LAB_004c2967
    MOV EBX,dword ptr [ESP]             ; 004c2a8e
    MOV EAX,EBX                         ; 004c2a91
    ADD ESP,0xc8                        ; 004c2a93
    POP EBP                             ; 004c2a99
    POP EDI                             ; 004c2a9a
    POP ESI                             ; 004c2a9b
    POP EBX                             ; 004c2a9c
    RET                                 ; 004c2a9d
    CMP ECX,-0x2                        ; 004c2a9e
        ;   Label: LAB_004c2a9e
    JNZ 0x004c2b37                      ; 004c2aa1
        ;   XREF to: 004c2b37 (CONDITIONAL_JUMP)  ; LAB_004c2b37
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c2aa7
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c2aae
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c2ab2
    CMP EAX,ECX                         ; 004c2ab6
    JG 0x004c2a30                       ; 004c2ab8
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    LEA ESI,[EAX*0x4 + 0x0]             ; 004c2abe
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004c2ac5
        ;   Label: LAB_004c2ac5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c2acc
    MOV EDX,dword ptr [ESI + 0x1c4354c] ; 004c2ad0 | DAT_01c4354c
    MOV ECX,EDI                         ; 004c2ad6
    ADD EDX,EDI                         ; 004c2ad8
    CMP EDI,EBP                         ; 004c2ada
    JG 0x004c2b0b                       ; 004c2adc
        ;   XREF to: 004c2b0b (CONDITIONAL_JUMP)  ; LAB_004c2b0b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c2ade
        ;   Label: LAB_004c2ade
    MOV AL,byte ptr [EAX]               ; 004c2ae2
    AND EAX,0xff                        ; 004c2ae4
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c2ae9
    JZ 0x004c2af8                       ; 004c2aef
        ;   XREF to: 004c2af8 (CONDITIONAL_JUMP)  ; LAB_004c2af8
    MOV AL,[0x01cc8cd0]                 ; 004c2af1 | DAT_01cc8cd0
    MOV byte ptr [EDX],AL               ; 004c2af6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c2af8
        ;   Label: LAB_004c2af8
    MOV EDI,dword ptr [ESP + 0x8]       ; 004c2afc
    INC EDX                             ; 004c2b00
    INC EAX                             ; 004c2b01
    INC ECX                             ; 004c2b02
    MOV dword ptr [ESP + 0x4],EAX       ; 004c2b03
    CMP ECX,EDI                         ; 004c2b07
    JLE 0x004c2ade                      ; 004c2b09
        ;   XREF to: 004c2ade (CONDITIONAL_JUMP)  ; LAB_004c2ade
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c2b0b
        ;   Label: LAB_004c2b0b
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c2b0f
    INC EAX                             ; 004c2b13
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c2b14
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c2b18
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c2b1c
    ADD ESI,0x4                         ; 004c2b20
    ADD EDX,EAX                         ; 004c2b23
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c2b25
    MOV dword ptr [ESP + 0x4],EDX       ; 004c2b29
    CMP EAX,ECX                         ; 004c2b2d
    JG 0x004c2a30                       ; 004c2b2f
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c2ac5                      ; 004c2b35
        ;   XREF to: 004c2ac5 (UNCONDITIONAL_JUMP)  ; LAB_004c2ac5
    CMP ECX,-0x3                        ; 004c2b37
        ;   Label: LAB_004c2b37
    JNZ 0x004c2bd0                      ; 004c2b3a
        ;   XREF to: 004c2bd0 (CONDITIONAL_JUMP)  ; LAB_004c2bd0
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c2b40
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c2b47
    MOV dword ptr [ESP + 0x20],EAX      ; 004c2b4b
    CMP EAX,EDX                         ; 004c2b4f
    JG 0x004c2a30                       ; 004c2b51
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    LEA ESI,[EAX*0x4 + 0x0]             ; 004c2b57
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004c2b5e
        ;   Label: LAB_004c2b5e
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c2b65
    MOV EDX,dword ptr [ESI + 0x1c4354c] ; 004c2b69 | DAT_01c4354c
    MOV ECX,EDI                         ; 004c2b6f
    ADD EDX,EDI                         ; 004c2b71
    CMP EDI,EBP                         ; 004c2b73
    JG 0x004c2ba4                       ; 004c2b75
        ;   XREF to: 004c2ba4 (CONDITIONAL_JUMP)  ; LAB_004c2ba4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c2b77
        ;   Label: LAB_004c2b77
    MOV AL,byte ptr [EAX]               ; 004c2b7b
    AND EAX,0xff                        ; 004c2b7d
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c2b82
    JZ 0x004c2b91                       ; 004c2b88
        ;   XREF to: 004c2b91 (CONDITIONAL_JUMP)  ; LAB_004c2b91
    MOV AL,[0x01cc8ce4]                 ; 004c2b8a | DAT_01cc8ce4
    MOV byte ptr [EDX],AL               ; 004c2b8f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c2b91
        ;   Label: LAB_004c2b91
    MOV EDI,dword ptr [ESP + 0x8]       ; 004c2b95
    INC EDX                             ; 004c2b99
    INC EAX                             ; 004c2b9a
    INC ECX                             ; 004c2b9b
    MOV dword ptr [ESP + 0x4],EAX       ; 004c2b9c
    CMP ECX,EDI                         ; 004c2ba0
    JLE 0x004c2b77                      ; 004c2ba2
        ;   XREF to: 004c2b77 (CONDITIONAL_JUMP)  ; LAB_004c2b77
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c2ba4
        ;   Label: LAB_004c2ba4
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c2ba8
    INC EAX                             ; 004c2bac
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c2bad
    MOV dword ptr [ESP + 0x20],EAX      ; 004c2bb1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c2bb5
    ADD ESI,0x4                         ; 004c2bb9
    ADD EDX,EAX                         ; 004c2bbc
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c2bbe
    MOV dword ptr [ESP + 0x4],EDX       ; 004c2bc2
    CMP EAX,ECX                         ; 004c2bc6
    JG 0x004c2a30                       ; 004c2bc8
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c2b5e                      ; 004c2bce
        ;   XREF to: 004c2b5e (UNCONDITIONAL_JUMP)  ; LAB_004c2b5e
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c2bd0
        ;   Label: LAB_004c2bd0
    MOV EBP,dword ptr [ESP + 0xc]       ; 004c2bd7
    MOV dword ptr [ESP + 0x24],EAX      ; 004c2bdb
    CMP EAX,EBP                         ; 004c2bdf
    JG 0x004c2a30                       ; 004c2be1
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    LEA ESI,[EAX*0x4 + 0x0]             ; 004c2be7
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004c2bee
        ;   Label: LAB_004c2bee
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c2bf5
    MOV ECX,dword ptr [ESI + 0x1c4354c] ; 004c2bf9 | DAT_01c4354c
    MOV EDX,EDI                         ; 004c2bff
    ADD ECX,EDI                         ; 004c2c01
    CMP EDI,EBP                         ; 004c2c03
    JG 0x004c2c36                       ; 004c2c05
        ;   XREF to: 004c2c36 (CONDITIONAL_JUMP)  ; LAB_004c2c36
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c2c07
        ;   Label: LAB_004c2c07
    MOV AL,byte ptr [EAX]               ; 004c2c0b
    AND EAX,0xff                        ; 004c2c0d
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c2c12
    JZ 0x004c2c23                       ; 004c2c18
        ;   XREF to: 004c2c23 (CONDITIONAL_JUMP)  ; LAB_004c2c23
    MOV AL,byte ptr [ESP + 0xec]        ; 004c2c1a
    MOV byte ptr [ECX],AL               ; 004c2c21
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c2c23
        ;   Label: LAB_004c2c23
    MOV EDI,dword ptr [ESP + 0x8]       ; 004c2c27
    INC ECX                             ; 004c2c2b
    INC EAX                             ; 004c2c2c
    INC EDX                             ; 004c2c2d
    MOV dword ptr [ESP + 0x4],EAX       ; 004c2c2e
    CMP EDX,EDI                         ; 004c2c32
    JLE 0x004c2c07                      ; 004c2c34
        ;   XREF to: 004c2c07 (CONDITIONAL_JUMP)  ; LAB_004c2c07
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c2c36
        ;   Label: LAB_004c2c36
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c2c3a
    INC EAX                             ; 004c2c3e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c2c3f
    MOV dword ptr [ESP + 0x24],EAX      ; 004c2c43
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c2c47
    ADD ESI,0x4                         ; 004c2c4b
    ADD EDX,EAX                         ; 004c2c4e
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c2c50
    MOV dword ptr [ESP + 0x4],EDX       ; 004c2c54
    CMP EAX,ECX                         ; 004c2c58
    JG 0x004c2a30                       ; 004c2c5a
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c2bee                      ; 004c2c60
        ;   XREF to: 004c2bee (UNCONDITIONAL_JUMP)  ; LAB_004c2bee
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004c2c62
        ;   Label: LAB_004c2c62
    SHL EDX,0x2                         ; 004c2c69
    CMP EAX,0x10                        ; 004c2c6c
    JNZ 0x004c39ce                      ; 004c2c6f
        ;   XREF to: 004c39ce (CONDITIONAL_JUMP)  ; LAB_004c39ce
    MOV ESI,dword ptr [ESP + 0xec]      ; 004c2c75
    CMP ESI,-0x1                        ; 004c2c7c
    JNZ 0x004c2fe6                      ; 004c2c7f
        ;   XREF to: 004c2fe6 (CONDITIONAL_JUMP)  ; LAB_004c2fe6
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004c2c85
    JZ 0x004c2f52                       ; 004c2c8c
        ;   XREF to: 004c2f52 (CONDITIONAL_JUMP)  ; LAB_004c2f52
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c2c92
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c2c99
    MOV dword ptr [ESP + 0x28],EAX      ; 004c2c9d
    CMP EAX,EDX                         ; 004c2ca1
    JG 0x004c2a30                       ; 004c2ca3
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c2ca9
    SHL EAX,0xa                         ; 004c2cad
    LEA EDX,[EBX + EAX*0x1]             ; 004c2cb0
    MOV dword ptr [ESP + 0x40],EDX      ; 004c2cb3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c2cb7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c2cbb
    SUB EAX,EDX                         ; 004c2cc2
    SHL EAX,0x8                         ; 004c2cc4
    ADD EBX,EAX                         ; 004c2cc7
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c2cc9
    SHL EAX,0x2                         ; 004c2ccd
    MOV dword ptr [ESP + 0x30],EBX      ; 004c2cd0
    MOV dword ptr [ESP + 0xb0],EAX      ; 004c2cd4
    MOV EBX,dword ptr [ESP + 0xb0]      ; 004c2cdb
        ;   Label: LAB_004c2cdb
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c2ce2
    MOV EBX,dword ptr [EBX + 0x1c4354c] ; 004c2ce9 | DAT_01c4354c
    ADD EAX,EAX                         ; 004c2cef
    ADD EBX,EAX                         ; 004c2cf1
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c2cf3
    MOV EDI,dword ptr [ESP + 0x8]       ; 004c2cfa
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c2cfe
    CMP EAX,EDI                         ; 004c2d02
    JG 0x004c2f19                       ; 004c2d04
        ;   XREF to: 004c2f19 (CONDITIONAL_JUMP)  ; LAB_004c2f19
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c2d0a
        ;   Label: LAB_004c2d0a
    MOV CL,byte ptr [ECX]               ; 004c2d0e
    AND ECX,0xff                        ; 004c2d10
    MOV ESI,dword ptr [ESP + 0x30]      ; 004c2d16
    LEA EAX,[ECX + ECX*0x2]             ; 004c2d1a
    ADD EAX,ESI                         ; 004c2d1d
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004c2d1f
    MOV EDX,dword ptr [0x0061b4b8]      ; 004c2d25 | DAT_0061b4b8
    AND EAX,0xff                        ; 004c2d2b
    IMUL EDX,EAX                        ; 004c2d30
    MOV EAX,EDX                         ; 004c2d33
    SAR EDX,0x1f                        ; 004c2d35
    SHL EDX,0x8                         ; 004c2d38
    SBB EAX,EDX                         ; 004c2d3b
    SAR EAX,0x8                         ; 004c2d3d
    TEST EAX,EAX                        ; 004c2d40
    JZ 0x004c2ef8                       ; 004c2d42
        ;   XREF to: 004c2ef8 (CONDITIONAL_JUMP)  ; LAB_004c2ef8
    MOV EDI,dword ptr [ESP + 0x40]      ; 004c2d48
    SHL ECX,0x2                         ; 004c2d4c
    MOV DX,word ptr [EBX]               ; 004c2d4f
    ADD EDI,ECX                         ; 004c2d52
    MOV EBP,dword ptr [0x00623f20]      ; 004c2d54 | DAT_00623f20
    MOV dword ptr [ESP + 0xc4],EDX      ; 004c2d5a
    MOV EDX,dword ptr [EDI + 0xdb4]     ; 004c2d61
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c2d67 | DAT_01c4e9d4
    AND EDX,EBP                         ; 004c2d6d
    SHR EDX,CL                          ; 004c2d6f
    MOV CL,byte ptr [0x01c4e9dc]        ; 004c2d71 | DAT_01c4e9dc
    MOV ESI,dword ptr [EDI + 0xdb4]     ; 004c2d77
    SHL EDX,CL                          ; 004c2d7d
    AND ESI,dword ptr [0x00623f28]      ; 004c2d7f | DAT_00623f28
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c2d85 | DAT_01c4e9e0
    SHR ESI,CL                          ; 004c2d8b
    MOV CL,byte ptr [0x01c4e9e8]        ; 004c2d8d | DAT_01c4e9e8
    SHL ESI,CL                          ; 004c2d93
    AND ESI,0xff                        ; 004c2d95
    IMUL ESI,EAX                        ; 004c2d9b
    MOV EBP,dword ptr [EDI + 0xdb4]     ; 004c2d9e
    AND EBP,dword ptr [0x00623f30]      ; 004c2da4 | DAT_00623f30
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c2daa | DAT_01c4e9ec
    SHR EBP,CL                          ; 004c2db0
    MOV CL,byte ptr [0x01c4e9f4]        ; 004c2db2 | DAT_01c4e9f4
    SHL EBP,CL                          ; 004c2db8
    AND EBP,0xff                        ; 004c2dba
    IMUL EBP,EAX                        ; 004c2dc0
    AND EDX,0xff                        ; 004c2dc3
    MOV dword ptr [ESP + 0x34],EDX      ; 004c2dc9
    XOR EDX,EDX                         ; 004c2dcd
    MOV DX,word ptr [ESP + 0xc4]        ; 004c2dcf
    MOV ECX,dword ptr [0x00623f20]      ; 004c2dd7 | DAT_00623f20
    AND ECX,EDX                         ; 004c2ddd
    MOV dword ptr [ESP + 0x98],ECX      ; 004c2ddf
    MOV EDI,dword ptr [ESP + 0x98]      ; 004c2de6
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c2ded | DAT_01c4e9d4
    SHR EDI,CL                          ; 004c2df3
    MOV CL,byte ptr [0x01c4e9dc]        ; 004c2df5 | DAT_01c4e9dc
    SHL EDI,CL                          ; 004c2dfb
    MOV ECX,EDI                         ; 004c2dfd
    AND ECX,0xff                        ; 004c2dff
    MOV dword ptr [ESP + 0x38],ECX      ; 004c2e05
    MOV ECX,dword ptr [0x00623f28]      ; 004c2e09 | DAT_00623f28
    AND ECX,EDX                         ; 004c2e0f
    MOV dword ptr [ESP + 0x98],ECX      ; 004c2e11
    MOV EDI,dword ptr [ESP + 0x98]      ; 004c2e18
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c2e1f | DAT_01c4e9e0
    SHR EDI,CL                          ; 004c2e25
    MOV CL,byte ptr [0x01c4e9e8]        ; 004c2e27 | DAT_01c4e9e8
    SHL EDI,CL                          ; 004c2e2d
    MOV ECX,dword ptr [0x00623f30]      ; 004c2e2f | DAT_00623f30
    AND ECX,EDX                         ; 004c2e35
    MOV dword ptr [ESP + 0x98],ECX      ; 004c2e37
    MOV EDX,dword ptr [ESP + 0x98]      ; 004c2e3e
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c2e45 | DAT_01c4e9ec
    SHR EDX,CL                          ; 004c2e4b
    MOV CL,byte ptr [0x01c4e9f4]        ; 004c2e4d | DAT_01c4e9f4
    SHL EDX,CL                          ; 004c2e53
    MOV ECX,EDX                         ; 004c2e55
    MOV EDX,0xff                        ; 004c2e57
    AND EDI,0xff                        ; 004c2e5c
    SUB EDX,EAX                         ; 004c2e62
    IMUL EDI,EDX                        ; 004c2e64
    AND ECX,0xff                        ; 004c2e67
    MOV dword ptr [ESP + 0x3c],ECX      ; 004c2e6d
    MOV ECX,dword ptr [ESP + 0x38]      ; 004c2e71
    IMUL ECX,EDX                        ; 004c2e75
    MOV dword ptr [ESP + 0x98],ECX      ; 004c2e78
    MOV ECX,dword ptr [ESP + 0x34]      ; 004c2e7f
    IMUL ECX,EAX                        ; 004c2e83
    ADD ECX,dword ptr [ESP + 0x98]      ; 004c2e86
    MOV dword ptr [ESP + 0x34],ECX      ; 004c2e8d
    IMUL EDX,dword ptr [ESP + 0x3c]     ; 004c2e91
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c2e96
    ADD ESI,EDI                         ; 004c2e9a
    SHR EAX,0x8                         ; 004c2e9c
    MOV ECX,ESI                         ; 004c2e9f
    ADD EBP,EDX                         ; 004c2ea1
    MOV ESI,dword ptr [0x01c4e9d8]      ; 004c2ea3 | DAT_01c4e9d8
    XOR EDX,EDX                         ; 004c2ea9
    DIV ESI                             ; 004c2eab
    MOV EDI,dword ptr [0x01c4e9e4]      ; 004c2ead | DAT_01c4e9e4
    SHR ECX,0x8                         ; 004c2eb3
    MOV ESI,EAX                         ; 004c2eb6
    XOR EDX,EDX                         ; 004c2eb8
    MOV EAX,ECX                         ; 004c2eba
    DIV EDI                             ; 004c2ebc
    MOV dword ptr [ESP + 0x44],ECX      ; 004c2ebe
    SHR EBP,0x8                         ; 004c2ec2
    MOV dword ptr [ESP + 0x44],EAX      ; 004c2ec5
    XOR EDX,EDX                         ; 004c2ec9
    MOV EAX,EBP                         ; 004c2ecb
    DIV dword ptr [0x01c4e9f0]          ; 004c2ecd | DAT_01c4e9f0
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c2ed3 | DAT_01c4e9d4
    SHL ESI,CL                          ; 004c2ed9
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c2edb | DAT_01c4e9e0
    MOV EDI,EAX                         ; 004c2ee1
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c2ee3
    SHL EAX,CL                          ; 004c2ee7
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c2ee9 | DAT_01c4e9ec
    OR EAX,ESI                          ; 004c2eef
    SHL EDI,CL                          ; 004c2ef1
    OR EAX,EDI                          ; 004c2ef3
    MOV word ptr [EBX],AX               ; 004c2ef5
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004c2ef8
        ;   Label: LAB_004c2ef8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c2efc
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c2f00
    ADD EBX,0x2                         ; 004c2f04
    INC EBP                             ; 004c2f07
    INC EAX                             ; 004c2f08
    MOV dword ptr [ESP + 0x2c],EBP      ; 004c2f09
    MOV dword ptr [ESP + 0x4],EAX       ; 004c2f0d
    CMP EBP,EDX                         ; 004c2f11
    JLE 0x004c2d0a                      ; 004c2f13
        ;   XREF to: 004c2d0a (CONDITIONAL_JUMP)  ; LAB_004c2d0a
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004c2f19
        ;   Label: LAB_004c2f19
    MOV ECX,dword ptr [ESP + 0x28]      ; 004c2f20
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c2f24
    MOV EBX,dword ptr [ESP + 0x4]       ; 004c2f28
    MOV ESI,dword ptr [ESP + 0xc]       ; 004c2f2c
    ADD EDX,0x4                         ; 004c2f30
    INC ECX                             ; 004c2f33
    ADD EBX,EAX                         ; 004c2f34
    MOV dword ptr [ESP + 0xb0],EDX      ; 004c2f36
    MOV dword ptr [ESP + 0x28],ECX      ; 004c2f3d
    MOV dword ptr [ESP + 0x4],EBX       ; 004c2f41
    CMP ECX,ESI                         ; 004c2f45
    JG 0x004c2a30                       ; 004c2f47
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c2cdb                      ; 004c2f4d
        ;   XREF to: 004c2cdb (UNCONDITIONAL_JUMP)  ; LAB_004c2cdb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c2f52
        ;   Label: LAB_004c2f52
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c2f56
    CMP EDI,EAX                         ; 004c2f5d
    JG 0x004c2a30                       ; 004c2f5f
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c2f65
    SHL ESI,0xa                         ; 004c2f69
    LEA EBP,[EDI*0x4 + 0x0]             ; 004c2f6c
    ADD ESI,EBX                         ; 004c2f73
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c2f75
        ;   Label: LAB_004c2f75
    MOV ECX,dword ptr [EBP + 0x1c4354c] ; 004c2f7c | DAT_01c4354c
    ADD EAX,EAX                         ; 004c2f82
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c2f84
    ADD ECX,EAX                         ; 004c2f8b
    CMP EDX,dword ptr [ESP + 0x8]       ; 004c2f8d
    JG 0x004c2fc6                       ; 004c2f91
        ;   XREF to: 004c2fc6 (CONDITIONAL_JUMP)  ; LAB_004c2fc6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c2f93
        ;   Label: LAB_004c2f93
    MOV AL,byte ptr [EAX]               ; 004c2f97
    AND EAX,0xff                        ; 004c2f99
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c2f9e
    JZ 0x004c2fb1                       ; 004c2fa4
        ;   XREF to: 004c2fb1 (CONDITIONAL_JUMP)  ; LAB_004c2fb1
    MOV AX,word ptr [ESI + EAX*0x4 + 0xdb4] ; 004c2fa6
    MOV word ptr [ECX],AX               ; 004c2fae
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c2fb1
        ;   Label: LAB_004c2fb1
    INC EAX                             ; 004c2fb5
    INC EDX                             ; 004c2fb6
    MOV dword ptr [ESP + 0x4],EAX       ; 004c2fb7
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c2fbb
    ADD ECX,0x2                         ; 004c2fbf
    CMP EDX,EAX                         ; 004c2fc2
    JLE 0x004c2f93                      ; 004c2fc4
        ;   XREF to: 004c2f93 (CONDITIONAL_JUMP)  ; LAB_004c2f93
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c2fc6
        ;   Label: LAB_004c2fc6
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c2fca
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c2fce
    ADD EBP,0x4                         ; 004c2fd2
    ADD EDX,EAX                         ; 004c2fd5
    INC EDI                             ; 004c2fd7
    MOV dword ptr [ESP + 0x4],EDX       ; 004c2fd8
    CMP EDI,ECX                         ; 004c2fdc
    JG 0x004c2a30                       ; 004c2fde
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c2f75                      ; 004c2fe4
        ;   XREF to: 004c2f75 (UNCONDITIONAL_JUMP)  ; LAB_004c2f75
    CMP ESI,-0x2                        ; 004c2fe6
        ;   Label: LAB_004c2fe6
    JNZ 0x004c332c                      ; 004c2fe9
        ;   XREF to: 004c332c (CONDITIONAL_JUMP)  ; LAB_004c332c
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004c2fef
    JZ 0x004c32a1                       ; 004c2ff6
        ;   XREF to: 004c32a1 (CONDITIONAL_JUMP)  ; LAB_004c32a1
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c2ffc
    MOV EDI,dword ptr [ESP + 0xc]       ; 004c3003
    MOV dword ptr [ESP + 0x48],EAX      ; 004c3007
    CMP EAX,EDI                         ; 004c300b
    JG 0x004c2a30                       ; 004c300d
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c3013
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c3017
    SUB EAX,EDX                         ; 004c301e
    SHL EAX,0x8                         ; 004c3020
    ADD EBX,EAX                         ; 004c3023
    MOV EAX,dword ptr [ESP + 0x48]      ; 004c3025
    SHL EAX,0x2                         ; 004c3029
    MOV dword ptr [ESP + 0x50],EBX      ; 004c302c
    MOV dword ptr [ESP + 0xac],EAX      ; 004c3030
    MOV EAX,dword ptr [ESP + 0xac]      ; 004c3037
        ;   Label: LAB_004c3037
    MOV EBX,dword ptr [ESP + 0xe4]      ; 004c303e
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 004c3045 | DAT_01c4354c
    ADD EBX,EBX                         ; 004c304b
    ADD EBX,EAX                         ; 004c304d
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c304f
    MOV ESI,dword ptr [ESP + 0x8]       ; 004c3056
    MOV dword ptr [ESP + 0x4c],EAX      ; 004c305a
    CMP EAX,ESI                         ; 004c305e
    JG 0x004c3268                       ; 004c3060
        ;   XREF to: 004c3268 (CONDITIONAL_JUMP)  ; LAB_004c3268
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3066
        ;   Label: LAB_004c3066
    MOV AL,byte ptr [EAX]               ; 004c306a
    AND EAX,0xff                        ; 004c306c
    MOV ECX,dword ptr [ESP + 0x50]      ; 004c3071
    LEA EAX,[EAX + EAX*0x2]             ; 004c3075
    ADD EAX,ECX                         ; 004c3078
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004c307a
    MOV EDX,dword ptr [0x0061b4b8]      ; 004c3080 | DAT_0061b4b8
    AND EAX,0xff                        ; 004c3086
    IMUL EDX,EAX                        ; 004c308b
    MOV EAX,EDX                         ; 004c308e
    SAR EDX,0x1f                        ; 004c3090
    SHL EDX,0x8                         ; 004c3093
    SBB EAX,EDX                         ; 004c3096
    SAR EAX,0x8                         ; 004c3098
    TEST EAX,EAX                        ; 004c309b
    JZ 0x004c3247                       ; 004c309d
        ;   XREF to: 004c3247 (CONDITIONAL_JUMP)  ; LAB_004c3247
    MOV DX,word ptr [EBX]               ; 004c30a3
    MOV dword ptr [ESP + 0xc0],EDX      ; 004c30a6
    XOR EDX,EDX                         ; 004c30ad
    MOV ESI,dword ptr [0x00623f20]      ; 004c30af | DAT_00623f20
    MOV DX,word ptr [0x01cc8cd2]        ; 004c30b5 | DAT_01cc8cd2
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c30bc | DAT_01c4e9d4
    AND ESI,EDX                         ; 004c30c2
    SHR ESI,CL                          ; 004c30c4
    MOV CL,byte ptr [0x01c4e9dc]        ; 004c30c6 | DAT_01c4e9dc
    SHL ESI,CL                          ; 004c30cc
    AND ESI,0xff                        ; 004c30ce
    MOV dword ptr [ESP + 0x54],ESI      ; 004c30d4
    MOV ESI,dword ptr [0x00623f28]      ; 004c30d8 | DAT_00623f28
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c30de | DAT_01c4e9e0
    AND ESI,EDX                         ; 004c30e4
    MOV EDI,dword ptr [0x00623f30]      ; 004c30e6 | DAT_00623f30
    SHR ESI,CL                          ; 004c30ec
    MOV CL,byte ptr [0x01c4e9e8]        ; 004c30ee | DAT_01c4e9e8
    AND EDI,EDX                         ; 004c30f4
    SHL ESI,CL                          ; 004c30f6
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c30f8 | DAT_01c4e9ec
    XOR EDX,EDX                         ; 004c30fe
    SHR EDI,CL                          ; 004c3100
    MOV CL,byte ptr [0x01c4e9f4]        ; 004c3102 | DAT_01c4e9f4
    MOV DX,word ptr [ESP + 0xc0]        ; 004c3108
    SHL EDI,CL                          ; 004c3110
    MOV ECX,dword ptr [0x00623f20]      ; 004c3112 | DAT_00623f20
    AND ECX,EDX                         ; 004c3118
    MOV dword ptr [ESP + 0x98],ECX      ; 004c311a
    MOV EBP,dword ptr [ESP + 0x98]      ; 004c3121
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c3128 | DAT_01c4e9d4
    SHR EBP,CL                          ; 004c312e
    MOV CL,byte ptr [0x01c4e9dc]        ; 004c3130 | DAT_01c4e9dc
    SHL EBP,CL                          ; 004c3136
    MOV ECX,EBP                         ; 004c3138
    AND ECX,0xff                        ; 004c313a
    MOV dword ptr [ESP + 0x58],ECX      ; 004c3140
    MOV ECX,dword ptr [0x00623f28]      ; 004c3144 | DAT_00623f28
    AND ECX,EDX                         ; 004c314a
    MOV dword ptr [ESP + 0x98],ECX      ; 004c314c
    MOV EBP,dword ptr [ESP + 0x98]      ; 004c3153
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c315a | DAT_01c4e9e0
    SHR EBP,CL                          ; 004c3160
    MOV CL,byte ptr [0x01c4e9e8]        ; 004c3162 | DAT_01c4e9e8
    SHL EBP,CL                          ; 004c3168
    MOV ECX,dword ptr [0x00623f30]      ; 004c316a | DAT_00623f30
    AND ECX,EDX                         ; 004c3170
    MOV dword ptr [ESP + 0x98],ECX      ; 004c3172
    MOV EDX,dword ptr [ESP + 0x98]      ; 004c3179
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c3180 | DAT_01c4e9ec
    SHR EDX,CL                          ; 004c3186
    MOV CL,byte ptr [0x01c4e9f4]        ; 004c3188 | DAT_01c4e9f4
    SHL EDX,CL                          ; 004c318e
    MOV ECX,EDX                         ; 004c3190
    MOV EDX,0xff                        ; 004c3192
    AND EBP,0xff                        ; 004c3197
    SUB EDX,EAX                         ; 004c319d
    IMUL EBP,EDX                        ; 004c319f
    AND ECX,0xff                        ; 004c31a2
    MOV dword ptr [ESP + 0x5c],ECX      ; 004c31a8
    MOV ECX,dword ptr [ESP + 0x58]      ; 004c31ac
    IMUL ECX,EDX                        ; 004c31b0
    MOV dword ptr [ESP + 0x98],ECX      ; 004c31b3
    MOV ECX,dword ptr [ESP + 0x54]      ; 004c31ba
    IMUL ECX,EAX                        ; 004c31be
    ADD ECX,dword ptr [ESP + 0x98]      ; 004c31c1
    AND ESI,0xff                        ; 004c31c8
    MOV dword ptr [ESP + 0x54],ECX      ; 004c31ce
    MOV ECX,ESI                         ; 004c31d2
    IMUL ECX,EAX                        ; 004c31d4
    ADD ECX,EBP                         ; 004c31d7
    IMUL EDX,dword ptr [ESP + 0x5c]     ; 004c31d9
    AND EDI,0xff                        ; 004c31de
    MOV EBP,EDI                         ; 004c31e4
    IMUL EBP,EAX                        ; 004c31e6
    MOV ESI,dword ptr [0x01c4e9d8]      ; 004c31e9 | DAT_01c4e9d8
    MOV EAX,dword ptr [ESP + 0x54]      ; 004c31ef
    ADD EBP,EDX                         ; 004c31f3
    SHR EAX,0x8                         ; 004c31f5
    XOR EDX,EDX                         ; 004c31f8
    DIV ESI                             ; 004c31fa
    SHR ECX,0x8                         ; 004c31fc
    MOV EDI,dword ptr [0x01c4e9e4]      ; 004c31ff | DAT_01c4e9e4
    MOV ESI,EAX                         ; 004c3205
    XOR EDX,EDX                         ; 004c3207
    MOV EAX,ECX                         ; 004c3209
    DIV EDI                             ; 004c320b
    MOV dword ptr [ESP + 0x60],ECX      ; 004c320d
    SHR EBP,0x8                         ; 004c3211
    MOV dword ptr [ESP + 0x60],EAX      ; 004c3214
    XOR EDX,EDX                         ; 004c3218
    MOV EAX,EBP                         ; 004c321a
    DIV dword ptr [0x01c4e9f0]          ; 004c321c | DAT_01c4e9f0
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c3222 | DAT_01c4e9d4
    SHL ESI,CL                          ; 004c3228
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c322a | DAT_01c4e9e0
    MOV EDI,EAX                         ; 004c3230
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c3232
    SHL EAX,CL                          ; 004c3236
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c3238 | DAT_01c4e9ec
    OR EAX,ESI                          ; 004c323e
    SHL EDI,CL                          ; 004c3240
    OR EAX,EDI                          ; 004c3242
    MOV word ptr [EBX],AX               ; 004c3244
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004c3247
        ;   Label: LAB_004c3247
    MOV EBP,dword ptr [ESP + 0x4]       ; 004c324b
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c324f
    ADD EBX,0x2                         ; 004c3253
    INC EDI                             ; 004c3256
    INC EBP                             ; 004c3257
    MOV dword ptr [ESP + 0x4c],EDI      ; 004c3258
    MOV dword ptr [ESP + 0x4],EBP       ; 004c325c
    CMP EDI,EDX                         ; 004c3260
    JLE 0x004c3066                      ; 004c3262
        ;   XREF to: 004c3066 (CONDITIONAL_JUMP)  ; LAB_004c3066
    MOV EAX,dword ptr [ESP + 0xac]      ; 004c3268
        ;   Label: LAB_004c3268
    MOV EDX,dword ptr [ESP + 0x48]      ; 004c326f
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c3273
    ADD EAX,0x4                         ; 004c3277
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c327a
    MOV dword ptr [ESP + 0xac],EAX      ; 004c327e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3285
    INC EDX                             ; 004c3289
    ADD ECX,EAX                         ; 004c328a
    MOV dword ptr [ESP + 0x48],EDX      ; 004c328c
    MOV dword ptr [ESP + 0x4],ECX       ; 004c3290
    CMP EDX,EBX                         ; 004c3294
    JG 0x004c2a30                       ; 004c3296
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c3037                      ; 004c329c
        ;   XREF to: 004c3037 (UNCONDITIONAL_JUMP)  ; LAB_004c3037
    MOV ESI,dword ptr [ESP + 0xc]       ; 004c32a1
        ;   Label: LAB_004c32a1
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c32a5
    CMP EDI,ESI                         ; 004c32ac
    JG 0x004c2a30                       ; 004c32ae
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    LEA ESI,[EDI*0x4 + 0x0]             ; 004c32b4
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c32bb
        ;   Label: LAB_004c32bb
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c32c2
    MOV ECX,dword ptr [ESI + 0x1c4354c] ; 004c32c9 | DAT_01c4354c
    ADD EAX,EAX                         ; 004c32cf
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c32d1
    ADD ECX,EAX                         ; 004c32d5
    CMP EDX,EBP                         ; 004c32d7
    JG 0x004c330c                       ; 004c32d9
        ;   XREF to: 004c330c (CONDITIONAL_JUMP)  ; LAB_004c330c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c32db
        ;   Label: LAB_004c32db
    MOV AL,byte ptr [EAX]               ; 004c32df
    AND EAX,0xff                        ; 004c32e1
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c32e6
    JZ 0x004c32f7                       ; 004c32ec
        ;   XREF to: 004c32f7 (CONDITIONAL_JUMP)  ; LAB_004c32f7
    MOV AX,[0x01cc8cd2]                 ; 004c32ee | DAT_01cc8cd2
    MOV word ptr [ECX],AX               ; 004c32f4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c32f7
        ;   Label: LAB_004c32f7
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c32fb
    ADD ECX,0x2                         ; 004c32ff
    INC EAX                             ; 004c3302
    INC EDX                             ; 004c3303
    MOV dword ptr [ESP + 0x4],EAX       ; 004c3304
    CMP EDX,EBP                         ; 004c3308
    JLE 0x004c32db                      ; 004c330a
        ;   XREF to: 004c32db (CONDITIONAL_JUMP)  ; LAB_004c32db
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c330c
        ;   Label: LAB_004c330c
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c3310
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3314
    ADD ESI,0x4                         ; 004c3318
    ADD EDX,EAX                         ; 004c331b
    INC EDI                             ; 004c331d
    MOV dword ptr [ESP + 0x4],EDX       ; 004c331e
    CMP EDI,ECX                         ; 004c3322
    JG 0x004c2a30                       ; 004c3324
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c32bb                      ; 004c332a
        ;   XREF to: 004c32bb (UNCONDITIONAL_JUMP)  ; LAB_004c32bb
    CMP ESI,-0x3                        ; 004c332c
        ;   Label: LAB_004c332c
    JNZ 0x004c365a                      ; 004c332f
        ;   XREF to: 004c365a (CONDITIONAL_JUMP)  ; LAB_004c365a
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004c3335
    JZ 0x004c35cf                       ; 004c333c
        ;   XREF to: 004c35cf (CONDITIONAL_JUMP)  ; LAB_004c35cf
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c3342
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c3349
    MOV dword ptr [ESP + 0x64],EAX      ; 004c334d
    CMP EAX,EDX                         ; 004c3351
    JG 0x004c2a30                       ; 004c3353
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c3359
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c335d
    SUB EAX,EDX                         ; 004c3364
    SHL EAX,0x8                         ; 004c3366
    ADD EBX,EAX                         ; 004c3369
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c336b
    SHL EAX,0x2                         ; 004c336f
    MOV dword ptr [ESP + 0x6c],EBX      ; 004c3372
    MOV dword ptr [ESP + 0xa8],EAX      ; 004c3376
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004c337d
        ;   Label: LAB_004c337d
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c3384
    MOV EBX,dword ptr [EBX + 0x1c4354c] ; 004c338b | DAT_01c4354c
    ADD EAX,EAX                         ; 004c3391
    ADD EBX,EAX                         ; 004c3393
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c3395
    MOV ESI,dword ptr [ESP + 0x8]       ; 004c339c
    MOV dword ptr [ESP + 0x68],EAX      ; 004c33a0
    CMP EAX,ESI                         ; 004c33a4
    JG 0x004c3596                       ; 004c33a6
        ;   XREF to: 004c3596 (CONDITIONAL_JUMP)  ; LAB_004c3596
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c33ac
        ;   Label: LAB_004c33ac
    MOV AL,byte ptr [EAX]               ; 004c33b0
    AND EAX,0xff                        ; 004c33b2
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004c33b7
    LEA EAX,[EAX + EAX*0x2]             ; 004c33bb
    ADD EAX,ECX                         ; 004c33be
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004c33c0
    MOV EDX,dword ptr [0x0061b4b8]      ; 004c33c6 | DAT_0061b4b8
    AND EAX,0xff                        ; 004c33cc
    IMUL EDX,EAX                        ; 004c33d1
    MOV EAX,EDX                         ; 004c33d4
    SAR EDX,0x1f                        ; 004c33d6
    SHL EDX,0x8                         ; 004c33d9
    SBB EAX,EDX                         ; 004c33dc
    SAR EAX,0x8                         ; 004c33de
    TEST EAX,EAX                        ; 004c33e1
    JZ 0x004c3575                       ; 004c33e3
        ;   XREF to: 004c3575 (CONDITIONAL_JUMP)  ; LAB_004c3575
    MOV EBP,dword ptr [0x01cc8ce4]      ; 004c33e9 | DAT_01cc8ce4
    MOV ESI,dword ptr [0x00623f20]      ; 004c33ef | DAT_00623f20
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c33f5 | DAT_01c4e9d4
    AND EBP,ESI                         ; 004c33fb
    SHR EBP,CL                          ; 004c33fd
    MOV CL,byte ptr [0x01c4e9dc]        ; 004c33ff | DAT_01c4e9dc
    SHL EBP,CL                          ; 004c3405
    AND EBP,0xff                        ; 004c3407
    IMUL EBP,EAX                        ; 004c340d
    MOV DX,word ptr [EBX]               ; 004c3410
    MOV EDI,dword ptr [0x00623f28]      ; 004c3413 | DAT_00623f28
    MOV dword ptr [ESP + 0xbc],EDX      ; 004c3419
    MOV EDX,dword ptr [0x01cc8ce4]      ; 004c3420 | DAT_01cc8ce4
    AND EDI,EDX                         ; 004c3426
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c3428 | DAT_01c4e9e0
    SHR EDI,CL                          ; 004c342e
    MOV CL,byte ptr [0x01c4e9e8]        ; 004c3430 | DAT_01c4e9e8
    SHL EDI,CL                          ; 004c3436
    AND EDI,0xff                        ; 004c3438
    IMUL EDI,EAX                        ; 004c343e
    MOV ESI,EDX                         ; 004c3441
    AND ESI,dword ptr [0x00623f30]      ; 004c3443 | DAT_00623f30
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c3449 | DAT_01c4e9ec
    SHR ESI,CL                          ; 004c344f
    MOV CL,byte ptr [0x01c4e9f4]        ; 004c3451 | DAT_01c4e9f4
    SHL ESI,CL                          ; 004c3457
    AND ESI,0xff                        ; 004c3459
    IMUL ESI,EAX                        ; 004c345f
    XOR EDX,EDX                         ; 004c3462
    MOV DX,word ptr [ESP + 0xbc]        ; 004c3464
    MOV ECX,dword ptr [0x00623f20]      ; 004c346c | DAT_00623f20
    MOV dword ptr [ESP + 0x98],EDX      ; 004c3472
    AND EDX,ECX                         ; 004c3479
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c347b | DAT_01c4e9d4
    SHR EDX,CL                          ; 004c3481
    MOV CL,byte ptr [0x01c4e9dc]        ; 004c3483 | DAT_01c4e9dc
    SHL EDX,CL                          ; 004c3489
    MOV ECX,EDX                         ; 004c348b
    AND ECX,0xff                        ; 004c348d
    MOV EDX,dword ptr [ESP + 0x98]      ; 004c3493
    MOV dword ptr [ESP + 0x70],ECX      ; 004c349a
    AND EDX,dword ptr [0x00623f28]      ; 004c349e | DAT_00623f28
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c34a4 | DAT_01c4e9e0
    SHR EDX,CL                          ; 004c34aa
    MOV CL,byte ptr [0x01c4e9e8]        ; 004c34ac | DAT_01c4e9e8
    SHL EDX,CL                          ; 004c34b2
    MOV ECX,EDX                         ; 004c34b4
    AND ECX,0xff                        ; 004c34b6
    MOV EDX,dword ptr [ESP + 0x98]      ; 004c34bc
    MOV dword ptr [ESP + 0x74],ECX      ; 004c34c3
    AND EDX,dword ptr [0x00623f30]      ; 004c34c7 | DAT_00623f30
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c34cd | DAT_01c4e9ec
    SHR EDX,CL                          ; 004c34d3
    MOV CL,byte ptr [0x01c4e9f4]        ; 004c34d5 | DAT_01c4e9f4
    SHL EDX,CL                          ; 004c34db
    MOV ECX,EDX                         ; 004c34dd
    AND ECX,0xff                        ; 004c34df
    MOV EDX,0xff                        ; 004c34e5
    MOV dword ptr [ESP + 0x78],ECX      ; 004c34ea
    SUB EDX,EAX                         ; 004c34ee
    MOV ECX,dword ptr [ESP + 0x70]      ; 004c34f0
    IMUL ECX,EDX                        ; 004c34f4
    ADD EBP,ECX                         ; 004c34f7
    MOV ECX,dword ptr [ESP + 0x74]      ; 004c34f9
    IMUL ECX,EDX                        ; 004c34fd
    ADD EDI,ECX                         ; 004c3500
    IMUL EDX,dword ptr [ESP + 0x78]     ; 004c3502
    ADD ESI,EDX                         ; 004c3507
    MOV EAX,EBP                         ; 004c3509
    SHR ESI,0x8                         ; 004c350b
    SHR EAX,0x8                         ; 004c350e
    MOV dword ptr [ESP + 0x98],ESI      ; 004c3511
    MOV EDX,ESI                         ; 004c3518
    MOV dword ptr [ESP + 0x7c],ESI      ; 004c351a
    XOR EDX,ESI                         ; 004c351e
    DIV dword ptr [0x01c4e9d8]          ; 004c3520 | DAT_01c4e9d8
    MOV ECX,EDI                         ; 004c3526
    MOV EDI,dword ptr [0x01c4e9e4]      ; 004c3528 | DAT_01c4e9e4
    SHR ECX,0x8                         ; 004c352e
    MOV ESI,EAX                         ; 004c3531
    XOR EDX,EDX                         ; 004c3533
    MOV EAX,ECX                         ; 004c3535
    DIV EDI                             ; 004c3537
    MOV EBP,dword ptr [0x01c4e9f0]      ; 004c3539 | DAT_01c4e9f0
    MOV EDI,EAX                         ; 004c353f
    XOR EDX,EDX                         ; 004c3541
    MOV EAX,dword ptr [ESP + 0x98]      ; 004c3543
    DIV EBP                             ; 004c354a
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c354c | DAT_01c4e9d4
    MOV dword ptr [ESP + 0x7c],EAX      ; 004c3552
    MOV EAX,ESI                         ; 004c3556
    SHL EAX,CL                          ; 004c3558
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c355a | DAT_01c4e9e0
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004c3560
    SHL EDI,CL                          ; 004c3564
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c3566 | DAT_01c4e9ec
    OR EAX,EDI                          ; 004c356c
    SHL EDX,CL                          ; 004c356e
    OR EAX,EDX                          ; 004c3570
    MOV word ptr [EBX],AX               ; 004c3572
    MOV EDI,dword ptr [ESP + 0x68]      ; 004c3575
        ;   Label: LAB_004c3575
    MOV EBP,dword ptr [ESP + 0x4]       ; 004c3579
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c357d
    ADD EBX,0x2                         ; 004c3581
    INC EDI                             ; 004c3584
    INC EBP                             ; 004c3585
    MOV dword ptr [ESP + 0x68],EDI      ; 004c3586
    MOV dword ptr [ESP + 0x4],EBP       ; 004c358a
    CMP EDI,EDX                         ; 004c358e
    JLE 0x004c33ac                      ; 004c3590
        ;   XREF to: 004c33ac (CONDITIONAL_JUMP)  ; LAB_004c33ac
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004c3596
        ;   Label: LAB_004c3596
    MOV EDX,dword ptr [ESP + 0x64]      ; 004c359d
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c35a1
    ADD EAX,0x4                         ; 004c35a5
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c35a8
    MOV dword ptr [ESP + 0xa8],EAX      ; 004c35ac
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c35b3
    INC EDX                             ; 004c35b7
    ADD ECX,EAX                         ; 004c35b8
    MOV dword ptr [ESP + 0x64],EDX      ; 004c35ba
    MOV dword ptr [ESP + 0x4],ECX       ; 004c35be
    CMP EDX,EBX                         ; 004c35c2
    JG 0x004c2a30                       ; 004c35c4
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c337d                      ; 004c35ca
        ;   XREF to: 004c337d (UNCONDITIONAL_JUMP)  ; LAB_004c337d
    MOV EBP,dword ptr [ESP + 0xc]       ; 004c35cf
        ;   Label: LAB_004c35cf
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c35d3
    CMP EDI,EBP                         ; 004c35da
    JG 0x004c2a30                       ; 004c35dc
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    LEA ESI,[EDI*0x4 + 0x0]             ; 004c35e2
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c35e9
        ;   Label: LAB_004c35e9
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c35f0
    MOV EAX,dword ptr [ESI + 0x1c4354c] ; 004c35f7 | DAT_01c4354c
    ADD EDX,EDX                         ; 004c35fd
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c35ff
    ADD EDX,EAX                         ; 004c3603
    CMP ECX,EBP                         ; 004c3605
    JG 0x004c363a                       ; 004c3607
        ;   XREF to: 004c363a (CONDITIONAL_JUMP)  ; LAB_004c363a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3609
        ;   Label: LAB_004c3609
    MOV AL,byte ptr [EAX]               ; 004c360d
    AND EAX,0xff                        ; 004c360f
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c3614
    JZ 0x004c3625                       ; 004c361a
        ;   XREF to: 004c3625 (CONDITIONAL_JUMP)  ; LAB_004c3625
    MOV AX,[0x01cc8ce4]                 ; 004c361c | DAT_01cc8ce4
    MOV word ptr [EDX],AX               ; 004c3622
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3625
        ;   Label: LAB_004c3625
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c3629
    INC ECX                             ; 004c362d
    INC EAX                             ; 004c362e
    ADD EDX,0x2                         ; 004c362f
    MOV dword ptr [ESP + 0x4],EAX       ; 004c3632
    CMP ECX,EBP                         ; 004c3636
    JLE 0x004c3609                      ; 004c3638
        ;   XREF to: 004c3609 (CONDITIONAL_JUMP)  ; LAB_004c3609
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c363a
        ;   Label: LAB_004c363a
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c363e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3642
    ADD ESI,0x4                         ; 004c3646
    ADD EDX,EAX                         ; 004c3649
    INC EDI                             ; 004c364b
    MOV dword ptr [ESP + 0x4],EDX       ; 004c364c
    CMP EDI,ECX                         ; 004c3650
    JG 0x004c2a30                       ; 004c3652
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c35e9                      ; 004c3658
        ;   XREF to: 004c35e9 (UNCONDITIONAL_JUMP)  ; LAB_004c35e9
    MOV AX,word ptr [ESI*0x2 + 0x1c4dad0] ; 004c365a
        ;   Label: LAB_004c365a
    MOV dword ptr [ESP + 0xb8],EAX      ; 004c3662
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004c3669
    JZ 0x004c3947                       ; 004c3670
        ;   XREF to: 004c3947 (CONDITIONAL_JUMP)  ; LAB_004c3947
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c3676
    MOV ESI,dword ptr [ESP + 0xc]       ; 004c367d
    MOV dword ptr [ESP + 0x80],EAX      ; 004c3681
    CMP EAX,ESI                         ; 004c3688
    JG 0x004c2a30                       ; 004c368a
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c3690
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c3694
    SUB EAX,EDX                         ; 004c369b
    SHL EAX,0x8                         ; 004c369d
    ADD EBX,EAX                         ; 004c36a0
    MOV EAX,dword ptr [ESP + 0x80]      ; 004c36a2
    SHL EAX,0x2                         ; 004c36a9
    MOV dword ptr [ESP + 0x88],EBX      ; 004c36ac
    MOV dword ptr [ESP + 0xa4],EAX      ; 004c36b3
    MOV EBX,dword ptr [ESP + 0xa4]      ; 004c36ba
        ;   Label: LAB_004c36ba
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c36c1
    MOV EBX,dword ptr [EBX + 0x1c4354c] ; 004c36c8 | DAT_01c4354c
    ADD EAX,EAX                         ; 004c36ce
    ADD EBX,EAX                         ; 004c36d0
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c36d2
    MOV ESI,dword ptr [ESP + 0x8]       ; 004c36d9
    MOV dword ptr [ESP + 0x84],EAX      ; 004c36dd
    CMP EAX,ESI                         ; 004c36e4
    JG 0x004c3908                       ; 004c36e6
        ;   XREF to: 004c3908 (CONDITIONAL_JUMP)  ; LAB_004c3908
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c36ec
        ;   Label: LAB_004c36ec
    MOV AL,byte ptr [EAX]               ; 004c36f0
    AND EAX,0xff                        ; 004c36f2
    MOV ECX,dword ptr [ESP + 0x88]      ; 004c36f7
    LEA EAX,[EAX + EAX*0x2]             ; 004c36fe
    ADD EAX,ECX                         ; 004c3701
    MOV AL,byte ptr [EAX + 0x1b4]       ; 004c3703
    MOV EDX,dword ptr [0x0061b4b8]      ; 004c3709 | DAT_0061b4b8
    AND EAX,0xff                        ; 004c370f
    IMUL EDX,EAX                        ; 004c3714
    MOV EAX,EDX                         ; 004c3717
    SAR EDX,0x1f                        ; 004c3719
    SHL EDX,0x8                         ; 004c371c
    SBB EAX,EDX                         ; 004c371f
    SAR EAX,0x8                         ; 004c3721
    TEST EAX,EAX                        ; 004c3724
    JZ 0x004c38e1                       ; 004c3726
        ;   XREF to: 004c38e1 (CONDITIONAL_JUMP)  ; LAB_004c38e1
    XOR ESI,ESI                         ; 004c372c
    MOV EDI,dword ptr [0x00623f20]      ; 004c372e | DAT_00623f20
    MOV SI,word ptr [ESP + 0xb8]        ; 004c3734
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c373c | DAT_01c4e9d4
    AND EDI,ESI                         ; 004c3742
    SHR EDI,CL                          ; 004c3744
    MOV CL,byte ptr [0x01c4e9dc]        ; 004c3746 | DAT_01c4e9dc
    SHL EDI,CL                          ; 004c374c
    AND EDI,0xff                        ; 004c374e
    IMUL EDI,EAX                        ; 004c3754
    MOV DX,word ptr [EBX]               ; 004c3757
    MOV dword ptr [ESP + 0xb4],EDX      ; 004c375a
    MOV EDX,dword ptr [0x00623f28]      ; 004c3761 | DAT_00623f28
    AND EDX,ESI                         ; 004c3767
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c3769 | DAT_01c4e9e0
    SHR EDX,CL                          ; 004c376f
    MOV CL,byte ptr [0x01c4e9e8]        ; 004c3771 | DAT_01c4e9e8
    SHL EDX,CL                          ; 004c3777
    AND EDX,0xff                        ; 004c3779
    IMUL EDX,EAX                        ; 004c377f
    AND ESI,dword ptr [0x00623f30]      ; 004c3782 | DAT_00623f30
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c3788 | DAT_01c4e9ec
    SHR ESI,CL                          ; 004c378e
    MOV CL,byte ptr [0x01c4e9f4]        ; 004c3790 | DAT_01c4e9f4
    SHL ESI,CL                          ; 004c3796
    AND ESI,0xff                        ; 004c3798
    MOV dword ptr [ESP + 0x8c],ESI      ; 004c379e
    XOR ESI,ESI                         ; 004c37a5
    MOV ECX,dword ptr [0x00623f20]      ; 004c37a7 | DAT_00623f20
    MOV SI,word ptr [ESP + 0xb4]        ; 004c37ad
    AND ECX,ESI                         ; 004c37b5
    MOV dword ptr [ESP + 0x98],ECX      ; 004c37b7
    MOV EBP,dword ptr [ESP + 0x98]      ; 004c37be
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c37c5 | DAT_01c4e9d4
    SHR EBP,CL                          ; 004c37cb
    MOV CL,byte ptr [0x01c4e9dc]        ; 004c37cd | DAT_01c4e9dc
    SHL EBP,CL                          ; 004c37d3
    MOV ECX,EBP                         ; 004c37d5
    AND ECX,0xff                        ; 004c37d7
    MOV dword ptr [ESP + 0x90],ECX      ; 004c37dd
    MOV ECX,dword ptr [0x00623f28]      ; 004c37e4 | DAT_00623f28
    AND ECX,ESI                         ; 004c37ea
    MOV dword ptr [ESP + 0x98],ECX      ; 004c37ec
    MOV EBP,dword ptr [ESP + 0x98]      ; 004c37f3
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c37fa | DAT_01c4e9e0
    SHR EBP,CL                          ; 004c3800
    MOV CL,byte ptr [0x01c4e9e8]        ; 004c3802 | DAT_01c4e9e8
    SHL EBP,CL                          ; 004c3808
    MOV ECX,dword ptr [0x00623f30]      ; 004c380a | DAT_00623f30
    AND ECX,ESI                         ; 004c3810
    MOV dword ptr [ESP + 0x98],ECX      ; 004c3812
    MOV ESI,dword ptr [ESP + 0x98]      ; 004c3819
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c3820 | DAT_01c4e9ec
    SHR ESI,CL                          ; 004c3826
    MOV CL,byte ptr [0x01c4e9f4]        ; 004c3828 | DAT_01c4e9f4
    SHL ESI,CL                          ; 004c382e
    MOV ECX,ESI                         ; 004c3830
    MOV ESI,0xff                        ; 004c3832
    AND EBP,0xff                        ; 004c3837
    SUB ESI,EAX                         ; 004c383d
    IMUL EBP,ESI                        ; 004c383f
    AND ECX,0xff                        ; 004c3842
    MOV dword ptr [ESP + 0x94],ECX      ; 004c3848
    MOV ECX,dword ptr [ESP + 0x90]      ; 004c384f
    IMUL ECX,ESI                        ; 004c3856
    ADD EDX,EBP                         ; 004c3859
    IMUL ESI,dword ptr [ESP + 0x94]     ; 004c385b
    ADD EDI,ECX                         ; 004c3863
    IMUL EAX,dword ptr [ESP + 0x8c]     ; 004c3865
    ADD EAX,ESI                         ; 004c386d
    MOV EBP,EDX                         ; 004c386f
    MOV dword ptr [ESP + 0x8c],EAX      ; 004c3871
    MOV ECX,EAX                         ; 004c3878
    MOV EAX,EDI                         ; 004c387a
    XOR EDX,EDX                         ; 004c387c
    SHR EAX,0x8                         ; 004c387e
    MOV ESI,dword ptr [0x01c4e9d8]      ; 004c3881 | DAT_01c4e9d8
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c3887
    DIV ESI                             ; 004c388e
    SHR EBP,0x8                         ; 004c3890
    MOV EDI,dword ptr [0x01c4e9e4]      ; 004c3893 | DAT_01c4e9e4
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c3899
    XOR EDX,EDX                         ; 004c38a0
    MOV EAX,EBP                         ; 004c38a2
    DIV EDI                             ; 004c38a4
    SHR ECX,0x8                         ; 004c38a6
    MOV EBP,dword ptr [0x01c4e9f0]      ; 004c38a9 | DAT_01c4e9f0
    MOV EDI,EAX                         ; 004c38af
    XOR EDX,EDX                         ; 004c38b1
    MOV EAX,ECX                         ; 004c38b3
    DIV EBP                             ; 004c38b5
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c38b7 | DAT_01c4e9d4
    MOV EDX,dword ptr [ESP + 0x9c]      ; 004c38bd
    MOV ESI,EAX                         ; 004c38c4
    MOV EAX,EDI                         ; 004c38c6
    SHL EDX,CL                          ; 004c38c8
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c38ca | DAT_01c4e9e0
    SHL EAX,CL                          ; 004c38d0
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c38d2 | DAT_01c4e9ec
    OR EAX,EDX                          ; 004c38d8
    SHL ESI,CL                          ; 004c38da
    OR EAX,ESI                          ; 004c38dc
    MOV word ptr [EBX],AX               ; 004c38de
    MOV EDI,dword ptr [ESP + 0x84]      ; 004c38e1
        ;   Label: LAB_004c38e1
    MOV EBP,dword ptr [ESP + 0x4]       ; 004c38e8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c38ec
    ADD EBX,0x2                         ; 004c38f0
    INC EDI                             ; 004c38f3
    INC EBP                             ; 004c38f4
    MOV dword ptr [ESP + 0x84],EDI      ; 004c38f5
    MOV dword ptr [ESP + 0x4],EBP       ; 004c38fc
    CMP EDI,EDX                         ; 004c3900
    JLE 0x004c36ec                      ; 004c3902
        ;   XREF to: 004c36ec (CONDITIONAL_JUMP)  ; LAB_004c36ec
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004c3908
        ;   Label: LAB_004c3908
    MOV EDX,dword ptr [ESP + 0x80]      ; 004c390f
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c3916
    ADD EAX,0x4                         ; 004c391a
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c391d
    MOV dword ptr [ESP + 0xa4],EAX      ; 004c3921
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3928
    INC EDX                             ; 004c392c
    ADD ECX,EAX                         ; 004c392d
    MOV dword ptr [ESP + 0x80],EDX      ; 004c392f
    MOV dword ptr [ESP + 0x4],ECX       ; 004c3936
    CMP EDX,EBX                         ; 004c393a
    JG 0x004c2a30                       ; 004c393c
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c36ba                      ; 004c3942
        ;   XREF to: 004c36ba (UNCONDITIONAL_JUMP)  ; LAB_004c36ba
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3947
        ;   Label: LAB_004c3947
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c394b
    CMP EDI,ECX                         ; 004c3952
    JG 0x004c2a30                       ; 004c3954
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV ESI,EDX                         ; 004c395a
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c395c
        ;   Label: LAB_004c395c
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c3963
    MOV EAX,dword ptr [ESI + 0x1c4354c] ; 004c396a | DAT_01c4354c
    ADD EDX,EDX                         ; 004c3970
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c3972
    ADD EDX,EAX                         ; 004c3976
    CMP ECX,EBP                         ; 004c3978
    JG 0x004c39ae                       ; 004c397a
        ;   XREF to: 004c39ae (CONDITIONAL_JUMP)  ; LAB_004c39ae
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c397c
        ;   Label: LAB_004c397c
    MOV AL,byte ptr [EAX]               ; 004c3980
    AND EAX,0xff                        ; 004c3982
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c3987
    JZ 0x004c3999                       ; 004c398d
        ;   XREF to: 004c3999 (CONDITIONAL_JUMP)  ; LAB_004c3999
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004c398f
    MOV word ptr [EDX],AX               ; 004c3996
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3999
        ;   Label: LAB_004c3999
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c399d
    INC ECX                             ; 004c39a1
    INC EAX                             ; 004c39a2
    ADD EDX,0x2                         ; 004c39a3
    MOV dword ptr [ESP + 0x4],EAX       ; 004c39a6
    CMP ECX,EBP                         ; 004c39aa
    JLE 0x004c397c                      ; 004c39ac
        ;   XREF to: 004c397c (CONDITIONAL_JUMP)  ; LAB_004c397c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c39ae
        ;   Label: LAB_004c39ae
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c39b2
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c39b6
    ADD ESI,0x4                         ; 004c39ba
    ADD EDX,EAX                         ; 004c39bd
    INC EDI                             ; 004c39bf
    MOV dword ptr [ESP + 0x4],EDX       ; 004c39c0
    CMP EDI,ECX                         ; 004c39c4
    JG 0x004c2a30                       ; 004c39c6
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c395c                      ; 004c39cc
        ;   XREF to: 004c395c (UNCONDITIONAL_JUMP)  ; LAB_004c395c
    CMP EAX,0x20                        ; 004c39ce
        ;   Label: LAB_004c39ce
    JNZ 0x004c2a30                      ; 004c39d1
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c39d7
    LEA EBP,[EBX + 0xdb4]               ; 004c39db
    SHL EAX,0xa                         ; 004c39e1
    MOV EDI,dword ptr [ESP + 0xec]      ; 004c39e4
    ADD EBP,EAX                         ; 004c39eb
    CMP EDI,-0x1                        ; 004c39ed
    JNZ 0x004c3b1f                      ; 004c39f0
        ;   XREF to: 004c3b1f (CONDITIONAL_JUMP)  ; LAB_004c3b1f
    MOV EDI,dword ptr [EBX + 0x1de4]    ; 004c39f6
    LEA ESI,[EBX + EAX*0x1]             ; 004c39fc
    TEST EDI,EDI                        ; 004c39ff
    JZ 0x004c3a9a                       ; 004c3a01
        ;   XREF to: 004c3a9a (CONDITIONAL_JUMP)  ; LAB_004c3a9a
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3a07
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c3a0b
    CMP EDI,ECX                         ; 004c3a12
    JG 0x004c2a30                       ; 004c3a14
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EBX,EDX                         ; 004c3a1a
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c3a1c
        ;   Label: LAB_004c3a1c
    MOV EDX,dword ptr [EBX + 0x1c4354c] ; 004c3a23 | DAT_01c4354c
    SHL EAX,0x2                         ; 004c3a29
    ADD EDX,EAX                         ; 004c3a2c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3a2e
    MOV AL,byte ptr [EAX]               ; 004c3a32
    AND EAX,0xff                        ; 004c3a34
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0xdb4] ; 004c3a39
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3a40
    PUSH ECX                            ; 004c3a44
    SUB EAX,dword ptr [ESP + 0xe8]      ; 004c3a45
    INC EAX                             ; 004c3a4c
    PUSH EAX                            ; 004c3a4d
    PUSH EBP                            ; 004c3a4e
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c3a4f
    PUSH EAX                            ; 004c3a53
    PUSH EDX                            ; 004c3a54
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0 ; 004c3a55
        ;   XREF to: 004c26c0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004c3a5a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3a5d
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004c3a61
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c3a68
    INC EAX                             ; 004c3a6c
    ADD EBX,0x4                         ; 004c3a6d
    ADD ECX,EAX                         ; 004c3a70
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3a72
    MOV dword ptr [ESP + 0x4],ECX       ; 004c3a76
    LEA EDX,[ECX + EAX*0x1]             ; 004c3a7a
    INC EDI                             ; 004c3a7d
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3a7e
    MOV dword ptr [ESP + 0x4],EDX       ; 004c3a82
    CMP EDI,ECX                         ; 004c3a86
    JLE 0x004c3a1c                      ; 004c3a88
        ;   XREF to: 004c3a1c (CONDITIONAL_JUMP)  ; LAB_004c3a1c
    MOV EBX,dword ptr [ESP]             ; 004c3a8a
    MOV EAX,EBX                         ; 004c3a8d
    ADD ESP,0xc8                        ; 004c3a8f
    POP EBP                             ; 004c3a95
    POP EDI                             ; 004c3a96
    POP ESI                             ; 004c3a97
    POP EBX                             ; 004c3a98
    RET                                 ; 004c3a99
    MOV EBP,dword ptr [ESP + 0xc]       ; 004c3a9a
        ;   Label: LAB_004c3a9a
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c3a9e
    CMP EDI,EBP                         ; 004c3aa5
    JG 0x004c2a30                       ; 004c3aa7
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EBP,EDX                         ; 004c3aad
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c3aaf
        ;   Label: LAB_004c3aaf
    MOV EDX,dword ptr [EBP + 0x1c4354c] ; 004c3ab6 | DAT_01c4354c
    SHL EAX,0x2                         ; 004c3abc
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c3abf
    ADD EDX,EAX                         ; 004c3ac6
    CMP ECX,dword ptr [ESP + 0x8]       ; 004c3ac8
    JG 0x004c3aff                       ; 004c3acc
        ;   XREF to: 004c3aff (CONDITIONAL_JUMP)  ; LAB_004c3aff
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3ace
        ;   Label: LAB_004c3ace
    MOV AL,byte ptr [EAX]               ; 004c3ad2
    AND EAX,0xff                        ; 004c3ad4
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c3ad9
    JZ 0x004c3aea                       ; 004c3adf
        ;   XREF to: 004c3aea (CONDITIONAL_JUMP)  ; LAB_004c3aea
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0xdb4] ; 004c3ae1
    MOV dword ptr [EDX],EAX             ; 004c3ae8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3aea
        ;   Label: LAB_004c3aea
    INC EAX                             ; 004c3aee
    INC ECX                             ; 004c3aef
    MOV dword ptr [ESP + 0x4],EAX       ; 004c3af0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3af4
    ADD EDX,0x4                         ; 004c3af8
    CMP ECX,EAX                         ; 004c3afb
    JLE 0x004c3ace                      ; 004c3afd
        ;   XREF to: 004c3ace (CONDITIONAL_JUMP)  ; LAB_004c3ace
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3aff
        ;   Label: LAB_004c3aff
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c3b03
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3b07
    ADD EBP,0x4                         ; 004c3b0b
    ADD EDX,EAX                         ; 004c3b0e
    INC EDI                             ; 004c3b10
    MOV dword ptr [ESP + 0x4],EDX       ; 004c3b11
    CMP EDI,ECX                         ; 004c3b15
    JG 0x004c2a30                       ; 004c3b17
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c3aaf                      ; 004c3b1d
        ;   XREF to: 004c3aaf (UNCONDITIONAL_JUMP)  ; LAB_004c3aaf
    CMP EDI,-0x2                        ; 004c3b1f
        ;   Label: LAB_004c3b1f
    JNZ 0x004c3c47                      ; 004c3b22
        ;   XREF to: 004c3c47 (CONDITIONAL_JUMP)  ; LAB_004c3c47
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004c3b28
    JZ 0x004c3bc2                       ; 004c3b2f
        ;   XREF to: 004c3bc2 (CONDITIONAL_JUMP)  ; LAB_004c3bc2
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3b35
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c3b39
    CMP EDI,ECX                         ; 004c3b40
    JG 0x004c2a30                       ; 004c3b42
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EBX,EDX                         ; 004c3b48
    MOV ESI,EBP                         ; 004c3b4a
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c3b4c
        ;   Label: LAB_004c3b4c
    MOV EAX,dword ptr [EBX + 0x1c4354c] ; 004c3b53 | DAT_01c4354c
    SHL EDX,0x2                         ; 004c3b59
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004c3b5c
    ADD EDX,EAX                         ; 004c3b63
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3b65
    MOV ECX,dword ptr [0x01cc8cd4]      ; 004c3b69 | DAT_01cc8cd4
    SUB EAX,EBP                         ; 004c3b6f
    PUSH ECX                            ; 004c3b71
    INC EAX                             ; 004c3b72
    PUSH EAX                            ; 004c3b73
    PUSH ESI                            ; 004c3b74
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c3b75
    PUSH EAX                            ; 004c3b79
    PUSH EDX                            ; 004c3b7a
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0 ; 004c3b7b
        ;   XREF to: 004c26c0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004c3b80
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3b83
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c3b87
    ADD EBX,0x4                         ; 004c3b8e
    SUB EAX,EDX                         ; 004c3b91
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c3b93
    INC EAX                             ; 004c3b97
    INC EDI                             ; 004c3b98
    ADD ECX,EAX                         ; 004c3b99
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3b9b
    MOV dword ptr [ESP + 0x4],ECX       ; 004c3b9f
    LEA EBP,[ECX + EAX*0x1]             ; 004c3ba3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c3ba6
    MOV dword ptr [ESP + 0x4],EBP       ; 004c3baa
    CMP EDI,EAX                         ; 004c3bae
    JLE 0x004c3b4c                      ; 004c3bb0
        ;   XREF to: 004c3b4c (CONDITIONAL_JUMP)  ; LAB_004c3b4c
    MOV EBX,dword ptr [ESP]             ; 004c3bb2
    MOV EAX,EBX                         ; 004c3bb5
    ADD ESP,0xc8                        ; 004c3bb7
    POP EBP                             ; 004c3bbd
    POP EDI                             ; 004c3bbe
    POP ESI                             ; 004c3bbf
    POP EBX                             ; 004c3bc0
    RET                                 ; 004c3bc1
    MOV EBP,dword ptr [ESP + 0xc]       ; 004c3bc2
        ;   Label: LAB_004c3bc2
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c3bc6
    CMP EDI,EBP                         ; 004c3bcd
    JG 0x004c2a30                       ; 004c3bcf
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV ESI,EDX                         ; 004c3bd5
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c3bd7
        ;   Label: LAB_004c3bd7
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c3bde
    MOV EAX,dword ptr [ESI + 0x1c4354c] ; 004c3be5 | DAT_01c4354c
    SHL ECX,0x2                         ; 004c3beb
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c3bee
    ADD ECX,EAX                         ; 004c3bf2
    CMP EDX,EBP                         ; 004c3bf4
    JG 0x004c3c27                       ; 004c3bf6
        ;   XREF to: 004c3c27 (CONDITIONAL_JUMP)  ; LAB_004c3c27
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3bf8
        ;   Label: LAB_004c3bf8
    MOV AL,byte ptr [EAX]               ; 004c3bfc
    AND EAX,0xff                        ; 004c3bfe
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c3c03
    JZ 0x004c3c12                       ; 004c3c09
        ;   XREF to: 004c3c12 (CONDITIONAL_JUMP)  ; LAB_004c3c12
    MOV EAX,[0x01cc8cd4]                ; 004c3c0b | DAT_01cc8cd4
    MOV dword ptr [ECX],EAX             ; 004c3c10
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3c12
        ;   Label: LAB_004c3c12
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c3c16
    INC EDX                             ; 004c3c1a
    INC EAX                             ; 004c3c1b
    ADD ECX,0x4                         ; 004c3c1c
    MOV dword ptr [ESP + 0x4],EAX       ; 004c3c1f
    CMP EDX,EBP                         ; 004c3c23
    JLE 0x004c3bf8                      ; 004c3c25
        ;   XREF to: 004c3bf8 (CONDITIONAL_JUMP)  ; LAB_004c3bf8
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3c27
        ;   Label: LAB_004c3c27
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c3c2b
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3c2f
    ADD ESI,0x4                         ; 004c3c33
    ADD EDX,EAX                         ; 004c3c36
    INC EDI                             ; 004c3c38
    MOV dword ptr [ESP + 0x4],EDX       ; 004c3c39
    CMP EDI,ECX                         ; 004c3c3d
    JG 0x004c2a30                       ; 004c3c3f
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c3bd7                      ; 004c3c45
        ;   XREF to: 004c3bd7 (UNCONDITIONAL_JUMP)  ; LAB_004c3bd7
    CMP EDI,-0x3                        ; 004c3c47
        ;   Label: LAB_004c3c47
    JNZ 0x004c3d6f                      ; 004c3c4a
        ;   XREF to: 004c3d6f (CONDITIONAL_JUMP)  ; LAB_004c3d6f
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004c3c50
    JZ 0x004c3cea                       ; 004c3c57
        ;   XREF to: 004c3cea (CONDITIONAL_JUMP)  ; LAB_004c3cea
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3c5d
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c3c61
    CMP EDI,ECX                         ; 004c3c68
    JG 0x004c2a30                       ; 004c3c6a
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EBX,EDX                         ; 004c3c70
    MOV ESI,EBP                         ; 004c3c72
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c3c74
        ;   Label: LAB_004c3c74
    MOV EDX,dword ptr [EBX + 0x1c4354c] ; 004c3c7b | DAT_01c4354c
    SHL EAX,0x2                         ; 004c3c81
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c3c84
    ADD EDX,EAX                         ; 004c3c8b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3c8d
    MOV EBP,dword ptr [0x01cc8ce4]      ; 004c3c91 | DAT_01cc8ce4
    SUB EAX,ECX                         ; 004c3c97
    PUSH EBP                            ; 004c3c99
    INC EAX                             ; 004c3c9a
    PUSH EAX                            ; 004c3c9b
    PUSH ESI                            ; 004c3c9c
    MOV EBP,dword ptr [ESP + 0x10]      ; 004c3c9d
    PUSH EBP                            ; 004c3ca1
    PUSH EDX                            ; 004c3ca2
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0 ; 004c3ca3
        ;   XREF to: 004c26c0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004c3ca8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3cab
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c3caf
    ADD EBX,0x4                         ; 004c3cb6
    SUB EAX,EDX                         ; 004c3cb9
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c3cbb
    INC EAX                             ; 004c3cbf
    INC EDI                             ; 004c3cc0
    ADD ECX,EAX                         ; 004c3cc1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3cc3
    MOV dword ptr [ESP + 0x4],ECX       ; 004c3cc7
    LEA EBP,[ECX + EAX*0x1]             ; 004c3ccb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c3cce
    MOV dword ptr [ESP + 0x4],EBP       ; 004c3cd2
    CMP EDI,EAX                         ; 004c3cd6
    JLE 0x004c3c74                      ; 004c3cd8
        ;   XREF to: 004c3c74 (CONDITIONAL_JUMP)  ; LAB_004c3c74
    MOV EBX,dword ptr [ESP]             ; 004c3cda
    MOV EAX,EBX                         ; 004c3cdd
    ADD ESP,0xc8                        ; 004c3cdf
    POP EBP                             ; 004c3ce5
    POP EDI                             ; 004c3ce6
    POP ESI                             ; 004c3ce7
    POP EBX                             ; 004c3ce8
    RET                                 ; 004c3ce9
    MOV EBP,dword ptr [ESP + 0xc]       ; 004c3cea
        ;   Label: LAB_004c3cea
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c3cee
    CMP EDI,EBP                         ; 004c3cf5
    JG 0x004c2a30                       ; 004c3cf7
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV ESI,EDX                         ; 004c3cfd
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c3cff
        ;   Label: LAB_004c3cff
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c3d06
    MOV EAX,dword ptr [ESI + 0x1c4354c] ; 004c3d0d | DAT_01c4354c
    SHL EDX,0x2                         ; 004c3d13
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c3d16
    ADD EDX,EAX                         ; 004c3d1a
    CMP ECX,EBP                         ; 004c3d1c
    JG 0x004c3d4f                       ; 004c3d1e
        ;   XREF to: 004c3d4f (CONDITIONAL_JUMP)  ; LAB_004c3d4f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3d20
        ;   Label: LAB_004c3d20
    MOV AL,byte ptr [EAX]               ; 004c3d24
    AND EAX,0xff                        ; 004c3d26
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c3d2b
    JZ 0x004c3d3a                       ; 004c3d31
        ;   XREF to: 004c3d3a (CONDITIONAL_JUMP)  ; LAB_004c3d3a
    MOV EAX,[0x01cc8ce4]                ; 004c3d33 | DAT_01cc8ce4
    MOV dword ptr [EDX],EAX             ; 004c3d38
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3d3a
        ;   Label: LAB_004c3d3a
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c3d3e
    INC ECX                             ; 004c3d42
    INC EAX                             ; 004c3d43
    ADD EDX,0x4                         ; 004c3d44
    MOV dword ptr [ESP + 0x4],EAX       ; 004c3d47
    CMP ECX,EBP                         ; 004c3d4b
    JLE 0x004c3d20                      ; 004c3d4d
        ;   XREF to: 004c3d20 (CONDITIONAL_JUMP)  ; LAB_004c3d20
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3d4f
        ;   Label: LAB_004c3d4f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c3d53
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3d57
    ADD ESI,0x4                         ; 004c3d5b
    ADD EDX,EAX                         ; 004c3d5e
    INC EDI                             ; 004c3d60
    MOV dword ptr [ESP + 0x4],EDX       ; 004c3d61
    CMP EDI,ECX                         ; 004c3d65
    JG 0x004c2a30                       ; 004c3d67
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c3cff                      ; 004c3d6d
        ;   XREF to: 004c3cff (UNCONDITIONAL_JUMP)  ; LAB_004c3cff
    MOV ESI,dword ptr [EDI*0x4 + 0x1c4dcd0] ; 004c3d6f
        ;   Label: LAB_004c3d6f
    CMP dword ptr [EBX + 0x1de4],0x0    ; 004c3d76
    JZ 0x004c3e06                       ; 004c3d7d
        ;   XREF to: 004c3e06 (CONDITIONAL_JUMP)  ; LAB_004c3e06
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3d83
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004c3d87
    CMP EDI,ECX                         ; 004c3d8e
    JG 0x004c2a30                       ; 004c3d90
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EBX,EDX                         ; 004c3d96
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c3d98
        ;   Label: LAB_004c3d98
    MOV EAX,dword ptr [EBX + 0x1c4354c] ; 004c3d9f | DAT_01c4354c
    SHL EDX,0x2                         ; 004c3da5
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c3da8
    ADD EDX,EAX                         ; 004c3daf
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3db1
    SUB EAX,ECX                         ; 004c3db5
    PUSH ESI                            ; 004c3db7
    INC EAX                             ; 004c3db8
    PUSH EAX                            ; 004c3db9
    PUSH EBP                            ; 004c3dba
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c3dbb
    PUSH EAX                            ; 004c3dbf
    PUSH EDX                            ; 004c3dc0
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0 ; 004c3dc1
        ;   XREF to: 004c26c0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004c26c0(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004c3dc6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3dc9
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004c3dcd
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c3dd4
    INC EAX                             ; 004c3dd8
    ADD EBX,0x4                         ; 004c3dd9
    ADD ECX,EAX                         ; 004c3ddc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3dde
    MOV dword ptr [ESP + 0x4],ECX       ; 004c3de2
    LEA EDX,[ECX + EAX*0x1]             ; 004c3de6
    INC EDI                             ; 004c3de9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3dea
    MOV dword ptr [ESP + 0x4],EDX       ; 004c3dee
    CMP EDI,ECX                         ; 004c3df2
    JLE 0x004c3d98                      ; 004c3df4
        ;   XREF to: 004c3d98 (CONDITIONAL_JUMP)  ; LAB_004c3d98
    MOV EBX,dword ptr [ESP]             ; 004c3df6
    MOV EAX,EBX                         ; 004c3df9
    ADD ESP,0xc8                        ; 004c3dfb
    POP EBP                             ; 004c3e01
    POP EDI                             ; 004c3e02
    POP ESI                             ; 004c3e03
    POP EBX                             ; 004c3e04
    RET                                 ; 004c3e05
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c3e06
        ;   Label: LAB_004c3e06
    MOV EBP,dword ptr [ESP + 0xc]       ; 004c3e0d
    MOV dword ptr [ESP + 0xa0],EAX      ; 004c3e11
    CMP EAX,EBP                         ; 004c3e18
    JG 0x004c2a30                       ; 004c3e1a
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    MOV EDI,EDX                         ; 004c3e20
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c3e22
        ;   Label: LAB_004c3e22
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004c3e29
    MOV ECX,dword ptr [EDI + 0x1c4354c] ; 004c3e30 | DAT_01c4354c
    SHL EAX,0x2                         ; 004c3e36
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c3e39
    ADD ECX,EAX                         ; 004c3e3d
    CMP EDX,EBP                         ; 004c3e3f
    JG 0x004c3e6d                       ; 004c3e41
        ;   XREF to: 004c3e6d (CONDITIONAL_JUMP)  ; LAB_004c3e6d
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3e43
        ;   Label: LAB_004c3e43
    MOV AL,byte ptr [EAX]               ; 004c3e47
    AND EAX,0xff                        ; 004c3e49
    CMP EAX,dword ptr [EBX + 0x4208]    ; 004c3e4e
    JZ 0x004c3e58                       ; 004c3e54
        ;   XREF to: 004c3e58 (CONDITIONAL_JUMP)  ; LAB_004c3e58
    MOV dword ptr [ECX],ESI             ; 004c3e56
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3e58
        ;   Label: LAB_004c3e58
    MOV EBP,dword ptr [ESP + 0x8]       ; 004c3e5c
    INC EDX                             ; 004c3e60
    INC EAX                             ; 004c3e61
    ADD ECX,0x4                         ; 004c3e62
    MOV dword ptr [ESP + 0x4],EAX       ; 004c3e65
    CMP EDX,EBP                         ; 004c3e69
    JLE 0x004c3e43                      ; 004c3e6b
        ;   XREF to: 004c3e43 (CONDITIONAL_JUMP)  ; LAB_004c3e43
    MOV EBP,dword ptr [ESP + 0xa0]      ; 004c3e6d
        ;   Label: LAB_004c3e6d
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3e74
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c3e78
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c3e7c
    ADD EDI,0x4                         ; 004c3e80
    INC EBP                             ; 004c3e83
    ADD EDX,EAX                         ; 004c3e84
    MOV dword ptr [ESP + 0xa0],EBP      ; 004c3e86
    MOV dword ptr [ESP + 0x4],EDX       ; 004c3e8d
    CMP EBP,ECX                         ; 004c3e91
    JG 0x004c2a30                       ; 004c3e93
        ;   XREF to: 004c2a30 (CONDITIONAL_JUMP)  ; LAB_004c2a30
    JMP 0x004c3e22                      ; 004c3e99
        ;   XREF to: 004c3e22 (UNCONDITIONAL_JUMP)  ; LAB_004c3e22

