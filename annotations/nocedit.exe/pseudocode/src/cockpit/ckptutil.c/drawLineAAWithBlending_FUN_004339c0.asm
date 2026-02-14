; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_004339c0(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   base_color
; uchar            Stack[0x18]:1   blend_color
; int              Stack[0x1c]:4   blend_mode
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined8       Stack[-0x4c]:8  local_4c
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
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[2]:
;   cockpit_ckptutil.c_FUN_004338f0 at 00433997
;   cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_00433820 at 004338c5
;
; Referenced Globals:
;   int g_LineBlendingDisabled
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
;   cockpit_ckptutil.c_putPixel_FUN_004345c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004339c0
        ;   Label: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0
    PUSH ESI                            ; 004339c1
    PUSH EDI                            ; 004339c2
    PUSH EBP                            ; 004339c3
    MOV EBP,ESP                         ; 004339c4
    SUB ESP,0x3c                        ; 004339c6
    AND ESP,0xfffffff8                  ; 004339c9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004339cc
    MOV ESI,dword ptr [EBP + 0x18]      ; 004339cf
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004339d2
    MOV EAX,dword ptr [EBP + 0x20]      ; 004339d5
    MOV EDX,dword ptr [EBP + 0x24]      ; 004339d8
    MOV dword ptr [ESP],0x3b800000      ; 004339db
    CMP ESI,EAX                         ; 004339e2
    JG 0x00433a60                       ; 004339e4
        ;   XREF to: 00433a60 (CONDITIONAL_JUMP)  ; LAB_00433a60
    CMP dword ptr [0x00824e20],0x0      ; 004339ea | g_LineBlendingDisabled
    JNZ 0x00433a2f                      ; 004339f1
        ;   XREF to: 00433a2f (CONDITIONAL_JUMP)  ; LAB_00433a2f
    MOV ECX,dword ptr [0x02d02558]      ; 004339f3 | g_ClipLeft
    CMP EDI,ECX                         ; 004339f9
    JGE 0x00433a05                      ; 004339fb
        ;   XREF to: 00433a05 (CONDITIONAL_JUMP)  ; LAB_00433a05
    CMP EBX,ECX                         ; 004339fd
    JL 0x00433a60                       ; 004339ff
        ;   XREF to: 00433a60 (CONDITIONAL_JUMP)  ; LAB_00433a60
    MOV ECX,dword ptr [0x02d02560]      ; 00433a05 | g_ClipRight
        ;   Label: LAB_00433a05
    CMP EDI,ECX                         ; 00433a0b
    JLE 0x00433a13                      ; 00433a0d
        ;   XREF to: 00433a13 (CONDITIONAL_JUMP)  ; LAB_00433a13
    CMP EBX,ECX                         ; 00433a0f
    JG 0x00433a60                       ; 00433a11
        ;   XREF to: 00433a60 (CONDITIONAL_JUMP)  ; LAB_00433a60
    MOV ECX,dword ptr [0x02d0255c]      ; 00433a13 | g_ClipTop
        ;   Label: LAB_00433a13
    CMP ESI,ECX                         ; 00433a19
    JGE 0x00433a21                      ; 00433a1b
        ;   XREF to: 00433a21 (CONDITIONAL_JUMP)  ; LAB_00433a21
    CMP EAX,ECX                         ; 00433a1d
    JL 0x00433a60                       ; 00433a1f
        ;   XREF to: 00433a60 (CONDITIONAL_JUMP)  ; LAB_00433a60
    MOV ECX,dword ptr [0x02d02564]      ; 00433a21 | g_ClipBottom
        ;   Label: LAB_00433a21
    CMP ESI,ECX                         ; 00433a27
    JLE 0x00433a2f                      ; 00433a29
        ;   XREF to: 00433a2f (CONDITIONAL_JUMP)  ; LAB_00433a2f
    CMP EAX,ECX                         ; 00433a2b
    JG 0x00433a60                       ; 00433a2d
        ;   XREF to: 00433a60 (CONDITIONAL_JUMP)  ; LAB_00433a60
    SUB EBX,EDI                         ; 00433a2f
        ;   Label: LAB_00433a2f
    MOV dword ptr [ESP + 0x2c],EBX      ; 00433a31
    TEST EBX,EBX                        ; 00433a35
    JL 0x00433a67                       ; 00433a37
        ;   XREF to: 00433a67 (CONDITIONAL_JUMP)  ; LAB_00433a67
    MOV dword ptr [ESP + 0x24],0x1      ; 00433a39
    SUB EAX,ESI                         ; 00433a41
        ;   Label: LAB_00433a41
    MOV dword ptr [ESP + 0x28],EAX      ; 00433a43
    JNZ 0x00433a8d                      ; 00433a47
        ;   XREF to: 00433a8d (CONDITIONAL_JUMP)  ; LAB_00433a8d
    MOV BL,DL                           ; 00433a49
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00433a4b
        ;   Label: LAB_00433a4b
    DEC EDX                             ; 00433a4f
    MOV dword ptr [ESP + 0x2c],EDX      ; 00433a50
    JNZ 0x00433a78                      ; 00433a54
        ;   XREF to: 00433a78 (CONDITIONAL_JUMP)  ; LAB_00433a78
    LEA EAX,[EAX]                       ; 00433a56
    LEA EDX,[EDX]                       ; 00433a5c
    MOV ESP,EBP                         ; 00433a60
        ;   Label: LAB_00433a60
    POP EBP                             ; 00433a62
    POP EDI                             ; 00433a63
    POP ESI                             ; 00433a64
    POP EBX                             ; 00433a65
    RET                                 ; 00433a66
    NEG EBX                             ; 00433a67
        ;   Label: LAB_00433a67
    MOV ECX,0xffffffff                  ; 00433a69
    MOV dword ptr [ESP + 0x2c],EBX      ; 00433a6e
    MOV dword ptr [ESP + 0x24],ECX      ; 00433a72
    JMP 0x00433a41                      ; 00433a76
        ;   XREF to: 00433a41 (UNCONDITIONAL_JUMP)  ; LAB_00433a41
    ADD EDI,dword ptr [ESP + 0x24]      ; 00433a78
        ;   Label: LAB_00433a78
    XOR EAX,EAX                         ; 00433a7c
    MOV AL,BL                           ; 00433a7e
    PUSH EAX                            ; 00433a80
    PUSH ESI                            ; 00433a81
    PUSH EDI                            ; 00433a82
    CALL cockpit_ckptutil.c_putPixel_FUN_004345c0 ; 00433a83
        ;   XREF to: 004345c0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_004345c0(int x, int y, int color)
    ADD ESP,0xc                         ; 00433a88
    JMP 0x00433a4b                      ; 00433a8b
        ;   XREF to: 00433a4b (UNCONDITIONAL_JUMP)  ; LAB_00433a4b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00433a8d
        ;   Label: LAB_00433a8d
    TEST EAX,EAX                        ; 00433a91
    JNZ 0x00433abc                      ; 00433a93
        ;   XREF to: 00433abc (CONDITIONAL_JUMP)  ; LAB_00433abc
    MOV BL,DL                           ; 00433a95
    XOR EAX,EAX                         ; 00433a97
        ;   Label: LAB_00433a97
    MOV AL,BL                           ; 00433a99
    PUSH EAX                            ; 00433a9b
    INC ESI                             ; 00433a9c
    PUSH ESI                            ; 00433a9d
    PUSH EDI                            ; 00433a9e
    CALL cockpit_ckptutil.c_putPixel_FUN_004345c0 ; 00433a9f
        ;   XREF to: 004345c0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_004345c0(int x, int y, int color)
    ADD ESP,0xc                         ; 00433aa4
    MOV ECX,dword ptr [ESP + 0x28]      ; 00433aa7
    DEC ECX                             ; 00433aab
    MOV dword ptr [ESP + 0x28],ECX      ; 00433aac
    CMP ECX,0x1                         ; 00433ab0
    JNZ 0x00433a97                      ; 00433ab3
        ;   XREF to: 00433a97 (CONDITIONAL_JUMP)  ; LAB_00433a97
    MOV ESP,EBP                         ; 00433ab5
    POP EBP                             ; 00433ab7
    POP EDI                             ; 00433ab8
    POP ESI                             ; 00433ab9
    POP EBX                             ; 00433aba
    RET                                 ; 00433abb
    MOV ECX,dword ptr [ESP + 0x28]      ; 00433abc
        ;   Label: LAB_00433abc
    XOR EBX,EBX                         ; 00433ac0
    CMP EAX,ECX                         ; 00433ac2
    JLE 0x00433b8a                      ; 00433ac4
        ;   XREF to: 00433b8a (CONDITIONAL_JUMP)  ; LAB_00433b8a
    CMP dword ptr [EBP + 0x2c],0x0      ; 00433aca
    JNZ 0x00433b4d                      ; 00433ace
        ;   XREF to: 00433b4d (CONDITIONAL_JUMP)  ; LAB_00433b4d
    MOV byte ptr [ESP + 0x38],DL        ; 00433ad4
    MOV EAX,dword ptr [ESP + 0x28]      ; 00433ad8
        ;   Label: LAB_00433ad8
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00433adc
    XOR EDX,EDX                         ; 00433ae0
    SHL EAX,0x10                        ; 00433ae2
    DIV ECX                             ; 00433ae5
    MOV dword ptr [ESP + 0x20],EAX      ; 00433ae7
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00433aeb
        ;   Label: LAB_00433aeb
    DEC ECX                             ; 00433aef
    MOV dword ptr [ESP + 0x2c],ECX      ; 00433af0
    JZ 0x00433a60                       ; 00433af4
        ;   XREF to: 00433a60 (CONDITIONAL_JUMP)  ; LAB_00433a60
    MOV EDX,dword ptr [ESP + 0x20]      ; 00433afa
    MOV EAX,EBX                         ; 00433afe
    ADD EBX,EDX                         ; 00433b00
    AND EBX,0xffff                      ; 00433b02
    CMP EBX,EAX                         ; 00433b08
    JA 0x00433b0d                       ; 00433b0a
        ;   XREF to: 00433b0d (CONDITIONAL_JUMP)  ; LAB_00433b0d
    INC ESI                             ; 00433b0c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00433b0d
        ;   Label: LAB_00433b0d
    MOV EAX,EBX                         ; 00433b11
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00433b13
    SHR EAX,0x8                         ; 00433b16
    ADD EDI,ECX                         ; 00433b19
    TEST EDX,EDX                        ; 00433b1b
    JNZ 0x00433b56                      ; 00433b1d
        ;   XREF to: 00433b56 (CONDITIONAL_JUMP)  ; LAB_00433b56
    MOV dword ptr [ESP + 0x8],EDX       ; 00433b1f
    MOV dword ptr [ESP + 0x4],EAX       ; 00433b23
    FILD qword ptr [ESP + 0x4]          ; 00433b27
    FLD1                                ; 00433b2b
    XOR EAX,EAX                         ; 00433b2d
    FADDP                               ; 00433b2f
    MOV AL,byte ptr [ESP + 0x38]        ; 00433b31
    FMUL float ptr [ESP]                ; 00433b35
    PUSH EAX                            ; 00433b38
    FSTP float ptr [ESP + 0x10]         ; 00433b39
    PUSH dword ptr [ESP + 0x10]         ; 00433b3d
    PUSH ESI                            ; 00433b41
    PUSH EDI                            ; 00433b42
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50 ; 00433b43
        ;   XREF to: 00433f50 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 00433b48
    JMP 0x00433aeb                      ; 00433b4b
        ;   XREF to: 00433aeb (UNCONDITIONAL_JUMP)  ; LAB_00433aeb
    MOV AL,byte ptr [EBP + 0x28]        ; 00433b4d
        ;   Label: LAB_00433b4d
    MOV byte ptr [ESP + 0x38],AL        ; 00433b50
    JMP 0x00433ad8                      ; 00433b54
        ;   XREF to: 00433ad8 (UNCONDITIONAL_JUMP)  ; LAB_00433ad8
    XOR ECX,ECX                         ; 00433b56
        ;   Label: LAB_00433b56
    XOR AL,0xff                         ; 00433b58
    MOV dword ptr [ESP + 0x8],ECX       ; 00433b5a
    MOV dword ptr [ESP + 0x4],EAX       ; 00433b5e
    XOR EAX,EAX                         ; 00433b62
    FILD qword ptr [ESP + 0x4]          ; 00433b64
    MOV AL,byte ptr [ESP + 0x38]        ; 00433b68
    FMUL float ptr [ESP]                ; 00433b6c
    PUSH EAX                            ; 00433b6f
    FSTP float ptr [ESP + 0x34]         ; 00433b70
    LEA EAX,[ESI + 0x1]                 ; 00433b74
    PUSH dword ptr [ESP + 0x34]         ; 00433b77
    PUSH EAX                            ; 00433b7b
    PUSH EDI                            ; 00433b7c
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50 ; 00433b7d
        ;   XREF to: 00433f50 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 00433b82
    JMP 0x00433aeb                      ; 00433b85
        ;   XREF to: 00433aeb (UNCONDITIONAL_JUMP)  ; LAB_00433aeb
    CMP dword ptr [EBP + 0x2c],0x0      ; 00433b8a
        ;   Label: LAB_00433b8a
    JNZ 0x00433c2a                      ; 00433b8e
        ;   XREF to: 00433c2a (CONDITIONAL_JUMP)  ; LAB_00433c2a
    CMP dword ptr [ESP + 0x24],0x1      ; 00433b94
    JNZ 0x00433c2a                      ; 00433b99
        ;   XREF to: 00433c2a (CONDITIONAL_JUMP)  ; LAB_00433c2a
    MOV EAX,0x1                         ; 00433b9f
        ;   Label: LAB_00433b9f
    MOV dword ptr [ESP + 0x18],EAX      ; 00433ba4
        ;   Label: LAB_00433ba4
    TEST EAX,EAX                        ; 00433ba8
    JZ 0x00433c42                       ; 00433baa
        ;   XREF to: 00433c42 (CONDITIONAL_JUMP)  ; LAB_00433c42
    MOV byte ptr [ESP + 0x34],DL        ; 00433bb0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00433bb4
        ;   Label: LAB_00433bb4
    MOV ECX,dword ptr [ESP + 0x28]      ; 00433bb8
    XOR EDX,EDX                         ; 00433bbc
    SHL EAX,0x10                        ; 00433bbe
    DIV ECX                             ; 00433bc1
    MOV dword ptr [ESP + 0x1c],EAX      ; 00433bc3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00433bc7
        ;   Label: LAB_00433bc7
    DEC EAX                             ; 00433bcb
    MOV dword ptr [ESP + 0x28],EAX      ; 00433bcc
    JZ 0x00433a60                       ; 00433bd0
        ;   XREF to: 00433a60 (CONDITIONAL_JUMP)  ; LAB_00433a60
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00433bd6
    MOV EAX,EBX                         ; 00433bda
    ADD EBX,ECX                         ; 00433bdc
    AND EBX,0xffff                      ; 00433bde
    CMP EBX,EAX                         ; 00433be4
    JA 0x00433bec                       ; 00433be6
        ;   XREF to: 00433bec (CONDITIONAL_JUMP)  ; LAB_00433bec
    ADD EDI,dword ptr [ESP + 0x24]      ; 00433be8
    MOV EDX,dword ptr [ESP + 0x18]      ; 00433bec
        ;   Label: LAB_00433bec
    MOV EAX,EBX                         ; 00433bf0
    INC ESI                             ; 00433bf2
    SHR EAX,0x8                         ; 00433bf3
    TEST EDX,EDX                        ; 00433bf6
    JZ 0x00433c4e                       ; 00433bf8
        ;   XREF to: 00433c4e (CONDITIONAL_JUMP)  ; LAB_00433c4e
    XOR EDX,EDX                         ; 00433bfa
    MOV dword ptr [ESP + 0x4],EAX       ; 00433bfc
    MOV dword ptr [ESP + 0x8],EDX       ; 00433c00
    XOR EAX,EAX                         ; 00433c04
    FILD qword ptr [ESP + 0x4]          ; 00433c06
    FLD1                                ; 00433c0a
    FADDP                               ; 00433c0c
    MOV AL,byte ptr [ESP + 0x34]        ; 00433c0e
    FMUL float ptr [ESP]                ; 00433c12
    PUSH EAX                            ; 00433c15
    FSTP float ptr [ESP + 0x14]         ; 00433c16
    PUSH dword ptr [ESP + 0x14]         ; 00433c1a
    PUSH ESI                            ; 00433c1e
    PUSH EDI                            ; 00433c1f
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50 ; 00433c20
        ;   XREF to: 00433f50 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 00433c25
    JMP 0x00433bc7                      ; 00433c28
        ;   XREF to: 00433bc7 (UNCONDITIONAL_JUMP)  ; LAB_00433bc7
    CMP dword ptr [EBP + 0x2c],0x1      ; 00433c2a
        ;   Label: LAB_00433c2a
    JNZ 0x00433c3b                      ; 00433c2e
        ;   XREF to: 00433c3b (CONDITIONAL_JUMP)  ; LAB_00433c3b
    CMP dword ptr [ESP + 0x24],-0x1     ; 00433c30
    JZ 0x00433b9f                       ; 00433c35
        ;   XREF to: 00433b9f (CONDITIONAL_JUMP)  ; LAB_00433b9f
    XOR EAX,EAX                         ; 00433c3b
        ;   Label: LAB_00433c3b
    JMP 0x00433ba4                      ; 00433c3d
        ;   XREF to: 00433ba4 (UNCONDITIONAL_JUMP)  ; LAB_00433ba4
    MOV AL,byte ptr [EBP + 0x28]        ; 00433c42
        ;   Label: LAB_00433c42
    MOV byte ptr [ESP + 0x34],AL        ; 00433c45
    JMP 0x00433bb4                      ; 00433c49
        ;   XREF to: 00433bb4 (UNCONDITIONAL_JUMP)  ; LAB_00433bb4
    XOR AL,0xff                         ; 00433c4e
        ;   Label: LAB_00433c4e
    MOV dword ptr [ESP + 0x8],EDX       ; 00433c50
    MOV dword ptr [ESP + 0x4],EAX       ; 00433c54
    XOR EAX,EAX                         ; 00433c58
    FILD qword ptr [ESP + 0x4]          ; 00433c5a
    MOV AL,byte ptr [ESP + 0x34]        ; 00433c5e
    FMUL float ptr [ESP]                ; 00433c62
    PUSH EAX                            ; 00433c65
    FSTP float ptr [ESP + 0x18]         ; 00433c66
    PUSH dword ptr [ESP + 0x18]         ; 00433c6a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00433c6e
    PUSH ESI                            ; 00433c72
    ADD EAX,EDI                         ; 00433c73
    PUSH EAX                            ; 00433c75
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50 ; 00433c76
        ;   XREF to: 00433f50 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 00433c7b
    JMP 0x00433bc7                      ; 00433c7e
        ;   XREF to: 00433bc7 (UNCONDITIONAL_JUMP)  ; LAB_00433bc7

