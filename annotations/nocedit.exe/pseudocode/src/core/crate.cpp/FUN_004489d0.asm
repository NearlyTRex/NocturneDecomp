; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_crate.cpp_FUN_004489d0()
;
;
; Referenced Globals:
;   float FLOAT_00619b2a = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004489d0
        ;   Label: core_crate.cpp_FUN_004489d0
    SUB ESP,0x30                        ; 004489d1
    MOV ECX,dword ptr [ESP + 0x38]      ; 004489d4
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004489d8
    MOV EDX,ESP                         ; 004489dc
    PUSH EDX                            ; 004489de
    MOV EAX,dword ptr [ECX + 0x154]     ; 004489df
    PUSH ECX                            ; 004489e5
    CALL dword ptr [EAX + 0x14]         ; 004489e6
    LEA EDX,[EAX + 0xc]                 ; 004489e9
    FLD float ptr [EAX]                 ; 004489ec
    FADD float ptr [EDX]                ; 004489ee
    ADD ESP,0x8                         ; 004489f0
    FST float ptr [ESP + 0x18]          ; 004489f3
    FLD float ptr [EAX + 0x4]           ; 004489f7
    FADD float ptr [EDX + 0x4]          ; 004489fa
    FXCH                                ; 004489fd
    FLD float ptr [0x00619b2a]          ; 004489ff | float FLOAT_00619b2a
    FXCH                                ; 00448a05
    FMUL ST1                            ; 00448a07
    FXCH ST2                            ; 00448a09
    FST float ptr [ESP + 0x1c]          ; 00448a0b
    FLD float ptr [EAX + 0x8]           ; 00448a0f
    FADD float ptr [EDX + 0x8]          ; 00448a12
    FXCH                                ; 00448a15
    FMUL ST2                            ; 00448a17
    FXCH                                ; 00448a19
    FST float ptr [ESP + 0x20]          ; 00448a1b
    FMULP ST2                           ; 00448a1f
    LEA EAX,[ESP + 0x24]                ; 00448a21
    FXCH ST2                            ; 00448a25
    FSTP float ptr [ESP + 0x24]         ; 00448a27
    FXCH                                ; 00448a2b
    FSTP float ptr [ESP + 0x28]         ; 00448a2d
    FSTP float ptr [ESP + 0x2c]         ; 00448a31
    CMP EBX,EAX                         ; 00448a35
    JNZ 0x00448a43                      ; 00448a37 | LAB_00448a43
        ;   XREF to: 00448a43 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00448a39
    ADD ESP,0x30                        ; 00448a3e
    POP EBX                             ; 00448a41
    RET                                 ; 00448a42
    MOV EAX,dword ptr [ESP + 0x24]      ; 00448a43
        ;   Label: LAB_00448a43
    MOV dword ptr [EBX],EAX             ; 00448a47
    MOV EAX,dword ptr [ESP + 0x28]      ; 00448a49
    MOV dword ptr [EBX + 0x4],EAX       ; 00448a4d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00448a50
    MOV dword ptr [EBX + 0x8],EAX       ; 00448a54
    MOV EAX,0x1                         ; 00448a57
    ADD ESP,0x30                        ; 00448a5c
    POP EBX                             ; 00448a5f
    RET                                 ; 00448a60

