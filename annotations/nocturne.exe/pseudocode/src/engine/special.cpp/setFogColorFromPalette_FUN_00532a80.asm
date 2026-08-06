; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setFogColorFromPalette_FUN_00532a80(int palette_index)
;
; Parameters:
; int              Stack[0x4]:4   palette_index
;
; XREF[1]:
;   engine_2d.c_FUN_00403070 at 004030da
;
; Referenced Globals:
;   uchar[768] g_SourcePaletteData
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dcc
;   undefined4 DAT_02dc9e0c
;   undefined4 DAT_02dc9e10
;   undefined4 DAT_02dc9e14
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00532a80
        ;   Label: engine_special.cpp_setFogColorFromPalette_FUN_00532a80
    LEA EAX,[EDX*0x4 + 0x0]             ; 00532a84
    SUB EAX,EDX                         ; 00532a8b
    XOR EDX,EDX                         ; 00532a8d
    MOV DL,byte ptr [EAX + 0x1c00648]   ; 00532a8f | g_SourcePaletteData
    MOV dword ptr [0x02dc9e0c],EDX      ; 00532a95 | DAT_02dc9e0c
    XOR EDX,EDX                         ; 00532a9b
    MOV DL,byte ptr [EAX + 0x1c00649]   ; 00532a9d
    MOV dword ptr [0x02dc9e10],EDX      ; 00532aa3 | DAT_02dc9e10
    MOV AL,byte ptr [EAX + 0x1c0064a]   ; 00532aa9
    AND EAX,0xff                        ; 00532aaf
    MOV EDX,dword ptr [0x01c02594]      ; 00532ab4 | DAT_01c02594
    MOV [0x02dc9e14],EAX                ; 00532aba | DAT_02dc9e14
    TEST EDX,EDX                        ; 00532abf
    JNZ 0x00532ac6                      ; 00532ac1
        ;   XREF to: 00532ac6 (CONDITIONAL_JUMP)  ; LAB_00532ac6
    XOR EAX,EAX                         ; 00532ac3
    RET                                 ; 00532ac5
    PUSH ESI                            ; 00532ac6
        ;   Label: LAB_00532ac6
    PUSH EBX                            ; 00532ac7
    PUSH EAX                            ; 00532ac8
    MOV EBX,dword ptr [0x02dc9e10]      ; 00532ac9 | DAT_02dc9e10
    PUSH EBX                            ; 00532acf
    MOV ESI,dword ptr [0x02dc9e0c]      ; 00532ad0 | DAT_02dc9e0c
    PUSH ESI                            ; 00532ad6
    CALL dword ptr [0x02dc9dcc]         ; 00532ad7 | DAT_02dc9dcc
    ADD ESP,0xc                         ; 00532add
    POP EBX                             ; 00532ae0
    POP ESI                             ; 00532ae1
    RET                                 ; 00532ae2

