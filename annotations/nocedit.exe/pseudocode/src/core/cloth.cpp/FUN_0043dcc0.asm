; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_cloth_cpp_FUN_0043dcc0(void)
;
;
; XREF[1]:
;   core_cloth.cpp_FUN_0043ddf0 at 0043e08e
;
; Referenced Globals:
;   float FLOAT_0065bb44 = 0.00390625
;   float FLOAT_0065bb54 = 0.125
;   float FLOAT_0065bb58 = 32
;   float FLOAT_0065bb5c = 0.9000000
;   float FLOAT_0065bb60 = 0.005000000
;   float FLOAT_0065bb64 = 0.5
;   float FLOAT_0065bb68 = 0.5
;   float FLOAT_0065bb6c = 0.05000000
;   float FLOAT_0065bb70 = 0.1500000
;
; Called Functions:
;   core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
;   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043dcc0
        ;   Label: core_cloth.cpp_FUN_0043dcc0
    PUSH EDI                            ; 0043dcc1
    PUSH EBP                            ; 0043dcc2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043dcc3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043dcc7
    PUSH EDX                            ; 0043dccb
    PUSH EDI                            ; 0043dccc
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 0043dccd
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0043dcd2
    PUSH EDI                            ; 0043dcd5
    CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190 ; 0043dcd6
        ;   XREF to: 00478190 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190(CKeyFramedModel * this_ptr)
    FLD float ptr [0x0065bb54]          ; 0043dcdb | FLOAT_0065bb54
    FLD float ptr [0x0065bb58]          ; 0043dce1 | FLOAT_0065bb58
    FLD float ptr [0x0065bb5c]          ; 0043dce7 | FLOAT_0065bb5c
    FLD float ptr [0x0065bb60]          ; 0043dced | FLOAT_0065bb60
    MOV dword ptr [EDI + 0x3ce88],0x3f800000 ; 0043dcf3
    FLD float ptr [0x0065bb64]          ; 0043dcfd | FLOAT_0065bb64
    MOV dword ptr [EDI + 0x3ce84],0x1   ; 0043dd03
    FLD float ptr [0x0065bb68]          ; 0043dd0d | FLOAT_0065bb68
    MOV dword ptr [EDI + 0x3f028],0x0   ; 0043dd13
    FLD float ptr [0x0065bb6c]          ; 0043dd1d | FLOAT_0065bb6c
    MOV dword ptr [EDI + 0x3ce8c],0x0   ; 0043dd23
    ADD ESP,0x4                         ; 0043dd2d
    FXCH ST6                            ; 0043dd30
    FSTP float ptr [EDI + 0x3ce58]      ; 0043dd32
    FLD float ptr [0x0065bb70]          ; 0043dd38 | FLOAT_0065bb70
    FXCH ST5                            ; 0043dd3e
    FSTP float ptr [EDI + 0x3ce5c]      ; 0043dd40
    FXCH ST3                            ; 0043dd46
    FSTP float ptr [EDI + 0x3ce60]      ; 0043dd48
    FXCH                                ; 0043dd4e
    FSTP float ptr [EDI + 0x3ce64]      ; 0043dd50
    FSTP float ptr [EDI + 0x3ce68]      ; 0043dd56
    FSTP float ptr [EDI + 0x3ce6c]      ; 0043dd5c
    FXCH                                ; 0043dd62
    FSTP float ptr [EDI + 0x3ce70]      ; 0043dd64
    PUSH EDI                            ; 0043dd6a
    FSTP float ptr [EDI + 0x3ce74]      ; 0043dd6b
    CALL core_cloth.cpp_CCloth_allocMemory_FUN_00438c50 ; 0043dd71
        ;   XREF to: 00438c50 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_allocMemory_FUN_00438c50(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043dd76
    MOV EBX,dword ptr [EDI + 0x104]     ; 0043dd79
    XOR ECX,ECX                         ; 0043dd7f
    TEST EBX,EBX                        ; 0043dd81
    JLE 0x0043ddcf                      ; 0043dd83
        ;   XREF to: 0043ddcf (CONDITIONAL_JUMP)  ; LAB_0043ddcf
    PUSH ESI                            ; 0043dd85
    LEA EDX,[EDI + 0x5798]              ; 0043dd86
    XOR ESI,ESI                         ; 0043dd8c
    MOV EAX,dword ptr [EDI + 0x10c]     ; 0043dd8e
        ;   Label: LAB_0043dd8e
    MOV EBX,EDX                         ; 0043dd94
    ADD EAX,ESI                         ; 0043dd96
    INC ECX                             ; 0043dd98
    FILD dword ptr [EAX]                ; 0043dd99
    FMUL float ptr [0x0065bb44]         ; 0043dd9b | FLOAT_0065bb44
    FSTP float ptr [EBX]                ; 0043dda1
    FILD dword ptr [EAX + 0x4]          ; 0043dda3
    FMUL float ptr [0x0065bb44]         ; 0043dda6 | FLOAT_0065bb44
    FSTP float ptr [EBX + 0x4]          ; 0043ddac
    FILD dword ptr [EAX + 0x8]          ; 0043ddaf
    FMUL float ptr [0x0065bb44]         ; 0043ddb2 | FLOAT_0065bb44
    FSTP float ptr [EBX + 0x8]          ; 0043ddb8
    ADD EDX,0x11c                       ; 0043ddbb
    MOV EBP,dword ptr [EDI + 0x104]     ; 0043ddc1
    ADD ESI,0xc                         ; 0043ddc7
    CMP ECX,EBP                         ; 0043ddca
    JL 0x0043dd8e                       ; 0043ddcc
        ;   XREF to: 0043dd8e (CONDITIONAL_JUMP)  ; LAB_0043dd8e
    POP ESI                             ; 0043ddce
    POP EBP                             ; 0043ddcf
        ;   Label: LAB_0043ddcf
    POP EDI                             ; 0043ddd0
    POP EBX                             ; 0043ddd1
    RET                                 ; 0043ddd2

