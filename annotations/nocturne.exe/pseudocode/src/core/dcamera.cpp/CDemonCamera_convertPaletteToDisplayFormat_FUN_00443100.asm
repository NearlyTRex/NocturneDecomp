; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_00443100(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_00b0daf8
;   undefined4 DAT_00b0dafc
;   undefined4 DAT_00b0dafd
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_BlueBitPosition
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443100
        ;   Label: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_00443100
    PUSH ESI                            ; 00443101
    PUSH EDI                            ; 00443102
    PUSH EBP                            ; 00443103
    MOV EBP,dword ptr [0x005b7624]      ; 00443104 | g_BitsPerPixel
    XOR EDX,EDX                         ; 0044310a
    XOR EAX,EAX                         ; 0044310c
    MOVZX ESI,byte ptr [EAX + 0xb0daf9] ; 0044310e | DAT_00b0dafc
        ;   Label: LAB_0044310e
    XOR EBX,EBX                         ; 00443115
    MOVZX EDI,byte ptr [EAX + 0xb0daf8] ; 00443117 | DAT_00b0daf8
    MOV BL,byte ptr [EAX + 0xb0dafa]    ; 0044311e | DAT_00b0dafd
    CMP EBP,0x20                        ; 00443124
    JNZ 0x00443166                      ; 00443127
        ;   XREF to: 00443166 (CONDITIONAL_JUMP)  ; LAB_00443166
    MOV CL,byte ptr [0x01c00624]        ; 00443129 | g_RedBitPosition
    SHL EDI,CL                          ; 0044312f
    MOV CL,byte ptr [0x01c00630]        ; 00443131 | g_GreenBitPosition
    SHL ESI,CL                          ; 00443137
    MOV CL,byte ptr [0x01c0063c]        ; 00443139 | g_BlueBitPosition
    SHL EBX,CL                          ; 0044313f
    OR EDI,ESI                          ; 00443141
    MOV ECX,EBX                         ; 00443143
    OR ECX,EDI                          ; 00443145
    ADD EDX,0x4                         ; 00443147
        ;   Label: LAB_00443147
    ADD EAX,0x3                         ; 0044314a
    MOV dword ptr [EDX + 0xb0ddf8],ECX  ; 0044314d
    CMP EDX,0x400                       ; 00443153
    JNZ 0x0044310e                      ; 00443159
        ;   XREF to: 0044310e (CONDITIONAL_JUMP)  ; LAB_0044310e
    MOV dword ptr [0x005b7624],EBP      ; 0044315b | g_BitsPerPixel
    POP EBP                             ; 00443161
    POP EDI                             ; 00443162
    POP ESI                             ; 00443163
    POP EBX                             ; 00443164
    RET                                 ; 00443165
    MOV ECX,EDI                         ; 00443166
        ;   Label: LAB_00443166
    SHL ESI,0x8                         ; 00443168
    SHL ECX,0x10                        ; 0044316b
    OR ECX,ESI                          ; 0044316e
    OR ECX,EBX                          ; 00443170
    JMP 0x00443147                      ; 00443172
        ;   XREF to: 00443147 (UNCONDITIONAL_JUMP)  ; LAB_00443147

