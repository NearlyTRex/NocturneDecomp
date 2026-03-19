; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawCharacter_FUN_00401610(int char_code,int x_pos,int y_pos)
;
; Parameters:
; int              Stack[0x4]:4   char_code
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
;
; XREF[2]:
;   engine_2d.c_drawTextMultiline_FUN_00401cf0 at 00401d3a
;   engine_2d.c_drawTextWrapped_FUN_00401c60 at 00401cb1
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
;   uint[256] g_ColorTable32
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401610
        ;   Label: engine_2d.c_drawCharacter_FUN_00401610
    PUSH EDI                            ; 00401611
    PUSH EBP                            ; 00401612
    SUB ESP,0x10                        ; 00401613
    MOV EDI,dword ptr [ESP + 0x28]      ; 00401616
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040161a
    SUB EDX,0x20                        ; 0040161e
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401621
    ADD EAX,EDX                         ; 00401628
    SHL EAX,0x4                         ; 0040162a
    ADD EAX,EDX                         ; 0040162d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0040162f
    ADD EAX,0x666040                    ; 00401633 | g_FontTable
    XOR EDX,EDX                         ; 00401638
    MOV EBX,dword ptr [0x02d02558]      ; 0040163a | g_ClipLeft
    MOV DL,byte ptr [EAX]               ; 00401640 | g_FontTable
    CMP ECX,EBX                         ; 00401642
    JL 0x004016eb                       ; 00401644
        ;   XREF to: 004016eb (CONDITIONAL_JUMP)  ; LAB_004016eb
    CMP EDI,dword ptr [0x02d0255c]      ; 0040164a | g_ClipTop
    JL 0x004016eb                       ; 00401650
        ;   XREF to: 004016eb (CONDITIONAL_JUMP)  ; LAB_004016eb
    MOV ECX,dword ptr [0x02d02560]      ; 00401656 | g_ClipRight
    INC ECX                             ; 0040165c
    MOV EBP,dword ptr [ESP + 0x24]      ; 0040165d
    SUB ECX,EDX                         ; 00401661
    CMP ECX,EBP                         ; 00401663
    JL 0x004016eb                       ; 00401665
        ;   XREF to: 004016eb (CONDITIONAL_JUMP)  ; LAB_004016eb
    MOV ECX,dword ptr [0x02d02564]      ; 0040166b | g_ClipBottom
    SUB ECX,0xa                         ; 00401671
    CMP EDI,ECX                         ; 00401674
    JG 0x004016eb                       ; 00401676
        ;   XREF to: 004016eb (CONDITIONAL_JUMP)  ; LAB_004016eb
    PUSH ESI                            ; 0040167c
    MOV ECX,dword ptr [0x0067939c]      ; 0040167d | g_BitsPerPixel
    SHL EDI,0x2                         ; 00401683
    INC EAX                             ; 00401686
    LEA EBP,[EDI + 0x2c]                ; 00401687
    CMP ECX,0x8                         ; 0040168a
    JZ 0x004016ef                       ; 0040168d
        ;   XREF to: 004016ef (CONDITIONAL_JUMP)  ; LAB_004016ef
    CMP ECX,0x10                        ; 0040168f
    JNZ 0x00401721                      ; 00401692
        ;   XREF to: 00401721 (CONDITIONAL_JUMP)  ; LAB_00401721
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401698
    ADD ECX,ECX                         ; 0040169c
    MOV dword ptr [ESP + 0x10],ECX      ; 0040169e
    MOV dword ptr [ESP + 0x8],EBP       ; 004016a2
    MOV EBP,dword ptr [ESP + 0x10]      ; 004016a6
    MOV ECX,dword ptr [EDI + 0x2cf6a9c] ; 004016aa | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_004016aa
    XOR EBX,EBX                         ; 004016b0
    ADD ECX,EBP                         ; 004016b2
    TEST EDX,EDX                        ; 004016b4
    JLE 0x004016d0                      ; 004016b6
        ;   XREF to: 004016d0 (CONDITIONAL_JUMP)  ; LAB_004016d0
    MOVZX ESI,byte ptr [EAX]            ; 004016b8 | g_FontTable[0].bitmap[0] | g_FontTable[0].bitmap[1] | g_FontTable[0].bitmap[0][2]
        ;   Label: LAB_004016b8
    INC EAX                             ; 004016bb
    ADD ECX,0x2                         ; 004016bc
    MOV SI,word ptr [ESI*0x2 + 0x2d01020] ; 004016bf | g_ColorTable16
    INC EBX                             ; 004016c7
    MOV word ptr [ECX + -0x2],SI        ; 004016c8
    CMP EBX,EDX                         ; 004016cc
    JL 0x004016b8                       ; 004016ce
        ;   XREF to: 004016b8 (CONDITIONAL_JUMP)  ; LAB_004016b8
    ADD EDI,0x4                         ; 004016d0
        ;   Label: LAB_004016d0
    MOV word ptr [ECX],0x0              ; 004016d3
    CMP EDI,dword ptr [ESP + 0x8]       ; 004016d8
    JNZ 0x004016aa                      ; 004016dc
        ;   XREF to: 004016aa (CONDITIONAL_JUMP)  ; LAB_004016aa
    LEA ECX,[EDX + 0x1]                 ; 004016de
        ;   Label: LAB_004016de
    POP ESI                             ; 004016e1
    MOV EAX,ECX                         ; 004016e2
        ;   Label: LAB_004016e2
    ADD ESP,0x10                        ; 004016e4
    POP EBP                             ; 004016e7
    POP EDI                             ; 004016e8
    POP EBX                             ; 004016e9
    RET                                 ; 004016ea
    XOR ECX,ECX                         ; 004016eb
        ;   Label: LAB_004016eb
    JMP 0x004016e2                      ; 004016ed
        ;   XREF to: 004016e2 (UNCONDITIONAL_JUMP)  ; LAB_004016e2
    MOV dword ptr [ESP + 0xc],EBP       ; 004016ef
        ;   Label: LAB_004016ef
    MOV EBX,dword ptr [ESP + 0x28]      ; 004016f3
        ;   Label: LAB_004016f3
    MOV ECX,dword ptr [EDI + 0x2cf6a9c] ; 004016f7 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    XOR ESI,ESI                         ; 004016fd
    ADD ECX,EBX                         ; 004016ff
    TEST EDX,EDX                        ; 00401701
    JLE 0x00401711                      ; 00401703
        ;   XREF to: 00401711 (CONDITIONAL_JUMP)  ; LAB_00401711
    INC ECX                             ; 00401705
        ;   Label: LAB_00401705
    MOV BL,byte ptr [EAX]               ; 00401706 | g_FontTable[0].bitmap[0] | g_FontTable[0].bitmap[1] | g_FontTable[0].bitmap[0][2]
    INC EAX                             ; 00401708
    INC ESI                             ; 00401709
    MOV byte ptr [ECX + -0x1],BL        ; 0040170a
    CMP ESI,EDX                         ; 0040170d
    JL 0x00401705                       ; 0040170f
        ;   XREF to: 00401705 (CONDITIONAL_JUMP)  ; LAB_00401705
    MOV ESI,dword ptr [ESP + 0xc]       ; 00401711
        ;   Label: LAB_00401711
    ADD EDI,0x4                         ; 00401715
    MOV byte ptr [ECX],0x0              ; 00401718
    CMP EDI,ESI                         ; 0040171b
    JZ 0x004016de                       ; 0040171d
        ;   XREF to: 004016de (CONDITIONAL_JUMP)  ; LAB_004016de
    JMP 0x004016f3                      ; 0040171f
        ;   XREF to: 004016f3 (UNCONDITIONAL_JUMP)  ; LAB_004016f3
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401721
        ;   Label: LAB_00401721
    SHL ECX,0x2                         ; 00401725
    MOV dword ptr [ESP + 0x4],ECX       ; 00401728
    MOV ESI,dword ptr [ESP + 0x4]       ; 0040172c
        ;   Label: LAB_0040172c
    MOV ECX,dword ptr [EDI + 0x2cf6a9c] ; 00401730 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    XOR EBX,EBX                         ; 00401736
    ADD ECX,ESI                         ; 00401738
    TEST EDX,EDX                        ; 0040173a
    JLE 0x00401754                      ; 0040173c
        ;   XREF to: 00401754 (CONDITIONAL_JUMP)  ; LAB_00401754
    MOVZX ESI,byte ptr [EAX]            ; 0040173e | g_FontTable[0].bitmap[0] | g_FontTable[0].bitmap[1] | g_FontTable[0].bitmap[0][2]
        ;   Label: LAB_0040173e
    INC EAX                             ; 00401741
    ADD ECX,0x4                         ; 00401742
    MOV ESI,dword ptr [ESI*0x4 + 0x2d01220] ; 00401745 | g_ColorTable32
    INC EBX                             ; 0040174c
    MOV dword ptr [ECX + -0x4],ESI      ; 0040174d
    CMP EBX,EDX                         ; 00401750
    JL 0x0040173e                       ; 00401752
        ;   XREF to: 0040173e (CONDITIONAL_JUMP)  ; LAB_0040173e
    ADD EDI,0x4                         ; 00401754
        ;   Label: LAB_00401754
    MOV dword ptr [ECX],0x0             ; 00401757
    CMP EDI,EBP                         ; 0040175d
    JZ 0x004016de                       ; 0040175f
        ;   XREF to: 004016de (CONDITIONAL_JUMP)  ; LAB_004016de
    JMP 0x0040172c                      ; 00401765
        ;   XREF to: 0040172c (UNCONDITIONAL_JUMP)  ; LAB_0040172c

