; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_windll.cpp_renderAlphaRow32_FUN_005b555c(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, int pixelCount)
;
; Parameters:
; uint *           Stack[0x4]:4   destPixels
; uchar *          Stack[0x8]:4   srcIndices
; uchar *          Stack[0xc]:4   srcAlpha
; int              Stack[0x10]:4   globalAlpha
; int              Stack[0x14]:4   pixelCount
;
; XREF[2]:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 at 00410a17
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00 at 00410b8e
;
; Referenced Globals:
;   SAlphaEntry[256] g_AlphaTable
;   undefined4 g_AlphaTable[255].red
;   uint[256] g_Hardware32BitPalette
;   int g_BlendMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b555c
        ;   Label: wincore_windll.cpp_renderAlphaRow32_FUN_005b555c
    MOV EBP,ESP                         ; 005b555d
    PUSHAD                              ; 005b555f
    MOV EDI,dword ptr [EBP + 0x8]       ; 005b5560
    MOV ESI,dword ptr [EBP + 0xc]       ; 005b5563
    MOV EBX,dword ptr [EBP + 0x10]      ; 005b5566
    MOV ECX,dword ptr [EBP + 0x18]      ; 005b5569
    MOV EBP,dword ptr [EBP + 0x14]      ; 005b556c
    PXOR MM7,MM7                        ; 005b556f
    SHR EBP,0x8                         ; 005b5572
    MOVZX EAX,byte ptr [ESI]            ; 005b5575
        ;   Label: LAB_005b5575
    MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924] ; 005b5578 | g_Hardware32BitPalette
    MOVZX EAX,byte ptr [EBX]            ; 005b5580
    IMUL EAX,EBP                        ; 005b5583
    CMP dword ptr [0x02d05298],0x1      ; 005b5586 | g_BlendMode
    JZ 0x005b559d                       ; 005b558d
        ;   XREF to: 005b559d (CONDITIONAL_JUMP)  ; LAB_005b559d
    CMP EAX,0xfde8                      ; 005b558f
    JGE 0x005b55e7                      ; 005b5594
        ;   XREF to: 005b55e7 (CONDITIONAL_JUMP)  ; LAB_005b55e7
    CMP EAX,0xff                        ; 005b5596
    JLE 0x005b55ea                      ; 005b559b
        ;   XREF to: 005b55ea (CONDITIONAL_JUMP)  ; LAB_005b55ea
    SHR EAX,0x8                         ; 005b559d
        ;   Label: LAB_005b559d
    PUNPCKLBW MM0,MM7                   ; 005b55a0
    MOVQ MM1,qword ptr [EAX*0x8 + 0x683000] ; 005b55a3 | g_AlphaTable
    MOVQ MM2,MM1                        ; 005b55ab
    PXOR MM2,qword ptr [0x006837f8]     ; 005b55ae | g_AlphaTable[255].red
    MOVD MM3,dword ptr [EDI]            ; 005b55b5
    PUNPCKLBW MM3,MM7                   ; 005b55b8
    CMP dword ptr [0x02d05298],0x1      ; 005b55bb | g_BlendMode
    JZ 0x005b55d6                       ; 005b55c2
        ;   XREF to: 005b55d6 (CONDITIONAL_JUMP)  ; LAB_005b55d6
    PMULLW MM0,MM1                      ; 005b55c4
    PMULLW MM3,MM2                      ; 005b55c7
    PADDW MM0,MM3                       ; 005b55ca
    PSRLW MM0,0x8                       ; 005b55cd
    PACKUSWB MM0,MM7                    ; 005b55d1
    JMP 0x005b55e7                      ; 005b55d4
        ;   XREF to: 005b55e7 (UNCONDITIONAL_JUMP)  ; LAB_005b55e7
    PSLLW MM3,0x8                       ; 005b55d6
        ;   Label: LAB_005b55d6
    PMULLW MM0,MM1                      ; 005b55da
    PADDUSW MM0,MM3                     ; 005b55dd
    PSRLW MM0,0x8                       ; 005b55e0
    PACKUSWB MM0,MM7                    ; 005b55e4
    MOVD dword ptr [EDI],MM0            ; 005b55e7
        ;   Label: LAB_005b55e7
    INC ESI                             ; 005b55ea
        ;   Label: LAB_005b55ea
    INC EBX                             ; 005b55eb
    ADD EDI,0x4                         ; 005b55ec
    DEC ECX                             ; 005b55ef
    JG 0x005b5575                       ; 005b55f0
        ;   XREF to: 005b5575 (CONDITIONAL_JUMP)  ; LAB_005b5575
    POPAD                               ; 005b55f2
    EMMS                                ; 005b55f3
    LEAVE                               ; 005b55f5
    RET                                 ; 005b55f6

