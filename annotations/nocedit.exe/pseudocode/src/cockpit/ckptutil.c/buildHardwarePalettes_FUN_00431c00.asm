; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00(char * rgb_palette_data)
;
; Parameters:
; char *           Stack[0x4]:4   rgb_palette_data
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   byte* g_CurrentPalette
;   uint[256] g_Hardware32BitPalette
;   undefined4 g_GlobalPalette[1]
;   ushort[256] g_Hardware16BitPalette
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   int g_GreenBitPosition
;   int g_GreenScaleFactor
;   int g_BlueBitPosition
;   int g_BlueScaleFactor
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431c00
        ;   Label: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00
    PUSH ESI                            ; 00431c01
    PUSH EDI                            ; 00431c02
    PUSH EBP                            ; 00431c03
    SUB ESP,0x8                         ; 00431c04
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00431c07
    MOV EDX,dword ptr [0x0067939c]      ; 00431c0b | int g_BitsPerPixel
    MOV dword ptr [0x02d01920],EBX      ; 00431c11 | byte * g_CurrentPalette
    CMP EDX,0x20                        ; 00431c17
    JNZ 0x00431c7b                      ; 00431c1a | LAB_00431c7b
        ;   XREF to: 00431c7b (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067939c]      ; 00431c1c | int g_BitsPerPixel
    XOR EAX,EAX                         ; 00431c22
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 00431c24
        ;   Label: LAB_00431c24
    MOVZX EDI,byte ptr [EBX]            ; 00431c28
    MOVZX ESI,byte ptr [EBX + 0x2]      ; 00431c2b
    CMP EDX,0x20                        ; 00431c2f
    JNZ 0x00431c6d                      ; 00431c32 | LAB_00431c6d
        ;   XREF to: 00431c6d (CONDITIONAL_JUMP)
    MOV CL,byte ptr [0x02d01f24]        ; 00431c34 | int g_RedBitPosition
    SHL EDI,CL                          ; 00431c3a
    MOV CL,byte ptr [0x02d01f30]        ; 00431c3c | int g_GreenBitPosition
    SHL EBP,CL                          ; 00431c42
    MOV CL,byte ptr [0x02d01f3c]        ; 00431c44 | int g_BlueBitPosition
    SHL ESI,CL                          ; 00431c4a
    OR EDI,EBP                          ; 00431c4c
    MOV ECX,ESI                         ; 00431c4e
    OR ECX,EDI                          ; 00431c50
    ADD EAX,0x4                         ; 00431c52
        ;   Label: LAB_00431c52
    ADD EBX,0x3                         ; 00431c55
    MOV dword ptr [EAX + 0x2d01920],ECX ; 00431c58 | uint[256] g_Hardware32BitPalette
    CMP EAX,0x400                       ; 00431c5e
    JNZ 0x00431c24                      ; 00431c63 | LAB_00431c24
        ;   XREF to: 00431c24 (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 00431c65
    POP EBP                             ; 00431c68
    POP EDI                             ; 00431c69
    POP ESI                             ; 00431c6a
    POP EBX                             ; 00431c6b
    RET                                 ; 00431c6c
    MOV ECX,EBP                         ; 00431c6d
        ;   Label: LAB_00431c6d
    SHL EDI,0x10                        ; 00431c6f
    SHL ECX,0x8                         ; 00431c72
    OR ECX,EDI                          ; 00431c75
    OR ECX,ESI                          ; 00431c77
    JMP 0x00431c52                      ; 00431c79 | LAB_00431c52
        ;   XREF to: 00431c52 (UNCONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00431c7b
        ;   Label: LAB_00431c7b
    XOR EAX,EAX                         ; 00431c7d
        ;   Label: LAB_00431c7d
    MOV EDI,dword ptr [0x02d01f28]      ; 00431c7f | int g_RedScaleFactor
    MOV AL,byte ptr [EBX]               ; 00431c85
    XOR EDX,EDX                         ; 00431c87
    MOV dword ptr [ESP],EAX             ; 00431c89
    DIV EDI                             ; 00431c8c
    XOR ECX,ECX                         ; 00431c8e
    MOV CL,byte ptr [EBX + 0x1]         ; 00431c90
    MOV dword ptr [ESP + 0x4],ECX       ; 00431c93
    MOV dword ptr [ESP],EAX             ; 00431c97
    XOR EDX,EDX                         ; 00431c9a
    MOV EAX,ECX                         ; 00431c9c
    DIV dword ptr [0x02d01f34]          ; 00431c9e | int g_GreenScaleFactor
    MOVZX EBP,byte ptr [EBX + 0x2]      ; 00431ca4
    MOV EDI,dword ptr [0x02d01f40]      ; 00431ca8 | int g_BlueScaleFactor
    MOV dword ptr [ESP + 0x4],EAX       ; 00431cae
    XOR EDX,EDX                         ; 00431cb2
    MOV EAX,EBP                         ; 00431cb4
    DIV EDI                             ; 00431cb6
    MOV CL,byte ptr [0x02d01f24]        ; 00431cb8 | int g_RedBitPosition
    MOV EDX,dword ptr [ESP]             ; 00431cbe
    MOV EDI,EAX                         ; 00431cc1
    MOV EAX,dword ptr [ESP + 0x4]       ; 00431cc3
    SHL EDX,CL                          ; 00431cc7
    MOV CL,byte ptr [0x02d01f30]        ; 00431cc9 | int g_GreenBitPosition
    SHL EAX,CL                          ; 00431ccf
    MOV CL,byte ptr [0x02d01f3c]        ; 00431cd1 | int g_BlueBitPosition
    OR EAX,EDX                          ; 00431cd7
    SHL EDI,CL                          ; 00431cd9
    ADD ESI,0x2                         ; 00431cdb
    OR EAX,EDI                          ; 00431cde
    ADD EBX,0x3                         ; 00431ce0
    MOV word ptr [ESI + 0x2d01d22],AX   ; 00431ce3 | ushort[256] g_Hardware16BitPalette
    CMP ESI,0x200                       ; 00431cea
    JNZ 0x00431c7d                      ; 00431cf0 | LAB_00431c7d
        ;   XREF to: 00431c7d (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 00431cf2
    POP EBP                             ; 00431cf5
    POP EDI                             ; 00431cf6
    POP ESI                             ; 00431cf7
    POP EBX                             ; 00431cf8
    RET                                 ; 00431cf9

