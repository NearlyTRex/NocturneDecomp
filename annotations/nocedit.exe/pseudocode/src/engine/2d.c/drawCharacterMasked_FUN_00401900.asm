; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawCharacterMasked_FUN_00401900(int char_code,int x_pos,int y_pos)
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
;   engine_2d.c_drawStringMasked_FUN_00402030 at 00402067
;
; Referenced Globals:
;   SFontGlyph[224] g_FontTable
;   undefined4 DAT_00666041
;   undefined4 DAT_00666042
;   undefined4 g_FontTable[0].bitmap[0][2]
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   ushort[256] g_ColorTable16
;   undefined4 g_ColorTable16[2]
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00401900
        ;   Label: engine_2d.c_drawCharacterMasked_FUN_00401900
    PUSH EDI                            ; 00401901
    PUSH EBP                            ; 00401902
    SUB ESP,0x8                         ; 00401903
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401906
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040190a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040190e
    SUB EDX,0x20                        ; 00401912
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401915
    ADD EAX,EDX                         ; 0040191c
    SHL EAX,0x4                         ; 0040191e
    ADD EAX,EDX                         ; 00401921
    ADD EAX,0x666040                    ; 00401923 | g_FontTable
    MOV EDX,dword ptr [0x02d02558]      ; 00401928 | g_ClipLeft
    MOVZX ESI,byte ptr [EAX]            ; 0040192e | g_FontTable
    CMP EBP,EDX                         ; 00401931
    JL 0x004019cb                       ; 00401933
        ;   XREF to: 004019cb (CONDITIONAL_JUMP)  ; LAB_004019cb
    CMP EDI,dword ptr [0x02d0255c]      ; 00401939 | g_ClipTop
    JL 0x004019cb                       ; 0040193f
        ;   XREF to: 004019cb (CONDITIONAL_JUMP)  ; LAB_004019cb
    MOV EDX,dword ptr [0x02d02560]      ; 00401945 | g_ClipRight
    INC EDX                             ; 0040194b
    SUB EDX,ESI                         ; 0040194c
    CMP EBP,EDX                         ; 0040194e
    JG 0x004019cb                       ; 00401950
        ;   XREF to: 004019cb (CONDITIONAL_JUMP)  ; LAB_004019cb
    MOV EDX,dword ptr [0x02d02564]      ; 00401956 | g_ClipBottom
    SUB EDX,0xa                         ; 0040195c
    CMP EDI,EDX                         ; 0040195f
    JG 0x004019cb                       ; 00401961
        ;   XREF to: 004019cb (CONDITIONAL_JUMP)  ; LAB_004019cb
    PUSH EBX                            ; 00401963
    MOV EBX,dword ptr [0x0067939c]      ; 00401964 | g_BitsPerPixel
    SHL EDI,0x2                         ; 0040196a
    INC EAX                             ; 0040196d
    LEA EDX,[EDI + 0x2c]                ; 0040196e
    CMP EBX,0x8                         ; 00401971
    JZ 0x004019cf                       ; 00401974
        ;   XREF to: 004019cf (CONDITIONAL_JUMP)  ; LAB_004019cf
    ADD EBP,EBP                         ; 00401976
    MOV dword ptr [ESP + 0x4],EBP       ; 00401978
    MOV EBP,EDX                         ; 0040197c
    MOV ECX,dword ptr [ESP + 0x4]       ; 0040197e
        ;   Label: LAB_0040197e
    MOV EDX,dword ptr [EDI + 0x2cf6a9c] ; 00401982 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,ECX                         ; 00401988
    XOR ECX,ECX                         ; 0040198a
    TEST ESI,ESI                        ; 0040198c
    JLE 0x004019ad                      ; 0040198e
        ;   XREF to: 004019ad (CONDITIONAL_JUMP)  ; LAB_004019ad
    MOV BL,byte ptr [EAX]               ; 00401990 | DAT_00666041 | DAT_00666042 | g_FontTable[0].bitmap[0][2]
        ;   Label: LAB_00401990
    TEST BL,BL                          ; 00401992
    JZ 0x00401a04                       ; 00401994
        ;   XREF to: 00401a04 (CONDITIONAL_JUMP)  ; LAB_00401a04
    MOV BX,word ptr [0x02d01024]        ; 0040199a | g_ColorTable16[2]
    MOV word ptr [EDX],BX               ; 004019a1
        ;   Label: LAB_004019a1
    INC EAX                             ; 004019a4
    INC ECX                             ; 004019a5
    ADD EDX,0x2                         ; 004019a6
    CMP ECX,ESI                         ; 004019a9
    JL 0x00401990                       ; 004019ab
        ;   XREF to: 00401990 (CONDITIONAL_JUMP)  ; LAB_00401990
    MOV BX,word ptr [0x02d01020]        ; 004019ad | g_ColorTable16
        ;   Label: LAB_004019ad
    ADD EDI,0x4                         ; 004019b4
    MOV word ptr [EDX],BX               ; 004019b7
    CMP EDI,EBP                         ; 004019ba
    JNZ 0x0040197e                      ; 004019bc
        ;   XREF to: 0040197e (CONDITIONAL_JUMP)  ; LAB_0040197e
    LEA ECX,[ESI + 0x1]                 ; 004019be
        ;   Label: LAB_004019be
    POP EBX                             ; 004019c1
    MOV EAX,ECX                         ; 004019c2
        ;   Label: LAB_004019c2
    ADD ESP,0x8                         ; 004019c4
    POP EBP                             ; 004019c7
    POP EDI                             ; 004019c8
    POP ESI                             ; 004019c9
    RET                                 ; 004019ca
    XOR ECX,ECX                         ; 004019cb
        ;   Label: LAB_004019cb
    JMP 0x004019c2                      ; 004019cd
        ;   XREF to: 004019c2 (UNCONDITIONAL_JUMP)  ; LAB_004019c2
    MOV BH,0x2                          ; 004019cf
        ;   Label: LAB_004019cf
    MOV dword ptr [ESP + 0x8],EDX       ; 004019d1
    MOV EDX,dword ptr [EDI + 0x2cf6a9c] ; 004019d5 | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_004019d5
    XOR ECX,ECX                         ; 004019db
    ADD EDX,EBP                         ; 004019dd
    TEST ESI,ESI                        ; 004019df
    JLE 0x004019f2                      ; 004019e1
        ;   XREF to: 004019f2 (CONDITIONAL_JUMP)  ; LAB_004019f2
    MOV BL,byte ptr [EAX]               ; 004019e3 | DAT_00666041 | DAT_00666042 | g_FontTable[0].bitmap[0][2]
        ;   Label: LAB_004019e3
    TEST BL,BL                          ; 004019e5
    JZ 0x00401a00                       ; 004019e7
        ;   XREF to: 00401a00 (CONDITIONAL_JUMP)  ; LAB_00401a00
    MOV byte ptr [EDX],BH               ; 004019e9
    INC EAX                             ; 004019eb
        ;   Label: LAB_004019eb
    INC ECX                             ; 004019ec
    INC EDX                             ; 004019ed
    CMP ECX,ESI                         ; 004019ee
    JL 0x004019e3                       ; 004019f0
        ;   XREF to: 004019e3 (CONDITIONAL_JUMP)  ; LAB_004019e3
    ADD EDI,0x4                         ; 004019f2
        ;   Label: LAB_004019f2
    MOV byte ptr [EDX],0x0              ; 004019f5
    CMP EDI,dword ptr [ESP + 0x8]       ; 004019f8
    JZ 0x004019be                       ; 004019fc
        ;   XREF to: 004019be (CONDITIONAL_JUMP)  ; LAB_004019be
    JMP 0x004019d5                      ; 004019fe
        ;   XREF to: 004019d5 (UNCONDITIONAL_JUMP)  ; LAB_004019d5
    MOV byte ptr [EDX],BL               ; 00401a00
        ;   Label: LAB_00401a00
    JMP 0x004019eb                      ; 00401a02
        ;   XREF to: 004019eb (UNCONDITIONAL_JUMP)  ; LAB_004019eb
    MOV BX,word ptr [0x02d01020]        ; 00401a04 | g_ColorTable16
        ;   Label: LAB_00401a04
    JMP 0x004019a1                      ; 00401a0b
        ;   XREF to: 004019a1 (UNCONDITIONAL_JUMP)  ; LAB_004019a1

