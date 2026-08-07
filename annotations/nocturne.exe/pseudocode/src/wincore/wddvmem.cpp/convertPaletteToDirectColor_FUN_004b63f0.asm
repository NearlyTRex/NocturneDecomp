; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_special.cpp_FUN_005325c0 at 005325e6
;   engine_special.cpp_setResolutionAndColorTable_FUN_005324a0 at 0053250e
;   wincore_wddvmem.cpp_analyzePixelFormat_FUN_00553620 at 005537ba
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0 at 005538e3
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   _MMX_INTEGER g_RedMask16
;   _MMX_INTEGER g_GreenMask16
;   _MMX_INTEGER g_BlueMask16
;   _MMX_INTEGER g_RedMask32
;   _MMX_INTEGER g_GreenMask32
;   _MMX_INTEGER g_BlueMask32
;   undefined4 DAT_005bf618
;   undefined4 DAT_005bf638
;   undefined4 DAT_005bf658
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_RedDitherShift
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b63f0
        ;   Label: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0
    PUSH ESI                            ; 004b63f1
    PUSH EDI                            ; 004b63f2
    PUSH EBP                            ; 004b63f3
    SUB ESP,0x8                         ; 004b63f4
    CMP dword ptr [0x005b7624],0x10     ; 004b63f7 | g_BitsPerPixel
    JNZ 0x004b652f                      ; 004b63fe
        ;   XREF to: 004b652f (CONDITIONAL_JUMP)  ; LAB_004b652f
    XOR EBX,EBX                         ; 004b6404
    XOR ESI,ESI                         ; 004b6406
    XOR EAX,EAX                         ; 004b6408
        ;   Label: LAB_004b6408
    MOV EDI,dword ptr [0x01c00628]      ; 004b640a | g_RedScaleFactor
    MOV AL,byte ptr [EBX + 0x1c00648]   ; 004b6410 | g_SourcePaletteData
    XOR EDX,EDX                         ; 004b6416
    MOV dword ptr [ESP],EAX             ; 004b6418
    DIV EDI                             ; 004b641b
    MOVZX EBP,byte ptr [EBX + 0x1c00649] ; 004b641d | g_SourcePaletteData+4
    MOV dword ptr [ESP + 0x4],EBP       ; 004b6424
    MOV dword ptr [ESP],EAX             ; 004b6428
    XOR EDX,EDX                         ; 004b642b
    MOV EAX,EBP                         ; 004b642d
    DIV dword ptr [0x01c00634]          ; 004b642f | g_GreenScaleFactor
    XOR ECX,ECX                         ; 004b6435
    MOV CL,byte ptr [EBX + 0x1c0064a]   ; 004b6437 | g_SourcePaletteData+5
    MOV dword ptr [ESP + 0x4],EAX       ; 004b643d
    XOR EDX,EDX                         ; 004b6441
    MOV EAX,ECX                         ; 004b6443
    DIV dword ptr [0x01c00640]          ; 004b6445 | g_BlueScaleFactor
    MOV EDX,dword ptr [ESP]             ; 004b644b
    MOV CL,byte ptr [0x01c00624]        ; 004b644e | g_RedBitPosition
    MOV EDI,EAX                         ; 004b6454
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b6456
    SHL EDX,CL                          ; 004b645a
    MOV CL,byte ptr [0x01c00630]        ; 004b645c | g_GreenBitPosition
    SHL EAX,CL                          ; 004b6462
    MOV CL,byte ptr [0x01c0063c]        ; 004b6464 | g_BlueBitPosition
    OR EDX,EAX                          ; 004b646a
    MOV EAX,EDI                         ; 004b646c
    SHL EAX,CL                          ; 004b646e
    ADD ESI,0x2                         ; 004b6470
    OR EAX,EDX                          ; 004b6473
    ADD EBX,0x3                         ; 004b6475
    MOV word ptr [ESI + 0x1bff71e],AX   ; 004b6478
    CMP ESI,0x200                       ; 004b647f
    JNZ 0x004b6408                      ; 004b6485
        ;   XREF to: 004b6408 (CONDITIONAL_JUMP)  ; LAB_004b6408
    MOV EAX,0xff                        ; 004b6487
    MOV CL,byte ptr [0x01c0062c]        ; 004b648c | g_RedDitherShift
    SHR EAX,CL                          ; 004b6492
    MOV ECX,dword ptr [0x01c00624]      ; 004b6494 | g_RedBitPosition
    MOV EBX,EAX                         ; 004b649a
    SHL EBX,CL                          ; 004b649c
    MOV CL,byte ptr [0x01c00638]        ; 004b649e | g_GreenDitherShift
    MOV dword ptr [0x005bf5b8],EBX      ; 004b64a4 | g_RedMask16
    MOV EBX,0xff                        ; 004b64aa
    SHR EBX,CL                          ; 004b64af
    MOV ECX,dword ptr [0x01c00630]      ; 004b64b1 | g_GreenBitPosition
    MOV ESI,EBX                         ; 004b64b7
    SHL ESI,CL                          ; 004b64b9
    MOV CL,byte ptr [0x01c00644]        ; 004b64bb | g_BlueDitherShift
    MOV dword ptr [0x005bf5c0],ESI      ; 004b64c1 | g_GreenMask16
    MOV ESI,0xff                        ; 004b64c7
    SHR ESI,CL                          ; 004b64cc
    MOV ECX,dword ptr [0x01c0063c]      ; 004b64ce | g_BlueBitPosition
    MOV EDI,ESI                         ; 004b64d4
    SHL EDI,CL                          ; 004b64d6
    MOV CL,byte ptr [0x01c0062c]        ; 004b64d8 | g_RedDitherShift
    MOV dword ptr [0x005bf5c8],EDI      ; 004b64de | g_BlueMask16
    SHL EAX,CL                          ; 004b64e4
    MOV CL,byte ptr [0x01c00638]        ; 004b64e6 | g_GreenDitherShift
    SHL EAX,0x10                        ; 004b64ec
    SHL EBX,CL                          ; 004b64ef
    MOV [0x005bf5d0],EAX                ; 004b64f1 | g_RedMask32
    SHL EBX,0x8                         ; 004b64f6
    MOV EAX,[0x01c0062c]                ; 004b64f9 | g_RedDitherShift
    MOV dword ptr [0x005bf5f0],EBX      ; 004b64fe | g_GreenMask32
    MOV EBX,dword ptr [0x01c00638]      ; 004b6504 | g_GreenDitherShift
    MOV ECX,dword ptr [0x01c00644]      ; 004b650a | g_BlueDitherShift
    ADD EAX,EBX                         ; 004b6510
    MOV dword ptr [0x005bf658],ECX      ; 004b6512 | DAT_005bf658
    ADD EAX,ECX                         ; 004b6518
    SHL ESI,CL                          ; 004b651a
    MOV [0x005bf618],EAX                ; 004b651c | DAT_005bf618
    LEA EAX,[EBX + ECX*0x1]             ; 004b6521
    MOV dword ptr [0x005bf610],ESI      ; 004b6524 | g_BlueMask32
    MOV [0x005bf638],EAX                ; 004b652a | DAT_005bf638
    CMP dword ptr [0x005b7624],0x20     ; 004b652f | g_BitsPerPixel
        ;   Label: LAB_004b652f
    JNZ 0x004b658d                      ; 004b6536
        ;   XREF to: 004b658d (CONDITIONAL_JUMP)  ; LAB_004b658d
    MOV EDX,dword ptr [0x005b7624]      ; 004b6538 | g_BitsPerPixel
    XOR EAX,EAX                         ; 004b653e
    XOR EBX,EBX                         ; 004b6540
    MOVZX EDI,byte ptr [EBX + 0x1c00649] ; 004b6542 | g_SourcePaletteData+4
        ;   Label: LAB_004b6542
    MOVZX ESI,byte ptr [EBX + 0x1c0064a] ; 004b6549 | g_SourcePaletteData+5
    MOVZX EBP,byte ptr [EBX + 0x1c00648] ; 004b6550 | g_SourcePaletteData
    CMP EDX,0x20                        ; 004b6557
    JNZ 0x004b6595                      ; 004b655a
        ;   XREF to: 004b6595 (CONDITIONAL_JUMP)  ; LAB_004b6595
    MOV CL,byte ptr [0x01c00624]        ; 004b655c | g_RedBitPosition
    SHL EBP,CL                          ; 004b6562
    MOV CL,byte ptr [0x01c00630]        ; 004b6564 | g_GreenBitPosition
    SHL EDI,CL                          ; 004b656a
    MOV CL,byte ptr [0x01c0063c]        ; 004b656c | g_BlueBitPosition
    SHL ESI,CL                          ; 004b6572
    OR EDI,EBP                          ; 004b6574
    MOV ECX,ESI                         ; 004b6576
    OR ECX,EDI                          ; 004b6578
    ADD EAX,0x4                         ; 004b657a
        ;   Label: LAB_004b657a
    ADD EBX,0x3                         ; 004b657d
    MOV dword ptr [EAX + 0x1bff91c],ECX ; 004b6580
    CMP EAX,0x400                       ; 004b6586
    JNZ 0x004b6542                      ; 004b658b
        ;   XREF to: 004b6542 (CONDITIONAL_JUMP)  ; LAB_004b6542
    ADD ESP,0x8                         ; 004b658d
        ;   Label: LAB_004b658d
    POP EBP                             ; 004b6590
    POP EDI                             ; 004b6591
    POP ESI                             ; 004b6592
    POP EBX                             ; 004b6593
    RET                                 ; 004b6594
    MOV ECX,EBP                         ; 004b6595
        ;   Label: LAB_004b6595
    SHL EDI,0x8                         ; 004b6597
    SHL ECX,0x10                        ; 004b659a
    OR ECX,EDI                          ; 004b659d
    OR ECX,ESI                          ; 004b659f
    JMP 0x004b657a                      ; 004b65a1
        ;   XREF to: 004b657a (UNCONDITIONAL_JUMP)  ; LAB_004b657a

