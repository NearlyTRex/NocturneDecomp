; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00446df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float *param_5,uint *param_6)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00473b20 at 00473c7a
;
; Referenced Globals:
;   undefined4 DAT_01510da8
;   undefined4 DAT_01510dac
;   undefined4 DAT_01510db0
;   undefined4 DAT_01510db4
;   undefined4 DAT_01510db8
;   undefined4 DAT_01510dbc
;   undefined4 DAT_01510dc0
;   undefined4 DAT_01510dc4
;   undefined4 DAT_01510dc8
;
; Called Functions:
;   FUN_00445620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446df0
        ;   Label: FUN_00446df0
    PUSH ESI                            ; 00446df1
    PUSH EDI                            ; 00446df2
    PUSH EBP                            ; 00446df3
    SUB ESP,0x18                        ; 00446df4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00446df7
    MOV EBP,0xffffffff                  ; 00446dfb
    MOV EDX,dword ptr [EBX + 0x28]      ; 00446e00
    XOR ESI,ESI                         ; 00446e03
    TEST EDX,EDX                        ; 00446e05
    JLE 0x00446e38                      ; 00446e07
        ;   XREF to: 00446e38 (CONDITIONAL_JUMP)  ; LAB_00446e38
    XOR EDI,EDI                         ; 00446e09
    MOV EAX,dword ptr [ESP + 0x38]      ; 00446e0b
        ;   Label: LAB_00446e0b
    PUSH EAX                            ; 00446e0f
    MOV EDX,dword ptr [ESP + 0x34]      ; 00446e10
    PUSH dword ptr [ESP + 0x38]         ; 00446e14
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00446e18
    PUSH EDX                            ; 00446e1b
    ADD EAX,EDI                         ; 00446e1c
    PUSH EAX                            ; 00446e1e
    CALL FUN_00445620                   ; 00446e1f
        ;   XREF to: 00445620 (UNCONDITIONAL_CALL)  ; undefined FUN_00445620()
    ADD ESP,0x10                        ; 00446e24
    TEST EAX,EAX                        ; 00446e27
    JZ 0x00446e2d                       ; 00446e29
        ;   XREF to: 00446e2d (CONDITIONAL_JUMP)  ; LAB_00446e2d
    MOV EBP,ESI                         ; 00446e2b
    INC ESI                             ; 00446e2d
        ;   Label: LAB_00446e2d
    MOV ECX,dword ptr [EBX + 0x28]      ; 00446e2e
    ADD EDI,0x20                        ; 00446e31
    CMP ESI,ECX                         ; 00446e34
    JL 0x00446e0b                       ; 00446e36
        ;   XREF to: 00446e0b (CONDITIONAL_JUMP)  ; LAB_00446e0b
    TEST EBP,EBP                        ; 00446e38
        ;   Label: LAB_00446e38
    JL 0x00446f38                       ; 00446e3a
        ;   XREF to: 00446f38 (CONDITIONAL_JUMP)  ; LAB_00446f38
    MOV ESI,EBP                         ; 00446e40
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00446e42
    SHL ESI,0x5                         ; 00446e45
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 00446e48
    CMP EAX,0x1510da8                   ; 00446e4b
    JZ 0x00446e6c                       ; 00446e50
        ;   XREF to: 00446e6c (CONDITIONAL_JUMP)  ; LAB_00446e6c
    FLD float ptr [EAX]                 ; 00446e52
    FLD float ptr [EAX + 0x8]           ; 00446e54
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446e57
    MOV dword ptr [0x01510dac],EDX      ; 00446e5a | DAT_01510dac
    FSTP float ptr [0x01510db0]         ; 00446e60 | DAT_01510db0
    FSTP float ptr [0x01510da8]         ; 00446e66 | DAT_01510da8
    MOV EAX,EBP                         ; 00446e6c
        ;   Label: LAB_00446e6c
    MOV ESI,dword ptr [EBX + 0x2c]      ; 00446e6e
    SHL EAX,0x5                         ; 00446e71
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00446e74
    CMP EAX,0x1510db4                   ; 00446e78
    JZ 0x00446e99                       ; 00446e7d
        ;   XREF to: 00446e99 (CONDITIONAL_JUMP)  ; LAB_00446e99
    FLD float ptr [EAX]                 ; 00446e7f
    FLD float ptr [EAX + 0x8]           ; 00446e81
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446e84
    MOV dword ptr [0x01510db8],EDX      ; 00446e87 | DAT_01510db8
    FSTP float ptr [0x01510dbc]         ; 00446e8d | DAT_01510dbc
    FSTP float ptr [0x01510db4]         ; 00446e93 | DAT_01510db4
    MOV ESI,EBP                         ; 00446e99
        ;   Label: LAB_00446e99
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00446e9b
    SHL ESI,0x5                         ; 00446e9e
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x8] ; 00446ea1
    CMP EAX,0x1510dc0                   ; 00446ea5
    JZ 0x00446ec6                       ; 00446eaa
        ;   XREF to: 00446ec6 (CONDITIONAL_JUMP)  ; LAB_00446ec6
    FLD float ptr [EAX]                 ; 00446eac
    FLD float ptr [EAX + 0x8]           ; 00446eae
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446eb1
    MOV dword ptr [0x01510dc4],EDX      ; 00446eb4 | DAT_01510dc4
    FSTP float ptr [0x01510dc8]         ; 00446eba | DAT_01510dc8
    FSTP float ptr [0x01510dc0]         ; 00446ec0 | DAT_01510dc0
    MOV EAX,dword ptr [EBX + 0x30]      ; 00446ec6
        ;   Label: LAB_00446ec6
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 00446ec9
    MOV ESI,dword ptr [ESP + 0x40]      ; 00446ecc
    AND EAX,0xff                        ; 00446ed0
    MOV dword ptr [ESI],EAX             ; 00446ed5
    MOV EDI,ESP                         ; 00446ed7
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00446ed9
    SHL EBP,0x5                         ; 00446edc
    LEA ESI,[ESP + 0xc]                 ; 00446edf
    FLD float ptr [EAX + EBP*0x1 + 0xc] ; 00446ee3
    FLD float ptr [EAX + EBP*0x1 + 0x10] ; 00446ee7
    FLD float ptr [EAX + EBP*0x1 + 0x14] ; 00446eeb
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00446eef
    FXCH ST2                            ; 00446ef3
    FCHS                                ; 00446ef5
    FXCH                                ; 00446ef7
    FCHS                                ; 00446ef9
    FXCH ST2                            ; 00446efb
    FCHS                                ; 00446efd
    MOV EAX,ESP                         ; 00446eff
    FXCH                                ; 00446f01
    FSTP float ptr [ESP + 0xc]          ; 00446f03
    FXCH                                ; 00446f07
    FSTP float ptr [ESP + 0x10]         ; 00446f09
    FSTP float ptr [ESP + 0x14]         ; 00446f0d
    MOVSD ES:EDI,ESI                    ; 00446f11
    MOVSD ES:EDI,ESI                    ; 00446f12
    MOVSD ES:EDI,ESI                    ; 00446f13
    CMP EAX,EBX                         ; 00446f14
    JZ 0x00446f2b                       ; 00446f16
        ;   XREF to: 00446f2b (CONDITIONAL_JUMP)  ; LAB_00446f2b
    MOV EAX,dword ptr [ESP]             ; 00446f18
    MOV dword ptr [EBX],EAX             ; 00446f1b
    MOV EAX,dword ptr [ESP + 0x4]       ; 00446f1d
    MOV dword ptr [EBX + 0x4],EAX       ; 00446f21
    MOV EAX,dword ptr [ESP + 0x8]       ; 00446f24
    MOV dword ptr [EBX + 0x8],EAX       ; 00446f28
    MOV EAX,0x1                         ; 00446f2b
        ;   Label: LAB_00446f2b
    ADD ESP,0x18                        ; 00446f30
    POP EBP                             ; 00446f33
    POP EDI                             ; 00446f34
    POP ESI                             ; 00446f35
    POP EBX                             ; 00446f36
    RET                                 ; 00446f37
    XOR EAX,EAX                         ; 00446f38
        ;   Label: LAB_00446f38
    ADD ESP,0x18                        ; 00446f3a
    POP EBP                             ; 00446f3d
    POP EDI                             ; 00446f3e
    POP ESI                             ; 00446f3f
    POP EBX                             ; 00446f40
    RET                                 ; 00446f41

