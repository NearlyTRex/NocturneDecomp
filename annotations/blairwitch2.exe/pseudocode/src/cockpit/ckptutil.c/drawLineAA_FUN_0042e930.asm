; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_0042e930(int x0,int y0,int x1,int y1,int color)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00467290 at 00467314
;
; Referenced Globals:
;   undefined4 DAT_00609b30
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90
;   cockpit_ckptutil.c_putPixel_FUN_0042f260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e930
        ;   Label: cockpit_ckptutil.c_drawLineAA_FUN_0042e930
    PUSH ESI                            ; 0042e931
    PUSH EDI                            ; 0042e932
    PUSH EBP                            ; 0042e933
    MOV EBP,ESP                         ; 0042e934
    SUB ESP,0x30                        ; 0042e936
    AND ESP,0xfffffff8                  ; 0042e939
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042e93c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042e93f
    MOV EDX,0x3b800000                  ; 0042e942
    MOV ECX,dword ptr [EBP + 0x20]      ; 0042e947
    MOV dword ptr [ESP],EDX             ; 0042e94a
    CMP EBX,ECX                         ; 0042e94d
    JG 0x0042e9f7                       ; 0042e94f
        ;   XREF to: 0042e9f7 (CONDITIONAL_JUMP)  ; LAB_0042e9f7
    CMP dword ptr [0x00609b30],0x0      ; 0042e955 | DAT_00609b30
        ;   Label: LAB_0042e955
    JNZ 0x0042e9aa                      ; 0042e95c
        ;   XREF to: 0042e9aa (CONDITIONAL_JUMP)  ; LAB_0042e9aa
    CMP ESI,dword ptr [0x01c35e48]      ; 0042e95e | DAT_01c35e48
    JGE 0x0042e975                      ; 0042e964
        ;   XREF to: 0042e975 (CONDITIONAL_JUMP)  ; LAB_0042e975
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042e966
    CMP EAX,dword ptr [0x01c35e48]      ; 0042e969 | DAT_01c35e48
    JL 0x0042e9f0                       ; 0042e96f
        ;   XREF to: 0042e9f0 (CONDITIONAL_JUMP)  ; LAB_0042e9f0
    MOV ECX,dword ptr [0x01c35e50]      ; 0042e975 | DAT_01c35e50
        ;   Label: LAB_0042e975
    CMP ESI,ECX                         ; 0042e97b
    JLE 0x0042e988                      ; 0042e97d
        ;   XREF to: 0042e988 (CONDITIONAL_JUMP)  ; LAB_0042e988
    CMP ECX,dword ptr [EBP + 0x1c]      ; 0042e97f
    JL 0x0042e9f0                       ; 0042e982
        ;   XREF to: 0042e9f0 (CONDITIONAL_JUMP)  ; LAB_0042e9f0
    CMP EBX,dword ptr [0x01c35e4c]      ; 0042e988 | DAT_01c35e4c
        ;   Label: LAB_0042e988
    JGE 0x0042e99b                      ; 0042e98e
        ;   XREF to: 0042e99b (CONDITIONAL_JUMP)  ; LAB_0042e99b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042e990
    CMP EAX,dword ptr [0x01c35e4c]      ; 0042e993 | DAT_01c35e4c
    JL 0x0042e9f0                       ; 0042e999
        ;   XREF to: 0042e9f0 (CONDITIONAL_JUMP)  ; LAB_0042e9f0
    MOV ECX,dword ptr [0x01c35e54]      ; 0042e99b | DAT_01c35e54
        ;   Label: LAB_0042e99b
    CMP EBX,ECX                         ; 0042e9a1
    JLE 0x0042e9aa                      ; 0042e9a3
        ;   XREF to: 0042e9aa (CONDITIONAL_JUMP)  ; LAB_0042e9aa
    CMP ECX,dword ptr [EBP + 0x20]      ; 0042e9a5
    JL 0x0042e9f0                       ; 0042e9a8
        ;   XREF to: 0042e9f0 (CONDITIONAL_JUMP)  ; LAB_0042e9f0
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042e9aa
        ;   Label: LAB_0042e9aa
    PUSH EAX                            ; 0042e9ad
    PUSH EBX                            ; 0042e9ae
    PUSH ESI                            ; 0042e9af
    CALL cockpit_ckptutil.c_putPixel_FUN_0042f260 ; 0042e9b0
        ;   XREF to: 0042f260 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_0042f260(int x, int y, int color)
    ADD ESP,0xc                         ; 0042e9b5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042e9b8
    SUB EAX,ESI                         ; 0042e9bb
    MOV dword ptr [ESP + 0x28],EAX      ; 0042e9bd
    TEST EAX,EAX                        ; 0042e9c1
    JL 0x0042ea0b                       ; 0042e9c3
        ;   XREF to: 0042ea0b (CONDITIONAL_JUMP)  ; LAB_0042ea0b
    MOV dword ptr [ESP + 0x24],0x1      ; 0042e9c5
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042e9cd
        ;   Label: LAB_0042e9cd
    SUB EAX,EBX                         ; 0042e9d0
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042e9d2
    JNZ 0x0042ea34                      ; 0042e9d6
        ;   XREF to: 0042ea34 (CONDITIONAL_JUMP)  ; LAB_0042ea34
    MOV EDI,0xffffffff                  ; 0042e9d8
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042e9dd
        ;   Label: LAB_0042e9dd
    ADD ECX,EDI                         ; 0042e9e1
    MOV dword ptr [ESP + 0x28],ECX      ; 0042e9e3
    CMP EDI,ECX                         ; 0042e9e7
    JNZ 0x0042ea1e                      ; 0042e9e9
        ;   XREF to: 0042ea1e (CONDITIONAL_JUMP)  ; LAB_0042ea1e
    LEA EAX,[EAX]                       ; 0042e9eb
    MOV ECX,ECX                         ; 0042e9ee
    MOV ESP,EBP                         ; 0042e9f0
        ;   Label: LAB_0042e9f0
    POP EBP                             ; 0042e9f2
    POP EDI                             ; 0042e9f3
    POP ESI                             ; 0042e9f4
    POP EBX                             ; 0042e9f5
    RET                                 ; 0042e9f6
    MOV EAX,EBX                         ; 0042e9f7
        ;   Label: LAB_0042e9f7
    MOV EBX,ECX                         ; 0042e9f9
    MOV dword ptr [EBP + 0x20],EAX      ; 0042e9fb
    MOV EAX,ESI                         ; 0042e9fe
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0042ea00
    MOV dword ptr [EBP + 0x1c],EAX      ; 0042ea03
    JMP 0x0042e955                      ; 0042ea06
        ;   XREF to: 0042e955 (UNCONDITIONAL_JUMP)  ; LAB_0042e955
    MOV EDI,EAX                         ; 0042ea0b
        ;   Label: LAB_0042ea0b
    MOV ECX,0xffffffff                  ; 0042ea0d
    NEG EDI                             ; 0042ea12
    MOV dword ptr [ESP + 0x24],ECX      ; 0042ea14
    MOV dword ptr [ESP + 0x28],EDI      ; 0042ea18
    JMP 0x0042e9cd                      ; 0042ea1c
        ;   XREF to: 0042e9cd (UNCONDITIONAL_JUMP)  ; LAB_0042e9cd
    MOV ECX,dword ptr [EBP + 0x24]      ; 0042ea1e
        ;   Label: LAB_0042ea1e
    PUSH ECX                            ; 0042ea21
    MOV EDX,dword ptr [ESP + 0x28]      ; 0042ea22
    PUSH EBX                            ; 0042ea26
    ADD ESI,EDX                         ; 0042ea27
    PUSH ESI                            ; 0042ea29
    CALL cockpit_ckptutil.c_putPixel_FUN_0042f260 ; 0042ea2a
        ;   XREF to: 0042f260 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_0042f260(int x, int y, int color)
    ADD ESP,0xc                         ; 0042ea2f
    JMP 0x0042e9dd                      ; 0042ea32
        ;   XREF to: 0042e9dd (UNCONDITIONAL_JUMP)  ; LAB_0042e9dd
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042ea34
        ;   Label: LAB_0042ea34
    TEST ECX,ECX                        ; 0042ea38
    JNZ 0x0042ea5d                      ; 0042ea3a
        ;   XREF to: 0042ea5d (CONDITIONAL_JUMP)  ; LAB_0042ea5d
    MOV EDI,dword ptr [EBP + 0x24]      ; 0042ea3c
    PUSH EDI                            ; 0042ea3f
        ;   Label: LAB_0042ea3f
    INC EBX                             ; 0042ea40
    PUSH EBX                            ; 0042ea41
    PUSH ESI                            ; 0042ea42
    CALL cockpit_ckptutil.c_putPixel_FUN_0042f260 ; 0042ea43
        ;   XREF to: 0042f260 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_0042f260(int x, int y, int color)
    ADD ESP,0xc                         ; 0042ea48
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042ea4b
    DEC EAX                             ; 0042ea4f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042ea50
    JNZ 0x0042ea3f                      ; 0042ea54
        ;   XREF to: 0042ea3f (CONDITIONAL_JUMP)  ; LAB_0042ea3f
    MOV ESP,EBP                         ; 0042ea56
    POP EBP                             ; 0042ea58
    POP EDI                             ; 0042ea59
    POP ESI                             ; 0042ea5a
    POP EBX                             ; 0042ea5b
    RET                                 ; 0042ea5c
    CMP ECX,EAX                         ; 0042ea5d
        ;   Label: LAB_0042ea5d
    JNZ 0x0042ea88                      ; 0042ea5f
        ;   XREF to: 0042ea88 (CONDITIONAL_JUMP)  ; LAB_0042ea88
    MOV EDI,dword ptr [ESP + 0x24]      ; 0042ea61
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042ea65
        ;   Label: LAB_0042ea65
    PUSH EAX                            ; 0042ea68
    INC EBX                             ; 0042ea69
    PUSH EBX                            ; 0042ea6a
    ADD ESI,EDI                         ; 0042ea6b
    PUSH ESI                            ; 0042ea6d
    CALL cockpit_ckptutil.c_putPixel_FUN_0042f260 ; 0042ea6e
        ;   XREF to: 0042f260 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_0042f260(int x, int y, int color)
    ADD ESP,0xc                         ; 0042ea73
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042ea76
    DEC EDX                             ; 0042ea7a
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042ea7b
    JNZ 0x0042ea65                      ; 0042ea7f
        ;   XREF to: 0042ea65 (CONDITIONAL_JUMP)  ; LAB_0042ea65
    MOV ESP,EBP                         ; 0042ea81
    POP EBP                             ; 0042ea83
    POP EDI                             ; 0042ea84
    POP ESI                             ; 0042ea85
    POP EBX                             ; 0042ea86
    RET                                 ; 0042ea87
    XOR EDI,EDI                         ; 0042ea88
        ;   Label: LAB_0042ea88
    CMP ECX,EAX                         ; 0042ea8a
    JLE 0x0042eb29                      ; 0042ea8c
        ;   XREF to: 0042eb29 (CONDITIONAL_JUMP)  ; LAB_0042eb29
    SHL EAX,0x10                        ; 0042ea92
    XOR EDX,EDX                         ; 0042ea95
    DIV ECX                             ; 0042ea97
    MOV dword ptr [ESP + 0x20],EAX      ; 0042ea99
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042ea9d
        ;   Label: LAB_0042ea9d
    DEC ECX                             ; 0042eaa1
    MOV dword ptr [ESP + 0x28],ECX      ; 0042eaa2
    JZ 0x0042ebc7                       ; 0042eaa6
        ;   XREF to: 0042ebc7 (CONDITIONAL_JUMP)  ; LAB_0042ebc7
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042eaac
    MOV EAX,EDI                         ; 0042eab0
    ADD EDI,EDX                         ; 0042eab2
    AND EDI,0xffff                      ; 0042eab4
    CMP EDI,EAX                         ; 0042eaba
    JBE 0x0042eb26                      ; 0042eabc
        ;   XREF to: 0042eb26 (CONDITIONAL_JUMP)  ; LAB_0042eb26
    MOV EAX,EDI                         ; 0042eabe
        ;   Label: LAB_0042eabe
    XOR EDX,EDX                         ; 0042eac0
    SHR EAX,0x8                         ; 0042eac2
    MOV dword ptr [ESP + 0x8],EDX       ; 0042eac5
    MOV dword ptr [ESP + 0x4],EAX       ; 0042eac9
    FILD qword ptr [ESP + 0x4]          ; 0042eacd
    FLD1                                ; 0042ead1
    FADDP                               ; 0042ead3
    FLD float ptr [ESP]                 ; 0042ead5
    FMUL ST1                            ; 0042ead8
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042eada
    XOR AL,0xff                         ; 0042eade
    MOV dword ptr [ESP + 0x8],EDX       ; 0042eae0
    MOV dword ptr [ESP + 0x4],EAX       ; 0042eae4
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042eae8
    ADD ESI,ECX                         ; 0042eaeb
    PUSH EAX                            ; 0042eaed
    FXCH                                ; 0042eaee
    FSTP float ptr [ESP + 0x10]         ; 0042eaf0
    PUSH dword ptr [ESP + 0x10]         ; 0042eaf4
    FILD qword ptr [ESP + 0xc]          ; 0042eaf8
    PUSH EBX                            ; 0042eafc
    FMULP                               ; 0042eafd
    PUSH ESI                            ; 0042eaff
    FSTP float ptr [ESP + 0x20]         ; 0042eb00
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90 ; 0042eb04
        ;   XREF to: 0042ef90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90(int x, int y, float blend_factor, int palette_index)
    ADD ESP,0x10                        ; 0042eb09
    MOV EDX,dword ptr [EBP + 0x24]      ; 0042eb0c
    PUSH EDX                            ; 0042eb0f
    LEA EAX,[EBX + 0x1]                 ; 0042eb10
    PUSH dword ptr [ESP + 0x14]         ; 0042eb13
    PUSH EAX                            ; 0042eb17
    PUSH ESI                            ; 0042eb18
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90 ; 0042eb19
        ;   XREF to: 0042ef90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90(int x, int y, float blend_factor, int palette_index)
    ADD ESP,0x10                        ; 0042eb1e
    JMP 0x0042ea9d                      ; 0042eb21
        ;   XREF to: 0042ea9d (UNCONDITIONAL_JUMP)  ; LAB_0042ea9d
    INC EBX                             ; 0042eb26
        ;   Label: LAB_0042eb26
    JMP 0x0042eabe                      ; 0042eb27
        ;   XREF to: 0042eabe (UNCONDITIONAL_JUMP)  ; LAB_0042eabe
    MOV EAX,ECX                         ; 0042eb29
        ;   Label: LAB_0042eb29
    XOR EDX,EDX                         ; 0042eb2b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042eb2d
    SHL EAX,0x10                        ; 0042eb31
    DIV ECX                             ; 0042eb34
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042eb36
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042eb3a
        ;   Label: LAB_0042eb3a
    DEC EAX                             ; 0042eb3e
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042eb3f
    JZ 0x0042ebc7                       ; 0042eb43
        ;   XREF to: 0042ebc7 (CONDITIONAL_JUMP)  ; LAB_0042ebc7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042eb49
    MOV EAX,EDI                         ; 0042eb4d
    ADD EDI,ECX                         ; 0042eb4f
    AND EDI,0xffff                      ; 0042eb51
    CMP EDI,EAX                         ; 0042eb57
    JBE 0x0042ebc1                      ; 0042eb59
        ;   XREF to: 0042ebc1 (CONDITIONAL_JUMP)  ; LAB_0042ebc1
    MOV EAX,EDI                         ; 0042eb5b
        ;   Label: LAB_0042eb5b
    XOR EDX,EDX                         ; 0042eb5d
    SHR EAX,0x8                         ; 0042eb5f
    MOV dword ptr [ESP + 0x8],EDX       ; 0042eb62
    MOV dword ptr [ESP + 0x4],EAX       ; 0042eb66
    FILD qword ptr [ESP + 0x4]          ; 0042eb6a
    FLD1                                ; 0042eb6e
    FADDP                               ; 0042eb70
    FLD float ptr [ESP]                 ; 0042eb72
    FMUL ST1                            ; 0042eb75
    XOR AL,0xff                         ; 0042eb77
    INC EBX                             ; 0042eb79
    MOV dword ptr [ESP + 0x4],EAX       ; 0042eb7a
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042eb7e
    MOV dword ptr [ESP + 0x8],EDX       ; 0042eb81
    PUSH EAX                            ; 0042eb85
    FXCH                                ; 0042eb86
    FSTP float ptr [ESP + 0x18]         ; 0042eb88
    PUSH dword ptr [ESP + 0x18]         ; 0042eb8c
    FILD qword ptr [ESP + 0xc]          ; 0042eb90
    PUSH EBX                            ; 0042eb94
    FMULP                               ; 0042eb95
    PUSH ESI                            ; 0042eb97
    FSTP float ptr [ESP + 0x28]         ; 0042eb98
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90 ; 0042eb9c
        ;   XREF to: 0042ef90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90(int x, int y, float blend_factor, int palette_index)
    ADD ESP,0x10                        ; 0042eba1
    MOV EDX,dword ptr [EBP + 0x24]      ; 0042eba4
    PUSH EDX                            ; 0042eba7
    PUSH dword ptr [ESP + 0x1c]         ; 0042eba8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042ebac
    PUSH EBX                            ; 0042ebb0
    ADD EAX,ESI                         ; 0042ebb1
    PUSH EAX                            ; 0042ebb3
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90 ; 0042ebb4
        ;   XREF to: 0042ef90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042ef90(int x, int y, float blend_factor, int palette_index)
    ADD ESP,0x10                        ; 0042ebb9
    JMP 0x0042eb3a                      ; 0042ebbc
        ;   XREF to: 0042eb3a (UNCONDITIONAL_JUMP)  ; LAB_0042eb3a
    ADD ESI,dword ptr [ESP + 0x24]      ; 0042ebc1
        ;   Label: LAB_0042ebc1
    JMP 0x0042eb5b                      ; 0042ebc5
        ;   XREF to: 0042eb5b (UNCONDITIONAL_JUMP)  ; LAB_0042eb5b
    MOV ECX,dword ptr [EBP + 0x24]      ; 0042ebc7
        ;   Label: LAB_0042ebc7
    PUSH ECX                            ; 0042ebca
    MOV EBX,dword ptr [EBP + 0x20]      ; 0042ebcb
    PUSH EBX                            ; 0042ebce
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0042ebcf
    PUSH ESI                            ; 0042ebd2
    CALL cockpit_ckptutil.c_putPixel_FUN_0042f260 ; 0042ebd3
        ;   XREF to: 0042f260 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_0042f260(int x, int y, int color)
    ADD ESP,0xc                         ; 0042ebd8
    MOV ESP,EBP                         ; 0042ebdb
    POP EBP                             ; 0042ebdd
    POP EDI                             ; 0042ebde
    POP ESI                             ; 0042ebdf
    POP EBX                             ; 0042ebe0
    RET                                 ; 0042ebe1

