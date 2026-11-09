; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f8f9c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d0d2d8
;   undefined4 DAT_01d0d2dc
;   undefined4 DAT_01d0d2e0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004f8f9c
        ;   Label: engine_mini3d.cpp_FUN_004f8f9c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f8fa0
    MOV EDX,dword ptr [0x01d09860]      ; 004f8fa4 | DAT_01d09860
    MOV dword ptr [EAX],EDX             ; 004f8faa
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f8fac
    MOV EDX,dword ptr [0x01d0d2d8]      ; 004f8fb0 | DAT_01d0d2d8
    MOV dword ptr [EAX],EDX             ; 004f8fb6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f8fb8
    MOV EDX,dword ptr [0x01d0d2dc]      ; 004f8fbc | DAT_01d0d2dc
    MOV dword ptr [EAX],EDX             ; 004f8fc2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f8fc4
    MOV EDX,dword ptr [0x01d0d2e0]      ; 004f8fc8 | DAT_01d0d2e0
    MOV dword ptr [EAX],EDX             ; 004f8fce
    RET                                 ; 004f8fd0

