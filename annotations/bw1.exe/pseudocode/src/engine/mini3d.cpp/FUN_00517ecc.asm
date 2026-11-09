; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00517ecc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d224c0
;   undefined4 DAT_01d25f38
;   undefined4 DAT_01d25f3c
;   undefined4 DAT_01d25f40
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00517ecc
        ;   Label: engine_mini3d.cpp_FUN_00517ecc
    MOV EAX,dword ptr [ESP + 0x4]       ; 00517ed0
    MOV EDX,dword ptr [0x01d224c0]      ; 00517ed4 | DAT_01d224c0
    MOV dword ptr [EAX],EDX             ; 00517eda
    MOV EAX,dword ptr [ESP + 0x8]       ; 00517edc
    MOV EDX,dword ptr [0x01d25f38]      ; 00517ee0 | DAT_01d25f38
    MOV dword ptr [EAX],EDX             ; 00517ee6
    MOV EAX,dword ptr [ESP + 0xc]       ; 00517ee8
    MOV EDX,dword ptr [0x01d25f3c]      ; 00517eec | DAT_01d25f3c
    MOV dword ptr [EAX],EDX             ; 00517ef2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00517ef4
    MOV EDX,dword ptr [0x01d25f40]      ; 00517ef8 | DAT_01d25f40
    MOV dword ptr [EAX],EDX             ; 00517efe
    RET                                 ; 00517f00

