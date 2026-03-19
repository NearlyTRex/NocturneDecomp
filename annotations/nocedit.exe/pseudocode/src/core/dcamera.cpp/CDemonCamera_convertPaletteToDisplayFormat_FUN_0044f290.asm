; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   SRGBColorPalette g_CameraImagePaletteData
;   undefined4 g_CameraImagePaletteData.colors[0].g
;   undefined4 g_CameraImagePaletteData.colors[0].b
;   undefined4 g_CameraImagePaletteData.colors[1].r
;   undefined4 g_CameraImagePaletteData.colors[1].g
;   undefined4 g_CameraImagePaletteData.colors[1].b
;   uint[256] g_CameraConvertedPalette
;   undefined4 g_CameraConvertedPalette[1]
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_BlueBitPosition
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f290
        ;   Label: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290
    PUSH ESI                            ; 0044f291
    PUSH EDI                            ; 0044f292
    PUSH EBP                            ; 0044f293
    MOV EBP,dword ptr [0x0067939c]      ; 0044f294 | g_BitsPerPixel
    XOR EDX,EDX                         ; 0044f29a
    XOR EAX,EAX                         ; 0044f29c
    MOVZX ESI,byte ptr [EAX + 0xc196f9] ; 0044f29e | g_CameraImagePaletteData.colors[0].g | g_CameraImagePaletteData.colors[1].g
        ;   Label: LAB_0044f29e
    XOR EBX,EBX                         ; 0044f2a5
    MOVZX EDI,byte ptr [EAX + 0xc196f8] ; 0044f2a7 | g_CameraImagePaletteData | g_CameraImagePaletteData.colors[1].r
    MOV BL,byte ptr [EAX + 0xc196fa]    ; 0044f2ae | g_CameraImagePaletteData.colors[0].b | g_CameraImagePaletteData.colors[1].b
    CMP EBP,0x20                        ; 0044f2b4
    JNZ 0x0044f2f6                      ; 0044f2b7
        ;   XREF to: 0044f2f6 (CONDITIONAL_JUMP)  ; LAB_0044f2f6
    MOV CL,byte ptr [0x02d01f24]        ; 0044f2b9 | g_RedBitPosition
    SHL EDI,CL                          ; 0044f2bf
    MOV CL,byte ptr [0x02d01f30]        ; 0044f2c1 | g_GreenBitPosition
    SHL ESI,CL                          ; 0044f2c7
    MOV CL,byte ptr [0x02d01f3c]        ; 0044f2c9 | g_BlueBitPosition
    SHL EBX,CL                          ; 0044f2cf
    OR EDI,ESI                          ; 0044f2d1
    MOV ECX,EBX                         ; 0044f2d3
    OR ECX,EDI                          ; 0044f2d5
    ADD EDX,0x4                         ; 0044f2d7
        ;   Label: LAB_0044f2d7
    ADD EAX,0x3                         ; 0044f2da
    MOV dword ptr [EDX + 0xc199f8],ECX  ; 0044f2dd | g_CameraConvertedPalette | g_CameraConvertedPalette[1]
    CMP EDX,0x400                       ; 0044f2e3
    JNZ 0x0044f29e                      ; 0044f2e9
        ;   XREF to: 0044f29e (CONDITIONAL_JUMP)  ; LAB_0044f29e
    MOV dword ptr [0x0067939c],EBP      ; 0044f2eb | g_BitsPerPixel
    POP EBP                             ; 0044f2f1
    POP EDI                             ; 0044f2f2
    POP ESI                             ; 0044f2f3
    POP EBX                             ; 0044f2f4
    RET                                 ; 0044f2f5
    MOV ECX,EDI                         ; 0044f2f6
        ;   Label: LAB_0044f2f6
    SHL ESI,0x8                         ; 0044f2f8
    SHL ECX,0x10                        ; 0044f2fb
    OR ECX,ESI                          ; 0044f2fe
    OR ECX,EBX                          ; 0044f300
    JMP 0x0044f2d7                      ; 0044f302
        ;   XREF to: 0044f2d7 (UNCONDITIONAL_JUMP)  ; LAB_0044f2d7

