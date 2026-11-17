; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044fea0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   int g_INT_0061b4a0 = 0x8
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c4e9d4
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c4e9e0
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c4e9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044fea0
        ;   Label: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044fea0
    PUSH ESI                            ; 0044fea1
    PUSH EDI                            ; 0044fea2
    PUSH EBP                            ; 0044fea3
    MOV EBP,dword ptr [0x0061b4a0]      ; 0044fea4 | g_INT_0061b4a0
    XOR EDX,EDX                         ; 0044feaa
    XOR EAX,EAX                         ; 0044feac
    MOVZX ESI,byte ptr [EAX + 0xb81199] ; 0044feae
        ;   Label: LAB_0044feae
    XOR EBX,EBX                         ; 0044feb5
    MOVZX EDI,byte ptr [EAX + 0xb81198] ; 0044feb7
    MOV BL,byte ptr [EAX + 0xb8119a]    ; 0044febe
    CMP EBP,0x20                        ; 0044fec4
    JNZ 0x0044ff06                      ; 0044fec7
        ;   XREF to: 0044ff06 (CONDITIONAL_JUMP)  ; LAB_0044ff06
    MOV CL,byte ptr [0x01c4e9d4]        ; 0044fec9 | g_BIT_INTEGER32_01c4e9d4
    SHL EDI,CL                          ; 0044fecf
    MOV CL,byte ptr [0x01c4e9e0]        ; 0044fed1 | g_BIT_INTEGER32_01c4e9e0
    SHL ESI,CL                          ; 0044fed7
    MOV CL,byte ptr [0x01c4e9ec]        ; 0044fed9 | g_BIT_INTEGER32_01c4e9ec
    SHL EBX,CL                          ; 0044fedf
    OR EDI,ESI                          ; 0044fee1
    MOV ECX,EBX                         ; 0044fee3
    OR ECX,EDI                          ; 0044fee5
    ADD EDX,0x4                         ; 0044fee7
        ;   Label: LAB_0044fee7
    ADD EAX,0x3                         ; 0044feea
    MOV dword ptr [EDX + 0xb81498],ECX  ; 0044feed
    CMP EDX,0x400                       ; 0044fef3
    JNZ 0x0044feae                      ; 0044fef9
        ;   XREF to: 0044feae (CONDITIONAL_JUMP)  ; LAB_0044feae
    MOV dword ptr [0x0061b4a0],EBP      ; 0044fefb | g_INT_0061b4a0
    POP EBP                             ; 0044ff01
    POP EDI                             ; 0044ff02
    POP ESI                             ; 0044ff03
    POP EBX                             ; 0044ff04
    RET                                 ; 0044ff05
    MOV ECX,EDI                         ; 0044ff06
        ;   Label: LAB_0044ff06
    SHL ESI,0x8                         ; 0044ff08
    SHL ECX,0x10                        ; 0044ff0b
    OR ECX,ESI                          ; 0044ff0e
    OR ECX,EBX                          ; 0044ff10
    JMP 0x0044fee7                      ; 0044ff12
        ;   XREF to: 0044fee7 (UNCONDITIONAL_JUMP)  ; LAB_0044fee7

