; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c7ea0(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004c9810 at 004c9838
;
; Referenced Globals:
;   undefined4 DAT_005f7ba8
;   undefined4 DAT_005f7bac
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_005b9989
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7ea0
        ;   Label: FUN_004c7ea0
    PUSH ESI                            ; 004c7ea1
    PUSH EDI                            ; 004c7ea2
    PUSH EBP                            ; 004c7ea3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c7ea4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c7ea8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004c7eac
    LEA EAX,[ESI + 0x4]                 ; 004c7eb0
    MOV dword ptr [ESI + 0x10],0x1      ; 004c7eb3
    CMP EAX,EBP                         ; 004c7eba
    JZ 0x004c7ecf                       ; 004c7ebc
        ;   XREF to: 004c7ecf (CONDITIONAL_JUMP)  ; LAB_004c7ecf
    MOV EDX,dword ptr [EBP]             ; 004c7ebe
    MOV dword ptr [EAX],EDX             ; 004c7ec1
    MOV EDX,dword ptr [EBP + 0x4]       ; 004c7ec3
    MOV dword ptr [EAX + 0x4],EDX       ; 004c7ec6
    MOV EDX,dword ptr [EBP + 0x8]       ; 004c7ec9
    MOV dword ptr [EAX + 0x8],EDX       ; 004c7ecc
    FLD float ptr [EDI + 0x8]           ; 004c7ecf
        ;   Label: LAB_004c7ecf
    FMUL ST0                            ; 004c7ed2
    FLD float ptr [EDI]                 ; 004c7ed4
    FMUL ST0                            ; 004c7ed6
    FADDP                               ; 004c7ed8
    FSQRT                               ; 004c7eda
    FLD float ptr [EDI + 0x4]           ; 004c7edc
    CALL FUN_005b9989                   ; 004c7edf
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    MOV dword ptr [ESI + 0x20],0x0      ; 004c7ee4
    FCHS                                ; 004c7eeb
    FSTP float ptr [ESI + 0x18]         ; 004c7eed
    FLD float ptr [EDI + 0x8]           ; 004c7ef0
    FLD float ptr [EDI]                 ; 004c7ef3
    CALL FUN_005b9989                   ; 004c7ef5
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    PUSH 0x3                            ; 004c7efa
    LEA EBX,[ESI + 0x2c]                ; 004c7efc
    PUSH 0x0                            ; 004c7eff
    FSTP float ptr [ESI + 0x1c]         ; 004c7f01
    CALL FUN_0040cfc0                   ; 004c7f04
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 004c7f09
    MOV dword ptr [ESI + 0x28],EAX      ; 004c7f0c
    MOV EAX,EBP                         ; 004c7f0f
    MOV dword ptr [ESI + 0x24],0x0      ; 004c7f11
    FLD float ptr [EAX]                 ; 004c7f18
    FMUL float ptr [0x005f7ba8]         ; 004c7f1a | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c7f20
    FLD float ptr [EAX + 0x4]           ; 004c7f22
    FMUL float ptr [0x005f7ba8]         ; 004c7f25 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c7f2b
    FLD float ptr [EAX + 0x8]           ; 004c7f2e
    FMUL float ptr [0x005f7ba8]         ; 004c7f31 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7f37
    LEA EBX,[ESI + 0x38]                ; 004c7f3a
    MOV EAX,EDI                         ; 004c7f3d
    FLD float ptr [EAX]                 ; 004c7f3f
    FMUL float ptr [0x005f7bac]         ; 004c7f41 | DAT_005f7bac
    FISTP dword ptr [EBX]               ; 004c7f47
    FLD float ptr [EAX + 0x4]           ; 004c7f49
    FMUL float ptr [0x005f7bac]         ; 004c7f4c | DAT_005f7bac
    FISTP dword ptr [EBX + 0x4]         ; 004c7f52
    FLD float ptr [EAX + 0x8]           ; 004c7f55
    FMUL float ptr [0x005f7bac]         ; 004c7f58 | DAT_005f7bac
    FISTP dword ptr [EBX + 0x8]         ; 004c7f5e
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c7f61
    MOV dword ptr [ESI],0x0             ; 004c7f65
    MOV dword ptr [ESI + 0x14],EAX      ; 004c7f6b
    POP EBP                             ; 004c7f6e
    POP EDI                             ; 004c7f6f
    POP ESI                             ; 004c7f70
    POP EBX                             ; 004c7f71
    RET                                 ; 004c7f72

