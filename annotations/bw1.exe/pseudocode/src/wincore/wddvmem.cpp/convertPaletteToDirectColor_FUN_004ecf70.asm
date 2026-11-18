; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_special.cpp_setColorTable16_FUN_005822e0 at 00582306
;   engine_special.cpp_setResolutionAndColorTable_FUN_005821c0 at 0058222e
;   wincore_wddvmem.cpp_analyzePixelFormat_FUN_005acd00 at 005ace9a
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005acec0 at 005acfc3
;
; Referenced Globals:
;   int g_INT_0061b4a0 = 0x8
;   _MMX_INTEGER g_RedMask16
;   _MMX_INTEGER g_GreenMask16
;   _MMX_INTEGER g_BlueMask16
;   qword g_RedMask32 = 0xf80000
;   qword g_GreenMask32 = 0xfc00
;   qword g_BlueMask32 = 0xf8
;   qword g_TotalDitherShift = 0x8
;   qword g_GreenBlueDitherShift = 0x5
;   qword g_BlueBitShift = 0x3
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_RedDitherShift
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecf70
        ;   Label: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70
    PUSH ESI                            ; 004ecf71
    PUSH EDI                            ; 004ecf72
    PUSH EBP                            ; 004ecf73
    SUB ESP,0x8                         ; 004ecf74
    CMP dword ptr [0x0061b4a0],0x10     ; 004ecf77 | g_INT_0061b4a0
    JNZ 0x004ed0af                      ; 004ecf7e
        ;   XREF to: 004ed0af (CONDITIONAL_JUMP)  ; LAB_004ed0af
    XOR EBX,EBX                         ; 004ecf84
    XOR ESI,ESI                         ; 004ecf86
    XOR EAX,EAX                         ; 004ecf88
        ;   Label: LAB_004ecf88
    MOV EDI,dword ptr [0x01c4e9d8]      ; 004ecf8a | g_RedScaleFactor
    MOV AL,byte ptr [EBX + 0x1c4e9f8]   ; 004ecf90 | g_UCHAR_ARRAY_01c4e9f8
    XOR EDX,EDX                         ; 004ecf96
    MOV dword ptr [ESP],EAX             ; 004ecf98
    DIV EDI                             ; 004ecf9b
    MOVZX EBP,byte ptr [EBX + 0x1c4e9f9] ; 004ecf9d | g_UCHAR_ARRAY_01c4e9f8+1
    MOV dword ptr [ESP + 0x4],EBP       ; 004ecfa4
    MOV dword ptr [ESP],EAX             ; 004ecfa8
    XOR EDX,EDX                         ; 004ecfab
    MOV EAX,EBP                         ; 004ecfad
    DIV dword ptr [0x01c4e9e4]          ; 004ecfaf | g_GreenScaleFactor
    XOR ECX,ECX                         ; 004ecfb5
    MOV CL,byte ptr [EBX + 0x1c4e9fa]   ; 004ecfb7 | g_UCHAR_ARRAY_01c4e9f8+2
    MOV dword ptr [ESP + 0x4],EAX       ; 004ecfbd
    XOR EDX,EDX                         ; 004ecfc1
    MOV EAX,ECX                         ; 004ecfc3
    DIV dword ptr [0x01c4e9f0]          ; 004ecfc5 | g_BlueScaleFactor
    MOV EDX,dword ptr [ESP]             ; 004ecfcb
    MOV CL,byte ptr [0x01c4e9d4]        ; 004ecfce | g_RedBitPosition
    MOV EDI,EAX                         ; 004ecfd4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ecfd6
    SHL EDX,CL                          ; 004ecfda
    MOV CL,byte ptr [0x01c4e9e0]        ; 004ecfdc | g_GreenBitPosition
    SHL EAX,CL                          ; 004ecfe2
    MOV CL,byte ptr [0x01c4e9ec]        ; 004ecfe4 | g_BlueBitPosition
    OR EDX,EAX                          ; 004ecfea
    MOV EAX,EDI                         ; 004ecfec
    SHL EAX,CL                          ; 004ecfee
    ADD ESI,0x2                         ; 004ecff0
    OR EAX,EDX                          ; 004ecff3
    ADD EBX,0x3                         ; 004ecff5
    MOV word ptr [ESI + 0x1c4dace],AX   ; 004ecff8
    CMP ESI,0x200                       ; 004ecfff
    JNZ 0x004ecf88                      ; 004ed005
        ;   XREF to: 004ecf88 (CONDITIONAL_JUMP)  ; LAB_004ecf88
    MOV EAX,0xff                        ; 004ed007
    MOV CL,byte ptr [0x01c4e9dc]        ; 004ed00c | g_RedDitherShift
    SHR EAX,CL                          ; 004ed012
    MOV ECX,dword ptr [0x01c4e9d4]      ; 004ed014 | g_RedBitPosition
    MOV EBX,EAX                         ; 004ed01a
    SHL EBX,CL                          ; 004ed01c
    MOV CL,byte ptr [0x01c4e9e8]        ; 004ed01e | g_GreenDitherShift
    MOV dword ptr [0x00623f20],EBX      ; 004ed024 | g_RedMask16
    MOV EBX,0xff                        ; 004ed02a
    SHR EBX,CL                          ; 004ed02f
    MOV ECX,dword ptr [0x01c4e9e0]      ; 004ed031 | g_GreenBitPosition
    MOV ESI,EBX                         ; 004ed037
    SHL ESI,CL                          ; 004ed039
    MOV CL,byte ptr [0x01c4e9f4]        ; 004ed03b | g_BlueDitherShift
    MOV dword ptr [0x00623f28],ESI      ; 004ed041 | g_GreenMask16
    MOV ESI,0xff                        ; 004ed047
    SHR ESI,CL                          ; 004ed04c
    MOV ECX,dword ptr [0x01c4e9ec]      ; 004ed04e | g_BlueBitPosition
    MOV EDI,ESI                         ; 004ed054
    SHL EDI,CL                          ; 004ed056
    MOV CL,byte ptr [0x01c4e9dc]        ; 004ed058 | g_RedDitherShift
    MOV dword ptr [0x00623f30],EDI      ; 004ed05e | g_BlueMask16
    SHL EAX,CL                          ; 004ed064
    MOV CL,byte ptr [0x01c4e9e8]        ; 004ed066 | g_GreenDitherShift
    SHL EAX,0x10                        ; 004ed06c
    SHL EBX,CL                          ; 004ed06f
    MOV [0x00623f38],EAX                ; 004ed071 | g_RedMask32
    SHL EBX,0x8                         ; 004ed076
    MOV EAX,[0x01c4e9dc]                ; 004ed079 | g_RedDitherShift
    MOV dword ptr [0x00623f58],EBX      ; 004ed07e | g_GreenMask32
    MOV EBX,dword ptr [0x01c4e9e8]      ; 004ed084 | g_GreenDitherShift
    MOV ECX,dword ptr [0x01c4e9f4]      ; 004ed08a | g_BlueDitherShift
    ADD EAX,EBX                         ; 004ed090
    MOV dword ptr [0x00623fc0],ECX      ; 004ed092 | g_BlueBitShift
    ADD EAX,ECX                         ; 004ed098
    SHL ESI,CL                          ; 004ed09a
    MOV [0x00623f80],EAX                ; 004ed09c | g_TotalDitherShift
    LEA EAX,[EBX + ECX*0x1]             ; 004ed0a1
    MOV dword ptr [0x00623f78],ESI      ; 004ed0a4 | g_BlueMask32
    MOV [0x00623fa0],EAX                ; 004ed0aa | g_GreenBlueDitherShift
    CMP dword ptr [0x0061b4a0],0x20     ; 004ed0af | g_INT_0061b4a0
        ;   Label: LAB_004ed0af
    JNZ 0x004ed10d                      ; 004ed0b6
        ;   XREF to: 004ed10d (CONDITIONAL_JUMP)  ; LAB_004ed10d
    MOV EDX,dword ptr [0x0061b4a0]      ; 004ed0b8 | g_INT_0061b4a0
    XOR EAX,EAX                         ; 004ed0be
    XOR EBX,EBX                         ; 004ed0c0
    MOVZX EDI,byte ptr [EBX + 0x1c4e9f9] ; 004ed0c2 | g_UCHAR_ARRAY_01c4e9f8+1
        ;   Label: LAB_004ed0c2
    MOVZX ESI,byte ptr [EBX + 0x1c4e9fa] ; 004ed0c9 | g_UCHAR_ARRAY_01c4e9f8+2
    MOVZX EBP,byte ptr [EBX + 0x1c4e9f8] ; 004ed0d0 | g_UCHAR_ARRAY_01c4e9f8
    CMP EDX,0x20                        ; 004ed0d7
    JNZ 0x004ed115                      ; 004ed0da
        ;   XREF to: 004ed115 (CONDITIONAL_JUMP)  ; LAB_004ed115
    MOV CL,byte ptr [0x01c4e9d4]        ; 004ed0dc | g_RedBitPosition
    SHL EBP,CL                          ; 004ed0e2
    MOV CL,byte ptr [0x01c4e9e0]        ; 004ed0e4 | g_GreenBitPosition
    SHL EDI,CL                          ; 004ed0ea
    MOV CL,byte ptr [0x01c4e9ec]        ; 004ed0ec | g_BlueBitPosition
    SHL ESI,CL                          ; 004ed0f2
    OR EDI,EBP                          ; 004ed0f4
    MOV ECX,ESI                         ; 004ed0f6
    OR ECX,EDI                          ; 004ed0f8
    ADD EAX,0x4                         ; 004ed0fa
        ;   Label: LAB_004ed0fa
    ADD EBX,0x3                         ; 004ed0fd
    MOV dword ptr [EAX + 0x1c4dccc],ECX ; 004ed100
    CMP EAX,0x400                       ; 004ed106
    JNZ 0x004ed0c2                      ; 004ed10b
        ;   XREF to: 004ed0c2 (CONDITIONAL_JUMP)  ; LAB_004ed0c2
    ADD ESP,0x8                         ; 004ed10d
        ;   Label: LAB_004ed10d
    POP EBP                             ; 004ed110
    POP EDI                             ; 004ed111
    POP ESI                             ; 004ed112
    POP EBX                             ; 004ed113
    RET                                 ; 004ed114
    MOV ECX,EBP                         ; 004ed115
        ;   Label: LAB_004ed115
    SHL EDI,0x8                         ; 004ed117
    SHL ECX,0x10                        ; 004ed11a
    OR ECX,EDI                          ; 004ed11d
    OR ECX,ESI                          ; 004ed11f
    JMP 0x004ed0fa                      ; 004ed121
        ;   XREF to: 004ed0fa (UNCONDITIONAL_JUMP)  ; LAB_004ed0fa

