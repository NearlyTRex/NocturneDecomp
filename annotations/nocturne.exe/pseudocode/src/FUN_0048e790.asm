; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048e790(int param_1,float *param_2)
;
;
; Referenced Globals:
;   float FLOAT_0058165b = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e790
        ;   Label: FUN_0048e790
    SUB ESP,0x30                        ; 0048e791
    MOV ECX,dword ptr [ESP + 0x38]      ; 0048e794
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0048e798
    MOV EDX,ESP                         ; 0048e79c
    PUSH EDX                            ; 0048e79e
    MOV EAX,dword ptr [ECX + 0x14c]     ; 0048e79f
    PUSH ECX                            ; 0048e7a5
    CALL dword ptr [EAX + 0x14]         ; 0048e7a6
    LEA EDX,[EAX + 0xc]                 ; 0048e7a9
    FLD float ptr [EAX]                 ; 0048e7ac
    FADD float ptr [EDX]                ; 0048e7ae
    ADD ESP,0x8                         ; 0048e7b0
    FST float ptr [ESP + 0x18]          ; 0048e7b3
    FLD float ptr [EAX + 0x4]           ; 0048e7b7
    FADD float ptr [EDX + 0x4]          ; 0048e7ba
    FXCH                                ; 0048e7bd
    FLD float ptr [0x0058165b]          ; 0048e7bf | FLOAT_0058165b
    FXCH                                ; 0048e7c5
    FMUL ST1                            ; 0048e7c7
    FXCH ST2                            ; 0048e7c9
    FST float ptr [ESP + 0x1c]          ; 0048e7cb
    FLD float ptr [EAX + 0x8]           ; 0048e7cf
    FADD float ptr [EDX + 0x8]          ; 0048e7d2
    FXCH                                ; 0048e7d5
    FMUL ST2                            ; 0048e7d7
    FXCH                                ; 0048e7d9
    FST float ptr [ESP + 0x20]          ; 0048e7db
    FMULP ST2                           ; 0048e7df
    LEA EAX,[ESP + 0x24]                ; 0048e7e1
    FXCH ST2                            ; 0048e7e5
    FSTP float ptr [ESP + 0x24]         ; 0048e7e7
    FXCH                                ; 0048e7eb
    FSTP float ptr [ESP + 0x28]         ; 0048e7ed
    FSTP float ptr [ESP + 0x2c]         ; 0048e7f1
    CMP EBX,EAX                         ; 0048e7f5
    JNZ 0x0048e803                      ; 0048e7f7
        ;   XREF to: 0048e803 (CONDITIONAL_JUMP)  ; LAB_0048e803
    MOV EAX,0x1                         ; 0048e7f9
    ADD ESP,0x30                        ; 0048e7fe
    POP EBX                             ; 0048e801
    RET                                 ; 0048e802
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048e803
        ;   Label: LAB_0048e803
    MOV dword ptr [EBX],EAX             ; 0048e807
    MOV EAX,dword ptr [ESP + 0x28]      ; 0048e809
    MOV dword ptr [EBX + 0x4],EAX       ; 0048e80d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0048e810
    MOV dword ptr [EBX + 0x8],EAX       ; 0048e814
    MOV EAX,0x1                         ; 0048e817
    ADD ESP,0x30                        ; 0048e81c
    POP EBX                             ; 0048e81f
    RET                                 ; 0048e820

