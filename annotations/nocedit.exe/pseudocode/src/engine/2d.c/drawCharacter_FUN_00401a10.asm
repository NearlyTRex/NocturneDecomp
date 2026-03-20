; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawCharacter_FUN_00401a10(int char_code,int x_pos,int y_pos,int color)
;
; Parameters:
; int              Stack[0x4]:4   char_code
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color
;
; XREF[3]:
;   engine_2d.c_drawString_FUN_00402080 at 004020bc
;   engine_2d.c_drawTextMultilineColor_FUN_00401f40 at 00401f8f
;   engine_2d.c_drawTextWrappedColor_FUN_00401eb0 at 00401f06
;
; Referenced Globals:
;   SFontGlyph[224] g_FontTable
;   undefined4 g_FontTable[0].bitmap[0]
;   undefined4 g_FontTable[0].bitmap[1]
;   undefined4 g_FontTable[0].bitmap[0][2]
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   ushort[256] g_ColorTable16
;   uint[448] g_ColorTable32
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401a10
        ;   Label: engine_2d.c_drawCharacter_FUN_00401a10
    PUSH EDI                            ; 00401a11
    PUSH EBP                            ; 00401a12
    SUB ESP,0x10                        ; 00401a13
    MOV EBP,dword ptr [ESP + 0x28]      ; 00401a16
    MOV EDX,dword ptr [ESP + 0x20]      ; 00401a1a
    SUB EDX,0x20                        ; 00401a1e
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401a21
    ADD EAX,EDX                         ; 00401a28
    SHL EAX,0x4                         ; 00401a2a
    ADD EAX,EDX                         ; 00401a2d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00401a2f
    ADD EAX,0x666040                    ; 00401a33 | g_FontTable
    XOR EDX,EDX                         ; 00401a38
    MOV EBX,dword ptr [0x02d02558]      ; 00401a3a | g_ClipLeft
    MOV DL,byte ptr [EAX]               ; 00401a40 | g_FontTable
    CMP ECX,EBX                         ; 00401a42
    JL 0x00401ac2                       ; 00401a44
        ;   XREF to: 00401ac2 (CONDITIONAL_JUMP)  ; LAB_00401ac2
    CMP EBP,dword ptr [0x02d0255c]      ; 00401a4a | g_ClipTop
    JL 0x00401ac2                       ; 00401a50
        ;   XREF to: 00401ac2 (CONDITIONAL_JUMP)  ; LAB_00401ac2
    MOV ECX,dword ptr [0x02d02560]      ; 00401a56 | g_ClipRight
    INC ECX                             ; 00401a5c
    MOV EDI,dword ptr [ESP + 0x24]      ; 00401a5d
    SUB ECX,EDX                         ; 00401a61
    CMP ECX,EDI                         ; 00401a63
    JL 0x00401ac2                       ; 00401a65
        ;   XREF to: 00401ac2 (CONDITIONAL_JUMP)  ; LAB_00401ac2
    MOV ECX,dword ptr [0x02d02564]      ; 00401a67 | g_ClipBottom
    SUB ECX,0xa                         ; 00401a6d
    CMP EBP,ECX                         ; 00401a70
    JG 0x00401ac2                       ; 00401a72
        ;   XREF to: 00401ac2 (CONDITIONAL_JUMP)  ; LAB_00401ac2
    PUSH ESI                            ; 00401a74
    MOV EBX,dword ptr [0x0067939c]      ; 00401a75 | g_BitsPerPixel
    SHL EBP,0x2                         ; 00401a7b
    INC EAX                             ; 00401a7e
    LEA ECX,[EBP + 0x2c]                ; 00401a7f
    CMP EBX,0x8                         ; 00401a82
    JNZ 0x00401ac6                      ; 00401a85
        ;   XREF to: 00401ac6 (CONDITIONAL_JUMP)  ; LAB_00401ac6
    MOV EDI,ECX                         ; 00401a87
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401a89
        ;   Label: LAB_00401a89
    MOV ESI,dword ptr [EBP + 0x2cf6a9c] ; 00401a8d | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD ESI,ECX                         ; 00401a93
    XOR ECX,ECX                         ; 00401a95
    TEST EDX,EDX                        ; 00401a97
    JLE 0x00401aae                      ; 00401a99
        ;   XREF to: 00401aae (CONDITIONAL_JUMP)  ; LAB_00401aae
    MOV BL,byte ptr [EAX]               ; 00401a9b | g_FontTable[0].bitmap[0] | g_FontTable[0].bitmap[1] | g_FontTable[0].bitmap[0][2]
        ;   Label: LAB_00401a9b
    TEST BL,BL                          ; 00401a9d
    JZ 0x00401aa7                       ; 00401a9f
        ;   XREF to: 00401aa7 (CONDITIONAL_JUMP)  ; LAB_00401aa7
    MOV BL,byte ptr [ESP + 0x30]        ; 00401aa1
    MOV byte ptr [ESI],BL               ; 00401aa5
    INC EAX                             ; 00401aa7
        ;   Label: LAB_00401aa7
    INC ECX                             ; 00401aa8
    INC ESI                             ; 00401aa9
    CMP ECX,EDX                         ; 00401aaa
    JL 0x00401a9b                       ; 00401aac
        ;   XREF to: 00401a9b (CONDITIONAL_JUMP)  ; LAB_00401a9b
    ADD EBP,0x4                         ; 00401aae
        ;   Label: LAB_00401aae
    CMP EBP,EDI                         ; 00401ab1
    JNZ 0x00401a89                      ; 00401ab3
        ;   XREF to: 00401a89 (CONDITIONAL_JUMP)  ; LAB_00401a89
    LEA ECX,[EDX + 0x1]                 ; 00401ab5
        ;   Label: LAB_00401ab5
    POP ESI                             ; 00401ab8
    MOV EAX,ECX                         ; 00401ab9
        ;   Label: LAB_00401ab9
    ADD ESP,0x10                        ; 00401abb
    POP EBP                             ; 00401abe
    POP EDI                             ; 00401abf
    POP EBX                             ; 00401ac0
    RET                                 ; 00401ac1
    XOR ECX,ECX                         ; 00401ac2
        ;   Label: LAB_00401ac2
    JMP 0x00401ab9                      ; 00401ac4
        ;   XREF to: 00401ab9 (UNCONDITIONAL_JUMP)  ; LAB_00401ab9
    CMP EBX,0x10                        ; 00401ac6
        ;   Label: LAB_00401ac6
    JNZ 0x00401b17                      ; 00401ac9
        ;   XREF to: 00401b17 (CONDITIONAL_JUMP)  ; LAB_00401b17
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401acb
    MOV EDI,dword ptr [ESP + 0x30]      ; 00401acf
    MOV dword ptr [ESP + 0x10],ECX      ; 00401ad3
    ADD EBX,EBX                         ; 00401ad7
    ADD EDI,EDI                         ; 00401ad9
    MOV dword ptr [ESP + 0x4],EBX       ; 00401adb
    MOV ECX,dword ptr [ESP + 0x4]       ; 00401adf
        ;   Label: LAB_00401adf
    MOV ESI,dword ptr [EBP + 0x2cf6a9c] ; 00401ae3 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD ESI,ECX                         ; 00401ae9
    XOR ECX,ECX                         ; 00401aeb
    TEST EDX,EDX                        ; 00401aed
    JLE 0x00401b0a                      ; 00401aef
        ;   XREF to: 00401b0a (CONDITIONAL_JUMP)  ; LAB_00401b0a
    MOV BL,byte ptr [EAX]               ; 00401af1 | g_FontTable[0].bitmap[0] | g_FontTable[0].bitmap[1] | g_FontTable[0].bitmap[0][2]
        ;   Label: LAB_00401af1
    TEST BL,BL                          ; 00401af3
    JZ 0x00401b01                       ; 00401af5
        ;   XREF to: 00401b01 (CONDITIONAL_JUMP)  ; LAB_00401b01
    MOV BX,word ptr [EDI + 0x2d01020]   ; 00401af7 | g_ColorTable16
    MOV word ptr [ESI],BX               ; 00401afe
    INC EAX                             ; 00401b01
        ;   Label: LAB_00401b01
    INC ECX                             ; 00401b02
    ADD ESI,0x2                         ; 00401b03
    CMP ECX,EDX                         ; 00401b06
    JL 0x00401af1                       ; 00401b08
        ;   XREF to: 00401af1 (CONDITIONAL_JUMP)  ; LAB_00401af1
    MOV EBX,dword ptr [ESP + 0x10]      ; 00401b0a
        ;   Label: LAB_00401b0a
    ADD EBP,0x4                         ; 00401b0e
    CMP EBP,EBX                         ; 00401b11
    JZ 0x00401ab5                       ; 00401b13
        ;   XREF to: 00401ab5 (CONDITIONAL_JUMP)  ; LAB_00401ab5
    JMP 0x00401adf                      ; 00401b15
        ;   XREF to: 00401adf (UNCONDITIONAL_JUMP)  ; LAB_00401adf
    MOV EBX,dword ptr [ESP + 0x28]      ; 00401b17
        ;   Label: LAB_00401b17
    MOV EDI,dword ptr [ESP + 0x30]      ; 00401b1b
    MOV dword ptr [ESP + 0x8],ECX       ; 00401b1f
    SHL EBX,0x2                         ; 00401b23
    SHL EDI,0x2                         ; 00401b26
    MOV dword ptr [ESP + 0xc],EBX       ; 00401b29
    MOV EBX,dword ptr [ESP + 0xc]       ; 00401b2d
        ;   Label: LAB_00401b2d
    MOV ECX,dword ptr [EBP + 0x2cf6a9c] ; 00401b31 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    XOR ESI,ESI                         ; 00401b37
    ADD ECX,EBX                         ; 00401b39
    TEST EDX,EDX                        ; 00401b3b
    JLE 0x00401b56                      ; 00401b3d
        ;   XREF to: 00401b56 (CONDITIONAL_JUMP)  ; LAB_00401b56
    MOV BL,byte ptr [EAX]               ; 00401b3f | g_FontTable[0].bitmap[0] | g_FontTable[0].bitmap[1] | g_FontTable[0].bitmap[0][2]
        ;   Label: LAB_00401b3f
    TEST BL,BL                          ; 00401b41
    JZ 0x00401b4d                       ; 00401b43
        ;   XREF to: 00401b4d (CONDITIONAL_JUMP)  ; LAB_00401b4d
    MOV EBX,dword ptr [EDI + 0x2d01220] ; 00401b45 | g_ColorTable32
    MOV dword ptr [ECX],EBX             ; 00401b4b
    INC EAX                             ; 00401b4d
        ;   Label: LAB_00401b4d
    INC ESI                             ; 00401b4e
    ADD ECX,0x4                         ; 00401b4f
    CMP ESI,EDX                         ; 00401b52
    JL 0x00401b3f                       ; 00401b54
        ;   XREF to: 00401b3f (CONDITIONAL_JUMP)  ; LAB_00401b3f
    MOV ESI,dword ptr [ESP + 0x8]       ; 00401b56
        ;   Label: LAB_00401b56
    ADD EBP,0x4                         ; 00401b5a
    CMP EBP,ESI                         ; 00401b5d
    JZ 0x00401ab5                       ; 00401b5f
        ;   XREF to: 00401ab5 (CONDITIONAL_JUMP)  ; LAB_00401ab5
    JMP 0x00401b2d                      ; 00401b65
        ;   XREF to: 00401b2d (UNCONDITIONAL_JUMP)  ; LAB_00401b2d

