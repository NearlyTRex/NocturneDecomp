; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawCharacterHighlighted_FUN_00401b70(int char_code,int x_pos,int y_pos)
;
; Parameters:
; int              Stack[0x4]:4   char_code
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   engine_2d.c_drawStringHighlighted_FUN_004020e0 at 00402117
;
; Referenced Globals:
;   SFontGlyph[224] g_FontTable
;   undefined4 DAT_00666041
;   undefined4 DAT_00666042
;   undefined4 g_FontTable[0].bitmap[0][2]
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 g_ColorTable16[255]
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00401b70
        ;   Label: engine_2d.c_drawCharacterHighlighted_FUN_00401b70
    PUSH EDI                            ; 00401b71
    PUSH EBP                            ; 00401b72
    SUB ESP,0x8                         ; 00401b73
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401b76
    MOV EDI,dword ptr [ESP + 0x20]      ; 00401b7a
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401b7e
    SUB EDX,0x20                        ; 00401b82
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401b85
    ADD EAX,EDX                         ; 00401b8c
    SHL EAX,0x4                         ; 00401b8e
    ADD EAX,EDX                         ; 00401b91
    ADD EAX,0x666040                    ; 00401b93 | g_FontTable
    MOV EDX,dword ptr [0x02d02558]      ; 00401b98 | g_ClipLeft
    MOVZX ESI,byte ptr [EAX]            ; 00401b9e | g_FontTable
    CMP EBP,EDX                         ; 00401ba1
    JL 0x00401c27                       ; 00401ba3
        ;   XREF to: 00401c27 (CONDITIONAL_JUMP)  ; LAB_00401c27
    CMP EDI,dword ptr [0x02d0255c]      ; 00401ba9 | g_ClipTop
    JL 0x00401c27                       ; 00401baf
        ;   XREF to: 00401c27 (CONDITIONAL_JUMP)  ; LAB_00401c27
    MOV EDX,dword ptr [0x02d02560]      ; 00401bb5 | g_ClipRight
    INC EDX                             ; 00401bbb
    SUB EDX,ESI                         ; 00401bbc
    CMP EBP,EDX                         ; 00401bbe
    JG 0x00401c27                       ; 00401bc0
        ;   XREF to: 00401c27 (CONDITIONAL_JUMP)  ; LAB_00401c27
    MOV EDX,dword ptr [0x02d02564]      ; 00401bc2 | g_ClipBottom
    SUB EDX,0xa                         ; 00401bc8
    CMP EDI,EDX                         ; 00401bcb
    JG 0x00401c27                       ; 00401bcd
        ;   XREF to: 00401c27 (CONDITIONAL_JUMP)  ; LAB_00401c27
    PUSH EBX                            ; 00401bcf
    MOV EBX,dword ptr [0x0067939c]      ; 00401bd0 | g_BitsPerPixel
    SHL EDI,0x2                         ; 00401bd6
    INC EAX                             ; 00401bd9
    LEA EDX,[EDI + 0x2c]                ; 00401bda
    CMP EBX,0x8                         ; 00401bdd
    JZ 0x00401c2b                       ; 00401be0
        ;   XREF to: 00401c2b (CONDITIONAL_JUMP)  ; LAB_00401c2b
    MOV dword ptr [ESP + 0x4],EDX       ; 00401be2
    ADD EBP,EBP                         ; 00401be6
    MOV EDX,dword ptr [EDI + 0x2cf6a9c] ; 00401be8 | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_00401be8
    XOR ECX,ECX                         ; 00401bee
    ADD EDX,EBP                         ; 00401bf0
    TEST ESI,ESI                        ; 00401bf2
    JLE 0x00401c0f                      ; 00401bf4
        ;   XREF to: 00401c0f (CONDITIONAL_JUMP)  ; LAB_00401c0f
    MOV BL,byte ptr [EAX]               ; 00401bf6 | DAT_00666041 | DAT_00666042 | g_FontTable[0].bitmap[0][2]
        ;   Label: LAB_00401bf6
    TEST BL,BL                          ; 00401bf8
    JZ 0x00401c06                       ; 00401bfa
        ;   XREF to: 00401c06 (CONDITIONAL_JUMP)  ; LAB_00401c06
    MOV BX,word ptr [0x02d0121e]        ; 00401bfc | g_ColorTable16[255]
    MOV word ptr [EDX],BX               ; 00401c03
    INC EAX                             ; 00401c06
        ;   Label: LAB_00401c06
    INC ECX                             ; 00401c07
    ADD EDX,0x2                         ; 00401c08
    CMP ECX,ESI                         ; 00401c0b
    JL 0x00401bf6                       ; 00401c0d
        ;   XREF to: 00401bf6 (CONDITIONAL_JUMP)  ; LAB_00401bf6
    MOV EDX,dword ptr [ESP + 0x4]       ; 00401c0f
        ;   Label: LAB_00401c0f
    ADD EDI,0x4                         ; 00401c13
    CMP EDI,EDX                         ; 00401c16
    JNZ 0x00401be8                      ; 00401c18
        ;   XREF to: 00401be8 (CONDITIONAL_JUMP)  ; LAB_00401be8
    LEA EDX,[ESI + 0x1]                 ; 00401c1a
        ;   Label: LAB_00401c1a
    POP EBX                             ; 00401c1d
    MOV EAX,EDX                         ; 00401c1e
        ;   Label: LAB_00401c1e
    ADD ESP,0x8                         ; 00401c20
    POP EBP                             ; 00401c23
    POP EDI                             ; 00401c24
    POP ESI                             ; 00401c25
    RET                                 ; 00401c26
    XOR EDX,EDX                         ; 00401c27
        ;   Label: LAB_00401c27
    JMP 0x00401c1e                      ; 00401c29
        ;   XREF to: 00401c1e (UNCONDITIONAL_JUMP)  ; LAB_00401c1e
    MOV BH,0xff                         ; 00401c2b
        ;   Label: LAB_00401c2b
    MOV dword ptr [ESP + 0x8],EDX       ; 00401c2d
    MOV ECX,dword ptr [EDI + 0x2cf6a9c] ; 00401c31 | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_00401c31
    XOR EDX,EDX                         ; 00401c37
    ADD ECX,EBP                         ; 00401c39
    TEST ESI,ESI                        ; 00401c3b
    JLE 0x00401c4e                      ; 00401c3d
        ;   XREF to: 00401c4e (CONDITIONAL_JUMP)  ; LAB_00401c4e
    MOV BL,byte ptr [EAX]               ; 00401c3f | DAT_00666041 | DAT_00666042 | g_FontTable[0].bitmap[0][2]
        ;   Label: LAB_00401c3f
    TEST BL,BL                          ; 00401c41
    JZ 0x00401c47                       ; 00401c43
        ;   XREF to: 00401c47 (CONDITIONAL_JUMP)  ; LAB_00401c47
    MOV byte ptr [ECX],BH               ; 00401c45
    INC EAX                             ; 00401c47
        ;   Label: LAB_00401c47
    INC EDX                             ; 00401c48
    INC ECX                             ; 00401c49
    CMP EDX,ESI                         ; 00401c4a
    JL 0x00401c3f                       ; 00401c4c
        ;   XREF to: 00401c3f (CONDITIONAL_JUMP)  ; LAB_00401c3f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00401c4e
        ;   Label: LAB_00401c4e
    ADD EDI,0x4                         ; 00401c52
    CMP EDI,ECX                         ; 00401c55
    JZ 0x00401c1a                       ; 00401c57
        ;   XREF to: 00401c1a (CONDITIONAL_JUMP)  ; LAB_00401c1a
    JMP 0x00401c31                      ; 00401c59
        ;   XREF to: 00401c31 (UNCONDITIONAL_JUMP)  ; LAB_00401c31

