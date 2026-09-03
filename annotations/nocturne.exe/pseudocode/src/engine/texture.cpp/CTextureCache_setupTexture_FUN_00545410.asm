; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_CTextureCache_setupTexture_FUN_00545410(CTextureCache *this_ptr,int texture_index)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   texture_index
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_00545700 at 0054572a
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920 at 00545987
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentTextureDimension = 0x100
;   _MMX_INTEGER g_TextureShift1
;   _MMX_INTEGER g_TextureShift2
;   _MMX_INTEGER g_TextureMask1
;   _MMX_INTEGER g_TextureMask2
;   SRGBColorPalette* g_CurrentPalette
;   uint[256] g_Hardware32BitPalette
;   undefined4 g_Hardware32BitPalette[1]
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545410
        ;   Label: engine_texture.cpp_CTextureCache_setupTexture_FUN_00545410
    PUSH ESI                            ; 00545411
    PUSH EDI                            ; 00545412
    PUSH EBP                            ; 00545413
    SUB ESP,0x10                        ; 00545414
    MOV ESI,dword ptr [ESP + 0x24]      ; 00545417
    MOV EBX,dword ptr [ESP + 0x28]      ; 0054541b
    MOV ECX,dword ptr [ESI + EBX*0x4 + 0x1008] ; 0054541f
    MOV EAX,dword ptr [ESI + EBX*0x4 + 0x8] ; 00545426
    XOR EDX,EDX                         ; 0054542a
    MOV dword ptr [0x01c02580],ECX      ; 0054542c | g_CurrentTextureData
    MOV dword ptr [0x01c02588],EDX      ; 00545432 | DAT_01c02588
    MOV [0x005b762c],EAX                ; 00545438 | g_CurrentTextureDimension
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054543d
    MOV ECX,dword ptr [ESI + EBX*0x4 + 0x2008] ; 00545444
    SUB EAX,EBX                         ; 0054544b
    MOV dword ptr [0x01c02584],ECX      ; 0054544d | g_CurrentTextureOpacityData
    SHL EAX,0x8                         ; 00545453
    LEA ECX,[ESI + 0x13008]             ; 00545456
    MOV dword ptr [0x01c0258c],EDX      ; 0054545c | DAT_01c0258c
    ADD ECX,EAX                         ; 00545462
    MOV EBX,dword ptr [0x01c02594]      ; 00545464 | g_UseExternalRenderer
    MOV dword ptr [0x01c00020],ECX      ; 0054546a | g_CurrentPalette
    TEST EBX,EBX                        ; 00545470
    JNZ 0x005454ce                      ; 00545472
        ;   XREF to: 005454ce (CONDITIONAL_JUMP)  ; LAB_005454ce
    MOV ESI,dword ptr [0x005b7624]      ; 00545474 | g_BitsPerPixel
    MOV EBX,ECX                         ; 0054547a
    CMP ESI,0x20                        ; 0054547c
    JNZ 0x005454fb                      ; 0054547f
        ;   XREF to: 005454fb (CONDITIONAL_JUMP)  ; LAB_005454fb
    XOR EAX,EAX                         ; 00545485
    MOV ECX,dword ptr [0x005b7624]      ; 00545487 | g_BitsPerPixel
        ;   Label: LAB_00545487
    MOVZX EDI,byte ptr [EBX + 0x1]      ; 0054548d
    MOVZX EBP,byte ptr [EBX]            ; 00545491
    MOVZX ESI,byte ptr [EBX + 0x2]      ; 00545494
    CMP ECX,0x20                        ; 00545498
    JNZ 0x005454ed                      ; 0054549b
        ;   XREF to: 005454ed (CONDITIONAL_JUMP)  ; LAB_005454ed
    MOV CL,byte ptr [0x01c00624]        ; 0054549d | g_RedBitPosition
    SHL EBP,CL                          ; 005454a3
    MOV CL,byte ptr [0x01c00630]        ; 005454a5 | g_GreenBitPosition
    SHL EDI,CL                          ; 005454ab
    MOV CL,byte ptr [0x01c0063c]        ; 005454ad | g_BlueBitPosition
    SHL ESI,CL                          ; 005454b3
    OR EDI,EBP                          ; 005454b5
    MOV ECX,ESI                         ; 005454b7
    OR ECX,EDI                          ; 005454b9
    ADD EAX,0x4                         ; 005454bb
        ;   Label: LAB_005454bb
    ADD EBX,0x3                         ; 005454be
    MOV dword ptr [EAX + 0x1c00020],ECX ; 005454c1 | g_Hardware32BitPalette | g_Hardware32BitPalette[1]
    CMP EAX,0x400                       ; 005454c7
    JNZ 0x00545487                      ; 005454cc
        ;   XREF to: 00545487 (CONDITIONAL_JUMP)  ; LAB_00545487
    MOV EAX,[0x005b762c]                ; 005454ce | g_CurrentTextureDimension
        ;   Label: LAB_005454ce
    CMP EAX,0x40                        ; 005454d3
    JNC 0x005456c8                      ; 005454d6
        ;   XREF to: 005456c8 (CONDITIONAL_JUMP)  ; LAB_005456c8
    CMP EAX,0x20                        ; 005454dc
    JZ 0x0054568a                       ; 005454df
        ;   XREF to: 0054568a (CONDITIONAL_JUMP)  ; LAB_0054568a
    ADD ESP,0x10                        ; 005454e5
        ;   Label: LAB_005454e5
    POP EBP                             ; 005454e8
    POP EDI                             ; 005454e9
    POP ESI                             ; 005454ea
    POP EBX                             ; 005454eb
    RET                                 ; 005454ec
    MOV ECX,EDI                         ; 005454ed
        ;   Label: LAB_005454ed
    SHL EBP,0x10                        ; 005454ef
    SHL ECX,0x8                         ; 005454f2
    OR ECX,EBP                          ; 005454f5
    OR ECX,ESI                          ; 005454f7
    JMP 0x005454bb                      ; 005454f9
        ;   XREF to: 005454bb (UNCONDITIONAL_JUMP)  ; LAB_005454bb
    XOR EBP,EBP                         ; 005454fb
        ;   Label: LAB_005454fb
    XOR ESI,ESI                         ; 005454fd
    XOR EAX,EAX                         ; 005454ff
        ;   Label: LAB_005454ff
    MOV AL,byte ptr [EBX]               ; 00545501
    XOR EDX,EDX                         ; 00545503
    MOV dword ptr [ESP],EAX             ; 00545505
    DIV dword ptr [0x01c00628]          ; 00545508 | g_RedScaleFactor
    MOVZX EDI,byte ptr [EBX + 0x1]      ; 0054550e
    MOV dword ptr [ESP + 0x4],EDI       ; 00545512
    MOV dword ptr [ESP],EAX             ; 00545516
    XOR EDX,EDX                         ; 00545519
    MOV EAX,EDI                         ; 0054551b
    DIV dword ptr [0x01c00634]          ; 0054551d | g_GreenScaleFactor
    XOR ECX,ECX                         ; 00545523
    MOV CL,byte ptr [EBX + 0x2]         ; 00545525
    MOV dword ptr [ESP + 0x8],ECX       ; 00545528
    MOV dword ptr [ESP + 0x4],EAX       ; 0054552c
    XOR EDX,EDX                         ; 00545530
    MOV EAX,ECX                         ; 00545532
    DIV dword ptr [0x01c00640]          ; 00545534 | g_BlueScaleFactor
    MOV EDI,dword ptr [ESP]             ; 0054553a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054553d
    MOV CL,byte ptr [0x01c00624]        ; 00545541 | g_RedBitPosition
    MOV dword ptr [ESP + 0x8],EAX       ; 00545547
    SHL EDI,CL                          ; 0054554b
    MOV CL,byte ptr [0x01c00630]        ; 0054554d | g_GreenBitPosition
    MOV EAX,dword ptr [ESP + 0x8]       ; 00545553
    SHL EDX,CL                          ; 00545557
    MOV CL,byte ptr [0x01c0063c]        ; 00545559 | g_BlueBitPosition
    OR EDI,EDX                          ; 0054555f
    SHL EAX,CL                          ; 00545561
    OR EAX,EDI                          ; 00545563
    XOR ECX,ECX                         ; 00545565
    MOV word ptr [ESI + 0x1c00424],AX   ; 00545567
    MOV EDX,dword ptr [0x005b7624]      ; 0054556e | g_BitsPerPixel
    MOV CL,byte ptr [EBX + 0x1]         ; 00545574
    MOVZX EDI,byte ptr [EBX]            ; 00545577
    XOR EAX,EAX                         ; 0054557a
    MOV dword ptr [ESP + 0xc],ECX       ; 0054557c
    MOV AL,byte ptr [EBX + 0x2]         ; 00545580
    CMP EDX,0x20                        ; 00545583
    JNZ 0x005455ca                      ; 00545586
        ;   XREF to: 005455ca (CONDITIONAL_JUMP)  ; LAB_005455ca
    MOV CL,byte ptr [0x01c00624]        ; 00545588 | g_RedBitPosition
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054558e
    SHL EDI,CL                          ; 00545592
    MOV CL,byte ptr [0x01c00630]        ; 00545594 | g_GreenBitPosition
    SHL EDX,CL                          ; 0054559a
    MOV CL,byte ptr [0x01c0063c]        ; 0054559c | g_BlueBitPosition
    OR EDI,EDX                          ; 005455a2
    SHL EAX,CL                          ; 005455a4
    MOV ECX,EDI                         ; 005455a6
    OR ECX,EAX                          ; 005455a8
        ;   Label: LAB_005455a8
    ADD EBP,0x4                         ; 005455aa
    ADD EBX,0x3                         ; 005455ad
    ADD ESI,0x2                         ; 005455b0
    MOV dword ptr [EBP + 0x1c00020],ECX ; 005455b3 | g_Hardware32BitPalette
    CMP ESI,0x200                       ; 005455b9
    JZ 0x005454ce                       ; 005455bf
        ;   XREF to: 005454ce (CONDITIONAL_JUMP)  ; LAB_005454ce
    JMP 0x005454ff                      ; 005455c5
        ;   XREF to: 005454ff (UNCONDITIONAL_JUMP)  ; LAB_005454ff
    SHL ECX,0x8                         ; 005455ca
        ;   Label: LAB_005455ca
    SHL EDI,0x10                        ; 005455cd
    OR ECX,EDI                          ; 005455d0
    JMP 0x005455a8                      ; 005455d2
        ;   XREF to: 005455a8 (UNCONDITIONAL_JUMP)  ; LAB_005455a8
    MOV ESI,0x10                        ; 005455d4
        ;   Label: LAB_005455d4
    MOV EBX,0x8                         ; 005455d9
    MOV EBP,0xff                        ; 005455de
    MOV EAX,0xff00                      ; 005455e3
    MOV dword ptr [0x005bf550],ESI      ; 005455e8 | g_TextureShift1
    MOV dword ptr [0x005bf570],EBX      ; 005455ee | g_TextureShift2
    MOV dword ptr [0x005bf590],EBP      ; 005455f4 | g_TextureMask1
    MOV [0x005bf5b0],EAX                ; 005455fa | g_TextureMask2
    MOV dword ptr [0x01c02590],EBX      ; 005455ff | g_TextureBits
    ADD ESP,0x10                        ; 00545605
    POP EBP                             ; 00545608
    POP EDI                             ; 00545609
    POP ESI                             ; 0054560a
    POP EBX                             ; 0054560b
    RET                                 ; 0054560c
    MOV ECX,0x11                        ; 0054560d
        ;   Label: LAB_0054560d
    MOV EBX,0xa                         ; 00545612
    MOV ESI,0x7f                        ; 00545617
    MOV EDI,0x3f80                      ; 0054561c
    MOV EDX,0x7                         ; 00545621
    MOV dword ptr [0x005bf550],ECX      ; 00545626 | g_TextureShift1
    MOV dword ptr [0x005bf570],EBX      ; 0054562c | g_TextureShift2
    MOV dword ptr [0x005bf590],ESI      ; 00545632 | g_TextureMask1
    MOV dword ptr [0x005bf5b0],EDI      ; 00545638 | g_TextureMask2
    MOV dword ptr [0x01c02590],EDX      ; 0054563e | g_TextureBits
    ADD ESP,0x10                        ; 00545644
    POP EBP                             ; 00545647
    POP EDI                             ; 00545648
    POP ESI                             ; 00545649
    POP EBX                             ; 0054564a
    RET                                 ; 0054564b
    MOV EAX,0x12                        ; 0054564c
        ;   Label: LAB_0054564c
    MOV EDX,0xc                         ; 00545651
    MOV ECX,0x3f                        ; 00545656
    MOV EBX,0xfc0                       ; 0054565b
    MOV EBP,0x6                         ; 00545660
    MOV [0x005bf550],EAX                ; 00545665 | g_TextureShift1
    MOV dword ptr [0x005bf570],EDX      ; 0054566a | g_TextureShift2
    MOV dword ptr [0x005bf590],ECX      ; 00545670 | g_TextureMask1
    MOV dword ptr [0x005bf5b0],EBX      ; 00545676 | g_TextureMask2
    MOV dword ptr [0x01c02590],EBP      ; 0054567c | g_TextureBits
    ADD ESP,0x10                        ; 00545682
    POP EBP                             ; 00545685
    POP EDI                             ; 00545686
    POP ESI                             ; 00545687
    POP EBX                             ; 00545688
    RET                                 ; 00545689
    MOV EDI,0x13                        ; 0054568a
        ;   Label: LAB_0054568a
    MOV EBP,0xe                         ; 0054568f
    MOV EAX,0x1f                        ; 00545694
    MOV EDX,0x3e0                       ; 00545699
    MOV ESI,0x5                         ; 0054569e
    MOV dword ptr [0x005bf550],EDI      ; 005456a3 | g_TextureShift1
    MOV dword ptr [0x005bf570],EBP      ; 005456a9 | g_TextureShift2
    MOV [0x005bf590],EAX                ; 005456af | g_TextureMask1
    MOV dword ptr [0x005bf5b0],EDX      ; 005456b4 | g_TextureMask2
    MOV dword ptr [0x01c02590],ESI      ; 005456ba | g_TextureBits
    ADD ESP,0x10                        ; 005456c0
    POP EBP                             ; 005456c3
    POP EDI                             ; 005456c4
    POP ESI                             ; 005456c5
    POP EBX                             ; 005456c6
    RET                                 ; 005456c7
    JBE 0x0054564c                      ; 005456c8
        ;   XREF to: 0054564c (CONDITIONAL_JUMP)  ; LAB_0054564c
        ;   Label: LAB_005456c8
    CMP EAX,0x80                        ; 005456ca
    JC 0x005454e5                       ; 005456cf
        ;   XREF to: 005454e5 (CONDITIONAL_JUMP)  ; LAB_005454e5
    JBE 0x0054560d                      ; 005456d5
        ;   XREF to: 0054560d (CONDITIONAL_JUMP)  ; LAB_0054560d
    CMP EAX,0x100                       ; 005456db
    JZ 0x005455d4                       ; 005456e0
        ;   XREF to: 005455d4 (CONDITIONAL_JUMP)  ; LAB_005455d4
    ADD ESP,0x10                        ; 005456e6
    POP EBP                             ; 005456e9
    POP EDI                             ; 005456ea
    POP ESI                             ; 005456eb
    POP EBX                             ; 005456ec
    RET                                 ; 005456ed

