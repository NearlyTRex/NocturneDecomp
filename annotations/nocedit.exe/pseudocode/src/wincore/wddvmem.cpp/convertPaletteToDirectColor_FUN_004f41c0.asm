; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730 at 005ed8ca
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0 at 005ed9f3
;   wincore_windll.cpp_setColorTable16_FUN_005b7579 at 005b75a6
;   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460 at 005b74ce
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   uint g_RedMask16 = 0xf800
;   uint g_GreenMask16 = 0x7e0
;   uint g_BlueMask16 = 0x1f
;   ulonglong g_RedMask32 = 0xf80000
;   ulonglong g_GreenMask32 = 0xfc00
;   ulonglong g_BlueMask32 = 0xf8
;   ulonglong g_TotalColorBits = 0x8
;   ulonglong g_GreenBlueBits = 0x5
;   ulonglong g_BlueBitShift = 0x3
;   ushort[256] g_ColorTable16
;   uint[256] g_ColorTable32
;   undefined4 g_ColorTable32[1]
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f41c0
        ;   Label: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
    PUSH ESI                            ; 004f41c1
    PUSH EDI                            ; 004f41c2
    PUSH EBP                            ; 004f41c3
    SUB ESP,0x8                         ; 004f41c4
    CMP dword ptr [0x0067939c],0x10     ; 004f41c7 | g_BitsPerPixel
    JNZ 0x004f42ff                      ; 004f41ce
        ;   XREF to: 004f42ff (CONDITIONAL_JUMP)  ; LAB_004f42ff
    XOR EBX,EBX                         ; 004f41d4
    XOR ESI,ESI                         ; 004f41d6
    XOR EAX,EAX                         ; 004f41d8
        ;   Label: LAB_004f41d8
    MOV EDI,dword ptr [0x02d01f28]      ; 004f41da | g_RedScaleFactor
    MOV AL,byte ptr [EBX + 0x2d01f48]   ; 004f41e0 | g_SourcePaletteData | CHAR_ARRAY_02d01f4b
    XOR EDX,EDX                         ; 004f41e6
    MOV dword ptr [ESP],EAX             ; 004f41e8
    DIV EDI                             ; 004f41eb
    MOVZX EBP,byte ptr [EBX + 0x2d01f49] ; 004f41ed | CHAR_ARRAY_02d01f49 | CHAR_ARRAY_02d01f4c
    MOV dword ptr [ESP + 0x4],EBP       ; 004f41f4
    MOV dword ptr [ESP],EAX             ; 004f41f8
    XOR EDX,EDX                         ; 004f41fb
    MOV EAX,EBP                         ; 004f41fd
    DIV dword ptr [0x02d01f34]          ; 004f41ff | g_GreenScaleFactor
    XOR ECX,ECX                         ; 004f4205
    MOV CL,byte ptr [EBX + 0x2d01f4a]   ; 004f4207 | CHAR_ARRAY_02d01f4a | CHAR_ARRAY_02d01f4d
    MOV dword ptr [ESP + 0x4],EAX       ; 004f420d
    XOR EDX,EDX                         ; 004f4211
    MOV EAX,ECX                         ; 004f4213
    DIV dword ptr [0x02d01f40]          ; 004f4215 | g_BlueScaleFactor
    MOV EDX,dword ptr [ESP]             ; 004f421b
    MOV CL,byte ptr [0x02d01f24]        ; 004f421e | g_RedBitPosition
    MOV EDI,EAX                         ; 004f4224
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4226
    SHL EDX,CL                          ; 004f422a
    MOV CL,byte ptr [0x02d01f30]        ; 004f422c | g_GreenBitPosition
    SHL EAX,CL                          ; 004f4232
    MOV CL,byte ptr [0x02d01f3c]        ; 004f4234 | g_BlueBitPosition
    OR EDX,EAX                          ; 004f423a
    MOV EAX,EDI                         ; 004f423c
    SHL EAX,CL                          ; 004f423e
    ADD ESI,0x2                         ; 004f4240
    OR EAX,EDX                          ; 004f4243
    ADD EBX,0x3                         ; 004f4245
    MOV word ptr [ESI + 0x2d0101e],AX   ; 004f4248 | g_ColorTable16
    CMP ESI,0x200                       ; 004f424f
    JNZ 0x004f41d8                      ; 004f4255
        ;   XREF to: 004f41d8 (CONDITIONAL_JUMP)  ; LAB_004f41d8
    MOV EAX,0xff                        ; 004f4257
    MOV CL,byte ptr [0x02d01f2c]        ; 004f425c | g_RedBitCount
    SHR EAX,CL                          ; 004f4262
    MOV ECX,dword ptr [0x02d01f24]      ; 004f4264 | g_RedBitPosition
    MOV EBX,EAX                         ; 004f426a
    SHL EBX,CL                          ; 004f426c
    MOV CL,byte ptr [0x02d01f38]        ; 004f426e | g_GreenBitCount
    MOV dword ptr [0x00682748],EBX      ; 004f4274 | g_RedMask16
    MOV EBX,0xff                        ; 004f427a
    SHR EBX,CL                          ; 004f427f
    MOV ECX,dword ptr [0x02d01f30]      ; 004f4281 | g_GreenBitPosition
    MOV ESI,EBX                         ; 004f4287
    SHL ESI,CL                          ; 004f4289
    MOV CL,byte ptr [0x02d01f44]        ; 004f428b | g_BlueBitCount
    MOV dword ptr [0x00682750],ESI      ; 004f4291 | g_GreenMask16
    MOV ESI,0xff                        ; 004f4297
    SHR ESI,CL                          ; 004f429c
    MOV ECX,dword ptr [0x02d01f3c]      ; 004f429e | g_BlueBitPosition
    MOV EDI,ESI                         ; 004f42a4
    SHL EDI,CL                          ; 004f42a6
    MOV CL,byte ptr [0x02d01f2c]        ; 004f42a8 | g_RedBitCount
    MOV dword ptr [0x00682758],EDI      ; 004f42ae | g_BlueMask16
    SHL EAX,CL                          ; 004f42b4
    MOV CL,byte ptr [0x02d01f38]        ; 004f42b6 | g_GreenBitCount
    SHL EAX,0x10                        ; 004f42bc
    SHL EBX,CL                          ; 004f42bf
    MOV [0x00682760],EAX                ; 004f42c1 | g_RedMask32
    SHL EBX,0x8                         ; 004f42c6
    MOV EAX,[0x02d01f2c]                ; 004f42c9 | g_RedBitCount
    MOV dword ptr [0x00682780],EBX      ; 004f42ce | g_GreenMask32
    MOV EBX,dword ptr [0x02d01f38]      ; 004f42d4 | g_GreenBitCount
    MOV ECX,dword ptr [0x02d01f44]      ; 004f42da | g_BlueBitCount
    ADD EAX,EBX                         ; 004f42e0
    MOV dword ptr [0x006827e8],ECX      ; 004f42e2 | g_BlueBitShift
    ADD EAX,ECX                         ; 004f42e8
    SHL ESI,CL                          ; 004f42ea
    MOV [0x006827a8],EAX                ; 004f42ec | g_TotalColorBits
    LEA EAX,[EBX + ECX*0x1]             ; 004f42f1
    MOV dword ptr [0x006827a0],ESI      ; 004f42f4 | g_BlueMask32
    MOV [0x006827c8],EAX                ; 004f42fa | g_GreenBlueBits
    CMP dword ptr [0x0067939c],0x20     ; 004f42ff | g_BitsPerPixel
        ;   Label: LAB_004f42ff
    JNZ 0x004f435d                      ; 004f4306
        ;   XREF to: 004f435d (CONDITIONAL_JUMP)  ; LAB_004f435d
    MOV EDX,dword ptr [0x0067939c]      ; 004f4308 | g_BitsPerPixel
    XOR EAX,EAX                         ; 004f430e
    XOR EBX,EBX                         ; 004f4310
    MOVZX EDI,byte ptr [EBX + 0x2d01f49] ; 004f4312 | CHAR_ARRAY_02d01f49 | CHAR_ARRAY_02d01f4c
        ;   Label: LAB_004f4312
    MOVZX ESI,byte ptr [EBX + 0x2d01f4a] ; 004f4319 | CHAR_ARRAY_02d01f4a | CHAR_ARRAY_02d01f4d
    MOVZX EBP,byte ptr [EBX + 0x2d01f48] ; 004f4320 | g_SourcePaletteData | CHAR_ARRAY_02d01f4b
    CMP EDX,0x20                        ; 004f4327
    JNZ 0x004f4365                      ; 004f432a
        ;   XREF to: 004f4365 (CONDITIONAL_JUMP)  ; LAB_004f4365
    MOV CL,byte ptr [0x02d01f24]        ; 004f432c | g_RedBitPosition
    SHL EBP,CL                          ; 004f4332
    MOV CL,byte ptr [0x02d01f30]        ; 004f4334 | g_GreenBitPosition
    SHL EDI,CL                          ; 004f433a
    MOV CL,byte ptr [0x02d01f3c]        ; 004f433c | g_BlueBitPosition
    SHL ESI,CL                          ; 004f4342
    OR EDI,EBP                          ; 004f4344
    MOV ECX,ESI                         ; 004f4346
    OR ECX,EDI                          ; 004f4348
    ADD EAX,0x4                         ; 004f434a
        ;   Label: LAB_004f434a
    ADD EBX,0x3                         ; 004f434d
    MOV dword ptr [EAX + 0x2d0121c],ECX ; 004f4350 | g_ColorTable32 | g_ColorTable32[1]
    CMP EAX,0x400                       ; 004f4356
    JNZ 0x004f4312                      ; 004f435b
        ;   XREF to: 004f4312 (CONDITIONAL_JUMP)  ; LAB_004f4312
    ADD ESP,0x8                         ; 004f435d
        ;   Label: LAB_004f435d
    POP EBP                             ; 004f4360
    POP EDI                             ; 004f4361
    POP ESI                             ; 004f4362
    POP EBX                             ; 004f4363
    RET                                 ; 004f4364
    MOV ECX,EBP                         ; 004f4365
        ;   Label: LAB_004f4365
    SHL EDI,0x8                         ; 004f4367
    SHL ECX,0x10                        ; 004f436a
    OR ECX,EDI                          ; 004f436d
    OR ECX,ESI                          ; 004f436f
    JMP 0x004f434a                      ; 004f4371
        ;   XREF to: 004f434a (UNCONDITIONAL_JUMP)  ; LAB_004f434a

