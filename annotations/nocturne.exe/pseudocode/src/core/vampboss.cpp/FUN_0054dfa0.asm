; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_vampboss_cpp_FUN_0054dfa0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   float FLOAT_00597215 = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dfa0
        ;   Label: core_vampboss.cpp_FUN_0054dfa0
    SUB ESP,0x30                        ; 0054dfa1
    MOV ECX,dword ptr [ESP + 0x38]      ; 0054dfa4
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0054dfa8
    MOV EDX,ESP                         ; 0054dfac
    PUSH EDX                            ; 0054dfae
    MOV EAX,dword ptr [ECX + 0x14c]     ; 0054dfaf
    PUSH ECX                            ; 0054dfb5
    CALL dword ptr [EAX + 0x14]         ; 0054dfb6
    LEA EDX,[EAX + 0xc]                 ; 0054dfb9
    FLD float ptr [EAX]                 ; 0054dfbc
    FADD float ptr [EDX]                ; 0054dfbe
    ADD ESP,0x8                         ; 0054dfc0
    FST float ptr [ESP + 0x18]          ; 0054dfc3
    FLD float ptr [EAX + 0x4]           ; 0054dfc7
    FADD float ptr [EDX + 0x4]          ; 0054dfca
    FXCH                                ; 0054dfcd
    FLD float ptr [0x00597215]          ; 0054dfcf | FLOAT_00597215
    FXCH                                ; 0054dfd5
    FMUL ST1                            ; 0054dfd7
    FXCH ST2                            ; 0054dfd9
    FST float ptr [ESP + 0x1c]          ; 0054dfdb
    FLD float ptr [EAX + 0x8]           ; 0054dfdf
    FADD float ptr [EDX + 0x8]          ; 0054dfe2
    FXCH                                ; 0054dfe5
    FMUL ST2                            ; 0054dfe7
    FXCH                                ; 0054dfe9
    FST float ptr [ESP + 0x20]          ; 0054dfeb
    FMULP ST2                           ; 0054dfef
    LEA EAX,[ESP + 0x24]                ; 0054dff1
    FXCH ST2                            ; 0054dff5
    FSTP float ptr [ESP + 0x24]         ; 0054dff7
    FXCH                                ; 0054dffb
    FSTP float ptr [ESP + 0x28]         ; 0054dffd
    FSTP float ptr [ESP + 0x2c]         ; 0054e001
    CMP EBX,EAX                         ; 0054e005
    JNZ 0x0054e013                      ; 0054e007
        ;   XREF to: 0054e013 (CONDITIONAL_JUMP)  ; LAB_0054e013
    MOV EAX,0x1                         ; 0054e009
    ADD ESP,0x30                        ; 0054e00e
    POP EBX                             ; 0054e011
    RET                                 ; 0054e012
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054e013
        ;   Label: LAB_0054e013
    MOV dword ptr [EBX],EAX             ; 0054e017
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054e019
    MOV dword ptr [EBX + 0x4],EAX       ; 0054e01d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0054e020
    MOV dword ptr [EBX + 0x8],EAX       ; 0054e024
    MOV EAX,0x1                         ; 0054e027
    ADD ESP,0x30                        ; 0054e02c
    POP EBX                             ; 0054e02f
    RET                                 ; 0054e030

