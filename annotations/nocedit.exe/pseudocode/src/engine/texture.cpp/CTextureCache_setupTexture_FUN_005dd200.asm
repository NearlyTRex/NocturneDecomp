; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200(CTextureCache * cache, int texture_index)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   cache
; int              Stack[0x8]:4   texture_index
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580 at 005dd5aa
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 at 005dd869
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentTextureDimension = 0x100
;   ulonglong g_TextureShift1 = 0x10
;   ulonglong g_TextureShift2 = 0x8
;   ulonglong g_TextureMask1 = 0xff
;   ulonglong g_TextureMask2 = 0xff00
;   byte* g_CurrentPalette
;   uint[256] g_Hardware32BitPalette
;   undefined4 g_GlobalPalette[1]
;   ushort[256] g_Hardware16BitPalette
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   int g_GreenBitPosition
;   int g_GreenScaleFactor
;   int g_BlueBitPosition
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dd200
        ;   Label: engine_texture.cpp_CTextureCache_setupTexture_FUN_005dd200
    PUSH ESI                            ; 005dd201
    PUSH EDI                            ; 005dd202
    PUSH EBP                            ; 005dd203
    SUB ESP,0xc                         ; 005dd204
    MOV EAX,dword ptr [ESP + 0x24]      ; 005dd207
    MOV EDX,dword ptr [ESP + 0x20]      ; 005dd20b
    SHL EAX,0x2                         ; 005dd20f
    ADD EAX,EDX                         ; 005dd212
    MOV ECX,dword ptr [EAX + 0x1008]    ; 005dd214
    MOV dword ptr [0x02d03e80],ECX      ; 005dd21a | void * g_CurrentTextureData
    MOV ECX,dword ptr [EAX + 0x2008]    ; 005dd220
    MOV dword ptr [0x02d03e84],ECX      ; 005dd226 | void * g_CurrentTextureOpacityData
    XOR ECX,ECX                         ; 005dd22c
    MOV ESI,dword ptr [0x02d03e94]      ; 005dd22e | int g_UseExternalRenderer
    MOV dword ptr [0x02d03e88],ECX      ; 005dd234 | int g_CurrentTextureOffsetU
    MOV dword ptr [0x02d03e8c],ECX      ; 005dd23a | int g_CurrentTextureOffsetV
    MOV ECX,dword ptr [EAX + 0x8]       ; 005dd240
    MOV EAX,dword ptr [EAX + 0x13008]   ; 005dd243
    MOV dword ptr [0x006793a4],ECX      ; 005dd249 | int g_CurrentTextureDimension
    MOV [0x02d01920],EAX                ; 005dd24f | byte * g_CurrentPalette
    TEST ESI,ESI                        ; 005dd254
    JNZ 0x005dd2b2                      ; 005dd256 | LAB_005dd2b2
        ;   XREF to: 005dd2b2 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x0067939c]      ; 005dd258 | int g_BitsPerPixel
    MOV EBX,EAX                         ; 005dd25e
    CMP EDI,0x20                        ; 005dd260
    JNZ 0x005dd2ec                      ; 005dd263 | LAB_005dd2ec
        ;   XREF to: 005dd2ec (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067939c]      ; 005dd269 | int g_BitsPerPixel
    XOR EAX,EAX                         ; 005dd26f
    MOVZX ESI,byte ptr [EBX + 0x1]      ; 005dd271
        ;   Label: LAB_005dd271
    MOVZX EBP,byte ptr [EBX]            ; 005dd275
    MOVZX EDI,byte ptr [EBX + 0x2]      ; 005dd278
    CMP EDX,0x20                        ; 005dd27c
    JNZ 0x005dd2de                      ; 005dd27f | LAB_005dd2de
        ;   XREF to: 005dd2de (CONDITIONAL_JUMP)
    MOV CL,byte ptr [0x02d01f24]        ; 005dd281 | int g_RedBitPosition
    SHL EBP,CL                          ; 005dd287
    MOV CL,byte ptr [0x02d01f30]        ; 005dd289 | int g_GreenBitPosition
    SHL ESI,CL                          ; 005dd28f
    MOV CL,byte ptr [0x02d01f3c]        ; 005dd291 | int g_BlueBitPosition
    SHL EDI,CL                          ; 005dd297
    OR ESI,EBP                          ; 005dd299
    MOV ECX,EDI                         ; 005dd29b
    OR ECX,ESI                          ; 005dd29d
    ADD EAX,0x4                         ; 005dd29f
        ;   Label: LAB_005dd29f
    ADD EBX,0x3                         ; 005dd2a2
    MOV dword ptr [EAX + 0x2d01920],ECX ; 005dd2a5 | uint[256] g_Hardware32BitPalette
    CMP EAX,0x400                       ; 005dd2ab
    JNZ 0x005dd271                      ; 005dd2b0 | LAB_005dd271
        ;   XREF to: 005dd271 (CONDITIONAL_JUMP)
    MOV EAX,[0x006793a4]                ; 005dd2b2 | int g_CurrentTextureDimension
        ;   Label: LAB_005dd2b2
    CMP EAX,0x80                        ; 005dd2b7
    JNC 0x005dd532                      ; 005dd2bc | LAB_005dd532
        ;   XREF to: 005dd532 (CONDITIONAL_JUMP)
    CMP EAX,0x20                        ; 005dd2c2
    JC 0x005dd2d6                       ; 005dd2c5 | LAB_005dd2d6
        ;   XREF to: 005dd2d6 (CONDITIONAL_JUMP)
    JBE 0x005dd4f4                      ; 005dd2c7 | LAB_005dd4f4
        ;   XREF to: 005dd4f4 (CONDITIONAL_JUMP)
    CMP EAX,0x40                        ; 005dd2cd
    JZ 0x005dd4b5                       ; 005dd2d0 | LAB_005dd4b5
        ;   XREF to: 005dd4b5 (CONDITIONAL_JUMP)
    ADD ESP,0xc                         ; 005dd2d6
        ;   Label: LAB_005dd2d6
    POP EBP                             ; 005dd2d9
    POP EDI                             ; 005dd2da
    POP ESI                             ; 005dd2db
    POP EBX                             ; 005dd2dc
    RET                                 ; 005dd2dd
    MOV ECX,ESI                         ; 005dd2de
        ;   Label: LAB_005dd2de
    SHL EBP,0x10                        ; 005dd2e0
    SHL ECX,0x8                         ; 005dd2e3
    OR ECX,EBP                          ; 005dd2e6
    OR ECX,EDI                          ; 005dd2e8
    JMP 0x005dd29f                      ; 005dd2ea | LAB_005dd29f
        ;   XREF to: 005dd29f (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x8],ESI       ; 005dd2ec
        ;   Label: LAB_005dd2ec
    MOV EDI,dword ptr [0x02d01f28]      ; 005dd2f0 | int g_RedScaleFactor
        ;   Label: LAB_005dd2f0
    XOR EAX,EAX                         ; 005dd2f6
    XOR EDX,EDX                         ; 005dd2f8
    MOV AL,byte ptr [EBX]               ; 005dd2fa
    DIV EDI                             ; 005dd2fc
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 005dd2fe
    MOV dword ptr [ESP],EBP             ; 005dd302
    MOV EDI,EAX                         ; 005dd305
    XOR EDX,EDX                         ; 005dd307
    MOV EAX,EBP                         ; 005dd309
    DIV dword ptr [0x02d01f34]          ; 005dd30b | int g_GreenScaleFactor
    XOR ECX,ECX                         ; 005dd311
    MOV CL,byte ptr [EBX + 0x2]         ; 005dd313
    MOV dword ptr [ESP + 0x4],ECX       ; 005dd316
    MOV dword ptr [ESP],EAX             ; 005dd31a
    XOR EDX,EDX                         ; 005dd31d
    MOV EAX,ECX                         ; 005dd31f
    DIV dword ptr [0x02d01f40]          ; 005dd321 | int g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 005dd327 | int g_RedBitPosition
    MOV dword ptr [ESP + 0x4],EAX       ; 005dd32d
    MOV EAX,dword ptr [ESP]             ; 005dd331
    SHL EDI,CL                          ; 005dd334
    MOV CL,byte ptr [0x02d01f30]        ; 005dd336 | int g_GreenBitPosition
    SHL EAX,CL                          ; 005dd33c
    MOV CL,byte ptr [0x02d01f3c]        ; 005dd33e | int g_BlueBitPosition
    OR EAX,EDI                          ; 005dd344
    MOV EDI,dword ptr [ESP + 0x4]       ; 005dd346
    SHL EDI,CL                          ; 005dd34a
    OR EAX,EDI                          ; 005dd34c
    MOV word ptr [ESI + 0x2d01d24],AX   ; 005dd34e | ushort[256] g_Hardware16BitPalette
    MOV EDX,dword ptr [0x0067939c]      ; 005dd355 | int g_BitsPerPixel
    MOVZX EBP,byte ptr [EBX + 0x2]      ; 005dd35b
    XOR EAX,EAX                         ; 005dd35f
    MOVZX EDI,byte ptr [EBX + 0x1]      ; 005dd361
    MOV AL,byte ptr [EBX]               ; 005dd365
    CMP EDX,0x20                        ; 005dd367
    JNZ 0x005dd3b2                      ; 005dd36a | LAB_005dd3b2
        ;   XREF to: 005dd3b2 (CONDITIONAL_JUMP)
    MOV CL,byte ptr [0x02d01f24]        ; 005dd36c | int g_RedBitPosition
    SHL EAX,CL                          ; 005dd372
    MOV CL,byte ptr [0x02d01f30]        ; 005dd374 | int g_GreenBitPosition
    SHL EDI,CL                          ; 005dd37a
    MOV CL,byte ptr [0x02d01f3c]        ; 005dd37c | int g_BlueBitPosition
    SHL EBP,CL                          ; 005dd382
    OR EAX,EDI                          ; 005dd384
    MOV ECX,EBP                         ; 005dd386
    OR ECX,EAX                          ; 005dd388
    MOV EAX,dword ptr [ESP + 0x8]       ; 005dd38a
        ;   Label: LAB_005dd38a
    ADD EBX,0x3                         ; 005dd38e
    MOV dword ptr [EAX + 0x2d01924],ECX ; 005dd391 | uint[256] g_Hardware32BitPalette
    LEA ECX,[EAX + 0x4]                 ; 005dd397
    ADD ESI,0x2                         ; 005dd39a
    MOV dword ptr [ESP + 0x8],ECX       ; 005dd39d
    CMP ESI,0x200                       ; 005dd3a1
    JZ 0x005dd2b2                       ; 005dd3a7 | LAB_005dd2b2
        ;   XREF to: 005dd2b2 (CONDITIONAL_JUMP)
    JMP 0x005dd2f0                      ; 005dd3ad | LAB_005dd2f0
        ;   XREF to: 005dd2f0 (UNCONDITIONAL_JUMP)
    MOV ECX,EDI                         ; 005dd3b2
        ;   Label: LAB_005dd3b2
    SHL EAX,0x10                        ; 005dd3b4
    SHL ECX,0x8                         ; 005dd3b7
    OR ECX,EAX                          ; 005dd3ba
    OR ECX,EBP                          ; 005dd3bc
    JMP 0x005dd38a                      ; 005dd3be | LAB_005dd38a
        ;   XREF to: 005dd38a (UNCONDITIONAL_JUMP)
    MOV EBX,0xe                         ; 005dd3c0
        ;   Label: LAB_005dd3c0
    MOV ESI,0x4                         ; 005dd3c5
    MOV EDI,0x3ff                       ; 005dd3ca
    MOV EBP,0xffc00                     ; 005dd3cf
    MOV ECX,0xa                         ; 005dd3d4
    MOV dword ptr [0x006826e0],EBX      ; 005dd3d9 | ulonglong g_TextureShift1
    MOV dword ptr [0x00682700],ESI      ; 005dd3df | ulonglong g_TextureShift2
    MOV dword ptr [0x00682720],EDI      ; 005dd3e5 | ulonglong g_TextureMask1
    MOV dword ptr [0x00682740],EBP      ; 005dd3eb | ulonglong g_TextureMask2
    MOV dword ptr [0x02d03e90],ECX      ; 005dd3f1 | int g_TextureBits
    ADD ESP,0xc                         ; 005dd3f7
    POP EBP                             ; 005dd3fa
    POP EDI                             ; 005dd3fb
    POP ESI                             ; 005dd3fc
    POP EBX                             ; 005dd3fd
    RET                                 ; 005dd3fe
    MOV EDX,0xf                         ; 005dd3ff
        ;   Label: LAB_005dd3ff
    MOV ECX,0x6                         ; 005dd404
    MOV EBX,0x1ff                       ; 005dd409
    MOV ESI,0x3fe00                     ; 005dd40e
    MOV EAX,0x9                         ; 005dd413
    MOV dword ptr [0x006826e0],EDX      ; 005dd418 | ulonglong g_TextureShift1
    MOV dword ptr [0x00682700],ECX      ; 005dd41e | ulonglong g_TextureShift2
    MOV dword ptr [0x00682720],EBX      ; 005dd424 | ulonglong g_TextureMask1
    MOV dword ptr [0x00682740],ESI      ; 005dd42a | ulonglong g_TextureMask2
    MOV [0x02d03e90],EAX                ; 005dd430 | int g_TextureBits
    ADD ESP,0xc                         ; 005dd435
    POP EBP                             ; 005dd438
    POP EDI                             ; 005dd439
    POP ESI                             ; 005dd43a
    POP EBX                             ; 005dd43b
    RET                                 ; 005dd43c
    MOV EBP,0x10                        ; 005dd43d
        ;   Label: LAB_005dd43d
    MOV EDI,0x8                         ; 005dd442
    MOV EDX,0xff                        ; 005dd447
    MOV ECX,0xff00                      ; 005dd44c
    MOV dword ptr [0x006826e0],EBP      ; 005dd451 | ulonglong g_TextureShift1
    MOV dword ptr [0x00682700],EDI      ; 005dd457 | ulonglong g_TextureShift2
    MOV dword ptr [0x00682720],EDX      ; 005dd45d | ulonglong g_TextureMask1
    MOV dword ptr [0x00682740],ECX      ; 005dd463 | ulonglong g_TextureMask2
    MOV dword ptr [0x02d03e90],EDI      ; 005dd469 | int g_TextureBits
    ADD ESP,0xc                         ; 005dd46f
    POP EBP                             ; 005dd472
    POP EDI                             ; 005dd473
    POP ESI                             ; 005dd474
    POP EBX                             ; 005dd475
    RET                                 ; 005dd476
    MOV ESI,0x11                        ; 005dd477
        ;   Label: LAB_005dd477
    MOV EDI,0xa                         ; 005dd47c
    MOV EBP,0x7f                        ; 005dd481
    MOV EAX,0x3f80                      ; 005dd486
    MOV EBX,0x7                         ; 005dd48b
    MOV dword ptr [0x006826e0],ESI      ; 005dd490 | ulonglong g_TextureShift1
    MOV dword ptr [0x00682700],EDI      ; 005dd496 | ulonglong g_TextureShift2
    MOV dword ptr [0x00682720],EBP      ; 005dd49c | ulonglong g_TextureMask1
    MOV [0x00682740],EAX                ; 005dd4a2 | ulonglong g_TextureMask2
    MOV dword ptr [0x02d03e90],EBX      ; 005dd4a7 | int g_TextureBits
    ADD ESP,0xc                         ; 005dd4ad
    POP EBP                             ; 005dd4b0
    POP EDI                             ; 005dd4b1
    POP ESI                             ; 005dd4b2
    POP EBX                             ; 005dd4b3
    RET                                 ; 005dd4b4
    MOV ECX,0x12                        ; 005dd4b5
        ;   Label: LAB_005dd4b5
    MOV EBX,0xc                         ; 005dd4ba
    MOV ESI,0x3f                        ; 005dd4bf
    MOV EDI,0xfc0                       ; 005dd4c4
    MOV EDX,0x6                         ; 005dd4c9
    MOV dword ptr [0x006826e0],ECX      ; 005dd4ce | ulonglong g_TextureShift1
    MOV dword ptr [0x00682700],EBX      ; 005dd4d4 | ulonglong g_TextureShift2
    MOV dword ptr [0x00682720],ESI      ; 005dd4da | ulonglong g_TextureMask1
    MOV dword ptr [0x00682740],EDI      ; 005dd4e0 | ulonglong g_TextureMask2
    MOV dword ptr [0x02d03e90],EDX      ; 005dd4e6 | int g_TextureBits
    ADD ESP,0xc                         ; 005dd4ec
    POP EBP                             ; 005dd4ef
    POP EDI                             ; 005dd4f0
    POP ESI                             ; 005dd4f1
    POP EBX                             ; 005dd4f2
    RET                                 ; 005dd4f3
    MOV EAX,0x13                        ; 005dd4f4
        ;   Label: LAB_005dd4f4
    MOV EDX,0xe                         ; 005dd4f9
    MOV ECX,0x1f                        ; 005dd4fe
    MOV EBX,0x3e0                       ; 005dd503
    MOV EBP,0x5                         ; 005dd508
    MOV [0x006826e0],EAX                ; 005dd50d | ulonglong g_TextureShift1
    MOV dword ptr [0x00682700],EDX      ; 005dd512 | ulonglong g_TextureShift2
    MOV dword ptr [0x00682720],ECX      ; 005dd518 | ulonglong g_TextureMask1
    MOV dword ptr [0x00682740],EBX      ; 005dd51e | ulonglong g_TextureMask2
    MOV dword ptr [0x02d03e90],EBP      ; 005dd524 | int g_TextureBits
    ADD ESP,0xc                         ; 005dd52a
    POP EBP                             ; 005dd52d
    POP EDI                             ; 005dd52e
    POP ESI                             ; 005dd52f
    POP EBX                             ; 005dd530
    RET                                 ; 005dd531
    JBE 0x005dd477                      ; 005dd532 | LAB_005dd477
        ;   Label: LAB_005dd532
        ;   XREF to: 005dd477 (CONDITIONAL_JUMP)
    CMP EAX,0x200                       ; 005dd538
    JNC 0x005dd552                      ; 005dd53d | LAB_005dd552
        ;   XREF to: 005dd552 (CONDITIONAL_JUMP)
    CMP EAX,0x100                       ; 005dd53f
    JZ 0x005dd43d                       ; 005dd544 | LAB_005dd43d
        ;   XREF to: 005dd43d (CONDITIONAL_JUMP)
    ADD ESP,0xc                         ; 005dd54a
    POP EBP                             ; 005dd54d
    POP EDI                             ; 005dd54e
    POP ESI                             ; 005dd54f
    POP EBX                             ; 005dd550
    RET                                 ; 005dd551
    JBE 0x005dd3ff                      ; 005dd552 | LAB_005dd3ff
        ;   Label: LAB_005dd552
        ;   XREF to: 005dd3ff (CONDITIONAL_JUMP)
    CMP EAX,0x400                       ; 005dd558
    JZ 0x005dd3c0                       ; 005dd55d | LAB_005dd3c0
        ;   XREF to: 005dd3c0 (CONDITIONAL_JUMP)
    ADD ESP,0xc                         ; 005dd563
    POP EBP                             ; 005dd566
    POP EDI                             ; 005dd567
    POP ESI                             ; 005dd568
    POP EBX                             ; 005dd569
    RET                                 ; 005dd56a

