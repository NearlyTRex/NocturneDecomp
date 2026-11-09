; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_spotview_cpp_FUN_00561d90(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
;   engine_drender.cpp_FUN_0046afb0
;   engine_matrix.c_FUN_0046b4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561d90
        ;   Label: shape_spotview.cpp_FUN_00561d90
    PUSH ESI                            ; 00561d91
    PUSH EDI                            ; 00561d92
    SUB ESP,0x7c                        ; 00561d93
    MOV EBX,dword ptr [ESP + 0x8c]      ; 00561d96
    MOV EDX,dword ptr [0x0060b280]      ; 00561d9d | DAT_0060b280
    PUSH 0x41e00000                     ; 00561da3
    PUSH EDX                            ; 00561da8
    CALL engine_matrix.c_FUN_0046b4b0   ; 00561da9
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b4b0()
    ADD ESP,0x8                         ; 00561dae
    MOV EAX,dword ptr [EBX + 0x24]      ; 00561db1
    XOR ECX,ECX                         ; 00561db4
    MOV dword ptr [ESP + 0x34],EAX      ; 00561db6
    MOV dword ptr [ESP + 0x3c],ECX      ; 00561dba
    MOV EAX,dword ptr [EBX + 0x28]      ; 00561dbe
    MOV dword ptr [ESP + 0x38],EAX      ; 00561dc1
    LEA EAX,[ESP + 0x34]                ; 00561dc5
    PUSH EAX                            ; 00561dc9
    LEA EAX,[ESP + 0x4]                 ; 00561dca
    PUSH EAX                            ; 00561dce
    CALL core_dirmat.cpp_FUN_00449280   ; 00561dcf
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00561dd4
    MOV EAX,dword ptr [EBX + 0x30]      ; 00561dd7
    MOV dword ptr [ESP + 0x74],EAX      ; 00561dda
    MOV EAX,dword ptr [EBX + 0x34]      ; 00561dde
    FLD float ptr [EBX + 0x2c]          ; 00561de1
    MOV dword ptr [ESP + 0x78],EAX      ; 00561de4
    MOV EAX,dword ptr [ESP + 0x74]      ; 00561de8
    FCHS                                ; 00561dec
    MOV dword ptr [ESP + 0x40],EAX      ; 00561dee
    MOV EAX,dword ptr [ESP + 0x78]      ; 00561df2
    FSTP float ptr [ESP + 0x70]         ; 00561df6
    MOV dword ptr [ESP + 0x44],EAX      ; 00561dfa
    MOV EAX,dword ptr [ESP + 0x70]      ; 00561dfe
    MOV dword ptr [ESP + 0x48],EAX      ; 00561e02
    LEA EAX,[ESP + 0x40]                ; 00561e06
    PUSH EAX                            ; 00561e0a
    LEA EAX,[ESP + 0x4]                 ; 00561e0b
    PUSH EAX                            ; 00561e0f
    LEA ESI,[ESP + 0x60]                ; 00561e10
    LEA EDI,[ESP + 0x54]                ; 00561e14
    CALL core_dirmat.cpp_FUN_00449530   ; 00561e18
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x60]                ; 00561e1d
    ADD ESP,0x8                         ; 00561e21
    LEA EAX,[ESP + 0x28]                ; 00561e24
    MOVSD ES:EDI,ESI                    ; 00561e28
    MOVSD ES:EDI,ESI                    ; 00561e29
    MOVSD ES:EDI,ESI                    ; 00561e2a
    PUSH EAX                            ; 00561e2b
    FLD float ptr [EBX + 0x1c]          ; 00561e2c
    FLD float ptr [EBX + 0x20]          ; 00561e2f
    FLD float ptr [EBX + 0x18]          ; 00561e32
    LEA EDI,[ESP + 0x2c]                ; 00561e35
    LEA ESI,[ESP + 0x68]                ; 00561e39
    MOV EBX,dword ptr [0x0060b280]      ; 00561e3d | DAT_0060b280
    FADD float ptr [ESP + 0x50]         ; 00561e43
    FXCH ST2                            ; 00561e47
    FADD float ptr [ESP + 0x54]         ; 00561e49
    FXCH                                ; 00561e4d
    FADD float ptr [ESP + 0x58]         ; 00561e4f
    FXCH ST2                            ; 00561e53
    FSTP float ptr [ESP + 0x68]         ; 00561e55
    FSTP float ptr [ESP + 0x6c]         ; 00561e59
    FSTP float ptr [ESP + 0x70]         ; 00561e5d
    PUSH EBX                            ; 00561e61
    MOVSD ES:EDI,ESI                    ; 00561e62
    MOVSD ES:EDI,ESI                    ; 00561e63
    MOVSD ES:EDI,ESI                    ; 00561e64
    CALL engine_drender.cpp_FUN_0046afb0 ; 00561e65
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 00561e6a
    LEA EAX,[ESP + 0x34]                ; 00561e6d
    PUSH EAX                            ; 00561e71
    MOV ESI,dword ptr [0x0060b280]      ; 00561e72 | DAT_0060b280
    PUSH ESI                            ; 00561e78
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030 ; 00561e79
        ;   XREF to: 0046b030 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00561e7e
    ADD ESP,0x7c                        ; 00561e81
    POP EDI                             ; 00561e84
    POP ESI                             ; 00561e85
    POP EBX                             ; 00561e86
    RET                                 ; 00561e87

