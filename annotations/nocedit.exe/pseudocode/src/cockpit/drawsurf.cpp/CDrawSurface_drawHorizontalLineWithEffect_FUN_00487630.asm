; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630(int start_x, int end_x, int y)
;
; Parameters:
; int              Stack[0x4]:4   start_x
; int              Stack[0x8]:4   end_x
; int              Stack[0xc]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110 at 004881a8
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0 at 00488b36
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_OriginalColorValue
;   int g_PackedPixelColor
;   int g_DuplicatedPixelColor
;   void*[1024] g_ScreenBufferArray
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487630
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
    PUSH ESI                            ; 00487631
    PUSH EDI                            ; 00487632
    MOV EDI,dword ptr [0x02c6d570]      ; 00487633 | g_PackedPixelColor
    MOV EDX,dword ptr [ESP + 0x10]      ; 00487639
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048763d
    MOV ECX,dword ptr [0x0067939c]      ; 00487641 | g_BitsPerPixel
    CMP ECX,0x8                         ; 00487647
    JZ 0x004876c0                       ; 0048764a
        ;   XREF to: 004876c0 (CONDITIONAL_JUMP)  ; LAB_004876c0
    MOV EBX,dword ptr [ESP + 0x18]      ; 00487650
    SHL EBX,0x2                         ; 00487654
    CMP ECX,0x10                        ; 00487657
    JNZ 0x004876e6                      ; 0048765a
        ;   XREF to: 004876e6 (CONDITIONAL_JUMP)  ; LAB_004876e6
    LEA ECX,[EDX + EDX*0x1]             ; 00487660
    MOV EAX,dword ptr [EBX + 0x2cf6a9c] ; 00487663 | g_ScreenBufferArray
    MOV EBX,EDX                         ; 00487669
    ADD EAX,ECX                         ; 0048766b
    TEST DL,0x1                         ; 0048766d
    JZ 0x0048768d                       ; 00487670
        ;   XREF to: 0048768d (CONDITIONAL_JUMP)  ; LAB_0048768d
    XOR EBX,EDX                         ; 00487672
    MOV CL,byte ptr [0x02c6d560]        ; 00487674 | g_OriginalColorValue
    MOV BX,word ptr [EAX]               ; 0048767a
    SHR EBX,CL                          ; 0048767d
    MOV ECX,EBX                         ; 0048767f
    ADD EAX,0x2                         ; 00487681
    AND ECX,EDI                         ; 00487684
    LEA EBX,[EDX + 0x1]                 ; 00487686
    MOV word ptr [EAX + -0x2],CX        ; 00487689
    CMP EBX,ESI                         ; 0048768d
        ;   Label: LAB_0048768d
    JGE 0x004876b0                      ; 0048768f
        ;   XREF to: 004876b0 (CONDITIONAL_JUMP)  ; LAB_004876b0
    MOV CL,byte ptr [0x02c6d560]        ; 00487691 | g_OriginalColorValue
        ;   Label: LAB_00487691
    MOV EDX,dword ptr [EAX]             ; 00487697
    SHR EDX,CL                          ; 00487699
    MOV ECX,dword ptr [0x02c6d574]      ; 0048769b | g_DuplicatedPixelColor
    ADD EAX,0x4                         ; 004876a1
    AND EDX,ECX                         ; 004876a4
    ADD EBX,0x2                         ; 004876a6
    MOV dword ptr [EAX + -0x4],EDX      ; 004876a9
    CMP EBX,ESI                         ; 004876ac
    JL 0x00487691                       ; 004876ae
        ;   XREF to: 00487691 (CONDITIONAL_JUMP)  ; LAB_00487691
    JZ 0x004876ca                       ; 004876b0
        ;   XREF to: 004876ca (CONDITIONAL_JUMP)  ; LAB_004876ca
        ;   Label: LAB_004876b0
    LEA EAX,[EAX]                       ; 004876b2
    LEA EDX,[EDX]                       ; 004876b8
    MOV EAX,EAX                         ; 004876be
    MOV dword ptr [0x02c6d570],EDI      ; 004876c0 | g_PackedPixelColor
        ;   Label: LAB_004876c0
    POP EDI                             ; 004876c6
    POP ESI                             ; 004876c7
    POP EBX                             ; 004876c8
    RET                                 ; 004876c9
    XOR EDX,EDX                         ; 004876ca
        ;   Label: LAB_004876ca
    MOV CL,byte ptr [0x02c6d560]        ; 004876cc | g_OriginalColorValue
    MOV DX,word ptr [EAX]               ; 004876d2
    SHR EDX,CL                          ; 004876d5
    AND EDX,EDI                         ; 004876d7
    MOV word ptr [EAX],DX               ; 004876d9
    MOV dword ptr [0x02c6d570],EDI      ; 004876dc | g_PackedPixelColor
    POP EDI                             ; 004876e2
    POP ESI                             ; 004876e3
    POP EBX                             ; 004876e4
    RET                                 ; 004876e5
    CMP ECX,0x20                        ; 004876e6
        ;   Label: LAB_004876e6
    JNZ 0x004876c0                      ; 004876e9
        ;   XREF to: 004876c0 (CONDITIONAL_JUMP)  ; LAB_004876c0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004876eb
    MOV ECX,dword ptr [EBX + 0x2cf6a9c] ; 004876f2 | g_ScreenBufferArray
    MOV EBX,EDX                         ; 004876f8
    ADD EAX,ECX                         ; 004876fa
    CMP EDX,ESI                         ; 004876fc
    JG 0x004876c0                       ; 004876fe
        ;   XREF to: 004876c0 (CONDITIONAL_JUMP)  ; LAB_004876c0
    MOV CL,byte ptr [0x02c6d560]        ; 00487700 | g_OriginalColorValue
        ;   Label: LAB_00487700
    MOV EDX,dword ptr [EAX]             ; 00487706
    SHR EDX,CL                          ; 00487708
    ADD EAX,0x4                         ; 0048770a
    AND EDX,EDI                         ; 0048770d
    INC EBX                             ; 0048770f
    MOV dword ptr [EAX + -0x4],EDX      ; 00487710
    CMP EBX,ESI                         ; 00487713
    JLE 0x00487700                      ; 00487715
        ;   XREF to: 00487700 (CONDITIONAL_JUMP)  ; LAB_00487700
    MOV dword ptr [0x02c6d570],EDI      ; 00487717 | g_PackedPixelColor
    POP EDI                             ; 0048771d
    POP ESI                             ; 0048771e
    POP EBX                             ; 0048771f
    RET                                 ; 00487720

