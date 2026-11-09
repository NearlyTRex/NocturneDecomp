; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f369c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d76c40
;   undefined4 DAT_01d7a6b8
;   undefined4 DAT_01d7a6bc
;   undefined4 DAT_01d7a6c0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004f369c
        ;   Label: engine_mini3d.cpp_FUN_004f369c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f36a0
    MOV EDX,dword ptr [0x01d76c40]      ; 004f36a4 | DAT_01d76c40
    MOV dword ptr [EAX],EDX             ; 004f36aa
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f36ac
    MOV EDX,dword ptr [0x01d7a6b8]      ; 004f36b0 | DAT_01d7a6b8
    MOV dword ptr [EAX],EDX             ; 004f36b6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f36b8
    MOV EDX,dword ptr [0x01d7a6bc]      ; 004f36bc | DAT_01d7a6bc
    MOV dword ptr [EAX],EDX             ; 004f36c2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f36c4
    MOV EDX,dword ptr [0x01d7a6c0]      ; 004f36c8 | DAT_01d7a6c0
    MOV dword ptr [EAX],EDX             ; 004f36ce
    RET                                 ; 004f36d0

