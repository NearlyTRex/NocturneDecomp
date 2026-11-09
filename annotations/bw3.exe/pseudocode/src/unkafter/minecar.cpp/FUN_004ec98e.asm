; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_004ec98e(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d76c90
;   undefined4 DAT_01d76c94
;   undefined4 DAT_01d76c98
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004ec98e
        ;   Label: unkafter_minecar.cpp_FUN_004ec98e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec990
    FLD float ptr [EAX]                 ; 004ec994
    FLD float ptr [EAX + 0x8]           ; 004ec996
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ec999
    MOV dword ptr [0x01d76c94],EDX      ; 004ec99c | DAT_01d76c94
    FSTP float ptr [0x01d76c98]         ; 004ec9a2 | DAT_01d76c98
    FSTP float ptr [0x01d76c90]         ; 004ec9a8 | DAT_01d76c90
    RET                                 ; 004ec9ae

