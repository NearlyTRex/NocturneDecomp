; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setdir_cpp_FUN_00559c10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00559c10
        ;   Label: core_setdir.cpp_FUN_00559c10
    MOV EDX,dword ptr [0x00612560]      ; 00559c12 | DAT_00612560
    PUSH EDX                            ; 00559c18
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00559c19
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00559c1e
    TEST byte ptr [ESP + 0xa3],0x80     ; 00559c21
    SETNZ AL                            ; 00559c29
    AND EAX,0xff                        ; 00559c2c
    PUSH EAX                            ; 00559c31
    MOV ECX,dword ptr [0x00612560]      ; 00559c32 | DAT_00612560
    PUSH ECX                            ; 00559c38
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00559c39
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00559c3e
    XOR EBX,EBX                         ; 00559c41
    MOV ESI,dword ptr [ESP + 0xc0]      ; 00559c43
    MOV dword ptr [ESP + 0xa4],EBX      ; 00559c4a
    TEST ESI,ESI                        ; 00559c51
    JLE 0x00559c90                      ; 00559c53
        ;   XREF to: 00559c90 (CONDITIONAL_JUMP)  ; LAB_00559c90
    SHL ESI,0x2                         ; 00559c55
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x2c] ; 00559c58
        ;   Label: LAB_00559c58
    PUSH EDI                            ; 00559c5c
    MOV EAX,[0x00612560]                ; 00559c5d | DAT_00612560
    PUSH EAX                            ; 00559c62
    CALL engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0 ; 00559c63
        ;   XREF to: 00481db0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00559c68
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00559c6b
    ADD EDX,EAX                         ; 00559c72
    ADD EBX,0x4                         ; 00559c74
    MOV dword ptr [ESP + 0xa4],EDX      ; 00559c77
    CMP EBX,ESI                         ; 00559c7e
    JL 0x00559c58                       ; 00559c80
        ;   XREF to: 00559c58 (CONDITIONAL_JUMP)  ; LAB_00559c58
    LEA EAX,[EAX]                       ; 00559c82
    LEA EDX,[EDX]                       ; 00559c88
    MOV EAX,EAX                         ; 00559c8e
    MOV EAX,[0x0061d95c]                ; 00559c90 | g_CGamePtr
        ;   Label: LAB_00559c90
    CMP dword ptr [EAX + 0x204],0x0     ; 00559c95
    JZ 0x00559d20                       ; 00559c9c
        ;   XREF to: 00559d20 (CONDITIONAL_JUMP)  ; LAB_00559d20
    MOV EDX,dword ptr [EBP + 0x20]      ; 00559ca2
    LEA EAX,[EDX*0x4 + 0x0]             ; 00559ca5
    SUB EAX,EDX                         ; 00559cac
    MOV EDX,0x23a08f4                   ; 00559cae
    SHL EAX,0xc                         ; 00559cb3
    XOR EBX,EBX                         ; 00559cb6
    ADD EDX,EAX                         ; 00559cb8
    MOV ECX,0x100                       ; 00559cba
        ;   Label: LAB_00559cba
    MOV EDI,EDX                         ; 00559cbf
    MOV ESI,dword ptr [EBX + 0x1c4480c] ; 00559cc1
    ADD EBX,0x4                         ; 00559cc7
    PUSH EDI                            ; 00559cca
    MOV EAX,ECX                         ; 00559ccb
    SHR ECX,0x2                         ; 00559ccd
    MOVSD.REP ES:EDI,ESI                ; 00559cd0
    MOV CL,AL                           ; 00559cd2
    AND CL,0x3                          ; 00559cd4
    MOVSB.REP ES:EDI,ESI                ; 00559cd7
    POP EDI                             ; 00559cd9
    MOV dword ptr [EBX + 0x1c44808],EDX ; 00559cda
    ADD EDX,0x100                       ; 00559ce0
    CMP EBX,0xc0                        ; 00559ce6
    JNZ 0x00559cba                      ; 00559cec
        ;   XREF to: 00559cba (CONDITIONAL_JUMP)  ; LAB_00559cba
    MOV ESI,dword ptr [ESP + 0xc0]      ; 00559cee
    XOR EBX,EBX                         ; 00559cf5
    TEST ESI,ESI                        ; 00559cf7
    JLE 0x00559d20                      ; 00559cf9
        ;   XREF to: 00559d20 (CONDITIONAL_JUMP)  ; LAB_00559d20
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00559cfb
    PUSH ESI                            ; 00559cfe
        ;   Label: LAB_00559cfe
    MOV EDI,dword ptr [0x00612560]      ; 00559cff | DAT_00612560
    PUSH EDI                            ; 00559d05
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 00559d06
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00559d0b
    INC EBX                             ; 00559d0e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00559d0f
    ADD ESI,0x48                        ; 00559d16
    CMP EBX,EAX                         ; 00559d19
    JL 0x00559cfe                       ; 00559d1b
        ;   XREF to: 00559cfe (CONDITIONAL_JUMP)  ; LAB_00559cfe
    LEA EAX,[EAX]                       ; 00559d1d
    PUSH 0x1                            ; 00559d20
        ;   Label: LAB_00559d20
    MOV EDX,dword ptr [0x00612560]      ; 00559d22 | DAT_00612560
    PUSH EDX                            ; 00559d28
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00559d29
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00559d2e
    PUSH 0x0                            ; 00559d31
    MOV ECX,dword ptr [0x00612560]      ; 00559d33 | DAT_00612560
    PUSH ECX                            ; 00559d39
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00559d3a
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00559d3f
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00559d42
    MOV dword ptr [ESP + 0xd4],EAX      ; 00559d49
    FILD dword ptr [ESP + 0xd4]         ; 00559d50
    FMUL float ptr [ESP]                ; 00559d57
    FSTP float ptr [ESP + 0x94]         ; 00559d5a
    MOV EAX,dword ptr [ESP + 0x94]      ; 00559d61
    MOV ESP,EBP                         ; 00559d68
    POP EBP                             ; 00559d6a
    POP EDI                             ; 00559d6b
    POP ESI                             ; 00559d6c
    POP EBX                             ; 00559d6d
    RET                                 ; 00559d6e

