; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f5d50(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f3920 at 004f39f6
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f4f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5d50
        ;   Label: engine_mini3d.cpp_FUN_004f5d50
    PUSH ESI                            ; 004f5d51
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f5d52
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f5d56
    FLD float ptr [ESI]                 ; 004f5d5a
    LEA EAX,[EBX + 0xc]                 ; 004f5d5c
    FSTP float ptr [EBX]                ; 004f5d5f
    FLD float ptr [ESI + 0x4]           ; 004f5d61
    PUSH EAX                            ; 004f5d64
    FSTP float ptr [EBX + 0x4]          ; 004f5d65
    FLD float ptr [ESI + 0x8]           ; 004f5d68
    PUSH ESI                            ; 004f5d6b
    FSTP float ptr [EBX + 0x8]          ; 004f5d6c
    CALL engine_mini3d.cpp_FUN_004f4f50 ; 004f5d6f
        ;   XREF to: 004f4f50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f4f50()
    FLD float ptr [ESI + 0x18]          ; 004f5d74
    ADD ESP,0x8                         ; 004f5d77
    FSTP float ptr [EBX + 0x1c]         ; 004f5d7a
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004f5d7d
    MOV dword ptr [EBX + 0x20],EAX      ; 004f5d80
    POP ESI                             ; 004f5d83
    POP EBX                             ; 004f5d84
    RET                                 ; 004f5d85

