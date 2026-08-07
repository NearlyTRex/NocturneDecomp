; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004b6220(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   _MMX_INTEGER g_RedMask16
;   _MMX_INTEGER g_GreenMask16
;   _MMX_INTEGER g_BlueMask16
;   _MMX_INTEGER g_RedMask32
;   _MMX_INTEGER g_GreenMask32
;   _MMX_INTEGER g_BlueMask32
;   undefined4 DAT_005bf618
;   undefined4 DAT_005bf638
;   undefined4 DAT_005bf658
;   ushort[256] g_ColorTable16
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_RedDitherShift
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6220
        ;   Label: wincore_wddvmem.cpp_initializeColorMasks_FUN_004b6220
    PUSH ESI                            ; 004b6221
    PUSH EDI                            ; 004b6222
    PUSH EBP                            ; 004b6223
    SUB ESP,0x8                         ; 004b6224
    XOR EBX,EBX                         ; 004b6227
    XOR ESI,ESI                         ; 004b6229
    XOR EAX,EAX                         ; 004b622b
        ;   Label: LAB_004b622b
    MOV EDI,dword ptr [0x01c00628]      ; 004b622d | g_RedScaleFactor
    MOV AL,byte ptr [EBX + 0x1c00648]   ; 004b6233 | g_SourcePaletteData
    XOR EDX,EDX                         ; 004b6239
    MOV dword ptr [ESP],EAX             ; 004b623b
    DIV EDI                             ; 004b623e
    XOR ECX,ECX                         ; 004b6240
    MOV CL,byte ptr [EBX + 0x1c00649]   ; 004b6242 | g_SourcePaletteData+4
    MOV dword ptr [ESP],EAX             ; 004b6248
    XOR EDX,EDX                         ; 004b624b
    MOV EAX,ECX                         ; 004b624d
    DIV dword ptr [0x01c00634]          ; 004b624f | g_GreenScaleFactor
    MOVZX EBP,byte ptr [EBX + 0x1c0064a] ; 004b6255 | g_SourcePaletteData+5
    MOV dword ptr [ESP + 0x4],EBP       ; 004b625c
    MOV EDI,EAX                         ; 004b6260
    XOR EDX,EDX                         ; 004b6262
    MOV EAX,EBP                         ; 004b6264
    DIV dword ptr [0x01c00640]          ; 004b6266 | g_BlueScaleFactor
    MOV CL,byte ptr [0x01c00624]        ; 004b626c | g_RedBitPosition
    MOV dword ptr [ESP + 0x4],EAX       ; 004b6272
    MOV EAX,dword ptr [ESP]             ; 004b6276
    SHL EAX,CL                          ; 004b6279
    MOV CL,byte ptr [0x01c00630]        ; 004b627b | g_GreenBitPosition
    SHL EDI,CL                          ; 004b6281
    MOV CL,byte ptr [0x01c0063c]        ; 004b6283 | g_BlueBitPosition
    OR EDI,EAX                          ; 004b6289
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b628b
    SHL EAX,CL                          ; 004b628f
    ADD ESI,0x2                         ; 004b6291
    OR EAX,EDI                          ; 004b6294
    ADD EBX,0x3                         ; 004b6296
    MOV word ptr [ESI + 0x1bff71e],AX   ; 004b6299 | g_ColorTable16
    CMP ESI,0x200                       ; 004b62a0
    JNZ 0x004b622b                      ; 004b62a6
        ;   XREF to: 004b622b (CONDITIONAL_JUMP)  ; LAB_004b622b
    MOV ESI,0xff                        ; 004b62a8
    MOV CL,byte ptr [0x01c0062c]        ; 004b62ad | g_RedDitherShift
    SHR ESI,CL                          ; 004b62b3
    MOV ECX,dword ptr [0x01c00624]      ; 004b62b5 | g_RedBitPosition
    MOV EAX,ESI                         ; 004b62bb
    MOV EBX,0xff                        ; 004b62bd
    SHL EAX,CL                          ; 004b62c2
    MOV CL,byte ptr [0x01c00638]        ; 004b62c4 | g_GreenDitherShift
    MOV [0x005bf5b8],EAX                ; 004b62ca | g_RedMask16
    SHR EBX,CL                          ; 004b62cf
    MOV ECX,dword ptr [0x01c00630]      ; 004b62d1 | g_GreenBitPosition
    MOV EAX,EBX                         ; 004b62d7
    SHL EAX,CL                          ; 004b62d9
    MOV CL,byte ptr [0x01c00644]        ; 004b62db | g_BlueDitherShift
    MOV [0x005bf5c0],EAX                ; 004b62e1 | g_GreenMask16
    MOV EAX,0xff                        ; 004b62e6
    SHR EAX,CL                          ; 004b62eb
    MOV ECX,dword ptr [0x01c0063c]      ; 004b62ed | g_BlueBitPosition
    MOV EDI,EAX                         ; 004b62f3
    SHL EDI,CL                          ; 004b62f5
    MOV CL,byte ptr [0x01c0062c]        ; 004b62f7 | g_RedDitherShift
    SHL ESI,CL                          ; 004b62fd
    MOV CL,byte ptr [0x01c00638]        ; 004b62ff | g_GreenDitherShift
    MOV EDX,dword ptr [0x01c00638]      ; 004b6305 | g_GreenDitherShift
    SHL EBX,CL                          ; 004b630b
    MOV ECX,dword ptr [0x01c00644]      ; 004b630d | g_BlueDitherShift
    MOV dword ptr [0x005bf5c8],EDI      ; 004b6313 | g_BlueMask16
    SHL EAX,CL                          ; 004b6319
    SHL ESI,0x10                        ; 004b631b
    MOV [0x005bf610],EAX                ; 004b631e | g_BlueMask32
    MOV EAX,[0x01c0062c]                ; 004b6323 | g_RedDitherShift
    MOV dword ptr [0x005bf5d0],ESI      ; 004b6328 | g_RedMask32
    ADD EAX,EDX                         ; 004b632e
    SHL EBX,0x8                         ; 004b6330
    ADD EAX,ECX                         ; 004b6333
    MOV dword ptr [0x005bf5f0],EBX      ; 004b6335 | g_GreenMask32
    MOV [0x005bf618],EAX                ; 004b633b | DAT_005bf618
    LEA EAX,[EDX + ECX*0x1]             ; 004b6340
    MOV dword ptr [0x005bf658],ECX      ; 004b6343 | DAT_005bf658
    MOV [0x005bf638],EAX                ; 004b6349 | DAT_005bf638
    ADD ESP,0x8                         ; 004b634e
    POP EBP                             ; 004b6351
    POP EDI                             ; 004b6352
    POP ESI                             ; 004b6353
    POP EBX                             ; 004b6354
    LEA EAX,[EAX]                       ; 004b6355
    LEA EDX,[EDX]                       ; 004b635b
    MOV EBX,EBX                         ; 004b635e
    RET                                 ; 004b6360

