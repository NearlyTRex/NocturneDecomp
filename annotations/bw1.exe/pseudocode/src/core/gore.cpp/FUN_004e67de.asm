; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004e67de(float *param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006016ac
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004e67de
        ;   Label: core_gore.cpp_FUN_004e67de
    PUSH EBX                            ; 004e67e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e67e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e67e5
    FLD float ptr [EAX]                 ; 004e67e9
    FMUL float ptr [0x006016ac]         ; 004e67eb | DAT_006016ac
    FISTP dword ptr [EBX]               ; 004e67f1
    FLD float ptr [EAX + 0x4]           ; 004e67f3
    FMUL float ptr [0x006016ac]         ; 004e67f6 | DAT_006016ac
    FISTP dword ptr [EBX + 0x4]         ; 004e67fc
    FLD float ptr [EAX + 0x8]           ; 004e67ff
    FMUL float ptr [0x006016ac]         ; 004e6802 | DAT_006016ac
    FISTP dword ptr [EBX + 0x8]         ; 004e6808
    POP EBX                             ; 004e680b
    RET                                 ; 004e680c

