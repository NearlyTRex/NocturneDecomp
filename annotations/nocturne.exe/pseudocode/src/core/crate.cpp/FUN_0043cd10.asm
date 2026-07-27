; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_crate_cpp_FUN_0043cd10(int param_1,float *param_2)
;
;
; Referenced Globals:
;   float FLOAT_0057b45b = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cd10
        ;   Label: core_crate.cpp_FUN_0043cd10
    SUB ESP,0x30                        ; 0043cd11
    MOV ECX,dword ptr [ESP + 0x38]      ; 0043cd14
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0043cd18
    MOV EDX,ESP                         ; 0043cd1c
    PUSH EDX                            ; 0043cd1e
    MOV EAX,dword ptr [ECX + 0x14c]     ; 0043cd1f
    PUSH ECX                            ; 0043cd25
    CALL dword ptr [EAX + 0x14]         ; 0043cd26
    LEA EDX,[EAX + 0xc]                 ; 0043cd29
    FLD float ptr [EAX]                 ; 0043cd2c
    FADD float ptr [EDX]                ; 0043cd2e
    ADD ESP,0x8                         ; 0043cd30
    FST float ptr [ESP + 0x18]          ; 0043cd33
    FLD float ptr [EAX + 0x4]           ; 0043cd37
    FADD float ptr [EDX + 0x4]          ; 0043cd3a
    FXCH                                ; 0043cd3d
    FLD float ptr [0x0057b45b]          ; 0043cd3f | FLOAT_0057b45b
    FXCH                                ; 0043cd45
    FMUL ST1                            ; 0043cd47
    FXCH ST2                            ; 0043cd49
    FST float ptr [ESP + 0x1c]          ; 0043cd4b
    FLD float ptr [EAX + 0x8]           ; 0043cd4f
    FADD float ptr [EDX + 0x8]          ; 0043cd52
    FXCH                                ; 0043cd55
    FMUL ST2                            ; 0043cd57
    FXCH                                ; 0043cd59
    FST float ptr [ESP + 0x20]          ; 0043cd5b
    FMULP ST2                           ; 0043cd5f
    LEA EAX,[ESP + 0x24]                ; 0043cd61
    FXCH ST2                            ; 0043cd65
    FSTP float ptr [ESP + 0x24]         ; 0043cd67
    FXCH                                ; 0043cd6b
    FSTP float ptr [ESP + 0x28]         ; 0043cd6d
    FSTP float ptr [ESP + 0x2c]         ; 0043cd71
    CMP EBX,EAX                         ; 0043cd75
    JNZ 0x0043cd83                      ; 0043cd77
        ;   XREF to: 0043cd83 (CONDITIONAL_JUMP)  ; LAB_0043cd83
    MOV EAX,0x1                         ; 0043cd79
    ADD ESP,0x30                        ; 0043cd7e
    POP EBX                             ; 0043cd81
    RET                                 ; 0043cd82
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043cd83
        ;   Label: LAB_0043cd83
    MOV dword ptr [EBX],EAX             ; 0043cd87
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043cd89
    MOV dword ptr [EBX + 0x4],EAX       ; 0043cd8d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043cd90
    MOV dword ptr [EBX + 0x8],EAX       ; 0043cd94
    MOV EAX,0x1                         ; 0043cd97
    ADD ESP,0x30                        ; 0043cd9c
    POP EBX                             ; 0043cd9f
    RET                                 ; 0043cda0

