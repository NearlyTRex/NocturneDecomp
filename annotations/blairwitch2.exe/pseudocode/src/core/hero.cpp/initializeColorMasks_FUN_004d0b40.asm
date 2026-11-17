; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_initializeColorMasks_FUN_004d0b40(void)
;
;
; Referenced Globals:
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
;   _BIT_INTEGER32 g_GreenDitherShift
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0b40
        ;   Label: core_hero.cpp_initializeColorMasks_FUN_004d0b40
    PUSH ESI                            ; 004d0b41
    PUSH EDI                            ; 004d0b42
    PUSH EBP                            ; 004d0b43
    SUB ESP,0x8                         ; 004d0b44
    XOR EBX,EBX                         ; 004d0b47
    XOR ESI,ESI                         ; 004d0b49
    XOR EAX,EAX                         ; 004d0b4b
        ;   Label: LAB_004d0b4b
    MOV EDI,dword ptr [0x01c35818]      ; 004d0b4d | g_RedScaleFactor
    MOV AL,byte ptr [EBX + 0x1c35838]   ; 004d0b53
    XOR EDX,EDX                         ; 004d0b59
    MOV dword ptr [ESP],EAX             ; 004d0b5b
    DIV EDI                             ; 004d0b5e
    XOR ECX,ECX                         ; 004d0b60
    MOV CL,byte ptr [EBX + 0x1c35839]   ; 004d0b62
    MOV dword ptr [ESP],EAX             ; 004d0b68
    XOR EDX,EDX                         ; 004d0b6b
    MOV EAX,ECX                         ; 004d0b6d
    DIV dword ptr [0x01c35824]          ; 004d0b6f | g_GreenScaleFactor
    MOVZX EBP,byte ptr [EBX + 0x1c3583a] ; 004d0b75
    MOV dword ptr [ESP + 0x4],EBP       ; 004d0b7c
    MOV EDI,EAX                         ; 004d0b80
    XOR EDX,EDX                         ; 004d0b82
    MOV EAX,EBP                         ; 004d0b84
    DIV dword ptr [0x01c35830]          ; 004d0b86 | g_BlueScaleFactor
    MOV CL,byte ptr [0x01c35814]        ; 004d0b8c | g_RedBitPosition
    MOV dword ptr [ESP + 0x4],EAX       ; 004d0b92
    MOV EAX,dword ptr [ESP]             ; 004d0b96
    SHL EAX,CL                          ; 004d0b99
    MOV CL,byte ptr [0x01c35820]        ; 004d0b9b | g_GreenBitPosition
    SHL EDI,CL                          ; 004d0ba1
    MOV CL,byte ptr [0x01c3582c]        ; 004d0ba3 | g_BlueBitPosition
    OR EDI,EAX                          ; 004d0ba9
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0bab
    SHL EAX,CL                          ; 004d0baf
    ADD ESI,0x2                         ; 004d0bb1
    OR EAX,EDI                          ; 004d0bb4
    ADD EBX,0x3                         ; 004d0bb6
    MOV word ptr [ESI + 0x1c3490e],AX   ; 004d0bb9
    CMP ESI,0x200                       ; 004d0bc0
    JNZ 0x004d0b4b                      ; 004d0bc6
        ;   XREF to: 004d0b4b (CONDITIONAL_JUMP)  ; LAB_004d0b4b
    MOV ESI,0xff                        ; 004d0bc8
    MOV CL,byte ptr [0x01c3581c]        ; 004d0bcd | g_RedDitherShift
    SHR ESI,CL                          ; 004d0bd3
    MOV ECX,dword ptr [0x01c35814]      ; 004d0bd5 | g_RedBitPosition
    MOV EAX,ESI                         ; 004d0bdb
    MOV EBX,0xff                        ; 004d0bdd
    SHL EAX,CL                          ; 004d0be2
    MOV CL,byte ptr [0x01c35828]        ; 004d0be4 | g_GreenDitherShift
    MOV [0x0061c8d0],EAX                ; 004d0bea | g_RedMask16
    SHR EBX,CL                          ; 004d0bef
    MOV ECX,dword ptr [0x01c35820]      ; 004d0bf1 | g_GreenBitPosition
    MOV EAX,EBX                         ; 004d0bf7
    SHL EAX,CL                          ; 004d0bf9
    MOV CL,byte ptr [0x01c35834]        ; 004d0bfb | g_BlueDitherShift
    MOV [0x0061c8d8],EAX                ; 004d0c01 | g_GreenMask16
    MOV EAX,0xff                        ; 004d0c06
    SHR EAX,CL                          ; 004d0c0b
    MOV ECX,dword ptr [0x01c3582c]      ; 004d0c0d | g_BlueBitPosition
    MOV EDI,EAX                         ; 004d0c13
    SHL EDI,CL                          ; 004d0c15
    MOV CL,byte ptr [0x01c3581c]        ; 004d0c17 | g_RedDitherShift
    SHL ESI,CL                          ; 004d0c1d
    MOV CL,byte ptr [0x01c35828]        ; 004d0c1f | g_GreenDitherShift
    MOV EDX,dword ptr [0x01c35828]      ; 004d0c25 | g_GreenDitherShift
    SHL EBX,CL                          ; 004d0c2b
    MOV ECX,dword ptr [0x01c35834]      ; 004d0c2d | g_BlueDitherShift
    MOV dword ptr [0x0061c8e0],EDI      ; 004d0c33 | g_BlueMask16
    SHL EAX,CL                          ; 004d0c39
    SHL ESI,0x10                        ; 004d0c3b
    MOV [0x0061c928],EAX                ; 004d0c3e | g_BlueMask32
    MOV EAX,[0x01c3581c]                ; 004d0c43 | g_RedDitherShift
    MOV dword ptr [0x0061c8e8],ESI      ; 004d0c48 | g_RedMask32
    ADD EAX,EDX                         ; 004d0c4e
    SHL EBX,0x8                         ; 004d0c50
    ADD EAX,ECX                         ; 004d0c53
    MOV dword ptr [0x0061c908],EBX      ; 004d0c55 | g_GreenMask32
    MOV [0x0061c930],EAX                ; 004d0c5b | g_TotalDitherShift
    LEA EAX,[EDX + ECX*0x1]             ; 004d0c60
    MOV dword ptr [0x0061c970],ECX      ; 004d0c63 | g_BlueBitShift
    MOV [0x0061c950],EAX                ; 004d0c69 | g_GreenBlueDitherShift
    ADD ESP,0x8                         ; 004d0c6e
    POP EBP                             ; 004d0c71
    POP EDI                             ; 004d0c72
    POP ESI                             ; 004d0c73
    POP EBX                             ; 004d0c74
    LEA EAX,[EAX]                       ; 004d0c75
    LEA EDX,[EDX]                       ; 004d0c7b
    MOV EBX,EBX                         ; 004d0c7e
    RET                                 ; 004d0c80

