; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulonglong __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004f4140(void)
;
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   uint[448] g_ColorTable32
;   undefined4 g_ColorTable32[1]
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_BlueBitPosition
;   char[768] g_SourcePaletteData
;   undefined4 CHAR_ARRAY_02d01f49
;   undefined4 CHAR_ARRAY_02d01f4a
;   undefined4 CHAR_ARRAY_02d01f4b
;   undefined4 CHAR_ARRAY_02d01f4c
;   undefined4 CHAR_ARRAY_02d01f4d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4140
        ;   Label: wincore_wddvmem.cpp_populateColorTable_FUN_004f4140
    PUSH ESI                            ; 004f4141
    PUSH EDI                            ; 004f4142
    PUSH EBP                            ; 004f4143
    MOV EBP,dword ptr [0x0067939c]      ; 004f4144 | g_BitsPerPixel
    XOR EDX,EDX                         ; 004f414a
    XOR EAX,EAX                         ; 004f414c
    MOVZX ESI,byte ptr [EAX + 0x2d01f49] ; 004f414e | CHAR_ARRAY_02d01f49 | CHAR_ARRAY_02d01f4c
        ;   Label: LAB_004f414e
    XOR EBX,EBX                         ; 004f4155
    MOVZX EDI,byte ptr [EAX + 0x2d01f48] ; 004f4157 | g_SourcePaletteData | CHAR_ARRAY_02d01f4b
    MOV BL,byte ptr [EAX + 0x2d01f4a]   ; 004f415e | CHAR_ARRAY_02d01f4a | CHAR_ARRAY_02d01f4d
    CMP EBP,0x20                        ; 004f4164
    JNZ 0x004f41b1                      ; 004f4167
        ;   XREF to: 004f41b1 (CONDITIONAL_JUMP)  ; LAB_004f41b1
    MOV CL,byte ptr [0x02d01f24]        ; 004f4169 | g_RedBitPosition
    SHL EDI,CL                          ; 004f416f
    MOV CL,byte ptr [0x02d01f30]        ; 004f4171 | g_GreenBitPosition
    SHL ESI,CL                          ; 004f4177
    MOV CL,byte ptr [0x02d01f3c]        ; 004f4179 | g_BlueBitPosition
    SHL EBX,CL                          ; 004f417f
    OR EDI,ESI                          ; 004f4181
    MOV ECX,EBX                         ; 004f4183
    OR ECX,EDI                          ; 004f4185
    ADD EDX,0x4                         ; 004f4187
        ;   Label: LAB_004f4187
    ADD EAX,0x3                         ; 004f418a
    MOV dword ptr [EDX + 0x2d0121c],ECX ; 004f418d | g_ColorTable32 | g_ColorTable32[1]
    CMP EDX,0x400                       ; 004f4193
    JNZ 0x004f414e                      ; 004f4199
        ;   XREF to: 004f414e (CONDITIONAL_JUMP)  ; LAB_004f414e
    MOV dword ptr [0x0067939c],EBP      ; 004f419b | g_BitsPerPixel
    POP EBP                             ; 004f41a1
    POP EDI                             ; 004f41a2
    POP ESI                             ; 004f41a3
    POP EBX                             ; 004f41a4
    LEA EAX,[EAX]                       ; 004f41a5
    LEA EDX,[EDX]                       ; 004f41ab
    MOV EBX,EBX                         ; 004f41ae
    RET                                 ; 004f41b0
    MOV ECX,EDI                         ; 004f41b1
        ;   Label: LAB_004f41b1
    SHL ESI,0x8                         ; 004f41b3
    SHL ECX,0x10                        ; 004f41b6
    OR ECX,ESI                          ; 004f41b9
    OR ECX,EBX                          ; 004f41bb
    JMP 0x004f4187                      ; 004f41bd
        ;   XREF to: 004f4187 (UNCONDITIONAL_JUMP)  ; LAB_004f4187

