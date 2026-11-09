; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0170(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004edea0 at 004edff6
;
; Referenced Globals:
;   undefined4 DAT_005c8195
;   undefined4 DAT_006004e0
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004ef470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0170
        ;   Label: engine_mini3d.cpp_FUN_004f0170
    PUSH ESI                            ; 004f0171
    PUSH EDI                            ; 004f0172
    PUSH EBP                            ; 004f0173
    SUB ESP,0x30                        ; 004f0174
    MOV EDI,dword ptr [ESP + 0x44]      ; 004f0177
    MOV EBP,dword ptr [ESP + 0x48]      ; 004f017b
    FLD float ptr [EBP]                 ; 004f017f
    MOV EAX,ESP                         ; 004f0182
    FSTP float ptr [EDI]                ; 004f0184
    FLD float ptr [EBP + 0x4]           ; 004f0186
    PUSH EAX                            ; 004f0189
    FSTP float ptr [EDI + 0x4]          ; 004f018a
    FLD float ptr [EBP + 0x8]           ; 004f018d
    PUSH EBP                            ; 004f0190
    FSTP float ptr [EDI + 0x8]          ; 004f0191
    MOV dword ptr [EDI + 0xc],0x0       ; 004f0194
    CALL engine_mini3d.cpp_FUN_004ef470 ; 004f019b
        ;   XREF to: 004ef470 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ef470()
    ADD ESP,0x8                         ; 004f01a0
    FLD float ptr [ESP]                 ; 004f01a3
    FMUL float ptr [0x005c8195]         ; 004f01a6 | DAT_005c8195
    LEA EBX,[ESP + 0x1c]                ; 004f01ac
    LEA EAX,[ESP + 0x10]                ; 004f01b0
    FSTP float ptr [ESP + 0x1c]         ; 004f01b4
    FLD float ptr [EBX]                 ; 004f01b8
    FLD float ptr [0x006004e0]          ; 004f01ba | DAT_006004e0
    FSUBP                               ; 004f01c0
    FISTP dword ptr [EAX]               ; 004f01c2
    FLD float ptr [ESP + 0x4]           ; 004f01c4
    FMUL float ptr [0x005c8195]         ; 004f01c8 | DAT_005c8195
    LEA EBX,[ESP + 0x24]                ; 004f01ce
    LEA EAX,[ESP + 0x14]                ; 004f01d2
    FSTP float ptr [ESP + 0x24]         ; 004f01d6
    FLD float ptr [EBX]                 ; 004f01da
    FLD float ptr [0x006004e0]          ; 004f01dc | DAT_006004e0
    FSUBP                               ; 004f01e2
    FISTP dword ptr [EAX]               ; 004f01e4
    FLD float ptr [ESP + 0x8]           ; 004f01e6
    FMUL float ptr [0x005c8195]         ; 004f01ea | DAT_005c8195
    LEA EBX,[ESP + 0x28]                ; 004f01f0
    LEA EAX,[ESP + 0x20]                ; 004f01f4
    FSTP float ptr [ESP + 0x28]         ; 004f01f8
    FLD float ptr [EBX]                 ; 004f01fc
    FLD float ptr [0x006004e0]          ; 004f01fe | DAT_006004e0
    FSUBP                               ; 004f0204
    FISTP dword ptr [EAX]               ; 004f0206
    FLD float ptr [ESP + 0xc]           ; 004f0208
    FMUL float ptr [0x005c8195]         ; 004f020c | DAT_005c8195
    LEA EBX,[ESP + 0x2c]                ; 004f0212
    LEA EAX,[ESP + 0x18]                ; 004f0216
    FSTP float ptr [ESP + 0x2c]         ; 004f021a
    FLD float ptr [EBX]                 ; 004f021e
    FLD float ptr [0x006004e0]          ; 004f0220 | DAT_006004e0
    FSUBP                               ; 004f0226
    FISTP dword ptr [EAX]               ; 004f0228
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f022a
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f022e
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f0232
    SHL EAX,0x8                         ; 004f0236
    SHL EBX,0x10                        ; 004f0239
    OR EAX,EDX                          ; 004f023c
    OR EBX,EAX                          ; 004f023e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f0240
    SHL EAX,0x18                        ; 004f0244
    MOV dword ptr [EDI + 0x14],0x0      ; 004f0247
    OR EBX,EAX                          ; 004f024e
    MOV dword ptr [EDI + 0x10],EBX      ; 004f0250
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f0253
    MOV dword ptr [EDI + 0x18],EAX      ; 004f0256
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f0259
    MOV dword ptr [EDI + 0x1c],EAX      ; 004f025c
    ADD ESP,0x30                        ; 004f025f
    POP EBP                             ; 004f0262
    POP EDI                             ; 004f0263
    POP ESI                             ; 004f0264
    POP EBX                             ; 004f0265
    RET                                 ; 004f0266

