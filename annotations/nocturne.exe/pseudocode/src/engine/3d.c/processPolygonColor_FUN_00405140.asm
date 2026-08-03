; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_processPolygonColor_FUN_00405140(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006b0260
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00405140
        ;   Label: engine_3d.c_processPolygonColor_FUN_00405140
    MOV EAX,dword ptr [ECX + 0x4]       ; 00405144
    MOV [0x006b0260],EAX                ; 00405147 | DAT_006b0260
    MOV AH,byte ptr [ECX + 0x7]         ; 0040514c
    TEST AH,0x80                        ; 0040514f
    JZ 0x00405159                       ; 00405152
        ;   XREF to: 00405159 (CONDITIONAL_JUMP)  ; LAB_00405159
    TEST AH,0x40                        ; 00405154
    JZ 0x0040515d                       ; 00405157
        ;   XREF to: 0040515d (CONDITIONAL_JUMP)  ; LAB_0040515d
    LEA EAX,[ECX + 0x8]                 ; 00405159
        ;   Label: LAB_00405159
    RET                                 ; 0040515c
    PUSH EDI                            ; 0040515d
        ;   Label: LAB_0040515d
    PUSH ESI                            ; 0040515e
    PUSH EBX                            ; 0040515f
    MOV EDX,dword ptr [ECX + 0x4]       ; 00405160
    AND EDX,0xff                        ; 00405163
    MOV EAX,EDX                         ; 00405169
    SAR EDX,0x1f                        ; 0040516b
    SHL EDX,0x3                         ; 0040516e
    SBB EAX,EDX                         ; 00405171
    SAR EAX,0x3                         ; 00405173
    MOV EBX,dword ptr [ECX + 0x4]       ; 00405176
    SAR EBX,0x8                         ; 00405179
    AND EBX,0xff                        ; 0040517c
    MOV EDI,EAX                         ; 00405182
    MOV EDX,EBX                         ; 00405184
    MOV EAX,EBX                         ; 00405186
    SAR EDX,0x1f                        ; 00405188
    SHL EDX,0x3                         ; 0040518b
    SBB EAX,EDX                         ; 0040518e
    SAR EAX,0x3                         ; 00405190
    MOV ESI,dword ptr [ECX + 0x4]       ; 00405193
    SAR ESI,0x10                        ; 00405196
    AND ESI,0xff                        ; 00405199
    SHL EDI,0xa                         ; 0040519f
    MOV EDX,ESI                         ; 004051a2
    SHL EAX,0x5                         ; 004051a4
    SAR EDX,0x1f                        ; 004051a7
    ADD EDI,EAX                         ; 004051aa
    MOV EAX,ESI                         ; 004051ac
    SHL EDX,0x3                         ; 004051ae
    SBB EAX,EDX                         ; 004051b1
    SAR EAX,0x3                         ; 004051b3
    MOV AL,byte ptr [EDI + EAX*0x1 + 0x1bf7720] ; 004051b6
    AND EAX,0xff                        ; 004051bd
    MOV EDX,EAX                         ; 004051c2
    MOV [0x006b0260],EAX                ; 004051c4 | DAT_006b0260
    NEG EDX                             ; 004051c9
    MOV dword ptr [0x006b0260],EDX      ; 004051cb | DAT_006b0260
    POP EBX                             ; 004051d1
    POP ESI                             ; 004051d2
    POP EDI                             ; 004051d3
    LEA EAX,[ECX + 0x8]                 ; 004051d4
    RET                                 ; 004051d7

