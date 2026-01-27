; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, int pixelCount)
;
; Parameters:
; ushort *         Stack[0x4]:4   destPixels
; uchar *          Stack[0x8]:4   srcIndices
; uchar *          Stack[0xc]:4   srcAlpha
; int              Stack[0x10]:4   globalAlpha
; int              Stack[0x14]:4   pixelCount
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 at 00410abb
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00 at 00410beb
;
; Referenced Globals:
;   ulonglong g_RedMask16 = 0xf800
;   ulonglong g_GreenMask16 = 0x7e0
;   ulonglong g_BlueMask16 = 0x1f
;   ulonglong g_RedMask32 = 0xf80000
;   ulonglong g_GreenMask32 = 0xfc00
;   ulonglong g_BlueMask32 = 0xf8
;   ulonglong g_TotalColorBits = 0x8
;   ulonglong g_GreenBlueBits = 0x5
;   ulonglong g_BlueBitShift = 0x3
;   SAlphaEntry[256] g_AlphaTable
;   undefined4 g_AlphaTable[255].red
;   uint[256] g_Hardware32BitPalette
;   int g_BlendMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b55f7
        ;   Label: wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
    MOV EBP,ESP                         ; 005b55f8
    PUSHAD                              ; 005b55fa
    MOV EDI,dword ptr [EBP + 0x8]       ; 005b55fb
    MOV ESI,dword ptr [EBP + 0xc]       ; 005b55fe
    MOV EBX,dword ptr [EBP + 0x10]      ; 005b5601
    MOV ECX,dword ptr [EBP + 0x18]      ; 005b5604
    MOV EBP,dword ptr [EBP + 0x14]      ; 005b5607
    PXOR MM7,MM7                        ; 005b560a
    SHR EBP,0x8                         ; 005b560d
    MOVZX EAX,byte ptr [ESI]            ; 005b5610
        ;   Label: LAB_005b5610
    MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924] ; 005b5613 | g_Hardware32BitPalette
    MOVZX EAX,byte ptr [EBX]            ; 005b561b
    IMUL EAX,EBP                        ; 005b561e
    CMP dword ptr [0x02d05298],0x1      ; 005b5621 | g_BlendMode
    JZ 0x005b5640                       ; 005b5628
        ;   XREF to: 005b5640 (CONDITIONAL_JUMP)  ; LAB_005b5640
    CMP EAX,0xfde8                      ; 005b562a
    JGE 0x005b56c3                      ; 005b562f
        ;   XREF to: 005b56c3 (CONDITIONAL_JUMP)  ; LAB_005b56c3
    CMP EAX,0xff                        ; 005b5635
    JLE 0x005b56ff                      ; 005b563a
        ;   XREF to: 005b56ff (CONDITIONAL_JUMP)  ; LAB_005b56ff
    SHR EAX,0x8                         ; 005b5640
        ;   Label: LAB_005b5640
    PUNPCKLBW MM0,MM7                   ; 005b5643
    MOVQ MM1,qword ptr [EAX*0x8 + 0x683000] ; 005b5646 | g_AlphaTable
    MOVQ MM2,MM1                        ; 005b564e
    PXOR MM2,qword ptr [0x006837f8]     ; 005b5651 | g_AlphaTable[255].red
    MOVZX EAX,word ptr [EDI]            ; 005b5658
    MOVD MM3,EAX                        ; 005b565b
    PAND MM3,qword ptr [0x00682758]     ; 005b565e | g_BlueMask16
    PSLLQ MM3,qword ptr [0x006827e8]    ; 005b5665 | g_BlueBitShift
    MOVD MM4,EAX                        ; 005b566c
    PAND MM4,qword ptr [0x00682750]     ; 005b566f | g_GreenMask16
    PSLLQ MM4,qword ptr [0x006827c8]    ; 005b5676 | g_GreenBlueBits
    POR MM3,MM4                         ; 005b567d
    MOVD MM5,EAX                        ; 005b5680
    PAND MM5,qword ptr [0x00682748]     ; 005b5683 | g_RedMask16
    PSLLQ MM5,qword ptr [0x006827a8]    ; 005b568a | g_TotalColorBits
    POR MM3,MM5                         ; 005b5691
    PUNPCKLBW MM3,MM7                   ; 005b5694
    CMP dword ptr [0x02d05298],0x1      ; 005b5697 | g_BlendMode
    JZ 0x005b56b2                       ; 005b569e
        ;   XREF to: 005b56b2 (CONDITIONAL_JUMP)  ; LAB_005b56b2
    PMULLW MM0,MM1                      ; 005b56a0
    PMULLW MM3,MM2                      ; 005b56a3
    PADDW MM0,MM3                       ; 005b56a6
    PSRLW MM0,0x8                       ; 005b56a9
    PACKUSWB MM0,MM7                    ; 005b56ad
    JMP 0x005b56c3                      ; 005b56b0
        ;   XREF to: 005b56c3 (UNCONDITIONAL_JUMP)  ; LAB_005b56c3
    PSLLW MM3,0x8                       ; 005b56b2
        ;   Label: LAB_005b56b2
    PMULLW MM0,MM1                      ; 005b56b6
    PADDUSW MM0,MM3                     ; 005b56b9
    PSRLW MM0,0x8                       ; 005b56bc
    PACKUSWB MM0,MM7                    ; 005b56c0
    MOVQ MM2,MM0                        ; 005b56c3
        ;   Label: LAB_005b56c3
    MOVQ MM4,MM0                        ; 005b56c6
    PAND MM0,qword ptr [0x006827a0]     ; 005b56c9 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 005b56d0 | g_GreenMask32
    PAND MM4,qword ptr [0x00682760]     ; 005b56d7 | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 005b56de | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 005b56e5 | g_GreenBlueBits
    PSRLQ MM4,qword ptr [0x006827a8]    ; 005b56ec | g_TotalColorBits
    POR MM0,MM2                         ; 005b56f3
    POR MM0,MM4                         ; 005b56f6
    MOVD EAX,MM0                        ; 005b56f9
    MOV word ptr [EDI],AX               ; 005b56fc
    INC ESI                             ; 005b56ff
        ;   Label: LAB_005b56ff
    INC EBX                             ; 005b5700
    ADD EDI,0x2                         ; 005b5701
    DEC ECX                             ; 005b5704
    JG 0x005b5610                       ; 005b5705
        ;   XREF to: 005b5610 (CONDITIONAL_JUMP)  ; LAB_005b5610
    POPAD                               ; 005b570b
    EMMS                                ; 005b570c
    LEAVE                               ; 005b570e
    RET                                 ; 005b570f

