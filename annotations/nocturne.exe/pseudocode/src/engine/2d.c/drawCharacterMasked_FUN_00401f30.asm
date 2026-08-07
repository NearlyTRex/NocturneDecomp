; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawCharacterMasked_FUN_00401f30(int char_code,int x_pos,int y_pos)
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
;   engine_2d.c_drawStringMasked_FUN_00402660 at 00402697
;
; Referenced Globals:
;   SFontGlyph[224] g_FontTable
;   undefined4 g_FontTable[0].bitmap[0]
;   undefined4 g_FontTable[0].bitmap[1]
;   undefined4 g_FontTable[0].bitmap[2]
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

    PUSH ESI                            ; 00401f30
        ;   Label: engine_2d.c_drawCharacterMasked_FUN_00401f30
    PUSH EDI                            ; 00401f31
    PUSH EBP                            ; 00401f32
    SUB ESP,0x8                         ; 00401f33
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401f36
    MOV EDI,dword ptr [ESP + 0x20]      ; 00401f3a
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401f3e
    SUB EDX,0x20                        ; 00401f42
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401f45
    ADD EAX,EDX                         ; 00401f4c
    SHL EAX,0x4                         ; 00401f4e
    ADD EAX,EDX                         ; 00401f51
    ADD EAX,0x5a4b80                    ; 00401f53 | g_FontTable
    MOV EDX,dword ptr [0x01c00c58]      ; 00401f58 | g_ClipLeft
    MOVZX ESI,byte ptr [EAX]            ; 00401f5e | g_FontTable
    CMP EBP,EDX                         ; 00401f61
    JL 0x00401ffb                       ; 00401f63
        ;   XREF to: 00401ffb (CONDITIONAL_JUMP)  ; LAB_00401ffb
    CMP EDI,dword ptr [0x01c00c5c]      ; 00401f69 | g_ClipTop
    JL 0x00401ffb                       ; 00401f6f
        ;   XREF to: 00401ffb (CONDITIONAL_JUMP)  ; LAB_00401ffb
    MOV EDX,dword ptr [0x01c00c60]      ; 00401f75 | g_ClipRight
    INC EDX                             ; 00401f7b
    SUB EDX,ESI                         ; 00401f7c
    CMP EBP,EDX                         ; 00401f7e
    JG 0x00401ffb                       ; 00401f80
        ;   XREF to: 00401ffb (CONDITIONAL_JUMP)  ; LAB_00401ffb
    MOV EDX,dword ptr [0x01c00c64]      ; 00401f86 | g_ClipBottom
    SUB EDX,0xa                         ; 00401f8c
    CMP EDI,EDX                         ; 00401f8f
    JG 0x00401ffb                       ; 00401f91
        ;   XREF to: 00401ffb (CONDITIONAL_JUMP)  ; LAB_00401ffb
    PUSH EBX                            ; 00401f93
    MOV EBX,dword ptr [0x005b7624]      ; 00401f94 | g_BitsPerPixel
    SHL EDI,0x2                         ; 00401f9a
    INC EAX                             ; 00401f9d
    LEA EDX,[EDI + 0x2c]                ; 00401f9e
    CMP EBX,0x8                         ; 00401fa1
    JZ 0x00401fff                       ; 00401fa4
        ;   XREF to: 00401fff (CONDITIONAL_JUMP)  ; LAB_00401fff
    ADD EBP,EBP                         ; 00401fa6
    MOV dword ptr [ESP + 0x4],EBP       ; 00401fa8
    MOV EBP,EDX                         ; 00401fac
    MOV ECX,dword ptr [ESP + 0x4]       ; 00401fae
        ;   Label: LAB_00401fae
    MOV EDX,dword ptr [EDI + 0x1bd2fa0] ; 00401fb2 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,ECX                         ; 00401fb8
    XOR ECX,ECX                         ; 00401fba
    TEST ESI,ESI                        ; 00401fbc
    JLE 0x00401fdd                      ; 00401fbe
        ;   XREF to: 00401fdd (CONDITIONAL_JUMP)  ; LAB_00401fdd
    MOV BL,byte ptr [EAX]               ; 00401fc0 | g_FontTable[0].bitmap[0] | g_FontTable[0].bitmap[1] | g_FontTable[0].bitmap[2]
        ;   Label: LAB_00401fc0
    TEST BL,BL                          ; 00401fc2
    JZ 0x00402034                       ; 00401fc4
        ;   XREF to: 00402034 (CONDITIONAL_JUMP)  ; LAB_00402034
    MOV BX,word ptr [0x01bff724]        ; 00401fca | g_ColorTable16[2]
    MOV word ptr [EDX],BX               ; 00401fd1
        ;   Label: LAB_00401fd1
    INC EAX                             ; 00401fd4
    INC ECX                             ; 00401fd5
    ADD EDX,0x2                         ; 00401fd6
    CMP ECX,ESI                         ; 00401fd9
    JL 0x00401fc0                       ; 00401fdb
        ;   XREF to: 00401fc0 (CONDITIONAL_JUMP)  ; LAB_00401fc0
    MOV BX,word ptr [0x01bff720]        ; 00401fdd | g_ColorTable16
        ;   Label: LAB_00401fdd
    ADD EDI,0x4                         ; 00401fe4
    MOV word ptr [EDX],BX               ; 00401fe7
    CMP EDI,EBP                         ; 00401fea
    JNZ 0x00401fae                      ; 00401fec
        ;   XREF to: 00401fae (CONDITIONAL_JUMP)  ; LAB_00401fae
    LEA ECX,[ESI + 0x1]                 ; 00401fee
        ;   Label: LAB_00401fee
    POP EBX                             ; 00401ff1
    MOV EAX,ECX                         ; 00401ff2
        ;   Label: LAB_00401ff2
    ADD ESP,0x8                         ; 00401ff4
    POP EBP                             ; 00401ff7
    POP EDI                             ; 00401ff8
    POP ESI                             ; 00401ff9
    RET                                 ; 00401ffa
    XOR ECX,ECX                         ; 00401ffb
        ;   Label: LAB_00401ffb
    JMP 0x00401ff2                      ; 00401ffd
        ;   XREF to: 00401ff2 (UNCONDITIONAL_JUMP)  ; LAB_00401ff2
    MOV BH,0x2                          ; 00401fff
        ;   Label: LAB_00401fff
    MOV dword ptr [ESP + 0x8],EDX       ; 00402001
    MOV EDX,dword ptr [EDI + 0x1bd2fa0] ; 00402005 | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_00402005
    XOR ECX,ECX                         ; 0040200b
    ADD EDX,EBP                         ; 0040200d
    TEST ESI,ESI                        ; 0040200f
    JLE 0x00402022                      ; 00402011
        ;   XREF to: 00402022 (CONDITIONAL_JUMP)  ; LAB_00402022
    MOV BL,byte ptr [EAX]               ; 00402013 | g_FontTable[0].bitmap[0] | g_FontTable[0].bitmap[1] | g_FontTable[0].bitmap[2]
        ;   Label: LAB_00402013
    TEST BL,BL                          ; 00402015
    JZ 0x00402030                       ; 00402017
        ;   XREF to: 00402030 (CONDITIONAL_JUMP)  ; LAB_00402030
    MOV byte ptr [EDX],BH               ; 00402019
    INC EAX                             ; 0040201b
        ;   Label: LAB_0040201b
    INC ECX                             ; 0040201c
    INC EDX                             ; 0040201d
    CMP ECX,ESI                         ; 0040201e
    JL 0x00402013                       ; 00402020
        ;   XREF to: 00402013 (CONDITIONAL_JUMP)  ; LAB_00402013
    ADD EDI,0x4                         ; 00402022
        ;   Label: LAB_00402022
    MOV byte ptr [EDX],0x0              ; 00402025
    CMP EDI,dword ptr [ESP + 0x8]       ; 00402028
    JZ 0x00401fee                       ; 0040202c
        ;   XREF to: 00401fee (CONDITIONAL_JUMP)  ; LAB_00401fee
    JMP 0x00402005                      ; 0040202e
        ;   XREF to: 00402005 (UNCONDITIONAL_JUMP)  ; LAB_00402005
    MOV byte ptr [EDX],BL               ; 00402030
        ;   Label: LAB_00402030
    JMP 0x0040201b                      ; 00402032
        ;   XREF to: 0040201b (UNCONDITIONAL_JUMP)  ; LAB_0040201b
    MOV BX,word ptr [0x01bff720]        ; 00402034 | g_ColorTable16
        ;   Label: LAB_00402034
    JMP 0x00401fd1                      ; 0040203b
        ;   XREF to: 00401fd1 (UNCONDITIONAL_JUMP)  ; LAB_00401fd1

